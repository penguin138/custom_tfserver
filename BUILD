SUPPORTED_TENSORFLOW_OPS = [
    "@org_tensorflow//tensorflow/contrib:contrib_kernels",
    "@org_tensorflow//tensorflow/contrib:contrib_ops_op_lib",
]

TENSORFLOW_DEPS = [
    "@org_tensorflow//tensorflow/core:tensorflow",
    "@tf_serving//tensorflow_serving/servables/tensorflow:classification_service",
    "@tf_serving//tensorflow_serving/servables/tensorflow:get_model_metadata_impl",
    "@tf_serving//tensorflow_serving/servables/tensorflow:multi_inference",
    "@tf_serving//tensorflow_serving/servables/tensorflow:regression_service",
    "@tf_serving//tensorflow_serving/servables/tensorflow:saved_model_bundle_source_adapter",
    "@tf_serving//tensorflow_serving/servables/tensorflow:session_bundle_source_adapter",
    "@tf_serving//tensorflow_serving/servables/tensorflow:predict_impl",
]
cc_binary(
    name="my_model_server",
    srcs = ["main.cc"],
    deps = [
       "@tf_serving//tensorflow_serving/model_servers:model_platform_types",
       "@tf_serving//tensorflow_serving/model_servers:platform_config_util",
       "@tf_serving//tensorflow_serving/model_servers:server_core",
       "@protobuf//:cc_wkt_protos",
       "@org_tensorflow//tensorflow/core:lib",
       "@org_tensorflow//tensorflow/core/platform/cloud:gcs_file_system",
       "@org_tensorflow//tensorflow/core/platform/hadoop:hadoop_file_system",
       "@tf_serving//tensorflow_serving/apis:prediction_service_proto",
       "@tf_serving//tensorflow_serving/config:model_server_config_proto",
       "@grpc//:grpc++",
   ] + TENSORFLOW_DEPS + SUPPORTED_TENSORFLOW_OPS,
    )
