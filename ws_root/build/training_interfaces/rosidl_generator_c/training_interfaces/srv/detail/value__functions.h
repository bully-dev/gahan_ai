// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from training_interfaces:srv/Value.idl
// generated code does not contain a copyright notice

#ifndef TRAINING_INTERFACES__SRV__DETAIL__VALUE__FUNCTIONS_H_
#define TRAINING_INTERFACES__SRV__DETAIL__VALUE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "training_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "training_interfaces/srv/detail/value__struct.h"

/// Initialize srv/Value message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * training_interfaces__srv__Value_Request
 * )) before or use
 * training_interfaces__srv__Value_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
bool
training_interfaces__srv__Value_Request__init(training_interfaces__srv__Value_Request * msg);

/// Finalize srv/Value message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
void
training_interfaces__srv__Value_Request__fini(training_interfaces__srv__Value_Request * msg);

/// Create srv/Value message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * training_interfaces__srv__Value_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
training_interfaces__srv__Value_Request *
training_interfaces__srv__Value_Request__create();

/// Destroy srv/Value message.
/**
 * It calls
 * training_interfaces__srv__Value_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
void
training_interfaces__srv__Value_Request__destroy(training_interfaces__srv__Value_Request * msg);

/// Check for srv/Value message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
bool
training_interfaces__srv__Value_Request__are_equal(const training_interfaces__srv__Value_Request * lhs, const training_interfaces__srv__Value_Request * rhs);

/// Copy a srv/Value message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
bool
training_interfaces__srv__Value_Request__copy(
  const training_interfaces__srv__Value_Request * input,
  training_interfaces__srv__Value_Request * output);

/// Initialize array of srv/Value messages.
/**
 * It allocates the memory for the number of elements and calls
 * training_interfaces__srv__Value_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
bool
training_interfaces__srv__Value_Request__Sequence__init(training_interfaces__srv__Value_Request__Sequence * array, size_t size);

/// Finalize array of srv/Value messages.
/**
 * It calls
 * training_interfaces__srv__Value_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
void
training_interfaces__srv__Value_Request__Sequence__fini(training_interfaces__srv__Value_Request__Sequence * array);

/// Create array of srv/Value messages.
/**
 * It allocates the memory for the array and calls
 * training_interfaces__srv__Value_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
training_interfaces__srv__Value_Request__Sequence *
training_interfaces__srv__Value_Request__Sequence__create(size_t size);

/// Destroy array of srv/Value messages.
/**
 * It calls
 * training_interfaces__srv__Value_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
void
training_interfaces__srv__Value_Request__Sequence__destroy(training_interfaces__srv__Value_Request__Sequence * array);

/// Check for srv/Value message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
bool
training_interfaces__srv__Value_Request__Sequence__are_equal(const training_interfaces__srv__Value_Request__Sequence * lhs, const training_interfaces__srv__Value_Request__Sequence * rhs);

/// Copy an array of srv/Value messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
bool
training_interfaces__srv__Value_Request__Sequence__copy(
  const training_interfaces__srv__Value_Request__Sequence * input,
  training_interfaces__srv__Value_Request__Sequence * output);

/// Initialize srv/Value message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * training_interfaces__srv__Value_Response
 * )) before or use
 * training_interfaces__srv__Value_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
bool
training_interfaces__srv__Value_Response__init(training_interfaces__srv__Value_Response * msg);

/// Finalize srv/Value message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
void
training_interfaces__srv__Value_Response__fini(training_interfaces__srv__Value_Response * msg);

/// Create srv/Value message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * training_interfaces__srv__Value_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
training_interfaces__srv__Value_Response *
training_interfaces__srv__Value_Response__create();

/// Destroy srv/Value message.
/**
 * It calls
 * training_interfaces__srv__Value_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
void
training_interfaces__srv__Value_Response__destroy(training_interfaces__srv__Value_Response * msg);

/// Check for srv/Value message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
bool
training_interfaces__srv__Value_Response__are_equal(const training_interfaces__srv__Value_Response * lhs, const training_interfaces__srv__Value_Response * rhs);

/// Copy a srv/Value message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
bool
training_interfaces__srv__Value_Response__copy(
  const training_interfaces__srv__Value_Response * input,
  training_interfaces__srv__Value_Response * output);

/// Initialize array of srv/Value messages.
/**
 * It allocates the memory for the number of elements and calls
 * training_interfaces__srv__Value_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
bool
training_interfaces__srv__Value_Response__Sequence__init(training_interfaces__srv__Value_Response__Sequence * array, size_t size);

/// Finalize array of srv/Value messages.
/**
 * It calls
 * training_interfaces__srv__Value_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
void
training_interfaces__srv__Value_Response__Sequence__fini(training_interfaces__srv__Value_Response__Sequence * array);

/// Create array of srv/Value messages.
/**
 * It allocates the memory for the array and calls
 * training_interfaces__srv__Value_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
training_interfaces__srv__Value_Response__Sequence *
training_interfaces__srv__Value_Response__Sequence__create(size_t size);

/// Destroy array of srv/Value messages.
/**
 * It calls
 * training_interfaces__srv__Value_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
void
training_interfaces__srv__Value_Response__Sequence__destroy(training_interfaces__srv__Value_Response__Sequence * array);

/// Check for srv/Value message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
bool
training_interfaces__srv__Value_Response__Sequence__are_equal(const training_interfaces__srv__Value_Response__Sequence * lhs, const training_interfaces__srv__Value_Response__Sequence * rhs);

/// Copy an array of srv/Value messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_training_interfaces
bool
training_interfaces__srv__Value_Response__Sequence__copy(
  const training_interfaces__srv__Value_Response__Sequence * input,
  training_interfaces__srv__Value_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TRAINING_INTERFACES__SRV__DETAIL__VALUE__FUNCTIONS_H_
