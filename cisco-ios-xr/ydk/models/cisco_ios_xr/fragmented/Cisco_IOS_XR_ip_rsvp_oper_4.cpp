
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_4.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rsvp_oper {

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::SendInfo()
    :
    sequence{YType::uint64, "sequence"}
        ,
    counters(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters>())
{
    counters->parent = this;

    yang_name = "send-info"; yang_parent_name = "direction-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::~SendInfo()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_data() const
{
    if (is_presence_container) return true;
    return sequence.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    return _children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "sequence")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::Counters()
    :
    authentication_sent{YType::uint32, "authentication-sent"},
    authentication_failures{YType::uint32, "authentication-failures"},
    authentication_send_challenges_received{YType::uint32, "authentication-send-challenges-received"},
    authentication_challenge_responses_sent{YType::uint32, "authentication-challenge-responses-sent"}
{

    yang_name = "counters"; yang_parent_name = "send-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::~Counters()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_data() const
{
    if (is_presence_container) return true;
    return authentication_sent.is_set
	|| authentication_failures.is_set
	|| authentication_send_challenges_received.is_set
	|| authentication_challenge_responses_sent.is_set;
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_sent.yfilter)
	|| ydk::is_set(authentication_failures.yfilter)
	|| ydk::is_set(authentication_send_challenges_received.yfilter)
	|| ydk::is_set(authentication_challenge_responses_sent.yfilter);
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_sent.is_set || is_set(authentication_sent.yfilter)) leaf_name_data.push_back(authentication_sent.get_name_leafdata());
    if (authentication_failures.is_set || is_set(authentication_failures.yfilter)) leaf_name_data.push_back(authentication_failures.get_name_leafdata());
    if (authentication_send_challenges_received.is_set || is_set(authentication_send_challenges_received.yfilter)) leaf_name_data.push_back(authentication_send_challenges_received.get_name_leafdata());
    if (authentication_challenge_responses_sent.is_set || is_set(authentication_challenge_responses_sent.yfilter)) leaf_name_data.push_back(authentication_challenge_responses_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-sent")
    {
        authentication_sent = value;
        authentication_sent.value_namespace = name_space;
        authentication_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-failures")
    {
        authentication_failures = value;
        authentication_failures.value_namespace = name_space;
        authentication_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-send-challenges-received")
    {
        authentication_send_challenges_received = value;
        authentication_send_challenges_received.value_namespace = name_space;
        authentication_send_challenges_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-challenge-responses-sent")
    {
        authentication_challenge_responses_sent = value;
        authentication_challenge_responses_sent.value_namespace = name_space;
        authentication_challenge_responses_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-sent")
    {
        authentication_sent.yfilter = yfilter;
    }
    if(value_path == "authentication-failures")
    {
        authentication_failures.yfilter = yfilter;
    }
    if(value_path == "authentication-send-challenges-received")
    {
        authentication_send_challenges_received.yfilter = yfilter;
    }
    if(value_path == "authentication-challenge-responses-sent")
    {
        authentication_challenge_responses_sent.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::SendInfo::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-sent" || name == "authentication-failures" || name == "authentication-send-challenges-received" || name == "authentication-challenge-responses-sent")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::ReceiveInfo()
    :
    sequence{YType::uint64, "sequence"},
    sequence_window_size{YType::uint32, "sequence-window-size"},
    sequence_window_count{YType::uint32, "sequence-window-count"}
        ,
    counters(std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters>())
    , sequence_window(this, {})
{
    counters->parent = this;

    yang_name = "receive-info"; yang_parent_name = "direction-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::~ReceiveInfo()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sequence_window.len(); index++)
    {
        if(sequence_window[index]->has_data())
            return true;
    }
    return sequence.is_set
	|| sequence_window_size.is_set
	|| sequence_window_count.is_set
	|| (counters !=  nullptr && counters->has_data());
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_operation() const
{
    for (std::size_t index=0; index<sequence_window.len(); index++)
    {
        if(sequence_window[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(sequence_window_size.yfilter)
	|| ydk::is_set(sequence_window_count.yfilter)
	|| (counters !=  nullptr && counters->has_operation());
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (sequence_window_size.is_set || is_set(sequence_window_size.yfilter)) leaf_name_data.push_back(sequence_window_size.get_name_leafdata());
    if (sequence_window_count.is_set || is_set(sequence_window_count.yfilter)) leaf_name_data.push_back(sequence_window_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "sequence-window")
    {
        auto ent_ = std::make_shared<Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::SequenceWindow>();
        ent_->parent = this;
        sequence_window.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    count_ = 0;
    for (auto ent_ : sequence_window.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-window-size")
    {
        sequence_window_size = value;
        sequence_window_size.value_namespace = name_space;
        sequence_window_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-window-count")
    {
        sequence_window_count = value;
        sequence_window_count.value_namespace = name_space;
        sequence_window_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "sequence-window-size")
    {
        sequence_window_size.yfilter = yfilter;
    }
    if(value_path == "sequence-window-count")
    {
        sequence_window_count.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "sequence-window" || name == "sequence" || name == "sequence-window-size" || name == "sequence-window-count")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::Counters()
    :
    authentication_received_valid_messages{YType::uint32, "authentication-received-valid-messages"},
    authentication_received_challenges_sent{YType::uint32, "authentication-received-challenges-sent"},
    authentication_received_challenge_response{YType::uint32, "authentication-received-challenge-response"},
    authentication_received_challenges_resent{YType::uint32, "authentication-received-challenges-resent"},
    authentication_received_challenge_timeouts{YType::uint32, "authentication-received-challenge-timeouts"},
    authentication_received_during_challenge{YType::uint32, "authentication-received-during-challenge"},
    authentication_received_incomplete{YType::uint32, "authentication-received-incomplete"},
    authentication_received_no_integrity{YType::uint32, "authentication-received-no-integrity"},
    authentication_received_bad_digest{YType::uint32, "authentication-received-bad-digest"},
    authentication_received_wrong_digest_type{YType::uint32, "authentication-received-wrong-digest-type"},
    authentication_received_sequence_number_duplicate{YType::uint32, "authentication-received-sequence-number-duplicate"},
    authentication_received_sequence_number_outof_range{YType::uint32, "authentication-received-sequence-number-outof-range"},
    authentication_received_wrong_challenges_response{YType::uint32, "authentication-received-wrong-challenges-response"},
    authentication_received_challenges_response_duplicate{YType::uint32, "authentication-received-challenges-response-duplicate"},
    authentication_received_response_late{YType::uint32, "authentication-received-response-late"},
    authentication_received_bad_message_format{YType::uint32, "authentication-received-bad-message-format"}
{

    yang_name = "counters"; yang_parent_name = "receive-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::~Counters()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_data() const
{
    if (is_presence_container) return true;
    return authentication_received_valid_messages.is_set
	|| authentication_received_challenges_sent.is_set
	|| authentication_received_challenge_response.is_set
	|| authentication_received_challenges_resent.is_set
	|| authentication_received_challenge_timeouts.is_set
	|| authentication_received_during_challenge.is_set
	|| authentication_received_incomplete.is_set
	|| authentication_received_no_integrity.is_set
	|| authentication_received_bad_digest.is_set
	|| authentication_received_wrong_digest_type.is_set
	|| authentication_received_sequence_number_duplicate.is_set
	|| authentication_received_sequence_number_outof_range.is_set
	|| authentication_received_wrong_challenges_response.is_set
	|| authentication_received_challenges_response_duplicate.is_set
	|| authentication_received_response_late.is_set
	|| authentication_received_bad_message_format.is_set;
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_received_valid_messages.yfilter)
	|| ydk::is_set(authentication_received_challenges_sent.yfilter)
	|| ydk::is_set(authentication_received_challenge_response.yfilter)
	|| ydk::is_set(authentication_received_challenges_resent.yfilter)
	|| ydk::is_set(authentication_received_challenge_timeouts.yfilter)
	|| ydk::is_set(authentication_received_during_challenge.yfilter)
	|| ydk::is_set(authentication_received_incomplete.yfilter)
	|| ydk::is_set(authentication_received_no_integrity.yfilter)
	|| ydk::is_set(authentication_received_bad_digest.yfilter)
	|| ydk::is_set(authentication_received_wrong_digest_type.yfilter)
	|| ydk::is_set(authentication_received_sequence_number_duplicate.yfilter)
	|| ydk::is_set(authentication_received_sequence_number_outof_range.yfilter)
	|| ydk::is_set(authentication_received_wrong_challenges_response.yfilter)
	|| ydk::is_set(authentication_received_challenges_response_duplicate.yfilter)
	|| ydk::is_set(authentication_received_response_late.yfilter)
	|| ydk::is_set(authentication_received_bad_message_format.yfilter);
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_received_valid_messages.is_set || is_set(authentication_received_valid_messages.yfilter)) leaf_name_data.push_back(authentication_received_valid_messages.get_name_leafdata());
    if (authentication_received_challenges_sent.is_set || is_set(authentication_received_challenges_sent.yfilter)) leaf_name_data.push_back(authentication_received_challenges_sent.get_name_leafdata());
    if (authentication_received_challenge_response.is_set || is_set(authentication_received_challenge_response.yfilter)) leaf_name_data.push_back(authentication_received_challenge_response.get_name_leafdata());
    if (authentication_received_challenges_resent.is_set || is_set(authentication_received_challenges_resent.yfilter)) leaf_name_data.push_back(authentication_received_challenges_resent.get_name_leafdata());
    if (authentication_received_challenge_timeouts.is_set || is_set(authentication_received_challenge_timeouts.yfilter)) leaf_name_data.push_back(authentication_received_challenge_timeouts.get_name_leafdata());
    if (authentication_received_during_challenge.is_set || is_set(authentication_received_during_challenge.yfilter)) leaf_name_data.push_back(authentication_received_during_challenge.get_name_leafdata());
    if (authentication_received_incomplete.is_set || is_set(authentication_received_incomplete.yfilter)) leaf_name_data.push_back(authentication_received_incomplete.get_name_leafdata());
    if (authentication_received_no_integrity.is_set || is_set(authentication_received_no_integrity.yfilter)) leaf_name_data.push_back(authentication_received_no_integrity.get_name_leafdata());
    if (authentication_received_bad_digest.is_set || is_set(authentication_received_bad_digest.yfilter)) leaf_name_data.push_back(authentication_received_bad_digest.get_name_leafdata());
    if (authentication_received_wrong_digest_type.is_set || is_set(authentication_received_wrong_digest_type.yfilter)) leaf_name_data.push_back(authentication_received_wrong_digest_type.get_name_leafdata());
    if (authentication_received_sequence_number_duplicate.is_set || is_set(authentication_received_sequence_number_duplicate.yfilter)) leaf_name_data.push_back(authentication_received_sequence_number_duplicate.get_name_leafdata());
    if (authentication_received_sequence_number_outof_range.is_set || is_set(authentication_received_sequence_number_outof_range.yfilter)) leaf_name_data.push_back(authentication_received_sequence_number_outof_range.get_name_leafdata());
    if (authentication_received_wrong_challenges_response.is_set || is_set(authentication_received_wrong_challenges_response.yfilter)) leaf_name_data.push_back(authentication_received_wrong_challenges_response.get_name_leafdata());
    if (authentication_received_challenges_response_duplicate.is_set || is_set(authentication_received_challenges_response_duplicate.yfilter)) leaf_name_data.push_back(authentication_received_challenges_response_duplicate.get_name_leafdata());
    if (authentication_received_response_late.is_set || is_set(authentication_received_response_late.yfilter)) leaf_name_data.push_back(authentication_received_response_late.get_name_leafdata());
    if (authentication_received_bad_message_format.is_set || is_set(authentication_received_bad_message_format.yfilter)) leaf_name_data.push_back(authentication_received_bad_message_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-received-valid-messages")
    {
        authentication_received_valid_messages = value;
        authentication_received_valid_messages.value_namespace = name_space;
        authentication_received_valid_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenges-sent")
    {
        authentication_received_challenges_sent = value;
        authentication_received_challenges_sent.value_namespace = name_space;
        authentication_received_challenges_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenge-response")
    {
        authentication_received_challenge_response = value;
        authentication_received_challenge_response.value_namespace = name_space;
        authentication_received_challenge_response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenges-resent")
    {
        authentication_received_challenges_resent = value;
        authentication_received_challenges_resent.value_namespace = name_space;
        authentication_received_challenges_resent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenge-timeouts")
    {
        authentication_received_challenge_timeouts = value;
        authentication_received_challenge_timeouts.value_namespace = name_space;
        authentication_received_challenge_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-during-challenge")
    {
        authentication_received_during_challenge = value;
        authentication_received_during_challenge.value_namespace = name_space;
        authentication_received_during_challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-incomplete")
    {
        authentication_received_incomplete = value;
        authentication_received_incomplete.value_namespace = name_space;
        authentication_received_incomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-no-integrity")
    {
        authentication_received_no_integrity = value;
        authentication_received_no_integrity.value_namespace = name_space;
        authentication_received_no_integrity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-bad-digest")
    {
        authentication_received_bad_digest = value;
        authentication_received_bad_digest.value_namespace = name_space;
        authentication_received_bad_digest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-wrong-digest-type")
    {
        authentication_received_wrong_digest_type = value;
        authentication_received_wrong_digest_type.value_namespace = name_space;
        authentication_received_wrong_digest_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-sequence-number-duplicate")
    {
        authentication_received_sequence_number_duplicate = value;
        authentication_received_sequence_number_duplicate.value_namespace = name_space;
        authentication_received_sequence_number_duplicate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-sequence-number-outof-range")
    {
        authentication_received_sequence_number_outof_range = value;
        authentication_received_sequence_number_outof_range.value_namespace = name_space;
        authentication_received_sequence_number_outof_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-wrong-challenges-response")
    {
        authentication_received_wrong_challenges_response = value;
        authentication_received_wrong_challenges_response.value_namespace = name_space;
        authentication_received_wrong_challenges_response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-challenges-response-duplicate")
    {
        authentication_received_challenges_response_duplicate = value;
        authentication_received_challenges_response_duplicate.value_namespace = name_space;
        authentication_received_challenges_response_duplicate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-response-late")
    {
        authentication_received_response_late = value;
        authentication_received_response_late.value_namespace = name_space;
        authentication_received_response_late.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-received-bad-message-format")
    {
        authentication_received_bad_message_format = value;
        authentication_received_bad_message_format.value_namespace = name_space;
        authentication_received_bad_message_format.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-received-valid-messages")
    {
        authentication_received_valid_messages.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenges-sent")
    {
        authentication_received_challenges_sent.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenge-response")
    {
        authentication_received_challenge_response.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenges-resent")
    {
        authentication_received_challenges_resent.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenge-timeouts")
    {
        authentication_received_challenge_timeouts.yfilter = yfilter;
    }
    if(value_path == "authentication-received-during-challenge")
    {
        authentication_received_during_challenge.yfilter = yfilter;
    }
    if(value_path == "authentication-received-incomplete")
    {
        authentication_received_incomplete.yfilter = yfilter;
    }
    if(value_path == "authentication-received-no-integrity")
    {
        authentication_received_no_integrity.yfilter = yfilter;
    }
    if(value_path == "authentication-received-bad-digest")
    {
        authentication_received_bad_digest.yfilter = yfilter;
    }
    if(value_path == "authentication-received-wrong-digest-type")
    {
        authentication_received_wrong_digest_type.yfilter = yfilter;
    }
    if(value_path == "authentication-received-sequence-number-duplicate")
    {
        authentication_received_sequence_number_duplicate.yfilter = yfilter;
    }
    if(value_path == "authentication-received-sequence-number-outof-range")
    {
        authentication_received_sequence_number_outof_range.yfilter = yfilter;
    }
    if(value_path == "authentication-received-wrong-challenges-response")
    {
        authentication_received_wrong_challenges_response.yfilter = yfilter;
    }
    if(value_path == "authentication-received-challenges-response-duplicate")
    {
        authentication_received_challenges_response_duplicate.yfilter = yfilter;
    }
    if(value_path == "authentication-received-response-late")
    {
        authentication_received_response_late.yfilter = yfilter;
    }
    if(value_path == "authentication-received-bad-message-format")
    {
        authentication_received_bad_message_format.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-received-valid-messages" || name == "authentication-received-challenges-sent" || name == "authentication-received-challenge-response" || name == "authentication-received-challenges-resent" || name == "authentication-received-challenge-timeouts" || name == "authentication-received-during-challenge" || name == "authentication-received-incomplete" || name == "authentication-received-no-integrity" || name == "authentication-received-bad-digest" || name == "authentication-received-wrong-digest-type" || name == "authentication-received-sequence-number-duplicate" || name == "authentication-received-sequence-number-outof-range" || name == "authentication-received-wrong-challenges-response" || name == "authentication-received-challenges-response-duplicate" || name == "authentication-received-response-late" || name == "authentication-received-bad-message-format")
        return true;
    return false;
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::SequenceWindow::SequenceWindow()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "sequence-window"; yang_parent_name = "receive-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::SequenceWindow::~SequenceWindow()
{
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::SequenceWindow::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::SequenceWindow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::SequenceWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-window";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::SequenceWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::SequenceWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::SequenceWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::SequenceWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::SequenceWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Rsvp::AuthenticationDetails::AuthenticationDetail::DirectionInfo::ReceiveInfo::SequenceWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBriefs()
    :
    rsb_brief(this, {})
{

    yang_name = "rsb-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::~RsbBriefs()
{
}

bool Rsvp::RsbBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsb_brief.len(); index++)
    {
        if(rsb_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::RsbBriefs::has_operation() const
{
    for (std::size_t index=0; index<rsb_brief.len(); index++)
    {
        if(rsb_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::RsbBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsb-brief")
    {
        auto ent_ = std::make_shared<Rsvp::RsbBriefs::RsbBrief>();
        ent_->parent = this;
        rsb_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsb_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::RsbBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RsbBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RsbBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsb-brief")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::RsbBrief()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint32, "destination-port"},
    protocol{YType::uint32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    p2mp_id{YType::uint32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint32, "source-port"},
    sub_group_origin{YType::str, "sub-group-origin"},
    sub_group_id{YType::uint32, "sub-group-id"},
    vrf_name{YType::str, "vrf-name"},
    input_interface{YType::str, "input-interface"}
        ,
    session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session>())
    , s2l_sub_lsp(std::make_shared<Rsvp::RsbBriefs::RsbBrief::S2lSubLsp>())
    , flow_spec(std::make_shared<Rsvp::RsbBriefs::RsbBrief::FlowSpec>())
    , generic_flow_spec(std::make_shared<Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec>())
    , style(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Style>())
    , filter(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter>())
{
    session->parent = this;
    s2l_sub_lsp->parent = this;
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    style->parent = this;
    filter->parent = this;

    yang_name = "rsb-brief"; yang_parent_name = "rsb-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::~RsbBrief()
{
}

bool Rsvp::RsbBriefs::RsbBrief::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set
	|| extended_tunnel_id.is_set
	|| session_type.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_origin.is_set
	|| sub_group_id.is_set
	|| vrf_name.is_set
	|| input_interface.is_set
	|| (session !=  nullptr && session->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (style !=  nullptr && style->has_data())
	|| (filter !=  nullptr && filter->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (style !=  nullptr && style->has_operation())
	|| (filter !=  nullptr && filter->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-brief";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (input_interface.is_set || is_set(input_interface.yfilter)) leaf_name_data.push_back(input_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session>();
        }
        return session;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::RsbBriefs::RsbBrief::S2lSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<Rsvp::RsbBriefs::RsbBrief::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "style")
    {
        if(style == nullptr)
        {
            style = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Style>();
        }
        return style;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter>();
        }
        return filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(s2l_sub_lsp != nullptr)
    {
        _children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(flow_spec != nullptr)
    {
        _children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        _children["generic-flow-spec"] = generic_flow_spec;
    }

    if(style != nullptr)
    {
        _children["style"] = style;
    }

    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-interface")
    {
        input_interface = value;
        input_interface.value_namespace = name_space;
        input_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "s2l-sub-lsp" || name == "flow-spec" || name == "generic-flow-spec" || name == "style" || name == "filter" || name == "destination-address" || name == "destination-port" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "p2mp-id" || name == "source-address" || name == "source-port" || name == "sub-group-origin" || name == "sub-group-id" || name == "vrf-name" || name == "input-interface")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::Session::~Session()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_session != nullptr)
    {
        _children["rsvp-session"] = rsvp_session;
    }

    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RsbBriefs::RsbBrief::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
        ,
    ipv4(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4>())
    , ipv4_lsp_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession>())
    , ipv4_uni_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession>())
    , ipv4_p2mp_lsp_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_uni_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::has_data() const
{
    if (is_presence_container) return true;
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        _children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        _children["ipv4-uni-session"] = ipv4_uni_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        _children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-uni-session" || name == "ipv4-p2mp-lsp-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::uint8, "protocol"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| protocol.is_set
	|| destination_port.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "protocol" || name == "destination-port")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::Ipv4P2mpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::~Ipv4P2mpLspSession()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_data() const
{
    if (is_presence_container) return true;
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::S2lSubLsp::S2lSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::S2lSubLsp::~S2lSubLsp()
{
}

bool Rsvp::RsbBriefs::RsbBrief::S2lSubLsp::has_data() const
{
    if (is_presence_container) return true;
    return s2l_destination_address.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::S2lSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::S2lSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::S2lSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::S2lSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::S2lSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::S2lSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::S2lSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::S2lSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::S2lSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"},
    flow_qos{YType::enumeration, "flow-qos"}
{

    yang_name = "flow-spec"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::FlowSpec::~FlowSpec()
{
}

bool Rsvp::RsbBriefs::RsbBrief::FlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_peak_rate.is_set
	|| flow_min_unit.is_set
	|| flow_max_unit.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set
	|| flow_qos.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_average_rate.yfilter)
	|| ydk::is_set(flow_max_burst.yfilter)
	|| ydk::is_set(flow_peak_rate.yfilter)
	|| ydk::is_set(flow_min_unit.yfilter)
	|| ydk::is_set(flow_max_unit.yfilter)
	|| ydk::is_set(flow_requested_rate.yfilter)
	|| ydk::is_set(flow_slack.yfilter)
	|| ydk::is_set(flow_qos.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.yfilter)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.yfilter)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.yfilter)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.yfilter)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.yfilter)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.yfilter)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.yfilter)) leaf_name_data.push_back(flow_slack.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.yfilter)) leaf_name_data.push_back(flow_qos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate = value;
        flow_average_rate.value_namespace = name_space;
        flow_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst = value;
        flow_max_burst.value_namespace = name_space;
        flow_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
        flow_peak_rate.value_namespace = name_space;
        flow_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
        flow_min_unit.value_namespace = name_space;
        flow_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
        flow_max_unit.value_namespace = name_space;
        flow_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate = value;
        flow_requested_rate.value_namespace = name_space;
        flow_requested_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-slack")
    {
        flow_slack = value;
        flow_slack.value_namespace = name_space;
        flow_slack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-qos")
    {
        flow_qos = value;
        flow_qos.value_namespace = name_space;
        flow_qos.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate.yfilter = yfilter;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst.yfilter = yfilter;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate.yfilter = yfilter;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit.yfilter = yfilter;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit.yfilter = yfilter;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate.yfilter = yfilter;
    }
    if(value_path == "flow-slack")
    {
        flow_slack.yfilter = yfilter;
    }
    if(value_path == "flow-qos")
    {
        flow_qos.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-peak-rate" || name == "flow-min-unit" || name == "flow-max-unit" || name == "flow-requested-rate" || name == "flow-slack" || name == "flow-qos")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
        ,
    g709otn_flow_spec(std::make_shared<Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::~GenericFlowSpec()
{
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(g709otn_flow_spec != nullptr)
    {
        _children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::G709otnFlowSpec()
    :
    flow_signal_type{YType::uint8, "flow-signal-type"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_bit_rate{YType::uint64, "flow-bit-rate"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::~G709otnFlowSpec()
{
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_signal_type.is_set
	|| flow_nvc.is_set
	|| flow_multiplier.is_set
	|| flow_bit_rate.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_signal_type.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
        flow_signal_type.value_namespace = name_space;
        flow_signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
        flow_nvc.value_namespace = name_space;
        flow_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
        flow_multiplier.value_namespace = name_space;
        flow_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
        flow_bit_rate.value_namespace = name_space;
        flow_bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-signal-type")
    {
        flow_signal_type.yfilter = yfilter;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc.yfilter = yfilter;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier.yfilter = yfilter;
    }
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::GenericFlowSpec::G709otnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-signal-type" || name == "flow-nvc" || name == "flow-multiplier" || name == "flow-bit-rate")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{

    yang_name = "style"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::Style::~Style()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Style::has_data() const
{
    if (is_presence_container) return true;
    return reservation_type.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Style::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_type.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Style::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Style::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.yfilter)) leaf_name_data.push_back(reservation_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::Style::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::Style::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
        reservation_type.value_namespace = name_space;
        reservation_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Style::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-type")
    {
        reservation_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Style::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reservation-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::Filter()
    :
    rsvp_filter(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "filter"; yang_parent_name = "rsb-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::Filter::~Filter()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_filter != nullptr)
    {
        _children["rsvp-filter"] = rsvp_filter;
    }

    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RsbBriefs::RsbBrief::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
        ,
    udp_ipv4_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session>())
    , p2mp_ipv4_session(std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session>())
{
    udp_ipv4_session->parent = this;
    p2mp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_data() const
{
    if (is_presence_container) return true;
    return filter_type.is_set
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data());
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation());
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp_ipv4_session != nullptr)
    {
        _children["udp-ipv4-session"] = udp_ipv4_session;
    }

    if(p2mp_ipv4_session != nullptr)
    {
        _children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-ipv4-session" || name == "p2mp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::P2mpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::~P2mpIpv4Session()
{
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/rsb-briefs/rsb-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::RsbBriefs::RsbBrief::Filter::RsvpFilter::P2mpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port" || name == "p2mp-sub-group-origin" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::Counters::Counters()
    :
    interface_messages(std::make_shared<Rsvp::Counters::InterfaceMessages>())
    , message_summary(std::make_shared<Rsvp::Counters::MessageSummary>())
    , prefix_filtering(std::make_shared<Rsvp::Counters::PrefixFiltering>())
    , out_of_resource(std::make_shared<Rsvp::Counters::OutOfResource>())
    , interface_events(std::make_shared<Rsvp::Counters::InterfaceEvents>())
    , nsr(std::make_shared<Rsvp::Counters::Nsr>())
    , issu(std::make_shared<Rsvp::Counters::Issu>())
    , database(std::make_shared<Rsvp::Counters::Database>())
    , event_syncs(std::make_shared<Rsvp::Counters::EventSyncs>())
{
    interface_messages->parent = this;
    message_summary->parent = this;
    prefix_filtering->parent = this;
    out_of_resource->parent = this;
    interface_events->parent = this;
    nsr->parent = this;
    issu->parent = this;
    database->parent = this;
    event_syncs->parent = this;

    yang_name = "counters"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::~Counters()
{
}

bool Rsvp::Counters::has_data() const
{
    if (is_presence_container) return true;
    return (interface_messages !=  nullptr && interface_messages->has_data())
	|| (message_summary !=  nullptr && message_summary->has_data())
	|| (prefix_filtering !=  nullptr && prefix_filtering->has_data())
	|| (out_of_resource !=  nullptr && out_of_resource->has_data())
	|| (interface_events !=  nullptr && interface_events->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (database !=  nullptr && database->has_data())
	|| (event_syncs !=  nullptr && event_syncs->has_data());
}

bool Rsvp::Counters::has_operation() const
{
    return is_set(yfilter)
	|| (interface_messages !=  nullptr && interface_messages->has_operation())
	|| (message_summary !=  nullptr && message_summary->has_operation())
	|| (prefix_filtering !=  nullptr && prefix_filtering->has_operation())
	|| (out_of_resource !=  nullptr && out_of_resource->has_operation())
	|| (interface_events !=  nullptr && interface_events->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (database !=  nullptr && database->has_operation())
	|| (event_syncs !=  nullptr && event_syncs->has_operation());
}

std::string Rsvp::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-messages")
    {
        if(interface_messages == nullptr)
        {
            interface_messages = std::make_shared<Rsvp::Counters::InterfaceMessages>();
        }
        return interface_messages;
    }

    if(child_yang_name == "message-summary")
    {
        if(message_summary == nullptr)
        {
            message_summary = std::make_shared<Rsvp::Counters::MessageSummary>();
        }
        return message_summary;
    }

    if(child_yang_name == "prefix-filtering")
    {
        if(prefix_filtering == nullptr)
        {
            prefix_filtering = std::make_shared<Rsvp::Counters::PrefixFiltering>();
        }
        return prefix_filtering;
    }

    if(child_yang_name == "out-of-resource")
    {
        if(out_of_resource == nullptr)
        {
            out_of_resource = std::make_shared<Rsvp::Counters::OutOfResource>();
        }
        return out_of_resource;
    }

    if(child_yang_name == "interface-events")
    {
        if(interface_events == nullptr)
        {
            interface_events = std::make_shared<Rsvp::Counters::InterfaceEvents>();
        }
        return interface_events;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<Rsvp::Counters::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<Rsvp::Counters::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Rsvp::Counters::Database>();
        }
        return database;
    }

    if(child_yang_name == "event-syncs")
    {
        if(event_syncs == nullptr)
        {
            event_syncs = std::make_shared<Rsvp::Counters::EventSyncs>();
        }
        return event_syncs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_messages != nullptr)
    {
        _children["interface-messages"] = interface_messages;
    }

    if(message_summary != nullptr)
    {
        _children["message-summary"] = message_summary;
    }

    if(prefix_filtering != nullptr)
    {
        _children["prefix-filtering"] = prefix_filtering;
    }

    if(out_of_resource != nullptr)
    {
        _children["out-of-resource"] = out_of_resource;
    }

    if(interface_events != nullptr)
    {
        _children["interface-events"] = interface_events;
    }

    if(nsr != nullptr)
    {
        _children["nsr"] = nsr;
    }

    if(issu != nullptr)
    {
        _children["issu"] = issu;
    }

    if(database != nullptr)
    {
        _children["database"] = database;
    }

    if(event_syncs != nullptr)
    {
        _children["event-syncs"] = event_syncs;
    }

    return _children;
}

void Rsvp::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-messages" || name == "message-summary" || name == "prefix-filtering" || name == "out-of-resource" || name == "interface-events" || name == "nsr" || name == "issu" || name == "database" || name == "event-syncs")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessages()
    :
    interface_message(this, {"interface_name"})
{

    yang_name = "interface-messages"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::InterfaceMessages::~InterfaceMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_message.len(); index++)
    {
        if(interface_message[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::InterfaceMessages::has_operation() const
{
    for (std::size_t index=0; index<interface_message.len(); index++)
    {
        if(interface_message[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::InterfaceMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::InterfaceMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-message")
    {
        auto ent_ = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage>();
        ent_->parent = this;
        interface_message.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::InterfaceMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_message.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::Counters::InterfaceMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::InterfaceMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::InterfaceMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-message")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::InterfaceMessage()
    :
    interface_name{YType::str, "interface-name"},
    retransmitted_messages{YType::uint32, "retransmitted-messages"},
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    rate_limited_messages{YType::uint32, "rate-limited-messages"}
        ,
    received_messages(std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages>())
    , transmitted_messages(std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages>())
    , bundle_received_messages(std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages>())
    , bundle_transmitted_messages(std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages>())
{
    received_messages->parent = this;
    transmitted_messages->parent = this;
    bundle_received_messages->parent = this;
    bundle_transmitted_messages->parent = this;

    yang_name = "interface-message"; yang_parent_name = "interface-messages"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::~InterfaceMessage()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| retransmitted_messages.is_set
	|| out_of_order_messages.is_set
	|| rate_limited_messages.is_set
	|| (received_messages !=  nullptr && received_messages->has_data())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_data())
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_data())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_data());
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(retransmitted_messages.yfilter)
	|| ydk::is_set(out_of_order_messages.yfilter)
	|| ydk::is_set(rate_limited_messages.yfilter)
	|| (received_messages !=  nullptr && received_messages->has_operation())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_operation())
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_operation())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_operation());
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/interface-messages/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-message";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (retransmitted_messages.is_set || is_set(retransmitted_messages.yfilter)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());
    if (out_of_order_messages.is_set || is_set(out_of_order_messages.yfilter)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-messages")
    {
        if(received_messages == nullptr)
        {
            received_messages = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages>();
        }
        return received_messages;
    }

    if(child_yang_name == "transmitted-messages")
    {
        if(transmitted_messages == nullptr)
        {
            transmitted_messages = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages>();
        }
        return transmitted_messages;
    }

    if(child_yang_name == "bundle-received-messages")
    {
        if(bundle_received_messages == nullptr)
        {
            bundle_received_messages = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages>();
        }
        return bundle_received_messages;
    }

    if(child_yang_name == "bundle-transmitted-messages")
    {
        if(bundle_transmitted_messages == nullptr)
        {
            bundle_transmitted_messages = std::make_shared<Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages>();
        }
        return bundle_transmitted_messages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(received_messages != nullptr)
    {
        _children["received-messages"] = received_messages;
    }

    if(transmitted_messages != nullptr)
    {
        _children["transmitted-messages"] = transmitted_messages;
    }

    if(bundle_received_messages != nullptr)
    {
        _children["bundle-received-messages"] = bundle_received_messages;
    }

    if(bundle_transmitted_messages != nullptr)
    {
        _children["bundle-transmitted-messages"] = bundle_transmitted_messages;
    }

    return _children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages = value;
        retransmitted_messages.value_namespace = name_space;
        retransmitted_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages = value;
        out_of_order_messages.value_namespace = name_space;
        out_of_order_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
        rate_limited_messages.value_namespace = name_space;
        rate_limited_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages.yfilter = yfilter;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages.yfilter = yfilter;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-messages" || name == "transmitted-messages" || name == "bundle-received-messages" || name == "bundle-transmitted-messages" || name == "interface-name" || name == "retransmitted-messages" || name == "out-of-order-messages" || name == "rate-limited-messages")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::ReceivedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "received-messages"; yang_parent_name = "interface-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::~ReceivedMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::ReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::TransmittedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "transmitted-messages"; yang_parent_name = "interface-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::~TransmittedMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::TransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::BundleReceivedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "bundle-received-messages"; yang_parent_name = "interface-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::~BundleReceivedMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::BundleTransmittedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "bundle-transmitted-messages"; yang_parent_name = "interface-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::~BundleTransmittedMessages()
{
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceMessages::InterfaceMessage::BundleTransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::MessageSummary()
    :
    retransmitted_messages{YType::uint32, "retransmitted-messages"},
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    rate_limited_messages{YType::uint32, "rate-limited-messages"}
        ,
    received_messages(std::make_shared<Rsvp::Counters::MessageSummary::ReceivedMessages>())
    , transmitted_messages(std::make_shared<Rsvp::Counters::MessageSummary::TransmittedMessages>())
    , bundle_received_messages(std::make_shared<Rsvp::Counters::MessageSummary::BundleReceivedMessages>())
    , bundle_transmitted_messages(std::make_shared<Rsvp::Counters::MessageSummary::BundleTransmittedMessages>())
{
    received_messages->parent = this;
    transmitted_messages->parent = this;
    bundle_received_messages->parent = this;
    bundle_transmitted_messages->parent = this;

    yang_name = "message-summary"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::MessageSummary::~MessageSummary()
{
}

bool Rsvp::Counters::MessageSummary::has_data() const
{
    if (is_presence_container) return true;
    return retransmitted_messages.is_set
	|| out_of_order_messages.is_set
	|| rate_limited_messages.is_set
	|| (received_messages !=  nullptr && received_messages->has_data())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_data())
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_data())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_data());
}

bool Rsvp::Counters::MessageSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retransmitted_messages.yfilter)
	|| ydk::is_set(out_of_order_messages.yfilter)
	|| ydk::is_set(rate_limited_messages.yfilter)
	|| (received_messages !=  nullptr && received_messages->has_operation())
	|| (transmitted_messages !=  nullptr && transmitted_messages->has_operation())
	|| (bundle_received_messages !=  nullptr && bundle_received_messages->has_operation())
	|| (bundle_transmitted_messages !=  nullptr && bundle_transmitted_messages->has_operation());
}

std::string Rsvp::Counters::MessageSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retransmitted_messages.is_set || is_set(retransmitted_messages.yfilter)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());
    if (out_of_order_messages.is_set || is_set(out_of_order_messages.yfilter)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (rate_limited_messages.is_set || is_set(rate_limited_messages.yfilter)) leaf_name_data.push_back(rate_limited_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::MessageSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-messages")
    {
        if(received_messages == nullptr)
        {
            received_messages = std::make_shared<Rsvp::Counters::MessageSummary::ReceivedMessages>();
        }
        return received_messages;
    }

    if(child_yang_name == "transmitted-messages")
    {
        if(transmitted_messages == nullptr)
        {
            transmitted_messages = std::make_shared<Rsvp::Counters::MessageSummary::TransmittedMessages>();
        }
        return transmitted_messages;
    }

    if(child_yang_name == "bundle-received-messages")
    {
        if(bundle_received_messages == nullptr)
        {
            bundle_received_messages = std::make_shared<Rsvp::Counters::MessageSummary::BundleReceivedMessages>();
        }
        return bundle_received_messages;
    }

    if(child_yang_name == "bundle-transmitted-messages")
    {
        if(bundle_transmitted_messages == nullptr)
        {
            bundle_transmitted_messages = std::make_shared<Rsvp::Counters::MessageSummary::BundleTransmittedMessages>();
        }
        return bundle_transmitted_messages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::MessageSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(received_messages != nullptr)
    {
        _children["received-messages"] = received_messages;
    }

    if(transmitted_messages != nullptr)
    {
        _children["transmitted-messages"] = transmitted_messages;
    }

    if(bundle_received_messages != nullptr)
    {
        _children["bundle-received-messages"] = bundle_received_messages;
    }

    if(bundle_transmitted_messages != nullptr)
    {
        _children["bundle-transmitted-messages"] = bundle_transmitted_messages;
    }

    return _children;
}

void Rsvp::Counters::MessageSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages = value;
        retransmitted_messages.value_namespace = name_space;
        retransmitted_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages = value;
        out_of_order_messages.value_namespace = name_space;
        out_of_order_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages = value;
        rate_limited_messages.value_namespace = name_space;
        rate_limited_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages.yfilter = yfilter;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages.yfilter = yfilter;
    }
    if(value_path == "rate-limited-messages")
    {
        rate_limited_messages.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-messages" || name == "transmitted-messages" || name == "bundle-received-messages" || name == "bundle-transmitted-messages" || name == "retransmitted-messages" || name == "out-of-order-messages" || name == "rate-limited-messages")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::ReceivedMessages::ReceivedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "received-messages"; yang_parent_name = "message-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::MessageSummary::ReceivedMessages::~ReceivedMessages()
{
}

bool Rsvp::Counters::MessageSummary::ReceivedMessages::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::MessageSummary::ReceivedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::MessageSummary::ReceivedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::ReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::ReceivedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::MessageSummary::ReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::MessageSummary::ReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::MessageSummary::ReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::ReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::ReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::TransmittedMessages::TransmittedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "transmitted-messages"; yang_parent_name = "message-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::MessageSummary::TransmittedMessages::~TransmittedMessages()
{
}

bool Rsvp::Counters::MessageSummary::TransmittedMessages::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::MessageSummary::TransmittedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::MessageSummary::TransmittedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::TransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::TransmittedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::MessageSummary::TransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::MessageSummary::TransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::MessageSummary::TransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::TransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::TransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::BundleReceivedMessages::BundleReceivedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "bundle-received-messages"; yang_parent_name = "message-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::MessageSummary::BundleReceivedMessages::~BundleReceivedMessages()
{
}

bool Rsvp::Counters::MessageSummary::BundleReceivedMessages::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::MessageSummary::BundleReceivedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-received-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::MessageSummary::BundleReceivedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::MessageSummary::BundleReceivedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::BundleReceivedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::BundleReceivedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::MessageSummary::BundleTransmittedMessages::BundleTransmittedMessages()
    :
    path{YType::uint32, "path"},
    reservation{YType::uint32, "reservation"},
    path_error{YType::uint32, "path-error"},
    reservation_error{YType::uint32, "reservation-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation_tear{YType::uint32, "reservation-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    bundle{YType::uint32, "bundle"},
    ack{YType::uint32, "ack"},
    srefresh{YType::uint32, "srefresh"},
    hello{YType::uint32, "hello"},
    challenge{YType::uint32, "challenge"},
    response{YType::uint32, "response"}
{

    yang_name = "bundle-transmitted-messages"; yang_parent_name = "message-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::MessageSummary::BundleTransmittedMessages::~BundleTransmittedMessages()
{
}

bool Rsvp::Counters::MessageSummary::BundleTransmittedMessages::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| reservation.is_set
	|| path_error.is_set
	|| reservation_error.is_set
	|| path_tear.is_set
	|| reservation_tear.is_set
	|| reservation_confirm.is_set
	|| bundle.is_set
	|| ack.is_set
	|| srefresh.is_set
	|| hello.is_set
	|| challenge.is_set
	|| response.is_set;
}

bool Rsvp::Counters::MessageSummary::BundleTransmittedMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(reservation.yfilter)
	|| ydk::is_set(path_error.yfilter)
	|| ydk::is_set(reservation_error.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(bundle.yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(srefresh.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(response.yfilter);
}

std::string Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/message-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-transmitted-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.yfilter)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.yfilter)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.yfilter)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.yfilter)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.yfilter)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.yfilter)) leaf_name_data.push_back(srefresh.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (response.is_set || is_set(response.yfilter)) leaf_name_data.push_back(response.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::MessageSummary::BundleTransmittedMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::MessageSummary::BundleTransmittedMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation")
    {
        reservation = value;
        reservation.value_namespace = name_space;
        reservation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-error")
    {
        path_error = value;
        path_error.value_namespace = name_space;
        path_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
        reservation_error.value_namespace = name_space;
        reservation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
        reservation_tear.value_namespace = name_space;
        reservation_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle")
    {
        bundle = value;
        bundle.value_namespace = name_space;
        bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
        srefresh.value_namespace = name_space;
        srefresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response")
    {
        response = value;
        response.value_namespace = name_space;
        response.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::MessageSummary::BundleTransmittedMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "reservation")
    {
        reservation.yfilter = yfilter;
    }
    if(value_path == "path-error")
    {
        path_error.yfilter = yfilter;
    }
    if(value_path == "reservation-error")
    {
        reservation_error.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "bundle")
    {
        bundle.yfilter = yfilter;
    }
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "srefresh")
    {
        srefresh.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "response")
    {
        response.yfilter = yfilter;
    }
}

bool Rsvp::Counters::MessageSummary::BundleTransmittedMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "reservation" || name == "path-error" || name == "reservation-error" || name == "path-tear" || name == "reservation-tear" || name == "reservation-confirm" || name == "bundle" || name == "ack" || name == "srefresh" || name == "hello" || name == "challenge" || name == "response")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::PrefixFiltering()
    :
    accesses(std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses>())
    , interfaces(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces>())
{
    accesses->parent = this;
    interfaces->parent = this;

    yang_name = "prefix-filtering"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::~PrefixFiltering()
{
}

bool Rsvp::Counters::PrefixFiltering::has_data() const
{
    if (is_presence_container) return true;
    return (accesses !=  nullptr && accesses->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Rsvp::Counters::PrefixFiltering::has_operation() const
{
    return is_set(yfilter)
	|| (accesses !=  nullptr && accesses->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Rsvp::Counters::PrefixFiltering::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filtering";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accesses")
    {
        if(accesses == nullptr)
        {
            accesses = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses>();
        }
        return accesses;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accesses != nullptr)
    {
        _children["accesses"] = accesses;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Rsvp::Counters::PrefixFiltering::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::PrefixFiltering::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::PrefixFiltering::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accesses" || name == "interfaces")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Accesses()
    :
    access(this, {"access_list_name"})
{

    yang_name = "accesses"; yang_parent_name = "prefix-filtering"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::Accesses::~Accesses()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access.len(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::PrefixFiltering::Accesses::has_operation() const
{
    for (std::size_t index=0; index<access.len(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        auto ent_ = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access>();
        ent_->parent = this;
        access.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Accesses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::PrefixFiltering::Accesses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Access()
    :
    access_list_name{YType::str, "access-list-name"}
        ,
    forwarded(std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded>())
    , locally_destined(std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined>())
    , dropped(std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped>())
    , total(std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::Total>())
{
    forwarded->parent = this;
    locally_destined->parent = this;
    dropped->parent = this;
    total->parent = this;

    yang_name = "access"; yang_parent_name = "accesses"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::~Access()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::has_data() const
{
    if (is_presence_container) return true;
    return access_list_name.is_set
	|| (forwarded !=  nullptr && forwarded->has_data())
	|| (locally_destined !=  nullptr && locally_destined->has_data())
	|| (dropped !=  nullptr && dropped->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| (forwarded !=  nullptr && forwarded->has_operation())
	|| (locally_destined !=  nullptr && locally_destined->has_operation())
	|| (dropped !=  nullptr && dropped->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::Access::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/accesses/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";
    ADD_KEY_TOKEN(access_list_name, "access-list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::Access::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Accesses::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarded")
    {
        if(forwarded == nullptr)
        {
            forwarded = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded>();
        }
        return forwarded;
    }

    if(child_yang_name == "locally-destined")
    {
        if(locally_destined == nullptr)
        {
            locally_destined = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined>();
        }
        return locally_destined;
    }

    if(child_yang_name == "dropped")
    {
        if(dropped == nullptr)
        {
            dropped = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped>();
        }
        return dropped;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Rsvp::Counters::PrefixFiltering::Accesses::Access::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Accesses::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarded != nullptr)
    {
        _children["forwarded"] = forwarded;
    }

    if(locally_destined != nullptr)
    {
        _children["locally-destined"] = locally_destined;
    }

    if(dropped != nullptr)
    {
        _children["dropped"] = dropped;
    }

    if(total != nullptr)
    {
        _children["total"] = total;
    }

    return _children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarded" || name == "locally-destined" || name == "dropped" || name == "total" || name == "access-list-name")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::Forwarded()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "forwarded"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::~Forwarded()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Forwarded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::LocallyDestined()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "locally-destined"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::~LocallyDestined()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locally-destined";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::Dropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "dropped"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::~Dropped()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Dropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::Total()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "total"; yang_parent_name = "access"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::~Total()
{
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Accesses::Access::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces()
    :
    summary(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary>())
    , interfaces(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_>())
{
    summary->parent = this;
    interfaces->parent = this;

    yang_name = "interfaces"; yang_parent_name = "prefix-filtering"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::~Interfaces()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::PrefixFiltering::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "interfaces")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Summary()
    :
    forwarded(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded>())
    , locally_destined(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined>())
    , dropped(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped>())
    , default_action_dropped(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped>())
    , default_action_processed(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed>())
    , total(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total>())
{
    forwarded->parent = this;
    locally_destined->parent = this;
    dropped->parent = this;
    default_action_dropped->parent = this;
    default_action_processed->parent = this;
    total->parent = this;

    yang_name = "summary"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::~Summary()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::has_data() const
{
    if (is_presence_container) return true;
    return (forwarded !=  nullptr && forwarded->has_data())
	|| (locally_destined !=  nullptr && locally_destined->has_data())
	|| (dropped !=  nullptr && dropped->has_data())
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_data())
	|| (default_action_processed !=  nullptr && default_action_processed->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (forwarded !=  nullptr && forwarded->has_operation())
	|| (locally_destined !=  nullptr && locally_destined->has_operation())
	|| (dropped !=  nullptr && dropped->has_operation())
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_operation())
	|| (default_action_processed !=  nullptr && default_action_processed->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarded")
    {
        if(forwarded == nullptr)
        {
            forwarded = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded>();
        }
        return forwarded;
    }

    if(child_yang_name == "locally-destined")
    {
        if(locally_destined == nullptr)
        {
            locally_destined = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined>();
        }
        return locally_destined;
    }

    if(child_yang_name == "dropped")
    {
        if(dropped == nullptr)
        {
            dropped = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped>();
        }
        return dropped;
    }

    if(child_yang_name == "default-action-dropped")
    {
        if(default_action_dropped == nullptr)
        {
            default_action_dropped = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped>();
        }
        return default_action_dropped;
    }

    if(child_yang_name == "default-action-processed")
    {
        if(default_action_processed == nullptr)
        {
            default_action_processed = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed>();
        }
        return default_action_processed;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarded != nullptr)
    {
        _children["forwarded"] = forwarded;
    }

    if(locally_destined != nullptr)
    {
        _children["locally-destined"] = locally_destined;
    }

    if(dropped != nullptr)
    {
        _children["dropped"] = dropped;
    }

    if(default_action_dropped != nullptr)
    {
        _children["default-action-dropped"] = default_action_dropped;
    }

    if(default_action_processed != nullptr)
    {
        _children["default-action-processed"] = default_action_processed;
    }

    if(total != nullptr)
    {
        _children["total"] = total;
    }

    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarded" || name == "locally-destined" || name == "dropped" || name == "default-action-dropped" || name == "default-action-processed" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::Forwarded()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "forwarded"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::~Forwarded()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::LocallyDestined()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "locally-destined"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::~LocallyDestined()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locally-destined";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::Dropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "dropped"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::~Dropped()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Dropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::DefaultActionDropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "default-action-dropped"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::~DefaultActionDropped()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::DefaultActionProcessed()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "default-action-processed"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::~DefaultActionProcessed()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-processed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::Total()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "total"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::~Total()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Summary::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interfaces_()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::~Interfaces_()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    forwarded(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded>())
    , locally_destined(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined>())
    , dropped(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped>())
    , default_action_dropped(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped>())
    , default_action_processed(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed>())
    , total(std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total>())
{
    forwarded->parent = this;
    locally_destined->parent = this;
    dropped->parent = this;
    default_action_dropped->parent = this;
    default_action_processed->parent = this;
    total->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::~Interface()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (forwarded !=  nullptr && forwarded->has_data())
	|| (locally_destined !=  nullptr && locally_destined->has_data())
	|| (dropped !=  nullptr && dropped->has_data())
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_data())
	|| (default_action_processed !=  nullptr && default_action_processed->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (forwarded !=  nullptr && forwarded->has_operation())
	|| (locally_destined !=  nullptr && locally_destined->has_operation())
	|| (dropped !=  nullptr && dropped->has_operation())
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_operation())
	|| (default_action_processed !=  nullptr && default_action_processed->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/prefix-filtering/interfaces/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarded")
    {
        if(forwarded == nullptr)
        {
            forwarded = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded>();
        }
        return forwarded;
    }

    if(child_yang_name == "locally-destined")
    {
        if(locally_destined == nullptr)
        {
            locally_destined = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined>();
        }
        return locally_destined;
    }

    if(child_yang_name == "dropped")
    {
        if(dropped == nullptr)
        {
            dropped = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped>();
        }
        return dropped;
    }

    if(child_yang_name == "default-action-dropped")
    {
        if(default_action_dropped == nullptr)
        {
            default_action_dropped = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped>();
        }
        return default_action_dropped;
    }

    if(child_yang_name == "default-action-processed")
    {
        if(default_action_processed == nullptr)
        {
            default_action_processed = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed>();
        }
        return default_action_processed;
    }

    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarded != nullptr)
    {
        _children["forwarded"] = forwarded;
    }

    if(locally_destined != nullptr)
    {
        _children["locally-destined"] = locally_destined;
    }

    if(dropped != nullptr)
    {
        _children["dropped"] = dropped;
    }

    if(default_action_dropped != nullptr)
    {
        _children["default-action-dropped"] = default_action_dropped;
    }

    if(default_action_processed != nullptr)
    {
        _children["default-action-processed"] = default_action_processed;
    }

    if(total != nullptr)
    {
        _children["total"] = total;
    }

    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarded" || name == "locally-destined" || name == "dropped" || name == "default-action-dropped" || name == "default-action-processed" || name == "total" || name == "interface-name")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::Forwarded()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "forwarded"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::~Forwarded()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::LocallyDestined()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "locally-destined"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::~LocallyDestined()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locally-destined";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::Dropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "dropped"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::~Dropped()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::DefaultActionDropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "default-action-dropped"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::~DefaultActionDropped()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::DefaultActionProcessed()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "default-action-processed"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::~DefaultActionProcessed()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-processed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::Total()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{

    yang_name = "total"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::~Total()
{
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::has_data() const
{
    if (is_presence_container) return true;
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_tear.yfilter)
	|| ydk::is_set(reservation_confirm.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.yfilter)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.yfilter)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
        path_tear.value_namespace = name_space;
        path_tear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
        reservation_confirm.value_namespace = name_space;
        reservation_confirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "path-tear")
    {
        path_tear.yfilter = yfilter;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rsvp::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "path-tear" || name == "reservation-confirm" || name == "total")
        return true;
    return false;
}

Rsvp::Counters::OutOfResource::OutOfResource()
    :
    interfaces(std::make_shared<Rsvp::Counters::OutOfResource::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "out-of-resource"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::OutOfResource::~OutOfResource()
{
}

bool Rsvp::Counters::OutOfResource::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool Rsvp::Counters::OutOfResource::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Rsvp::Counters::OutOfResource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::OutOfResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-of-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::OutOfResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::OutOfResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rsvp::Counters::OutOfResource::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::OutOfResource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Rsvp::Counters::OutOfResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::OutOfResource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::OutOfResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces")
        return true;
    return false;
}

Rsvp::Counters::OutOfResource::Interfaces::Interfaces()
    :
    summary(std::make_shared<Rsvp::Counters::OutOfResource::Interfaces::Summary>())
    , interfaces(std::make_shared<Rsvp::Counters::OutOfResource::Interfaces::Interfaces_>())
{
    summary->parent = this;
    interfaces->parent = this;

    yang_name = "interfaces"; yang_parent_name = "out-of-resource"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::OutOfResource::Interfaces::~Interfaces()
{
}

bool Rsvp::Counters::OutOfResource::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Rsvp::Counters::OutOfResource::Interfaces::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Rsvp::Counters::OutOfResource::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/out-of-resource/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::OutOfResource::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::OutOfResource::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::OutOfResource::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Rsvp::Counters::OutOfResource::Interfaces::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Rsvp::Counters::OutOfResource::Interfaces::Interfaces_>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::OutOfResource::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Rsvp::Counters::OutOfResource::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::OutOfResource::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::OutOfResource::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "interfaces")
        return true;
    return false;
}

Rsvp::Counters::OutOfResource::Interfaces::Summary::Summary()
    :
    dropped_path_messages{YType::uint32, "dropped-path-messages"}
{

    yang_name = "summary"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::OutOfResource::Interfaces::Summary::~Summary()
{
}

bool Rsvp::Counters::OutOfResource::Interfaces::Summary::has_data() const
{
    if (is_presence_container) return true;
    return dropped_path_messages.is_set;
}

bool Rsvp::Counters::OutOfResource::Interfaces::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_path_messages.yfilter);
}

std::string Rsvp::Counters::OutOfResource::Interfaces::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/out-of-resource/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::OutOfResource::Interfaces::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::OutOfResource::Interfaces::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_path_messages.is_set || is_set(dropped_path_messages.yfilter)) leaf_name_data.push_back(dropped_path_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::OutOfResource::Interfaces::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::OutOfResource::Interfaces::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::OutOfResource::Interfaces::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages = value;
        dropped_path_messages.value_namespace = name_space;
        dropped_path_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::OutOfResource::Interfaces::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages.yfilter = yfilter;
    }
}

bool Rsvp::Counters::OutOfResource::Interfaces::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dropped-path-messages")
        return true;
    return false;
}

Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interfaces_()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::~Interfaces_()
{
}

bool Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/out-of-resource/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    dropped_path_messages{YType::uint32, "dropped-path-messages"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::~Interface()
{
}

bool Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| dropped_path_messages.is_set;
}

bool Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(dropped_path_messages.yfilter);
}

std::string Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/out-of-resource/interfaces/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (dropped_path_messages.is_set || is_set(dropped_path_messages.yfilter)) leaf_name_data.push_back(dropped_path_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages = value;
        dropped_path_messages.value_namespace = name_space;
        dropped_path_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages.yfilter = yfilter;
    }
}

bool Rsvp::Counters::OutOfResource::Interfaces::Interfaces_::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "dropped-path-messages")
        return true;
    return false;
}

Rsvp::Counters::InterfaceEvents::InterfaceEvents()
    :
    interface_event(this, {"interface_name"})
{

    yang_name = "interface-events"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::InterfaceEvents::~InterfaceEvents()
{
}

bool Rsvp::Counters::InterfaceEvents::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_event.len(); index++)
    {
        if(interface_event[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::InterfaceEvents::has_operation() const
{
    for (std::size_t index=0; index<interface_event.len(); index++)
    {
        if(interface_event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::InterfaceEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::InterfaceEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::InterfaceEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-event")
    {
        auto ent_ = std::make_shared<Rsvp::Counters::InterfaceEvents::InterfaceEvent>();
        ent_->parent = this;
        interface_event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::InterfaceEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::Counters::InterfaceEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::InterfaceEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::InterfaceEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-event")
        return true;
    return false;
}

Rsvp::Counters::InterfaceEvents::InterfaceEvent::InterfaceEvent()
    :
    interface_name{YType::str, "interface-name"},
    expired_paths{YType::uint32, "expired-paths"},
    expired_reservations{YType::uint32, "expired-reservations"},
    nac_ks{YType::uint32, "nac-ks"}
{

    yang_name = "interface-event"; yang_parent_name = "interface-events"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::InterfaceEvents::InterfaceEvent::~InterfaceEvent()
{
}

bool Rsvp::Counters::InterfaceEvents::InterfaceEvent::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| expired_paths.is_set
	|| expired_reservations.is_set
	|| nac_ks.is_set;
}

bool Rsvp::Counters::InterfaceEvents::InterfaceEvent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(expired_paths.yfilter)
	|| ydk::is_set(expired_reservations.yfilter)
	|| ydk::is_set(nac_ks.yfilter);
}

std::string Rsvp::Counters::InterfaceEvents::InterfaceEvent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/interface-events/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::InterfaceEvents::InterfaceEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-event";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::InterfaceEvents::InterfaceEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (expired_paths.is_set || is_set(expired_paths.yfilter)) leaf_name_data.push_back(expired_paths.get_name_leafdata());
    if (expired_reservations.is_set || is_set(expired_reservations.yfilter)) leaf_name_data.push_back(expired_reservations.get_name_leafdata());
    if (nac_ks.is_set || is_set(nac_ks.yfilter)) leaf_name_data.push_back(nac_ks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::InterfaceEvents::InterfaceEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::InterfaceEvents::InterfaceEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::InterfaceEvents::InterfaceEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-paths")
    {
        expired_paths = value;
        expired_paths.value_namespace = name_space;
        expired_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations = value;
        expired_reservations.value_namespace = name_space;
        expired_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nac-ks")
    {
        nac_ks = value;
        nac_ks.value_namespace = name_space;
        nac_ks.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::InterfaceEvents::InterfaceEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "expired-paths")
    {
        expired_paths.yfilter = yfilter;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations.yfilter = yfilter;
    }
    if(value_path == "nac-ks")
    {
        nac_ks.yfilter = yfilter;
    }
}

bool Rsvp::Counters::InterfaceEvents::InterfaceEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "expired-paths" || name == "expired-reservations" || name == "nac-ks")
        return true;
    return false;
}

Rsvp::Counters::Nsr::Nsr()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    rsvp_process_role{YType::enumeration, "rsvp-process-role"},
    last_idt_states{YType::uint32, "last-idt-states"},
    total_states{YType::uint32, "total-states"},
    total_deletions{YType::uint32, "total-deletions"},
    total_nacks{YType::uint64, "total-nacks"},
    total_id_ts{YType::uint32, "total-id-ts"}
{

    yang_name = "nsr"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::Nsr::~Nsr()
{
}

bool Rsvp::Counters::Nsr::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_timestamp.is_set
	|| rsvp_process_role.is_set
	|| last_idt_states.is_set
	|| total_states.is_set
	|| total_deletions.is_set
	|| total_nacks.is_set
	|| total_id_ts.is_set;
}

bool Rsvp::Counters::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(rsvp_process_role.yfilter)
	|| ydk::is_set(last_idt_states.yfilter)
	|| ydk::is_set(total_states.yfilter)
	|| ydk::is_set(total_deletions.yfilter)
	|| ydk::is_set(total_nacks.yfilter)
	|| ydk::is_set(total_id_ts.yfilter);
}

std::string Rsvp::Counters::Nsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (rsvp_process_role.is_set || is_set(rsvp_process_role.yfilter)) leaf_name_data.push_back(rsvp_process_role.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.yfilter)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.yfilter)) leaf_name_data.push_back(total_states.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.yfilter)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_nacks.is_set || is_set(total_nacks.yfilter)) leaf_name_data.push_back(total_nacks.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.yfilter)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role = value;
        rsvp_process_role.value_namespace = name_space;
        rsvp_process_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
        last_idt_states.value_namespace = name_space;
        last_idt_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-states")
    {
        total_states = value;
        total_states.value_namespace = name_space;
        total_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
        total_deletions.value_namespace = name_space;
        total_deletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-nacks")
    {
        total_nacks = value;
        total_nacks.value_namespace = name_space;
        total_nacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
        total_id_ts.value_namespace = name_space;
        total_id_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role.yfilter = yfilter;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states.yfilter = yfilter;
    }
    if(value_path == "total-states")
    {
        total_states.yfilter = yfilter;
    }
    if(value_path == "total-deletions")
    {
        total_deletions.yfilter = yfilter;
    }
    if(value_path == "total-nacks")
    {
        total_nacks.yfilter = yfilter;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts.yfilter = yfilter;
    }
}

bool Rsvp::Counters::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "rsvp-process-role" || name == "last-idt-states" || name == "total-states" || name == "total-deletions" || name == "total-nacks" || name == "total-id-ts")
        return true;
    return false;
}

Rsvp::Counters::Issu::Issu()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    rsvp_process_role{YType::enumeration, "rsvp-process-role"},
    last_idt_states{YType::uint32, "last-idt-states"},
    total_states{YType::uint32, "total-states"},
    total_deletions{YType::uint32, "total-deletions"},
    total_nacks{YType::uint64, "total-nacks"},
    total_id_ts{YType::uint32, "total-id-ts"}
{

    yang_name = "issu"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::Issu::~Issu()
{
}

bool Rsvp::Counters::Issu::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_timestamp.is_set
	|| rsvp_process_role.is_set
	|| last_idt_states.is_set
	|| total_states.is_set
	|| total_deletions.is_set
	|| total_nacks.is_set
	|| total_id_ts.is_set;
}

bool Rsvp::Counters::Issu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(rsvp_process_role.yfilter)
	|| ydk::is_set(last_idt_states.yfilter)
	|| ydk::is_set(total_states.yfilter)
	|| ydk::is_set(total_deletions.yfilter)
	|| ydk::is_set(total_nacks.yfilter)
	|| ydk::is_set(total_id_ts.yfilter);
}

std::string Rsvp::Counters::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (rsvp_process_role.is_set || is_set(rsvp_process_role.yfilter)) leaf_name_data.push_back(rsvp_process_role.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.yfilter)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.yfilter)) leaf_name_data.push_back(total_states.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.yfilter)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_nacks.is_set || is_set(total_nacks.yfilter)) leaf_name_data.push_back(total_nacks.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.yfilter)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role = value;
        rsvp_process_role.value_namespace = name_space;
        rsvp_process_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
        last_idt_states.value_namespace = name_space;
        last_idt_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-states")
    {
        total_states = value;
        total_states.value_namespace = name_space;
        total_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
        total_deletions.value_namespace = name_space;
        total_deletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-nacks")
    {
        total_nacks = value;
        total_nacks.value_namespace = name_space;
        total_nacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
        total_id_ts.value_namespace = name_space;
        total_id_ts.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role.yfilter = yfilter;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states.yfilter = yfilter;
    }
    if(value_path == "total-states")
    {
        total_states.yfilter = yfilter;
    }
    if(value_path == "total-deletions")
    {
        total_deletions.yfilter = yfilter;
    }
    if(value_path == "total-nacks")
    {
        total_nacks.yfilter = yfilter;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts.yfilter = yfilter;
    }
}

bool Rsvp::Counters::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "rsvp-process-role" || name == "last-idt-states" || name == "total-states" || name == "total-deletions" || name == "total-nacks" || name == "total-id-ts")
        return true;
    return false;
}

Rsvp::Counters::Database::Database()
    :
    sessions{YType::uint32, "sessions"},
    incoming_paths{YType::uint32, "incoming-paths"},
    outgoing_paths{YType::uint32, "outgoing-paths"},
    incoming_reservations{YType::uint32, "incoming-reservations"},
    outgoing_reservations{YType::uint32, "outgoing-reservations"},
    interfaces{YType::uint32, "interfaces"}
{

    yang_name = "database"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::Database::~Database()
{
}

bool Rsvp::Counters::Database::has_data() const
{
    if (is_presence_container) return true;
    return sessions.is_set
	|| incoming_paths.is_set
	|| outgoing_paths.is_set
	|| incoming_reservations.is_set
	|| outgoing_reservations.is_set
	|| interfaces.is_set;
}

bool Rsvp::Counters::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessions.yfilter)
	|| ydk::is_set(incoming_paths.yfilter)
	|| ydk::is_set(outgoing_paths.yfilter)
	|| ydk::is_set(incoming_reservations.yfilter)
	|| ydk::is_set(outgoing_reservations.yfilter)
	|| ydk::is_set(interfaces.yfilter);
}

std::string Rsvp::Counters::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());
    if (incoming_paths.is_set || is_set(incoming_paths.yfilter)) leaf_name_data.push_back(incoming_paths.get_name_leafdata());
    if (outgoing_paths.is_set || is_set(outgoing_paths.yfilter)) leaf_name_data.push_back(outgoing_paths.get_name_leafdata());
    if (incoming_reservations.is_set || is_set(incoming_reservations.yfilter)) leaf_name_data.push_back(incoming_reservations.get_name_leafdata());
    if (outgoing_reservations.is_set || is_set(outgoing_reservations.yfilter)) leaf_name_data.push_back(outgoing_reservations.get_name_leafdata());
    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-paths")
    {
        incoming_paths = value;
        incoming_paths.value_namespace = name_space;
        incoming_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths = value;
        outgoing_paths.value_namespace = name_space;
        outgoing_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations = value;
        incoming_reservations.value_namespace = name_space;
        incoming_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations = value;
        outgoing_reservations.value_namespace = name_space;
        outgoing_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
    if(value_path == "incoming-paths")
    {
        incoming_paths.yfilter = yfilter;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths.yfilter = yfilter;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations.yfilter = yfilter;
    }
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
}

bool Rsvp::Counters::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions" || name == "incoming-paths" || name == "outgoing-paths" || name == "incoming-reservations" || name == "outgoing-reservations" || name == "interfaces")
        return true;
    return false;
}

Rsvp::Counters::EventSyncs::EventSyncs()
    :
    event_sync(this, {"interface_name"})
{

    yang_name = "event-syncs"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::EventSyncs::~EventSyncs()
{
}

bool Rsvp::Counters::EventSyncs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event_sync.len(); index++)
    {
        if(event_sync[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Counters::EventSyncs::has_operation() const
{
    for (std::size_t index=0; index<event_sync.len(); index++)
    {
        if(event_sync[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Counters::EventSyncs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::EventSyncs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-syncs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::EventSyncs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::EventSyncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-sync")
    {
        auto ent_ = std::make_shared<Rsvp::Counters::EventSyncs::EventSync>();
        ent_->parent = this;
        event_sync.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::EventSyncs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event_sync.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::Counters::EventSyncs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Counters::EventSyncs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Counters::EventSyncs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-sync")
        return true;
    return false;
}

Rsvp::Counters::EventSyncs::EventSync::EventSync()
    :
    interface_name{YType::str, "interface-name"},
    expired_paths{YType::uint32, "expired-paths"},
    expired_reservations{YType::uint32, "expired-reservations"},
    nac_ks{YType::uint32, "nac-ks"}
{

    yang_name = "event-sync"; yang_parent_name = "event-syncs"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Counters::EventSyncs::EventSync::~EventSync()
{
}

bool Rsvp::Counters::EventSyncs::EventSync::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| expired_paths.is_set
	|| expired_reservations.is_set
	|| nac_ks.is_set;
}

bool Rsvp::Counters::EventSyncs::EventSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(expired_paths.yfilter)
	|| ydk::is_set(expired_reservations.yfilter)
	|| ydk::is_set(nac_ks.yfilter);
}

std::string Rsvp::Counters::EventSyncs::EventSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/counters/event-syncs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Counters::EventSyncs::EventSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-sync";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Counters::EventSyncs::EventSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (expired_paths.is_set || is_set(expired_paths.yfilter)) leaf_name_data.push_back(expired_paths.get_name_leafdata());
    if (expired_reservations.is_set || is_set(expired_reservations.yfilter)) leaf_name_data.push_back(expired_reservations.get_name_leafdata());
    if (nac_ks.is_set || is_set(nac_ks.yfilter)) leaf_name_data.push_back(nac_ks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Counters::EventSyncs::EventSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Counters::EventSyncs::EventSync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Counters::EventSyncs::EventSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-paths")
    {
        expired_paths = value;
        expired_paths.value_namespace = name_space;
        expired_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations = value;
        expired_reservations.value_namespace = name_space;
        expired_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nac-ks")
    {
        nac_ks = value;
        nac_ks.value_namespace = name_space;
        nac_ks.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Counters::EventSyncs::EventSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "expired-paths")
    {
        expired_paths.yfilter = yfilter;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations.yfilter = yfilter;
    }
    if(value_path == "nac-ks")
    {
        nac_ks.yfilter = yfilter;
    }
}

bool Rsvp::Counters::EventSyncs::EventSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "expired-paths" || name == "expired-reservations" || name == "nac-ks")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetaileds()
    :
    interface_detailed(this, {"interface_name"})
{

    yang_name = "interface-detaileds"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::InterfaceDetaileds::~InterfaceDetaileds()
{
}

bool Rsvp::InterfaceDetaileds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_detailed.len(); index++)
    {
        if(interface_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::InterfaceDetaileds::has_operation() const
{
    for (std::size_t index=0; index<interface_detailed.len(); index++)
    {
        if(interface_detailed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::InterfaceDetaileds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detaileds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-detailed")
    {
        auto ent_ = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed>();
        ent_->parent = this;
        interface_detailed.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceDetaileds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_detailed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::InterfaceDetaileds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::InterfaceDetaileds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::InterfaceDetaileds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-detailed")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::InterfaceDetailed()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    signalling_ip_tos{YType::uint8, "signalling-ip-tos"},
    integrity_send_password{YType::str, "integrity-send-password"},
    integrity_receive_password{YType::str, "integrity-receive-password"},
    integrity_receive_password_optional{YType::uint8, "integrity-receive-password-optional"},
    refresh_timer_state{YType::enumeration, "refresh-timer-state"},
    summary_refresh_timer_state{YType::enumeration, "summary-refresh-timer-state"},
    refresh_interval{YType::int32, "refresh-interval"},
    out_of_band_refresh_interval{YType::uint32, "out-of-band-refresh-interval"},
    summary_refresh_max_size{YType::uint32, "summary-refresh-max-size"},
    bundle_message_max_size{YType::uint32, "bundle-message-max-size"},
    expiry_timer_state{YType::enumeration, "expiry-timer-state"},
    expiry_states{YType::int32, "expiry-states"},
    expiry_interval{YType::int32, "expiry-interval"},
    expiry_drops_tolerated{YType::int32, "expiry-drops-tolerated"},
    out_of_band_expiry_drops_tolerated{YType::uint32, "out-of-band-expiry-drops-tolerated"},
    ack_hold_time{YType::uint32, "ack-hold-time"},
    ack_max_size{YType::uint32, "ack-max-size"},
    retransmit_time{YType::uint32, "retransmit-time"},
    pacing_interval{YType::uint32, "pacing-interval"},
    pacing_message_rate{YType::uint32, "pacing-message-rate"},
    pacing_timer_state{YType::enumeration, "pacing-timer-state"},
    pacing_messages{YType::int32, "pacing-messages"}
        ,
    bandwidth_information(std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation>())
    , flags(std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags>())
    , neighbor_array(this, {})
{
    bandwidth_information->parent = this;
    flags->parent = this;

    yang_name = "interface-detailed"; yang_parent_name = "interface-detaileds"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::~InterfaceDetailed()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_array.len(); index++)
    {
        if(neighbor_array[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| signalling_ip_tos.is_set
	|| integrity_send_password.is_set
	|| integrity_receive_password.is_set
	|| integrity_receive_password_optional.is_set
	|| refresh_timer_state.is_set
	|| summary_refresh_timer_state.is_set
	|| refresh_interval.is_set
	|| out_of_band_refresh_interval.is_set
	|| summary_refresh_max_size.is_set
	|| bundle_message_max_size.is_set
	|| expiry_timer_state.is_set
	|| expiry_states.is_set
	|| expiry_interval.is_set
	|| expiry_drops_tolerated.is_set
	|| out_of_band_expiry_drops_tolerated.is_set
	|| ack_hold_time.is_set
	|| ack_max_size.is_set
	|| retransmit_time.is_set
	|| pacing_interval.is_set
	|| pacing_message_rate.is_set
	|| pacing_timer_state.is_set
	|| pacing_messages.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data())
	|| (flags !=  nullptr && flags->has_data());
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::has_operation() const
{
    for (std::size_t index=0; index<neighbor_array.len(); index++)
    {
        if(neighbor_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(signalling_ip_tos.yfilter)
	|| ydk::is_set(integrity_send_password.yfilter)
	|| ydk::is_set(integrity_receive_password.yfilter)
	|| ydk::is_set(integrity_receive_password_optional.yfilter)
	|| ydk::is_set(refresh_timer_state.yfilter)
	|| ydk::is_set(summary_refresh_timer_state.yfilter)
	|| ydk::is_set(refresh_interval.yfilter)
	|| ydk::is_set(out_of_band_refresh_interval.yfilter)
	|| ydk::is_set(summary_refresh_max_size.yfilter)
	|| ydk::is_set(bundle_message_max_size.yfilter)
	|| ydk::is_set(expiry_timer_state.yfilter)
	|| ydk::is_set(expiry_states.yfilter)
	|| ydk::is_set(expiry_interval.yfilter)
	|| ydk::is_set(expiry_drops_tolerated.yfilter)
	|| ydk::is_set(out_of_band_expiry_drops_tolerated.yfilter)
	|| ydk::is_set(ack_hold_time.yfilter)
	|| ydk::is_set(ack_max_size.yfilter)
	|| ydk::is_set(retransmit_time.yfilter)
	|| ydk::is_set(pacing_interval.yfilter)
	|| ydk::is_set(pacing_message_rate.yfilter)
	|| ydk::is_set(pacing_timer_state.yfilter)
	|| ydk::is_set(pacing_messages.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation())
	|| (flags !=  nullptr && flags->has_operation());
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/interface-detaileds/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detailed";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (signalling_ip_tos.is_set || is_set(signalling_ip_tos.yfilter)) leaf_name_data.push_back(signalling_ip_tos.get_name_leafdata());
    if (integrity_send_password.is_set || is_set(integrity_send_password.yfilter)) leaf_name_data.push_back(integrity_send_password.get_name_leafdata());
    if (integrity_receive_password.is_set || is_set(integrity_receive_password.yfilter)) leaf_name_data.push_back(integrity_receive_password.get_name_leafdata());
    if (integrity_receive_password_optional.is_set || is_set(integrity_receive_password_optional.yfilter)) leaf_name_data.push_back(integrity_receive_password_optional.get_name_leafdata());
    if (refresh_timer_state.is_set || is_set(refresh_timer_state.yfilter)) leaf_name_data.push_back(refresh_timer_state.get_name_leafdata());
    if (summary_refresh_timer_state.is_set || is_set(summary_refresh_timer_state.yfilter)) leaf_name_data.push_back(summary_refresh_timer_state.get_name_leafdata());
    if (refresh_interval.is_set || is_set(refresh_interval.yfilter)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());
    if (out_of_band_refresh_interval.is_set || is_set(out_of_band_refresh_interval.yfilter)) leaf_name_data.push_back(out_of_band_refresh_interval.get_name_leafdata());
    if (summary_refresh_max_size.is_set || is_set(summary_refresh_max_size.yfilter)) leaf_name_data.push_back(summary_refresh_max_size.get_name_leafdata());
    if (bundle_message_max_size.is_set || is_set(bundle_message_max_size.yfilter)) leaf_name_data.push_back(bundle_message_max_size.get_name_leafdata());
    if (expiry_timer_state.is_set || is_set(expiry_timer_state.yfilter)) leaf_name_data.push_back(expiry_timer_state.get_name_leafdata());
    if (expiry_states.is_set || is_set(expiry_states.yfilter)) leaf_name_data.push_back(expiry_states.get_name_leafdata());
    if (expiry_interval.is_set || is_set(expiry_interval.yfilter)) leaf_name_data.push_back(expiry_interval.get_name_leafdata());
    if (expiry_drops_tolerated.is_set || is_set(expiry_drops_tolerated.yfilter)) leaf_name_data.push_back(expiry_drops_tolerated.get_name_leafdata());
    if (out_of_band_expiry_drops_tolerated.is_set || is_set(out_of_band_expiry_drops_tolerated.yfilter)) leaf_name_data.push_back(out_of_band_expiry_drops_tolerated.get_name_leafdata());
    if (ack_hold_time.is_set || is_set(ack_hold_time.yfilter)) leaf_name_data.push_back(ack_hold_time.get_name_leafdata());
    if (ack_max_size.is_set || is_set(ack_max_size.yfilter)) leaf_name_data.push_back(ack_max_size.get_name_leafdata());
    if (retransmit_time.is_set || is_set(retransmit_time.yfilter)) leaf_name_data.push_back(retransmit_time.get_name_leafdata());
    if (pacing_interval.is_set || is_set(pacing_interval.yfilter)) leaf_name_data.push_back(pacing_interval.get_name_leafdata());
    if (pacing_message_rate.is_set || is_set(pacing_message_rate.yfilter)) leaf_name_data.push_back(pacing_message_rate.get_name_leafdata());
    if (pacing_timer_state.is_set || is_set(pacing_timer_state.yfilter)) leaf_name_data.push_back(pacing_timer_state.get_name_leafdata());
    if (pacing_messages.is_set || is_set(pacing_messages.yfilter)) leaf_name_data.push_back(pacing_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "neighbor-array")
    {
        auto ent_ = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray>();
        ent_->parent = this;
        neighbor_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth_information != nullptr)
    {
        _children["bandwidth-information"] = bandwidth_information;
    }

    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    count_ = 0;
    for (auto ent_ : neighbor_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-ip-tos")
    {
        signalling_ip_tos = value;
        signalling_ip_tos.value_namespace = name_space;
        signalling_ip_tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "integrity-send-password")
    {
        integrity_send_password = value;
        integrity_send_password.value_namespace = name_space;
        integrity_send_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "integrity-receive-password")
    {
        integrity_receive_password = value;
        integrity_receive_password.value_namespace = name_space;
        integrity_receive_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "integrity-receive-password-optional")
    {
        integrity_receive_password_optional = value;
        integrity_receive_password_optional.value_namespace = name_space;
        integrity_receive_password_optional.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-timer-state")
    {
        refresh_timer_state = value;
        refresh_timer_state.value_namespace = name_space;
        refresh_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-refresh-timer-state")
    {
        summary_refresh_timer_state = value;
        summary_refresh_timer_state.value_namespace = name_space;
        summary_refresh_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
        refresh_interval.value_namespace = name_space;
        refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-band-refresh-interval")
    {
        out_of_band_refresh_interval = value;
        out_of_band_refresh_interval.value_namespace = name_space;
        out_of_band_refresh_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-refresh-max-size")
    {
        summary_refresh_max_size = value;
        summary_refresh_max_size.value_namespace = name_space;
        summary_refresh_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-message-max-size")
    {
        bundle_message_max_size = value;
        bundle_message_max_size.value_namespace = name_space;
        bundle_message_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-timer-state")
    {
        expiry_timer_state = value;
        expiry_timer_state.value_namespace = name_space;
        expiry_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-states")
    {
        expiry_states = value;
        expiry_states.value_namespace = name_space;
        expiry_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-interval")
    {
        expiry_interval = value;
        expiry_interval.value_namespace = name_space;
        expiry_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-drops-tolerated")
    {
        expiry_drops_tolerated = value;
        expiry_drops_tolerated.value_namespace = name_space;
        expiry_drops_tolerated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-band-expiry-drops-tolerated")
    {
        out_of_band_expiry_drops_tolerated = value;
        out_of_band_expiry_drops_tolerated.value_namespace = name_space;
        out_of_band_expiry_drops_tolerated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-hold-time")
    {
        ack_hold_time = value;
        ack_hold_time.value_namespace = name_space;
        ack_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-max-size")
    {
        ack_max_size = value;
        ack_max_size.value_namespace = name_space;
        ack_max_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-time")
    {
        retransmit_time = value;
        retransmit_time.value_namespace = name_space;
        retransmit_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-interval")
    {
        pacing_interval = value;
        pacing_interval.value_namespace = name_space;
        pacing_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-message-rate")
    {
        pacing_message_rate = value;
        pacing_message_rate.value_namespace = name_space;
        pacing_message_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-timer-state")
    {
        pacing_timer_state = value;
        pacing_timer_state.value_namespace = name_space;
        pacing_timer_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pacing-messages")
    {
        pacing_messages = value;
        pacing_messages.value_namespace = name_space;
        pacing_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "signalling-ip-tos")
    {
        signalling_ip_tos.yfilter = yfilter;
    }
    if(value_path == "integrity-send-password")
    {
        integrity_send_password.yfilter = yfilter;
    }
    if(value_path == "integrity-receive-password")
    {
        integrity_receive_password.yfilter = yfilter;
    }
    if(value_path == "integrity-receive-password-optional")
    {
        integrity_receive_password_optional.yfilter = yfilter;
    }
    if(value_path == "refresh-timer-state")
    {
        refresh_timer_state.yfilter = yfilter;
    }
    if(value_path == "summary-refresh-timer-state")
    {
        summary_refresh_timer_state.yfilter = yfilter;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval.yfilter = yfilter;
    }
    if(value_path == "out-of-band-refresh-interval")
    {
        out_of_band_refresh_interval.yfilter = yfilter;
    }
    if(value_path == "summary-refresh-max-size")
    {
        summary_refresh_max_size.yfilter = yfilter;
    }
    if(value_path == "bundle-message-max-size")
    {
        bundle_message_max_size.yfilter = yfilter;
    }
    if(value_path == "expiry-timer-state")
    {
        expiry_timer_state.yfilter = yfilter;
    }
    if(value_path == "expiry-states")
    {
        expiry_states.yfilter = yfilter;
    }
    if(value_path == "expiry-interval")
    {
        expiry_interval.yfilter = yfilter;
    }
    if(value_path == "expiry-drops-tolerated")
    {
        expiry_drops_tolerated.yfilter = yfilter;
    }
    if(value_path == "out-of-band-expiry-drops-tolerated")
    {
        out_of_band_expiry_drops_tolerated.yfilter = yfilter;
    }
    if(value_path == "ack-hold-time")
    {
        ack_hold_time.yfilter = yfilter;
    }
    if(value_path == "ack-max-size")
    {
        ack_max_size.yfilter = yfilter;
    }
    if(value_path == "retransmit-time")
    {
        retransmit_time.yfilter = yfilter;
    }
    if(value_path == "pacing-interval")
    {
        pacing_interval.yfilter = yfilter;
    }
    if(value_path == "pacing-message-rate")
    {
        pacing_message_rate.yfilter = yfilter;
    }
    if(value_path == "pacing-timer-state")
    {
        pacing_timer_state.yfilter = yfilter;
    }
    if(value_path == "pacing-messages")
    {
        pacing_messages.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "flags" || name == "neighbor-array" || name == "interface-name" || name == "interface-name-xr" || name == "signalling-ip-tos" || name == "integrity-send-password" || name == "integrity-receive-password" || name == "integrity-receive-password-optional" || name == "refresh-timer-state" || name == "summary-refresh-timer-state" || name == "refresh-interval" || name == "out-of-band-refresh-interval" || name == "summary-refresh-max-size" || name == "bundle-message-max-size" || name == "expiry-timer-state" || name == "expiry-states" || name == "expiry-interval" || name == "expiry-drops-tolerated" || name == "out-of-band-expiry-drops-tolerated" || name == "ack-hold-time" || name == "ack-max-size" || name == "retransmit-time" || name == "pacing-interval" || name == "pacing-message-rate" || name == "pacing-timer-state" || name == "pacing-messages")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
        ,
    pre_standard_dste_interface(std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface>())
    , standard_dste_interface(std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "interface-detailed"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::~BandwidthInformation()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::has_data() const
{
    if (is_presence_container) return true;
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pre_standard_dste_interface != nullptr)
    {
        _children["pre-standard-dste-interface"] = pre_standard_dste_interface;
    }

    if(standard_dste_interface != nullptr)
    {
        _children["standard-dste-interface"] = standard_dste_interface;
    }

    return _children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"}
{

    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    if (is_presence_container) return true;
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_subpool_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set;
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter);
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.yfilter)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
        max_subpool_bandwidth.value_namespace = name_space;
        max_subpool_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
        is_max_subpool_bandwidth_absolute.value_namespace = name_space;
        is_max_subpool_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-subpool-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_pool0_bandwidth{YType::uint64, "max-pool0-bandwidth"},
    max_pool1_bandwidth{YType::uint64, "max-pool1-bandwidth"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_bc0_bandwidth_absolute{YType::boolean, "is-max-bc0-bandwidth-absolute"},
    is_max_bc1_bandwidth_absolute{YType::boolean, "is-max-bc1-bandwidth-absolute"}
{

    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::has_data() const
{
    if (is_presence_container) return true;
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_pool0_bandwidth.is_set
	|| max_pool1_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_bc0_bandwidth_absolute.is_set
	|| is_max_bc1_bandwidth_absolute.is_set;
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_pool0_bandwidth.yfilter)
	|| ydk::is_set(max_pool1_bandwidth.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc0_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc1_bandwidth_absolute.yfilter);
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.yfilter)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.yfilter)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
        max_pool0_bandwidth.value_namespace = name_space;
        max_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
        max_pool1_bandwidth.value_namespace = name_space;
        max_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
        is_max_bc0_bandwidth_absolute.value_namespace = name_space;
        is_max_bc0_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
        is_max_bc1_bandwidth_absolute.value_namespace = name_space;
        is_max_bc1_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::Flags()
    :
    is_mpls_enabled{YType::boolean, "is-mpls-enabled"},
    is_refresh_reduction_enabled{YType::boolean, "is-refresh-reduction-enabled"},
    is_pacing_enabled{YType::boolean, "is-pacing-enabled"},
    is_refresh_enabled{YType::boolean, "is-refresh-enabled"},
    is_s_refresh_enabled{YType::boolean, "is-s-refresh-enabled"},
    is_interface_down{YType::boolean, "is-interface-down"},
    is_interface_created{YType::boolean, "is-interface-created"},
    is_rel_s_refresh_enabled{YType::boolean, "is-rel-s-refresh-enabled"},
    is_backup_tunnel{YType::boolean, "is-backup-tunnel"},
    is_rsvp_configured{YType::boolean, "is-rsvp-configured"},
    is_non_default_vrf{YType::boolean, "is-non-default-vrf"},
    is_message_bundling_enabled{YType::boolean, "is-message-bundling-enabled"}
{

    yang_name = "flags"; yang_parent_name = "interface-detailed"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::~Flags()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::has_data() const
{
    if (is_presence_container) return true;
    return is_mpls_enabled.is_set
	|| is_refresh_reduction_enabled.is_set
	|| is_pacing_enabled.is_set
	|| is_refresh_enabled.is_set
	|| is_s_refresh_enabled.is_set
	|| is_interface_down.is_set
	|| is_interface_created.is_set
	|| is_rel_s_refresh_enabled.is_set
	|| is_backup_tunnel.is_set
	|| is_rsvp_configured.is_set
	|| is_non_default_vrf.is_set
	|| is_message_bundling_enabled.is_set;
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_mpls_enabled.yfilter)
	|| ydk::is_set(is_refresh_reduction_enabled.yfilter)
	|| ydk::is_set(is_pacing_enabled.yfilter)
	|| ydk::is_set(is_refresh_enabled.yfilter)
	|| ydk::is_set(is_s_refresh_enabled.yfilter)
	|| ydk::is_set(is_interface_down.yfilter)
	|| ydk::is_set(is_interface_created.yfilter)
	|| ydk::is_set(is_rel_s_refresh_enabled.yfilter)
	|| ydk::is_set(is_backup_tunnel.yfilter)
	|| ydk::is_set(is_rsvp_configured.yfilter)
	|| ydk::is_set(is_non_default_vrf.yfilter)
	|| ydk::is_set(is_message_bundling_enabled.yfilter);
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mpls_enabled.is_set || is_set(is_mpls_enabled.yfilter)) leaf_name_data.push_back(is_mpls_enabled.get_name_leafdata());
    if (is_refresh_reduction_enabled.is_set || is_set(is_refresh_reduction_enabled.yfilter)) leaf_name_data.push_back(is_refresh_reduction_enabled.get_name_leafdata());
    if (is_pacing_enabled.is_set || is_set(is_pacing_enabled.yfilter)) leaf_name_data.push_back(is_pacing_enabled.get_name_leafdata());
    if (is_refresh_enabled.is_set || is_set(is_refresh_enabled.yfilter)) leaf_name_data.push_back(is_refresh_enabled.get_name_leafdata());
    if (is_s_refresh_enabled.is_set || is_set(is_s_refresh_enabled.yfilter)) leaf_name_data.push_back(is_s_refresh_enabled.get_name_leafdata());
    if (is_interface_down.is_set || is_set(is_interface_down.yfilter)) leaf_name_data.push_back(is_interface_down.get_name_leafdata());
    if (is_interface_created.is_set || is_set(is_interface_created.yfilter)) leaf_name_data.push_back(is_interface_created.get_name_leafdata());
    if (is_rel_s_refresh_enabled.is_set || is_set(is_rel_s_refresh_enabled.yfilter)) leaf_name_data.push_back(is_rel_s_refresh_enabled.get_name_leafdata());
    if (is_backup_tunnel.is_set || is_set(is_backup_tunnel.yfilter)) leaf_name_data.push_back(is_backup_tunnel.get_name_leafdata());
    if (is_rsvp_configured.is_set || is_set(is_rsvp_configured.yfilter)) leaf_name_data.push_back(is_rsvp_configured.get_name_leafdata());
    if (is_non_default_vrf.is_set || is_set(is_non_default_vrf.yfilter)) leaf_name_data.push_back(is_non_default_vrf.get_name_leafdata());
    if (is_message_bundling_enabled.is_set || is_set(is_message_bundling_enabled.yfilter)) leaf_name_data.push_back(is_message_bundling_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-mpls-enabled")
    {
        is_mpls_enabled = value;
        is_mpls_enabled.value_namespace = name_space;
        is_mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-refresh-reduction-enabled")
    {
        is_refresh_reduction_enabled = value;
        is_refresh_reduction_enabled.value_namespace = name_space;
        is_refresh_reduction_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pacing-enabled")
    {
        is_pacing_enabled = value;
        is_pacing_enabled.value_namespace = name_space;
        is_pacing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-refresh-enabled")
    {
        is_refresh_enabled = value;
        is_refresh_enabled.value_namespace = name_space;
        is_refresh_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-s-refresh-enabled")
    {
        is_s_refresh_enabled = value;
        is_s_refresh_enabled.value_namespace = name_space;
        is_s_refresh_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-down")
    {
        is_interface_down = value;
        is_interface_down.value_namespace = name_space;
        is_interface_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-created")
    {
        is_interface_created = value;
        is_interface_created.value_namespace = name_space;
        is_interface_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rel-s-refresh-enabled")
    {
        is_rel_s_refresh_enabled = value;
        is_rel_s_refresh_enabled.value_namespace = name_space;
        is_rel_s_refresh_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-backup-tunnel")
    {
        is_backup_tunnel = value;
        is_backup_tunnel.value_namespace = name_space;
        is_backup_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rsvp-configured")
    {
        is_rsvp_configured = value;
        is_rsvp_configured.value_namespace = name_space;
        is_rsvp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-non-default-vrf")
    {
        is_non_default_vrf = value;
        is_non_default_vrf.value_namespace = name_space;
        is_non_default_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-message-bundling-enabled")
    {
        is_message_bundling_enabled = value;
        is_message_bundling_enabled.value_namespace = name_space;
        is_message_bundling_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-mpls-enabled")
    {
        is_mpls_enabled.yfilter = yfilter;
    }
    if(value_path == "is-refresh-reduction-enabled")
    {
        is_refresh_reduction_enabled.yfilter = yfilter;
    }
    if(value_path == "is-pacing-enabled")
    {
        is_pacing_enabled.yfilter = yfilter;
    }
    if(value_path == "is-refresh-enabled")
    {
        is_refresh_enabled.yfilter = yfilter;
    }
    if(value_path == "is-s-refresh-enabled")
    {
        is_s_refresh_enabled.yfilter = yfilter;
    }
    if(value_path == "is-interface-down")
    {
        is_interface_down.yfilter = yfilter;
    }
    if(value_path == "is-interface-created")
    {
        is_interface_created.yfilter = yfilter;
    }
    if(value_path == "is-rel-s-refresh-enabled")
    {
        is_rel_s_refresh_enabled.yfilter = yfilter;
    }
    if(value_path == "is-backup-tunnel")
    {
        is_backup_tunnel.yfilter = yfilter;
    }
    if(value_path == "is-rsvp-configured")
    {
        is_rsvp_configured.yfilter = yfilter;
    }
    if(value_path == "is-non-default-vrf")
    {
        is_non_default_vrf.yfilter = yfilter;
    }
    if(value_path == "is-message-bundling-enabled")
    {
        is_message_bundling_enabled.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-mpls-enabled" || name == "is-refresh-reduction-enabled" || name == "is-pacing-enabled" || name == "is-refresh-enabled" || name == "is-s-refresh-enabled" || name == "is-interface-down" || name == "is-interface-created" || name == "is-rel-s-refresh-enabled" || name == "is-backup-tunnel" || name == "is-rsvp-configured" || name == "is-non-default-vrf" || name == "is-message-bundling-enabled")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborArray()
    :
    is_neighbor_refresh_reduction_capable{YType::boolean, "is-neighbor-refresh-reduction-capable"},
    neighbor_address{YType::str, "neighbor-address"},
    message_ids{YType::uint32, "message-ids"},
    outgoing_states{YType::int32, "outgoing-states"}
        ,
    expiry_time(std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime>())
    , neighbor_message_id(this, {})
{
    expiry_time->parent = this;

    yang_name = "neighbor-array"; yang_parent_name = "interface-detailed"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::~NeighborArray()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_message_id.len(); index++)
    {
        if(neighbor_message_id[index]->has_data())
            return true;
    }
    return is_neighbor_refresh_reduction_capable.is_set
	|| neighbor_address.is_set
	|| message_ids.is_set
	|| outgoing_states.is_set
	|| (expiry_time !=  nullptr && expiry_time->has_data());
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::has_operation() const
{
    for (std::size_t index=0; index<neighbor_message_id.len(); index++)
    {
        if(neighbor_message_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor_refresh_reduction_capable.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(message_ids.yfilter)
	|| ydk::is_set(outgoing_states.yfilter)
	|| (expiry_time !=  nullptr && expiry_time->has_operation());
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor_refresh_reduction_capable.is_set || is_set(is_neighbor_refresh_reduction_capable.yfilter)) leaf_name_data.push_back(is_neighbor_refresh_reduction_capable.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (message_ids.is_set || is_set(message_ids.yfilter)) leaf_name_data.push_back(message_ids.get_name_leafdata());
    if (outgoing_states.is_set || is_set(outgoing_states.yfilter)) leaf_name_data.push_back(outgoing_states.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expiry-time")
    {
        if(expiry_time == nullptr)
        {
            expiry_time = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime>();
        }
        return expiry_time;
    }

    if(child_yang_name == "neighbor-message-id")
    {
        auto ent_ = std::make_shared<Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId>();
        ent_->parent = this;
        neighbor_message_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(expiry_time != nullptr)
    {
        _children["expiry-time"] = expiry_time;
    }

    count_ = 0;
    for (auto ent_ : neighbor_message_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor-refresh-reduction-capable")
    {
        is_neighbor_refresh_reduction_capable = value;
        is_neighbor_refresh_reduction_capable.value_namespace = name_space;
        is_neighbor_refresh_reduction_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-ids")
    {
        message_ids = value;
        message_ids.value_namespace = name_space;
        message_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-states")
    {
        outgoing_states = value;
        outgoing_states.value_namespace = name_space;
        outgoing_states.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor-refresh-reduction-capable")
    {
        is_neighbor_refresh_reduction_capable.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "message-ids")
    {
        message_ids.yfilter = yfilter;
    }
    if(value_path == "outgoing-states")
    {
        outgoing_states.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry-time" || name == "neighbor-message-id" || name == "is-neighbor-refresh-reduction-capable" || name == "neighbor-address" || name == "message-ids" || name == "outgoing-states")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::ExpiryTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "expiry-time"; yang_parent_name = "neighbor-array"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::~ExpiryTime()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expiry-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::NeighborMessageId()
    :
    message_id{YType::uint32, "message-id"}
{

    yang_name = "neighbor-message-id"; yang_parent_name = "neighbor-array"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::~NeighborMessageId()
{
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::has_data() const
{
    if (is_presence_container) return true;
    return message_id.is_set;
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_id.yfilter);
}

std::string Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-message-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_id.is_set || is_set(message_id.yfilter)) leaf_name_data.push_back(message_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-id")
    {
        message_id = value;
        message_id.value_namespace = name_space;
        message_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-id")
    {
        message_id.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-id")
        return true;
    return false;
}

Rsvp::ControllerBriefs::ControllerBriefs()
    :
    controller_brief(this, {"controller_name"})
{

    yang_name = "controller-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::ControllerBriefs::~ControllerBriefs()
{
}

bool Rsvp::ControllerBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<controller_brief.len(); index++)
    {
        if(controller_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::ControllerBriefs::has_operation() const
{
    for (std::size_t index=0; index<controller_brief.len(); index++)
    {
        if(controller_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::ControllerBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::ControllerBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::ControllerBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller-brief")
    {
        auto ent_ = std::make_shared<Rsvp::ControllerBriefs::ControllerBrief>();
        ent_->parent = this;
        controller_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::ControllerBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : controller_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::ControllerBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::ControllerBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::ControllerBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller-brief")
        return true;
    return false;
}

Rsvp::ControllerBriefs::ControllerBrief::ControllerBrief()
    :
    controller_name{YType::str, "controller-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
        ,
    bandwidth_information(std::make_shared<Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation>())
{
    bandwidth_information->parent = this;

    yang_name = "controller-brief"; yang_parent_name = "controller-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::ControllerBriefs::ControllerBrief::~ControllerBrief()
{
}

bool Rsvp::ControllerBriefs::ControllerBrief::has_data() const
{
    if (is_presence_container) return true;
    return controller_name.is_set
	|| interface_name_xr.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data());
}

bool Rsvp::ControllerBriefs::ControllerBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(controller_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation());
}

std::string Rsvp::ControllerBriefs::ControllerBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/controller-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::ControllerBriefs::ControllerBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller-brief";
    ADD_KEY_TOKEN(controller_name, "controller-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerBriefs::ControllerBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (controller_name.is_set || is_set(controller_name.yfilter)) leaf_name_data.push_back(controller_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::ControllerBriefs::ControllerBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information == nullptr)
        {
            bandwidth_information = std::make_shared<Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation>();
        }
        return bandwidth_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::ControllerBriefs::ControllerBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth_information != nullptr)
    {
        _children["bandwidth-information"] = bandwidth_information;
    }

    return _children;
}

void Rsvp::ControllerBriefs::ControllerBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "controller-name")
    {
        controller_name = value;
        controller_name.value_namespace = name_space;
        controller_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerBriefs::ControllerBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "controller-name")
    {
        controller_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
}

bool Rsvp::ControllerBriefs::ControllerBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-information" || name == "controller-name" || name == "interface-name-xr")
        return true;
    return false;
}

Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
        ,
    pre_standard_dste_interface(std::make_shared<Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface>())
    , standard_dste_interface(std::make_shared<Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    standard_dste_interface->parent = this;

    yang_name = "bandwidth-information"; yang_parent_name = "controller-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::~BandwidthInformation()
{
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::has_data() const
{
    if (is_presence_container) return true;
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_mode.yfilter)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.yfilter)) leaf_name_data.push_back(dste_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface == nullptr)
        {
            pre_standard_dste_interface = std::make_shared<Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface>();
        }
        return pre_standard_dste_interface;
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface == nullptr)
        {
            standard_dste_interface = std::make_shared<Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface>();
        }
        return standard_dste_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pre_standard_dste_interface != nullptr)
    {
        _children["pre-standard-dste-interface"] = pre_standard_dste_interface;
    }

    if(standard_dste_interface != nullptr)
    {
        _children["standard-dste-interface"] = standard_dste_interface;
    }

    return _children;
}

void Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
        dste_mode.value_namespace = name_space;
        dste_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-mode")
    {
        dste_mode.yfilter = yfilter;
    }
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-standard-dste-interface" || name == "standard-dste-interface" || name == "dste-mode")
        return true;
    return false;
}

Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"}
{

    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    if (is_presence_container) return true;
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_subpool_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set;
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_subpool_bandwidth.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_subpool_bandwidth_absolute.yfilter);
}

std::string Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.yfilter)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
        max_subpool_bandwidth.value_namespace = name_space;
        max_subpool_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
        is_max_subpool_bandwidth_absolute.value_namespace = name_space;
        is_max_subpool_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute.yfilter = yfilter;
    }
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::PreStandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-subpool-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-subpool-bandwidth-absolute")
        return true;
    return false;
}

Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_pool0_bandwidth{YType::uint64, "max-pool0-bandwidth"},
    max_pool1_bandwidth{YType::uint64, "max-pool1-bandwidth"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_bc0_bandwidth_absolute{YType::boolean, "is-max-bc0-bandwidth-absolute"},
    is_max_bc1_bandwidth_absolute{YType::boolean, "is-max-bc1-bandwidth-absolute"}
{

    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::has_data() const
{
    if (is_presence_container) return true;
    return allocated_bit_rate.is_set
	|| max_flow_bandwidth.is_set
	|| max_bandwidth.is_set
	|| max_pool0_bandwidth.is_set
	|| max_pool1_bandwidth.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_bc0_bandwidth_absolute.is_set
	|| is_max_bc1_bandwidth_absolute.is_set;
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bit_rate.yfilter)
	|| ydk::is_set(max_flow_bandwidth.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_pool0_bandwidth.yfilter)
	|| ydk::is_set(max_pool1_bandwidth.yfilter)
	|| ydk::is_set(is_max_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc0_bandwidth_absolute.yfilter)
	|| ydk::is_set(is_max_bc1_bandwidth_absolute.yfilter);
}

std::string Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.yfilter)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.yfilter)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.yfilter)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.yfilter)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.yfilter)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
        allocated_bit_rate.value_namespace = name_space;
        allocated_bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
        max_flow_bandwidth.value_namespace = name_space;
        max_flow_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
        max_pool0_bandwidth.value_namespace = name_space;
        max_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
        max_pool1_bandwidth.value_namespace = name_space;
        max_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
        is_max_bandwidth_absolute.value_namespace = name_space;
        is_max_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
        is_max_bc0_bandwidth_absolute.value_namespace = name_space;
        is_max_bc0_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
        is_max_bc1_bandwidth_absolute.value_namespace = name_space;
        is_max_bc1_bandwidth_absolute.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate.yfilter = yfilter;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute.yfilter = yfilter;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute.yfilter = yfilter;
    }
}

bool Rsvp::ControllerBriefs::ControllerBrief::BandwidthInformation::StandardDsteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bit-rate" || name == "max-flow-bandwidth" || name == "max-bandwidth" || name == "max-pool0-bandwidth" || name == "max-pool1-bandwidth" || name == "is-max-bandwidth-absolute" || name == "is-max-bc0-bandwidth-absolute" || name == "is-max-bc1-bandwidth-absolute")
        return true;
    return false;
}

Rsvp::GracefulRestart::GracefulRestart()
    :
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    global_neighbors{YType::uint32, "global-neighbors"},
    restart_time{YType::uint32, "restart-time"},
    recovery_time{YType::uint32, "recovery-time"},
    is_recovery_timer_running{YType::boolean, "is-recovery-timer-running"},
    hello_interval{YType::uint32, "hello-interval"},
    missed_hellos{YType::uint8, "missed-hellos"},
    pending_states{YType::uint32, "pending-states"}
        ,
    recovery_time_left(std::make_shared<Rsvp::GracefulRestart::RecoveryTimeLeft>())
    , recovery_timer_exp_time(std::make_shared<Rsvp::GracefulRestart::RecoveryTimerExpTime>())
    , local_node_address(this, {})
{
    recovery_time_left->parent = this;
    recovery_timer_exp_time->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::GracefulRestart::~GracefulRestart()
{
}

bool Rsvp::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_node_address.len(); index++)
    {
        if(local_node_address[index]->has_data())
            return true;
    }
    return is_gr_enabled.is_set
	|| global_neighbors.is_set
	|| restart_time.is_set
	|| recovery_time.is_set
	|| is_recovery_timer_running.is_set
	|| hello_interval.is_set
	|| missed_hellos.is_set
	|| pending_states.is_set
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_data())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_data());
}

bool Rsvp::GracefulRestart::has_operation() const
{
    for (std::size_t index=0; index<local_node_address.len(); index++)
    {
        if(local_node_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_gr_enabled.yfilter)
	|| ydk::is_set(global_neighbors.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(recovery_time.yfilter)
	|| ydk::is_set(is_recovery_timer_running.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(missed_hellos.yfilter)
	|| ydk::is_set(pending_states.yfilter)
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_operation())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_operation());
}

std::string Rsvp::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_gr_enabled.is_set || is_set(is_gr_enabled.yfilter)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (global_neighbors.is_set || is_set(global_neighbors.yfilter)) leaf_name_data.push_back(global_neighbors.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.yfilter)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (missed_hellos.is_set || is_set(missed_hellos.yfilter)) leaf_name_data.push_back(missed_hellos.get_name_leafdata());
    if (pending_states.is_set || is_set(pending_states.yfilter)) leaf_name_data.push_back(pending_states.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery-time-left")
    {
        if(recovery_time_left == nullptr)
        {
            recovery_time_left = std::make_shared<Rsvp::GracefulRestart::RecoveryTimeLeft>();
        }
        return recovery_time_left;
    }

    if(child_yang_name == "recovery-timer-exp-time")
    {
        if(recovery_timer_exp_time == nullptr)
        {
            recovery_timer_exp_time = std::make_shared<Rsvp::GracefulRestart::RecoveryTimerExpTime>();
        }
        return recovery_timer_exp_time;
    }

    if(child_yang_name == "local-node-address")
    {
        auto ent_ = std::make_shared<Rsvp::GracefulRestart::LocalNodeAddress>();
        ent_->parent = this;
        local_node_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recovery_time_left != nullptr)
    {
        _children["recovery-time-left"] = recovery_time_left;
    }

    if(recovery_timer_exp_time != nullptr)
    {
        _children["recovery-timer-exp-time"] = recovery_timer_exp_time;
    }

    count_ = 0;
    for (auto ent_ : local_node_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
        is_gr_enabled.value_namespace = name_space;
        is_gr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-neighbors")
    {
        global_neighbors = value;
        global_neighbors.value_namespace = name_space;
        global_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
        is_recovery_timer_running.value_namespace = name_space;
        is_recovery_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missed-hellos")
    {
        missed_hellos = value;
        missed_hellos.value_namespace = name_space;
        missed_hellos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-states")
    {
        pending_states = value;
        pending_states.value_namespace = name_space;
        pending_states.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled.yfilter = yfilter;
    }
    if(value_path == "global-neighbors")
    {
        global_neighbors.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "missed-hellos")
    {
        missed_hellos.yfilter = yfilter;
    }
    if(value_path == "pending-states")
    {
        pending_states.yfilter = yfilter;
    }
}

bool Rsvp::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery-time-left" || name == "recovery-timer-exp-time" || name == "local-node-address" || name == "is-gr-enabled" || name == "global-neighbors" || name == "restart-time" || name == "recovery-time" || name == "is-recovery-timer-running" || name == "hello-interval" || name == "missed-hellos" || name == "pending-states")
        return true;
    return false;
}

Rsvp::GracefulRestart::RecoveryTimeLeft::RecoveryTimeLeft()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "recovery-time-left"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::GracefulRestart::RecoveryTimeLeft::~RecoveryTimeLeft()
{
}

bool Rsvp::GracefulRestart::RecoveryTimeLeft::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::GracefulRestart::RecoveryTimeLeft::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::GracefulRestart::RecoveryTimeLeft::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GracefulRestart::RecoveryTimeLeft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-time-left";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GracefulRestart::RecoveryTimeLeft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GracefulRestart::RecoveryTimeLeft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GracefulRestart::RecoveryTimeLeft::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GracefulRestart::RecoveryTimeLeft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GracefulRestart::RecoveryTimeLeft::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Rsvp::GracefulRestart::RecoveryTimeLeft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::GracefulRestart::RecoveryTimerExpTime::RecoveryTimerExpTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "recovery-timer-exp-time"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::GracefulRestart::RecoveryTimerExpTime::~RecoveryTimerExpTime()
{
}

bool Rsvp::GracefulRestart::RecoveryTimerExpTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::GracefulRestart::RecoveryTimerExpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::GracefulRestart::RecoveryTimerExpTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GracefulRestart::RecoveryTimerExpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-timer-exp-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GracefulRestart::RecoveryTimerExpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GracefulRestart::RecoveryTimerExpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GracefulRestart::RecoveryTimerExpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GracefulRestart::RecoveryTimerExpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GracefulRestart::RecoveryTimerExpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Rsvp::GracefulRestart::RecoveryTimerExpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::GracefulRestart::LocalNodeAddress::LocalNodeAddress()
    :
    local_node_ip_address{YType::str, "local-node-ip-address"},
    application_type{YType::enumeration, "application-type"}
{

    yang_name = "local-node-address"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::GracefulRestart::LocalNodeAddress::~LocalNodeAddress()
{
}

bool Rsvp::GracefulRestart::LocalNodeAddress::has_data() const
{
    if (is_presence_container) return true;
    return local_node_ip_address.is_set
	|| application_type.is_set;
}

bool Rsvp::GracefulRestart::LocalNodeAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_node_ip_address.yfilter)
	|| ydk::is_set(application_type.yfilter);
}

std::string Rsvp::GracefulRestart::LocalNodeAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::GracefulRestart::LocalNodeAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-node-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::GracefulRestart::LocalNodeAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_node_ip_address.is_set || is_set(local_node_ip_address.yfilter)) leaf_name_data.push_back(local_node_ip_address.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::GracefulRestart::LocalNodeAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::GracefulRestart::LocalNodeAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::GracefulRestart::LocalNodeAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-node-ip-address")
    {
        local_node_ip_address = value;
        local_node_ip_address.value_namespace = name_space;
        local_node_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::GracefulRestart::LocalNodeAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-node-ip-address")
    {
        local_node_ip_address.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
}

bool Rsvp::GracefulRestart::LocalNodeAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-node-ip-address" || name == "application-type")
        return true;
    return false;
}

Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBriefs()
    :
    hello_interface_instance_brief(this, {"source_address", "destination_address"})
{

    yang_name = "hello-interface-instance-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::HelloInterfaceInstanceBriefs::~HelloInterfaceInstanceBriefs()
{
}

bool Rsvp::HelloInterfaceInstanceBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_interface_instance_brief.len(); index++)
    {
        if(hello_interface_instance_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::HelloInterfaceInstanceBriefs::has_operation() const
{
    for (std::size_t index=0; index<hello_interface_instance_brief.len(); index++)
    {
        if(hello_interface_instance_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::HelloInterfaceInstanceBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInterfaceInstanceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInterfaceInstanceBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::HelloInterfaceInstanceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interface-instance-brief")
    {
        auto ent_ = std::make_shared<Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief>();
        ent_->parent = this;
        hello_interface_instance_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::HelloInterfaceInstanceBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_interface_instance_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::HelloInterfaceInstanceBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::HelloInterfaceInstanceBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::HelloInterfaceInstanceBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interface-instance-brief")
        return true;
    return false;
}

Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::HelloInterfaceInstanceBrief()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    source_address_xr{YType::str, "source-address-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    instance_type{YType::enumeration, "instance-type"},
    hello_interface{YType::str, "hello-interface"}
{

    yang_name = "hello-interface-instance-brief"; yang_parent_name = "hello-interface-instance-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::~HelloInterfaceInstanceBrief()
{
}

bool Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| source_address_xr.is_set
	|| destination_address_xr.is_set
	|| instance_type.is_set
	|| hello_interface.is_set;
}

bool Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(instance_type.yfilter)
	|| ydk::is_set(hello_interface.yfilter);
}

std::string Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/hello-interface-instance-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-brief";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.yfilter)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.yfilter)) leaf_name_data.push_back(hello_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-type")
    {
        instance_type = value;
        instance_type.value_namespace = name_space;
        instance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interface")
    {
        hello_interface = value;
        hello_interface.value_namespace = name_space;
        hello_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "instance-type")
    {
        instance_type.yfilter = yfilter;
    }
    if(value_path == "hello-interface")
    {
        hello_interface.yfilter = yfilter;
    }
}

bool Rsvp::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "source-address-xr" || name == "destination-address-xr" || name == "instance-type" || name == "hello-interface")
        return true;
    return false;
}

Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetails()
    :
    hello_interface_instance_detail(this, {"source_address", "destination_address"})
{

    yang_name = "hello-interface-instance-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::HelloInterfaceInstanceDetails::~HelloInterfaceInstanceDetails()
{
}

bool Rsvp::HelloInterfaceInstanceDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_interface_instance_detail.len(); index++)
    {
        if(hello_interface_instance_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::HelloInterfaceInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<hello_interface_instance_detail.len(); index++)
    {
        if(hello_interface_instance_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::HelloInterfaceInstanceDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInterfaceInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInterfaceInstanceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::HelloInterfaceInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interface-instance-detail")
    {
        auto ent_ = std::make_shared<Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail>();
        ent_->parent = this;
        hello_interface_instance_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::HelloInterfaceInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_interface_instance_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::HelloInterfaceInstanceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::HelloInterfaceInstanceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::HelloInterfaceInstanceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interface-instance-detail")
        return true;
    return false;
}

Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::HelloInterfaceInstanceDetail()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    source_address_xr{YType::str, "source-address-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    hello_global_neighbor_id{YType::str, "hello-global-neighbor-id"},
    instance_type{YType::enumeration, "instance-type"},
    hello_interface{YType::str, "hello-interface"},
    source_instance{YType::uint32, "source-instance"},
    destination_instance{YType::uint32, "destination-instance"},
    hello_messages_sent{YType::uint64, "hello-messages-sent"},
    hello_messages_received{YType::uint64, "hello-messages-received"}
        ,
    last_message_sent_time(std::make_shared<Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime>())
{
    last_message_sent_time->parent = this;

    yang_name = "hello-interface-instance-detail"; yang_parent_name = "hello-interface-instance-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::~HelloInterfaceInstanceDetail()
{
}

bool Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| source_address_xr.is_set
	|| destination_address_xr.is_set
	|| hello_global_neighbor_id.is_set
	|| instance_type.is_set
	|| hello_interface.is_set
	|| source_instance.is_set
	|| destination_instance.is_set
	|| hello_messages_sent.is_set
	|| hello_messages_received.is_set
	|| (last_message_sent_time !=  nullptr && last_message_sent_time->has_data());
}

bool Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(hello_global_neighbor_id.yfilter)
	|| ydk::is_set(instance_type.yfilter)
	|| ydk::is_set(hello_interface.yfilter)
	|| ydk::is_set(source_instance.yfilter)
	|| ydk::is_set(destination_instance.yfilter)
	|| ydk::is_set(hello_messages_sent.yfilter)
	|| ydk::is_set(hello_messages_received.yfilter)
	|| (last_message_sent_time !=  nullptr && last_message_sent_time->has_operation());
}

std::string Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/hello-interface-instance-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-detail";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (hello_global_neighbor_id.is_set || is_set(hello_global_neighbor_id.yfilter)) leaf_name_data.push_back(hello_global_neighbor_id.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.yfilter)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.yfilter)) leaf_name_data.push_back(hello_interface.get_name_leafdata());
    if (source_instance.is_set || is_set(source_instance.yfilter)) leaf_name_data.push_back(source_instance.get_name_leafdata());
    if (destination_instance.is_set || is_set(destination_instance.yfilter)) leaf_name_data.push_back(destination_instance.get_name_leafdata());
    if (hello_messages_sent.is_set || is_set(hello_messages_sent.yfilter)) leaf_name_data.push_back(hello_messages_sent.get_name_leafdata());
    if (hello_messages_received.is_set || is_set(hello_messages_received.yfilter)) leaf_name_data.push_back(hello_messages_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-message-sent-time")
    {
        if(last_message_sent_time == nullptr)
        {
            last_message_sent_time = std::make_shared<Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime>();
        }
        return last_message_sent_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_message_sent_time != nullptr)
    {
        _children["last-message-sent-time"] = last_message_sent_time;
    }

    return _children;
}

void Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-global-neighbor-id")
    {
        hello_global_neighbor_id = value;
        hello_global_neighbor_id.value_namespace = name_space;
        hello_global_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-type")
    {
        instance_type = value;
        instance_type.value_namespace = name_space;
        instance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interface")
    {
        hello_interface = value;
        hello_interface.value_namespace = name_space;
        hello_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-instance")
    {
        source_instance = value;
        source_instance.value_namespace = name_space;
        source_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-instance")
    {
        destination_instance = value;
        destination_instance.value_namespace = name_space;
        destination_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-messages-sent")
    {
        hello_messages_sent = value;
        hello_messages_sent.value_namespace = name_space;
        hello_messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-messages-received")
    {
        hello_messages_received = value;
        hello_messages_received.value_namespace = name_space;
        hello_messages_received.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "hello-global-neighbor-id")
    {
        hello_global_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "instance-type")
    {
        instance_type.yfilter = yfilter;
    }
    if(value_path == "hello-interface")
    {
        hello_interface.yfilter = yfilter;
    }
    if(value_path == "source-instance")
    {
        source_instance.yfilter = yfilter;
    }
    if(value_path == "destination-instance")
    {
        destination_instance.yfilter = yfilter;
    }
    if(value_path == "hello-messages-sent")
    {
        hello_messages_sent.yfilter = yfilter;
    }
    if(value_path == "hello-messages-received")
    {
        hello_messages_received.yfilter = yfilter;
    }
}

bool Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-message-sent-time" || name == "source-address" || name == "destination-address" || name == "source-address-xr" || name == "destination-address-xr" || name == "hello-global-neighbor-id" || name == "instance-type" || name == "hello-interface" || name == "source-instance" || name == "destination-instance" || name == "hello-messages-sent" || name == "hello-messages-received")
        return true;
    return false;
}

Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::LastMessageSentTime()
    :
    seconds{YType::int32, "seconds"},
    nanoseconds{YType::int32, "nanoseconds"}
{

    yang_name = "last-message-sent-time"; yang_parent_name = "hello-interface-instance-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::~LastMessageSentTime()
{
}

bool Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-message-sent-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Rsvp::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetails()
    :
    interface_neighbor_detail(this, {"neighbor_address"})
{

    yang_name = "interface-neighbor-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::InterfaceNeighborDetails::~InterfaceNeighborDetails()
{
}

bool Rsvp::InterfaceNeighborDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_neighbor_detail.len(); index++)
    {
        if(interface_neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::InterfaceNeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor_detail.len(); index++)
    {
        if(interface_neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::InterfaceNeighborDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceNeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceNeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceNeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-neighbor-detail")
    {
        auto ent_ = std::make_shared<Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail>();
        ent_->parent = this;
        interface_neighbor_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceNeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_neighbor_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::InterfaceNeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::InterfaceNeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::InterfaceNeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-detail")
        return true;
    return false;
}

Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborDetail()
    :
    neighbor_address{YType::str, "neighbor-address"},
    node_address{YType::str, "node-address"}
        ,
    interface_neighbor_list_detail(this, {})
{

    yang_name = "interface-neighbor-detail"; yang_parent_name = "interface-neighbor-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::~InterfaceNeighborDetail()
{
}

bool Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_neighbor_list_detail.len(); index++)
    {
        if(interface_neighbor_list_detail[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| node_address.is_set;
}

bool Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor_list_detail.len(); index++)
    {
        if(interface_neighbor_list_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(node_address.yfilter);
}

std::string Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/interface-neighbor-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-detail";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.yfilter)) leaf_name_data.push_back(node_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-neighbor-list-detail")
    {
        auto ent_ = std::make_shared<Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail>();
        ent_->parent = this;
        interface_neighbor_list_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_neighbor_list_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-address")
    {
        node_address = value;
        node_address.value_namespace = name_space;
        node_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "node-address")
    {
        node_address.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-list-detail" || name == "neighbor-address" || name == "node-address")
        return true;
    return false;
}

Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::InterfaceNeighborListDetail()
    :
    interface_neighbor_address{YType::str, "interface-neighbor-address"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    is_rr_enabled{YType::boolean, "is-rr-enabled"},
    neighbor_epoch{YType::uint32, "neighbor-epoch"},
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    retransmitted_messages{YType::uint32, "retransmitted-messages"}
{

    yang_name = "interface-neighbor-list-detail"; yang_parent_name = "interface-neighbor-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::~InterfaceNeighborListDetail()
{
}

bool Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::has_data() const
{
    if (is_presence_container) return true;
    return interface_neighbor_address.is_set
	|| neighbor_interface_name.is_set
	|| is_rr_enabled.is_set
	|| neighbor_epoch.is_set
	|| out_of_order_messages.is_set
	|| retransmitted_messages.is_set;
}

bool Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_neighbor_address.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(is_rr_enabled.yfilter)
	|| ydk::is_set(neighbor_epoch.yfilter)
	|| ydk::is_set(out_of_order_messages.yfilter)
	|| ydk::is_set(retransmitted_messages.yfilter);
}

std::string Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-list-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_address.is_set || is_set(interface_neighbor_address.yfilter)) leaf_name_data.push_back(interface_neighbor_address.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (is_rr_enabled.is_set || is_set(is_rr_enabled.yfilter)) leaf_name_data.push_back(is_rr_enabled.get_name_leafdata());
    if (neighbor_epoch.is_set || is_set(neighbor_epoch.yfilter)) leaf_name_data.push_back(neighbor_epoch.get_name_leafdata());
    if (out_of_order_messages.is_set || is_set(out_of_order_messages.yfilter)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (retransmitted_messages.is_set || is_set(retransmitted_messages.yfilter)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-neighbor-address")
    {
        interface_neighbor_address = value;
        interface_neighbor_address.value_namespace = name_space;
        interface_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rr-enabled")
    {
        is_rr_enabled = value;
        is_rr_enabled.value_namespace = name_space;
        is_rr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-epoch")
    {
        neighbor_epoch = value;
        neighbor_epoch.value_namespace = name_space;
        neighbor_epoch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages = value;
        out_of_order_messages.value_namespace = name_space;
        out_of_order_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages = value;
        retransmitted_messages.value_namespace = name_space;
        retransmitted_messages.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-neighbor-address")
    {
        interface_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "is-rr-enabled")
    {
        is_rr_enabled.yfilter = yfilter;
    }
    if(value_path == "neighbor-epoch")
    {
        neighbor_epoch.yfilter = yfilter;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages.yfilter = yfilter;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages.yfilter = yfilter;
    }
}

bool Rsvp::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-neighbor-address" || name == "neighbor-interface-name" || name == "is-rr-enabled" || name == "neighbor-epoch" || name == "out-of-order-messages" || name == "retransmitted-messages")
        return true;
    return false;
}

Rsvp::Nsr::Nsr()
    :
    status(std::make_shared<Rsvp::Nsr::Status>())
{
    status->parent = this;

    yang_name = "nsr"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Nsr::~Nsr()
{
}

bool Rsvp::Nsr::has_data() const
{
    if (is_presence_container) return true;
    return (status !=  nullptr && status->has_data());
}

bool Rsvp::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation());
}

std::string Rsvp::Nsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Rsvp::Nsr::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void Rsvp::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Rsvp::Nsr::Status::Status()
    :
    role{YType::enumeration, "role"}
        ,
    idt_status(std::make_shared<Rsvp::Nsr::Status::IdtStatus>())
    , previous_idt_status(std::make_shared<Rsvp::Nsr::Status::PreviousIdtStatus>())
{
    idt_status->parent = this;
    previous_idt_status->parent = this;

    yang_name = "status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Nsr::Status::~Status()
{
}

bool Rsvp::Nsr::Status::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool Rsvp::Nsr::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string Rsvp::Nsr::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Nsr::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Nsr::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Nsr::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<Rsvp::Nsr::Status::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<Rsvp::Nsr::Status::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Nsr::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt_status != nullptr)
    {
        _children["idt-status"] = idt_status;
    }

    if(previous_idt_status != nullptr)
    {
        _children["previous-idt-status"] = previous_idt_status;
    }

    return _children;
}

void Rsvp::Nsr::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Nsr::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool Rsvp::Nsr::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previous-idt-status" || name == "role")
        return true;
    return false;
}

Rsvp::Nsr::Status::IdtStatus::IdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Nsr::Status::IdtStatus::~IdtStatus()
{
}

bool Rsvp::Nsr::Status::IdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Nsr::Status::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Nsr::Status::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/nsr/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Nsr::Status::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Nsr::Status::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Nsr::Status::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Nsr::Status::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Nsr::Status::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Nsr::Status::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool Rsvp::Nsr::Status::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::Nsr::Status::PreviousIdtStatus::PreviousIdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Nsr::Status::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool Rsvp::Nsr::Status::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Nsr::Status::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Nsr::Status::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/nsr/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Nsr::Status::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Nsr::Status::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Nsr::Status::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Nsr::Status::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Nsr::Status::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Nsr::Status::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool Rsvp::Nsr::Status::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::Summary::Summary()
    :
    interfaces{YType::uint32, "interfaces"},
    ls_ps{YType::uint32, "ls-ps"}
        ,
    issu_status(std::make_shared<Rsvp::Summary::IssuStatus>())
    , nsr_status(std::make_shared<Rsvp::Summary::NsrStatus>())
    , database_counters(std::make_shared<Rsvp::Summary::DatabaseCounters>())
{
    issu_status->parent = this;
    nsr_status->parent = this;
    database_counters->parent = this;

    yang_name = "summary"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Summary::~Summary()
{
}

bool Rsvp::Summary::has_data() const
{
    if (is_presence_container) return true;
    return interfaces.is_set
	|| ls_ps.is_set
	|| (issu_status !=  nullptr && issu_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data())
	|| (database_counters !=  nullptr && database_counters->has_data());
}

bool Rsvp::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation())
	|| (database_counters !=  nullptr && database_counters->has_operation());
}

std::string Rsvp::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<Rsvp::Summary::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<Rsvp::Summary::NsrStatus>();
        }
        return nsr_status;
    }

    if(child_yang_name == "database-counters")
    {
        if(database_counters == nullptr)
        {
            database_counters = std::make_shared<Rsvp::Summary::DatabaseCounters>();
        }
        return database_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(issu_status != nullptr)
    {
        _children["issu-status"] = issu_status;
    }

    if(nsr_status != nullptr)
    {
        _children["nsr-status"] = nsr_status;
    }

    if(database_counters != nullptr)
    {
        _children["database-counters"] = database_counters;
    }

    return _children;
}

void Rsvp::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
}

bool Rsvp::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "issu-status" || name == "nsr-status" || name == "database-counters" || name == "interfaces" || name == "ls-ps")
        return true;
    return false;
}

Rsvp::Summary::IssuStatus::IssuStatus()
    :
    role{YType::enumeration, "role"}
        ,
    idt_status(std::make_shared<Rsvp::Summary::IssuStatus::IdtStatus>())
    , previous_idt_status(std::make_shared<Rsvp::Summary::IssuStatus::PreviousIdtStatus>())
{
    idt_status->parent = this;
    previous_idt_status->parent = this;

    yang_name = "issu-status"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Summary::IssuStatus::~IssuStatus()
{
}

bool Rsvp::Summary::IssuStatus::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool Rsvp::Summary::IssuStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string Rsvp::Summary::IssuStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::IssuStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Summary::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<Rsvp::Summary::IssuStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<Rsvp::Summary::IssuStatus::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Summary::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt_status != nullptr)
    {
        _children["idt-status"] = idt_status;
    }

    if(previous_idt_status != nullptr)
    {
        _children["previous-idt-status"] = previous_idt_status;
    }

    return _children;
}

void Rsvp::Summary::IssuStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Summary::IssuStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool Rsvp::Summary::IssuStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previous-idt-status" || name == "role")
        return true;
    return false;
}

Rsvp::Summary::IssuStatus::IdtStatus::IdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Summary::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool Rsvp::Summary::IssuStatus::IdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Summary::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Summary::IssuStatus::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/issu-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::IssuStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Summary::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Summary::IssuStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Summary::IssuStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Summary::IssuStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool Rsvp::Summary::IssuStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::Summary::IssuStatus::PreviousIdtStatus::PreviousIdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Summary::IssuStatus::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool Rsvp::Summary::IssuStatus::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Summary::IssuStatus::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Summary::IssuStatus::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/issu-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::IssuStatus::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::IssuStatus::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Summary::IssuStatus::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Summary::IssuStatus::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Summary::IssuStatus::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Summary::IssuStatus::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool Rsvp::Summary::IssuStatus::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::Summary::NsrStatus::NsrStatus()
    :
    role{YType::enumeration, "role"}
        ,
    idt_status(std::make_shared<Rsvp::Summary::NsrStatus::IdtStatus>())
    , previous_idt_status(std::make_shared<Rsvp::Summary::NsrStatus::PreviousIdtStatus>())
{
    idt_status->parent = this;
    previous_idt_status->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Summary::NsrStatus::~NsrStatus()
{
}

bool Rsvp::Summary::NsrStatus::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool Rsvp::Summary::NsrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string Rsvp::Summary::NsrStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::NsrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Summary::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<Rsvp::Summary::NsrStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<Rsvp::Summary::NsrStatus::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Summary::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt_status != nullptr)
    {
        _children["idt-status"] = idt_status;
    }

    if(previous_idt_status != nullptr)
    {
        _children["previous-idt-status"] = previous_idt_status;
    }

    return _children;
}

void Rsvp::Summary::NsrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Summary::NsrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool Rsvp::Summary::NsrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previous-idt-status" || name == "role")
        return true;
    return false;
}

Rsvp::Summary::NsrStatus::IdtStatus::IdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Summary::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool Rsvp::Summary::NsrStatus::IdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Summary::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Summary::NsrStatus::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/nsr-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::NsrStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Summary::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Summary::NsrStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Summary::NsrStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Summary::NsrStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool Rsvp::Summary::NsrStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::Summary::NsrStatus::PreviousIdtStatus::PreviousIdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Summary::NsrStatus::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool Rsvp::Summary::NsrStatus::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool Rsvp::Summary::NsrStatus::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string Rsvp::Summary::NsrStatus::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/nsr-status/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::NsrStatus::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::NsrStatus::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Summary::NsrStatus::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Summary::NsrStatus::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Summary::NsrStatus::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Summary::NsrStatus::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool Rsvp::Summary::NsrStatus::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

Rsvp::Summary::DatabaseCounters::DatabaseCounters()
    :
    sessions{YType::uint32, "sessions"},
    incoming_paths{YType::uint32, "incoming-paths"},
    outgoing_paths{YType::uint32, "outgoing-paths"},
    incoming_reservations{YType::uint32, "incoming-reservations"},
    outgoing_reservations{YType::uint32, "outgoing-reservations"},
    interfaces{YType::uint32, "interfaces"}
{

    yang_name = "database-counters"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Summary::DatabaseCounters::~DatabaseCounters()
{
}

bool Rsvp::Summary::DatabaseCounters::has_data() const
{
    if (is_presence_container) return true;
    return sessions.is_set
	|| incoming_paths.is_set
	|| outgoing_paths.is_set
	|| incoming_reservations.is_set
	|| outgoing_reservations.is_set
	|| interfaces.is_set;
}

bool Rsvp::Summary::DatabaseCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sessions.yfilter)
	|| ydk::is_set(incoming_paths.yfilter)
	|| ydk::is_set(outgoing_paths.yfilter)
	|| ydk::is_set(incoming_reservations.yfilter)
	|| ydk::is_set(outgoing_reservations.yfilter)
	|| ydk::is_set(interfaces.yfilter);
}

std::string Rsvp::Summary::DatabaseCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Summary::DatabaseCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Summary::DatabaseCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessions.is_set || is_set(sessions.yfilter)) leaf_name_data.push_back(sessions.get_name_leafdata());
    if (incoming_paths.is_set || is_set(incoming_paths.yfilter)) leaf_name_data.push_back(incoming_paths.get_name_leafdata());
    if (outgoing_paths.is_set || is_set(outgoing_paths.yfilter)) leaf_name_data.push_back(outgoing_paths.get_name_leafdata());
    if (incoming_reservations.is_set || is_set(incoming_reservations.yfilter)) leaf_name_data.push_back(incoming_reservations.get_name_leafdata());
    if (outgoing_reservations.is_set || is_set(outgoing_reservations.yfilter)) leaf_name_data.push_back(outgoing_reservations.get_name_leafdata());
    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Summary::DatabaseCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Summary::DatabaseCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Summary::DatabaseCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sessions")
    {
        sessions = value;
        sessions.value_namespace = name_space;
        sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-paths")
    {
        incoming_paths = value;
        incoming_paths.value_namespace = name_space;
        incoming_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths = value;
        outgoing_paths.value_namespace = name_space;
        outgoing_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations = value;
        incoming_reservations.value_namespace = name_space;
        incoming_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations = value;
        outgoing_reservations.value_namespace = name_space;
        outgoing_reservations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Summary::DatabaseCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sessions")
    {
        sessions.yfilter = yfilter;
    }
    if(value_path == "incoming-paths")
    {
        incoming_paths.yfilter = yfilter;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths.yfilter = yfilter;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations.yfilter = yfilter;
    }
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
}

bool Rsvp::Summary::DatabaseCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions" || name == "incoming-paths" || name == "outgoing-paths" || name == "incoming-reservations" || name == "outgoing-reservations" || name == "interfaces")
        return true;
    return false;
}

Rsvp::Frrs::Frrs()
    :
    frr(this, {})
{

    yang_name = "frrs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Frrs::~Frrs()
{
}

bool Rsvp::Frrs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr.len(); index++)
    {
        if(frr[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::Frrs::has_operation() const
{
    for (std::size_t index=0; index<frr.len(); index++)
    {
        if(frr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::Frrs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Frrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr")
    {
        auto ent_ = std::make_shared<Rsvp::Frrs::Frr>();
        ent_->parent = this;
        frr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Frrs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::Frrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Frrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Frrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Frr()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint32, "destination-port"},
    protocol{YType::uint32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    p2mp_id{YType::uint32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint32, "source-port"},
    sub_group_origin{YType::str, "sub-group-origin"},
    sub_group_id{YType::uint32, "sub-group-id"},
    vrf_name{YType::str, "vrf-name"},
    path_status{YType::enumeration, "path-status"},
    reservation_status{YType::enumeration, "reservation-status"}
        ,
    session(std::make_shared<Rsvp::Frrs::Frr::Session>())
    , s2l_sub_lsp(std::make_shared<Rsvp::Frrs::Frr::S2lSubLsp>())
{
    session->parent = this;
    s2l_sub_lsp->parent = this;

    yang_name = "frr"; yang_parent_name = "frrs"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Frrs::Frr::~Frr()
{
}

bool Rsvp::Frrs::Frr::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set
	|| extended_tunnel_id.is_set
	|| session_type.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_origin.is_set
	|| sub_group_id.is_set
	|| vrf_name.is_set
	|| path_status.is_set
	|| reservation_status.is_set
	|| (session !=  nullptr && session->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data());
}

bool Rsvp::Frrs::Frr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| ydk::is_set(reservation_status.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation());
}

std::string Rsvp::Frrs::Frr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (reservation_status.is_set || is_set(reservation_status.yfilter)) leaf_name_data.push_back(reservation_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Frrs::Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::Frrs::Frr::Session>();
        }
        return session;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::Frrs::Frr::S2lSubLsp>();
        }
        return s2l_sub_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Frrs::Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(s2l_sub_lsp != nullptr)
    {
        _children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    return _children;
}

void Rsvp::Frrs::Frr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservation-status")
    {
        reservation_status = value;
        reservation_status.value_namespace = name_space;
        reservation_status.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
    if(value_path == "reservation-status")
    {
        reservation_status.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "s2l-sub-lsp" || name == "destination-address" || name == "destination-port" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "p2mp-id" || name == "source-address" || name == "source-port" || name == "sub-group-origin" || name == "sub-group-id" || name == "vrf-name" || name == "path-status" || name == "reservation-status")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Frrs::Frr::Session::~Session()
{
}

bool Rsvp::Frrs::Frr::Session::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::Frrs::Frr::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::Frrs::Frr::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Frrs::Frr::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Frrs::Frr::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_session != nullptr)
    {
        _children["rsvp-session"] = rsvp_session;
    }

    return _children;
}

void Rsvp::Frrs::Frr::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::Frrs::Frr::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::Frrs::Frr::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
        ,
    ipv4(std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4>())
    , ipv4_lsp_session(std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession>())
    , ipv4_uni_session(std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession>())
    , ipv4_p2mp_lsp_session(std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_uni_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Frrs::Frr::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::has_data() const
{
    if (is_presence_container) return true;
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data());
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation());
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Frrs::Frr::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Frrs::Frr::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        _children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        _children["ipv4-uni-session"] = ipv4_uni_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        _children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    return _children;
}

void Rsvp::Frrs::Frr::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-uni-session" || name == "ipv4-p2mp-lsp-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::uint8, "protocol"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| protocol.is_set
	|| destination_port.is_set;
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "protocol" || name == "destination-port")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::Ipv4P2mpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::~Ipv4P2mpLspSession()
{
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::has_data() const
{
    if (is_presence_container) return true;
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::Session::RsvpSession::Ipv4P2mpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::Frrs::Frr::S2lSubLsp::S2lSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::Frrs::Frr::S2lSubLsp::~S2lSubLsp()
{
}

bool Rsvp::Frrs::Frr::S2lSubLsp::has_data() const
{
    if (is_presence_container) return true;
    return s2l_destination_address.is_set;
}

bool Rsvp::Frrs::Frr::S2lSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::Frrs::Frr::S2lSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/frrs/frr/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::Frrs::Frr::S2lSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::Frrs::Frr::S2lSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::Frrs::Frr::S2lSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::Frrs::Frr::S2lSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::Frrs::Frr::S2lSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::Frrs::Frr::S2lSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::Frrs::Frr::S2lSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBriefs()
    :
    request_brief(this, {})
{

    yang_name = "request-briefs"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::~RequestBriefs()
{
}

bool Rsvp::RequestBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<request_brief.len(); index++)
    {
        if(request_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::RequestBriefs::has_operation() const
{
    for (std::size_t index=0; index<request_brief.len(); index++)
    {
        if(request_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::RequestBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request-brief")
    {
        auto ent_ = std::make_shared<Rsvp::RequestBriefs::RequestBrief>();
        ent_->parent = this;
        request_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : request_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::RequestBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RequestBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RequestBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request-brief")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::RequestBrief()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint32, "destination-port"},
    protocol{YType::uint32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    p2mp_id{YType::uint32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint32, "source-port"},
    sub_group_origin{YType::str, "sub-group-origin"},
    sub_group_id{YType::uint32, "sub-group-id"},
    vrf_name{YType::str, "vrf-name"},
    output_interface{YType::str, "output-interface"}
        ,
    session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session>())
    , s2l_sub_lsp(std::make_shared<Rsvp::RequestBriefs::RequestBrief::S2lSubLsp>())
    , flow_spec(std::make_shared<Rsvp::RequestBriefs::RequestBrief::FlowSpec>())
    , generic_flow_spec(std::make_shared<Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec>())
    , filter(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter>())
    , style(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Style>())
{
    session->parent = this;
    s2l_sub_lsp->parent = this;
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    filter->parent = this;
    style->parent = this;

    yang_name = "request-brief"; yang_parent_name = "request-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::~RequestBrief()
{
}

bool Rsvp::RequestBriefs::RequestBrief::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set
	|| extended_tunnel_id.is_set
	|| session_type.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_origin.is_set
	|| sub_group_id.is_set
	|| vrf_name.is_set
	|| output_interface.is_set
	|| (session !=  nullptr && session->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (style !=  nullptr && style->has_data());
}

bool Rsvp::RequestBriefs::RequestBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (style !=  nullptr && style->has_operation());
}

std::string Rsvp::RequestBriefs::RequestBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-brief";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session>();
        }
        return session;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::RequestBriefs::RequestBrief::S2lSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<Rsvp::RequestBriefs::RequestBrief::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "style")
    {
        if(style == nullptr)
        {
            style = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Style>();
        }
        return style;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(s2l_sub_lsp != nullptr)
    {
        _children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(flow_spec != nullptr)
    {
        _children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        _children["generic-flow-spec"] = generic_flow_spec;
    }

    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    if(style != nullptr)
    {
        _children["style"] = style;
    }

    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "s2l-sub-lsp" || name == "flow-spec" || name == "generic-flow-spec" || name == "filter" || name == "style" || name == "destination-address" || name == "destination-port" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "p2mp-id" || name == "source-address" || name == "source-port" || name == "sub-group-origin" || name == "sub-group-id" || name == "vrf-name" || name == "output-interface")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::Session::~Session()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::RequestBriefs::RequestBrief::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_session != nullptr)
    {
        _children["rsvp-session"] = rsvp_session;
    }

    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RequestBriefs::RequestBrief::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
        ,
    ipv4(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4>())
    , ipv4_lsp_session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession>())
    , ipv4_uni_session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession>())
    , ipv4_p2mp_lsp_session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_uni_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::has_data() const
{
    if (is_presence_container) return true;
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data());
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation());
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        _children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        _children["ipv4-uni-session"] = ipv4_uni_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        _children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-uni-session" || name == "ipv4-p2mp-lsp-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::uint8, "protocol"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| protocol.is_set
	|| destination_port.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "protocol" || name == "destination-port")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::Ipv4P2mpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::~Ipv4P2mpLspSession()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_data() const
{
    if (is_presence_container) return true;
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2mpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::S2lSubLsp::S2lSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::S2lSubLsp::~S2lSubLsp()
{
}

bool Rsvp::RequestBriefs::RequestBrief::S2lSubLsp::has_data() const
{
    if (is_presence_container) return true;
    return s2l_destination_address.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::S2lSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::S2lSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::S2lSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::S2lSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::S2lSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::S2lSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::S2lSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::S2lSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::S2lSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"},
    flow_qos{YType::enumeration, "flow-qos"}
{

    yang_name = "flow-spec"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::FlowSpec::~FlowSpec()
{
}

bool Rsvp::RequestBriefs::RequestBrief::FlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_peak_rate.is_set
	|| flow_min_unit.is_set
	|| flow_max_unit.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set
	|| flow_qos.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_average_rate.yfilter)
	|| ydk::is_set(flow_max_burst.yfilter)
	|| ydk::is_set(flow_peak_rate.yfilter)
	|| ydk::is_set(flow_min_unit.yfilter)
	|| ydk::is_set(flow_max_unit.yfilter)
	|| ydk::is_set(flow_requested_rate.yfilter)
	|| ydk::is_set(flow_slack.yfilter)
	|| ydk::is_set(flow_qos.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.yfilter)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.yfilter)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.yfilter)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.yfilter)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.yfilter)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.yfilter)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.yfilter)) leaf_name_data.push_back(flow_slack.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.yfilter)) leaf_name_data.push_back(flow_qos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate = value;
        flow_average_rate.value_namespace = name_space;
        flow_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst = value;
        flow_max_burst.value_namespace = name_space;
        flow_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
        flow_peak_rate.value_namespace = name_space;
        flow_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
        flow_min_unit.value_namespace = name_space;
        flow_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
        flow_max_unit.value_namespace = name_space;
        flow_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate = value;
        flow_requested_rate.value_namespace = name_space;
        flow_requested_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-slack")
    {
        flow_slack = value;
        flow_slack.value_namespace = name_space;
        flow_slack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-qos")
    {
        flow_qos = value;
        flow_qos.value_namespace = name_space;
        flow_qos.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate.yfilter = yfilter;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst.yfilter = yfilter;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate.yfilter = yfilter;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit.yfilter = yfilter;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit.yfilter = yfilter;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate.yfilter = yfilter;
    }
    if(value_path == "flow-slack")
    {
        flow_slack.yfilter = yfilter;
    }
    if(value_path == "flow-qos")
    {
        flow_qos.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-peak-rate" || name == "flow-min-unit" || name == "flow-max-unit" || name == "flow-requested-rate" || name == "flow-slack" || name == "flow-qos")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
        ,
    g709otn_flow_spec(std::make_shared<Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::~GenericFlowSpec()
{
}

bool Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(g709otn_flow_spec != nullptr)
    {
        _children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::G709otnFlowSpec()
    :
    flow_signal_type{YType::uint8, "flow-signal-type"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_bit_rate{YType::uint64, "flow-bit-rate"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::~G709otnFlowSpec()
{
}

bool Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_signal_type.is_set
	|| flow_nvc.is_set
	|| flow_multiplier.is_set
	|| flow_bit_rate.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_signal_type.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
        flow_signal_type.value_namespace = name_space;
        flow_signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
        flow_nvc.value_namespace = name_space;
        flow_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
        flow_multiplier.value_namespace = name_space;
        flow_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
        flow_bit_rate.value_namespace = name_space;
        flow_bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-signal-type")
    {
        flow_signal_type.yfilter = yfilter;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc.yfilter = yfilter;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier.yfilter = yfilter;
    }
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::GenericFlowSpec::G709otnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-signal-type" || name == "flow-nvc" || name == "flow-multiplier" || name == "flow-bit-rate")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Filter::Filter()
    :
    rsvp_filter(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "filter"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::Filter::~Filter()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_filter != nullptr)
    {
        _children["rsvp-filter"] = rsvp_filter;
    }

    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RequestBriefs::RequestBrief::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
        ,
    udp_ipv4_session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session>())
    , p2mp_ipv4_session(std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session>())
{
    udp_ipv4_session->parent = this;
    p2mp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::has_data() const
{
    if (is_presence_container) return true;
    return filter_type.is_set
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data());
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation());
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp_ipv4_session != nullptr)
    {
        _children["udp-ipv4-session"] = udp_ipv4_session;
    }

    if(p2mp_ipv4_session != nullptr)
    {
        _children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-ipv4-session" || name == "p2mp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::P2mpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::~P2mpIpv4Session()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2mpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port" || name == "p2mp-sub-group-origin" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::RequestBriefs::RequestBrief::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{

    yang_name = "style"; yang_parent_name = "request-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestBriefs::RequestBrief::Style::~Style()
{
}

bool Rsvp::RequestBriefs::RequestBrief::Style::has_data() const
{
    if (is_presence_container) return true;
    return reservation_type.is_set;
}

bool Rsvp::RequestBriefs::RequestBrief::Style::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_type.yfilter);
}

std::string Rsvp::RequestBriefs::RequestBrief::Style::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-briefs/request-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestBriefs::RequestBrief::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestBriefs::RequestBrief::Style::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.yfilter)) leaf_name_data.push_back(reservation_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestBriefs::RequestBrief::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestBriefs::RequestBrief::Style::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestBriefs::RequestBrief::Style::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
        reservation_type.value_namespace = name_space;
        reservation_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestBriefs::RequestBrief::Style::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-type")
    {
        reservation_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestBriefs::RequestBrief::Style::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reservation-type")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetails()
    :
    request_detail(this, {})
{

    yang_name = "request-details"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::~RequestDetails()
{
}

bool Rsvp::RequestDetails::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<request_detail.len(); index++)
    {
        if(request_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Rsvp::RequestDetails::has_operation() const
{
    for (std::size_t index=0; index<request_detail.len(); index++)
    {
        if(request_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rsvp::RequestDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request-detail")
    {
        auto ent_ = std::make_shared<Rsvp::RequestDetails::RequestDetail>();
        ent_->parent = this;
        request_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : request_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::RequestDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RequestDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RequestDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request-detail")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::RequestDetail()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint32, "destination-port"},
    protocol{YType::uint32, "protocol"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    session_type{YType::enumeration, "session-type"},
    p2mp_id{YType::uint32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint32, "source-port"},
    sub_group_origin{YType::str, "sub-group-origin"},
    sub_group_id{YType::uint32, "sub-group-id"},
    vrf_name{YType::str, "vrf-name"},
    output_interface{YType::str, "output-interface"}
        ,
    session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Session>())
    , s2l_sub_lsp(std::make_shared<Rsvp::RequestDetails::RequestDetail::S2lSubLsp>())
    , flow_spec(std::make_shared<Rsvp::RequestDetails::RequestDetail::FlowSpec>())
    , generic_flow_spec(std::make_shared<Rsvp::RequestDetails::RequestDetail::GenericFlowSpec>())
    , filter(std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter>())
    , style(std::make_shared<Rsvp::RequestDetails::RequestDetail::Style>())
    , req_flags(std::make_shared<Rsvp::RequestDetails::RequestDetail::ReqFlags>())
    , hop(std::make_shared<Rsvp::RequestDetails::RequestDetail::Hop>())
    , header(std::make_shared<Rsvp::RequestDetails::RequestDetail::Header>())
    , policy_sources(std::make_shared<Rsvp::RequestDetails::RequestDetail::PolicySources>())
    , policy_flags(std::make_shared<Rsvp::RequestDetails::RequestDetail::PolicyFlags>())
    , policy_query_flags(std::make_shared<Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags>())
    , psb_key(this, {})
    , rsb_key(this, {})
{
    session->parent = this;
    s2l_sub_lsp->parent = this;
    flow_spec->parent = this;
    generic_flow_spec->parent = this;
    filter->parent = this;
    style->parent = this;
    req_flags->parent = this;
    hop->parent = this;
    header->parent = this;
    policy_sources->parent = this;
    policy_flags->parent = this;
    policy_query_flags->parent = this;

    yang_name = "request-detail"; yang_parent_name = "request-details"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::~RequestDetail()
{
}

bool Rsvp::RequestDetails::RequestDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<psb_key.len(); index++)
    {
        if(psb_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsb_key.len(); index++)
    {
        if(rsb_key[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set
	|| extended_tunnel_id.is_set
	|| session_type.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_origin.is_set
	|| sub_group_id.is_set
	|| vrf_name.is_set
	|| output_interface.is_set
	|| (session !=  nullptr && session->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (style !=  nullptr && style->has_data())
	|| (req_flags !=  nullptr && req_flags->has_data())
	|| (hop !=  nullptr && hop->has_data())
	|| (header !=  nullptr && header->has_data())
	|| (policy_sources !=  nullptr && policy_sources->has_data())
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data());
}

bool Rsvp::RequestDetails::RequestDetail::has_operation() const
{
    for (std::size_t index=0; index<psb_key.len(); index++)
    {
        if(psb_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsb_key.len(); index++)
    {
        if(rsb_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(output_interface.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (style !=  nullptr && style->has_operation())
	|| (req_flags !=  nullptr && req_flags->has_operation())
	|| (hop !=  nullptr && hop->has_operation())
	|| (header !=  nullptr && header->has_operation())
	|| (policy_sources !=  nullptr && policy_sources->has_operation())
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation());
}

std::string Rsvp::RequestDetails::RequestDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.yfilter)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.yfilter)) leaf_name_data.push_back(output_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Session>();
        }
        return session;
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp == nullptr)
        {
            s2l_sub_lsp = std::make_shared<Rsvp::RequestDetails::RequestDetail::S2lSubLsp>();
        }
        return s2l_sub_lsp;
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec == nullptr)
        {
            flow_spec = std::make_shared<Rsvp::RequestDetails::RequestDetail::FlowSpec>();
        }
        return flow_spec;
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec == nullptr)
        {
            generic_flow_spec = std::make_shared<Rsvp::RequestDetails::RequestDetail::GenericFlowSpec>();
        }
        return generic_flow_spec;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "style")
    {
        if(style == nullptr)
        {
            style = std::make_shared<Rsvp::RequestDetails::RequestDetail::Style>();
        }
        return style;
    }

    if(child_yang_name == "req-flags")
    {
        if(req_flags == nullptr)
        {
            req_flags = std::make_shared<Rsvp::RequestDetails::RequestDetail::ReqFlags>();
        }
        return req_flags;
    }

    if(child_yang_name == "hop")
    {
        if(hop == nullptr)
        {
            hop = std::make_shared<Rsvp::RequestDetails::RequestDetail::Hop>();
        }
        return hop;
    }

    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Rsvp::RequestDetails::RequestDetail::Header>();
        }
        return header;
    }

    if(child_yang_name == "policy-sources")
    {
        if(policy_sources == nullptr)
        {
            policy_sources = std::make_shared<Rsvp::RequestDetails::RequestDetail::PolicySources>();
        }
        return policy_sources;
    }

    if(child_yang_name == "policy-flags")
    {
        if(policy_flags == nullptr)
        {
            policy_flags = std::make_shared<Rsvp::RequestDetails::RequestDetail::PolicyFlags>();
        }
        return policy_flags;
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags == nullptr)
        {
            policy_query_flags = std::make_shared<Rsvp::RequestDetails::RequestDetail::PolicyQueryFlags>();
        }
        return policy_query_flags;
    }

    if(child_yang_name == "psb-key")
    {
        auto ent_ = std::make_shared<Rsvp::RequestDetails::RequestDetail::PsbKey>();
        ent_->parent = this;
        psb_key.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rsb-key")
    {
        auto ent_ = std::make_shared<Rsvp::RequestDetails::RequestDetail::RsbKey>();
        ent_->parent = this;
        rsb_key.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(s2l_sub_lsp != nullptr)
    {
        _children["s2l-sub-lsp"] = s2l_sub_lsp;
    }

    if(flow_spec != nullptr)
    {
        _children["flow-spec"] = flow_spec;
    }

    if(generic_flow_spec != nullptr)
    {
        _children["generic-flow-spec"] = generic_flow_spec;
    }

    if(filter != nullptr)
    {
        _children["filter"] = filter;
    }

    if(style != nullptr)
    {
        _children["style"] = style;
    }

    if(req_flags != nullptr)
    {
        _children["req-flags"] = req_flags;
    }

    if(hop != nullptr)
    {
        _children["hop"] = hop;
    }

    if(header != nullptr)
    {
        _children["header"] = header;
    }

    if(policy_sources != nullptr)
    {
        _children["policy-sources"] = policy_sources;
    }

    if(policy_flags != nullptr)
    {
        _children["policy-flags"] = policy_flags;
    }

    if(policy_query_flags != nullptr)
    {
        _children["policy-query-flags"] = policy_query_flags;
    }

    count_ = 0;
    for (auto ent_ : psb_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : rsb_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rsvp::RequestDetails::RequestDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
        sub_group_origin.value_namespace = name_space;
        sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
        output_interface.value_namespace = name_space;
        output_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "output-interface")
    {
        output_interface.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "s2l-sub-lsp" || name == "flow-spec" || name == "generic-flow-spec" || name == "filter" || name == "style" || name == "req-flags" || name == "hop" || name == "header" || name == "policy-sources" || name == "policy-flags" || name == "policy-query-flags" || name == "psb-key" || name == "rsb-key" || name == "destination-address" || name == "destination-port" || name == "protocol" || name == "extended-tunnel-id" || name == "session-type" || name == "p2mp-id" || name == "source-address" || name == "source-port" || name == "sub-group-origin" || name == "sub-group-id" || name == "vrf-name" || name == "output-interface")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Session::Session()
    :
    rsvp_session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession>())
{
    rsvp_session->parent = this;

    yang_name = "session"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::Session::~Session()
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool Rsvp::RequestDetails::RequestDetail::Session::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string Rsvp::RequestDetails::RequestDetail::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session == nullptr)
        {
            rsvp_session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession>();
        }
        return rsvp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_session != nullptr)
    {
        _children["rsvp-session"] = rsvp_session;
    }

    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RequestDetails::RequestDetail::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-session")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
        ,
    ipv4(std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4>())
    , ipv4_lsp_session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession>())
    , ipv4_uni_session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession>())
    , ipv4_p2mp_lsp_session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession>())
{
    ipv4->parent = this;
    ipv4_lsp_session->parent = this;
    ipv4_uni_session->parent = this;
    ipv4_p2mp_lsp_session->parent = this;

    yang_name = "rsvp-session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::~RsvpSession()
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::has_data() const
{
    if (is_presence_container) return true;
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data());
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation());
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session == nullptr)
        {
            ipv4_lsp_session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession>();
        }
        return ipv4_lsp_session;
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session == nullptr)
        {
            ipv4_uni_session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession>();
        }
        return ipv4_uni_session;
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session == nullptr)
        {
            ipv4_p2mp_lsp_session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession>();
        }
        return ipv4_p2mp_lsp_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv4_lsp_session != nullptr)
    {
        _children["ipv4-lsp-session"] = ipv4_lsp_session;
    }

    if(ipv4_uni_session != nullptr)
    {
        _children["ipv4-uni-session"] = ipv4_uni_session;
    }

    if(ipv4_p2mp_lsp_session != nullptr)
    {
        _children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
    }

    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-lsp-session" || name == "ipv4-uni-session" || name == "ipv4-p2mp-lsp-session" || name == "session-type")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::uint8, "protocol"},
    destination_port{YType::uint16, "destination-port"}
{

    yang_name = "ipv4"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| protocol.is_set
	|| destination_port.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(destination_port.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "protocol" || name == "destination-port")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_address{YType::str, "extended-address"}
{

    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| extended_address.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_address.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.yfilter)) leaf_name_data.push_back(extended_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
        extended_address.value_namespace = name_space;
        extended_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-address")
    {
        extended_address.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "extended-address")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::Ipv4P2mpLspSession()
    :
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
{

    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::~Ipv4P2mpLspSession()
{
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::has_data() const
{
    if (is_presence_container) return true;
    return p2mp_id.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2mpLspSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-id" || name == "tunnel-id" || name == "extended-tunnel-id")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::S2lSubLsp::S2lSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{

    yang_name = "s2l-sub-lsp"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::S2lSubLsp::~S2lSubLsp()
{
}

bool Rsvp::RequestDetails::RequestDetail::S2lSubLsp::has_data() const
{
    if (is_presence_container) return true;
    return s2l_destination_address.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::S2lSubLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_destination_address.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::S2lSubLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::S2lSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::S2lSubLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.yfilter)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::S2lSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::S2lSubLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::S2lSubLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
        s2l_destination_address.value_namespace = name_space;
        s2l_destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::S2lSubLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::S2lSubLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-destination-address")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"},
    flow_qos{YType::enumeration, "flow-qos"}
{

    yang_name = "flow-spec"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::FlowSpec::~FlowSpec()
{
}

bool Rsvp::RequestDetails::RequestDetail::FlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_peak_rate.is_set
	|| flow_min_unit.is_set
	|| flow_max_unit.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set
	|| flow_qos.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_average_rate.yfilter)
	|| ydk::is_set(flow_max_burst.yfilter)
	|| ydk::is_set(flow_peak_rate.yfilter)
	|| ydk::is_set(flow_min_unit.yfilter)
	|| ydk::is_set(flow_max_unit.yfilter)
	|| ydk::is_set(flow_requested_rate.yfilter)
	|| ydk::is_set(flow_slack.yfilter)
	|| ydk::is_set(flow_qos.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::FlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.yfilter)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.yfilter)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.yfilter)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.yfilter)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.yfilter)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.yfilter)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.yfilter)) leaf_name_data.push_back(flow_slack.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.yfilter)) leaf_name_data.push_back(flow_qos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate = value;
        flow_average_rate.value_namespace = name_space;
        flow_average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst = value;
        flow_max_burst.value_namespace = name_space;
        flow_max_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
        flow_peak_rate.value_namespace = name_space;
        flow_peak_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
        flow_min_unit.value_namespace = name_space;
        flow_min_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
        flow_max_unit.value_namespace = name_space;
        flow_max_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate = value;
        flow_requested_rate.value_namespace = name_space;
        flow_requested_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-slack")
    {
        flow_slack = value;
        flow_slack.value_namespace = name_space;
        flow_slack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-qos")
    {
        flow_qos = value;
        flow_qos.value_namespace = name_space;
        flow_qos.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate.yfilter = yfilter;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst.yfilter = yfilter;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate.yfilter = yfilter;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit.yfilter = yfilter;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit.yfilter = yfilter;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate.yfilter = yfilter;
    }
    if(value_path == "flow-slack")
    {
        flow_slack.yfilter = yfilter;
    }
    if(value_path == "flow-qos")
    {
        flow_qos.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-average-rate" || name == "flow-max-burst" || name == "flow-peak-rate" || name == "flow-min-unit" || name == "flow-max-unit" || name == "flow-requested-rate" || name == "flow-slack" || name == "flow-qos")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
        ,
    g709otn_flow_spec(std::make_shared<Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec>())
{
    g709otn_flow_spec->parent = this;

    yang_name = "generic-flow-spec"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::~GenericFlowSpec()
{
}

bool Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_spec_type.yfilter)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.yfilter)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec == nullptr)
        {
            g709otn_flow_spec = std::make_shared<Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec>();
        }
        return g709otn_flow_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(g709otn_flow_spec != nullptr)
    {
        _children["g709otn-flow-spec"] = g709otn_flow_spec;
    }

    return _children;
}

void Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
        flow_spec_type.value_namespace = name_space;
        flow_spec_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g709otn-flow-spec" || name == "flow-spec-type")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::G709otnFlowSpec()
    :
    flow_signal_type{YType::uint8, "flow-signal-type"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_bit_rate{YType::uint64, "flow-bit-rate"}
{

    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::~G709otnFlowSpec()
{
}

bool Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return flow_signal_type.is_set
	|| flow_nvc.is_set
	|| flow_multiplier.is_set
	|| flow_bit_rate.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_signal_type.yfilter)
	|| ydk::is_set(flow_nvc.yfilter)
	|| ydk::is_set(flow_multiplier.yfilter)
	|| ydk::is_set(flow_bit_rate.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/generic-flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_signal_type.is_set || is_set(flow_signal_type.yfilter)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.yfilter)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.yfilter)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_bit_rate.is_set || is_set(flow_bit_rate.yfilter)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
        flow_signal_type.value_namespace = name_space;
        flow_signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
        flow_nvc.value_namespace = name_space;
        flow_nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
        flow_multiplier.value_namespace = name_space;
        flow_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
        flow_bit_rate.value_namespace = name_space;
        flow_bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-signal-type")
    {
        flow_signal_type.yfilter = yfilter;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc.yfilter = yfilter;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier.yfilter = yfilter;
    }
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::GenericFlowSpec::G709otnFlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-signal-type" || name == "flow-nvc" || name == "flow-multiplier" || name == "flow-bit-rate")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Filter::Filter()
    :
    rsvp_filter(std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;

    yang_name = "filter"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::Filter::~Filter()
{
}

bool Rsvp::RequestDetails::RequestDetail::Filter::has_data() const
{
    if (is_presence_container) return true;
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool Rsvp::RequestDetails::RequestDetail::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter == nullptr)
        {
            rsvp_filter = std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter>();
        }
        return rsvp_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvp_filter != nullptr)
    {
        _children["rsvp-filter"] = rsvp_filter;
    }

    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rsvp::RequestDetails::RequestDetail::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rsvp::RequestDetails::RequestDetail::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-filter")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
        ,
    udp_ipv4_session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session>())
    , p2mp_ipv4_session(std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session>())
{
    udp_ipv4_session->parent = this;
    p2mp_ipv4_session->parent = this;

    yang_name = "rsvp-filter"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::~RsvpFilter()
{
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::has_data() const
{
    if (is_presence_container) return true;
    return filter_type.is_set
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data());
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filter_type.yfilter)
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation())
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation());
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.yfilter)) leaf_name_data.push_back(filter_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session == nullptr)
        {
            udp_ipv4_session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session>();
        }
        return udp_ipv4_session;
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session == nullptr)
        {
            p2mp_ipv4_session = std::make_shared<Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session>();
        }
        return p2mp_ipv4_session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp_ipv4_session != nullptr)
    {
        _children["udp-ipv4-session"] = udp_ipv4_session;
    }

    if(p2mp_ipv4_session != nullptr)
    {
        _children["p2mp-ipv4-session"] = p2mp_ipv4_session;
    }

    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
        filter_type.value_namespace = name_space;
        filter_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filter-type")
    {
        filter_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-ipv4-session" || name == "p2mp-ipv4-session" || name == "filter-type")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::P2mpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"}
{

    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::~P2mpIpv4Session()
{
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| source_port.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(p2mp_sub_group_origin.yfilter)
	|| ydk::is_set(sub_group_id.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/filter/rsvp-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.yfilter)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
        p2mp_sub_group_origin.value_namespace = name_space;
        p2mp_sub_group_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Filter::RsvpFilter::P2mpIpv4Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "source-port" || name == "p2mp-sub-group-origin" || name == "sub-group-id")
        return true;
    return false;
}

Rsvp::RequestDetails::RequestDetail::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{

    yang_name = "style"; yang_parent_name = "request-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rsvp::RequestDetails::RequestDetail::Style::~Style()
{
}

bool Rsvp::RequestDetails::RequestDetail::Style::has_data() const
{
    if (is_presence_container) return true;
    return reservation_type.is_set;
}

bool Rsvp::RequestDetails::RequestDetail::Style::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reservation_type.yfilter);
}

std::string Rsvp::RequestDetails::RequestDetail::Style::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp/request-details/request-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rsvp::RequestDetails::RequestDetail::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rsvp::RequestDetails::RequestDetail::Style::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.yfilter)) leaf_name_data.push_back(reservation_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rsvp::RequestDetails::RequestDetail::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rsvp::RequestDetails::RequestDetail::Style::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rsvp::RequestDetails::RequestDetail::Style::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
        reservation_type.value_namespace = name_space;
        reservation_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rsvp::RequestDetails::RequestDetail::Style::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reservation-type")
    {
        reservation_type.yfilter = yfilter;
    }
}

bool Rsvp::RequestDetails::RequestDetail::Style::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reservation-type")
        return true;
    return false;
}


}
}

