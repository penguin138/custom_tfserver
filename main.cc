#include "tensorflow_serving/apis/prediction_service.grpc.pb.h"
#include "tensorflow_serving/apis/prediction_service.pb.h"
#include "tensorflow_serving/model_servers/server_core.h"
#include <memory>
#include <math>

using tensorflow::serving::PredictionService;
using tensorflow::serving::ServerCore;

class MyPredictionService: public PredictionService::Service {
private:
	std::unique_ptr<ServerCore> core;
	std::unique_ptr<TensorflowPredictor> predictor;
	// bool use_saved_model
public:
	grpc::Status Predict(ServerContext* context, const PredictRequest* request,
			                       PredictResponse* response) override {}
	grpc::Status GetModelMetadata(ServerContext* context,
			              const GetModelMetadataRequest* request, 
				      GetModelMetadataResponse* response) override {}
	grpc::Status Classify(ServerContext* context,
			      const ClassificationRequest* request, 
			      ClassificationResponse* response) override {}
	grpc::Status Regress(ServerContext* context,
			     const RegressionRequest* request,
		             RegressionResponse* response) override {}
	rpc::Status MultiInference(ServerContext* context,
			           const MultiInferenceRequest* request,
			           MultiInferenceResponse* response) override {}



};

int main(int argc, char** argv) {

    
}
