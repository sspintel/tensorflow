/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/lite/delegates/gpu/metal/kernels/custom_registry.h"

#include <vector>

#include "tensorflow/lite/delegates/gpu/common/model.h"
#include "tensorflow/lite/delegates/gpu/common/status.h"
#include "tensorflow/lite/delegates/gpu/metal/compute_task_descriptor.h"
#include "tensorflow/lite/delegates/gpu/metal/runtime_options.h"

namespace tflite {
namespace gpu {
namespace metal {

Status RegisterCustomOps(const GraphFloat32& graph, const Node* node,
                         const std::vector<ValueId>& inputs,
                         const std::vector<ValueId>& outputs,
                         const RuntimeOptions& options,
                         std::vector<ComputeTaskDescriptorPtr>* tasks) {
  return UnimplementedError("Unsupported op: " + node->operation.type);
}

}  // namespace metal
}  // namespace gpu
}  // namespace tflite
