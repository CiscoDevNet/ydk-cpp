
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_iedge4710_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_iedge4710_oper {

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::Start()
    :
    	aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
	 aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
	 aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
	 aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
	 errored_requests{YType::uint64, "errored-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "start"; yang_parent_name = "aggregate-accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::~Start()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::Stop()
    :
    	aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
	 aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
	 aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
	 aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
	 errored_requests{YType::uint64, "errored-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "stop"; yang_parent_name = "aggregate-accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::~Stop()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::Interim()
    :
    	aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
	 aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
	 aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
	 aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
	 errored_requests{YType::uint64, "errored-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "interim"; yang_parent_name = "aggregate-accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::~Interim()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::PassThrough()
    :
    	aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
	 aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
	 aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
	 aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
	 errored_requests{YType::uint64, "errored-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "pass-through"; yang_parent_name = "aggregate-accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::~PassThrough()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pass-through";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::Update()
    :
    	aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
	 aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
	 aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
	 aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
	 errored_requests{YType::uint64, "errored-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "update"; yang_parent_name = "aggregate-accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::~Update()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::InterimInflight()
    :
    	accepted_requests{YType::uint32, "accepted-requests"},
	 denied_requests{YType::uint32, "denied-requests"},
	 low_water_mark_quota_of_requests{YType::uint32, "low-water-mark-quota-of-requests"},
	 quota_exhausts{YType::uint32, "quota-exhausts"},
	 remaining_quota_of_requests{YType::uint32, "remaining-quota-of-requests"},
	 total_quota_of_requests{YType::uint32, "total-quota-of-requests"}
{
    yang_name = "interim-inflight"; yang_parent_name = "aggregate-accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::~InterimInflight()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::has_data() const
{
    return accepted_requests.is_set
	|| denied_requests.is_set
	|| low_water_mark_quota_of_requests.is_set
	|| quota_exhausts.is_set
	|| remaining_quota_of_requests.is_set
	|| total_quota_of_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(denied_requests.operation)
	|| is_set(low_water_mark_quota_of_requests.operation)
	|| is_set(quota_exhausts.operation)
	|| is_set(remaining_quota_of_requests.operation)
	|| is_set(total_quota_of_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim-inflight";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (denied_requests.is_set || is_set(denied_requests.operation)) leaf_name_data.push_back(denied_requests.get_name_leafdata());
    if (low_water_mark_quota_of_requests.is_set || is_set(low_water_mark_quota_of_requests.operation)) leaf_name_data.push_back(low_water_mark_quota_of_requests.get_name_leafdata());
    if (quota_exhausts.is_set || is_set(quota_exhausts.operation)) leaf_name_data.push_back(quota_exhausts.get_name_leafdata());
    if (remaining_quota_of_requests.is_set || is_set(remaining_quota_of_requests.operation)) leaf_name_data.push_back(remaining_quota_of_requests.get_name_leafdata());
    if (total_quota_of_requests.is_set || is_set(total_quota_of_requests.operation)) leaf_name_data.push_back(total_quota_of_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "denied-requests")
    {
        denied_requests = value;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests = value;
    }
    if(value_path == "quota-exhausts")
    {
        quota_exhausts = value;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests = value;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::AggregateAccounting()
    :
    	active_sessions{YType::uint32, "active-sessions"},
	 policy_plane_errored_requests{YType::uint64, "policy-plane-errored-requests"},
	 policy_plane_unknown_requests{YType::uint64, "policy-plane-unknown-requests"},
	 started_sessions{YType::uint64, "started-sessions"},
	 stopped_sessions{YType::uint64, "stopped-sessions"}
    	,
    interim(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim>())
	,interim_inflight(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight>())
	,pass_through(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough>())
	,start(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start>())
	,stop(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop>())
	,update(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update>())
{
    interim->parent = this;
    children["interim"] = interim.get();

    interim_inflight->parent = this;
    children["interim-inflight"] = interim_inflight.get();

    pass_through->parent = this;
    children["pass-through"] = pass_through.get();

    start->parent = this;
    children["start"] = start.get();

    stop->parent = this;
    children["stop"] = stop.get();

    update->parent = this;
    children["update"] = update.get();

    yang_name = "aggregate-accounting"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::~AggregateAccounting()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::has_data() const
{
    return active_sessions.is_set
	|| policy_plane_errored_requests.is_set
	|| policy_plane_unknown_requests.is_set
	|| started_sessions.is_set
	|| stopped_sessions.is_set
	|| (interim !=  nullptr && interim->has_data())
	|| (interim_inflight !=  nullptr && interim_inflight->has_data())
	|| (pass_through !=  nullptr && pass_through->has_data())
	|| (start !=  nullptr && start->has_data())
	|| (stop !=  nullptr && stop->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::has_operation() const
{
    return is_set(operation)
	|| is_set(active_sessions.operation)
	|| is_set(policy_plane_errored_requests.operation)
	|| is_set(policy_plane_unknown_requests.operation)
	|| is_set(started_sessions.operation)
	|| is_set(stopped_sessions.operation)
	|| (interim !=  nullptr && interim->has_operation())
	|| (interim_inflight !=  nullptr && interim_inflight->has_operation())
	|| (pass_through !=  nullptr && pass_through->has_operation())
	|| (start !=  nullptr && start->has_operation())
	|| (stop !=  nullptr && stop->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-accounting";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (policy_plane_errored_requests.is_set || is_set(policy_plane_errored_requests.operation)) leaf_name_data.push_back(policy_plane_errored_requests.get_name_leafdata());
    if (policy_plane_unknown_requests.is_set || is_set(policy_plane_unknown_requests.operation)) leaf_name_data.push_back(policy_plane_unknown_requests.get_name_leafdata());
    if (started_sessions.is_set || is_set(started_sessions.operation)) leaf_name_data.push_back(started_sessions.get_name_leafdata());
    if (stopped_sessions.is_set || is_set(stopped_sessions.operation)) leaf_name_data.push_back(stopped_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interim")
    {
        if(interim != nullptr)
        {
            children["interim"] = interim.get();
        }
        else
        {
            interim = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim>();
            interim->parent = this;
            children["interim"] = interim.get();
        }
        return children.at("interim");
    }

    if(child_yang_name == "interim-inflight")
    {
        if(interim_inflight != nullptr)
        {
            children["interim-inflight"] = interim_inflight.get();
        }
        else
        {
            interim_inflight = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight>();
            interim_inflight->parent = this;
            children["interim-inflight"] = interim_inflight.get();
        }
        return children.at("interim-inflight");
    }

    if(child_yang_name == "pass-through")
    {
        if(pass_through != nullptr)
        {
            children["pass-through"] = pass_through.get();
        }
        else
        {
            pass_through = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough>();
            pass_through->parent = this;
            children["pass-through"] = pass_through.get();
        }
        return children.at("pass-through");
    }

    if(child_yang_name == "start")
    {
        if(start != nullptr)
        {
            children["start"] = start.get();
        }
        else
        {
            start = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start>();
            start->parent = this;
            children["start"] = start.get();
        }
        return children.at("start");
    }

    if(child_yang_name == "stop")
    {
        if(stop != nullptr)
        {
            children["stop"] = stop.get();
        }
        else
        {
            stop = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop>();
            stop->parent = this;
            children["stop"] = stop.get();
        }
        return children.at("stop");
    }

    if(child_yang_name == "update")
    {
        if(update != nullptr)
        {
            children["update"] = update.get();
        }
        else
        {
            update = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update>();
            update->parent = this;
            children["update"] = update.get();
        }
        return children.at("update");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::get_children()
{
    if(children.find("interim") == children.end())
    {
        if(interim != nullptr)
        {
            children["interim"] = interim.get();
        }
    }

    if(children.find("interim-inflight") == children.end())
    {
        if(interim_inflight != nullptr)
        {
            children["interim-inflight"] = interim_inflight.get();
        }
    }

    if(children.find("pass-through") == children.end())
    {
        if(pass_through != nullptr)
        {
            children["pass-through"] = pass_through.get();
        }
    }

    if(children.find("start") == children.end())
    {
        if(start != nullptr)
        {
            children["start"] = start.get();
        }
    }

    if(children.find("stop") == children.end())
    {
        if(stop != nullptr)
        {
            children["stop"] = stop.get();
        }
    }

    if(children.find("update") == children.end())
    {
        if(update != nullptr)
        {
            children["update"] = update.get();
        }
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests = value;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests = value;
    }
    if(value_path == "started-sessions")
    {
        started_sessions = value;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::Authentication()
    :
    	accepted_requests{YType::uint64, "accepted-requests"},
	 errored_requests{YType::uint64, "errored-requests"},
	 incomplete_requests{YType::uint64, "incomplete-requests"},
	 rejected_requests{YType::uint64, "rejected-requests"},
	 sent_requests{YType::uint64, "sent-requests"},
	 successful_requests{YType::uint64, "successful-requests"},
	 terminated_requests{YType::uint64, "terminated-requests"},
	 unreachable_requests{YType::uint64, "unreachable-requests"}
{
    yang_name = "authentication"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::~Authentication()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::has_data() const
{
    return accepted_requests.is_set
	|| errored_requests.is_set
	|| incomplete_requests.is_set
	|| rejected_requests.is_set
	|| sent_requests.is_set
	|| successful_requests.is_set
	|| terminated_requests.is_set
	|| unreachable_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(errored_requests.operation)
	|| is_set(incomplete_requests.operation)
	|| is_set(rejected_requests.operation)
	|| is_set(sent_requests.operation)
	|| is_set(successful_requests.operation)
	|| is_set(terminated_requests.operation)
	|| is_set(unreachable_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (incomplete_requests.is_set || is_set(incomplete_requests.operation)) leaf_name_data.push_back(incomplete_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.operation)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (sent_requests.is_set || is_set(sent_requests.operation)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.operation)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.operation)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.operation)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "incomplete-requests")
    {
        incomplete_requests = value;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
    }
    if(value_path == "sent-requests")
    {
        sent_requests = value;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::AggregateMobility()
    :
    	receive_response_failures{YType::uint64, "receive-response-failures"},
	 receive_response_successes{YType::uint64, "receive-response-successes"},
	 send_request_failures{YType::uint64, "send-request-failures"},
	 send_request_successes{YType::uint64, "send-request-successes"}
{
    yang_name = "aggregate-mobility"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::~AggregateMobility()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::has_data() const
{
    return receive_response_failures.is_set
	|| receive_response_successes.is_set
	|| send_request_failures.is_set
	|| send_request_successes.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::has_operation() const
{
    return is_set(operation)
	|| is_set(receive_response_failures.operation)
	|| is_set(receive_response_successes.operation)
	|| is_set(send_request_failures.operation)
	|| is_set(send_request_successes.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-mobility";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_response_failures.is_set || is_set(receive_response_failures.operation)) leaf_name_data.push_back(receive_response_failures.get_name_leafdata());
    if (receive_response_successes.is_set || is_set(receive_response_successes.operation)) leaf_name_data.push_back(receive_response_successes.get_name_leafdata());
    if (send_request_failures.is_set || is_set(send_request_failures.operation)) leaf_name_data.push_back(send_request_failures.get_name_leafdata());
    if (send_request_successes.is_set || is_set(send_request_successes.operation)) leaf_name_data.push_back(send_request_successes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive-response-failures")
    {
        receive_response_failures = value;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes = value;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures = value;
    }
    if(value_path == "send-request-successes")
    {
        send_request_successes = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::AggregateAuthentication()
    :
    	accepted_requests{YType::uint64, "accepted-requests"},
	 errored_requests{YType::uint64, "errored-requests"},
	 incomplete_requests{YType::uint64, "incomplete-requests"},
	 rejected_requests{YType::uint64, "rejected-requests"},
	 sent_requests{YType::uint64, "sent-requests"},
	 successful_requests{YType::uint64, "successful-requests"},
	 terminated_requests{YType::uint64, "terminated-requests"},
	 unreachable_requests{YType::uint64, "unreachable-requests"}
{
    yang_name = "aggregate-authentication"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::~AggregateAuthentication()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::has_data() const
{
    return accepted_requests.is_set
	|| errored_requests.is_set
	|| incomplete_requests.is_set
	|| rejected_requests.is_set
	|| sent_requests.is_set
	|| successful_requests.is_set
	|| terminated_requests.is_set
	|| unreachable_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(errored_requests.operation)
	|| is_set(incomplete_requests.operation)
	|| is_set(rejected_requests.operation)
	|| is_set(sent_requests.operation)
	|| is_set(successful_requests.operation)
	|| is_set(terminated_requests.operation)
	|| is_set(unreachable_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-authentication";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (incomplete_requests.is_set || is_set(incomplete_requests.operation)) leaf_name_data.push_back(incomplete_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.operation)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (sent_requests.is_set || is_set(sent_requests.operation)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.operation)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.operation)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.operation)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "incomplete-requests")
    {
        incomplete_requests = value;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
    }
    if(value_path == "sent-requests")
    {
        sent_requests = value;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::AccountLogon()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-logon"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::~AccountLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logon";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::AccountLogoff()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-logoff"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::~AccountLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logoff";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::AccountUpdate()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-update"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::~AccountUpdate()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-update";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::SessionDisconnect()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "session-disconnect"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::~SessionDisconnect()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-disconnect";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::SingleServiceLogon()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-logon"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::~SingleServiceLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logon";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::SingleServiceLogoff()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-logoff"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::~SingleServiceLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logoff";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::SingleServiceModify()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-modify"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::~SingleServiceModify()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-modify";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::ServiceMulti()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "service-multi"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::~ServiceMulti()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-multi";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ChangeOfAuthorization()
    :
    	attr_list_retrieve_failure_resps{YType::uint64, "attr-list-retrieve-failure-resps"},
	 internal_err_resps{YType::uint64, "internal-err-resps"},
	 no_cmd_resps{YType::uint64, "no-cmd-resps"},
	 no_session_found_resps{YType::uint64, "no-session-found-resps"},
	 no_session_peer_resps{YType::uint64, "no-session-peer-resps"},
	 resp_send_failure{YType::uint64, "resp-send-failure"},
	 service_profile_push_failure_resps{YType::uint64, "service-profile-push-failure-resps"},
	 unknown_account_cmd_resps{YType::uint64, "unknown-account-cmd-resps"},
	 unknown_cmd_resps{YType::uint64, "unknown-cmd-resps"},
	 unknown_service_cmd_resps{YType::uint64, "unknown-service-cmd-resps"}
    	,
    account_logoff(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff>())
	,account_logon(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon>())
	,account_update(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate>())
	,service_multi(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti>())
	,session_disconnect(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect>())
	,single_service_logoff(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff>())
	,single_service_logon(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon>())
	,single_service_modify(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify>())
{
    account_logoff->parent = this;
    children["account-logoff"] = account_logoff.get();

    account_logon->parent = this;
    children["account-logon"] = account_logon.get();

    account_update->parent = this;
    children["account-update"] = account_update.get();

    service_multi->parent = this;
    children["service-multi"] = service_multi.get();

    session_disconnect->parent = this;
    children["session-disconnect"] = session_disconnect.get();

    single_service_logoff->parent = this;
    children["single-service-logoff"] = single_service_logoff.get();

    single_service_logon->parent = this;
    children["single-service-logon"] = single_service_logon.get();

    single_service_modify->parent = this;
    children["single-service-modify"] = single_service_modify.get();

    yang_name = "change-of-authorization"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::~ChangeOfAuthorization()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::has_data() const
{
    return attr_list_retrieve_failure_resps.is_set
	|| internal_err_resps.is_set
	|| no_cmd_resps.is_set
	|| no_session_found_resps.is_set
	|| no_session_peer_resps.is_set
	|| resp_send_failure.is_set
	|| service_profile_push_failure_resps.is_set
	|| unknown_account_cmd_resps.is_set
	|| unknown_cmd_resps.is_set
	|| unknown_service_cmd_resps.is_set
	|| (account_logoff !=  nullptr && account_logoff->has_data())
	|| (account_logon !=  nullptr && account_logon->has_data())
	|| (account_update !=  nullptr && account_update->has_data())
	|| (service_multi !=  nullptr && service_multi->has_data())
	|| (session_disconnect !=  nullptr && session_disconnect->has_data())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_data())
	|| (single_service_logon !=  nullptr && single_service_logon->has_data())
	|| (single_service_modify !=  nullptr && single_service_modify->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::has_operation() const
{
    return is_set(operation)
	|| is_set(attr_list_retrieve_failure_resps.operation)
	|| is_set(internal_err_resps.operation)
	|| is_set(no_cmd_resps.operation)
	|| is_set(no_session_found_resps.operation)
	|| is_set(no_session_peer_resps.operation)
	|| is_set(resp_send_failure.operation)
	|| is_set(service_profile_push_failure_resps.operation)
	|| is_set(unknown_account_cmd_resps.operation)
	|| is_set(unknown_cmd_resps.operation)
	|| is_set(unknown_service_cmd_resps.operation)
	|| (account_logoff !=  nullptr && account_logoff->has_operation())
	|| (account_logon !=  nullptr && account_logon->has_operation())
	|| (account_update !=  nullptr && account_update->has_operation())
	|| (service_multi !=  nullptr && service_multi->has_operation())
	|| (session_disconnect !=  nullptr && session_disconnect->has_operation())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_operation())
	|| (single_service_logon !=  nullptr && single_service_logon->has_operation())
	|| (single_service_modify !=  nullptr && single_service_modify->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-of-authorization";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_list_retrieve_failure_resps.is_set || is_set(attr_list_retrieve_failure_resps.operation)) leaf_name_data.push_back(attr_list_retrieve_failure_resps.get_name_leafdata());
    if (internal_err_resps.is_set || is_set(internal_err_resps.operation)) leaf_name_data.push_back(internal_err_resps.get_name_leafdata());
    if (no_cmd_resps.is_set || is_set(no_cmd_resps.operation)) leaf_name_data.push_back(no_cmd_resps.get_name_leafdata());
    if (no_session_found_resps.is_set || is_set(no_session_found_resps.operation)) leaf_name_data.push_back(no_session_found_resps.get_name_leafdata());
    if (no_session_peer_resps.is_set || is_set(no_session_peer_resps.operation)) leaf_name_data.push_back(no_session_peer_resps.get_name_leafdata());
    if (resp_send_failure.is_set || is_set(resp_send_failure.operation)) leaf_name_data.push_back(resp_send_failure.get_name_leafdata());
    if (service_profile_push_failure_resps.is_set || is_set(service_profile_push_failure_resps.operation)) leaf_name_data.push_back(service_profile_push_failure_resps.get_name_leafdata());
    if (unknown_account_cmd_resps.is_set || is_set(unknown_account_cmd_resps.operation)) leaf_name_data.push_back(unknown_account_cmd_resps.get_name_leafdata());
    if (unknown_cmd_resps.is_set || is_set(unknown_cmd_resps.operation)) leaf_name_data.push_back(unknown_cmd_resps.get_name_leafdata());
    if (unknown_service_cmd_resps.is_set || is_set(unknown_service_cmd_resps.operation)) leaf_name_data.push_back(unknown_service_cmd_resps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "account-logoff")
    {
        if(account_logoff != nullptr)
        {
            children["account-logoff"] = account_logoff.get();
        }
        else
        {
            account_logoff = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff>();
            account_logoff->parent = this;
            children["account-logoff"] = account_logoff.get();
        }
        return children.at("account-logoff");
    }

    if(child_yang_name == "account-logon")
    {
        if(account_logon != nullptr)
        {
            children["account-logon"] = account_logon.get();
        }
        else
        {
            account_logon = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon>();
            account_logon->parent = this;
            children["account-logon"] = account_logon.get();
        }
        return children.at("account-logon");
    }

    if(child_yang_name == "account-update")
    {
        if(account_update != nullptr)
        {
            children["account-update"] = account_update.get();
        }
        else
        {
            account_update = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate>();
            account_update->parent = this;
            children["account-update"] = account_update.get();
        }
        return children.at("account-update");
    }

    if(child_yang_name == "service-multi")
    {
        if(service_multi != nullptr)
        {
            children["service-multi"] = service_multi.get();
        }
        else
        {
            service_multi = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti>();
            service_multi->parent = this;
            children["service-multi"] = service_multi.get();
        }
        return children.at("service-multi");
    }

    if(child_yang_name == "session-disconnect")
    {
        if(session_disconnect != nullptr)
        {
            children["session-disconnect"] = session_disconnect.get();
        }
        else
        {
            session_disconnect = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect>();
            session_disconnect->parent = this;
            children["session-disconnect"] = session_disconnect.get();
        }
        return children.at("session-disconnect");
    }

    if(child_yang_name == "single-service-logoff")
    {
        if(single_service_logoff != nullptr)
        {
            children["single-service-logoff"] = single_service_logoff.get();
        }
        else
        {
            single_service_logoff = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff>();
            single_service_logoff->parent = this;
            children["single-service-logoff"] = single_service_logoff.get();
        }
        return children.at("single-service-logoff");
    }

    if(child_yang_name == "single-service-logon")
    {
        if(single_service_logon != nullptr)
        {
            children["single-service-logon"] = single_service_logon.get();
        }
        else
        {
            single_service_logon = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon>();
            single_service_logon->parent = this;
            children["single-service-logon"] = single_service_logon.get();
        }
        return children.at("single-service-logon");
    }

    if(child_yang_name == "single-service-modify")
    {
        if(single_service_modify != nullptr)
        {
            children["single-service-modify"] = single_service_modify.get();
        }
        else
        {
            single_service_modify = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify>();
            single_service_modify->parent = this;
            children["single-service-modify"] = single_service_modify.get();
        }
        return children.at("single-service-modify");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::get_children()
{
    if(children.find("account-logoff") == children.end())
    {
        if(account_logoff != nullptr)
        {
            children["account-logoff"] = account_logoff.get();
        }
    }

    if(children.find("account-logon") == children.end())
    {
        if(account_logon != nullptr)
        {
            children["account-logon"] = account_logon.get();
        }
    }

    if(children.find("account-update") == children.end())
    {
        if(account_update != nullptr)
        {
            children["account-update"] = account_update.get();
        }
    }

    if(children.find("service-multi") == children.end())
    {
        if(service_multi != nullptr)
        {
            children["service-multi"] = service_multi.get();
        }
    }

    if(children.find("session-disconnect") == children.end())
    {
        if(session_disconnect != nullptr)
        {
            children["session-disconnect"] = session_disconnect.get();
        }
    }

    if(children.find("single-service-logoff") == children.end())
    {
        if(single_service_logoff != nullptr)
        {
            children["single-service-logoff"] = single_service_logoff.get();
        }
    }

    if(children.find("single-service-logon") == children.end())
    {
        if(single_service_logon != nullptr)
        {
            children["single-service-logon"] = single_service_logon.get();
        }
    }

    if(children.find("single-service-modify") == children.end())
    {
        if(single_service_modify != nullptr)
        {
            children["single-service-modify"] = single_service_modify.get();
        }
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps = value;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps = value;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps = value;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps = value;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps = value;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure = value;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps = value;
    }
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps = value;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps = value;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::Authorization()
    :
    	accepted_requests{YType::uint64, "accepted-requests"},
	 errored_requests{YType::uint64, "errored-requests"},
	 incomplete_requests{YType::uint64, "incomplete-requests"},
	 rejected_requests{YType::uint64, "rejected-requests"},
	 sent_requests{YType::uint64, "sent-requests"},
	 successful_requests{YType::uint64, "successful-requests"},
	 terminated_requests{YType::uint64, "terminated-requests"},
	 unreachable_requests{YType::uint64, "unreachable-requests"}
{
    yang_name = "authorization"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::~Authorization()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::has_data() const
{
    return accepted_requests.is_set
	|| errored_requests.is_set
	|| incomplete_requests.is_set
	|| rejected_requests.is_set
	|| sent_requests.is_set
	|| successful_requests.is_set
	|| terminated_requests.is_set
	|| unreachable_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(errored_requests.operation)
	|| is_set(incomplete_requests.operation)
	|| is_set(rejected_requests.operation)
	|| is_set(sent_requests.operation)
	|| is_set(successful_requests.operation)
	|| is_set(terminated_requests.operation)
	|| is_set(unreachable_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (incomplete_requests.is_set || is_set(incomplete_requests.operation)) leaf_name_data.push_back(incomplete_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.operation)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (sent_requests.is_set || is_set(sent_requests.operation)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.operation)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.operation)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.operation)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "incomplete-requests")
    {
        incomplete_requests = value;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
    }
    if(value_path == "sent-requests")
    {
        sent_requests = value;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::AggregateAuthorization()
    :
    	accepted_requests{YType::uint64, "accepted-requests"},
	 errored_requests{YType::uint64, "errored-requests"},
	 incomplete_requests{YType::uint64, "incomplete-requests"},
	 rejected_requests{YType::uint64, "rejected-requests"},
	 sent_requests{YType::uint64, "sent-requests"},
	 successful_requests{YType::uint64, "successful-requests"},
	 terminated_requests{YType::uint64, "terminated-requests"},
	 unreachable_requests{YType::uint64, "unreachable-requests"}
{
    yang_name = "aggregate-authorization"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::~AggregateAuthorization()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::has_data() const
{
    return accepted_requests.is_set
	|| errored_requests.is_set
	|| incomplete_requests.is_set
	|| rejected_requests.is_set
	|| sent_requests.is_set
	|| successful_requests.is_set
	|| terminated_requests.is_set
	|| unreachable_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(errored_requests.operation)
	|| is_set(incomplete_requests.operation)
	|| is_set(rejected_requests.operation)
	|| is_set(sent_requests.operation)
	|| is_set(successful_requests.operation)
	|| is_set(terminated_requests.operation)
	|| is_set(unreachable_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-authorization";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (incomplete_requests.is_set || is_set(incomplete_requests.operation)) leaf_name_data.push_back(incomplete_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.operation)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (sent_requests.is_set || is_set(sent_requests.operation)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.operation)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.operation)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.operation)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "incomplete-requests")
    {
        incomplete_requests = value;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
    }
    if(value_path == "sent-requests")
    {
        sent_requests = value;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::Start()
    :
    	aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
	 aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
	 aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
	 aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
	 errored_requests{YType::uint64, "errored-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "start"; yang_parent_name = "accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::~Start()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::Stop()
    :
    	aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
	 aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
	 aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
	 aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
	 errored_requests{YType::uint64, "errored-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "stop"; yang_parent_name = "accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::~Stop()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::Interim()
    :
    	aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
	 aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
	 aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
	 aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
	 errored_requests{YType::uint64, "errored-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "interim"; yang_parent_name = "accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::~Interim()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::PassThrough()
    :
    	aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
	 aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
	 aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
	 aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
	 errored_requests{YType::uint64, "errored-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "pass-through"; yang_parent_name = "accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::~PassThrough()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pass-through";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::Update()
    :
    	aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
	 aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
	 aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
	 aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
	 errored_requests{YType::uint64, "errored-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "update"; yang_parent_name = "accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::~Update()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::InterimInflight()
    :
    	accepted_requests{YType::uint32, "accepted-requests"},
	 denied_requests{YType::uint32, "denied-requests"},
	 low_water_mark_quota_of_requests{YType::uint32, "low-water-mark-quota-of-requests"},
	 quota_exhausts{YType::uint32, "quota-exhausts"},
	 remaining_quota_of_requests{YType::uint32, "remaining-quota-of-requests"},
	 total_quota_of_requests{YType::uint32, "total-quota-of-requests"}
{
    yang_name = "interim-inflight"; yang_parent_name = "accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::~InterimInflight()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::has_data() const
{
    return accepted_requests.is_set
	|| denied_requests.is_set
	|| low_water_mark_quota_of_requests.is_set
	|| quota_exhausts.is_set
	|| remaining_quota_of_requests.is_set
	|| total_quota_of_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(denied_requests.operation)
	|| is_set(low_water_mark_quota_of_requests.operation)
	|| is_set(quota_exhausts.operation)
	|| is_set(remaining_quota_of_requests.operation)
	|| is_set(total_quota_of_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim-inflight";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (denied_requests.is_set || is_set(denied_requests.operation)) leaf_name_data.push_back(denied_requests.get_name_leafdata());
    if (low_water_mark_quota_of_requests.is_set || is_set(low_water_mark_quota_of_requests.operation)) leaf_name_data.push_back(low_water_mark_quota_of_requests.get_name_leafdata());
    if (quota_exhausts.is_set || is_set(quota_exhausts.operation)) leaf_name_data.push_back(quota_exhausts.get_name_leafdata());
    if (remaining_quota_of_requests.is_set || is_set(remaining_quota_of_requests.operation)) leaf_name_data.push_back(remaining_quota_of_requests.get_name_leafdata());
    if (total_quota_of_requests.is_set || is_set(total_quota_of_requests.operation)) leaf_name_data.push_back(total_quota_of_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "denied-requests")
    {
        denied_requests = value;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests = value;
    }
    if(value_path == "quota-exhausts")
    {
        quota_exhausts = value;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests = value;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Accounting()
    :
    	active_sessions{YType::uint32, "active-sessions"},
	 policy_plane_errored_requests{YType::uint64, "policy-plane-errored-requests"},
	 policy_plane_unknown_requests{YType::uint64, "policy-plane-unknown-requests"},
	 started_sessions{YType::uint64, "started-sessions"},
	 stopped_sessions{YType::uint64, "stopped-sessions"}
    	,
    interim(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim>())
	,interim_inflight(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight>())
	,pass_through(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough>())
	,start(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start>())
	,stop(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop>())
	,update(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update>())
{
    interim->parent = this;
    children["interim"] = interim.get();

    interim_inflight->parent = this;
    children["interim-inflight"] = interim_inflight.get();

    pass_through->parent = this;
    children["pass-through"] = pass_through.get();

    start->parent = this;
    children["start"] = start.get();

    stop->parent = this;
    children["stop"] = stop.get();

    update->parent = this;
    children["update"] = update.get();

    yang_name = "accounting"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::~Accounting()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::has_data() const
{
    return active_sessions.is_set
	|| policy_plane_errored_requests.is_set
	|| policy_plane_unknown_requests.is_set
	|| started_sessions.is_set
	|| stopped_sessions.is_set
	|| (interim !=  nullptr && interim->has_data())
	|| (interim_inflight !=  nullptr && interim_inflight->has_data())
	|| (pass_through !=  nullptr && pass_through->has_data())
	|| (start !=  nullptr && start->has_data())
	|| (stop !=  nullptr && stop->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::has_operation() const
{
    return is_set(operation)
	|| is_set(active_sessions.operation)
	|| is_set(policy_plane_errored_requests.operation)
	|| is_set(policy_plane_unknown_requests.operation)
	|| is_set(started_sessions.operation)
	|| is_set(stopped_sessions.operation)
	|| (interim !=  nullptr && interim->has_operation())
	|| (interim_inflight !=  nullptr && interim_inflight->has_operation())
	|| (pass_through !=  nullptr && pass_through->has_operation())
	|| (start !=  nullptr && start->has_operation())
	|| (stop !=  nullptr && stop->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (policy_plane_errored_requests.is_set || is_set(policy_plane_errored_requests.operation)) leaf_name_data.push_back(policy_plane_errored_requests.get_name_leafdata());
    if (policy_plane_unknown_requests.is_set || is_set(policy_plane_unknown_requests.operation)) leaf_name_data.push_back(policy_plane_unknown_requests.get_name_leafdata());
    if (started_sessions.is_set || is_set(started_sessions.operation)) leaf_name_data.push_back(started_sessions.get_name_leafdata());
    if (stopped_sessions.is_set || is_set(stopped_sessions.operation)) leaf_name_data.push_back(stopped_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interim")
    {
        if(interim != nullptr)
        {
            children["interim"] = interim.get();
        }
        else
        {
            interim = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim>();
            interim->parent = this;
            children["interim"] = interim.get();
        }
        return children.at("interim");
    }

    if(child_yang_name == "interim-inflight")
    {
        if(interim_inflight != nullptr)
        {
            children["interim-inflight"] = interim_inflight.get();
        }
        else
        {
            interim_inflight = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight>();
            interim_inflight->parent = this;
            children["interim-inflight"] = interim_inflight.get();
        }
        return children.at("interim-inflight");
    }

    if(child_yang_name == "pass-through")
    {
        if(pass_through != nullptr)
        {
            children["pass-through"] = pass_through.get();
        }
        else
        {
            pass_through = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough>();
            pass_through->parent = this;
            children["pass-through"] = pass_through.get();
        }
        return children.at("pass-through");
    }

    if(child_yang_name == "start")
    {
        if(start != nullptr)
        {
            children["start"] = start.get();
        }
        else
        {
            start = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start>();
            start->parent = this;
            children["start"] = start.get();
        }
        return children.at("start");
    }

    if(child_yang_name == "stop")
    {
        if(stop != nullptr)
        {
            children["stop"] = stop.get();
        }
        else
        {
            stop = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop>();
            stop->parent = this;
            children["stop"] = stop.get();
        }
        return children.at("stop");
    }

    if(child_yang_name == "update")
    {
        if(update != nullptr)
        {
            children["update"] = update.get();
        }
        else
        {
            update = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update>();
            update->parent = this;
            children["update"] = update.get();
        }
        return children.at("update");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::get_children()
{
    if(children.find("interim") == children.end())
    {
        if(interim != nullptr)
        {
            children["interim"] = interim.get();
        }
    }

    if(children.find("interim-inflight") == children.end())
    {
        if(interim_inflight != nullptr)
        {
            children["interim-inflight"] = interim_inflight.get();
        }
    }

    if(children.find("pass-through") == children.end())
    {
        if(pass_through != nullptr)
        {
            children["pass-through"] = pass_through.get();
        }
    }

    if(children.find("start") == children.end())
    {
        if(start != nullptr)
        {
            children["start"] = start.get();
        }
    }

    if(children.find("stop") == children.end())
    {
        if(stop != nullptr)
        {
            children["stop"] = stop.get();
        }
    }

    if(children.find("update") == children.end())
    {
        if(update != nullptr)
        {
            children["update"] = update.get();
        }
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests = value;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests = value;
    }
    if(value_path == "started-sessions")
    {
        started_sessions = value;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::Mobility()
    :
    	receive_response_failures{YType::uint64, "receive-response-failures"},
	 receive_response_successes{YType::uint64, "receive-response-successes"},
	 send_request_failures{YType::uint64, "send-request-failures"},
	 send_request_successes{YType::uint64, "send-request-successes"}
{
    yang_name = "mobility"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::~Mobility()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::has_data() const
{
    return receive_response_failures.is_set
	|| receive_response_successes.is_set
	|| send_request_failures.is_set
	|| send_request_successes.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::has_operation() const
{
    return is_set(operation)
	|| is_set(receive_response_failures.operation)
	|| is_set(receive_response_successes.operation)
	|| is_set(send_request_failures.operation)
	|| is_set(send_request_successes.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_response_failures.is_set || is_set(receive_response_failures.operation)) leaf_name_data.push_back(receive_response_failures.get_name_leafdata());
    if (receive_response_successes.is_set || is_set(receive_response_successes.operation)) leaf_name_data.push_back(receive_response_successes.get_name_leafdata());
    if (send_request_failures.is_set || is_set(send_request_failures.operation)) leaf_name_data.push_back(send_request_failures.get_name_leafdata());
    if (send_request_successes.is_set || is_set(send_request_successes.operation)) leaf_name_data.push_back(send_request_successes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive-response-failures")
    {
        receive_response_failures = value;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes = value;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures = value;
    }
    if(value_path == "send-request-successes")
    {
        send_request_successes = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::AccountLogon()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-logon"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::~AccountLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logon";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::AccountLogoff()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-logoff"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::~AccountLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logoff";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::AccountUpdate()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-update"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::~AccountUpdate()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-update";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::SessionDisconnect()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "session-disconnect"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::~SessionDisconnect()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-disconnect";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::SingleServiceLogon()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-logon"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::~SingleServiceLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logon";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::SingleServiceLogoff()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-logoff"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::~SingleServiceLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logoff";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::SingleServiceModify()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-modify"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::~SingleServiceModify()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-modify";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::ServiceMulti()
    :
    	acknowledged_requests{YType::uint64, "acknowledged-requests"},
	 non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
	 received_requests{YType::uint64, "received-requests"}
{
    yang_name = "service-multi"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::~ServiceMulti()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-multi";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AggregateChangeOfAuthorization()
    :
    	attr_list_retrieve_failure_resps{YType::uint64, "attr-list-retrieve-failure-resps"},
	 internal_err_resps{YType::uint64, "internal-err-resps"},
	 no_cmd_resps{YType::uint64, "no-cmd-resps"},
	 no_session_found_resps{YType::uint64, "no-session-found-resps"},
	 no_session_peer_resps{YType::uint64, "no-session-peer-resps"},
	 resp_send_failure{YType::uint64, "resp-send-failure"},
	 service_profile_push_failure_resps{YType::uint64, "service-profile-push-failure-resps"},
	 unknown_account_cmd_resps{YType::uint64, "unknown-account-cmd-resps"},
	 unknown_cmd_resps{YType::uint64, "unknown-cmd-resps"},
	 unknown_service_cmd_resps{YType::uint64, "unknown-service-cmd-resps"}
    	,
    account_logoff(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff>())
	,account_logon(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon>())
	,account_update(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate>())
	,service_multi(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti>())
	,session_disconnect(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect>())
	,single_service_logoff(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff>())
	,single_service_logon(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon>())
	,single_service_modify(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify>())
{
    account_logoff->parent = this;
    children["account-logoff"] = account_logoff.get();

    account_logon->parent = this;
    children["account-logon"] = account_logon.get();

    account_update->parent = this;
    children["account-update"] = account_update.get();

    service_multi->parent = this;
    children["service-multi"] = service_multi.get();

    session_disconnect->parent = this;
    children["session-disconnect"] = session_disconnect.get();

    single_service_logoff->parent = this;
    children["single-service-logoff"] = single_service_logoff.get();

    single_service_logon->parent = this;
    children["single-service-logon"] = single_service_logon.get();

    single_service_modify->parent = this;
    children["single-service-modify"] = single_service_modify.get();

    yang_name = "aggregate-change-of-authorization"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::~AggregateChangeOfAuthorization()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::has_data() const
{
    return attr_list_retrieve_failure_resps.is_set
	|| internal_err_resps.is_set
	|| no_cmd_resps.is_set
	|| no_session_found_resps.is_set
	|| no_session_peer_resps.is_set
	|| resp_send_failure.is_set
	|| service_profile_push_failure_resps.is_set
	|| unknown_account_cmd_resps.is_set
	|| unknown_cmd_resps.is_set
	|| unknown_service_cmd_resps.is_set
	|| (account_logoff !=  nullptr && account_logoff->has_data())
	|| (account_logon !=  nullptr && account_logon->has_data())
	|| (account_update !=  nullptr && account_update->has_data())
	|| (service_multi !=  nullptr && service_multi->has_data())
	|| (session_disconnect !=  nullptr && session_disconnect->has_data())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_data())
	|| (single_service_logon !=  nullptr && single_service_logon->has_data())
	|| (single_service_modify !=  nullptr && single_service_modify->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::has_operation() const
{
    return is_set(operation)
	|| is_set(attr_list_retrieve_failure_resps.operation)
	|| is_set(internal_err_resps.operation)
	|| is_set(no_cmd_resps.operation)
	|| is_set(no_session_found_resps.operation)
	|| is_set(no_session_peer_resps.operation)
	|| is_set(resp_send_failure.operation)
	|| is_set(service_profile_push_failure_resps.operation)
	|| is_set(unknown_account_cmd_resps.operation)
	|| is_set(unknown_cmd_resps.operation)
	|| is_set(unknown_service_cmd_resps.operation)
	|| (account_logoff !=  nullptr && account_logoff->has_operation())
	|| (account_logon !=  nullptr && account_logon->has_operation())
	|| (account_update !=  nullptr && account_update->has_operation())
	|| (service_multi !=  nullptr && service_multi->has_operation())
	|| (session_disconnect !=  nullptr && session_disconnect->has_operation())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_operation())
	|| (single_service_logon !=  nullptr && single_service_logon->has_operation())
	|| (single_service_modify !=  nullptr && single_service_modify->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-change-of-authorization";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_list_retrieve_failure_resps.is_set || is_set(attr_list_retrieve_failure_resps.operation)) leaf_name_data.push_back(attr_list_retrieve_failure_resps.get_name_leafdata());
    if (internal_err_resps.is_set || is_set(internal_err_resps.operation)) leaf_name_data.push_back(internal_err_resps.get_name_leafdata());
    if (no_cmd_resps.is_set || is_set(no_cmd_resps.operation)) leaf_name_data.push_back(no_cmd_resps.get_name_leafdata());
    if (no_session_found_resps.is_set || is_set(no_session_found_resps.operation)) leaf_name_data.push_back(no_session_found_resps.get_name_leafdata());
    if (no_session_peer_resps.is_set || is_set(no_session_peer_resps.operation)) leaf_name_data.push_back(no_session_peer_resps.get_name_leafdata());
    if (resp_send_failure.is_set || is_set(resp_send_failure.operation)) leaf_name_data.push_back(resp_send_failure.get_name_leafdata());
    if (service_profile_push_failure_resps.is_set || is_set(service_profile_push_failure_resps.operation)) leaf_name_data.push_back(service_profile_push_failure_resps.get_name_leafdata());
    if (unknown_account_cmd_resps.is_set || is_set(unknown_account_cmd_resps.operation)) leaf_name_data.push_back(unknown_account_cmd_resps.get_name_leafdata());
    if (unknown_cmd_resps.is_set || is_set(unknown_cmd_resps.operation)) leaf_name_data.push_back(unknown_cmd_resps.get_name_leafdata());
    if (unknown_service_cmd_resps.is_set || is_set(unknown_service_cmd_resps.operation)) leaf_name_data.push_back(unknown_service_cmd_resps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "account-logoff")
    {
        if(account_logoff != nullptr)
        {
            children["account-logoff"] = account_logoff.get();
        }
        else
        {
            account_logoff = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff>();
            account_logoff->parent = this;
            children["account-logoff"] = account_logoff.get();
        }
        return children.at("account-logoff");
    }

    if(child_yang_name == "account-logon")
    {
        if(account_logon != nullptr)
        {
            children["account-logon"] = account_logon.get();
        }
        else
        {
            account_logon = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon>();
            account_logon->parent = this;
            children["account-logon"] = account_logon.get();
        }
        return children.at("account-logon");
    }

    if(child_yang_name == "account-update")
    {
        if(account_update != nullptr)
        {
            children["account-update"] = account_update.get();
        }
        else
        {
            account_update = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate>();
            account_update->parent = this;
            children["account-update"] = account_update.get();
        }
        return children.at("account-update");
    }

    if(child_yang_name == "service-multi")
    {
        if(service_multi != nullptr)
        {
            children["service-multi"] = service_multi.get();
        }
        else
        {
            service_multi = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti>();
            service_multi->parent = this;
            children["service-multi"] = service_multi.get();
        }
        return children.at("service-multi");
    }

    if(child_yang_name == "session-disconnect")
    {
        if(session_disconnect != nullptr)
        {
            children["session-disconnect"] = session_disconnect.get();
        }
        else
        {
            session_disconnect = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect>();
            session_disconnect->parent = this;
            children["session-disconnect"] = session_disconnect.get();
        }
        return children.at("session-disconnect");
    }

    if(child_yang_name == "single-service-logoff")
    {
        if(single_service_logoff != nullptr)
        {
            children["single-service-logoff"] = single_service_logoff.get();
        }
        else
        {
            single_service_logoff = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff>();
            single_service_logoff->parent = this;
            children["single-service-logoff"] = single_service_logoff.get();
        }
        return children.at("single-service-logoff");
    }

    if(child_yang_name == "single-service-logon")
    {
        if(single_service_logon != nullptr)
        {
            children["single-service-logon"] = single_service_logon.get();
        }
        else
        {
            single_service_logon = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon>();
            single_service_logon->parent = this;
            children["single-service-logon"] = single_service_logon.get();
        }
        return children.at("single-service-logon");
    }

    if(child_yang_name == "single-service-modify")
    {
        if(single_service_modify != nullptr)
        {
            children["single-service-modify"] = single_service_modify.get();
        }
        else
        {
            single_service_modify = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify>();
            single_service_modify->parent = this;
            children["single-service-modify"] = single_service_modify.get();
        }
        return children.at("single-service-modify");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::get_children()
{
    if(children.find("account-logoff") == children.end())
    {
        if(account_logoff != nullptr)
        {
            children["account-logoff"] = account_logoff.get();
        }
    }

    if(children.find("account-logon") == children.end())
    {
        if(account_logon != nullptr)
        {
            children["account-logon"] = account_logon.get();
        }
    }

    if(children.find("account-update") == children.end())
    {
        if(account_update != nullptr)
        {
            children["account-update"] = account_update.get();
        }
    }

    if(children.find("service-multi") == children.end())
    {
        if(service_multi != nullptr)
        {
            children["service-multi"] = service_multi.get();
        }
    }

    if(children.find("session-disconnect") == children.end())
    {
        if(session_disconnect != nullptr)
        {
            children["session-disconnect"] = session_disconnect.get();
        }
    }

    if(children.find("single-service-logoff") == children.end())
    {
        if(single_service_logoff != nullptr)
        {
            children["single-service-logoff"] = single_service_logoff.get();
        }
    }

    if(children.find("single-service-logon") == children.end())
    {
        if(single_service_logon != nullptr)
        {
            children["single-service-logon"] = single_service_logon.get();
        }
    }

    if(children.find("single-service-modify") == children.end())
    {
        if(single_service_modify != nullptr)
        {
            children["single-service-modify"] = single_service_modify.get();
        }
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps = value;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps = value;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps = value;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps = value;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps = value;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure = value;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps = value;
    }
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps = value;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps = value;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Aaa()
    :
    accounting(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting>())
	,aggregate_accounting(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting>())
	,aggregate_authentication(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication>())
	,aggregate_authorization(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization>())
	,aggregate_change_of_authorization(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization>())
	,aggregate_mobility(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility>())
	,authentication(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication>())
	,authorization(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization>())
	,change_of_authorization(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization>())
	,mobility(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility>())
{
    accounting->parent = this;
    children["accounting"] = accounting.get();

    aggregate_accounting->parent = this;
    children["aggregate-accounting"] = aggregate_accounting.get();

    aggregate_authentication->parent = this;
    children["aggregate-authentication"] = aggregate_authentication.get();

    aggregate_authorization->parent = this;
    children["aggregate-authorization"] = aggregate_authorization.get();

    aggregate_change_of_authorization->parent = this;
    children["aggregate-change-of-authorization"] = aggregate_change_of_authorization.get();

    aggregate_mobility->parent = this;
    children["aggregate-mobility"] = aggregate_mobility.get();

    authentication->parent = this;
    children["authentication"] = authentication.get();

    authorization->parent = this;
    children["authorization"] = authorization.get();

    change_of_authorization->parent = this;
    children["change-of-authorization"] = change_of_authorization.get();

    mobility->parent = this;
    children["mobility"] = mobility.get();

    yang_name = "aaa"; yang_parent_name = "statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::~Aaa()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (aggregate_accounting !=  nullptr && aggregate_accounting->has_data())
	|| (aggregate_authentication !=  nullptr && aggregate_authentication->has_data())
	|| (aggregate_authorization !=  nullptr && aggregate_authorization->has_data())
	|| (aggregate_change_of_authorization !=  nullptr && aggregate_change_of_authorization->has_data())
	|| (aggregate_mobility !=  nullptr && aggregate_mobility->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (change_of_authorization !=  nullptr && change_of_authorization->has_data())
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::has_operation() const
{
    return is_set(operation)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (aggregate_accounting !=  nullptr && aggregate_accounting->has_operation())
	|| (aggregate_authentication !=  nullptr && aggregate_authentication->has_operation())
	|| (aggregate_authorization !=  nullptr && aggregate_authorization->has_operation())
	|| (aggregate_change_of_authorization !=  nullptr && aggregate_change_of_authorization->has_operation())
	|| (aggregate_mobility !=  nullptr && aggregate_mobility->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (change_of_authorization !=  nullptr && change_of_authorization->has_operation())
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting")
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
        else
        {
            accounting = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting.get();
        }
        return children.at("accounting");
    }

    if(child_yang_name == "aggregate-accounting")
    {
        if(aggregate_accounting != nullptr)
        {
            children["aggregate-accounting"] = aggregate_accounting.get();
        }
        else
        {
            aggregate_accounting = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting>();
            aggregate_accounting->parent = this;
            children["aggregate-accounting"] = aggregate_accounting.get();
        }
        return children.at("aggregate-accounting");
    }

    if(child_yang_name == "aggregate-authentication")
    {
        if(aggregate_authentication != nullptr)
        {
            children["aggregate-authentication"] = aggregate_authentication.get();
        }
        else
        {
            aggregate_authentication = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication>();
            aggregate_authentication->parent = this;
            children["aggregate-authentication"] = aggregate_authentication.get();
        }
        return children.at("aggregate-authentication");
    }

    if(child_yang_name == "aggregate-authorization")
    {
        if(aggregate_authorization != nullptr)
        {
            children["aggregate-authorization"] = aggregate_authorization.get();
        }
        else
        {
            aggregate_authorization = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization>();
            aggregate_authorization->parent = this;
            children["aggregate-authorization"] = aggregate_authorization.get();
        }
        return children.at("aggregate-authorization");
    }

    if(child_yang_name == "aggregate-change-of-authorization")
    {
        if(aggregate_change_of_authorization != nullptr)
        {
            children["aggregate-change-of-authorization"] = aggregate_change_of_authorization.get();
        }
        else
        {
            aggregate_change_of_authorization = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization>();
            aggregate_change_of_authorization->parent = this;
            children["aggregate-change-of-authorization"] = aggregate_change_of_authorization.get();
        }
        return children.at("aggregate-change-of-authorization");
    }

    if(child_yang_name == "aggregate-mobility")
    {
        if(aggregate_mobility != nullptr)
        {
            children["aggregate-mobility"] = aggregate_mobility.get();
        }
        else
        {
            aggregate_mobility = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility>();
            aggregate_mobility->parent = this;
            children["aggregate-mobility"] = aggregate_mobility.get();
        }
        return children.at("aggregate-mobility");
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
        else
        {
            authentication = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication.get();
        }
        return children.at("authentication");
    }

    if(child_yang_name == "authorization")
    {
        if(authorization != nullptr)
        {
            children["authorization"] = authorization.get();
        }
        else
        {
            authorization = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization>();
            authorization->parent = this;
            children["authorization"] = authorization.get();
        }
        return children.at("authorization");
    }

    if(child_yang_name == "change-of-authorization")
    {
        if(change_of_authorization != nullptr)
        {
            children["change-of-authorization"] = change_of_authorization.get();
        }
        else
        {
            change_of_authorization = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization>();
            change_of_authorization->parent = this;
            children["change-of-authorization"] = change_of_authorization.get();
        }
        return children.at("change-of-authorization");
    }

    if(child_yang_name == "mobility")
    {
        if(mobility != nullptr)
        {
            children["mobility"] = mobility.get();
        }
        else
        {
            mobility = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility>();
            mobility->parent = this;
            children["mobility"] = mobility.get();
        }
        return children.at("mobility");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Aaa::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
    }

    if(children.find("aggregate-accounting") == children.end())
    {
        if(aggregate_accounting != nullptr)
        {
            children["aggregate-accounting"] = aggregate_accounting.get();
        }
    }

    if(children.find("aggregate-authentication") == children.end())
    {
        if(aggregate_authentication != nullptr)
        {
            children["aggregate-authentication"] = aggregate_authentication.get();
        }
    }

    if(children.find("aggregate-authorization") == children.end())
    {
        if(aggregate_authorization != nullptr)
        {
            children["aggregate-authorization"] = aggregate_authorization.get();
        }
    }

    if(children.find("aggregate-change-of-authorization") == children.end())
    {
        if(aggregate_change_of_authorization != nullptr)
        {
            children["aggregate-change-of-authorization"] = aggregate_change_of_authorization.get();
        }
    }

    if(children.find("aggregate-mobility") == children.end())
    {
        if(aggregate_mobility != nullptr)
        {
            children["aggregate-mobility"] = aggregate_mobility.get();
        }
    }

    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
    }

    if(children.find("authorization") == children.end())
    {
        if(authorization != nullptr)
        {
            children["authorization"] = authorization.get();
        }
    }

    if(children.find("change-of-authorization") == children.end())
    {
        if(change_of_authorization != nullptr)
        {
            children["change-of-authorization"] = change_of_authorization.get();
        }
    }

    if(children.find("mobility") == children.end())
    {
        if(mobility != nullptr)
        {
            children["mobility"] = mobility.get();
        }
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::AggregateSummary()
    :
    	calling_station_id_attribute_format_warnings{YType::uint64, "calling-station-id-attribute-format-warnings"},
	 destination_station_id_attribute_format_warnings{YType::uint64, "destination-station-id-attribute-format-warnings"},
	 install_user_profiles{YType::uint64, "install-user-profiles"},
	 nas_port_attribute_format_warnings{YType::uint64, "nas-port-attribute-format-warnings"},
	 nas_port_id_attribute_format_warnings{YType::uint64, "nas-port-id-attribute-format-warnings"},
	 no_class_match_in_start_request{YType::uint64, "no-class-match-in-start-request"},
	 no_subscriber_control_policy_on_interface{YType::uint64, "no-subscriber-control-policy-on-interface"},
	 sess_disc_no_quota{YType::uint64, "sess-disc-no-quota"},
	 sess_disc_none_started{YType::uint64, "sess-disc-none-started"},
	 sess_disc_q_count{YType::uint32, "sess-disc-q-count"},
	 sess_disc_quota{YType::uint32, "sess-disc-quota"},
	 sess_disc_quota_avail{YType::uint64, "sess-disc-quota-avail"},
	 sess_disc_quota_exhausts{YType::uint64, "sess-disc-quota-exhausts"},
	 sess_disc_quota_remaining{YType::uint32, "sess-disc-quota-remaining"},
	 sess_disc_recon_ip{YType::uint64, "sess-disc-recon-ip"},
	 user_profile_errors{YType::uint64, "user-profile-errors"},
	 user_profile_install_errors{YType::uint64, "user-profile-install-errors"},
	 user_profile_removals{YType::uint64, "user-profile-removals"},
	 username_attribute_format_warnings{YType::uint64, "username-attribute-format-warnings"}
{
    yang_name = "aggregate-summary"; yang_parent_name = "statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::~AggregateSummary()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::has_data() const
{
    return calling_station_id_attribute_format_warnings.is_set
	|| destination_station_id_attribute_format_warnings.is_set
	|| install_user_profiles.is_set
	|| nas_port_attribute_format_warnings.is_set
	|| nas_port_id_attribute_format_warnings.is_set
	|| no_class_match_in_start_request.is_set
	|| no_subscriber_control_policy_on_interface.is_set
	|| sess_disc_no_quota.is_set
	|| sess_disc_none_started.is_set
	|| sess_disc_q_count.is_set
	|| sess_disc_quota.is_set
	|| sess_disc_quota_avail.is_set
	|| sess_disc_quota_exhausts.is_set
	|| sess_disc_quota_remaining.is_set
	|| sess_disc_recon_ip.is_set
	|| user_profile_errors.is_set
	|| user_profile_install_errors.is_set
	|| user_profile_removals.is_set
	|| username_attribute_format_warnings.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(calling_station_id_attribute_format_warnings.operation)
	|| is_set(destination_station_id_attribute_format_warnings.operation)
	|| is_set(install_user_profiles.operation)
	|| is_set(nas_port_attribute_format_warnings.operation)
	|| is_set(nas_port_id_attribute_format_warnings.operation)
	|| is_set(no_class_match_in_start_request.operation)
	|| is_set(no_subscriber_control_policy_on_interface.operation)
	|| is_set(sess_disc_no_quota.operation)
	|| is_set(sess_disc_none_started.operation)
	|| is_set(sess_disc_q_count.operation)
	|| is_set(sess_disc_quota.operation)
	|| is_set(sess_disc_quota_avail.operation)
	|| is_set(sess_disc_quota_exhausts.operation)
	|| is_set(sess_disc_quota_remaining.operation)
	|| is_set(sess_disc_recon_ip.operation)
	|| is_set(user_profile_errors.operation)
	|| is_set(user_profile_install_errors.operation)
	|| is_set(user_profile_removals.operation)
	|| is_set(username_attribute_format_warnings.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-summary";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (calling_station_id_attribute_format_warnings.is_set || is_set(calling_station_id_attribute_format_warnings.operation)) leaf_name_data.push_back(calling_station_id_attribute_format_warnings.get_name_leafdata());
    if (destination_station_id_attribute_format_warnings.is_set || is_set(destination_station_id_attribute_format_warnings.operation)) leaf_name_data.push_back(destination_station_id_attribute_format_warnings.get_name_leafdata());
    if (install_user_profiles.is_set || is_set(install_user_profiles.operation)) leaf_name_data.push_back(install_user_profiles.get_name_leafdata());
    if (nas_port_attribute_format_warnings.is_set || is_set(nas_port_attribute_format_warnings.operation)) leaf_name_data.push_back(nas_port_attribute_format_warnings.get_name_leafdata());
    if (nas_port_id_attribute_format_warnings.is_set || is_set(nas_port_id_attribute_format_warnings.operation)) leaf_name_data.push_back(nas_port_id_attribute_format_warnings.get_name_leafdata());
    if (no_class_match_in_start_request.is_set || is_set(no_class_match_in_start_request.operation)) leaf_name_data.push_back(no_class_match_in_start_request.get_name_leafdata());
    if (no_subscriber_control_policy_on_interface.is_set || is_set(no_subscriber_control_policy_on_interface.operation)) leaf_name_data.push_back(no_subscriber_control_policy_on_interface.get_name_leafdata());
    if (sess_disc_no_quota.is_set || is_set(sess_disc_no_quota.operation)) leaf_name_data.push_back(sess_disc_no_quota.get_name_leafdata());
    if (sess_disc_none_started.is_set || is_set(sess_disc_none_started.operation)) leaf_name_data.push_back(sess_disc_none_started.get_name_leafdata());
    if (sess_disc_q_count.is_set || is_set(sess_disc_q_count.operation)) leaf_name_data.push_back(sess_disc_q_count.get_name_leafdata());
    if (sess_disc_quota.is_set || is_set(sess_disc_quota.operation)) leaf_name_data.push_back(sess_disc_quota.get_name_leafdata());
    if (sess_disc_quota_avail.is_set || is_set(sess_disc_quota_avail.operation)) leaf_name_data.push_back(sess_disc_quota_avail.get_name_leafdata());
    if (sess_disc_quota_exhausts.is_set || is_set(sess_disc_quota_exhausts.operation)) leaf_name_data.push_back(sess_disc_quota_exhausts.get_name_leafdata());
    if (sess_disc_quota_remaining.is_set || is_set(sess_disc_quota_remaining.operation)) leaf_name_data.push_back(sess_disc_quota_remaining.get_name_leafdata());
    if (sess_disc_recon_ip.is_set || is_set(sess_disc_recon_ip.operation)) leaf_name_data.push_back(sess_disc_recon_ip.get_name_leafdata());
    if (user_profile_errors.is_set || is_set(user_profile_errors.operation)) leaf_name_data.push_back(user_profile_errors.get_name_leafdata());
    if (user_profile_install_errors.is_set || is_set(user_profile_install_errors.operation)) leaf_name_data.push_back(user_profile_install_errors.get_name_leafdata());
    if (user_profile_removals.is_set || is_set(user_profile_removals.operation)) leaf_name_data.push_back(user_profile_removals.get_name_leafdata());
    if (username_attribute_format_warnings.is_set || is_set(username_attribute_format_warnings.operation)) leaf_name_data.push_back(username_attribute_format_warnings.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "calling-station-id-attribute-format-warnings")
    {
        calling_station_id_attribute_format_warnings = value;
    }
    if(value_path == "destination-station-id-attribute-format-warnings")
    {
        destination_station_id_attribute_format_warnings = value;
    }
    if(value_path == "install-user-profiles")
    {
        install_user_profiles = value;
    }
    if(value_path == "nas-port-attribute-format-warnings")
    {
        nas_port_attribute_format_warnings = value;
    }
    if(value_path == "nas-port-id-attribute-format-warnings")
    {
        nas_port_id_attribute_format_warnings = value;
    }
    if(value_path == "no-class-match-in-start-request")
    {
        no_class_match_in_start_request = value;
    }
    if(value_path == "no-subscriber-control-policy-on-interface")
    {
        no_subscriber_control_policy_on_interface = value;
    }
    if(value_path == "sess-disc-no-quota")
    {
        sess_disc_no_quota = value;
    }
    if(value_path == "sess-disc-none-started")
    {
        sess_disc_none_started = value;
    }
    if(value_path == "sess-disc-q-count")
    {
        sess_disc_q_count = value;
    }
    if(value_path == "sess-disc-quota")
    {
        sess_disc_quota = value;
    }
    if(value_path == "sess-disc-quota-avail")
    {
        sess_disc_quota_avail = value;
    }
    if(value_path == "sess-disc-quota-exhausts")
    {
        sess_disc_quota_exhausts = value;
    }
    if(value_path == "sess-disc-quota-remaining")
    {
        sess_disc_quota_remaining = value;
    }
    if(value_path == "sess-disc-recon-ip")
    {
        sess_disc_recon_ip = value;
    }
    if(value_path == "user-profile-errors")
    {
        user_profile_errors = value;
    }
    if(value_path == "user-profile-install-errors")
    {
        user_profile_install_errors = value;
    }
    if(value_path == "user-profile-removals")
    {
        user_profile_removals = value;
    }
    if(value_path == "username-attribute-format-warnings")
    {
        username_attribute_format_warnings = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Srg::Srg()
    :
    	ack_to_srg{YType::uint32, "ack-to-srg"},
	 actual_txlist_sent{YType::uint32, "actual-txlist-sent"},
	 alreadyin_txlist{YType::uint32, "alreadyin-txlist"},
	 create_upd_clean_callback{YType::uint32, "create-upd-clean-callback"},
	 create_update_encode{YType::uint32, "create-update-encode"},
	 delete_clean_callback{YType::uint32, "delete-clean-callback"},
	 delete_encode{YType::uint32, "delete-encode"},
	 eod_count{YType::uint32, "eod-count"},
	 flow_control_resume_threshold{YType::uint32, "flow-control-resume-threshold"},
	 inflight_add_count{YType::uint32, "inflight-add-count"},
	 inflight_alloc_fails{YType::uint32, "inflight-alloc-fails"},
	 inflight_delete_failures{YType::uint32, "inflight-delete-failures"},
	 inflight_deletes{YType::uint32, "inflight-deletes"},
	 inflight_insert_failures{YType::uint32, "inflight-insert-failures"},
	 inflight_not_found{YType::uint32, "inflight-not-found"},
	 inflight_session_count{YType::uint32, "inflight-session-count"},
	 inflight_under_run_count{YType::uint32, "inflight-under-run-count"},
	 is_srg_flow_control_enabled{YType::boolean, "is-srg-flow-control-enabled"},
	 last_pause_period{YType::uint64, "last-pause-period"},
	 last_pause_time{YType::uint64, "last-pause-time"},
	 last_resume_time{YType::uint64, "last-resume-time"},
	 max_inflight_sessoin_count{YType::uint32, "max-inflight-sessoin-count"},
	 nack_to_srg{YType::uint32, "nack-to-srg"},
	 nack_to_srg_fail_cnt{YType::uint32, "nack-to-srg-fail-cnt"},
	 slave_create_update{YType::uint32, "slave-create-update"},
	 slave_decode_fail{YType::uint32, "slave-decode-fail"},
	 slave_delete{YType::uint32, "slave-delete"},
	 slave_recv_entry{YType::uint32, "slave-recv-entry"},
	 sod_count{YType::uint32, "sod-count"},
	 sod_eod_dirty_delete_count{YType::uint32, "sod-eod-dirty-delete-count"},
	 sod_eod_dirty_mark_count{YType::uint32, "sod-eod-dirty-mark-count"},
	 sod_eod_replay_req_count{YType::uint32, "sod-eod-replay-req-count"},
	 srg_context_free{YType::uint32, "srg-context-free"},
	 srg_context_malloc{YType::uint32, "srg-context-malloc"},
	 total_dont_send_to_txlist{YType::uint32, "total-dont-send-to-txlist"},
	 total_master_eoms_pending{YType::uint32, "total-master-eoms-pending"},
	 total_pause_count{YType::uint32, "total-pause-count"},
	 total_pause_time{YType::uint64, "total-pause-time"},
	 total_resume_count{YType::uint32, "total-resume-count"},
	 total_srg_not_master{YType::uint32, "total-srg-not-master"},
	 txlist_clean_invalid_state{YType::uint32, "txlist-clean-invalid-state"},
	 txlist_del_app{YType::uint32, "txlist-del-app"},
	 txlist_del_app_notlinked{YType::uint32, "txlist-del-app-notlinked"},
	 txlist_del_sync{YType::uint32, "txlist-del-sync"},
	 txlist_del_sync_notlinked{YType::uint32, "txlist-del-sync-notlinked"},
	 txlist_encode{YType::uint32, "txlist-encode"},
	 txlist_encode_fail{YType::uint32, "txlist-encode-fail"},
	 txlist_remove_all{YType::uint32, "txlist-remove-all"},
	 txlist_remove_all_internal_error{YType::uint32, "txlist-remove-all-internal-error"},
	 txlist_send_failed{YType::uint32, "txlist-send-failed"},
	 txlist_send_failed_notactive{YType::uint32, "txlist-send-failed-notactive"},
	 txlist_send_triggered{YType::uint32, "txlist-send-triggered"}
{
    yang_name = "srg"; yang_parent_name = "statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Srg::~Srg()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Srg::has_data() const
{
    return ack_to_srg.is_set
	|| actual_txlist_sent.is_set
	|| alreadyin_txlist.is_set
	|| create_upd_clean_callback.is_set
	|| create_update_encode.is_set
	|| delete_clean_callback.is_set
	|| delete_encode.is_set
	|| eod_count.is_set
	|| flow_control_resume_threshold.is_set
	|| inflight_add_count.is_set
	|| inflight_alloc_fails.is_set
	|| inflight_delete_failures.is_set
	|| inflight_deletes.is_set
	|| inflight_insert_failures.is_set
	|| inflight_not_found.is_set
	|| inflight_session_count.is_set
	|| inflight_under_run_count.is_set
	|| is_srg_flow_control_enabled.is_set
	|| last_pause_period.is_set
	|| last_pause_time.is_set
	|| last_resume_time.is_set
	|| max_inflight_sessoin_count.is_set
	|| nack_to_srg.is_set
	|| nack_to_srg_fail_cnt.is_set
	|| slave_create_update.is_set
	|| slave_decode_fail.is_set
	|| slave_delete.is_set
	|| slave_recv_entry.is_set
	|| sod_count.is_set
	|| sod_eod_dirty_delete_count.is_set
	|| sod_eod_dirty_mark_count.is_set
	|| sod_eod_replay_req_count.is_set
	|| srg_context_free.is_set
	|| srg_context_malloc.is_set
	|| total_dont_send_to_txlist.is_set
	|| total_master_eoms_pending.is_set
	|| total_pause_count.is_set
	|| total_pause_time.is_set
	|| total_resume_count.is_set
	|| total_srg_not_master.is_set
	|| txlist_clean_invalid_state.is_set
	|| txlist_del_app.is_set
	|| txlist_del_app_notlinked.is_set
	|| txlist_del_sync.is_set
	|| txlist_del_sync_notlinked.is_set
	|| txlist_encode.is_set
	|| txlist_encode_fail.is_set
	|| txlist_remove_all.is_set
	|| txlist_remove_all_internal_error.is_set
	|| txlist_send_failed.is_set
	|| txlist_send_failed_notactive.is_set
	|| txlist_send_triggered.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Srg::has_operation() const
{
    return is_set(operation)
	|| is_set(ack_to_srg.operation)
	|| is_set(actual_txlist_sent.operation)
	|| is_set(alreadyin_txlist.operation)
	|| is_set(create_upd_clean_callback.operation)
	|| is_set(create_update_encode.operation)
	|| is_set(delete_clean_callback.operation)
	|| is_set(delete_encode.operation)
	|| is_set(eod_count.operation)
	|| is_set(flow_control_resume_threshold.operation)
	|| is_set(inflight_add_count.operation)
	|| is_set(inflight_alloc_fails.operation)
	|| is_set(inflight_delete_failures.operation)
	|| is_set(inflight_deletes.operation)
	|| is_set(inflight_insert_failures.operation)
	|| is_set(inflight_not_found.operation)
	|| is_set(inflight_session_count.operation)
	|| is_set(inflight_under_run_count.operation)
	|| is_set(is_srg_flow_control_enabled.operation)
	|| is_set(last_pause_period.operation)
	|| is_set(last_pause_time.operation)
	|| is_set(last_resume_time.operation)
	|| is_set(max_inflight_sessoin_count.operation)
	|| is_set(nack_to_srg.operation)
	|| is_set(nack_to_srg_fail_cnt.operation)
	|| is_set(slave_create_update.operation)
	|| is_set(slave_decode_fail.operation)
	|| is_set(slave_delete.operation)
	|| is_set(slave_recv_entry.operation)
	|| is_set(sod_count.operation)
	|| is_set(sod_eod_dirty_delete_count.operation)
	|| is_set(sod_eod_dirty_mark_count.operation)
	|| is_set(sod_eod_replay_req_count.operation)
	|| is_set(srg_context_free.operation)
	|| is_set(srg_context_malloc.operation)
	|| is_set(total_dont_send_to_txlist.operation)
	|| is_set(total_master_eoms_pending.operation)
	|| is_set(total_pause_count.operation)
	|| is_set(total_pause_time.operation)
	|| is_set(total_resume_count.operation)
	|| is_set(total_srg_not_master.operation)
	|| is_set(txlist_clean_invalid_state.operation)
	|| is_set(txlist_del_app.operation)
	|| is_set(txlist_del_app_notlinked.operation)
	|| is_set(txlist_del_sync.operation)
	|| is_set(txlist_del_sync_notlinked.operation)
	|| is_set(txlist_encode.operation)
	|| is_set(txlist_encode_fail.operation)
	|| is_set(txlist_remove_all.operation)
	|| is_set(txlist_remove_all_internal_error.operation)
	|| is_set(txlist_send_failed.operation)
	|| is_set(txlist_send_failed_notactive.operation)
	|| is_set(txlist_send_triggered.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Srg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srg";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::Srg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_to_srg.is_set || is_set(ack_to_srg.operation)) leaf_name_data.push_back(ack_to_srg.get_name_leafdata());
    if (actual_txlist_sent.is_set || is_set(actual_txlist_sent.operation)) leaf_name_data.push_back(actual_txlist_sent.get_name_leafdata());
    if (alreadyin_txlist.is_set || is_set(alreadyin_txlist.operation)) leaf_name_data.push_back(alreadyin_txlist.get_name_leafdata());
    if (create_upd_clean_callback.is_set || is_set(create_upd_clean_callback.operation)) leaf_name_data.push_back(create_upd_clean_callback.get_name_leafdata());
    if (create_update_encode.is_set || is_set(create_update_encode.operation)) leaf_name_data.push_back(create_update_encode.get_name_leafdata());
    if (delete_clean_callback.is_set || is_set(delete_clean_callback.operation)) leaf_name_data.push_back(delete_clean_callback.get_name_leafdata());
    if (delete_encode.is_set || is_set(delete_encode.operation)) leaf_name_data.push_back(delete_encode.get_name_leafdata());
    if (eod_count.is_set || is_set(eod_count.operation)) leaf_name_data.push_back(eod_count.get_name_leafdata());
    if (flow_control_resume_threshold.is_set || is_set(flow_control_resume_threshold.operation)) leaf_name_data.push_back(flow_control_resume_threshold.get_name_leafdata());
    if (inflight_add_count.is_set || is_set(inflight_add_count.operation)) leaf_name_data.push_back(inflight_add_count.get_name_leafdata());
    if (inflight_alloc_fails.is_set || is_set(inflight_alloc_fails.operation)) leaf_name_data.push_back(inflight_alloc_fails.get_name_leafdata());
    if (inflight_delete_failures.is_set || is_set(inflight_delete_failures.operation)) leaf_name_data.push_back(inflight_delete_failures.get_name_leafdata());
    if (inflight_deletes.is_set || is_set(inflight_deletes.operation)) leaf_name_data.push_back(inflight_deletes.get_name_leafdata());
    if (inflight_insert_failures.is_set || is_set(inflight_insert_failures.operation)) leaf_name_data.push_back(inflight_insert_failures.get_name_leafdata());
    if (inflight_not_found.is_set || is_set(inflight_not_found.operation)) leaf_name_data.push_back(inflight_not_found.get_name_leafdata());
    if (inflight_session_count.is_set || is_set(inflight_session_count.operation)) leaf_name_data.push_back(inflight_session_count.get_name_leafdata());
    if (inflight_under_run_count.is_set || is_set(inflight_under_run_count.operation)) leaf_name_data.push_back(inflight_under_run_count.get_name_leafdata());
    if (is_srg_flow_control_enabled.is_set || is_set(is_srg_flow_control_enabled.operation)) leaf_name_data.push_back(is_srg_flow_control_enabled.get_name_leafdata());
    if (last_pause_period.is_set || is_set(last_pause_period.operation)) leaf_name_data.push_back(last_pause_period.get_name_leafdata());
    if (last_pause_time.is_set || is_set(last_pause_time.operation)) leaf_name_data.push_back(last_pause_time.get_name_leafdata());
    if (last_resume_time.is_set || is_set(last_resume_time.operation)) leaf_name_data.push_back(last_resume_time.get_name_leafdata());
    if (max_inflight_sessoin_count.is_set || is_set(max_inflight_sessoin_count.operation)) leaf_name_data.push_back(max_inflight_sessoin_count.get_name_leafdata());
    if (nack_to_srg.is_set || is_set(nack_to_srg.operation)) leaf_name_data.push_back(nack_to_srg.get_name_leafdata());
    if (nack_to_srg_fail_cnt.is_set || is_set(nack_to_srg_fail_cnt.operation)) leaf_name_data.push_back(nack_to_srg_fail_cnt.get_name_leafdata());
    if (slave_create_update.is_set || is_set(slave_create_update.operation)) leaf_name_data.push_back(slave_create_update.get_name_leafdata());
    if (slave_decode_fail.is_set || is_set(slave_decode_fail.operation)) leaf_name_data.push_back(slave_decode_fail.get_name_leafdata());
    if (slave_delete.is_set || is_set(slave_delete.operation)) leaf_name_data.push_back(slave_delete.get_name_leafdata());
    if (slave_recv_entry.is_set || is_set(slave_recv_entry.operation)) leaf_name_data.push_back(slave_recv_entry.get_name_leafdata());
    if (sod_count.is_set || is_set(sod_count.operation)) leaf_name_data.push_back(sod_count.get_name_leafdata());
    if (sod_eod_dirty_delete_count.is_set || is_set(sod_eod_dirty_delete_count.operation)) leaf_name_data.push_back(sod_eod_dirty_delete_count.get_name_leafdata());
    if (sod_eod_dirty_mark_count.is_set || is_set(sod_eod_dirty_mark_count.operation)) leaf_name_data.push_back(sod_eod_dirty_mark_count.get_name_leafdata());
    if (sod_eod_replay_req_count.is_set || is_set(sod_eod_replay_req_count.operation)) leaf_name_data.push_back(sod_eod_replay_req_count.get_name_leafdata());
    if (srg_context_free.is_set || is_set(srg_context_free.operation)) leaf_name_data.push_back(srg_context_free.get_name_leafdata());
    if (srg_context_malloc.is_set || is_set(srg_context_malloc.operation)) leaf_name_data.push_back(srg_context_malloc.get_name_leafdata());
    if (total_dont_send_to_txlist.is_set || is_set(total_dont_send_to_txlist.operation)) leaf_name_data.push_back(total_dont_send_to_txlist.get_name_leafdata());
    if (total_master_eoms_pending.is_set || is_set(total_master_eoms_pending.operation)) leaf_name_data.push_back(total_master_eoms_pending.get_name_leafdata());
    if (total_pause_count.is_set || is_set(total_pause_count.operation)) leaf_name_data.push_back(total_pause_count.get_name_leafdata());
    if (total_pause_time.is_set || is_set(total_pause_time.operation)) leaf_name_data.push_back(total_pause_time.get_name_leafdata());
    if (total_resume_count.is_set || is_set(total_resume_count.operation)) leaf_name_data.push_back(total_resume_count.get_name_leafdata());
    if (total_srg_not_master.is_set || is_set(total_srg_not_master.operation)) leaf_name_data.push_back(total_srg_not_master.get_name_leafdata());
    if (txlist_clean_invalid_state.is_set || is_set(txlist_clean_invalid_state.operation)) leaf_name_data.push_back(txlist_clean_invalid_state.get_name_leafdata());
    if (txlist_del_app.is_set || is_set(txlist_del_app.operation)) leaf_name_data.push_back(txlist_del_app.get_name_leafdata());
    if (txlist_del_app_notlinked.is_set || is_set(txlist_del_app_notlinked.operation)) leaf_name_data.push_back(txlist_del_app_notlinked.get_name_leafdata());
    if (txlist_del_sync.is_set || is_set(txlist_del_sync.operation)) leaf_name_data.push_back(txlist_del_sync.get_name_leafdata());
    if (txlist_del_sync_notlinked.is_set || is_set(txlist_del_sync_notlinked.operation)) leaf_name_data.push_back(txlist_del_sync_notlinked.get_name_leafdata());
    if (txlist_encode.is_set || is_set(txlist_encode.operation)) leaf_name_data.push_back(txlist_encode.get_name_leafdata());
    if (txlist_encode_fail.is_set || is_set(txlist_encode_fail.operation)) leaf_name_data.push_back(txlist_encode_fail.get_name_leafdata());
    if (txlist_remove_all.is_set || is_set(txlist_remove_all.operation)) leaf_name_data.push_back(txlist_remove_all.get_name_leafdata());
    if (txlist_remove_all_internal_error.is_set || is_set(txlist_remove_all_internal_error.operation)) leaf_name_data.push_back(txlist_remove_all_internal_error.get_name_leafdata());
    if (txlist_send_failed.is_set || is_set(txlist_send_failed.operation)) leaf_name_data.push_back(txlist_send_failed.get_name_leafdata());
    if (txlist_send_failed_notactive.is_set || is_set(txlist_send_failed_notactive.operation)) leaf_name_data.push_back(txlist_send_failed_notactive.get_name_leafdata());
    if (txlist_send_triggered.is_set || is_set(txlist_send_triggered.operation)) leaf_name_data.push_back(txlist_send_triggered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::Srg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::Srg::get_children()
{
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Srg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack-to-srg")
    {
        ack_to_srg = value;
    }
    if(value_path == "actual-txlist-sent")
    {
        actual_txlist_sent = value;
    }
    if(value_path == "alreadyin-txlist")
    {
        alreadyin_txlist = value;
    }
    if(value_path == "create-upd-clean-callback")
    {
        create_upd_clean_callback = value;
    }
    if(value_path == "create-update-encode")
    {
        create_update_encode = value;
    }
    if(value_path == "delete-clean-callback")
    {
        delete_clean_callback = value;
    }
    if(value_path == "delete-encode")
    {
        delete_encode = value;
    }
    if(value_path == "eod-count")
    {
        eod_count = value;
    }
    if(value_path == "flow-control-resume-threshold")
    {
        flow_control_resume_threshold = value;
    }
    if(value_path == "inflight-add-count")
    {
        inflight_add_count = value;
    }
    if(value_path == "inflight-alloc-fails")
    {
        inflight_alloc_fails = value;
    }
    if(value_path == "inflight-delete-failures")
    {
        inflight_delete_failures = value;
    }
    if(value_path == "inflight-deletes")
    {
        inflight_deletes = value;
    }
    if(value_path == "inflight-insert-failures")
    {
        inflight_insert_failures = value;
    }
    if(value_path == "inflight-not-found")
    {
        inflight_not_found = value;
    }
    if(value_path == "inflight-session-count")
    {
        inflight_session_count = value;
    }
    if(value_path == "inflight-under-run-count")
    {
        inflight_under_run_count = value;
    }
    if(value_path == "is-srg-flow-control-enabled")
    {
        is_srg_flow_control_enabled = value;
    }
    if(value_path == "last-pause-period")
    {
        last_pause_period = value;
    }
    if(value_path == "last-pause-time")
    {
        last_pause_time = value;
    }
    if(value_path == "last-resume-time")
    {
        last_resume_time = value;
    }
    if(value_path == "max-inflight-sessoin-count")
    {
        max_inflight_sessoin_count = value;
    }
    if(value_path == "nack-to-srg")
    {
        nack_to_srg = value;
    }
    if(value_path == "nack-to-srg-fail-cnt")
    {
        nack_to_srg_fail_cnt = value;
    }
    if(value_path == "slave-create-update")
    {
        slave_create_update = value;
    }
    if(value_path == "slave-decode-fail")
    {
        slave_decode_fail = value;
    }
    if(value_path == "slave-delete")
    {
        slave_delete = value;
    }
    if(value_path == "slave-recv-entry")
    {
        slave_recv_entry = value;
    }
    if(value_path == "sod-count")
    {
        sod_count = value;
    }
    if(value_path == "sod-eod-dirty-delete-count")
    {
        sod_eod_dirty_delete_count = value;
    }
    if(value_path == "sod-eod-dirty-mark-count")
    {
        sod_eod_dirty_mark_count = value;
    }
    if(value_path == "sod-eod-replay-req-count")
    {
        sod_eod_replay_req_count = value;
    }
    if(value_path == "srg-context-free")
    {
        srg_context_free = value;
    }
    if(value_path == "srg-context-malloc")
    {
        srg_context_malloc = value;
    }
    if(value_path == "total-dont-send-to-txlist")
    {
        total_dont_send_to_txlist = value;
    }
    if(value_path == "total-master-eoms-pending")
    {
        total_master_eoms_pending = value;
    }
    if(value_path == "total-pause-count")
    {
        total_pause_count = value;
    }
    if(value_path == "total-pause-time")
    {
        total_pause_time = value;
    }
    if(value_path == "total-resume-count")
    {
        total_resume_count = value;
    }
    if(value_path == "total-srg-not-master")
    {
        total_srg_not_master = value;
    }
    if(value_path == "txlist-clean-invalid-state")
    {
        txlist_clean_invalid_state = value;
    }
    if(value_path == "txlist-del-app")
    {
        txlist_del_app = value;
    }
    if(value_path == "txlist-del-app-notlinked")
    {
        txlist_del_app_notlinked = value;
    }
    if(value_path == "txlist-del-sync")
    {
        txlist_del_sync = value;
    }
    if(value_path == "txlist-del-sync-notlinked")
    {
        txlist_del_sync_notlinked = value;
    }
    if(value_path == "txlist-encode")
    {
        txlist_encode = value;
    }
    if(value_path == "txlist-encode-fail")
    {
        txlist_encode_fail = value;
    }
    if(value_path == "txlist-remove-all")
    {
        txlist_remove_all = value;
    }
    if(value_path == "txlist-remove-all-internal-error")
    {
        txlist_remove_all_internal_error = value;
    }
    if(value_path == "txlist-send-failed")
    {
        txlist_send_failed = value;
    }
    if(value_path == "txlist-send-failed-notactive")
    {
        txlist_send_failed_notactive = value;
    }
    if(value_path == "txlist-send-triggered")
    {
        txlist_send_triggered = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Statistics()
    :
    aaa(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa>())
	,aggregate_summary(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary>())
	,srg(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Srg>())
{
    aaa->parent = this;
    children["aaa"] = aaa.get();

    aggregate_summary->parent = this;
    children["aggregate-summary"] = aggregate_summary.get();

    srg->parent = this;
    children["srg"] = srg.get();

    yang_name = "statistics"; yang_parent_name = "node";
}

Subscriber::Manager::Nodes::Node::Statistics::~Statistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::has_data() const
{
    return (aaa !=  nullptr && aaa->has_data())
	|| (aggregate_summary !=  nullptr && aggregate_summary->has_data())
	|| (srg !=  nullptr && srg->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::has_operation() const
{
    return is_set(operation)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (aggregate_summary !=  nullptr && aggregate_summary->has_operation())
	|| (srg !=  nullptr && srg->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aaa")
    {
        if(aaa != nullptr)
        {
            children["aaa"] = aaa.get();
        }
        else
        {
            aaa = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Aaa>();
            aaa->parent = this;
            children["aaa"] = aaa.get();
        }
        return children.at("aaa");
    }

    if(child_yang_name == "aggregate-summary")
    {
        if(aggregate_summary != nullptr)
        {
            children["aggregate-summary"] = aggregate_summary.get();
        }
        else
        {
            aggregate_summary = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary>();
            aggregate_summary->parent = this;
            children["aggregate-summary"] = aggregate_summary.get();
        }
        return children.at("aggregate-summary");
    }

    if(child_yang_name == "srg")
    {
        if(srg != nullptr)
        {
            children["srg"] = srg.get();
        }
        else
        {
            srg = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics::Srg>();
            srg->parent = this;
            children["srg"] = srg.get();
        }
        return children.at("srg");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::Statistics::get_children()
{
    if(children.find("aaa") == children.end())
    {
        if(aaa != nullptr)
        {
            children["aaa"] = aaa.get();
        }
    }

    if(children.find("aggregate-summary") == children.end())
    {
        if(aggregate_summary != nullptr)
        {
            children["aggregate-summary"] = aggregate_summary.get();
        }
    }

    if(children.find("srg") == children.end())
    {
        if(srg != nullptr)
        {
            children["srg"] = srg.get();
        }
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Manager::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    statistics(std::make_unique<Subscriber::Manager::Nodes::Node::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Subscriber::Manager::Nodes::Node::~Node()
{
}

bool Subscriber::Manager::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Subscriber::Manager::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/manager/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<Subscriber::Manager::Nodes::Node::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::Node::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Subscriber::Manager::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "manager";
}

Subscriber::Manager::Nodes::~Nodes()
{
}

bool Subscriber::Manager::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Manager::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Manager::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/manager/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Manager::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Manager::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Manager::Manager()
    :
    nodes(std::make_unique<Subscriber::Manager::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "manager"; yang_parent_name = "subscriber";
}

Subscriber::Manager::~Manager()
{
}

bool Subscriber::Manager::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Subscriber::Manager::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Subscriber::Manager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manager";

    return path_buffer.str();

}

EntityPath Subscriber::Manager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Manager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Subscriber::Manager::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Manager::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Subscriber::Manager::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::Pppoe()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "state-xr"; yang_parent_name = "author-summary";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "address-family-xr"; yang_parent_name = "author-summary";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AuthorSummary()
    :
    	author_state{YType::enumeration, "author-state"}
    	,
    address_family_xr(std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr>())
	,state_xr(std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr.get();

    state_xr->parent = this;
    children["state-xr"] = state_xr.get();

    yang_name = "author-summary"; yang_parent_name = "author-summaries";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::~AuthorSummary()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::has_data() const
{
    return author_state.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(author_state.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "author-summary" <<"[author-state='" <<author_state.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (author_state.is_set || is_set(author_state.operation)) leaf_name_data.push_back(author_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
        else
        {
            address_family_xr = std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr.get();
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
        else
        {
            state_xr = std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr.get();
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "author-state")
    {
        author_state = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummaries()
{
    yang_name = "author-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::~AuthorSummaries()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::has_data() const
{
    for (std::size_t index=0; index<author_summary.size(); index++)
    {
        if(author_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::has_operation() const
{
    for (std::size_t index=0; index<author_summary.size(); index++)
    {
        if(author_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "author-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthorSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "author-summary")
    {
        for(auto const & c : author_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary>();
        c->parent = this;
        author_summary.push_back(std::move(c));
        children[segment_path] = author_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthorSummaries::get_children()
{
    for (auto const & c : author_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::Pppoe()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Summary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "state-xr"; yang_parent_name = "summary";
}

Subscriber::Session::Nodes::Node::Summary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Summary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Summary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Summary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::Pppoe()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "address-family-xr"; yang_parent_name = "summary";
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Summary::Summary()
    :
    address_family_xr(std::make_unique<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr>())
	,state_xr(std::make_unique<Subscriber::Session::Nodes::Node::Summary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr.get();

    state_xr->parent = this;
    children["state-xr"] = state_xr.get();

    yang_name = "summary"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::Summary::~Summary()
{
}

bool Subscriber::Session::Nodes::Node::Summary::has_data() const
{
    return (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::Summary::has_operation() const
{
    return is_set(operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
        else
        {
            address_family_xr = std::make_unique<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr.get();
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
        else
        {
            state_xr = std::make_unique<Subscriber::Session::Nodes::Node::Summary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr.get();
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Summary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Summary::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::Pppoe()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "state-xr"; yang_parent_name = "mac-summary";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "address-family-xr"; yang_parent_name = "mac-summary";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::MacSummary()
    :
    	mac_address{YType::str, "mac-address"}
    	,
    address_family_xr(std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr>())
	,state_xr(std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr.get();

    state_xr->parent = this;
    children["state-xr"] = state_xr.get();

    yang_name = "mac-summary"; yang_parent_name = "mac-summaries";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::~MacSummary()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::has_data() const
{
    return mac_address.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summary" <<"[mac-address='" <<mac_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
        else
        {
            address_family_xr = std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr.get();
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
        else
        {
            state_xr = std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr.get();
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummaries()
{
    yang_name = "mac-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::MacSummaries::~MacSummaries()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::has_data() const
{
    for (std::size_t index=0; index<mac_summary.size(); index++)
    {
        if(mac_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::has_operation() const
{
    for (std::size_t index=0; index<mac_summary.size(); index++)
    {
        if(mac_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::MacSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::MacSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac-summary")
    {
        for(auto const & c : mac_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary>();
        c->parent = this;
        mac_summary.push_back(std::move(c));
        children[segment_path] = mac_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::MacSummaries::get_children()
{
    for (auto const & c : mac_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::Pppoe()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "state-xr"; yang_parent_name = "interface-summary";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "address-family-xr"; yang_parent_name = "interface-summary";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::InterfaceSummary()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    address_family_xr(std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr>())
	,state_xr(std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr.get();

    state_xr->parent = this;
    children["state-xr"] = state_xr.get();

    yang_name = "interface-summary"; yang_parent_name = "interface-summaries";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::~InterfaceSummary()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::has_data() const
{
    return interface_name.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
        else
        {
            address_family_xr = std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr.get();
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
        else
        {
            state_xr = std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr.get();
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummaries()
{
    yang_name = "interface-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::~InterfaceSummaries()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::has_data() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::InterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-summary")
    {
        for(auto const & c : interface_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary>();
        c->parent = this;
        interface_summary.push_back(std::move(c));
        children[segment_path] = interface_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::InterfaceSummaries::get_children()
{
    for (auto const & c : interface_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::Pppoe()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "state-xr"; yang_parent_name = "authentication-summary";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "address-family-xr"; yang_parent_name = "authentication-summary";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AuthenticationSummary()
    :
    	authentication_state{YType::enumeration, "authentication-state"}
    	,
    address_family_xr(std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr>())
	,state_xr(std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr.get();

    state_xr->parent = this;
    children["state-xr"] = state_xr.get();

    yang_name = "authentication-summary"; yang_parent_name = "authentication-summaries";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::~AuthenticationSummary()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::has_data() const
{
    return authentication_state.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_state.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-summary" <<"[authentication-state='" <<authentication_state.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_state.is_set || is_set(authentication_state.operation)) leaf_name_data.push_back(authentication_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
        else
        {
            address_family_xr = std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr.get();
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
        else
        {
            state_xr = std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr.get();
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-state")
    {
        authentication_state = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummaries()
{
    yang_name = "authentication-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::~AuthenticationSummaries()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::has_data() const
{
    for (std::size_t index=0; index<authentication_summary.size(); index++)
    {
        if(authentication_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::has_operation() const
{
    for (std::size_t index=0; index<authentication_summary.size(); index++)
    {
        if(authentication_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AuthenticationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication-summary")
    {
        for(auto const & c : authentication_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary>();
        c->parent = this;
        authentication_summary.push_back(std::move(c));
        children[segment_path] = authentication_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AuthenticationSummaries::get_children()
{
    for (auto const & c : authentication_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::Pppoe()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "state-xr"; yang_parent_name = "state-summary";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "address-family-xr"; yang_parent_name = "state-summary";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateSummary()
    :
    	state{YType::enumeration, "state"}
    	,
    address_family_xr(std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr>())
	,state_xr(std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr.get();

    state_xr->parent = this;
    children["state-xr"] = state_xr.get();

    yang_name = "state-summary"; yang_parent_name = "state-summaries";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::~StateSummary()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::has_data() const
{
    return state.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(state.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-summary" <<"[state='" <<state.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
        else
        {
            address_family_xr = std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr.get();
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
        else
        {
            state_xr = std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr.get();
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state")
    {
        state = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummaries()
{
    yang_name = "state-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::StateSummaries::~StateSummaries()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::has_data() const
{
    for (std::size_t index=0; index<state_summary.size(); index++)
    {
        if(state_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::has_operation() const
{
    for (std::size_t index=0; index<state_summary.size(); index++)
    {
        if(state_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::StateSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::StateSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "state-summary")
    {
        for(auto const & c : state_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary>();
        c->parent = this;
        state_summary.push_back(std::move(c));
        children[segment_path] = state_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::StateSummaries::get_children()
{
    for (auto const & c : state_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::Pppoe()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "state-xr"; yang_parent_name = "ipv4-address-vrf-summary";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "address-family-xr"; yang_parent_name = "ipv4-address-vrf-summary";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::Ipv4AddressVrfSummary()
    :
    	address{YType::str, "address"},
	 vrf_name{YType::str, "vrf-name"}
    	,
    address_family_xr(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr>())
	,state_xr(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr.get();

    state_xr->parent = this;
    children["state-xr"] = state_xr.get();

    yang_name = "ipv4-address-vrf-summary"; yang_parent_name = "ipv4-address-vrf-summaries";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::~Ipv4AddressVrfSummary()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_data() const
{
    return address.is_set
	|| vrf_name.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(vrf_name.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-vrf-summary";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
        else
        {
            address_family_xr = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr.get();
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
        else
        {
            state_xr = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr.get();
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummaries()
{
    yang_name = "ipv4-address-vrf-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::~Ipv4AddressVrfSummaries()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv4_address_vrf_summary.size(); index++)
    {
        if(ipv4_address_vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address_vrf_summary.size(); index++)
    {
        if(ipv4_address_vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-vrf-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address-vrf-summary")
    {
        for(auto const & c : ipv4_address_vrf_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary>();
        c->parent = this;
        ipv4_address_vrf_summary.push_back(std::move(c));
        children[segment_path] = ipv4_address_vrf_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_children()
{
    for (auto const & c : ipv4_address_vrf_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::Pppoe()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "state-xr"; yang_parent_name = "address-family-summary";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "address-family-xr"; yang_parent_name = "address-family-summary";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilySummary()
    :
    	address_family{YType::enumeration, "address-family"}
    	,
    address_family_xr(std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr>())
	,state_xr(std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr.get();

    state_xr->parent = this;
    children["state-xr"] = state_xr.get();

    yang_name = "address-family-summary"; yang_parent_name = "address-family-summaries";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::~AddressFamilySummary()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::has_data() const
{
    return address_family.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-summary" <<"[address-family='" <<address_family.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
        else
        {
            address_family_xr = std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr.get();
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
        else
        {
            state_xr = std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr.get();
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummaries()
{
    yang_name = "address-family-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::~AddressFamilySummaries()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::has_data() const
{
    for (std::size_t index=0; index<address_family_summary.size(); index++)
    {
        if(address_family_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::has_operation() const
{
    for (std::size_t index=0; index<address_family_summary.size(); index++)
    {
        if(address_family_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AddressFamilySummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AddressFamilySummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-summary")
    {
        for(auto const & c : address_family_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary>();
        c->parent = this;
        address_family_summary.push_back(std::move(c));
        children[segment_path] = address_family_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AddressFamilySummaries::get_children()
{
    for (auto const & c : address_family_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::Pppoe()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "state-xr"; yang_parent_name = "username-summary";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "address-family-xr"; yang_parent_name = "username-summary";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::UsernameSummary()
    :
    	username{YType::str, "username"}
    	,
    address_family_xr(std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr>())
	,state_xr(std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr.get();

    state_xr->parent = this;
    children["state-xr"] = state_xr.get();

    yang_name = "username-summary"; yang_parent_name = "username-summaries";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::~UsernameSummary()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::has_data() const
{
    return username.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(username.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username-summary" <<"[username='" <<username.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
        else
        {
            address_family_xr = std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr.get();
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
        else
        {
            state_xr = std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr.get();
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "username")
    {
        username = value;
    }
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummaries()
{
    yang_name = "username-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::UsernameSummaries::~UsernameSummaries()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::has_data() const
{
    for (std::size_t index=0; index<username_summary.size(); index++)
    {
        if(username_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::has_operation() const
{
    for (std::size_t index=0; index<username_summary.size(); index++)
    {
        if(username_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::UsernameSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::UsernameSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "username-summary")
    {
        for(auto const & c : username_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary>();
        c->parent = this;
        username_summary.push_back(std::move(c));
        children[segment_path] = username_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::UsernameSummaries::get_children()
{
    for (auto const & c : username_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::Pppoe()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "state-xr"; yang_parent_name = "access-interface-summary";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "address-family-xr"; yang_parent_name = "access-interface-summary";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AccessInterfaceSummary()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    address_family_xr(std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr>())
	,state_xr(std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr.get();

    state_xr->parent = this;
    children["state-xr"] = state_xr.get();

    yang_name = "access-interface-summary"; yang_parent_name = "access-interface-summaries";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::~AccessInterfaceSummary()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::has_data() const
{
    return interface_name.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-summary" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
        else
        {
            address_family_xr = std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr.get();
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
        else
        {
            state_xr = std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr.get();
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummaries()
{
    yang_name = "access-interface-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::~AccessInterfaceSummaries()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::has_data() const
{
    for (std::size_t index=0; index<access_interface_summary.size(); index++)
    {
        if(access_interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<access_interface_summary.size(); index++)
    {
        if(access_interface_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-interface-summary")
    {
        for(auto const & c : access_interface_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary>();
        c->parent = this;
        access_interface_summary.push_back(std::move(c));
        children[segment_path] = access_interface_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::get_children()
{
    for (auto const & c : access_interface_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::Pppoe()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "state-xr"; yang_parent_name = "ipv4-address-summary";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "address-family-xr"; yang_parent_name = "ipv4-address-summary";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::Ipv4AddressSummary()
    :
    	address{YType::str, "address"}
    	,
    address_family_xr(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr>())
	,state_xr(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr.get();

    state_xr->parent = this;
    children["state-xr"] = state_xr.get();

    yang_name = "ipv4-address-summary"; yang_parent_name = "ipv4-address-summaries";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::~Ipv4AddressSummary()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::has_data() const
{
    return address.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-summary" <<"[address='" <<address.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
        else
        {
            address_family_xr = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr.get();
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
        else
        {
            state_xr = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr.get();
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummaries()
{
    yang_name = "ipv4-address-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::~Ipv4AddressSummaries()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv4_address_summary.size(); index++)
    {
        if(ipv4_address_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address_summary.size(); index++)
    {
        if(ipv4_address_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address-summary")
    {
        for(auto const & c : ipv4_address_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary>();
        c->parent = this;
        ipv4_address_summary.push_back(std::move(c));
        children[segment_path] = ipv4_address_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::get_children()
{
    for (auto const & c : ipv4_address_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::Pppoe()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	activated_sessions{YType::uint32, "activated-sessions"},
	 connected_sessions{YType::uint32, "connected-sessions"},
	 connecting_sessions{YType::uint32, "connecting-sessions"},
	 disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
	 end_sessions{YType::uint32, "end-sessions"},
	 idle_sessions{YType::uint32, "idle-sessions"},
	 initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "state-xr"; yang_parent_name = "vrf-summary";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    	dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
	 dual_up_sessions{YType::uint32, "dual-up-sessions"},
	 in_progress_sessions{YType::uint32, "in-progress-sessions"},
	 ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
	 ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
	 lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();

    ip_subscriber_packet->parent = this;
    children["ip-subscriber-packet"] = ip_subscriber_packet.get();

    pppoe->parent = this;
    children["pppoe"] = pppoe.get();

    yang_name = "address-family-xr"; yang_parent_name = "vrf-summary";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        else
        {
            ip_subscriber_dhcp = std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp>();
            ip_subscriber_dhcp->parent = this;
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
        return children.at("ip-subscriber-dhcp");
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        else
        {
            ip_subscriber_packet = std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket>();
            ip_subscriber_packet->parent = this;
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
        return children.at("ip-subscriber-packet");
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
        else
        {
            pppoe = std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe>();
            pppoe->parent = this;
            children["pppoe"] = pppoe.get();
        }
        return children.at("pppoe");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_children()
{
    if(children.find("ip-subscriber-dhcp") == children.end())
    {
        if(ip_subscriber_dhcp != nullptr)
        {
            children["ip-subscriber-dhcp"] = ip_subscriber_dhcp.get();
        }
    }

    if(children.find("ip-subscriber-packet") == children.end())
    {
        if(ip_subscriber_packet != nullptr)
        {
            children["ip-subscriber-packet"] = ip_subscriber_packet.get();
        }
    }

    if(children.find("pppoe") == children.end())
    {
        if(pppoe != nullptr)
        {
            children["pppoe"] = pppoe.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::VrfSummary()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    address_family_xr(std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr>())
	,state_xr(std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr>())
{
    address_family_xr->parent = this;
    children["address-family-xr"] = address_family_xr.get();

    state_xr->parent = this;
    children["state-xr"] = state_xr.get();

    yang_name = "vrf-summary"; yang_parent_name = "vrf-summaries";
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::~VrfSummary()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::has_data() const
{
    return vrf_name.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
        else
        {
            address_family_xr = std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr>();
            address_family_xr->parent = this;
            children["address-family-xr"] = address_family_xr.get();
        }
        return children.at("address-family-xr");
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
        else
        {
            state_xr = std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr>();
            state_xr->parent = this;
            children["state-xr"] = state_xr.get();
        }
        return children.at("state-xr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_children()
{
    if(children.find("address-family-xr") == children.end())
    {
        if(address_family_xr != nullptr)
        {
            children["address-family-xr"] = address_family_xr.get();
        }
    }

    if(children.find("state-xr") == children.end())
    {
        if(state_xr != nullptr)
        {
            children["state-xr"] = state_xr.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummaries()
{
    yang_name = "vrf-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::VrfSummaries::~VrfSummaries()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::has_data() const
{
    for (std::size_t index=0; index<vrf_summary.size(); index++)
    {
        if(vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<vrf_summary.size(); index++)
    {
        if(vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summaries";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::VrfSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::VrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-summary")
    {
        for(auto const & c : vrf_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary>();
        c->parent = this;
        vrf_summary.push_back(std::move(c));
        children[segment_path] = vrf_summary.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::VrfSummaries::get_children()
{
    for (auto const & c : vrf_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::AccountingSession()
    :
    	accepted_interim_updates{YType::uint32, "accepted-interim-updates"},
	 account_session_id{YType::str, "account-session-id"},
	 accounting_start_time{YType::str, "accounting-start-time"},
	 accounting_state_rc{YType::uint32, "accounting-state-rc"},
	 accounting_stop_state{YType::uint32, "accounting-stop-state"},
	 interim_interval{YType::uint32, "interim-interval"},
	 is_interim_accounting_enabled{YType::boolean, "is-interim-accounting-enabled"},
	 last_interim_update_attempt_time{YType::str, "last-interim-update-attempt-time"},
	 last_successful_interim_update_time{YType::str, "last-successful-interim-update-time"},
	 method_list_name{YType::str, "method-list-name"},
	 next_interim_update_attempt_time{YType::uint32, "next-interim-update-attempt-time"},
	 record_context_name{YType::str, "record-context-name"},
	 rejected_interim_updates{YType::uint32, "rejected-interim-updates"},
	 sent_interim_update_failures{YType::uint32, "sent-interim-update-failures"},
	 sent_interim_updates{YType::uint32, "sent-interim-updates"}
{
    yang_name = "accounting-session"; yang_parent_name = "accounting";
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::~AccountingSession()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::has_data() const
{
    return accepted_interim_updates.is_set
	|| account_session_id.is_set
	|| accounting_start_time.is_set
	|| accounting_state_rc.is_set
	|| accounting_stop_state.is_set
	|| interim_interval.is_set
	|| is_interim_accounting_enabled.is_set
	|| last_interim_update_attempt_time.is_set
	|| last_successful_interim_update_time.is_set
	|| method_list_name.is_set
	|| next_interim_update_attempt_time.is_set
	|| record_context_name.is_set
	|| rejected_interim_updates.is_set
	|| sent_interim_update_failures.is_set
	|| sent_interim_updates.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_interim_updates.operation)
	|| is_set(account_session_id.operation)
	|| is_set(accounting_start_time.operation)
	|| is_set(accounting_state_rc.operation)
	|| is_set(accounting_stop_state.operation)
	|| is_set(interim_interval.operation)
	|| is_set(is_interim_accounting_enabled.operation)
	|| is_set(last_interim_update_attempt_time.operation)
	|| is_set(last_successful_interim_update_time.operation)
	|| is_set(method_list_name.operation)
	|| is_set(next_interim_update_attempt_time.operation)
	|| is_set(record_context_name.operation)
	|| is_set(rejected_interim_updates.operation)
	|| is_set(sent_interim_update_failures.operation)
	|| is_set(sent_interim_updates.operation);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-session";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_interim_updates.is_set || is_set(accepted_interim_updates.operation)) leaf_name_data.push_back(accepted_interim_updates.get_name_leafdata());
    if (account_session_id.is_set || is_set(account_session_id.operation)) leaf_name_data.push_back(account_session_id.get_name_leafdata());
    if (accounting_start_time.is_set || is_set(accounting_start_time.operation)) leaf_name_data.push_back(accounting_start_time.get_name_leafdata());
    if (accounting_state_rc.is_set || is_set(accounting_state_rc.operation)) leaf_name_data.push_back(accounting_state_rc.get_name_leafdata());
    if (accounting_stop_state.is_set || is_set(accounting_stop_state.operation)) leaf_name_data.push_back(accounting_stop_state.get_name_leafdata());
    if (interim_interval.is_set || is_set(interim_interval.operation)) leaf_name_data.push_back(interim_interval.get_name_leafdata());
    if (is_interim_accounting_enabled.is_set || is_set(is_interim_accounting_enabled.operation)) leaf_name_data.push_back(is_interim_accounting_enabled.get_name_leafdata());
    if (last_interim_update_attempt_time.is_set || is_set(last_interim_update_attempt_time.operation)) leaf_name_data.push_back(last_interim_update_attempt_time.get_name_leafdata());
    if (last_successful_interim_update_time.is_set || is_set(last_successful_interim_update_time.operation)) leaf_name_data.push_back(last_successful_interim_update_time.get_name_leafdata());
    if (method_list_name.is_set || is_set(method_list_name.operation)) leaf_name_data.push_back(method_list_name.get_name_leafdata());
    if (next_interim_update_attempt_time.is_set || is_set(next_interim_update_attempt_time.operation)) leaf_name_data.push_back(next_interim_update_attempt_time.get_name_leafdata());
    if (record_context_name.is_set || is_set(record_context_name.operation)) leaf_name_data.push_back(record_context_name.get_name_leafdata());
    if (rejected_interim_updates.is_set || is_set(rejected_interim_updates.operation)) leaf_name_data.push_back(rejected_interim_updates.get_name_leafdata());
    if (sent_interim_update_failures.is_set || is_set(sent_interim_update_failures.operation)) leaf_name_data.push_back(sent_interim_update_failures.get_name_leafdata());
    if (sent_interim_updates.is_set || is_set(sent_interim_updates.operation)) leaf_name_data.push_back(sent_interim_updates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-interim-updates")
    {
        accepted_interim_updates = value;
    }
    if(value_path == "account-session-id")
    {
        account_session_id = value;
    }
    if(value_path == "accounting-start-time")
    {
        accounting_start_time = value;
    }
    if(value_path == "accounting-state-rc")
    {
        accounting_state_rc = value;
    }
    if(value_path == "accounting-stop-state")
    {
        accounting_stop_state = value;
    }
    if(value_path == "interim-interval")
    {
        interim_interval = value;
    }
    if(value_path == "is-interim-accounting-enabled")
    {
        is_interim_accounting_enabled = value;
    }
    if(value_path == "last-interim-update-attempt-time")
    {
        last_interim_update_attempt_time = value;
    }
    if(value_path == "last-successful-interim-update-time")
    {
        last_successful_interim_update_time = value;
    }
    if(value_path == "method-list-name")
    {
        method_list_name = value;
    }
    if(value_path == "next-interim-update-attempt-time")
    {
        next_interim_update_attempt_time = value;
    }
    if(value_path == "record-context-name")
    {
        record_context_name = value;
    }
    if(value_path == "rejected-interim-updates")
    {
        rejected_interim_updates = value;
    }
    if(value_path == "sent-interim-update-failures")
    {
        sent_interim_update_failures = value;
    }
    if(value_path == "sent-interim-updates")
    {
        sent_interim_updates = value;
    }
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::Accounting()
{
    yang_name = "accounting"; yang_parent_name = "session";
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::~Accounting()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::has_data() const
{
    for (std::size_t index=0; index<accounting_session.size(); index++)
    {
        if(accounting_session[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::has_operation() const
{
    for (std::size_t index=0; index<accounting_session.size(); index++)
    {
        if(accounting_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting-session")
    {
        for(auto const & c : accounting_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession>();
        c->parent = this;
        accounting_session.push_back(std::move(c));
        children[segment_path] = accounting_session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_children()
{
    for (auto const & c : accounting_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::UserProfileAttributes()
    :
    	accounting_session_id{YType::str, "accounting-session-id"},
	 actual_data_rate_downstream{YType::uint32, "actual-data-rate-downstream"},
	 actual_data_rate_upstream{YType::uint32, "actual-data-rate-upstream"},
	 attainable_data_rate_downstream{YType::uint32, "attainable-data-rate-downstream"},
	 attainable_data_rate_upstream{YType::uint32, "attainable-data-rate-upstream"},
	 authorization_service_type{YType::enumeration, "authorization-service-type"},
	 circuit_id{YType::str, "circuit-id"},
	 connection_receive_speed{YType::uint32, "connection-receive-speed"},
	 connection_transmission_speed{YType::uint32, "connection-transmission-speed"},
	 destination_station_id{YType::str, "destination-station-id"},
	 downstream_parameterized_qos_policy{YType::str, "downstream-parameterized-qos-policy"},
	 downstream_qos_policy{YType::str, "downstream-qos-policy"},
	 egress_access_list{YType::str, "egress-access-list"},
	 formatted_calling_station_id{YType::str, "formatted-calling-station-id"},
	 ingress_access_list{YType::str, "ingress-access-list"},
	 interface_name{YType::str, "interface-name"},
	 interface_type{YType::enumeration, "interface-type"},
	 interim_accounting_interval{YType::uint32, "interim-accounting-interval"},
	 ip_netmask{YType::str, "ip-netmask"},
	 ipv4_unnumbered{YType::str, "ipv4-unnumbered"},
	 ipv4mtu{YType::uint32, "ipv4mtu"},
	 is_interworking_functionality{YType::boolean, "is-interworking-functionality"},
	 max_data_rate_downstream{YType::uint32, "max-data-rate-downstream"},
	 max_data_rate_upstream{YType::uint32, "max-data-rate-upstream"},
	 max_interleaving_delay_downstream{YType::uint32, "max-interleaving-delay-downstream"},
	 max_interleaving_delay_upstream{YType::uint32, "max-interleaving-delay-upstream"},
	 min_data_rate_downstream{YType::uint32, "min-data-rate-downstream"},
	 min_data_rate_downstream_low_power{YType::uint32, "min-data-rate-downstream-low-power"},
	 min_data_rate_upstream_low_power{YType::uint32, "min-data-rate-upstream-low-power"},
	 parent_interface_name{YType::str, "parent-interface-name"},
	 pool_address{YType::str, "pool-address"},
	 primary_dns_server_address{YType::str, "primary-dns-server-address"},
	 primary_net_bios_server_address{YType::str, "primary-net-bios-server-address"},
	 remote_id{YType::str, "remote-id"},
	 route{YType::str, "route"},
	 secondary_dns_server_address{YType::str, "secondary-dns-server-address"},
	 secondary_net_bios_server_address{YType::str, "secondary-net-bios-server-address"},
	 session_termination_cause{YType::enumeration, "session-termination-cause"},
	 session_timeout{YType::uint32, "session-timeout"},
	 strict_rpf_packets{YType::uint32, "strict-rpf-packets"},
	 tunnel_client_authentication_id{YType::str, "tunnel-client-authentication-id"},
	 tunnel_client_endpoint{YType::str, "tunnel-client-endpoint"},
	 tunnel_medium{YType::enumeration, "tunnel-medium"},
	 tunnel_preference{YType::uint32, "tunnel-preference"},
	 tunnel_protocol{YType::enumeration, "tunnel-protocol"},
	 tunnel_server_endpoint{YType::str, "tunnel-server-endpoint"},
	 tunnel_tos_setting{YType::uint32, "tunnel-tos-setting"},
	 upstream_parameterized_qos_policy{YType::str, "upstream-parameterized-qos-policy"},
	 upstream_qos_policy{YType::str, "upstream-qos-policy"}
{
    yang_name = "user-profile-attributes"; yang_parent_name = "session";
}

Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::~UserProfileAttributes()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::has_data() const
{
    return accounting_session_id.is_set
	|| actual_data_rate_downstream.is_set
	|| actual_data_rate_upstream.is_set
	|| attainable_data_rate_downstream.is_set
	|| attainable_data_rate_upstream.is_set
	|| authorization_service_type.is_set
	|| circuit_id.is_set
	|| connection_receive_speed.is_set
	|| connection_transmission_speed.is_set
	|| destination_station_id.is_set
	|| downstream_parameterized_qos_policy.is_set
	|| downstream_qos_policy.is_set
	|| egress_access_list.is_set
	|| formatted_calling_station_id.is_set
	|| ingress_access_list.is_set
	|| interface_name.is_set
	|| interface_type.is_set
	|| interim_accounting_interval.is_set
	|| ip_netmask.is_set
	|| ipv4_unnumbered.is_set
	|| ipv4mtu.is_set
	|| is_interworking_functionality.is_set
	|| max_data_rate_downstream.is_set
	|| max_data_rate_upstream.is_set
	|| max_interleaving_delay_downstream.is_set
	|| max_interleaving_delay_upstream.is_set
	|| min_data_rate_downstream.is_set
	|| min_data_rate_downstream_low_power.is_set
	|| min_data_rate_upstream_low_power.is_set
	|| parent_interface_name.is_set
	|| pool_address.is_set
	|| primary_dns_server_address.is_set
	|| primary_net_bios_server_address.is_set
	|| remote_id.is_set
	|| route.is_set
	|| secondary_dns_server_address.is_set
	|| secondary_net_bios_server_address.is_set
	|| session_termination_cause.is_set
	|| session_timeout.is_set
	|| strict_rpf_packets.is_set
	|| tunnel_client_authentication_id.is_set
	|| tunnel_client_endpoint.is_set
	|| tunnel_medium.is_set
	|| tunnel_preference.is_set
	|| tunnel_protocol.is_set
	|| tunnel_server_endpoint.is_set
	|| tunnel_tos_setting.is_set
	|| upstream_parameterized_qos_policy.is_set
	|| upstream_qos_policy.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting_session_id.operation)
	|| is_set(actual_data_rate_downstream.operation)
	|| is_set(actual_data_rate_upstream.operation)
	|| is_set(attainable_data_rate_downstream.operation)
	|| is_set(attainable_data_rate_upstream.operation)
	|| is_set(authorization_service_type.operation)
	|| is_set(circuit_id.operation)
	|| is_set(connection_receive_speed.operation)
	|| is_set(connection_transmission_speed.operation)
	|| is_set(destination_station_id.operation)
	|| is_set(downstream_parameterized_qos_policy.operation)
	|| is_set(downstream_qos_policy.operation)
	|| is_set(egress_access_list.operation)
	|| is_set(formatted_calling_station_id.operation)
	|| is_set(ingress_access_list.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_type.operation)
	|| is_set(interim_accounting_interval.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(ipv4_unnumbered.operation)
	|| is_set(ipv4mtu.operation)
	|| is_set(is_interworking_functionality.operation)
	|| is_set(max_data_rate_downstream.operation)
	|| is_set(max_data_rate_upstream.operation)
	|| is_set(max_interleaving_delay_downstream.operation)
	|| is_set(max_interleaving_delay_upstream.operation)
	|| is_set(min_data_rate_downstream.operation)
	|| is_set(min_data_rate_downstream_low_power.operation)
	|| is_set(min_data_rate_upstream_low_power.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(pool_address.operation)
	|| is_set(primary_dns_server_address.operation)
	|| is_set(primary_net_bios_server_address.operation)
	|| is_set(remote_id.operation)
	|| is_set(route.operation)
	|| is_set(secondary_dns_server_address.operation)
	|| is_set(secondary_net_bios_server_address.operation)
	|| is_set(session_termination_cause.operation)
	|| is_set(session_timeout.operation)
	|| is_set(strict_rpf_packets.operation)
	|| is_set(tunnel_client_authentication_id.operation)
	|| is_set(tunnel_client_endpoint.operation)
	|| is_set(tunnel_medium.operation)
	|| is_set(tunnel_preference.operation)
	|| is_set(tunnel_protocol.operation)
	|| is_set(tunnel_server_endpoint.operation)
	|| is_set(tunnel_tos_setting.operation)
	|| is_set(upstream_parameterized_qos_policy.operation)
	|| is_set(upstream_qos_policy.operation);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-profile-attributes";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_session_id.is_set || is_set(accounting_session_id.operation)) leaf_name_data.push_back(accounting_session_id.get_name_leafdata());
    if (actual_data_rate_downstream.is_set || is_set(actual_data_rate_downstream.operation)) leaf_name_data.push_back(actual_data_rate_downstream.get_name_leafdata());
    if (actual_data_rate_upstream.is_set || is_set(actual_data_rate_upstream.operation)) leaf_name_data.push_back(actual_data_rate_upstream.get_name_leafdata());
    if (attainable_data_rate_downstream.is_set || is_set(attainable_data_rate_downstream.operation)) leaf_name_data.push_back(attainable_data_rate_downstream.get_name_leafdata());
    if (attainable_data_rate_upstream.is_set || is_set(attainable_data_rate_upstream.operation)) leaf_name_data.push_back(attainable_data_rate_upstream.get_name_leafdata());
    if (authorization_service_type.is_set || is_set(authorization_service_type.operation)) leaf_name_data.push_back(authorization_service_type.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (connection_receive_speed.is_set || is_set(connection_receive_speed.operation)) leaf_name_data.push_back(connection_receive_speed.get_name_leafdata());
    if (connection_transmission_speed.is_set || is_set(connection_transmission_speed.operation)) leaf_name_data.push_back(connection_transmission_speed.get_name_leafdata());
    if (destination_station_id.is_set || is_set(destination_station_id.operation)) leaf_name_data.push_back(destination_station_id.get_name_leafdata());
    if (downstream_parameterized_qos_policy.is_set || is_set(downstream_parameterized_qos_policy.operation)) leaf_name_data.push_back(downstream_parameterized_qos_policy.get_name_leafdata());
    if (downstream_qos_policy.is_set || is_set(downstream_qos_policy.operation)) leaf_name_data.push_back(downstream_qos_policy.get_name_leafdata());
    if (egress_access_list.is_set || is_set(egress_access_list.operation)) leaf_name_data.push_back(egress_access_list.get_name_leafdata());
    if (formatted_calling_station_id.is_set || is_set(formatted_calling_station_id.operation)) leaf_name_data.push_back(formatted_calling_station_id.get_name_leafdata());
    if (ingress_access_list.is_set || is_set(ingress_access_list.operation)) leaf_name_data.push_back(ingress_access_list.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (interim_accounting_interval.is_set || is_set(interim_accounting_interval.operation)) leaf_name_data.push_back(interim_accounting_interval.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (ipv4_unnumbered.is_set || is_set(ipv4_unnumbered.operation)) leaf_name_data.push_back(ipv4_unnumbered.get_name_leafdata());
    if (ipv4mtu.is_set || is_set(ipv4mtu.operation)) leaf_name_data.push_back(ipv4mtu.get_name_leafdata());
    if (is_interworking_functionality.is_set || is_set(is_interworking_functionality.operation)) leaf_name_data.push_back(is_interworking_functionality.get_name_leafdata());
    if (max_data_rate_downstream.is_set || is_set(max_data_rate_downstream.operation)) leaf_name_data.push_back(max_data_rate_downstream.get_name_leafdata());
    if (max_data_rate_upstream.is_set || is_set(max_data_rate_upstream.operation)) leaf_name_data.push_back(max_data_rate_upstream.get_name_leafdata());
    if (max_interleaving_delay_downstream.is_set || is_set(max_interleaving_delay_downstream.operation)) leaf_name_data.push_back(max_interleaving_delay_downstream.get_name_leafdata());
    if (max_interleaving_delay_upstream.is_set || is_set(max_interleaving_delay_upstream.operation)) leaf_name_data.push_back(max_interleaving_delay_upstream.get_name_leafdata());
    if (min_data_rate_downstream.is_set || is_set(min_data_rate_downstream.operation)) leaf_name_data.push_back(min_data_rate_downstream.get_name_leafdata());
    if (min_data_rate_downstream_low_power.is_set || is_set(min_data_rate_downstream_low_power.operation)) leaf_name_data.push_back(min_data_rate_downstream_low_power.get_name_leafdata());
    if (min_data_rate_upstream_low_power.is_set || is_set(min_data_rate_upstream_low_power.operation)) leaf_name_data.push_back(min_data_rate_upstream_low_power.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (pool_address.is_set || is_set(pool_address.operation)) leaf_name_data.push_back(pool_address.get_name_leafdata());
    if (primary_dns_server_address.is_set || is_set(primary_dns_server_address.operation)) leaf_name_data.push_back(primary_dns_server_address.get_name_leafdata());
    if (primary_net_bios_server_address.is_set || is_set(primary_net_bios_server_address.operation)) leaf_name_data.push_back(primary_net_bios_server_address.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (route.is_set || is_set(route.operation)) leaf_name_data.push_back(route.get_name_leafdata());
    if (secondary_dns_server_address.is_set || is_set(secondary_dns_server_address.operation)) leaf_name_data.push_back(secondary_dns_server_address.get_name_leafdata());
    if (secondary_net_bios_server_address.is_set || is_set(secondary_net_bios_server_address.operation)) leaf_name_data.push_back(secondary_net_bios_server_address.get_name_leafdata());
    if (session_termination_cause.is_set || is_set(session_termination_cause.operation)) leaf_name_data.push_back(session_termination_cause.get_name_leafdata());
    if (session_timeout.is_set || is_set(session_timeout.operation)) leaf_name_data.push_back(session_timeout.get_name_leafdata());
    if (strict_rpf_packets.is_set || is_set(strict_rpf_packets.operation)) leaf_name_data.push_back(strict_rpf_packets.get_name_leafdata());
    if (tunnel_client_authentication_id.is_set || is_set(tunnel_client_authentication_id.operation)) leaf_name_data.push_back(tunnel_client_authentication_id.get_name_leafdata());
    if (tunnel_client_endpoint.is_set || is_set(tunnel_client_endpoint.operation)) leaf_name_data.push_back(tunnel_client_endpoint.get_name_leafdata());
    if (tunnel_medium.is_set || is_set(tunnel_medium.operation)) leaf_name_data.push_back(tunnel_medium.get_name_leafdata());
    if (tunnel_preference.is_set || is_set(tunnel_preference.operation)) leaf_name_data.push_back(tunnel_preference.get_name_leafdata());
    if (tunnel_protocol.is_set || is_set(tunnel_protocol.operation)) leaf_name_data.push_back(tunnel_protocol.get_name_leafdata());
    if (tunnel_server_endpoint.is_set || is_set(tunnel_server_endpoint.operation)) leaf_name_data.push_back(tunnel_server_endpoint.get_name_leafdata());
    if (tunnel_tos_setting.is_set || is_set(tunnel_tos_setting.operation)) leaf_name_data.push_back(tunnel_tos_setting.get_name_leafdata());
    if (upstream_parameterized_qos_policy.is_set || is_set(upstream_parameterized_qos_policy.operation)) leaf_name_data.push_back(upstream_parameterized_qos_policy.get_name_leafdata());
    if (upstream_qos_policy.is_set || is_set(upstream_qos_policy.operation)) leaf_name_data.push_back(upstream_qos_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting-session-id")
    {
        accounting_session_id = value;
    }
    if(value_path == "actual-data-rate-downstream")
    {
        actual_data_rate_downstream = value;
    }
    if(value_path == "actual-data-rate-upstream")
    {
        actual_data_rate_upstream = value;
    }
    if(value_path == "attainable-data-rate-downstream")
    {
        attainable_data_rate_downstream = value;
    }
    if(value_path == "attainable-data-rate-upstream")
    {
        attainable_data_rate_upstream = value;
    }
    if(value_path == "authorization-service-type")
    {
        authorization_service_type = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "connection-receive-speed")
    {
        connection_receive_speed = value;
    }
    if(value_path == "connection-transmission-speed")
    {
        connection_transmission_speed = value;
    }
    if(value_path == "destination-station-id")
    {
        destination_station_id = value;
    }
    if(value_path == "downstream-parameterized-qos-policy")
    {
        downstream_parameterized_qos_policy = value;
    }
    if(value_path == "downstream-qos-policy")
    {
        downstream_qos_policy = value;
    }
    if(value_path == "egress-access-list")
    {
        egress_access_list = value;
    }
    if(value_path == "formatted-calling-station-id")
    {
        formatted_calling_station_id = value;
    }
    if(value_path == "ingress-access-list")
    {
        ingress_access_list = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "interim-accounting-interval")
    {
        interim_accounting_interval = value;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
    }
    if(value_path == "ipv4-unnumbered")
    {
        ipv4_unnumbered = value;
    }
    if(value_path == "ipv4mtu")
    {
        ipv4mtu = value;
    }
    if(value_path == "is-interworking-functionality")
    {
        is_interworking_functionality = value;
    }
    if(value_path == "max-data-rate-downstream")
    {
        max_data_rate_downstream = value;
    }
    if(value_path == "max-data-rate-upstream")
    {
        max_data_rate_upstream = value;
    }
    if(value_path == "max-interleaving-delay-downstream")
    {
        max_interleaving_delay_downstream = value;
    }
    if(value_path == "max-interleaving-delay-upstream")
    {
        max_interleaving_delay_upstream = value;
    }
    if(value_path == "min-data-rate-downstream")
    {
        min_data_rate_downstream = value;
    }
    if(value_path == "min-data-rate-downstream-low-power")
    {
        min_data_rate_downstream_low_power = value;
    }
    if(value_path == "min-data-rate-upstream-low-power")
    {
        min_data_rate_upstream_low_power = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "pool-address")
    {
        pool_address = value;
    }
    if(value_path == "primary-dns-server-address")
    {
        primary_dns_server_address = value;
    }
    if(value_path == "primary-net-bios-server-address")
    {
        primary_net_bios_server_address = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
    if(value_path == "route")
    {
        route = value;
    }
    if(value_path == "secondary-dns-server-address")
    {
        secondary_dns_server_address = value;
    }
    if(value_path == "secondary-net-bios-server-address")
    {
        secondary_net_bios_server_address = value;
    }
    if(value_path == "session-termination-cause")
    {
        session_termination_cause = value;
    }
    if(value_path == "session-timeout")
    {
        session_timeout = value;
    }
    if(value_path == "strict-rpf-packets")
    {
        strict_rpf_packets = value;
    }
    if(value_path == "tunnel-client-authentication-id")
    {
        tunnel_client_authentication_id = value;
    }
    if(value_path == "tunnel-client-endpoint")
    {
        tunnel_client_endpoint = value;
    }
    if(value_path == "tunnel-medium")
    {
        tunnel_medium = value;
    }
    if(value_path == "tunnel-preference")
    {
        tunnel_preference = value;
    }
    if(value_path == "tunnel-protocol")
    {
        tunnel_protocol = value;
    }
    if(value_path == "tunnel-server-endpoint")
    {
        tunnel_server_endpoint = value;
    }
    if(value_path == "tunnel-tos-setting")
    {
        tunnel_tos_setting = value;
    }
    if(value_path == "upstream-parameterized-qos-policy")
    {
        upstream_parameterized_qos_policy = value;
    }
    if(value_path == "upstream-qos-policy")
    {
        upstream_qos_policy = value;
    }
}

Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::MobilityAttributes()
    :
    	domain_name{YType::str, "domain-name"},
	 downlink_gre_key{YType::str, "downlink-gre-key"},
	 lease_time{YType::str, "lease-time"},
	 mobility_default_ipv4_gateway{YType::str, "mobility-default-ipv4-gateway"},
	 mobility_dhcp_server{YType::str, "mobility-dhcp-server"},
	 mobility_dns_server{YType::str, "mobility-dns-server"},
	 mobility_ipv4_address{YType::str, "mobility-ipv4-address"},
	 mobility_ipv4_netmask{YType::str, "mobility-ipv4-netmask"},
	 mpc_protocol{YType::boolean, "mpc-protocol"},
	 uplink_gre_key{YType::str, "uplink-gre-key"}
{
    yang_name = "mobility-attributes"; yang_parent_name = "session";
}

Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::~MobilityAttributes()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::has_data() const
{
    return domain_name.is_set
	|| downlink_gre_key.is_set
	|| lease_time.is_set
	|| mobility_default_ipv4_gateway.is_set
	|| mobility_dhcp_server.is_set
	|| mobility_dns_server.is_set
	|| mobility_ipv4_address.is_set
	|| mobility_ipv4_netmask.is_set
	|| mpc_protocol.is_set
	|| uplink_gre_key.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(downlink_gre_key.operation)
	|| is_set(lease_time.operation)
	|| is_set(mobility_default_ipv4_gateway.operation)
	|| is_set(mobility_dhcp_server.operation)
	|| is_set(mobility_dns_server.operation)
	|| is_set(mobility_ipv4_address.operation)
	|| is_set(mobility_ipv4_netmask.operation)
	|| is_set(mpc_protocol.operation)
	|| is_set(uplink_gre_key.operation);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility-attributes";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (downlink_gre_key.is_set || is_set(downlink_gre_key.operation)) leaf_name_data.push_back(downlink_gre_key.get_name_leafdata());
    if (lease_time.is_set || is_set(lease_time.operation)) leaf_name_data.push_back(lease_time.get_name_leafdata());
    if (mobility_default_ipv4_gateway.is_set || is_set(mobility_default_ipv4_gateway.operation)) leaf_name_data.push_back(mobility_default_ipv4_gateway.get_name_leafdata());
    if (mobility_dhcp_server.is_set || is_set(mobility_dhcp_server.operation)) leaf_name_data.push_back(mobility_dhcp_server.get_name_leafdata());
    if (mobility_dns_server.is_set || is_set(mobility_dns_server.operation)) leaf_name_data.push_back(mobility_dns_server.get_name_leafdata());
    if (mobility_ipv4_address.is_set || is_set(mobility_ipv4_address.operation)) leaf_name_data.push_back(mobility_ipv4_address.get_name_leafdata());
    if (mobility_ipv4_netmask.is_set || is_set(mobility_ipv4_netmask.operation)) leaf_name_data.push_back(mobility_ipv4_netmask.get_name_leafdata());
    if (mpc_protocol.is_set || is_set(mpc_protocol.operation)) leaf_name_data.push_back(mpc_protocol.get_name_leafdata());
    if (uplink_gre_key.is_set || is_set(uplink_gre_key.operation)) leaf_name_data.push_back(uplink_gre_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "downlink-gre-key")
    {
        downlink_gre_key = value;
    }
    if(value_path == "lease-time")
    {
        lease_time = value;
    }
    if(value_path == "mobility-default-ipv4-gateway")
    {
        mobility_default_ipv4_gateway = value;
    }
    if(value_path == "mobility-dhcp-server")
    {
        mobility_dhcp_server = value;
    }
    if(value_path == "mobility-dns-server")
    {
        mobility_dns_server = value;
    }
    if(value_path == "mobility-ipv4-address")
    {
        mobility_ipv4_address = value;
    }
    if(value_path == "mobility-ipv4-netmask")
    {
        mobility_ipv4_netmask = value;
    }
    if(value_path == "mpc-protocol")
    {
        mpc_protocol = value;
    }
    if(value_path == "uplink-gre-key")
    {
        uplink_gre_key = value;
    }
}

Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::SessionChangeOfAuthorization()
    :
    	coa_reply_attributes{YType::str, "coa-reply-attributes"},
	 coa_request_attributes{YType::str, "coa-request-attributes"},
	 reply_time{YType::str, "reply-time"},
	 request_acked{YType::boolean, "request-acked"},
	 request_time{YType::str, "request-time"}
{
    yang_name = "session-change-of-authorization"; yang_parent_name = "session";
}

Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::~SessionChangeOfAuthorization()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::has_data() const
{
    return coa_reply_attributes.is_set
	|| coa_request_attributes.is_set
	|| reply_time.is_set
	|| request_acked.is_set
	|| request_time.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::has_operation() const
{
    return is_set(operation)
	|| is_set(coa_reply_attributes.operation)
	|| is_set(coa_request_attributes.operation)
	|| is_set(reply_time.operation)
	|| is_set(request_acked.operation)
	|| is_set(request_time.operation);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-change-of-authorization";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coa_reply_attributes.is_set || is_set(coa_reply_attributes.operation)) leaf_name_data.push_back(coa_reply_attributes.get_name_leafdata());
    if (coa_request_attributes.is_set || is_set(coa_request_attributes.operation)) leaf_name_data.push_back(coa_request_attributes.get_name_leafdata());
    if (reply_time.is_set || is_set(reply_time.operation)) leaf_name_data.push_back(reply_time.get_name_leafdata());
    if (request_acked.is_set || is_set(request_acked.operation)) leaf_name_data.push_back(request_acked.get_name_leafdata());
    if (request_time.is_set || is_set(request_time.operation)) leaf_name_data.push_back(request_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_children()
{
    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "coa-reply-attributes")
    {
        coa_reply_attributes = value;
    }
    if(value_path == "coa-request-attributes")
    {
        coa_request_attributes = value;
    }
    if(value_path == "reply-time")
    {
        reply_time = value;
    }
    if(value_path == "request-acked")
    {
        request_acked = value;
    }
    if(value_path == "request-time")
    {
        request_time = value;
    }
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Session_()
    :
    	session_id{YType::str, "session-id"},
	 access_interface_name{YType::str, "access-interface-name"},
	 account_session_id{YType::str, "account-session-id"},
	 af_up_status{YType::uint32, "af-up-status"},
	 circuit_id{YType::str, "circuit-id"},
	 clientname{YType::str, "clientname"},
	 delegated_ipv6_prefix{YType::str, "delegated-ipv6-prefix"},
	 formattedname{YType::str, "formattedname"},
	 idle_state_change_time{YType::str, "idle-state-change-time"},
	 interface_name{YType::str, "interface-name"},
	 ipv6_interface_id{YType::str, "ipv6-interface-id"},
	 is_session_authentic{YType::boolean, "is-session-authentic"},
	 is_session_author{YType::boolean, "is-session-author"},
	 lac_address{YType::str, "lac-address"},
	 lns_address{YType::str, "lns-address"},
	 mac_address{YType::str, "mac-address"},
	 nas_port{YType::str, "nas-port"},
	 pending_callbacks{YType::uint64, "pending-callbacks"},
	 pppoe_sub_type{YType::enumeration, "pppoe-sub-type"},
	 remote_id{YType::str, "remote-id"},
	 session_creation_time{YType::str, "session-creation-time"},
	 session_ip_address{YType::str, "session-ip-address"},
	 session_ipv4_state{YType::enumeration, "session-ipv4-state"},
	 session_ipv6_address{YType::str, "session-ipv6-address"},
	 session_ipv6_prefix{YType::str, "session-ipv6-prefix"},
	 session_ipv6_state{YType::enumeration, "session-ipv6-state"},
	 session_state{YType::enumeration, "session-state"},
	 session_type{YType::enumeration, "session-type"},
	 total_session_idle_time{YType::uint32, "total-session-idle-time"},
	 tunnel_client_authentication_id{YType::str, "tunnel-client-authentication-id"},
	 tunnel_server_authentication_id{YType::str, "tunnel-server-authentication-id"},
	 username{YType::str, "username"},
	 vrf_name{YType::str, "vrf-name"}
    	,
    accounting(std::make_unique<Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting>())
	,mobility_attributes(std::make_unique<Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes>())
	,user_profile_attributes(std::make_unique<Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes>())
{
    accounting->parent = this;
    children["accounting"] = accounting.get();

    mobility_attributes->parent = this;
    children["mobility-attributes"] = mobility_attributes.get();

    user_profile_attributes->parent = this;
    children["user-profile-attributes"] = user_profile_attributes.get();

    yang_name = "session"; yang_parent_name = "sessions";
}

Subscriber::Session::Nodes::Node::Sessions::Session_::~Session_()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::has_data() const
{
    for (std::size_t index=0; index<session_change_of_authorization.size(); index++)
    {
        if(session_change_of_authorization[index]->has_data())
            return true;
    }
    return session_id.is_set
	|| access_interface_name.is_set
	|| account_session_id.is_set
	|| af_up_status.is_set
	|| circuit_id.is_set
	|| clientname.is_set
	|| delegated_ipv6_prefix.is_set
	|| formattedname.is_set
	|| idle_state_change_time.is_set
	|| interface_name.is_set
	|| ipv6_interface_id.is_set
	|| is_session_authentic.is_set
	|| is_session_author.is_set
	|| lac_address.is_set
	|| lns_address.is_set
	|| mac_address.is_set
	|| nas_port.is_set
	|| pending_callbacks.is_set
	|| pppoe_sub_type.is_set
	|| remote_id.is_set
	|| session_creation_time.is_set
	|| session_ip_address.is_set
	|| session_ipv4_state.is_set
	|| session_ipv6_address.is_set
	|| session_ipv6_prefix.is_set
	|| session_ipv6_state.is_set
	|| session_state.is_set
	|| session_type.is_set
	|| total_session_idle_time.is_set
	|| tunnel_client_authentication_id.is_set
	|| tunnel_server_authentication_id.is_set
	|| username.is_set
	|| vrf_name.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (mobility_attributes !=  nullptr && mobility_attributes->has_data())
	|| (user_profile_attributes !=  nullptr && user_profile_attributes->has_data());
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::has_operation() const
{
    for (std::size_t index=0; index<session_change_of_authorization.size(); index++)
    {
        if(session_change_of_authorization[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(access_interface_name.operation)
	|| is_set(account_session_id.operation)
	|| is_set(af_up_status.operation)
	|| is_set(circuit_id.operation)
	|| is_set(clientname.operation)
	|| is_set(delegated_ipv6_prefix.operation)
	|| is_set(formattedname.operation)
	|| is_set(idle_state_change_time.operation)
	|| is_set(interface_name.operation)
	|| is_set(ipv6_interface_id.operation)
	|| is_set(is_session_authentic.operation)
	|| is_set(is_session_author.operation)
	|| is_set(lac_address.operation)
	|| is_set(lns_address.operation)
	|| is_set(mac_address.operation)
	|| is_set(nas_port.operation)
	|| is_set(pending_callbacks.operation)
	|| is_set(pppoe_sub_type.operation)
	|| is_set(remote_id.operation)
	|| is_set(session_creation_time.operation)
	|| is_set(session_ip_address.operation)
	|| is_set(session_ipv4_state.operation)
	|| is_set(session_ipv6_address.operation)
	|| is_set(session_ipv6_prefix.operation)
	|| is_set(session_ipv6_state.operation)
	|| is_set(session_state.operation)
	|| is_set(session_type.operation)
	|| is_set(total_session_idle_time.operation)
	|| is_set(tunnel_client_authentication_id.operation)
	|| is_set(tunnel_server_authentication_id.operation)
	|| is_set(username.operation)
	|| is_set(vrf_name.operation)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (mobility_attributes !=  nullptr && mobility_attributes->has_operation())
	|| (user_profile_attributes !=  nullptr && user_profile_attributes->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-id='" <<session_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::Session_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (access_interface_name.is_set || is_set(access_interface_name.operation)) leaf_name_data.push_back(access_interface_name.get_name_leafdata());
    if (account_session_id.is_set || is_set(account_session_id.operation)) leaf_name_data.push_back(account_session_id.get_name_leafdata());
    if (af_up_status.is_set || is_set(af_up_status.operation)) leaf_name_data.push_back(af_up_status.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (clientname.is_set || is_set(clientname.operation)) leaf_name_data.push_back(clientname.get_name_leafdata());
    if (delegated_ipv6_prefix.is_set || is_set(delegated_ipv6_prefix.operation)) leaf_name_data.push_back(delegated_ipv6_prefix.get_name_leafdata());
    if (formattedname.is_set || is_set(formattedname.operation)) leaf_name_data.push_back(formattedname.get_name_leafdata());
    if (idle_state_change_time.is_set || is_set(idle_state_change_time.operation)) leaf_name_data.push_back(idle_state_change_time.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ipv6_interface_id.is_set || is_set(ipv6_interface_id.operation)) leaf_name_data.push_back(ipv6_interface_id.get_name_leafdata());
    if (is_session_authentic.is_set || is_set(is_session_authentic.operation)) leaf_name_data.push_back(is_session_authentic.get_name_leafdata());
    if (is_session_author.is_set || is_set(is_session_author.operation)) leaf_name_data.push_back(is_session_author.get_name_leafdata());
    if (lac_address.is_set || is_set(lac_address.operation)) leaf_name_data.push_back(lac_address.get_name_leafdata());
    if (lns_address.is_set || is_set(lns_address.operation)) leaf_name_data.push_back(lns_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (nas_port.is_set || is_set(nas_port.operation)) leaf_name_data.push_back(nas_port.get_name_leafdata());
    if (pending_callbacks.is_set || is_set(pending_callbacks.operation)) leaf_name_data.push_back(pending_callbacks.get_name_leafdata());
    if (pppoe_sub_type.is_set || is_set(pppoe_sub_type.operation)) leaf_name_data.push_back(pppoe_sub_type.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.operation)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (session_creation_time.is_set || is_set(session_creation_time.operation)) leaf_name_data.push_back(session_creation_time.get_name_leafdata());
    if (session_ip_address.is_set || is_set(session_ip_address.operation)) leaf_name_data.push_back(session_ip_address.get_name_leafdata());
    if (session_ipv4_state.is_set || is_set(session_ipv4_state.operation)) leaf_name_data.push_back(session_ipv4_state.get_name_leafdata());
    if (session_ipv6_address.is_set || is_set(session_ipv6_address.operation)) leaf_name_data.push_back(session_ipv6_address.get_name_leafdata());
    if (session_ipv6_prefix.is_set || is_set(session_ipv6_prefix.operation)) leaf_name_data.push_back(session_ipv6_prefix.get_name_leafdata());
    if (session_ipv6_state.is_set || is_set(session_ipv6_state.operation)) leaf_name_data.push_back(session_ipv6_state.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.operation)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (total_session_idle_time.is_set || is_set(total_session_idle_time.operation)) leaf_name_data.push_back(total_session_idle_time.get_name_leafdata());
    if (tunnel_client_authentication_id.is_set || is_set(tunnel_client_authentication_id.operation)) leaf_name_data.push_back(tunnel_client_authentication_id.get_name_leafdata());
    if (tunnel_server_authentication_id.is_set || is_set(tunnel_server_authentication_id.operation)) leaf_name_data.push_back(tunnel_server_authentication_id.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Sessions::Session_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting")
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
        else
        {
            accounting = std::make_unique<Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting.get();
        }
        return children.at("accounting");
    }

    if(child_yang_name == "mobility-attributes")
    {
        if(mobility_attributes != nullptr)
        {
            children["mobility-attributes"] = mobility_attributes.get();
        }
        else
        {
            mobility_attributes = std::make_unique<Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes>();
            mobility_attributes->parent = this;
            children["mobility-attributes"] = mobility_attributes.get();
        }
        return children.at("mobility-attributes");
    }

    if(child_yang_name == "session-change-of-authorization")
    {
        for(auto const & c : session_change_of_authorization)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization>();
        c->parent = this;
        session_change_of_authorization.push_back(std::move(c));
        children[segment_path] = session_change_of_authorization.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "user-profile-attributes")
    {
        if(user_profile_attributes != nullptr)
        {
            children["user-profile-attributes"] = user_profile_attributes.get();
        }
        else
        {
            user_profile_attributes = std::make_unique<Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes>();
            user_profile_attributes->parent = this;
            children["user-profile-attributes"] = user_profile_attributes.get();
        }
        return children.at("user-profile-attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Sessions::Session_::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
    }

    if(children.find("mobility-attributes") == children.end())
    {
        if(mobility_attributes != nullptr)
        {
            children["mobility-attributes"] = mobility_attributes.get();
        }
    }

    for (auto const & c : session_change_of_authorization)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("user-profile-attributes") == children.end())
    {
        if(user_profile_attributes != nullptr)
        {
            children["user-profile-attributes"] = user_profile_attributes.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "access-interface-name")
    {
        access_interface_name = value;
    }
    if(value_path == "account-session-id")
    {
        account_session_id = value;
    }
    if(value_path == "af-up-status")
    {
        af_up_status = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "clientname")
    {
        clientname = value;
    }
    if(value_path == "delegated-ipv6-prefix")
    {
        delegated_ipv6_prefix = value;
    }
    if(value_path == "formattedname")
    {
        formattedname = value;
    }
    if(value_path == "idle-state-change-time")
    {
        idle_state_change_time = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ipv6-interface-id")
    {
        ipv6_interface_id = value;
    }
    if(value_path == "is-session-authentic")
    {
        is_session_authentic = value;
    }
    if(value_path == "is-session-author")
    {
        is_session_author = value;
    }
    if(value_path == "lac-address")
    {
        lac_address = value;
    }
    if(value_path == "lns-address")
    {
        lns_address = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "nas-port")
    {
        nas_port = value;
    }
    if(value_path == "pending-callbacks")
    {
        pending_callbacks = value;
    }
    if(value_path == "pppoe-sub-type")
    {
        pppoe_sub_type = value;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
    }
    if(value_path == "session-creation-time")
    {
        session_creation_time = value;
    }
    if(value_path == "session-ip-address")
    {
        session_ip_address = value;
    }
    if(value_path == "session-ipv4-state")
    {
        session_ipv4_state = value;
    }
    if(value_path == "session-ipv6-address")
    {
        session_ipv6_address = value;
    }
    if(value_path == "session-ipv6-prefix")
    {
        session_ipv6_prefix = value;
    }
    if(value_path == "session-ipv6-state")
    {
        session_ipv6_state = value;
    }
    if(value_path == "session-state")
    {
        session_state = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "total-session-idle-time")
    {
        total_session_idle_time = value;
    }
    if(value_path == "tunnel-client-authentication-id")
    {
        tunnel_client_authentication_id = value;
    }
    if(value_path == "tunnel-server-authentication-id")
    {
        tunnel_server_authentication_id = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Subscriber::Session::Nodes::Node::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::Sessions::~Sessions()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node::Sessions::Session_>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    access_interface_summaries(std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries>())
	,address_family_summaries(std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries>())
	,authentication_summaries(std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries>())
	,author_summaries(std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries>())
	,interface_summaries(std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries>())
	,ipv4_address_summaries(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries>())
	,ipv4_address_vrf_summaries(std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries>())
	,mac_summaries(std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries>())
	,sessions(std::make_unique<Subscriber::Session::Nodes::Node::Sessions>())
	,state_summaries(std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries>())
	,summary(std::make_unique<Subscriber::Session::Nodes::Node::Summary>())
	,username_summaries(std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries>())
	,vrf_summaries(std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries>())
{
    access_interface_summaries->parent = this;
    children["access-interface-summaries"] = access_interface_summaries.get();

    address_family_summaries->parent = this;
    children["address-family-summaries"] = address_family_summaries.get();

    authentication_summaries->parent = this;
    children["authentication-summaries"] = authentication_summaries.get();

    author_summaries->parent = this;
    children["author-summaries"] = author_summaries.get();

    interface_summaries->parent = this;
    children["interface-summaries"] = interface_summaries.get();

    ipv4_address_summaries->parent = this;
    children["ipv4-address-summaries"] = ipv4_address_summaries.get();

    ipv4_address_vrf_summaries->parent = this;
    children["ipv4-address-vrf-summaries"] = ipv4_address_vrf_summaries.get();

    mac_summaries->parent = this;
    children["mac-summaries"] = mac_summaries.get();

    sessions->parent = this;
    children["sessions"] = sessions.get();

    state_summaries->parent = this;
    children["state-summaries"] = state_summaries.get();

    summary->parent = this;
    children["summary"] = summary.get();

    username_summaries->parent = this;
    children["username-summaries"] = username_summaries.get();

    vrf_summaries->parent = this;
    children["vrf-summaries"] = vrf_summaries.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Subscriber::Session::Nodes::Node::~Node()
{
}

bool Subscriber::Session::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (access_interface_summaries !=  nullptr && access_interface_summaries->has_data())
	|| (address_family_summaries !=  nullptr && address_family_summaries->has_data())
	|| (authentication_summaries !=  nullptr && authentication_summaries->has_data())
	|| (author_summaries !=  nullptr && author_summaries->has_data())
	|| (interface_summaries !=  nullptr && interface_summaries->has_data())
	|| (ipv4_address_summaries !=  nullptr && ipv4_address_summaries->has_data())
	|| (ipv4_address_vrf_summaries !=  nullptr && ipv4_address_vrf_summaries->has_data())
	|| (mac_summaries !=  nullptr && mac_summaries->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (state_summaries !=  nullptr && state_summaries->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (username_summaries !=  nullptr && username_summaries->has_data())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_data());
}

bool Subscriber::Session::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (access_interface_summaries !=  nullptr && access_interface_summaries->has_operation())
	|| (address_family_summaries !=  nullptr && address_family_summaries->has_operation())
	|| (authentication_summaries !=  nullptr && authentication_summaries->has_operation())
	|| (author_summaries !=  nullptr && author_summaries->has_operation())
	|| (interface_summaries !=  nullptr && interface_summaries->has_operation())
	|| (ipv4_address_summaries !=  nullptr && ipv4_address_summaries->has_operation())
	|| (ipv4_address_vrf_summaries !=  nullptr && ipv4_address_vrf_summaries->has_operation())
	|| (mac_summaries !=  nullptr && mac_summaries->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (state_summaries !=  nullptr && state_summaries->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (username_summaries !=  nullptr && username_summaries->has_operation())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_operation());
}

std::string Subscriber::Session::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/session/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-interface-summaries")
    {
        if(access_interface_summaries != nullptr)
        {
            children["access-interface-summaries"] = access_interface_summaries.get();
        }
        else
        {
            access_interface_summaries = std::make_unique<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries>();
            access_interface_summaries->parent = this;
            children["access-interface-summaries"] = access_interface_summaries.get();
        }
        return children.at("access-interface-summaries");
    }

    if(child_yang_name == "address-family-summaries")
    {
        if(address_family_summaries != nullptr)
        {
            children["address-family-summaries"] = address_family_summaries.get();
        }
        else
        {
            address_family_summaries = std::make_unique<Subscriber::Session::Nodes::Node::AddressFamilySummaries>();
            address_family_summaries->parent = this;
            children["address-family-summaries"] = address_family_summaries.get();
        }
        return children.at("address-family-summaries");
    }

    if(child_yang_name == "authentication-summaries")
    {
        if(authentication_summaries != nullptr)
        {
            children["authentication-summaries"] = authentication_summaries.get();
        }
        else
        {
            authentication_summaries = std::make_unique<Subscriber::Session::Nodes::Node::AuthenticationSummaries>();
            authentication_summaries->parent = this;
            children["authentication-summaries"] = authentication_summaries.get();
        }
        return children.at("authentication-summaries");
    }

    if(child_yang_name == "author-summaries")
    {
        if(author_summaries != nullptr)
        {
            children["author-summaries"] = author_summaries.get();
        }
        else
        {
            author_summaries = std::make_unique<Subscriber::Session::Nodes::Node::AuthorSummaries>();
            author_summaries->parent = this;
            children["author-summaries"] = author_summaries.get();
        }
        return children.at("author-summaries");
    }

    if(child_yang_name == "interface-summaries")
    {
        if(interface_summaries != nullptr)
        {
            children["interface-summaries"] = interface_summaries.get();
        }
        else
        {
            interface_summaries = std::make_unique<Subscriber::Session::Nodes::Node::InterfaceSummaries>();
            interface_summaries->parent = this;
            children["interface-summaries"] = interface_summaries.get();
        }
        return children.at("interface-summaries");
    }

    if(child_yang_name == "ipv4-address-summaries")
    {
        if(ipv4_address_summaries != nullptr)
        {
            children["ipv4-address-summaries"] = ipv4_address_summaries.get();
        }
        else
        {
            ipv4_address_summaries = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries>();
            ipv4_address_summaries->parent = this;
            children["ipv4-address-summaries"] = ipv4_address_summaries.get();
        }
        return children.at("ipv4-address-summaries");
    }

    if(child_yang_name == "ipv4-address-vrf-summaries")
    {
        if(ipv4_address_vrf_summaries != nullptr)
        {
            children["ipv4-address-vrf-summaries"] = ipv4_address_vrf_summaries.get();
        }
        else
        {
            ipv4_address_vrf_summaries = std::make_unique<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries>();
            ipv4_address_vrf_summaries->parent = this;
            children["ipv4-address-vrf-summaries"] = ipv4_address_vrf_summaries.get();
        }
        return children.at("ipv4-address-vrf-summaries");
    }

    if(child_yang_name == "mac-summaries")
    {
        if(mac_summaries != nullptr)
        {
            children["mac-summaries"] = mac_summaries.get();
        }
        else
        {
            mac_summaries = std::make_unique<Subscriber::Session::Nodes::Node::MacSummaries>();
            mac_summaries->parent = this;
            children["mac-summaries"] = mac_summaries.get();
        }
        return children.at("mac-summaries");
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
        else
        {
            sessions = std::make_unique<Subscriber::Session::Nodes::Node::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions.get();
        }
        return children.at("sessions");
    }

    if(child_yang_name == "state-summaries")
    {
        if(state_summaries != nullptr)
        {
            children["state-summaries"] = state_summaries.get();
        }
        else
        {
            state_summaries = std::make_unique<Subscriber::Session::Nodes::Node::StateSummaries>();
            state_summaries->parent = this;
            children["state-summaries"] = state_summaries.get();
        }
        return children.at("state-summaries");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<Subscriber::Session::Nodes::Node::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    if(child_yang_name == "username-summaries")
    {
        if(username_summaries != nullptr)
        {
            children["username-summaries"] = username_summaries.get();
        }
        else
        {
            username_summaries = std::make_unique<Subscriber::Session::Nodes::Node::UsernameSummaries>();
            username_summaries->parent = this;
            children["username-summaries"] = username_summaries.get();
        }
        return children.at("username-summaries");
    }

    if(child_yang_name == "vrf-summaries")
    {
        if(vrf_summaries != nullptr)
        {
            children["vrf-summaries"] = vrf_summaries.get();
        }
        else
        {
            vrf_summaries = std::make_unique<Subscriber::Session::Nodes::Node::VrfSummaries>();
            vrf_summaries->parent = this;
            children["vrf-summaries"] = vrf_summaries.get();
        }
        return children.at("vrf-summaries");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::Node::get_children()
{
    if(children.find("access-interface-summaries") == children.end())
    {
        if(access_interface_summaries != nullptr)
        {
            children["access-interface-summaries"] = access_interface_summaries.get();
        }
    }

    if(children.find("address-family-summaries") == children.end())
    {
        if(address_family_summaries != nullptr)
        {
            children["address-family-summaries"] = address_family_summaries.get();
        }
    }

    if(children.find("authentication-summaries") == children.end())
    {
        if(authentication_summaries != nullptr)
        {
            children["authentication-summaries"] = authentication_summaries.get();
        }
    }

    if(children.find("author-summaries") == children.end())
    {
        if(author_summaries != nullptr)
        {
            children["author-summaries"] = author_summaries.get();
        }
    }

    if(children.find("interface-summaries") == children.end())
    {
        if(interface_summaries != nullptr)
        {
            children["interface-summaries"] = interface_summaries.get();
        }
    }

    if(children.find("ipv4-address-summaries") == children.end())
    {
        if(ipv4_address_summaries != nullptr)
        {
            children["ipv4-address-summaries"] = ipv4_address_summaries.get();
        }
    }

    if(children.find("ipv4-address-vrf-summaries") == children.end())
    {
        if(ipv4_address_vrf_summaries != nullptr)
        {
            children["ipv4-address-vrf-summaries"] = ipv4_address_vrf_summaries.get();
        }
    }

    if(children.find("mac-summaries") == children.end())
    {
        if(mac_summaries != nullptr)
        {
            children["mac-summaries"] = mac_summaries.get();
        }
    }

    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions.get();
        }
    }

    if(children.find("state-summaries") == children.end())
    {
        if(state_summaries != nullptr)
        {
            children["state-summaries"] = state_summaries.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    if(children.find("username-summaries") == children.end())
    {
        if(username_summaries != nullptr)
        {
            children["username-summaries"] = username_summaries.get();
        }
    }

    if(children.find("vrf-summaries") == children.end())
    {
        if(vrf_summaries != nullptr)
        {
            children["vrf-summaries"] = vrf_summaries.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Subscriber::Session::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "session";
}

Subscriber::Session::Nodes::~Nodes()
{
}

bool Subscriber::Session::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Subscriber::Session::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/session/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Subscriber::Session::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Subscriber::Session::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Session()
    :
    nodes(std::make_unique<Subscriber::Session::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "session"; yang_parent_name = "subscriber";
}

Subscriber::Session::~Session()
{
}

bool Subscriber::Session::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Subscriber::Session::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Subscriber::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath Subscriber::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Subscriber::Session::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::Session::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Subscriber::Session::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Subscriber()
    :
    manager(std::make_unique<Subscriber::Manager>())
	,session(std::make_unique<Subscriber::Session>())
{
    manager->parent = this;
    children["manager"] = manager.get();

    session->parent = this;
    children["session"] = session.get();

    yang_name = "subscriber"; yang_parent_name = "Cisco-IOS-XR-iedge4710-oper";
}

Subscriber::~Subscriber()
{
}

bool Subscriber::has_data() const
{
    return (manager !=  nullptr && manager->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Subscriber::has_operation() const
{
    return is_set(operation)
	|| (manager !=  nullptr && manager->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber";

    return path_buffer.str();

}

EntityPath Subscriber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "manager")
    {
        if(manager != nullptr)
        {
            children["manager"] = manager.get();
        }
        else
        {
            manager = std::make_unique<Subscriber::Manager>();
            manager->parent = this;
            children["manager"] = manager.get();
        }
        return children.at("manager");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
        else
        {
            session = std::make_unique<Subscriber::Session>();
            session->parent = this;
            children["session"] = session.get();
        }
        return children.at("session");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Subscriber::get_children()
{
    if(children.find("manager") == children.end())
    {
        if(manager != nullptr)
        {
            children["manager"] = manager.get();
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
    }

    return children;
}

void Subscriber::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Subscriber::clone_ptr()
{
    return std::make_unique<Subscriber>();
}
IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::IedgeLicenseManagerSummary()
    :
    	session_count{YType::uint32, "session-count"},
	 session_license_count{YType::uint32, "session-license-count"},
	 session_limit{YType::uint32, "session-limit"},
	 session_threshold{YType::uint32, "session-threshold"}
{
    yang_name = "iedge-license-manager-summary"; yang_parent_name = "node";
}

IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::~IedgeLicenseManagerSummary()
{
}

bool IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::has_data() const
{
    return session_count.is_set
	|| session_license_count.is_set
	|| session_limit.is_set
	|| session_threshold.is_set;
}

bool IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(session_count.operation)
	|| is_set(session_license_count.operation)
	|| is_set(session_limit.operation)
	|| is_set(session_threshold.operation);
}

std::string IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iedge-license-manager-summary";

    return path_buffer.str();

}

EntityPath IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_count.is_set || is_set(session_count.operation)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (session_license_count.is_set || is_set(session_license_count.operation)) leaf_name_data.push_back(session_license_count.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.operation)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (session_threshold.is_set || is_set(session_threshold.operation)) leaf_name_data.push_back(session_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::get_children()
{
    return children;
}

void IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-count")
    {
        session_count = value;
    }
    if(value_path == "session-license-count")
    {
        session_license_count = value;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
    }
    if(value_path == "session-threshold")
    {
        session_threshold = value;
    }
}

IedgeLicenseManager::Nodes::Node::Node()
    :
    	nodeid{YType::str, "nodeid"}
    	,
    iedge_license_manager_summary(std::make_unique<IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary>())
{
    iedge_license_manager_summary->parent = this;
    children["iedge-license-manager-summary"] = iedge_license_manager_summary.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

IedgeLicenseManager::Nodes::Node::~Node()
{
}

bool IedgeLicenseManager::Nodes::Node::has_data() const
{
    return nodeid.is_set
	|| (iedge_license_manager_summary !=  nullptr && iedge_license_manager_summary->has_data());
}

bool IedgeLicenseManager::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(nodeid.operation)
	|| (iedge_license_manager_summary !=  nullptr && iedge_license_manager_summary->has_operation());
}

std::string IedgeLicenseManager::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[nodeid='" <<nodeid.get() <<"']";

    return path_buffer.str();

}

EntityPath IedgeLicenseManager::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:iedge-license-manager/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nodeid.is_set || is_set(nodeid.operation)) leaf_name_data.push_back(nodeid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IedgeLicenseManager::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iedge-license-manager-summary")
    {
        if(iedge_license_manager_summary != nullptr)
        {
            children["iedge-license-manager-summary"] = iedge_license_manager_summary.get();
        }
        else
        {
            iedge_license_manager_summary = std::make_unique<IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary>();
            iedge_license_manager_summary->parent = this;
            children["iedge-license-manager-summary"] = iedge_license_manager_summary.get();
        }
        return children.at("iedge-license-manager-summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & IedgeLicenseManager::Nodes::Node::get_children()
{
    if(children.find("iedge-license-manager-summary") == children.end())
    {
        if(iedge_license_manager_summary != nullptr)
        {
            children["iedge-license-manager-summary"] = iedge_license_manager_summary.get();
        }
    }

    return children;
}

void IedgeLicenseManager::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nodeid")
    {
        nodeid = value;
    }
}

IedgeLicenseManager::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "iedge-license-manager";
}

IedgeLicenseManager::Nodes::~Nodes()
{
}

bool IedgeLicenseManager::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool IedgeLicenseManager::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IedgeLicenseManager::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath IedgeLicenseManager::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:iedge-license-manager/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IedgeLicenseManager::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<IedgeLicenseManager::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IedgeLicenseManager::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void IedgeLicenseManager::Nodes::set_value(const std::string & value_path, std::string value)
{
}

IedgeLicenseManager::IedgeLicenseManager()
    :
    nodes(std::make_unique<IedgeLicenseManager::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "iedge-license-manager"; yang_parent_name = "Cisco-IOS-XR-iedge4710-oper";
}

IedgeLicenseManager::~IedgeLicenseManager()
{
}

bool IedgeLicenseManager::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool IedgeLicenseManager::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string IedgeLicenseManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:iedge-license-manager";

    return path_buffer.str();

}

EntityPath IedgeLicenseManager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IedgeLicenseManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<IedgeLicenseManager::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & IedgeLicenseManager::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void IedgeLicenseManager::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> IedgeLicenseManager::clone_ptr()
{
    return std::make_unique<IedgeLicenseManager>();
}

const Enum::YLeaf AaaTunnelProtoEnum::none {0, "none"};
const Enum::YLeaf AaaTunnelProtoEnum::pptp {1, "pptp"};
const Enum::YLeaf AaaTunnelProtoEnum::l2f {2, "l2f"};
const Enum::YLeaf AaaTunnelProtoEnum::l2tp {3, "l2tp"};
const Enum::YLeaf AaaTunnelProtoEnum::atmp {4, "atmp"};
const Enum::YLeaf AaaTunnelProtoEnum::vtp {5, "vtp"};
const Enum::YLeaf AaaTunnelProtoEnum::ah {6, "ah"};
const Enum::YLeaf AaaTunnelProtoEnum::ip_over_ip {7, "ip-over-ip"};
const Enum::YLeaf AaaTunnelProtoEnum::minimum_ip_over_ip {8, "minimum-ip-over-ip"};
const Enum::YLeaf AaaTunnelProtoEnum::esp {9, "esp"};
const Enum::YLeaf AaaTunnelProtoEnum::gre {10, "gre"};
const Enum::YLeaf AaaTunnelProtoEnum::bay_dvs {11, "bay-dvs"};
const Enum::YLeaf AaaTunnelProtoEnum::ip_in_ip {12, "ip-in-ip"};
const Enum::YLeaf AaaTunnelProtoEnum::vlan {13, "vlan"};

const Enum::YLeaf AaaTerminateCauseEnum::none {0, "none"};
const Enum::YLeaf AaaTerminateCauseEnum::user_request {1, "user-request"};
const Enum::YLeaf AaaTerminateCauseEnum::lost_carrier {2, "lost-carrier"};
const Enum::YLeaf AaaTerminateCauseEnum::lost_service {3, "lost-service"};
const Enum::YLeaf AaaTerminateCauseEnum::idle_timeout {4, "idle-timeout"};
const Enum::YLeaf AaaTerminateCauseEnum::session_timeout {5, "session-timeout"};
const Enum::YLeaf AaaTerminateCauseEnum::admin_reset {6, "admin-reset"};
const Enum::YLeaf AaaTerminateCauseEnum::admin_reboot {7, "admin-reboot"};
const Enum::YLeaf AaaTerminateCauseEnum::port_error {8, "port-error"};
const Enum::YLeaf AaaTerminateCauseEnum::nas_error {9, "nas-error"};
const Enum::YLeaf AaaTerminateCauseEnum::nas_request {10, "nas-request"};
const Enum::YLeaf AaaTerminateCauseEnum::nas_reboot {11, "nas-reboot"};
const Enum::YLeaf AaaTerminateCauseEnum::port_unneeded {12, "port-unneeded"};
const Enum::YLeaf AaaTerminateCauseEnum::port_preempted {13, "port-preempted"};
const Enum::YLeaf AaaTerminateCauseEnum::port_suspended {14, "port-suspended"};
const Enum::YLeaf AaaTerminateCauseEnum::service_unavailable {15, "service-unavailable"};
const Enum::YLeaf AaaTerminateCauseEnum::callback {16, "callback"};
const Enum::YLeaf AaaTerminateCauseEnum::user_error {17, "user-error"};
const Enum::YLeaf AaaTerminateCauseEnum::host_request {18, "host-request"};
const Enum::YLeaf AaaTerminateCauseEnum::supplicant_restart {19, "supplicant-restart"};
const Enum::YLeaf AaaTerminateCauseEnum::reauthorization_failure {20, "reauthorization-failure"};
const Enum::YLeaf AaaTerminateCauseEnum::port_reinitialized {21, "port-reinitialized"};
const Enum::YLeaf AaaTerminateCauseEnum::admin_disabled {22, "admin-disabled"};

const Enum::YLeaf SubscriberAuthorStateFilterFlagEnum::un_authorized {0, "un-authorized"};
const Enum::YLeaf SubscriberAuthorStateFilterFlagEnum::authorized {1, "authorized"};

const Enum::YLeaf IedgeOperSessionStateEnum::initialize {0, "initialize"};
const Enum::YLeaf IedgeOperSessionStateEnum::connecting {1, "connecting"};
const Enum::YLeaf IedgeOperSessionStateEnum::connected {2, "connected"};
const Enum::YLeaf IedgeOperSessionStateEnum::activated {3, "activated"};
const Enum::YLeaf IedgeOperSessionStateEnum::idle {4, "idle"};
const Enum::YLeaf IedgeOperSessionStateEnum::disconnecting {5, "disconnecting"};
const Enum::YLeaf IedgeOperSessionStateEnum::end {6, "end"};

const Enum::YLeaf IedgeOperSessionAfStateEnum::not_started {0, "not-started"};
const Enum::YLeaf IedgeOperSessionAfStateEnum::down {1, "down"};
const Enum::YLeaf IedgeOperSessionAfStateEnum::up_pending {2, "up-pending"};
const Enum::YLeaf IedgeOperSessionAfStateEnum::up {3, "up"};

const Enum::YLeaf SubscriberStateFilterFlagEnum::initializing {0, "initializing"};
const Enum::YLeaf SubscriberStateFilterFlagEnum::connecting {1, "connecting"};
const Enum::YLeaf SubscriberStateFilterFlagEnum::connected {2, "connected"};
const Enum::YLeaf SubscriberStateFilterFlagEnum::activated {3, "activated"};
const Enum::YLeaf SubscriberStateFilterFlagEnum::idle {4, "idle"};
const Enum::YLeaf SubscriberStateFilterFlagEnum::disconnecting {5, "disconnecting"};
const Enum::YLeaf SubscriberStateFilterFlagEnum::end {6, "end"};

const Enum::YLeaf AaaAuthServiceEnum::none {0, "none"};
const Enum::YLeaf AaaAuthServiceEnum::login {1, "login"};
const Enum::YLeaf AaaAuthServiceEnum::framed {2, "framed"};
const Enum::YLeaf AaaAuthServiceEnum::callback_login {3, "callback-login"};
const Enum::YLeaf AaaAuthServiceEnum::callback_framed {4, "callback-framed"};
const Enum::YLeaf AaaAuthServiceEnum::outbound {5, "outbound"};
const Enum::YLeaf AaaAuthServiceEnum::administrator {6, "administrator"};
const Enum::YLeaf AaaAuthServiceEnum::prompt {7, "prompt"};
const Enum::YLeaf AaaAuthServiceEnum::authentication_only {8, "authentication-only"};
const Enum::YLeaf AaaAuthServiceEnum::callback_nas_prompt {9, "callback-nas-prompt"};
const Enum::YLeaf AaaAuthServiceEnum::call_check {10, "call-check"};
const Enum::YLeaf AaaAuthServiceEnum::callback_administrator {11, "callback-administrator"};
const Enum::YLeaf AaaAuthServiceEnum::voice {12, "voice"};
const Enum::YLeaf AaaAuthServiceEnum::fax {13, "fax"};
const Enum::YLeaf AaaAuthServiceEnum::modem_relay {14, "modem-relay"};
const Enum::YLeaf AaaAuthServiceEnum::eap_over_udp {15, "eap-over-udp"};

const Enum::YLeaf AaaInterfaceEnum::none {0, "none"};
const Enum::YLeaf AaaInterfaceEnum::primary_rate {1, "primary-rate"};
const Enum::YLeaf AaaInterfaceEnum::basic_rate {2, "basic-rate"};
const Enum::YLeaf AaaInterfaceEnum::serial {3, "serial"};
const Enum::YLeaf AaaInterfaceEnum::asynchronous {4, "asynchronous"};
const Enum::YLeaf AaaInterfaceEnum::vty {5, "vty"};
const Enum::YLeaf AaaInterfaceEnum::atm {6, "atm"};
const Enum::YLeaf AaaInterfaceEnum::ethernet {7, "ethernet"};
const Enum::YLeaf AaaInterfaceEnum::ppp_over_atm {8, "ppp-over-atm"};
const Enum::YLeaf AaaInterfaceEnum::pppoe_over_atm {9, "pppoe-over-atm"};
const Enum::YLeaf AaaInterfaceEnum::pppoe_over_ethernet {10, "pppoe-over-ethernet"};
const Enum::YLeaf AaaInterfaceEnum::ppp_over_vlan {11, "ppp-over-vlan"};
const Enum::YLeaf AaaInterfaceEnum::ppp_over_qinq {12, "ppp-over-qinq"};
const Enum::YLeaf AaaInterfaceEnum::v120 {13, "v120"};
const Enum::YLeaf AaaInterfaceEnum::v110 {14, "v110"};
const Enum::YLeaf AaaInterfaceEnum::piafs {15, "piafs"};
const Enum::YLeaf AaaInterfaceEnum::x75 {16, "x75"};
const Enum::YLeaf AaaInterfaceEnum::ip_sec {17, "ip-sec"};
const Enum::YLeaf AaaInterfaceEnum::other {18, "other"};
const Enum::YLeaf AaaInterfaceEnum::virtual_pppoe_over_ethernet {19, "virtual-pppoe-over-ethernet"};
const Enum::YLeaf AaaInterfaceEnum::virtual_pppoe_over_vlan {20, "virtual-pppoe-over-vlan"};
const Enum::YLeaf AaaInterfaceEnum::virtual_pppoe_over_qinq {21, "virtual-pppoe-over-qinq"};
const Enum::YLeaf AaaInterfaceEnum::ipo_e_over_ethernet {22, "ipo-e-over-ethernet"};
const Enum::YLeaf AaaInterfaceEnum::ipo_e_over_vlan {23, "ipo-e-over-vlan"};
const Enum::YLeaf AaaInterfaceEnum::ipo_e_over_qinq {24, "ipo-e-over-qinq"};
const Enum::YLeaf AaaInterfaceEnum::virtual_i_po_e_over_ethernet {25, "virtual-i-po-e-over-ethernet"};
const Enum::YLeaf AaaInterfaceEnum::virtual_i_po_e_over_vlan {26, "virtual-i-po-e-over-vlan"};
const Enum::YLeaf AaaInterfaceEnum::virtual_i_po_e_over_qinq {27, "virtual-i-po-e-over-qinq"};

const Enum::YLeaf SubscriberAuthenStateFilterFlagEnum::un_authenticated {0, "un-authenticated"};
const Enum::YLeaf SubscriberAuthenStateFilterFlagEnum::authenticated {1, "authenticated"};

const Enum::YLeaf IedgeOperSessionEnum::unknown {0, "unknown"};
const Enum::YLeaf IedgeOperSessionEnum::pppoe {1, "pppoe"};
const Enum::YLeaf IedgeOperSessionEnum::ppp {2, "ppp"};
const Enum::YLeaf IedgeOperSessionEnum::ip_packet_trigger {3, "ip-packet-trigger"};
const Enum::YLeaf IedgeOperSessionEnum::ip_packet_dhcp_trigger {4, "ip-packet-dhcp-trigger"};

const Enum::YLeaf AaaTunnelMediumEnum::none {0, "none"};
const Enum::YLeaf AaaTunnelMediumEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf AaaTunnelMediumEnum::ipv6 {2, "ipv6"};
const Enum::YLeaf AaaTunnelMediumEnum::nsap {3, "nsap"};
const Enum::YLeaf AaaTunnelMediumEnum::hdlc {4, "hdlc"};
const Enum::YLeaf AaaTunnelMediumEnum::bbn {5, "bbn"};
const Enum::YLeaf AaaTunnelMediumEnum::all802 {6, "all802"};

const Enum::YLeaf IedgePppSubEnum::pta {0, "pta"};
const Enum::YLeaf IedgePppSubEnum::lac {1, "lac"};

const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::ipv4_only {0, "ipv4-only"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::ipv6_only {1, "ipv6-only"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::ipv4_all {2, "ipv4-all"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::ipv6_all {3, "ipv6-all"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::dual_all {4, "dual-all"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::dual_part_up {5, "dual-part-up"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::dual_up {6, "dual-up"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::lac {7, "lac"};


}
}

