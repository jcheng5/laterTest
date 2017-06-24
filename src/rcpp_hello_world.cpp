#include <Rcpp.h>
#include <later_api.h>

class MyTask : public later::BackgroundTask {
public:
  MyTask(Rcpp::NumericVector vec) :
  inputVals(Rcpp::as<std::vector<double> >(vec)) {
  }
  
protected:
  void execute() {
    double sum = 0;
    for (std::vector<double>::const_iterator it = inputVals.begin();
      it != inputVals.end();
      it++) {
      
      sum += *it;
    }
    result = sum / inputVals.size();
  }
  
  void complete() {
    Rprintf("Result is %f", result);
  }
  
private:
  std::vector<double> inputVals;
  double result;
};

// [[Rcpp::export]]
void asyncMean(Rcpp::NumericVector data) {
  (new MyTask(data))->begin();
}

void say(void* data) {
  std::string* str = reinterpret_cast<std::string*>(data);
  Rprintf("Message: %s\n", str->c_str());
  delete str;
}

// [[Rcpp::export]]
void sayLater(std::string message, double delay) {
  std::string* str = new std::string(message);
  later::later(say, str, delay);
}