// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:action/Progress.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__ACTION__DETAIL__PROGRESS__BUILDER_HPP_
#define INTERFACES__ACTION__DETAIL__PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/action/detail/progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Progress_Goal_llm_response
{
public:
  explicit Init_Progress_Goal_llm_response(::interfaces::action::Progress_Goal & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Progress_Goal llm_response(::interfaces::action::Progress_Goal::_llm_response_type arg)
  {
    msg_.llm_response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Progress_Goal msg_;
};

class Init_Progress_Goal_actions
{
public:
  Init_Progress_Goal_actions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progress_Goal_llm_response actions(::interfaces::action::Progress_Goal::_actions_type arg)
  {
    msg_.actions = std::move(arg);
    return Init_Progress_Goal_llm_response(msg_);
  }

private:
  ::interfaces::action::Progress_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Progress_Goal>()
{
  return interfaces::action::builder::Init_Progress_Goal_actions();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Progress_Result_success
{
public:
  Init_Progress_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Progress_Result success(::interfaces::action::Progress_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Progress_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Progress_Result>()
{
  return interfaces::action::builder::Init_Progress_Result_success();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Progress_Feedback_status
{
public:
  Init_Progress_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Progress_Feedback status(::interfaces::action::Progress_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Progress_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Progress_Feedback>()
{
  return interfaces::action::builder::Init_Progress_Feedback_status();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Progress_SendGoal_Request_goal
{
public:
  explicit Init_Progress_SendGoal_Request_goal(::interfaces::action::Progress_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Progress_SendGoal_Request goal(::interfaces::action::Progress_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Progress_SendGoal_Request msg_;
};

class Init_Progress_SendGoal_Request_goal_id
{
public:
  Init_Progress_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progress_SendGoal_Request_goal goal_id(::interfaces::action::Progress_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Progress_SendGoal_Request_goal(msg_);
  }

private:
  ::interfaces::action::Progress_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Progress_SendGoal_Request>()
{
  return interfaces::action::builder::Init_Progress_SendGoal_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Progress_SendGoal_Response_stamp
{
public:
  explicit Init_Progress_SendGoal_Response_stamp(::interfaces::action::Progress_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Progress_SendGoal_Response stamp(::interfaces::action::Progress_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Progress_SendGoal_Response msg_;
};

class Init_Progress_SendGoal_Response_accepted
{
public:
  Init_Progress_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progress_SendGoal_Response_stamp accepted(::interfaces::action::Progress_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Progress_SendGoal_Response_stamp(msg_);
  }

private:
  ::interfaces::action::Progress_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Progress_SendGoal_Response>()
{
  return interfaces::action::builder::Init_Progress_SendGoal_Response_accepted();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Progress_GetResult_Request_goal_id
{
public:
  Init_Progress_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::action::Progress_GetResult_Request goal_id(::interfaces::action::Progress_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Progress_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Progress_GetResult_Request>()
{
  return interfaces::action::builder::Init_Progress_GetResult_Request_goal_id();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Progress_GetResult_Response_result
{
public:
  explicit Init_Progress_GetResult_Response_result(::interfaces::action::Progress_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Progress_GetResult_Response result(::interfaces::action::Progress_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Progress_GetResult_Response msg_;
};

class Init_Progress_GetResult_Response_status
{
public:
  Init_Progress_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progress_GetResult_Response_result status(::interfaces::action::Progress_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Progress_GetResult_Response_result(msg_);
  }

private:
  ::interfaces::action::Progress_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Progress_GetResult_Response>()
{
  return interfaces::action::builder::Init_Progress_GetResult_Response_status();
}

}  // namespace interfaces


namespace interfaces
{

namespace action
{

namespace builder
{

class Init_Progress_FeedbackMessage_feedback
{
public:
  explicit Init_Progress_FeedbackMessage_feedback(::interfaces::action::Progress_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::interfaces::action::Progress_FeedbackMessage feedback(::interfaces::action::Progress_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::action::Progress_FeedbackMessage msg_;
};

class Init_Progress_FeedbackMessage_goal_id
{
public:
  Init_Progress_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Progress_FeedbackMessage_feedback goal_id(::interfaces::action::Progress_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Progress_FeedbackMessage_feedback(msg_);
  }

private:
  ::interfaces::action::Progress_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::action::Progress_FeedbackMessage>()
{
  return interfaces::action::builder::Init_Progress_FeedbackMessage_goal_id();
}

}  // namespace interfaces

#endif  // INTERFACES__ACTION__DETAIL__PROGRESS__BUILDER_HPP_
