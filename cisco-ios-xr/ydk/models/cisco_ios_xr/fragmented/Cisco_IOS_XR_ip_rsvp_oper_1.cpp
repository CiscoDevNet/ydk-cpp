
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_1.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rsvp_oper {

RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::BundleTransmittedMessages()
    :
    ack{YType::uint32, "ack"},
    bundle{YType::uint32, "bundle"},
    challenge{YType::uint32, "challenge"},
    hello{YType::uint32, "hello"},
    path{YType::uint32, "path"},
    path_error{YType::uint32, "path-error"},
    path_tear{YType::uint32, "path-tear"},
    reservation{YType::uint32, "reservation"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    reservation_error{YType::uint32, "reservation-error"},
    reservation_tear{YType::uint32, "reservation-tear"},
    response{YType::uint32, "response"},
    srefresh{YType::uint32, "srefresh"}
{
    yang_name = "bundle-transmitted-messages"; yang_parent_name = "message-summary";
}

RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::~BundleTransmittedMessages()
{
}

bool RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::has_data() const
{
    return ack.is_set
	|| bundle.is_set
	|| challenge.is_set
	|| hello.is_set
	|| path.is_set
	|| path_error.is_set
	|| path_tear.is_set
	|| reservation.is_set
	|| reservation_confirm.is_set
	|| reservation_error.is_set
	|| reservation_tear.is_set
	|| response.is_set
	|| srefresh.is_set;
}

bool RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(bundle.operation)
	|| is_set(challenge.operation)
	|| is_set(hello.operation)
	|| is_set(path.operation)
	|| is_set(path_error.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(reservation_error.operation)
	|| is_set(reservation_tear.operation)
	|| is_set(response.operation)
	|| is_set(srefresh.operation);
}

std::string RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-transmitted-messages";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/message-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (bundle.is_set || is_set(bundle.operation)) leaf_name_data.push_back(bundle.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.operation)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (hello.is_set || is_set(hello.operation)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_error.is_set || is_set(path_error.operation)) leaf_name_data.push_back(path_error.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation.is_set || is_set(reservation.operation)) leaf_name_data.push_back(reservation.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (reservation_error.is_set || is_set(reservation_error.operation)) leaf_name_data.push_back(reservation_error.get_name_leafdata());
    if (reservation_tear.is_set || is_set(reservation_tear.operation)) leaf_name_data.push_back(reservation_tear.get_name_leafdata());
    if (response.is_set || is_set(response.operation)) leaf_name_data.push_back(response.get_name_leafdata());
    if (srefresh.is_set || is_set(srefresh.operation)) leaf_name_data.push_back(srefresh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::get_children()
{
    return children;
}

void RsvpStandby::Counters::MessageSummary::BundleTransmittedMessages::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "bundle")
    {
        bundle = value;
    }
    if(value_path == "challenge")
    {
        challenge = value;
    }
    if(value_path == "hello")
    {
        hello = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-error")
    {
        path_error = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation")
    {
        reservation = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "reservation-error")
    {
        reservation_error = value;
    }
    if(value_path == "reservation-tear")
    {
        reservation_tear = value;
    }
    if(value_path == "response")
    {
        response = value;
    }
    if(value_path == "srefresh")
    {
        srefresh = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::PrefixFiltering()
    :
    accesses(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses>())
	,interfaces(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces>())
{
    accesses->parent = this;
    children["accesses"] = accesses;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    yang_name = "prefix-filtering"; yang_parent_name = "counters";
}

RsvpStandby::Counters::PrefixFiltering::~PrefixFiltering()
{
}

bool RsvpStandby::Counters::PrefixFiltering::has_data() const
{
    return (accesses !=  nullptr && accesses->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool RsvpStandby::Counters::PrefixFiltering::has_operation() const
{
    return is_set(operation)
	|| (accesses !=  nullptr && accesses->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string RsvpStandby::Counters::PrefixFiltering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filtering";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accesses")
    {
        if(accesses != nullptr)
        {
            children["accesses"] = accesses;
        }
        else
        {
            accesses = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses>();
            accesses->parent = this;
            children["accesses"] = accesses;
        }
        return children.at("accesses");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::get_children()
{
    if(children.find("accesses") == children.end())
    {
        if(accesses != nullptr)
        {
            children["accesses"] = accesses;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    return children;
}

void RsvpStandby::Counters::PrefixFiltering::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Accesses()
{
    yang_name = "accesses"; yang_parent_name = "prefix-filtering";
}

RsvpStandby::Counters::PrefixFiltering::Accesses::~Accesses()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::has_data() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::has_operation() const
{
    for (std::size_t index=0; index<access.size(); index++)
    {
        if(access[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesses";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Accesses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Accesses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access")
    {
        for(auto const & c : access)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access>();
        c->parent = this;
        access.push_back(std::move(c));
        children[segment_path] = access.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Accesses::get_children()
{
    for (auto const & c : access)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Access()
    :
    access_list_name{YType::str, "access-list-name"}
    	,
    dropped(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped>())
	,forwarded(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded>())
	,locally_destined(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined>())
	,total(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total>())
{
    dropped->parent = this;
    children["dropped"] = dropped;

    forwarded->parent = this;
    children["forwarded"] = forwarded;

    locally_destined->parent = this;
    children["locally-destined"] = locally_destined;

    total->parent = this;
    children["total"] = total;

    yang_name = "access"; yang_parent_name = "accesses";
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::~Access()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::has_data() const
{
    return access_list_name.is_set
	|| (dropped !=  nullptr && dropped->has_data())
	|| (forwarded !=  nullptr && forwarded->has_data())
	|| (locally_destined !=  nullptr && locally_destined->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| (dropped !=  nullptr && dropped->has_operation())
	|| (forwarded !=  nullptr && forwarded->has_operation())
	|| (locally_destined !=  nullptr && locally_destined->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access" <<"[access-list-name='" <<access_list_name <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Accesses::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/accesses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dropped")
    {
        if(dropped != nullptr)
        {
            children["dropped"] = dropped;
        }
        else
        {
            dropped = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped>();
            dropped->parent = this;
            children["dropped"] = dropped;
        }
        return children.at("dropped");
    }

    if(child_yang_name == "forwarded")
    {
        if(forwarded != nullptr)
        {
            children["forwarded"] = forwarded;
        }
        else
        {
            forwarded = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded>();
            forwarded->parent = this;
            children["forwarded"] = forwarded;
        }
        return children.at("forwarded");
    }

    if(child_yang_name == "locally-destined")
    {
        if(locally_destined != nullptr)
        {
            children["locally-destined"] = locally_destined;
        }
        else
        {
            locally_destined = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined>();
            locally_destined->parent = this;
            children["locally-destined"] = locally_destined;
        }
        return children.at("locally-destined");
    }

    if(child_yang_name == "total")
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
        else
        {
            total = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total>();
            total->parent = this;
            children["total"] = total;
        }
        return children.at("total");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Accesses::Access::get_children()
{
    if(children.find("dropped") == children.end())
    {
        if(dropped != nullptr)
        {
            children["dropped"] = dropped;
        }
    }

    if(children.find("forwarded") == children.end())
    {
        if(forwarded != nullptr)
        {
            children["forwarded"] = forwarded;
        }
    }

    if(children.find("locally-destined") == children.end())
    {
        if(locally_destined != nullptr)
        {
            children["locally-destined"] = locally_destined;
        }
    }

    if(children.find("total") == children.end())
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
    }

    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::Forwarded()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "forwarded"; yang_parent_name = "access";
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::~Forwarded()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarded";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forwarded' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Forwarded::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::LocallyDestined()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "locally-destined"; yang_parent_name = "access";
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::~LocallyDestined()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locally-destined";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocallyDestined' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::LocallyDestined::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::Dropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "dropped"; yang_parent_name = "access";
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::~Dropped()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dropped' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Dropped::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::Total()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "total"; yang_parent_name = "access";
}

RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::~Total()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Total' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Accesses::Access::Total::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces()
    :
    interfaces(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_>())
	,summary(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "interfaces"; yang_parent_name = "prefix-filtering";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::~Interfaces()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Summary()
    :
    default_action_dropped(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped>())
	,default_action_processed(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed>())
	,dropped(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped>())
	,forwarded(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded>())
	,locally_destined(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined>())
	,total(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total>())
{
    default_action_dropped->parent = this;
    children["default-action-dropped"] = default_action_dropped;

    default_action_processed->parent = this;
    children["default-action-processed"] = default_action_processed;

    dropped->parent = this;
    children["dropped"] = dropped;

    forwarded->parent = this;
    children["forwarded"] = forwarded;

    locally_destined->parent = this;
    children["locally-destined"] = locally_destined;

    total->parent = this;
    children["total"] = total;

    yang_name = "summary"; yang_parent_name = "interfaces";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::~Summary()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::has_data() const
{
    return (default_action_dropped !=  nullptr && default_action_dropped->has_data())
	|| (default_action_processed !=  nullptr && default_action_processed->has_data())
	|| (dropped !=  nullptr && dropped->has_data())
	|| (forwarded !=  nullptr && forwarded->has_data())
	|| (locally_destined !=  nullptr && locally_destined->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::has_operation() const
{
    return is_set(operation)
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_operation())
	|| (default_action_processed !=  nullptr && default_action_processed->has_operation())
	|| (dropped !=  nullptr && dropped->has_operation())
	|| (forwarded !=  nullptr && forwarded->has_operation())
	|| (locally_destined !=  nullptr && locally_destined->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-action-dropped")
    {
        if(default_action_dropped != nullptr)
        {
            children["default-action-dropped"] = default_action_dropped;
        }
        else
        {
            default_action_dropped = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped>();
            default_action_dropped->parent = this;
            children["default-action-dropped"] = default_action_dropped;
        }
        return children.at("default-action-dropped");
    }

    if(child_yang_name == "default-action-processed")
    {
        if(default_action_processed != nullptr)
        {
            children["default-action-processed"] = default_action_processed;
        }
        else
        {
            default_action_processed = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed>();
            default_action_processed->parent = this;
            children["default-action-processed"] = default_action_processed;
        }
        return children.at("default-action-processed");
    }

    if(child_yang_name == "dropped")
    {
        if(dropped != nullptr)
        {
            children["dropped"] = dropped;
        }
        else
        {
            dropped = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped>();
            dropped->parent = this;
            children["dropped"] = dropped;
        }
        return children.at("dropped");
    }

    if(child_yang_name == "forwarded")
    {
        if(forwarded != nullptr)
        {
            children["forwarded"] = forwarded;
        }
        else
        {
            forwarded = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded>();
            forwarded->parent = this;
            children["forwarded"] = forwarded;
        }
        return children.at("forwarded");
    }

    if(child_yang_name == "locally-destined")
    {
        if(locally_destined != nullptr)
        {
            children["locally-destined"] = locally_destined;
        }
        else
        {
            locally_destined = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined>();
            locally_destined->parent = this;
            children["locally-destined"] = locally_destined;
        }
        return children.at("locally-destined");
    }

    if(child_yang_name == "total")
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
        else
        {
            total = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total>();
            total->parent = this;
            children["total"] = total;
        }
        return children.at("total");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::get_children()
{
    if(children.find("default-action-dropped") == children.end())
    {
        if(default_action_dropped != nullptr)
        {
            children["default-action-dropped"] = default_action_dropped;
        }
    }

    if(children.find("default-action-processed") == children.end())
    {
        if(default_action_processed != nullptr)
        {
            children["default-action-processed"] = default_action_processed;
        }
    }

    if(children.find("dropped") == children.end())
    {
        if(dropped != nullptr)
        {
            children["dropped"] = dropped;
        }
    }

    if(children.find("forwarded") == children.end())
    {
        if(forwarded != nullptr)
        {
            children["forwarded"] = forwarded;
        }
    }

    if(children.find("locally-destined") == children.end())
    {
        if(locally_destined != nullptr)
        {
            children["locally-destined"] = locally_destined;
        }
    }

    if(children.find("total") == children.end())
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
    }

    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::Forwarded()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "forwarded"; yang_parent_name = "summary";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::~Forwarded()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarded";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Forwarded::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::LocallyDestined()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "locally-destined"; yang_parent_name = "summary";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::~LocallyDestined()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locally-destined";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::LocallyDestined::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::Dropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "dropped"; yang_parent_name = "summary";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::~Dropped()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Dropped::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::DefaultActionDropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "default-action-dropped"; yang_parent_name = "summary";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::~DefaultActionDropped()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-dropped";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionDropped::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::DefaultActionProcessed()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "default-action-processed"; yang_parent_name = "summary";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::~DefaultActionProcessed()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-processed";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::DefaultActionProcessed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::Total()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "total"; yang_parent_name = "summary";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::~Total()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Summary::Total::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interfaces_()
{
    yang_name = "interfaces"; yang_parent_name = "interfaces";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::~Interfaces_()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    default_action_dropped(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped>())
	,default_action_processed(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed>())
	,dropped(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped>())
	,forwarded(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded>())
	,locally_destined(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined>())
	,total(std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total>())
{
    default_action_dropped->parent = this;
    children["default-action-dropped"] = default_action_dropped;

    default_action_processed->parent = this;
    children["default-action-processed"] = default_action_processed;

    dropped->parent = this;
    children["dropped"] = dropped;

    forwarded->parent = this;
    children["forwarded"] = forwarded;

    locally_destined->parent = this;
    children["locally-destined"] = locally_destined;

    total->parent = this;
    children["total"] = total;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::~Interface()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::has_data() const
{
    return interface_name.is_set
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_data())
	|| (default_action_processed !=  nullptr && default_action_processed->has_data())
	|| (dropped !=  nullptr && dropped->has_data())
	|| (forwarded !=  nullptr && forwarded->has_data())
	|| (locally_destined !=  nullptr && locally_destined->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (default_action_dropped !=  nullptr && default_action_dropped->has_operation())
	|| (default_action_processed !=  nullptr && default_action_processed->has_operation())
	|| (dropped !=  nullptr && dropped->has_operation())
	|| (forwarded !=  nullptr && forwarded->has_operation())
	|| (locally_destined !=  nullptr && locally_destined->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/prefix-filtering/interfaces/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-action-dropped")
    {
        if(default_action_dropped != nullptr)
        {
            children["default-action-dropped"] = default_action_dropped;
        }
        else
        {
            default_action_dropped = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped>();
            default_action_dropped->parent = this;
            children["default-action-dropped"] = default_action_dropped;
        }
        return children.at("default-action-dropped");
    }

    if(child_yang_name == "default-action-processed")
    {
        if(default_action_processed != nullptr)
        {
            children["default-action-processed"] = default_action_processed;
        }
        else
        {
            default_action_processed = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed>();
            default_action_processed->parent = this;
            children["default-action-processed"] = default_action_processed;
        }
        return children.at("default-action-processed");
    }

    if(child_yang_name == "dropped")
    {
        if(dropped != nullptr)
        {
            children["dropped"] = dropped;
        }
        else
        {
            dropped = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped>();
            dropped->parent = this;
            children["dropped"] = dropped;
        }
        return children.at("dropped");
    }

    if(child_yang_name == "forwarded")
    {
        if(forwarded != nullptr)
        {
            children["forwarded"] = forwarded;
        }
        else
        {
            forwarded = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded>();
            forwarded->parent = this;
            children["forwarded"] = forwarded;
        }
        return children.at("forwarded");
    }

    if(child_yang_name == "locally-destined")
    {
        if(locally_destined != nullptr)
        {
            children["locally-destined"] = locally_destined;
        }
        else
        {
            locally_destined = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined>();
            locally_destined->parent = this;
            children["locally-destined"] = locally_destined;
        }
        return children.at("locally-destined");
    }

    if(child_yang_name == "total")
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
        else
        {
            total = std::make_shared<RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total>();
            total->parent = this;
            children["total"] = total;
        }
        return children.at("total");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::get_children()
{
    if(children.find("default-action-dropped") == children.end())
    {
        if(default_action_dropped != nullptr)
        {
            children["default-action-dropped"] = default_action_dropped;
        }
    }

    if(children.find("default-action-processed") == children.end())
    {
        if(default_action_processed != nullptr)
        {
            children["default-action-processed"] = default_action_processed;
        }
    }

    if(children.find("dropped") == children.end())
    {
        if(dropped != nullptr)
        {
            children["dropped"] = dropped;
        }
    }

    if(children.find("forwarded") == children.end())
    {
        if(forwarded != nullptr)
        {
            children["forwarded"] = forwarded;
        }
    }

    if(children.find("locally-destined") == children.end())
    {
        if(locally_destined != nullptr)
        {
            children["locally-destined"] = locally_destined;
        }
    }

    if(children.find("total") == children.end())
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
    }

    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::Forwarded()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "forwarded"; yang_parent_name = "interface";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::~Forwarded()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarded";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forwarded' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Forwarded::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::LocallyDestined()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "locally-destined"; yang_parent_name = "interface";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::~LocallyDestined()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locally-destined";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocallyDestined' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::LocallyDestined::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::Dropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "dropped"; yang_parent_name = "interface";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::~Dropped()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dropped' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Dropped::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::DefaultActionDropped()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "default-action-dropped"; yang_parent_name = "interface";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::~DefaultActionDropped()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-dropped";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultActionDropped' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionDropped::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::DefaultActionProcessed()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "default-action-processed"; yang_parent_name = "interface";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::~DefaultActionProcessed()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-action-processed";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultActionProcessed' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::DefaultActionProcessed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::Total()
    :
    path{YType::uint32, "path"},
    path_tear{YType::uint32, "path-tear"},
    reservation_confirm{YType::uint32, "reservation-confirm"},
    total{YType::uint32, "total"}
{
    yang_name = "total"; yang_parent_name = "interface";
}

RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::~Total()
{
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::has_data() const
{
    return path.is_set
	|| path_tear.is_set
	|| reservation_confirm.is_set
	|| total.is_set;
}

bool RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::has_operation() const
{
    return is_set(operation)
	|| is_set(path.operation)
	|| is_set(path_tear.operation)
	|| is_set(reservation_confirm.operation)
	|| is_set(total.operation);
}

std::string RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Total' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_tear.is_set || is_set(path_tear.operation)) leaf_name_data.push_back(path_tear.get_name_leafdata());
    if (reservation_confirm.is_set || is_set(reservation_confirm.operation)) leaf_name_data.push_back(reservation_confirm.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::get_children()
{
    return children;
}

void RsvpStandby::Counters::PrefixFiltering::Interfaces::Interfaces_::Interface::Total::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "path-tear")
    {
        path_tear = value;
    }
    if(value_path == "reservation-confirm")
    {
        reservation_confirm = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

RsvpStandby::Counters::OutOfResource::OutOfResource()
    :
    interfaces(std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    yang_name = "out-of-resource"; yang_parent_name = "counters";
}

RsvpStandby::Counters::OutOfResource::~OutOfResource()
{
}

bool RsvpStandby::Counters::OutOfResource::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool RsvpStandby::Counters::OutOfResource::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string RsvpStandby::Counters::OutOfResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-of-resource";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::OutOfResource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::OutOfResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::OutOfResource::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    return children;
}

void RsvpStandby::Counters::OutOfResource::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces()
    :
    interfaces(std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_>())
	,summary(std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces::Summary>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "interfaces"; yang_parent_name = "out-of-resource";
}

RsvpStandby::Counters::OutOfResource::Interfaces::~Interfaces()
{
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string RsvpStandby::Counters::OutOfResource::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::OutOfResource::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/out-of-resource/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::OutOfResource::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::OutOfResource::Interfaces::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void RsvpStandby::Counters::OutOfResource::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Counters::OutOfResource::Interfaces::Summary::Summary()
    :
    dropped_path_messages{YType::uint32, "dropped-path-messages"}
{
    yang_name = "summary"; yang_parent_name = "interfaces";
}

RsvpStandby::Counters::OutOfResource::Interfaces::Summary::~Summary()
{
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Summary::has_data() const
{
    return dropped_path_messages.is_set;
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_path_messages.operation);
}

std::string RsvpStandby::Counters::OutOfResource::Interfaces::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::OutOfResource::Interfaces::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/out-of-resource/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_path_messages.is_set || is_set(dropped_path_messages.operation)) leaf_name_data.push_back(dropped_path_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::OutOfResource::Interfaces::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::OutOfResource::Interfaces::Summary::get_children()
{
    return children;
}

void RsvpStandby::Counters::OutOfResource::Interfaces::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages = value;
    }
}

RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interfaces_()
{
    yang_name = "interfaces"; yang_parent_name = "interfaces";
}

RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::~Interfaces_()
{
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/out-of-resource/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    dropped_path_messages{YType::uint32, "dropped-path-messages"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::~Interface()
{
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::has_data() const
{
    return interface_name.is_set
	|| dropped_path_messages.is_set;
}

bool RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(dropped_path_messages.operation);
}

std::string RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/out-of-resource/interfaces/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (dropped_path_messages.is_set || is_set(dropped_path_messages.operation)) leaf_name_data.push_back(dropped_path_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::get_children()
{
    return children;
}

void RsvpStandby::Counters::OutOfResource::Interfaces::Interfaces_::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "dropped-path-messages")
    {
        dropped_path_messages = value;
    }
}

RsvpStandby::Counters::InterfaceEvents::InterfaceEvents()
{
    yang_name = "interface-events"; yang_parent_name = "counters";
}

RsvpStandby::Counters::InterfaceEvents::~InterfaceEvents()
{
}

bool RsvpStandby::Counters::InterfaceEvents::has_data() const
{
    for (std::size_t index=0; index<interface_event.size(); index++)
    {
        if(interface_event[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Counters::InterfaceEvents::has_operation() const
{
    for (std::size_t index=0; index<interface_event.size(); index++)
    {
        if(interface_event[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::Counters::InterfaceEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-events";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::InterfaceEvents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::InterfaceEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-event")
    {
        for(auto const & c : interface_event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::Counters::InterfaceEvents::InterfaceEvent>();
        c->parent = this;
        interface_event.push_back(std::move(c));
        children[segment_path] = interface_event.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::InterfaceEvents::get_children()
{
    for (auto const & c : interface_event)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::Counters::InterfaceEvents::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::InterfaceEvent()
    :
    interface_name{YType::str, "interface-name"},
    expired_paths{YType::uint32, "expired-paths"},
    expired_reservations{YType::uint32, "expired-reservations"},
    nac_ks{YType::uint32, "nac-ks"}
{
    yang_name = "interface-event"; yang_parent_name = "interface-events";
}

RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::~InterfaceEvent()
{
}

bool RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::has_data() const
{
    return interface_name.is_set
	|| expired_paths.is_set
	|| expired_reservations.is_set
	|| nac_ks.is_set;
}

bool RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(expired_paths.operation)
	|| is_set(expired_reservations.operation)
	|| is_set(nac_ks.operation);
}

std::string RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-event" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/interface-events/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (expired_paths.is_set || is_set(expired_paths.operation)) leaf_name_data.push_back(expired_paths.get_name_leafdata());
    if (expired_reservations.is_set || is_set(expired_reservations.operation)) leaf_name_data.push_back(expired_reservations.get_name_leafdata());
    if (nac_ks.is_set || is_set(nac_ks.operation)) leaf_name_data.push_back(nac_ks.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::get_children()
{
    return children;
}

void RsvpStandby::Counters::InterfaceEvents::InterfaceEvent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "expired-paths")
    {
        expired_paths = value;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations = value;
    }
    if(value_path == "nac-ks")
    {
        nac_ks = value;
    }
}

RsvpStandby::Counters::Nsr::Nsr()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    last_idt_states{YType::uint32, "last-idt-states"},
    rsvp_process_role{YType::enumeration, "rsvp-process-role"},
    total_deletions{YType::uint32, "total-deletions"},
    total_id_ts{YType::uint32, "total-id-ts"},
    total_nacks{YType::uint64, "total-nacks"},
    total_states{YType::uint32, "total-states"}
{
    yang_name = "nsr"; yang_parent_name = "counters";
}

RsvpStandby::Counters::Nsr::~Nsr()
{
}

bool RsvpStandby::Counters::Nsr::has_data() const
{
    return last_cleared_timestamp.is_set
	|| last_idt_states.is_set
	|| rsvp_process_role.is_set
	|| total_deletions.is_set
	|| total_id_ts.is_set
	|| total_nacks.is_set
	|| total_states.is_set;
}

bool RsvpStandby::Counters::Nsr::has_operation() const
{
    return is_set(operation)
	|| is_set(last_cleared_timestamp.operation)
	|| is_set(last_idt_states.operation)
	|| is_set(rsvp_process_role.operation)
	|| is_set(total_deletions.operation)
	|| is_set(total_id_ts.operation)
	|| is_set(total_nacks.operation)
	|| is_set(total_states.operation);
}

std::string RsvpStandby::Counters::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.operation)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.operation)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (rsvp_process_role.is_set || is_set(rsvp_process_role.operation)) leaf_name_data.push_back(rsvp_process_role.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.operation)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.operation)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());
    if (total_nacks.is_set || is_set(total_nacks.operation)) leaf_name_data.push_back(total_nacks.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.operation)) leaf_name_data.push_back(total_states.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::Nsr::get_children()
{
    return children;
}

void RsvpStandby::Counters::Nsr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role = value;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
    }
    if(value_path == "total-nacks")
    {
        total_nacks = value;
    }
    if(value_path == "total-states")
    {
        total_states = value;
    }
}

RsvpStandby::Counters::Issu::Issu()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    last_idt_states{YType::uint32, "last-idt-states"},
    rsvp_process_role{YType::enumeration, "rsvp-process-role"},
    total_deletions{YType::uint32, "total-deletions"},
    total_id_ts{YType::uint32, "total-id-ts"},
    total_nacks{YType::uint64, "total-nacks"},
    total_states{YType::uint32, "total-states"}
{
    yang_name = "issu"; yang_parent_name = "counters";
}

RsvpStandby::Counters::Issu::~Issu()
{
}

bool RsvpStandby::Counters::Issu::has_data() const
{
    return last_cleared_timestamp.is_set
	|| last_idt_states.is_set
	|| rsvp_process_role.is_set
	|| total_deletions.is_set
	|| total_id_ts.is_set
	|| total_nacks.is_set
	|| total_states.is_set;
}

bool RsvpStandby::Counters::Issu::has_operation() const
{
    return is_set(operation)
	|| is_set(last_cleared_timestamp.operation)
	|| is_set(last_idt_states.operation)
	|| is_set(rsvp_process_role.operation)
	|| is_set(total_deletions.operation)
	|| is_set(total_id_ts.operation)
	|| is_set(total_nacks.operation)
	|| is_set(total_states.operation);
}

std::string RsvpStandby::Counters::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::Issu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.operation)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.operation)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (rsvp_process_role.is_set || is_set(rsvp_process_role.operation)) leaf_name_data.push_back(rsvp_process_role.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.operation)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.operation)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());
    if (total_nacks.is_set || is_set(total_nacks.operation)) leaf_name_data.push_back(total_nacks.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.operation)) leaf_name_data.push_back(total_states.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::Issu::get_children()
{
    return children;
}

void RsvpStandby::Counters::Issu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
    }
    if(value_path == "rsvp-process-role")
    {
        rsvp_process_role = value;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
    }
    if(value_path == "total-nacks")
    {
        total_nacks = value;
    }
    if(value_path == "total-states")
    {
        total_states = value;
    }
}

RsvpStandby::Counters::Database::Database()
    :
    incoming_paths{YType::uint32, "incoming-paths"},
    incoming_reservations{YType::uint32, "incoming-reservations"},
    interfaces{YType::uint32, "interfaces"},
    outgoing_paths{YType::uint32, "outgoing-paths"},
    outgoing_reservations{YType::uint32, "outgoing-reservations"},
    sessions{YType::uint32, "sessions"}
{
    yang_name = "database"; yang_parent_name = "counters";
}

RsvpStandby::Counters::Database::~Database()
{
}

bool RsvpStandby::Counters::Database::has_data() const
{
    return incoming_paths.is_set
	|| incoming_reservations.is_set
	|| interfaces.is_set
	|| outgoing_paths.is_set
	|| outgoing_reservations.is_set
	|| sessions.is_set;
}

bool RsvpStandby::Counters::Database::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_paths.operation)
	|| is_set(incoming_reservations.operation)
	|| is_set(interfaces.operation)
	|| is_set(outgoing_paths.operation)
	|| is_set(outgoing_reservations.operation)
	|| is_set(sessions.operation);
}

std::string RsvpStandby::Counters::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::Database::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_paths.is_set || is_set(incoming_paths.operation)) leaf_name_data.push_back(incoming_paths.get_name_leafdata());
    if (incoming_reservations.is_set || is_set(incoming_reservations.operation)) leaf_name_data.push_back(incoming_reservations.get_name_leafdata());
    if (interfaces.is_set || is_set(interfaces.operation)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (outgoing_paths.is_set || is_set(outgoing_paths.operation)) leaf_name_data.push_back(outgoing_paths.get_name_leafdata());
    if (outgoing_reservations.is_set || is_set(outgoing_reservations.operation)) leaf_name_data.push_back(outgoing_reservations.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.operation)) leaf_name_data.push_back(sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::Database::get_children()
{
    return children;
}

void RsvpStandby::Counters::Database::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-paths")
    {
        incoming_paths = value;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations = value;
    }
    if(value_path == "interfaces")
    {
        interfaces = value;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths = value;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations = value;
    }
    if(value_path == "sessions")
    {
        sessions = value;
    }
}

RsvpStandby::Counters::EventSyncs::EventSyncs()
{
    yang_name = "event-syncs"; yang_parent_name = "counters";
}

RsvpStandby::Counters::EventSyncs::~EventSyncs()
{
}

bool RsvpStandby::Counters::EventSyncs::has_data() const
{
    for (std::size_t index=0; index<event_sync.size(); index++)
    {
        if(event_sync[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Counters::EventSyncs::has_operation() const
{
    for (std::size_t index=0; index<event_sync.size(); index++)
    {
        if(event_sync[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::Counters::EventSyncs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-syncs";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::EventSyncs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::EventSyncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "event-sync")
    {
        for(auto const & c : event_sync)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::Counters::EventSyncs::EventSync>();
        c->parent = this;
        event_sync.push_back(std::move(c));
        children[segment_path] = event_sync.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::EventSyncs::get_children()
{
    for (auto const & c : event_sync)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::Counters::EventSyncs::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Counters::EventSyncs::EventSync::EventSync()
    :
    interface_name{YType::str, "interface-name"},
    expired_paths{YType::uint32, "expired-paths"},
    expired_reservations{YType::uint32, "expired-reservations"},
    nac_ks{YType::uint32, "nac-ks"}
{
    yang_name = "event-sync"; yang_parent_name = "event-syncs";
}

RsvpStandby::Counters::EventSyncs::EventSync::~EventSync()
{
}

bool RsvpStandby::Counters::EventSyncs::EventSync::has_data() const
{
    return interface_name.is_set
	|| expired_paths.is_set
	|| expired_reservations.is_set
	|| nac_ks.is_set;
}

bool RsvpStandby::Counters::EventSyncs::EventSync::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(expired_paths.operation)
	|| is_set(expired_reservations.operation)
	|| is_set(nac_ks.operation);
}

std::string RsvpStandby::Counters::EventSyncs::EventSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-sync" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::Counters::EventSyncs::EventSync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/counters/event-syncs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (expired_paths.is_set || is_set(expired_paths.operation)) leaf_name_data.push_back(expired_paths.get_name_leafdata());
    if (expired_reservations.is_set || is_set(expired_reservations.operation)) leaf_name_data.push_back(expired_reservations.get_name_leafdata());
    if (nac_ks.is_set || is_set(nac_ks.operation)) leaf_name_data.push_back(nac_ks.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Counters::EventSyncs::EventSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Counters::EventSyncs::EventSync::get_children()
{
    return children;
}

void RsvpStandby::Counters::EventSyncs::EventSync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "expired-paths")
    {
        expired_paths = value;
    }
    if(value_path == "expired-reservations")
    {
        expired_reservations = value;
    }
    if(value_path == "nac-ks")
    {
        nac_ks = value;
    }
}

RsvpStandby::InterfaceDetaileds::InterfaceDetaileds()
{
    yang_name = "interface-detaileds"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::InterfaceDetaileds::~InterfaceDetaileds()
{
}

bool RsvpStandby::InterfaceDetaileds::has_data() const
{
    for (std::size_t index=0; index<interface_detailed.size(); index++)
    {
        if(interface_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::InterfaceDetaileds::has_operation() const
{
    for (std::size_t index=0; index<interface_detailed.size(); index++)
    {
        if(interface_detailed[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::InterfaceDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detaileds";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceDetaileds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-detailed")
    {
        for(auto const & c : interface_detailed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed>();
        c->parent = this;
        interface_detailed.push_back(std::move(c));
        children[segment_path] = interface_detailed.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceDetaileds::get_children()
{
    for (auto const & c : interface_detailed)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::InterfaceDetaileds::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::InterfaceDetailed()
    :
    interface_name{YType::str, "interface-name"},
    ack_hold_time{YType::uint32, "ack-hold-time"},
    ack_max_size{YType::uint32, "ack-max-size"},
    bundle_message_max_size{YType::uint32, "bundle-message-max-size"},
    expiry_drops_tolerated{YType::int32, "expiry-drops-tolerated"},
    expiry_interval{YType::int32, "expiry-interval"},
    expiry_states{YType::int32, "expiry-states"},
    expiry_timer_state{YType::enumeration, "expiry-timer-state"},
    integrity_receive_password{YType::str, "integrity-receive-password"},
    integrity_receive_password_optional{YType::uint8, "integrity-receive-password-optional"},
    integrity_send_password{YType::str, "integrity-send-password"},
    interface_name_xr{YType::str, "interface-name-xr"},
    out_of_band_expiry_drops_tolerated{YType::uint32, "out-of-band-expiry-drops-tolerated"},
    out_of_band_refresh_interval{YType::uint32, "out-of-band-refresh-interval"},
    pacing_interval{YType::uint32, "pacing-interval"},
    pacing_message_rate{YType::uint32, "pacing-message-rate"},
    pacing_messages{YType::int32, "pacing-messages"},
    pacing_timer_state{YType::enumeration, "pacing-timer-state"},
    refresh_interval{YType::int32, "refresh-interval"},
    refresh_timer_state{YType::enumeration, "refresh-timer-state"},
    retransmit_time{YType::uint32, "retransmit-time"},
    signalling_ip_tos{YType::uint8, "signalling-ip-tos"},
    summary_refresh_max_size{YType::uint32, "summary-refresh-max-size"},
    summary_refresh_timer_state{YType::enumeration, "summary-refresh-timer-state"}
    	,
    bandwidth_information(std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation>())
	,flags(std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags>())
{
    bandwidth_information->parent = this;
    children["bandwidth-information"] = bandwidth_information;

    flags->parent = this;
    children["flags"] = flags;

    yang_name = "interface-detailed"; yang_parent_name = "interface-detaileds";
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::~InterfaceDetailed()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::has_data() const
{
    for (std::size_t index=0; index<neighbor_array.size(); index++)
    {
        if(neighbor_array[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| ack_hold_time.is_set
	|| ack_max_size.is_set
	|| bundle_message_max_size.is_set
	|| expiry_drops_tolerated.is_set
	|| expiry_interval.is_set
	|| expiry_states.is_set
	|| expiry_timer_state.is_set
	|| integrity_receive_password.is_set
	|| integrity_receive_password_optional.is_set
	|| integrity_send_password.is_set
	|| interface_name_xr.is_set
	|| out_of_band_expiry_drops_tolerated.is_set
	|| out_of_band_refresh_interval.is_set
	|| pacing_interval.is_set
	|| pacing_message_rate.is_set
	|| pacing_messages.is_set
	|| pacing_timer_state.is_set
	|| refresh_interval.is_set
	|| refresh_timer_state.is_set
	|| retransmit_time.is_set
	|| signalling_ip_tos.is_set
	|| summary_refresh_max_size.is_set
	|| summary_refresh_timer_state.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data())
	|| (flags !=  nullptr && flags->has_data());
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::has_operation() const
{
    for (std::size_t index=0; index<neighbor_array.size(); index++)
    {
        if(neighbor_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(ack_hold_time.operation)
	|| is_set(ack_max_size.operation)
	|| is_set(bundle_message_max_size.operation)
	|| is_set(expiry_drops_tolerated.operation)
	|| is_set(expiry_interval.operation)
	|| is_set(expiry_states.operation)
	|| is_set(expiry_timer_state.operation)
	|| is_set(integrity_receive_password.operation)
	|| is_set(integrity_receive_password_optional.operation)
	|| is_set(integrity_send_password.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(out_of_band_expiry_drops_tolerated.operation)
	|| is_set(out_of_band_refresh_interval.operation)
	|| is_set(pacing_interval.operation)
	|| is_set(pacing_message_rate.operation)
	|| is_set(pacing_messages.operation)
	|| is_set(pacing_timer_state.operation)
	|| is_set(refresh_interval.operation)
	|| is_set(refresh_timer_state.operation)
	|| is_set(retransmit_time.operation)
	|| is_set(signalling_ip_tos.operation)
	|| is_set(summary_refresh_max_size.operation)
	|| is_set(summary_refresh_timer_state.operation)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation())
	|| (flags !=  nullptr && flags->has_operation());
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detailed" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceDetaileds::InterfaceDetailed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/interface-detaileds/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ack_hold_time.is_set || is_set(ack_hold_time.operation)) leaf_name_data.push_back(ack_hold_time.get_name_leafdata());
    if (ack_max_size.is_set || is_set(ack_max_size.operation)) leaf_name_data.push_back(ack_max_size.get_name_leafdata());
    if (bundle_message_max_size.is_set || is_set(bundle_message_max_size.operation)) leaf_name_data.push_back(bundle_message_max_size.get_name_leafdata());
    if (expiry_drops_tolerated.is_set || is_set(expiry_drops_tolerated.operation)) leaf_name_data.push_back(expiry_drops_tolerated.get_name_leafdata());
    if (expiry_interval.is_set || is_set(expiry_interval.operation)) leaf_name_data.push_back(expiry_interval.get_name_leafdata());
    if (expiry_states.is_set || is_set(expiry_states.operation)) leaf_name_data.push_back(expiry_states.get_name_leafdata());
    if (expiry_timer_state.is_set || is_set(expiry_timer_state.operation)) leaf_name_data.push_back(expiry_timer_state.get_name_leafdata());
    if (integrity_receive_password.is_set || is_set(integrity_receive_password.operation)) leaf_name_data.push_back(integrity_receive_password.get_name_leafdata());
    if (integrity_receive_password_optional.is_set || is_set(integrity_receive_password_optional.operation)) leaf_name_data.push_back(integrity_receive_password_optional.get_name_leafdata());
    if (integrity_send_password.is_set || is_set(integrity_send_password.operation)) leaf_name_data.push_back(integrity_send_password.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (out_of_band_expiry_drops_tolerated.is_set || is_set(out_of_band_expiry_drops_tolerated.operation)) leaf_name_data.push_back(out_of_band_expiry_drops_tolerated.get_name_leafdata());
    if (out_of_band_refresh_interval.is_set || is_set(out_of_band_refresh_interval.operation)) leaf_name_data.push_back(out_of_band_refresh_interval.get_name_leafdata());
    if (pacing_interval.is_set || is_set(pacing_interval.operation)) leaf_name_data.push_back(pacing_interval.get_name_leafdata());
    if (pacing_message_rate.is_set || is_set(pacing_message_rate.operation)) leaf_name_data.push_back(pacing_message_rate.get_name_leafdata());
    if (pacing_messages.is_set || is_set(pacing_messages.operation)) leaf_name_data.push_back(pacing_messages.get_name_leafdata());
    if (pacing_timer_state.is_set || is_set(pacing_timer_state.operation)) leaf_name_data.push_back(pacing_timer_state.get_name_leafdata());
    if (refresh_interval.is_set || is_set(refresh_interval.operation)) leaf_name_data.push_back(refresh_interval.get_name_leafdata());
    if (refresh_timer_state.is_set || is_set(refresh_timer_state.operation)) leaf_name_data.push_back(refresh_timer_state.get_name_leafdata());
    if (retransmit_time.is_set || is_set(retransmit_time.operation)) leaf_name_data.push_back(retransmit_time.get_name_leafdata());
    if (signalling_ip_tos.is_set || is_set(signalling_ip_tos.operation)) leaf_name_data.push_back(signalling_ip_tos.get_name_leafdata());
    if (summary_refresh_max_size.is_set || is_set(summary_refresh_max_size.operation)) leaf_name_data.push_back(summary_refresh_max_size.get_name_leafdata());
    if (summary_refresh_timer_state.is_set || is_set(summary_refresh_timer_state.operation)) leaf_name_data.push_back(summary_refresh_timer_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information != nullptr)
        {
            children["bandwidth-information"] = bandwidth_information;
        }
        else
        {
            bandwidth_information = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation>();
            bandwidth_information->parent = this;
            children["bandwidth-information"] = bandwidth_information;
        }
        return children.at("bandwidth-information");
    }

    if(child_yang_name == "flags")
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
        else
        {
            flags = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags>();
            flags->parent = this;
            children["flags"] = flags;
        }
        return children.at("flags");
    }

    if(child_yang_name == "neighbor-array")
    {
        for(auto const & c : neighbor_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray>();
        c->parent = this;
        neighbor_array.push_back(std::move(c));
        children[segment_path] = neighbor_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceDetaileds::InterfaceDetailed::get_children()
{
    if(children.find("bandwidth-information") == children.end())
    {
        if(bandwidth_information != nullptr)
        {
            children["bandwidth-information"] = bandwidth_information;
        }
    }

    if(children.find("flags") == children.end())
    {
        if(flags != nullptr)
        {
            children["flags"] = flags;
        }
    }

    for (auto const & c : neighbor_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ack-hold-time")
    {
        ack_hold_time = value;
    }
    if(value_path == "ack-max-size")
    {
        ack_max_size = value;
    }
    if(value_path == "bundle-message-max-size")
    {
        bundle_message_max_size = value;
    }
    if(value_path == "expiry-drops-tolerated")
    {
        expiry_drops_tolerated = value;
    }
    if(value_path == "expiry-interval")
    {
        expiry_interval = value;
    }
    if(value_path == "expiry-states")
    {
        expiry_states = value;
    }
    if(value_path == "expiry-timer-state")
    {
        expiry_timer_state = value;
    }
    if(value_path == "integrity-receive-password")
    {
        integrity_receive_password = value;
    }
    if(value_path == "integrity-receive-password-optional")
    {
        integrity_receive_password_optional = value;
    }
    if(value_path == "integrity-send-password")
    {
        integrity_send_password = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "out-of-band-expiry-drops-tolerated")
    {
        out_of_band_expiry_drops_tolerated = value;
    }
    if(value_path == "out-of-band-refresh-interval")
    {
        out_of_band_refresh_interval = value;
    }
    if(value_path == "pacing-interval")
    {
        pacing_interval = value;
    }
    if(value_path == "pacing-message-rate")
    {
        pacing_message_rate = value;
    }
    if(value_path == "pacing-messages")
    {
        pacing_messages = value;
    }
    if(value_path == "pacing-timer-state")
    {
        pacing_timer_state = value;
    }
    if(value_path == "refresh-interval")
    {
        refresh_interval = value;
    }
    if(value_path == "refresh-timer-state")
    {
        refresh_timer_state = value;
    }
    if(value_path == "retransmit-time")
    {
        retransmit_time = value;
    }
    if(value_path == "signalling-ip-tos")
    {
        signalling_ip_tos = value;
    }
    if(value_path == "summary-refresh-max-size")
    {
        summary_refresh_max_size = value;
    }
    if(value_path == "summary-refresh-timer-state")
    {
        summary_refresh_timer_state = value;
    }
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
    	,
    pre_standard_dste_interface(std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface>())
	,standard_dste_interface(std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    children["pre-standard-dste-interface"] = pre_standard_dste_interface;

    standard_dste_interface->parent = this;
    children["standard-dste-interface"] = standard_dste_interface;

    yang_name = "bandwidth-information"; yang_parent_name = "interface-detailed";
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::~BandwidthInformation()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::has_data() const
{
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(dste_mode.operation)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthInformation' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.operation)) leaf_name_data.push_back(dste_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface != nullptr)
        {
            children["pre-standard-dste-interface"] = pre_standard_dste_interface;
        }
        else
        {
            pre_standard_dste_interface = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface>();
            pre_standard_dste_interface->parent = this;
            children["pre-standard-dste-interface"] = pre_standard_dste_interface;
        }
        return children.at("pre-standard-dste-interface");
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface != nullptr)
        {
            children["standard-dste-interface"] = standard_dste_interface;
        }
        else
        {
            standard_dste_interface = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface>();
            standard_dste_interface->parent = this;
            children["standard-dste-interface"] = standard_dste_interface;
        }
        return children.at("standard-dste-interface");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::get_children()
{
    if(children.find("pre-standard-dste-interface") == children.end())
    {
        if(pre_standard_dste_interface != nullptr)
        {
            children["pre-standard-dste-interface"] = pre_standard_dste_interface;
        }
    }

    if(children.find("standard-dste-interface") == children.end())
    {
        if(standard_dste_interface != nullptr)
        {
            children["standard-dste-interface"] = standard_dste_interface;
        }
    }

    return children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
    }
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"}
{
    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information";
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_subpool_bandwidth.is_set;
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(allocated_bit_rate.operation)
	|| is_set(is_max_bandwidth_absolute.operation)
	|| is_set(is_max_subpool_bandwidth_absolute.operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_flow_bandwidth.operation)
	|| is_set(max_subpool_bandwidth.operation);
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreStandardDsteInterface' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.operation)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.operation)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.operation)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::get_children()
{
    return children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
    }
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_bc0_bandwidth_absolute{YType::boolean, "is-max-bc0-bandwidth-absolute"},
    is_max_bc1_bandwidth_absolute{YType::boolean, "is-max-bc1-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_pool0_bandwidth{YType::uint64, "max-pool0-bandwidth"},
    max_pool1_bandwidth{YType::uint64, "max-pool1-bandwidth"}
{
    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information";
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_bc0_bandwidth_absolute.is_set
	|| is_max_bc1_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_pool0_bandwidth.is_set
	|| max_pool1_bandwidth.is_set;
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(allocated_bit_rate.operation)
	|| is_set(is_max_bandwidth_absolute.operation)
	|| is_set(is_max_bc0_bandwidth_absolute.operation)
	|| is_set(is_max_bc1_bandwidth_absolute.operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_flow_bandwidth.operation)
	|| is_set(max_pool0_bandwidth.operation)
	|| is_set(max_pool1_bandwidth.operation);
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StandardDsteInterface' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.operation)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.operation)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.operation)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.operation)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::get_children()
{
    return children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
    }
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::Flags()
    :
    is_backup_tunnel{YType::boolean, "is-backup-tunnel"},
    is_interface_created{YType::boolean, "is-interface-created"},
    is_interface_down{YType::boolean, "is-interface-down"},
    is_message_bundling_enabled{YType::boolean, "is-message-bundling-enabled"},
    is_mpls_enabled{YType::boolean, "is-mpls-enabled"},
    is_non_default_vrf{YType::boolean, "is-non-default-vrf"},
    is_pacing_enabled{YType::boolean, "is-pacing-enabled"},
    is_refresh_enabled{YType::boolean, "is-refresh-enabled"},
    is_refresh_reduction_enabled{YType::boolean, "is-refresh-reduction-enabled"},
    is_rel_s_refresh_enabled{YType::boolean, "is-rel-s-refresh-enabled"},
    is_rsvp_configured{YType::boolean, "is-rsvp-configured"},
    is_s_refresh_enabled{YType::boolean, "is-s-refresh-enabled"}
{
    yang_name = "flags"; yang_parent_name = "interface-detailed";
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::~Flags()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::has_data() const
{
    return is_backup_tunnel.is_set
	|| is_interface_created.is_set
	|| is_interface_down.is_set
	|| is_message_bundling_enabled.is_set
	|| is_mpls_enabled.is_set
	|| is_non_default_vrf.is_set
	|| is_pacing_enabled.is_set
	|| is_refresh_enabled.is_set
	|| is_refresh_reduction_enabled.is_set
	|| is_rel_s_refresh_enabled.is_set
	|| is_rsvp_configured.is_set
	|| is_s_refresh_enabled.is_set;
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_backup_tunnel.operation)
	|| is_set(is_interface_created.operation)
	|| is_set(is_interface_down.operation)
	|| is_set(is_message_bundling_enabled.operation)
	|| is_set(is_mpls_enabled.operation)
	|| is_set(is_non_default_vrf.operation)
	|| is_set(is_pacing_enabled.operation)
	|| is_set(is_refresh_enabled.operation)
	|| is_set(is_refresh_reduction_enabled.operation)
	|| is_set(is_rel_s_refresh_enabled.operation)
	|| is_set(is_rsvp_configured.operation)
	|| is_set(is_s_refresh_enabled.operation);
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flags' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_backup_tunnel.is_set || is_set(is_backup_tunnel.operation)) leaf_name_data.push_back(is_backup_tunnel.get_name_leafdata());
    if (is_interface_created.is_set || is_set(is_interface_created.operation)) leaf_name_data.push_back(is_interface_created.get_name_leafdata());
    if (is_interface_down.is_set || is_set(is_interface_down.operation)) leaf_name_data.push_back(is_interface_down.get_name_leafdata());
    if (is_message_bundling_enabled.is_set || is_set(is_message_bundling_enabled.operation)) leaf_name_data.push_back(is_message_bundling_enabled.get_name_leafdata());
    if (is_mpls_enabled.is_set || is_set(is_mpls_enabled.operation)) leaf_name_data.push_back(is_mpls_enabled.get_name_leafdata());
    if (is_non_default_vrf.is_set || is_set(is_non_default_vrf.operation)) leaf_name_data.push_back(is_non_default_vrf.get_name_leafdata());
    if (is_pacing_enabled.is_set || is_set(is_pacing_enabled.operation)) leaf_name_data.push_back(is_pacing_enabled.get_name_leafdata());
    if (is_refresh_enabled.is_set || is_set(is_refresh_enabled.operation)) leaf_name_data.push_back(is_refresh_enabled.get_name_leafdata());
    if (is_refresh_reduction_enabled.is_set || is_set(is_refresh_reduction_enabled.operation)) leaf_name_data.push_back(is_refresh_reduction_enabled.get_name_leafdata());
    if (is_rel_s_refresh_enabled.is_set || is_set(is_rel_s_refresh_enabled.operation)) leaf_name_data.push_back(is_rel_s_refresh_enabled.get_name_leafdata());
    if (is_rsvp_configured.is_set || is_set(is_rsvp_configured.operation)) leaf_name_data.push_back(is_rsvp_configured.get_name_leafdata());
    if (is_s_refresh_enabled.is_set || is_set(is_s_refresh_enabled.operation)) leaf_name_data.push_back(is_s_refresh_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::get_children()
{
    return children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::Flags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-backup-tunnel")
    {
        is_backup_tunnel = value;
    }
    if(value_path == "is-interface-created")
    {
        is_interface_created = value;
    }
    if(value_path == "is-interface-down")
    {
        is_interface_down = value;
    }
    if(value_path == "is-message-bundling-enabled")
    {
        is_message_bundling_enabled = value;
    }
    if(value_path == "is-mpls-enabled")
    {
        is_mpls_enabled = value;
    }
    if(value_path == "is-non-default-vrf")
    {
        is_non_default_vrf = value;
    }
    if(value_path == "is-pacing-enabled")
    {
        is_pacing_enabled = value;
    }
    if(value_path == "is-refresh-enabled")
    {
        is_refresh_enabled = value;
    }
    if(value_path == "is-refresh-reduction-enabled")
    {
        is_refresh_reduction_enabled = value;
    }
    if(value_path == "is-rel-s-refresh-enabled")
    {
        is_rel_s_refresh_enabled = value;
    }
    if(value_path == "is-rsvp-configured")
    {
        is_rsvp_configured = value;
    }
    if(value_path == "is-s-refresh-enabled")
    {
        is_s_refresh_enabled = value;
    }
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborArray()
    :
    is_neighbor_refresh_reduction_capable{YType::boolean, "is-neighbor-refresh-reduction-capable"},
    message_ids{YType::uint32, "message-ids"},
    neighbor_address{YType::str, "neighbor-address"},
    outgoing_states{YType::int32, "outgoing-states"}
    	,
    expiry_time(std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime>())
{
    expiry_time->parent = this;
    children["expiry-time"] = expiry_time;

    yang_name = "neighbor-array"; yang_parent_name = "interface-detailed";
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::~NeighborArray()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::has_data() const
{
    for (std::size_t index=0; index<neighbor_message_id.size(); index++)
    {
        if(neighbor_message_id[index]->has_data())
            return true;
    }
    return is_neighbor_refresh_reduction_capable.is_set
	|| message_ids.is_set
	|| neighbor_address.is_set
	|| outgoing_states.is_set
	|| (expiry_time !=  nullptr && expiry_time->has_data());
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::has_operation() const
{
    for (std::size_t index=0; index<neighbor_message_id.size(); index++)
    {
        if(neighbor_message_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_neighbor_refresh_reduction_capable.operation)
	|| is_set(message_ids.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(outgoing_states.operation)
	|| (expiry_time !=  nullptr && expiry_time->has_operation());
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-array";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborArray' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor_refresh_reduction_capable.is_set || is_set(is_neighbor_refresh_reduction_capable.operation)) leaf_name_data.push_back(is_neighbor_refresh_reduction_capable.get_name_leafdata());
    if (message_ids.is_set || is_set(message_ids.operation)) leaf_name_data.push_back(message_ids.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (outgoing_states.is_set || is_set(outgoing_states.operation)) leaf_name_data.push_back(outgoing_states.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "expiry-time")
    {
        if(expiry_time != nullptr)
        {
            children["expiry-time"] = expiry_time;
        }
        else
        {
            expiry_time = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime>();
            expiry_time->parent = this;
            children["expiry-time"] = expiry_time;
        }
        return children.at("expiry-time");
    }

    if(child_yang_name == "neighbor-message-id")
    {
        for(auto const & c : neighbor_message_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId>();
        c->parent = this;
        neighbor_message_id.push_back(std::move(c));
        children[segment_path] = neighbor_message_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::get_children()
{
    if(children.find("expiry-time") == children.end())
    {
        if(expiry_time != nullptr)
        {
            children["expiry-time"] = expiry_time;
        }
    }

    for (auto const & c : neighbor_message_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-neighbor-refresh-reduction-capable")
    {
        is_neighbor_refresh_reduction_capable = value;
    }
    if(value_path == "message-ids")
    {
        message_ids = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "outgoing-states")
    {
        outgoing_states = value;
    }
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::ExpiryTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "expiry-time"; yang_parent_name = "neighbor-array";
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::~ExpiryTime()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expiry-time";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExpiryTime' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::get_children()
{
    return children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::ExpiryTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::NeighborMessageId()
    :
    message_id{YType::uint32, "message-id"}
{
    yang_name = "neighbor-message-id"; yang_parent_name = "neighbor-array";
}

RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::~NeighborMessageId()
{
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::has_data() const
{
    return message_id.is_set;
}

bool RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::has_operation() const
{
    return is_set(operation)
	|| is_set(message_id.operation);
}

std::string RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-message-id";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborMessageId' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_id.is_set || is_set(message_id.operation)) leaf_name_data.push_back(message_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::get_children()
{
    return children;
}

void RsvpStandby::InterfaceDetaileds::InterfaceDetailed::NeighborArray::NeighborMessageId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message-id")
    {
        message_id = value;
    }
}

RsvpStandby::GracefulRestart::GracefulRestart()
    :
    global_neighbors{YType::uint32, "global-neighbors"},
    hello_interval{YType::uint32, "hello-interval"},
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    is_recovery_timer_running{YType::boolean, "is-recovery-timer-running"},
    missed_hellos{YType::uint8, "missed-hellos"},
    pending_states{YType::uint32, "pending-states"},
    recovery_time{YType::uint32, "recovery-time"},
    restart_time{YType::uint32, "restart-time"}
    	,
    recovery_time_left(std::make_shared<RsvpStandby::GracefulRestart::RecoveryTimeLeft>())
	,recovery_timer_exp_time(std::make_shared<RsvpStandby::GracefulRestart::RecoveryTimerExpTime>())
{
    recovery_time_left->parent = this;
    children["recovery-time-left"] = recovery_time_left;

    recovery_timer_exp_time->parent = this;
    children["recovery-timer-exp-time"] = recovery_timer_exp_time;

    yang_name = "graceful-restart"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::GracefulRestart::~GracefulRestart()
{
}

bool RsvpStandby::GracefulRestart::has_data() const
{
    for (std::size_t index=0; index<local_node_address.size(); index++)
    {
        if(local_node_address[index]->has_data())
            return true;
    }
    return global_neighbors.is_set
	|| hello_interval.is_set
	|| is_gr_enabled.is_set
	|| is_recovery_timer_running.is_set
	|| missed_hellos.is_set
	|| pending_states.is_set
	|| recovery_time.is_set
	|| restart_time.is_set
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_data())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_data());
}

bool RsvpStandby::GracefulRestart::has_operation() const
{
    for (std::size_t index=0; index<local_node_address.size(); index++)
    {
        if(local_node_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(global_neighbors.operation)
	|| is_set(hello_interval.operation)
	|| is_set(is_gr_enabled.operation)
	|| is_set(is_recovery_timer_running.operation)
	|| is_set(missed_hellos.operation)
	|| is_set(pending_states.operation)
	|| is_set(recovery_time.operation)
	|| is_set(restart_time.operation)
	|| (recovery_time_left !=  nullptr && recovery_time_left->has_operation())
	|| (recovery_timer_exp_time !=  nullptr && recovery_timer_exp_time->has_operation());
}

std::string RsvpStandby::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath RsvpStandby::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_neighbors.is_set || is_set(global_neighbors.operation)) leaf_name_data.push_back(global_neighbors.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (is_gr_enabled.is_set || is_set(is_gr_enabled.operation)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.operation)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (missed_hellos.is_set || is_set(missed_hellos.operation)) leaf_name_data.push_back(missed_hellos.get_name_leafdata());
    if (pending_states.is_set || is_set(pending_states.operation)) leaf_name_data.push_back(pending_states.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.operation)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-node-address")
    {
        for(auto const & c : local_node_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::GracefulRestart::LocalNodeAddress>();
        c->parent = this;
        local_node_address.push_back(std::move(c));
        children[segment_path] = local_node_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "recovery-time-left")
    {
        if(recovery_time_left != nullptr)
        {
            children["recovery-time-left"] = recovery_time_left;
        }
        else
        {
            recovery_time_left = std::make_shared<RsvpStandby::GracefulRestart::RecoveryTimeLeft>();
            recovery_time_left->parent = this;
            children["recovery-time-left"] = recovery_time_left;
        }
        return children.at("recovery-time-left");
    }

    if(child_yang_name == "recovery-timer-exp-time")
    {
        if(recovery_timer_exp_time != nullptr)
        {
            children["recovery-timer-exp-time"] = recovery_timer_exp_time;
        }
        else
        {
            recovery_timer_exp_time = std::make_shared<RsvpStandby::GracefulRestart::RecoveryTimerExpTime>();
            recovery_timer_exp_time->parent = this;
            children["recovery-timer-exp-time"] = recovery_timer_exp_time;
        }
        return children.at("recovery-timer-exp-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::GracefulRestart::get_children()
{
    for (auto const & c : local_node_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("recovery-time-left") == children.end())
    {
        if(recovery_time_left != nullptr)
        {
            children["recovery-time-left"] = recovery_time_left;
        }
    }

    if(children.find("recovery-timer-exp-time") == children.end())
    {
        if(recovery_timer_exp_time != nullptr)
        {
            children["recovery-timer-exp-time"] = recovery_timer_exp_time;
        }
    }

    return children;
}

void RsvpStandby::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-neighbors")
    {
        global_neighbors = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
    }
    if(value_path == "missed-hellos")
    {
        missed_hellos = value;
    }
    if(value_path == "pending-states")
    {
        pending_states = value;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
}

RsvpStandby::GracefulRestart::RecoveryTimeLeft::RecoveryTimeLeft()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "recovery-time-left"; yang_parent_name = "graceful-restart";
}

RsvpStandby::GracefulRestart::RecoveryTimeLeft::~RecoveryTimeLeft()
{
}

bool RsvpStandby::GracefulRestart::RecoveryTimeLeft::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool RsvpStandby::GracefulRestart::RecoveryTimeLeft::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string RsvpStandby::GracefulRestart::RecoveryTimeLeft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-time-left";

    return path_buffer.str();

}

EntityPath RsvpStandby::GracefulRestart::RecoveryTimeLeft::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::GracefulRestart::RecoveryTimeLeft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::GracefulRestart::RecoveryTimeLeft::get_children()
{
    return children;
}

void RsvpStandby::GracefulRestart::RecoveryTimeLeft::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

RsvpStandby::GracefulRestart::RecoveryTimerExpTime::RecoveryTimerExpTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "recovery-timer-exp-time"; yang_parent_name = "graceful-restart";
}

RsvpStandby::GracefulRestart::RecoveryTimerExpTime::~RecoveryTimerExpTime()
{
}

bool RsvpStandby::GracefulRestart::RecoveryTimerExpTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool RsvpStandby::GracefulRestart::RecoveryTimerExpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string RsvpStandby::GracefulRestart::RecoveryTimerExpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-timer-exp-time";

    return path_buffer.str();

}

EntityPath RsvpStandby::GracefulRestart::RecoveryTimerExpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::GracefulRestart::RecoveryTimerExpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::GracefulRestart::RecoveryTimerExpTime::get_children()
{
    return children;
}

void RsvpStandby::GracefulRestart::RecoveryTimerExpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

RsvpStandby::GracefulRestart::LocalNodeAddress::LocalNodeAddress()
    :
    application_type{YType::enumeration, "application-type"},
    local_node_ip_address{YType::str, "local-node-ip-address"}
{
    yang_name = "local-node-address"; yang_parent_name = "graceful-restart";
}

RsvpStandby::GracefulRestart::LocalNodeAddress::~LocalNodeAddress()
{
}

bool RsvpStandby::GracefulRestart::LocalNodeAddress::has_data() const
{
    return application_type.is_set
	|| local_node_ip_address.is_set;
}

bool RsvpStandby::GracefulRestart::LocalNodeAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(application_type.operation)
	|| is_set(local_node_ip_address.operation);
}

std::string RsvpStandby::GracefulRestart::LocalNodeAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-node-address";

    return path_buffer.str();

}

EntityPath RsvpStandby::GracefulRestart::LocalNodeAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_type.is_set || is_set(application_type.operation)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (local_node_ip_address.is_set || is_set(local_node_ip_address.operation)) leaf_name_data.push_back(local_node_ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::GracefulRestart::LocalNodeAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::GracefulRestart::LocalNodeAddress::get_children()
{
    return children;
}

void RsvpStandby::GracefulRestart::LocalNodeAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-type")
    {
        application_type = value;
    }
    if(value_path == "local-node-ip-address")
    {
        local_node_ip_address = value;
    }
}

RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBriefs()
{
    yang_name = "hello-interface-instance-briefs"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::HelloInterfaceInstanceBriefs::~HelloInterfaceInstanceBriefs()
{
}

bool RsvpStandby::HelloInterfaceInstanceBriefs::has_data() const
{
    for (std::size_t index=0; index<hello_interface_instance_brief.size(); index++)
    {
        if(hello_interface_instance_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::HelloInterfaceInstanceBriefs::has_operation() const
{
    for (std::size_t index=0; index<hello_interface_instance_brief.size(); index++)
    {
        if(hello_interface_instance_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::HelloInterfaceInstanceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-briefs";

    return path_buffer.str();

}

EntityPath RsvpStandby::HelloInterfaceInstanceBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::HelloInterfaceInstanceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-interface-instance-brief")
    {
        for(auto const & c : hello_interface_instance_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief>();
        c->parent = this;
        hello_interface_instance_brief.push_back(std::move(c));
        children[segment_path] = hello_interface_instance_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::HelloInterfaceInstanceBriefs::get_children()
{
    for (auto const & c : hello_interface_instance_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::HelloInterfaceInstanceBriefs::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::HelloInterfaceInstanceBrief()
    :
    destination_address{YType::str, "destination-address"},
    source_address{YType::str, "source-address"},
    destination_address_xr{YType::str, "destination-address-xr"},
    hello_interface{YType::str, "hello-interface"},
    instance_type{YType::enumeration, "instance-type"},
    source_address_xr{YType::str, "source-address-xr"}
{
    yang_name = "hello-interface-instance-brief"; yang_parent_name = "hello-interface-instance-briefs";
}

RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::~HelloInterfaceInstanceBrief()
{
}

bool RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::has_data() const
{
    return destination_address.is_set
	|| source_address.is_set
	|| destination_address_xr.is_set
	|| hello_interface.is_set
	|| instance_type.is_set
	|| source_address_xr.is_set;
}

bool RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(source_address.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(hello_interface.operation)
	|| is_set(instance_type.operation)
	|| is_set(source_address_xr.operation);
}

std::string RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-brief" <<"[destination-address='" <<destination_address <<"']" <<"[source-address='" <<source_address <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/hello-interface-instance-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.operation)) leaf_name_data.push_back(hello_interface.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.operation)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.operation)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::get_children()
{
    return children;
}

void RsvpStandby::HelloInterfaceInstanceBriefs::HelloInterfaceInstanceBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "hello-interface")
    {
        hello_interface = value;
    }
    if(value_path == "instance-type")
    {
        instance_type = value;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
    }
}

RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetails()
{
    yang_name = "hello-interface-instance-details"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::HelloInterfaceInstanceDetails::~HelloInterfaceInstanceDetails()
{
}

bool RsvpStandby::HelloInterfaceInstanceDetails::has_data() const
{
    for (std::size_t index=0; index<hello_interface_instance_detail.size(); index++)
    {
        if(hello_interface_instance_detail[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::HelloInterfaceInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<hello_interface_instance_detail.size(); index++)
    {
        if(hello_interface_instance_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::HelloInterfaceInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-details";

    return path_buffer.str();

}

EntityPath RsvpStandby::HelloInterfaceInstanceDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::HelloInterfaceInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-interface-instance-detail")
    {
        for(auto const & c : hello_interface_instance_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail>();
        c->parent = this;
        hello_interface_instance_detail.push_back(std::move(c));
        children[segment_path] = hello_interface_instance_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::HelloInterfaceInstanceDetails::get_children()
{
    for (auto const & c : hello_interface_instance_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::HelloInterfaceInstanceDetails::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::HelloInterfaceInstanceDetail()
    :
    destination_address{YType::str, "destination-address"},
    source_address{YType::str, "source-address"},
    destination_address_xr{YType::str, "destination-address-xr"},
    destination_instance{YType::uint32, "destination-instance"},
    hello_global_neighbor_id{YType::str, "hello-global-neighbor-id"},
    hello_interface{YType::str, "hello-interface"},
    hello_messages_received{YType::uint64, "hello-messages-received"},
    hello_messages_sent{YType::uint64, "hello-messages-sent"},
    instance_type{YType::enumeration, "instance-type"},
    source_address_xr{YType::str, "source-address-xr"},
    source_instance{YType::uint32, "source-instance"}
    	,
    last_message_sent_time(std::make_shared<RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime>())
{
    last_message_sent_time->parent = this;
    children["last-message-sent-time"] = last_message_sent_time;

    yang_name = "hello-interface-instance-detail"; yang_parent_name = "hello-interface-instance-details";
}

RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::~HelloInterfaceInstanceDetail()
{
}

bool RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::has_data() const
{
    return destination_address.is_set
	|| source_address.is_set
	|| destination_address_xr.is_set
	|| destination_instance.is_set
	|| hello_global_neighbor_id.is_set
	|| hello_interface.is_set
	|| hello_messages_received.is_set
	|| hello_messages_sent.is_set
	|| instance_type.is_set
	|| source_address_xr.is_set
	|| source_instance.is_set
	|| (last_message_sent_time !=  nullptr && last_message_sent_time->has_data());
}

bool RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(source_address.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(destination_instance.operation)
	|| is_set(hello_global_neighbor_id.operation)
	|| is_set(hello_interface.operation)
	|| is_set(hello_messages_received.operation)
	|| is_set(hello_messages_sent.operation)
	|| is_set(instance_type.operation)
	|| is_set(source_address_xr.operation)
	|| is_set(source_instance.operation)
	|| (last_message_sent_time !=  nullptr && last_message_sent_time->has_operation());
}

std::string RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interface-instance-detail" <<"[destination-address='" <<destination_address <<"']" <<"[source-address='" <<source_address <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/hello-interface-instance-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (destination_instance.is_set || is_set(destination_instance.operation)) leaf_name_data.push_back(destination_instance.get_name_leafdata());
    if (hello_global_neighbor_id.is_set || is_set(hello_global_neighbor_id.operation)) leaf_name_data.push_back(hello_global_neighbor_id.get_name_leafdata());
    if (hello_interface.is_set || is_set(hello_interface.operation)) leaf_name_data.push_back(hello_interface.get_name_leafdata());
    if (hello_messages_received.is_set || is_set(hello_messages_received.operation)) leaf_name_data.push_back(hello_messages_received.get_name_leafdata());
    if (hello_messages_sent.is_set || is_set(hello_messages_sent.operation)) leaf_name_data.push_back(hello_messages_sent.get_name_leafdata());
    if (instance_type.is_set || is_set(instance_type.operation)) leaf_name_data.push_back(instance_type.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.operation)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (source_instance.is_set || is_set(source_instance.operation)) leaf_name_data.push_back(source_instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-message-sent-time")
    {
        if(last_message_sent_time != nullptr)
        {
            children["last-message-sent-time"] = last_message_sent_time;
        }
        else
        {
            last_message_sent_time = std::make_shared<RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime>();
            last_message_sent_time->parent = this;
            children["last-message-sent-time"] = last_message_sent_time;
        }
        return children.at("last-message-sent-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::get_children()
{
    if(children.find("last-message-sent-time") == children.end())
    {
        if(last_message_sent_time != nullptr)
        {
            children["last-message-sent-time"] = last_message_sent_time;
        }
    }

    return children;
}

void RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "destination-instance")
    {
        destination_instance = value;
    }
    if(value_path == "hello-global-neighbor-id")
    {
        hello_global_neighbor_id = value;
    }
    if(value_path == "hello-interface")
    {
        hello_interface = value;
    }
    if(value_path == "hello-messages-received")
    {
        hello_messages_received = value;
    }
    if(value_path == "hello-messages-sent")
    {
        hello_messages_sent = value;
    }
    if(value_path == "instance-type")
    {
        instance_type = value;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
    }
    if(value_path == "source-instance")
    {
        source_instance = value;
    }
}

RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::LastMessageSentTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "last-message-sent-time"; yang_parent_name = "hello-interface-instance-detail";
}

RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::~LastMessageSentTime()
{
}

bool RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-message-sent-time";

    return path_buffer.str();

}

EntityPath RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastMessageSentTime' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::get_children()
{
    return children;
}

void RsvpStandby::HelloInterfaceInstanceDetails::HelloInterfaceInstanceDetail::LastMessageSentTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetails()
{
    yang_name = "interface-neighbor-details"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::InterfaceNeighborDetails::~InterfaceNeighborDetails()
{
}

bool RsvpStandby::InterfaceNeighborDetails::has_data() const
{
    for (std::size_t index=0; index<interface_neighbor_detail.size(); index++)
    {
        if(interface_neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::InterfaceNeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor_detail.size(); index++)
    {
        if(interface_neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::InterfaceNeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-details";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceNeighborDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceNeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-neighbor-detail")
    {
        for(auto const & c : interface_neighbor_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail>();
        c->parent = this;
        interface_neighbor_detail.push_back(std::move(c));
        children[segment_path] = interface_neighbor_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceNeighborDetails::get_children()
{
    for (auto const & c : interface_neighbor_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::InterfaceNeighborDetails::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborDetail()
    :
    neighbor_address{YType::str, "neighbor-address"},
    node_address{YType::str, "node-address"}
{
    yang_name = "interface-neighbor-detail"; yang_parent_name = "interface-neighbor-details";
}

RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::~InterfaceNeighborDetail()
{
}

bool RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::has_data() const
{
    for (std::size_t index=0; index<interface_neighbor_list_detail.size(); index++)
    {
        if(interface_neighbor_list_detail[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| node_address.is_set;
}

bool RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::has_operation() const
{
    for (std::size_t index=0; index<interface_neighbor_list_detail.size(); index++)
    {
        if(interface_neighbor_list_detail[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(node_address.operation);
}

std::string RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-detail" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/interface-neighbor-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.operation)) leaf_name_data.push_back(node_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-neighbor-list-detail")
    {
        for(auto const & c : interface_neighbor_list_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail>();
        c->parent = this;
        interface_neighbor_list_detail.push_back(std::move(c));
        children[segment_path] = interface_neighbor_list_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::get_children()
{
    for (auto const & c : interface_neighbor_list_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "node-address")
    {
        node_address = value;
    }
}

RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::InterfaceNeighborListDetail()
    :
    interface_neighbor_address{YType::str, "interface-neighbor-address"},
    is_rr_enabled{YType::boolean, "is-rr-enabled"},
    neighbor_epoch{YType::uint32, "neighbor-epoch"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    out_of_order_messages{YType::uint32, "out-of-order-messages"},
    retransmitted_messages{YType::uint32, "retransmitted-messages"}
{
    yang_name = "interface-neighbor-list-detail"; yang_parent_name = "interface-neighbor-detail";
}

RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::~InterfaceNeighborListDetail()
{
}

bool RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::has_data() const
{
    return interface_neighbor_address.is_set
	|| is_rr_enabled.is_set
	|| neighbor_epoch.is_set
	|| neighbor_interface_name.is_set
	|| out_of_order_messages.is_set
	|| retransmitted_messages.is_set;
}

bool RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_neighbor_address.operation)
	|| is_set(is_rr_enabled.operation)
	|| is_set(neighbor_epoch.operation)
	|| is_set(neighbor_interface_name.operation)
	|| is_set(out_of_order_messages.operation)
	|| is_set(retransmitted_messages.operation);
}

std::string RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-neighbor-list-detail";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceNeighborListDetail' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_neighbor_address.is_set || is_set(interface_neighbor_address.operation)) leaf_name_data.push_back(interface_neighbor_address.get_name_leafdata());
    if (is_rr_enabled.is_set || is_set(is_rr_enabled.operation)) leaf_name_data.push_back(is_rr_enabled.get_name_leafdata());
    if (neighbor_epoch.is_set || is_set(neighbor_epoch.operation)) leaf_name_data.push_back(neighbor_epoch.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.operation)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (out_of_order_messages.is_set || is_set(out_of_order_messages.operation)) leaf_name_data.push_back(out_of_order_messages.get_name_leafdata());
    if (retransmitted_messages.is_set || is_set(retransmitted_messages.operation)) leaf_name_data.push_back(retransmitted_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::get_children()
{
    return children;
}

void RsvpStandby::InterfaceNeighborDetails::InterfaceNeighborDetail::InterfaceNeighborListDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-neighbor-address")
    {
        interface_neighbor_address = value;
    }
    if(value_path == "is-rr-enabled")
    {
        is_rr_enabled = value;
    }
    if(value_path == "neighbor-epoch")
    {
        neighbor_epoch = value;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
    }
    if(value_path == "out-of-order-messages")
    {
        out_of_order_messages = value;
    }
    if(value_path == "retransmitted-messages")
    {
        retransmitted_messages = value;
    }
}

RsvpStandby::Nsr::Nsr()
    :
    status(std::make_shared<RsvpStandby::Nsr::Status>())
{
    status->parent = this;
    children["status"] = status;

    yang_name = "nsr"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::Nsr::~Nsr()
{
}

bool RsvpStandby::Nsr::has_data() const
{
    return (status !=  nullptr && status->has_data());
}

bool RsvpStandby::Nsr::has_operation() const
{
    return is_set(operation)
	|| (status !=  nullptr && status->has_operation());
}

std::string RsvpStandby::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

EntityPath RsvpStandby::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "status")
    {
        if(status != nullptr)
        {
            children["status"] = status;
        }
        else
        {
            status = std::make_shared<RsvpStandby::Nsr::Status>();
            status->parent = this;
            children["status"] = status;
        }
        return children.at("status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Nsr::get_children()
{
    if(children.find("status") == children.end())
    {
        if(status != nullptr)
        {
            children["status"] = status;
        }
    }

    return children;
}

void RsvpStandby::Nsr::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Nsr::Status::Status()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<RsvpStandby::Nsr::Status::IdtStatus>())
	,previous_idt_status(std::make_shared<RsvpStandby::Nsr::Status::PreviousIdtStatus>())
{
    idt_status->parent = this;
    children["idt-status"] = idt_status;

    previous_idt_status->parent = this;
    children["previous-idt-status"] = previous_idt_status;

    yang_name = "status"; yang_parent_name = "nsr";
}

RsvpStandby::Nsr::Status::~Status()
{
}

bool RsvpStandby::Nsr::Status::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool RsvpStandby::Nsr::Status::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string RsvpStandby::Nsr::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

EntityPath RsvpStandby::Nsr::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/nsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Nsr::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt-status")
    {
        if(idt_status != nullptr)
        {
            children["idt-status"] = idt_status;
        }
        else
        {
            idt_status = std::make_shared<RsvpStandby::Nsr::Status::IdtStatus>();
            idt_status->parent = this;
            children["idt-status"] = idt_status;
        }
        return children.at("idt-status");
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
        else
        {
            previous_idt_status = std::make_shared<RsvpStandby::Nsr::Status::PreviousIdtStatus>();
            previous_idt_status->parent = this;
            children["previous-idt-status"] = previous_idt_status;
        }
        return children.at("previous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Nsr::Status::get_children()
{
    if(children.find("idt-status") == children.end())
    {
        if(idt_status != nullptr)
        {
            children["idt-status"] = idt_status;
        }
    }

    if(children.find("previous-idt-status") == children.end())
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
    }

    return children;
}

void RsvpStandby::Nsr::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

RsvpStandby::Nsr::Status::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "idt-status"; yang_parent_name = "status";
}

RsvpStandby::Nsr::Status::IdtStatus::~IdtStatus()
{
}

bool RsvpStandby::Nsr::Status::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Nsr::Status::IdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string RsvpStandby::Nsr::Status::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";

    return path_buffer.str();

}

EntityPath RsvpStandby::Nsr::Status::IdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/nsr/status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Nsr::Status::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Nsr::Status::IdtStatus::get_children()
{
    return children;
}

void RsvpStandby::Nsr::Status::IdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

RsvpStandby::Nsr::Status::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "status";
}

RsvpStandby::Nsr::Status::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool RsvpStandby::Nsr::Status::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Nsr::Status::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string RsvpStandby::Nsr::Status::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

EntityPath RsvpStandby::Nsr::Status::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/nsr/status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Nsr::Status::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Nsr::Status::PreviousIdtStatus::get_children()
{
    return children;
}

void RsvpStandby::Nsr::Status::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

RsvpStandby::Summary::Summary()
    :
    interfaces{YType::uint32, "interfaces"},
    ls_ps{YType::uint32, "ls-ps"}
    	,
    database_counters(std::make_shared<RsvpStandby::Summary::DatabaseCounters>())
	,issu_status(std::make_shared<RsvpStandby::Summary::IssuStatus>())
	,nsr_status(std::make_shared<RsvpStandby::Summary::NsrStatus>())
{
    database_counters->parent = this;
    children["database-counters"] = database_counters;

    issu_status->parent = this;
    children["issu-status"] = issu_status;

    nsr_status->parent = this;
    children["nsr-status"] = nsr_status;

    yang_name = "summary"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::Summary::~Summary()
{
}

bool RsvpStandby::Summary::has_data() const
{
    return interfaces.is_set
	|| ls_ps.is_set
	|| (database_counters !=  nullptr && database_counters->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data());
}

bool RsvpStandby::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(interfaces.operation)
	|| is_set(ls_ps.operation)
	|| (database_counters !=  nullptr && database_counters->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation());
}

std::string RsvpStandby::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath RsvpStandby::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces.is_set || is_set(interfaces.operation)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.operation)) leaf_name_data.push_back(ls_ps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "database-counters")
    {
        if(database_counters != nullptr)
        {
            children["database-counters"] = database_counters;
        }
        else
        {
            database_counters = std::make_shared<RsvpStandby::Summary::DatabaseCounters>();
            database_counters->parent = this;
            children["database-counters"] = database_counters;
        }
        return children.at("database-counters");
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status != nullptr)
        {
            children["issu-status"] = issu_status;
        }
        else
        {
            issu_status = std::make_shared<RsvpStandby::Summary::IssuStatus>();
            issu_status->parent = this;
            children["issu-status"] = issu_status;
        }
        return children.at("issu-status");
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status != nullptr)
        {
            children["nsr-status"] = nsr_status;
        }
        else
        {
            nsr_status = std::make_shared<RsvpStandby::Summary::NsrStatus>();
            nsr_status->parent = this;
            children["nsr-status"] = nsr_status;
        }
        return children.at("nsr-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Summary::get_children()
{
    if(children.find("database-counters") == children.end())
    {
        if(database_counters != nullptr)
        {
            children["database-counters"] = database_counters;
        }
    }

    if(children.find("issu-status") == children.end())
    {
        if(issu_status != nullptr)
        {
            children["issu-status"] = issu_status;
        }
    }

    if(children.find("nsr-status") == children.end())
    {
        if(nsr_status != nullptr)
        {
            children["nsr-status"] = nsr_status;
        }
    }

    return children;
}

void RsvpStandby::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interfaces")
    {
        interfaces = value;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
    }
}

RsvpStandby::Summary::IssuStatus::IssuStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<RsvpStandby::Summary::IssuStatus::IdtStatus>())
	,previous_idt_status(std::make_shared<RsvpStandby::Summary::IssuStatus::PreviousIdtStatus>())
{
    idt_status->parent = this;
    children["idt-status"] = idt_status;

    previous_idt_status->parent = this;
    children["previous-idt-status"] = previous_idt_status;

    yang_name = "issu-status"; yang_parent_name = "summary";
}

RsvpStandby::Summary::IssuStatus::~IssuStatus()
{
}

bool RsvpStandby::Summary::IssuStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool RsvpStandby::Summary::IssuStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string RsvpStandby::Summary::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";

    return path_buffer.str();

}

EntityPath RsvpStandby::Summary::IssuStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Summary::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt-status")
    {
        if(idt_status != nullptr)
        {
            children["idt-status"] = idt_status;
        }
        else
        {
            idt_status = std::make_shared<RsvpStandby::Summary::IssuStatus::IdtStatus>();
            idt_status->parent = this;
            children["idt-status"] = idt_status;
        }
        return children.at("idt-status");
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
        else
        {
            previous_idt_status = std::make_shared<RsvpStandby::Summary::IssuStatus::PreviousIdtStatus>();
            previous_idt_status->parent = this;
            children["previous-idt-status"] = previous_idt_status;
        }
        return children.at("previous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Summary::IssuStatus::get_children()
{
    if(children.find("idt-status") == children.end())
    {
        if(idt_status != nullptr)
        {
            children["idt-status"] = idt_status;
        }
    }

    if(children.find("previous-idt-status") == children.end())
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
    }

    return children;
}

void RsvpStandby::Summary::IssuStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

RsvpStandby::Summary::IssuStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "idt-status"; yang_parent_name = "issu-status";
}

RsvpStandby::Summary::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool RsvpStandby::Summary::IssuStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Summary::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string RsvpStandby::Summary::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";

    return path_buffer.str();

}

EntityPath RsvpStandby::Summary::IssuStatus::IdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/issu-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Summary::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Summary::IssuStatus::IdtStatus::get_children()
{
    return children;
}

void RsvpStandby::Summary::IssuStatus::IdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "issu-status";
}

RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

EntityPath RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/issu-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::get_children()
{
    return children;
}

void RsvpStandby::Summary::IssuStatus::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

RsvpStandby::Summary::NsrStatus::NsrStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<RsvpStandby::Summary::NsrStatus::IdtStatus>())
	,previous_idt_status(std::make_shared<RsvpStandby::Summary::NsrStatus::PreviousIdtStatus>())
{
    idt_status->parent = this;
    children["idt-status"] = idt_status;

    previous_idt_status->parent = this;
    children["previous-idt-status"] = previous_idt_status;

    yang_name = "nsr-status"; yang_parent_name = "summary";
}

RsvpStandby::Summary::NsrStatus::~NsrStatus()
{
}

bool RsvpStandby::Summary::NsrStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool RsvpStandby::Summary::NsrStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string RsvpStandby::Summary::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";

    return path_buffer.str();

}

EntityPath RsvpStandby::Summary::NsrStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Summary::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt-status")
    {
        if(idt_status != nullptr)
        {
            children["idt-status"] = idt_status;
        }
        else
        {
            idt_status = std::make_shared<RsvpStandby::Summary::NsrStatus::IdtStatus>();
            idt_status->parent = this;
            children["idt-status"] = idt_status;
        }
        return children.at("idt-status");
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
        else
        {
            previous_idt_status = std::make_shared<RsvpStandby::Summary::NsrStatus::PreviousIdtStatus>();
            previous_idt_status->parent = this;
            children["previous-idt-status"] = previous_idt_status;
        }
        return children.at("previous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Summary::NsrStatus::get_children()
{
    if(children.find("idt-status") == children.end())
    {
        if(idt_status != nullptr)
        {
            children["idt-status"] = idt_status;
        }
    }

    if(children.find("previous-idt-status") == children.end())
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
    }

    return children;
}

void RsvpStandby::Summary::NsrStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

RsvpStandby::Summary::NsrStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "idt-status"; yang_parent_name = "nsr-status";
}

RsvpStandby::Summary::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool RsvpStandby::Summary::NsrStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Summary::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string RsvpStandby::Summary::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";

    return path_buffer.str();

}

EntityPath RsvpStandby::Summary::NsrStatus::IdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/nsr-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Summary::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Summary::NsrStatus::IdtStatus::get_children()
{
    return children;
}

void RsvpStandby::Summary::NsrStatus::IdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "nsr-status";
}

RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(not_ready_reason.operation)
	|| is_set(sync_status.operation)
	|| is_set(withdraw_time.operation);
}

std::string RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

EntityPath RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/nsr-status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.operation)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.operation)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::get_children()
{
    return children;
}

void RsvpStandby::Summary::NsrStatus::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

RsvpStandby::Summary::DatabaseCounters::DatabaseCounters()
    :
    incoming_paths{YType::uint32, "incoming-paths"},
    incoming_reservations{YType::uint32, "incoming-reservations"},
    interfaces{YType::uint32, "interfaces"},
    outgoing_paths{YType::uint32, "outgoing-paths"},
    outgoing_reservations{YType::uint32, "outgoing-reservations"},
    sessions{YType::uint32, "sessions"}
{
    yang_name = "database-counters"; yang_parent_name = "summary";
}

RsvpStandby::Summary::DatabaseCounters::~DatabaseCounters()
{
}

bool RsvpStandby::Summary::DatabaseCounters::has_data() const
{
    return incoming_paths.is_set
	|| incoming_reservations.is_set
	|| interfaces.is_set
	|| outgoing_paths.is_set
	|| outgoing_reservations.is_set
	|| sessions.is_set;
}

bool RsvpStandby::Summary::DatabaseCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(incoming_paths.operation)
	|| is_set(incoming_reservations.operation)
	|| is_set(interfaces.operation)
	|| is_set(outgoing_paths.operation)
	|| is_set(outgoing_reservations.operation)
	|| is_set(sessions.operation);
}

std::string RsvpStandby::Summary::DatabaseCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-counters";

    return path_buffer.str();

}

EntityPath RsvpStandby::Summary::DatabaseCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_paths.is_set || is_set(incoming_paths.operation)) leaf_name_data.push_back(incoming_paths.get_name_leafdata());
    if (incoming_reservations.is_set || is_set(incoming_reservations.operation)) leaf_name_data.push_back(incoming_reservations.get_name_leafdata());
    if (interfaces.is_set || is_set(interfaces.operation)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (outgoing_paths.is_set || is_set(outgoing_paths.operation)) leaf_name_data.push_back(outgoing_paths.get_name_leafdata());
    if (outgoing_reservations.is_set || is_set(outgoing_reservations.operation)) leaf_name_data.push_back(outgoing_reservations.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.operation)) leaf_name_data.push_back(sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Summary::DatabaseCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Summary::DatabaseCounters::get_children()
{
    return children;
}

void RsvpStandby::Summary::DatabaseCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "incoming-paths")
    {
        incoming_paths = value;
    }
    if(value_path == "incoming-reservations")
    {
        incoming_reservations = value;
    }
    if(value_path == "interfaces")
    {
        interfaces = value;
    }
    if(value_path == "outgoing-paths")
    {
        outgoing_paths = value;
    }
    if(value_path == "outgoing-reservations")
    {
        outgoing_reservations = value;
    }
    if(value_path == "sessions")
    {
        sessions = value;
    }
}

RsvpStandby::Frrs::Frrs()
{
    yang_name = "frrs"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::Frrs::~Frrs()
{
}

bool RsvpStandby::Frrs::has_data() const
{
    for (std::size_t index=0; index<frr.size(); index++)
    {
        if(frr[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::Frrs::has_operation() const
{
    for (std::size_t index=0; index<frr.size(); index++)
    {
        if(frr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::Frrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrs";

    return path_buffer.str();

}

EntityPath RsvpStandby::Frrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Frrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr")
    {
        for(auto const & c : frr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::Frrs::Frr>();
        c->parent = this;
        frr.push_back(std::move(c));
        children[segment_path] = frr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Frrs::get_children()
{
    for (auto const & c : frr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::Frrs::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Frrs::Frr::Frr()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    path_status{YType::enumeration, "path-status"},
    protocol{YType::int32, "protocol"},
    reservation_status{YType::enumeration, "reservation-status"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    s2l_sub_lsp(std::make_shared<RsvpStandby::Frrs::Frr::S2LSubLsp>())
	,session(std::make_shared<RsvpStandby::Frrs::Frr::Session>())
{
    s2l_sub_lsp->parent = this;
    children["s2l-sub-lsp"] = s2l_sub_lsp;

    session->parent = this;
    children["session"] = session;

    yang_name = "frr"; yang_parent_name = "frrs";
}

RsvpStandby::Frrs::Frr::~Frr()
{
}

bool RsvpStandby::Frrs::Frr::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| path_status.is_set
	|| protocol.is_set
	|| reservation_status.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool RsvpStandby::Frrs::Frr::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(path_status.operation)
	|| is_set(protocol.operation)
	|| is_set(reservation_status.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_origin.operation)
	|| is_set(vrf_name.operation)
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string RsvpStandby::Frrs::Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr";

    return path_buffer.str();

}

EntityPath RsvpStandby::Frrs::Frr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (path_status.is_set || is_set(path_status.operation)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (reservation_status.is_set || is_set(reservation_status.operation)) leaf_name_data.push_back(reservation_status.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.operation)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Frrs::Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        else
        {
            s2l_sub_lsp = std::make_shared<RsvpStandby::Frrs::Frr::S2LSubLsp>();
            s2l_sub_lsp->parent = this;
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        return children.at("s2l-sub-lsp");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<RsvpStandby::Frrs::Frr::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Frrs::Frr::get_children()
{
    if(children.find("s2l-sub-lsp") == children.end())
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    return children;
}

void RsvpStandby::Frrs::Frr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "path-status")
    {
        path_status = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "reservation-status")
    {
        reservation_status = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RsvpStandby::Frrs::Frr::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession>())
{
    rsvp_session->parent = this;
    children["rsvp-session"] = rsvp_session;

    yang_name = "session"; yang_parent_name = "frr";
}

RsvpStandby::Frrs::Frr::Session::~Session()
{
}

bool RsvpStandby::Frrs::Frr::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::Frrs::Frr::Session::has_operation() const
{
    return is_set(operation)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::Frrs::Frr::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath RsvpStandby::Frrs::Frr::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Frrs::Frr::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
        else
        {
            rsvp_session = std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession>();
            rsvp_session->parent = this;
            children["rsvp-session"] = rsvp_session;
        }
        return children.at("rsvp-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Frrs::Frr::Session::get_children()
{
    if(children.find("rsvp-session") == children.end())
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
    }

    return children;
}

void RsvpStandby::Frrs::Frr::Session::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv4_lsp_session->parent = this;
    children["ipv4-lsp-session"] = ipv4_lsp_session;

    ipv4_p2mp_lsp_session->parent = this;
    children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;

    ipv4_uni_session->parent = this;
    children["ipv4-uni-session"] = ipv4_uni_session;

    yang_name = "rsvp-session"; yang_parent_name = "session";
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_type.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::Frrs::Frr::Session::RsvpSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Frrs::Frr::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        else
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession>();
            ipv4_lsp_session->parent = this;
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        return children.at("ipv4-lsp-session");
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        else
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession>();
            ipv4_p2mp_lsp_session->parent = this;
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        return children.at("ipv4-p2mp-lsp-session");
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        else
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession>();
            ipv4_uni_session->parent = this;
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        return children.at("ipv4-uni-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Frrs::Frr::Session::RsvpSession::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv4-lsp-session") == children.end())
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
    }

    if(children.find("ipv4-p2mp-lsp-session") == children.end())
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
    }

    if(children.find("ipv4-uni-session") == children.end())
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
    }

    return children;
}

void RsvpStandby::Frrs::Frr::Session::RsvpSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-type")
    {
        session_type = value;
    }
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{
    yang_name = "ipv4"; yang_parent_name = "rsvp-session";
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(protocol.operation);
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::get_children()
{
    return children;
}

void RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::get_children()
{
    return children;
}

void RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.operation)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::get_children()
{
    return children;
}

void RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::get_children()
{
    return children;
}

void RsvpStandby::Frrs::Frr::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::Frrs::Frr::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{
    yang_name = "s2l-sub-lsp"; yang_parent_name = "frr";
}

RsvpStandby::Frrs::Frr::S2LSubLsp::~S2LSubLsp()
{
}

bool RsvpStandby::Frrs::Frr::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool RsvpStandby::Frrs::Frr::S2LSubLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_destination_address.operation);
}

std::string RsvpStandby::Frrs::Frr::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";

    return path_buffer.str();

}

EntityPath RsvpStandby::Frrs::Frr::S2LSubLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/frrs/frr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.operation)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::Frrs::Frr::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::Frrs::Frr::S2LSubLsp::get_children()
{
    return children;
}

void RsvpStandby::Frrs::Frr::S2LSubLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
    }
}

RsvpStandby::RequestBriefs::RequestBriefs()
{
    yang_name = "request-briefs"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::RequestBriefs::~RequestBriefs()
{
}

bool RsvpStandby::RequestBriefs::has_data() const
{
    for (std::size_t index=0; index<request_brief.size(); index++)
    {
        if(request_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::RequestBriefs::has_operation() const
{
    for (std::size_t index=0; index<request_brief.size(); index++)
    {
        if(request_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::RequestBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-briefs";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "request-brief")
    {
        for(auto const & c : request_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief>();
        c->parent = this;
        request_brief.push_back(std::move(c));
        children[segment_path] = request_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::get_children()
{
    for (auto const & c : request_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::RequestBriefs::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::RequestBriefs::RequestBrief::RequestBrief()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    output_interface{YType::str, "output-interface"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    filter(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter>())
	,flow_spec(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::FlowSpec>())
	,generic_flow_spec(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec>())
	,s2l_sub_lsp(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp>())
	,session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session>())
	,style(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Style>())
{
    filter->parent = this;
    children["filter"] = filter;

    flow_spec->parent = this;
    children["flow-spec"] = flow_spec;

    generic_flow_spec->parent = this;
    children["generic-flow-spec"] = generic_flow_spec;

    s2l_sub_lsp->parent = this;
    children["s2l-sub-lsp"] = s2l_sub_lsp;

    session->parent = this;
    children["session"] = session;

    style->parent = this;
    children["style"] = style;

    yang_name = "request-brief"; yang_parent_name = "request-briefs";
}

RsvpStandby::RequestBriefs::RequestBrief::~RequestBrief()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| output_interface.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (filter !=  nullptr && filter->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (style !=  nullptr && style->has_data());
}

bool RsvpStandby::RequestBriefs::RequestBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(output_interface.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(protocol.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_origin.operation)
	|| is_set(vrf_name.operation)
	|| (filter !=  nullptr && filter->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (style !=  nullptr && style->has_operation());
}

std::string RsvpStandby::RequestBriefs::RequestBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-brief";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.operation)) leaf_name_data.push_back(output_interface.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.operation)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "filter")
    {
        if(filter != nullptr)
        {
            children["filter"] = filter;
        }
        else
        {
            filter = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter>();
            filter->parent = this;
            children["filter"] = filter;
        }
        return children.at("filter");
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec != nullptr)
        {
            children["flow-spec"] = flow_spec;
        }
        else
        {
            flow_spec = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::FlowSpec>();
            flow_spec->parent = this;
            children["flow-spec"] = flow_spec;
        }
        return children.at("flow-spec");
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec != nullptr)
        {
            children["generic-flow-spec"] = generic_flow_spec;
        }
        else
        {
            generic_flow_spec = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec>();
            generic_flow_spec->parent = this;
            children["generic-flow-spec"] = generic_flow_spec;
        }
        return children.at("generic-flow-spec");
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        else
        {
            s2l_sub_lsp = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp>();
            s2l_sub_lsp->parent = this;
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        return children.at("s2l-sub-lsp");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    if(child_yang_name == "style")
    {
        if(style != nullptr)
        {
            children["style"] = style;
        }
        else
        {
            style = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Style>();
            style->parent = this;
            children["style"] = style;
        }
        return children.at("style");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::get_children()
{
    if(children.find("filter") == children.end())
    {
        if(filter != nullptr)
        {
            children["filter"] = filter;
        }
    }

    if(children.find("flow-spec") == children.end())
    {
        if(flow_spec != nullptr)
        {
            children["flow-spec"] = flow_spec;
        }
    }

    if(children.find("generic-flow-spec") == children.end())
    {
        if(generic_flow_spec != nullptr)
        {
            children["generic-flow-spec"] = generic_flow_spec;
        }
    }

    if(children.find("s2l-sub-lsp") == children.end())
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    if(children.find("style") == children.end())
    {
        if(style != nullptr)
        {
            children["style"] = style;
        }
    }

    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession>())
{
    rsvp_session->parent = this;
    children["rsvp-session"] = rsvp_session;

    yang_name = "session"; yang_parent_name = "request-brief";
}

RsvpStandby::RequestBriefs::RequestBrief::Session::~Session()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::has_operation() const
{
    return is_set(operation)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
        else
        {
            rsvp_session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession>();
            rsvp_session->parent = this;
            children["rsvp-session"] = rsvp_session;
        }
        return children.at("rsvp-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::Session::get_children()
{
    if(children.find("rsvp-session") == children.end())
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
    }

    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv4_lsp_session->parent = this;
    children["ipv4-lsp-session"] = ipv4_lsp_session;

    ipv4_p2mp_lsp_session->parent = this;
    children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;

    ipv4_uni_session->parent = this;
    children["ipv4-uni-session"] = ipv4_uni_session;

    yang_name = "rsvp-session"; yang_parent_name = "session";
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_type.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        else
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession>();
            ipv4_lsp_session->parent = this;
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        return children.at("ipv4-lsp-session");
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        else
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession>();
            ipv4_p2mp_lsp_session->parent = this;
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        return children.at("ipv4-p2mp-lsp-session");
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        else
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession>();
            ipv4_uni_session->parent = this;
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        return children.at("ipv4-uni-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv4-lsp-session") == children.end())
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
    }

    if(children.find("ipv4-p2mp-lsp-session") == children.end())
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
    }

    if(children.find("ipv4-uni-session") == children.end())
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
    }

    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-type")
    {
        session_type = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{
    yang_name = "ipv4"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(protocol.operation);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::get_children()
{
    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::get_children()
{
    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.operation)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::get_children()
{
    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::get_children()
{
    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{
    yang_name = "s2l-sub-lsp"; yang_parent_name = "request-brief";
}

RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp::~S2LSubLsp()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_destination_address.operation);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.operation)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp::get_children()
{
    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::S2LSubLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_qos{YType::enumeration, "flow-qos"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"}
{
    yang_name = "flow-spec"; yang_parent_name = "request-brief";
}

RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::~FlowSpec()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::has_data() const
{
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_max_unit.is_set
	|| flow_min_unit.is_set
	|| flow_peak_rate.is_set
	|| flow_qos.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_average_rate.operation)
	|| is_set(flow_max_burst.operation)
	|| is_set(flow_max_unit.operation)
	|| is_set(flow_min_unit.operation)
	|| is_set(flow_peak_rate.operation)
	|| is_set(flow_qos.operation)
	|| is_set(flow_requested_rate.operation)
	|| is_set(flow_slack.operation);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.operation)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.operation)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.operation)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.operation)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.operation)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.operation)) leaf_name_data.push_back(flow_qos.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.operation)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.operation)) leaf_name_data.push_back(flow_slack.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::get_children()
{
    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::FlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate = value;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst = value;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
    }
    if(value_path == "flow-qos")
    {
        flow_qos = value;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate = value;
    }
    if(value_path == "flow-slack")
    {
        flow_slack = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;
    children["g709otn-flow-spec"] = g709otn_flow_spec;

    yang_name = "generic-flow-spec"; yang_parent_name = "request-brief";
}

RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::~GenericFlowSpec()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_spec_type.operation)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.operation)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec != nullptr)
        {
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
        else
        {
            g709otn_flow_spec = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec>();
            g709otn_flow_spec->parent = this;
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
        return children.at("g709otn-flow-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::get_children()
{
    if(children.find("g709otn-flow-spec") == children.end())
    {
        if(g709otn_flow_spec != nullptr)
        {
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
    }

    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_bit_rate{YType::uint64, "flow-bit-rate"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_signal_type{YType::uint8, "flow-signal-type"}
{
    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec";
}

RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_bit_rate.is_set
	|| flow_multiplier.is_set
	|| flow_nvc.is_set
	|| flow_signal_type.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_bit_rate.operation)
	|| is_set(flow_multiplier.operation)
	|| is_set(flow_nvc.operation)
	|| is_set(flow_signal_type.operation);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/generic-flow-spec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_bit_rate.is_set || is_set(flow_bit_rate.operation)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.operation)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.operation)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_signal_type.is_set || is_set(flow_signal_type.operation)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::get_children()
{
    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::Filter()
    :
    rsvp_filter(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;
    children["rsvp-filter"] = rsvp_filter;

    yang_name = "filter"; yang_parent_name = "request-brief";
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::~Filter()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::has_operation() const
{
    return is_set(operation)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter != nullptr)
        {
            children["rsvp-filter"] = rsvp_filter;
        }
        else
        {
            rsvp_filter = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter>();
            rsvp_filter->parent = this;
            children["rsvp-filter"] = rsvp_filter;
        }
        return children.at("rsvp-filter");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::Filter::get_children()
{
    if(children.find("rsvp-filter") == children.end())
    {
        if(rsvp_filter != nullptr)
        {
            children["rsvp-filter"] = rsvp_filter;
        }
    }

    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Filter::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    children["p2mp-ipv4-session"] = p2mp_ipv4_session;

    udp_ipv4_session->parent = this;
    children["udp-ipv4-session"] = udp_ipv4_session;

    yang_name = "rsvp-filter"; yang_parent_name = "filter";
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::~RsvpFilter()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(filter_type.operation)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.operation)) leaf_name_data.push_back(filter_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session != nullptr)
        {
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
        else
        {
            p2mp_ipv4_session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session>();
            p2mp_ipv4_session->parent = this;
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
        return children.at("p2mp-ipv4-session");
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session != nullptr)
        {
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
        else
        {
            udp_ipv4_session = std::make_shared<RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session>();
            udp_ipv4_session->parent = this;
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
        return children.at("udp-ipv4-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::get_children()
{
    if(children.find("p2mp-ipv4-session") == children.end())
    {
        if(p2mp_ipv4_session != nullptr)
        {
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
    }

    if(children.find("udp-ipv4-session") == children.end())
    {
        if(udp_ipv4_session != nullptr)
        {
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
    }

    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{
    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter";
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/filter/rsvp-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::get_children()
{
    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{
    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter";
}

RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(operation)
	|| is_set(p2mp_sub_group_origin.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/filter/rsvp-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.operation)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::get_children()
{
    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Filter::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
}

RsvpStandby::RequestBriefs::RequestBrief::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{
    yang_name = "style"; yang_parent_name = "request-brief";
}

RsvpStandby::RequestBriefs::RequestBrief::Style::~Style()
{
}

bool RsvpStandby::RequestBriefs::RequestBrief::Style::has_data() const
{
    return reservation_type.is_set;
}

bool RsvpStandby::RequestBriefs::RequestBrief::Style::has_operation() const
{
    return is_set(operation)
	|| is_set(reservation_type.operation);
}

std::string RsvpStandby::RequestBriefs::RequestBrief::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestBriefs::RequestBrief::Style::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-briefs/request-brief/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.operation)) leaf_name_data.push_back(reservation_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestBriefs::RequestBrief::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestBriefs::RequestBrief::Style::get_children()
{
    return children;
}

void RsvpStandby::RequestBriefs::RequestBrief::Style::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
    }
}

RsvpStandby::RequestDetails::RequestDetails()
{
    yang_name = "request-details"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::RequestDetails::~RequestDetails()
{
}

bool RsvpStandby::RequestDetails::has_data() const
{
    for (std::size_t index=0; index<request_detail.size(); index++)
    {
        if(request_detail[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::RequestDetails::has_operation() const
{
    for (std::size_t index=0; index<request_detail.size(); index++)
    {
        if(request_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::RequestDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-details";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "request-detail")
    {
        for(auto const & c : request_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::RequestDetails::RequestDetail>();
        c->parent = this;
        request_detail.push_back(std::move(c));
        children[segment_path] = request_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::get_children()
{
    for (auto const & c : request_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::RequestDetails::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::RequestDetails::RequestDetail::RequestDetail()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    output_interface{YType::str, "output-interface"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_origin{YType::str, "sub-group-origin"},
    vrf_name{YType::str, "vrf-name"}
    	,
    filter(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter>())
	,flow_spec(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::FlowSpec>())
	,generic_flow_spec(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec>())
	,header(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Header>())
	,hop(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Hop>())
	,policy_flags(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PolicyFlags>())
	,policy_query_flags(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags>())
	,policy_sources(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PolicySources>())
	,req_flags(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::ReqFlags>())
	,s2l_sub_lsp(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp>())
	,session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session>())
	,style(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Style>())
{
    filter->parent = this;
    children["filter"] = filter;

    flow_spec->parent = this;
    children["flow-spec"] = flow_spec;

    generic_flow_spec->parent = this;
    children["generic-flow-spec"] = generic_flow_spec;

    header->parent = this;
    children["header"] = header;

    hop->parent = this;
    children["hop"] = hop;

    policy_flags->parent = this;
    children["policy-flags"] = policy_flags;

    policy_query_flags->parent = this;
    children["policy-query-flags"] = policy_query_flags;

    policy_sources->parent = this;
    children["policy-sources"] = policy_sources;

    req_flags->parent = this;
    children["req-flags"] = req_flags;

    s2l_sub_lsp->parent = this;
    children["s2l-sub-lsp"] = s2l_sub_lsp;

    session->parent = this;
    children["session"] = session;

    style->parent = this;
    children["style"] = style;

    yang_name = "request-detail"; yang_parent_name = "request-details";
}

RsvpStandby::RequestDetails::RequestDetail::~RequestDetail()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::has_data() const
{
    for (std::size_t index=0; index<psb_key.size(); index++)
    {
        if(psb_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsb_key.size(); index++)
    {
        if(rsb_key[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| output_interface.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set
	|| sub_group_origin.is_set
	|| vrf_name.is_set
	|| (filter !=  nullptr && filter->has_data())
	|| (flow_spec !=  nullptr && flow_spec->has_data())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_data())
	|| (header !=  nullptr && header->has_data())
	|| (hop !=  nullptr && hop->has_data())
	|| (policy_flags !=  nullptr && policy_flags->has_data())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_data())
	|| (policy_sources !=  nullptr && policy_sources->has_data())
	|| (req_flags !=  nullptr && req_flags->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (style !=  nullptr && style->has_data());
}

bool RsvpStandby::RequestDetails::RequestDetail::has_operation() const
{
    for (std::size_t index=0; index<psb_key.size(); index++)
    {
        if(psb_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsb_key.size(); index++)
    {
        if(rsb_key[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(output_interface.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(protocol.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_origin.operation)
	|| is_set(vrf_name.operation)
	|| (filter !=  nullptr && filter->has_operation())
	|| (flow_spec !=  nullptr && flow_spec->has_operation())
	|| (generic_flow_spec !=  nullptr && generic_flow_spec->has_operation())
	|| (header !=  nullptr && header->has_operation())
	|| (hop !=  nullptr && hop->has_operation())
	|| (policy_flags !=  nullptr && policy_flags->has_operation())
	|| (policy_query_flags !=  nullptr && policy_query_flags->has_operation())
	|| (policy_sources !=  nullptr && policy_sources->has_operation())
	|| (req_flags !=  nullptr && req_flags->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (style !=  nullptr && style->has_operation());
}

std::string RsvpStandby::RequestDetails::RequestDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-detail";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (output_interface.is_set || is_set(output_interface.operation)) leaf_name_data.push_back(output_interface.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_origin.is_set || is_set(sub_group_origin.operation)) leaf_name_data.push_back(sub_group_origin.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "filter")
    {
        if(filter != nullptr)
        {
            children["filter"] = filter;
        }
        else
        {
            filter = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter>();
            filter->parent = this;
            children["filter"] = filter;
        }
        return children.at("filter");
    }

    if(child_yang_name == "flow-spec")
    {
        if(flow_spec != nullptr)
        {
            children["flow-spec"] = flow_spec;
        }
        else
        {
            flow_spec = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::FlowSpec>();
            flow_spec->parent = this;
            children["flow-spec"] = flow_spec;
        }
        return children.at("flow-spec");
    }

    if(child_yang_name == "generic-flow-spec")
    {
        if(generic_flow_spec != nullptr)
        {
            children["generic-flow-spec"] = generic_flow_spec;
        }
        else
        {
            generic_flow_spec = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec>();
            generic_flow_spec->parent = this;
            children["generic-flow-spec"] = generic_flow_spec;
        }
        return children.at("generic-flow-spec");
    }

    if(child_yang_name == "header")
    {
        if(header != nullptr)
        {
            children["header"] = header;
        }
        else
        {
            header = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Header>();
            header->parent = this;
            children["header"] = header;
        }
        return children.at("header");
    }

    if(child_yang_name == "hop")
    {
        if(hop != nullptr)
        {
            children["hop"] = hop;
        }
        else
        {
            hop = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Hop>();
            hop->parent = this;
            children["hop"] = hop;
        }
        return children.at("hop");
    }

    if(child_yang_name == "policy-flags")
    {
        if(policy_flags != nullptr)
        {
            children["policy-flags"] = policy_flags;
        }
        else
        {
            policy_flags = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PolicyFlags>();
            policy_flags->parent = this;
            children["policy-flags"] = policy_flags;
        }
        return children.at("policy-flags");
    }

    if(child_yang_name == "policy-query-flags")
    {
        if(policy_query_flags != nullptr)
        {
            children["policy-query-flags"] = policy_query_flags;
        }
        else
        {
            policy_query_flags = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags>();
            policy_query_flags->parent = this;
            children["policy-query-flags"] = policy_query_flags;
        }
        return children.at("policy-query-flags");
    }

    if(child_yang_name == "policy-sources")
    {
        if(policy_sources != nullptr)
        {
            children["policy-sources"] = policy_sources;
        }
        else
        {
            policy_sources = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PolicySources>();
            policy_sources->parent = this;
            children["policy-sources"] = policy_sources;
        }
        return children.at("policy-sources");
    }

    if(child_yang_name == "psb-key")
    {
        for(auto const & c : psb_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::PsbKey>();
        c->parent = this;
        psb_key.push_back(std::move(c));
        children[segment_path] = psb_key.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "req-flags")
    {
        if(req_flags != nullptr)
        {
            children["req-flags"] = req_flags;
        }
        else
        {
            req_flags = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::ReqFlags>();
            req_flags->parent = this;
            children["req-flags"] = req_flags;
        }
        return children.at("req-flags");
    }

    if(child_yang_name == "rsb-key")
    {
        for(auto const & c : rsb_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::RsbKey>();
        c->parent = this;
        rsb_key.push_back(std::move(c));
        children[segment_path] = rsb_key.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        else
        {
            s2l_sub_lsp = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp>();
            s2l_sub_lsp->parent = this;
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        return children.at("s2l-sub-lsp");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    if(child_yang_name == "style")
    {
        if(style != nullptr)
        {
            children["style"] = style;
        }
        else
        {
            style = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Style>();
            style->parent = this;
            children["style"] = style;
        }
        return children.at("style");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::get_children()
{
    if(children.find("filter") == children.end())
    {
        if(filter != nullptr)
        {
            children["filter"] = filter;
        }
    }

    if(children.find("flow-spec") == children.end())
    {
        if(flow_spec != nullptr)
        {
            children["flow-spec"] = flow_spec;
        }
    }

    if(children.find("generic-flow-spec") == children.end())
    {
        if(generic_flow_spec != nullptr)
        {
            children["generic-flow-spec"] = generic_flow_spec;
        }
    }

    if(children.find("header") == children.end())
    {
        if(header != nullptr)
        {
            children["header"] = header;
        }
    }

    if(children.find("hop") == children.end())
    {
        if(hop != nullptr)
        {
            children["hop"] = hop;
        }
    }

    if(children.find("policy-flags") == children.end())
    {
        if(policy_flags != nullptr)
        {
            children["policy-flags"] = policy_flags;
        }
    }

    if(children.find("policy-query-flags") == children.end())
    {
        if(policy_query_flags != nullptr)
        {
            children["policy-query-flags"] = policy_query_flags;
        }
    }

    if(children.find("policy-sources") == children.end())
    {
        if(policy_sources != nullptr)
        {
            children["policy-sources"] = policy_sources;
        }
    }

    for (auto const & c : psb_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("req-flags") == children.end())
    {
        if(req_flags != nullptr)
        {
            children["req-flags"] = req_flags;
        }
    }

    for (auto const & c : rsb_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("s2l-sub-lsp") == children.end())
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    if(children.find("style") == children.end())
    {
        if(style != nullptr)
        {
            children["style"] = style;
        }
    }

    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "output-interface")
    {
        output_interface = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-origin")
    {
        sub_group_origin = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession>())
{
    rsvp_session->parent = this;
    children["rsvp-session"] = rsvp_session;

    yang_name = "session"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::Session::~Session()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::has_operation() const
{
    return is_set(operation)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
        else
        {
            rsvp_session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession>();
            rsvp_session->parent = this;
            children["rsvp-session"] = rsvp_session;
        }
        return children.at("rsvp-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Session::get_children()
{
    if(children.find("rsvp-session") == children.end())
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
    }

    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Session::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv4_lsp_session->parent = this;
    children["ipv4-lsp-session"] = ipv4_lsp_session;

    ipv4_p2mp_lsp_session->parent = this;
    children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;

    ipv4_uni_session->parent = this;
    children["ipv4-uni-session"] = ipv4_uni_session;

    yang_name = "rsvp-session"; yang_parent_name = "session";
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_type.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        else
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession>();
            ipv4_lsp_session->parent = this;
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        return children.at("ipv4-lsp-session");
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        else
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession>();
            ipv4_p2mp_lsp_session->parent = this;
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        return children.at("ipv4-p2mp-lsp-session");
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        else
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession>();
            ipv4_uni_session->parent = this;
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        return children.at("ipv4-uni-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv4-lsp-session") == children.end())
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
    }

    if(children.find("ipv4-p2mp-lsp-session") == children.end())
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
    }

    if(children.find("ipv4-uni-session") == children.end())
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
    }

    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-type")
    {
        session_type = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{
    yang_name = "ipv4"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(protocol.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.operation)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{
    yang_name = "s2l-sub-lsp"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp::~S2LSubLsp()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_destination_address.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.operation)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::S2LSubLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::FlowSpec::FlowSpec()
    :
    flow_average_rate{YType::uint64, "flow-average-rate"},
    flow_max_burst{YType::uint64, "flow-max-burst"},
    flow_max_unit{YType::uint32, "flow-max-unit"},
    flow_min_unit{YType::uint32, "flow-min-unit"},
    flow_peak_rate{YType::uint64, "flow-peak-rate"},
    flow_qos{YType::enumeration, "flow-qos"},
    flow_requested_rate{YType::uint64, "flow-requested-rate"},
    flow_slack{YType::uint32, "flow-slack"}
{
    yang_name = "flow-spec"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::FlowSpec::~FlowSpec()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::FlowSpec::has_data() const
{
    return flow_average_rate.is_set
	|| flow_max_burst.is_set
	|| flow_max_unit.is_set
	|| flow_min_unit.is_set
	|| flow_peak_rate.is_set
	|| flow_qos.is_set
	|| flow_requested_rate.is_set
	|| flow_slack.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::FlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_average_rate.operation)
	|| is_set(flow_max_burst.operation)
	|| is_set(flow_max_unit.operation)
	|| is_set(flow_min_unit.operation)
	|| is_set(flow_peak_rate.operation)
	|| is_set(flow_qos.operation)
	|| is_set(flow_requested_rate.operation)
	|| is_set(flow_slack.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::FlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_average_rate.is_set || is_set(flow_average_rate.operation)) leaf_name_data.push_back(flow_average_rate.get_name_leafdata());
    if (flow_max_burst.is_set || is_set(flow_max_burst.operation)) leaf_name_data.push_back(flow_max_burst.get_name_leafdata());
    if (flow_max_unit.is_set || is_set(flow_max_unit.operation)) leaf_name_data.push_back(flow_max_unit.get_name_leafdata());
    if (flow_min_unit.is_set || is_set(flow_min_unit.operation)) leaf_name_data.push_back(flow_min_unit.get_name_leafdata());
    if (flow_peak_rate.is_set || is_set(flow_peak_rate.operation)) leaf_name_data.push_back(flow_peak_rate.get_name_leafdata());
    if (flow_qos.is_set || is_set(flow_qos.operation)) leaf_name_data.push_back(flow_qos.get_name_leafdata());
    if (flow_requested_rate.is_set || is_set(flow_requested_rate.operation)) leaf_name_data.push_back(flow_requested_rate.get_name_leafdata());
    if (flow_slack.is_set || is_set(flow_slack.operation)) leaf_name_data.push_back(flow_slack.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::FlowSpec::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::FlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-average-rate")
    {
        flow_average_rate = value;
    }
    if(value_path == "flow-max-burst")
    {
        flow_max_burst = value;
    }
    if(value_path == "flow-max-unit")
    {
        flow_max_unit = value;
    }
    if(value_path == "flow-min-unit")
    {
        flow_min_unit = value;
    }
    if(value_path == "flow-peak-rate")
    {
        flow_peak_rate = value;
    }
    if(value_path == "flow-qos")
    {
        flow_qos = value;
    }
    if(value_path == "flow-requested-rate")
    {
        flow_requested_rate = value;
    }
    if(value_path == "flow-slack")
    {
        flow_slack = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::GenericFlowSpec()
    :
    flow_spec_type{YType::enumeration, "flow-spec-type"}
    	,
    g709otn_flow_spec(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec>())
{
    g709otn_flow_spec->parent = this;
    children["g709otn-flow-spec"] = g709otn_flow_spec;

    yang_name = "generic-flow-spec"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::~GenericFlowSpec()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::has_data() const
{
    return flow_spec_type.is_set
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_data());
}

bool RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_spec_type.operation)
	|| (g709otn_flow_spec !=  nullptr && g709otn_flow_spec->has_operation());
}

std::string RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-flow-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_spec_type.is_set || is_set(flow_spec_type.operation)) leaf_name_data.push_back(flow_spec_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "g709otn-flow-spec")
    {
        if(g709otn_flow_spec != nullptr)
        {
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
        else
        {
            g709otn_flow_spec = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec>();
            g709otn_flow_spec->parent = this;
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
        return children.at("g709otn-flow-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::get_children()
{
    if(children.find("g709otn-flow-spec") == children.end())
    {
        if(g709otn_flow_spec != nullptr)
        {
            children["g709otn-flow-spec"] = g709otn_flow_spec;
        }
    }

    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-spec-type")
    {
        flow_spec_type = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::G709OtnFlowSpec()
    :
    flow_bit_rate{YType::uint64, "flow-bit-rate"},
    flow_multiplier{YType::uint16, "flow-multiplier"},
    flow_nvc{YType::uint16, "flow-nvc"},
    flow_signal_type{YType::uint8, "flow-signal-type"}
{
    yang_name = "g709otn-flow-spec"; yang_parent_name = "generic-flow-spec";
}

RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::~G709OtnFlowSpec()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::has_data() const
{
    return flow_bit_rate.is_set
	|| flow_multiplier.is_set
	|| flow_nvc.is_set
	|| flow_signal_type.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_bit_rate.operation)
	|| is_set(flow_multiplier.operation)
	|| is_set(flow_nvc.operation)
	|| is_set(flow_signal_type.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-flow-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/generic-flow-spec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_bit_rate.is_set || is_set(flow_bit_rate.operation)) leaf_name_data.push_back(flow_bit_rate.get_name_leafdata());
    if (flow_multiplier.is_set || is_set(flow_multiplier.operation)) leaf_name_data.push_back(flow_multiplier.get_name_leafdata());
    if (flow_nvc.is_set || is_set(flow_nvc.operation)) leaf_name_data.push_back(flow_nvc.get_name_leafdata());
    if (flow_signal_type.is_set || is_set(flow_signal_type.operation)) leaf_name_data.push_back(flow_signal_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::GenericFlowSpec::G709OtnFlowSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-bit-rate")
    {
        flow_bit_rate = value;
    }
    if(value_path == "flow-multiplier")
    {
        flow_multiplier = value;
    }
    if(value_path == "flow-nvc")
    {
        flow_nvc = value;
    }
    if(value_path == "flow-signal-type")
    {
        flow_signal_type = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::Filter::Filter()
    :
    rsvp_filter(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter>())
{
    rsvp_filter->parent = this;
    children["rsvp-filter"] = rsvp_filter;

    yang_name = "filter"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::Filter::~Filter()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::has_data() const
{
    return (rsvp_filter !=  nullptr && rsvp_filter->has_data());
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::has_operation() const
{
    return is_set(operation)
	|| (rsvp_filter !=  nullptr && rsvp_filter->has_operation());
}

std::string RsvpStandby::RequestDetails::RequestDetail::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-filter")
    {
        if(rsvp_filter != nullptr)
        {
            children["rsvp-filter"] = rsvp_filter;
        }
        else
        {
            rsvp_filter = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter>();
            rsvp_filter->parent = this;
            children["rsvp-filter"] = rsvp_filter;
        }
        return children.at("rsvp-filter");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Filter::get_children()
{
    if(children.find("rsvp-filter") == children.end())
    {
        if(rsvp_filter != nullptr)
        {
            children["rsvp-filter"] = rsvp_filter;
        }
    }

    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Filter::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::RsvpFilter()
    :
    filter_type{YType::enumeration, "filter-type"}
    	,
    p2mp_ipv4_session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session>())
	,udp_ipv4_session(std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session>())
{
    p2mp_ipv4_session->parent = this;
    children["p2mp-ipv4-session"] = p2mp_ipv4_session;

    udp_ipv4_session->parent = this;
    children["udp-ipv4-session"] = udp_ipv4_session;

    yang_name = "rsvp-filter"; yang_parent_name = "filter";
}

RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::~RsvpFilter()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::has_data() const
{
    return filter_type.is_set
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_data())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_data());
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(filter_type.operation)
	|| (p2mp_ipv4_session !=  nullptr && p2mp_ipv4_session->has_operation())
	|| (udp_ipv4_session !=  nullptr && udp_ipv4_session->has_operation());
}

std::string RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-filter";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter_type.is_set || is_set(filter_type.operation)) leaf_name_data.push_back(filter_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2mp-ipv4-session")
    {
        if(p2mp_ipv4_session != nullptr)
        {
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
        else
        {
            p2mp_ipv4_session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session>();
            p2mp_ipv4_session->parent = this;
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
        return children.at("p2mp-ipv4-session");
    }

    if(child_yang_name == "udp-ipv4-session")
    {
        if(udp_ipv4_session != nullptr)
        {
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
        else
        {
            udp_ipv4_session = std::make_shared<RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session>();
            udp_ipv4_session->parent = this;
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
        return children.at("udp-ipv4-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::get_children()
{
    if(children.find("p2mp-ipv4-session") == children.end())
    {
        if(p2mp_ipv4_session != nullptr)
        {
            children["p2mp-ipv4-session"] = p2mp_ipv4_session;
        }
    }

    if(children.find("udp-ipv4-session") == children.end())
    {
        if(udp_ipv4_session != nullptr)
        {
            children["udp-ipv4-session"] = udp_ipv4_session;
        }
    }

    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter-type")
    {
        filter_type = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::UdpIpv4Session()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"}
{
    yang_name = "udp-ipv4-session"; yang_parent_name = "rsvp-filter";
}

RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::~UdpIpv4Session()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::has_data() const
{
    return source_address.is_set
	|| source_port.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-ipv4-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/filter/rsvp-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::UdpIpv4Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::P2MpIpv4Session()
    :
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    sub_group_id{YType::uint16, "sub-group-id"}
{
    yang_name = "p2mp-ipv4-session"; yang_parent_name = "rsvp-filter";
}

RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::~P2MpIpv4Session()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::has_data() const
{
    return p2mp_sub_group_origin.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| sub_group_id.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::has_operation() const
{
    return is_set(operation)
	|| is_set(p2mp_sub_group_origin.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(sub_group_id.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-ipv4-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/filter/rsvp-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.operation)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Filter::RsvpFilter::P2MpIpv4Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::Style::Style()
    :
    reservation_type{YType::enumeration, "reservation-type"}
{
    yang_name = "style"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::Style::~Style()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Style::has_data() const
{
    return reservation_type.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Style::has_operation() const
{
    return is_set(operation)
	|| is_set(reservation_type.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Style::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "style";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Style::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reservation_type.is_set || is_set(reservation_type.operation)) leaf_name_data.push_back(reservation_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Style::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Style::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Style::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reservation-type")
    {
        reservation_type = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::ReqFlags::ReqFlags()
    :
    is_ack_outstanding{YType::boolean, "is-ack-outstanding"},
    is_label_request_in_path{YType::boolean, "is-label-request-in-path"},
    is_local_receiver{YType::boolean, "is-local-receiver"},
    is_merge_point{YType::boolean, "is-merge-point"},
    is_message_id_allocated{YType::boolean, "is-message-id-allocated"},
    is_nack_received{YType::boolean, "is-nack-received"},
    is_paced{YType::boolean, "is-paced"},
    is_record_label_in_path{YType::boolean, "is-record-label-in-path"},
    is_refreshing{YType::boolean, "is-refreshing"},
    is_retransmit{YType::boolean, "is-retransmit"},
    is_rro_in_path{YType::boolean, "is-rro-in-path"},
    is_send_confirm{YType::boolean, "is-send-confirm"}
{
    yang_name = "req-flags"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::ReqFlags::~ReqFlags()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::ReqFlags::has_data() const
{
    return is_ack_outstanding.is_set
	|| is_label_request_in_path.is_set
	|| is_local_receiver.is_set
	|| is_merge_point.is_set
	|| is_message_id_allocated.is_set
	|| is_nack_received.is_set
	|| is_paced.is_set
	|| is_record_label_in_path.is_set
	|| is_refreshing.is_set
	|| is_retransmit.is_set
	|| is_rro_in_path.is_set
	|| is_send_confirm.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::ReqFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_ack_outstanding.operation)
	|| is_set(is_label_request_in_path.operation)
	|| is_set(is_local_receiver.operation)
	|| is_set(is_merge_point.operation)
	|| is_set(is_message_id_allocated.operation)
	|| is_set(is_nack_received.operation)
	|| is_set(is_paced.operation)
	|| is_set(is_record_label_in_path.operation)
	|| is_set(is_refreshing.operation)
	|| is_set(is_retransmit.operation)
	|| is_set(is_rro_in_path.operation)
	|| is_set(is_send_confirm.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::ReqFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "req-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::ReqFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ack_outstanding.is_set || is_set(is_ack_outstanding.operation)) leaf_name_data.push_back(is_ack_outstanding.get_name_leafdata());
    if (is_label_request_in_path.is_set || is_set(is_label_request_in_path.operation)) leaf_name_data.push_back(is_label_request_in_path.get_name_leafdata());
    if (is_local_receiver.is_set || is_set(is_local_receiver.operation)) leaf_name_data.push_back(is_local_receiver.get_name_leafdata());
    if (is_merge_point.is_set || is_set(is_merge_point.operation)) leaf_name_data.push_back(is_merge_point.get_name_leafdata());
    if (is_message_id_allocated.is_set || is_set(is_message_id_allocated.operation)) leaf_name_data.push_back(is_message_id_allocated.get_name_leafdata());
    if (is_nack_received.is_set || is_set(is_nack_received.operation)) leaf_name_data.push_back(is_nack_received.get_name_leafdata());
    if (is_paced.is_set || is_set(is_paced.operation)) leaf_name_data.push_back(is_paced.get_name_leafdata());
    if (is_record_label_in_path.is_set || is_set(is_record_label_in_path.operation)) leaf_name_data.push_back(is_record_label_in_path.get_name_leafdata());
    if (is_refreshing.is_set || is_set(is_refreshing.operation)) leaf_name_data.push_back(is_refreshing.get_name_leafdata());
    if (is_retransmit.is_set || is_set(is_retransmit.operation)) leaf_name_data.push_back(is_retransmit.get_name_leafdata());
    if (is_rro_in_path.is_set || is_set(is_rro_in_path.operation)) leaf_name_data.push_back(is_rro_in_path.get_name_leafdata());
    if (is_send_confirm.is_set || is_set(is_send_confirm.operation)) leaf_name_data.push_back(is_send_confirm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::ReqFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::ReqFlags::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::ReqFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-ack-outstanding")
    {
        is_ack_outstanding = value;
    }
    if(value_path == "is-label-request-in-path")
    {
        is_label_request_in_path = value;
    }
    if(value_path == "is-local-receiver")
    {
        is_local_receiver = value;
    }
    if(value_path == "is-merge-point")
    {
        is_merge_point = value;
    }
    if(value_path == "is-message-id-allocated")
    {
        is_message_id_allocated = value;
    }
    if(value_path == "is-nack-received")
    {
        is_nack_received = value;
    }
    if(value_path == "is-paced")
    {
        is_paced = value;
    }
    if(value_path == "is-record-label-in-path")
    {
        is_record_label_in_path = value;
    }
    if(value_path == "is-refreshing")
    {
        is_refreshing = value;
    }
    if(value_path == "is-retransmit")
    {
        is_retransmit = value;
    }
    if(value_path == "is-rro-in-path")
    {
        is_rro_in_path = value;
    }
    if(value_path == "is-send-confirm")
    {
        is_send_confirm = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::Hop::Hop()
    :
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_logical_interface_name{YType::str, "neighbor-logical-interface-name"}
{
    yang_name = "hop"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::Hop::~Hop()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Hop::has_data() const
{
    return neighbor_address.is_set
	|| neighbor_logical_interface_name.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Hop::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_logical_interface_name.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Hop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_logical_interface_name.is_set || is_set(neighbor_logical_interface_name.operation)) leaf_name_data.push_back(neighbor_logical_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Hop::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Hop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-logical-interface-name")
    {
        neighbor_logical_interface_name = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::Header::Header()
    :
    ip_source_address{YType::str, "ip-source-address"},
    ip_tos{YType::uint8, "ip-tos"},
    ip_ttl{YType::uint8, "ip-ttl"},
    rsvp_header_flags{YType::uint8, "rsvp-header-flags"},
    rsvp_message_type{YType::uint8, "rsvp-message-type"},
    rsvp_ttl{YType::uint8, "rsvp-ttl"},
    rsvp_version{YType::uint8, "rsvp-version"}
{
    yang_name = "header"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::Header::~Header()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::Header::has_data() const
{
    return ip_source_address.is_set
	|| ip_tos.is_set
	|| ip_ttl.is_set
	|| rsvp_header_flags.is_set
	|| rsvp_message_type.is_set
	|| rsvp_ttl.is_set
	|| rsvp_version.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::Header::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_source_address.operation)
	|| is_set(ip_tos.operation)
	|| is_set(ip_ttl.operation)
	|| is_set(rsvp_header_flags.operation)
	|| is_set(rsvp_message_type.operation)
	|| is_set(rsvp_ttl.operation)
	|| is_set(rsvp_version.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::Header::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_source_address.is_set || is_set(ip_source_address.operation)) leaf_name_data.push_back(ip_source_address.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.operation)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (ip_ttl.is_set || is_set(ip_ttl.operation)) leaf_name_data.push_back(ip_ttl.get_name_leafdata());
    if (rsvp_header_flags.is_set || is_set(rsvp_header_flags.operation)) leaf_name_data.push_back(rsvp_header_flags.get_name_leafdata());
    if (rsvp_message_type.is_set || is_set(rsvp_message_type.operation)) leaf_name_data.push_back(rsvp_message_type.get_name_leafdata());
    if (rsvp_ttl.is_set || is_set(rsvp_ttl.operation)) leaf_name_data.push_back(rsvp_ttl.get_name_leafdata());
    if (rsvp_version.is_set || is_set(rsvp_version.operation)) leaf_name_data.push_back(rsvp_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::Header::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::Header::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-source-address")
    {
        ip_source_address = value;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
    }
    if(value_path == "ip-ttl")
    {
        ip_ttl = value;
    }
    if(value_path == "rsvp-header-flags")
    {
        rsvp_header_flags = value;
    }
    if(value_path == "rsvp-message-type")
    {
        rsvp_message_type = value;
    }
    if(value_path == "rsvp-ttl")
    {
        rsvp_ttl = value;
    }
    if(value_path == "rsvp-version")
    {
        rsvp_version = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::PolicySources::PolicySources()
    :
    is_cable{YType::boolean, "is-cable"},
    is_cops{YType::boolean, "is-cops"},
    is_default{YType::boolean, "is-default"},
    is_local{YType::boolean, "is-local"},
    is_te_link{YType::boolean, "is-te-link"}
{
    yang_name = "policy-sources"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::PolicySources::~PolicySources()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::PolicySources::has_data() const
{
    return is_cable.is_set
	|| is_cops.is_set
	|| is_default.is_set
	|| is_local.is_set
	|| is_te_link.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::PolicySources::has_operation() const
{
    return is_set(operation)
	|| is_set(is_cable.operation)
	|| is_set(is_cops.operation)
	|| is_set(is_default.operation)
	|| is_set(is_local.operation)
	|| is_set(is_te_link.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::PolicySources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-sources";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::PolicySources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_cable.is_set || is_set(is_cable.operation)) leaf_name_data.push_back(is_cable.get_name_leafdata());
    if (is_cops.is_set || is_set(is_cops.operation)) leaf_name_data.push_back(is_cops.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.operation)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.operation)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_te_link.is_set || is_set(is_te_link.operation)) leaf_name_data.push_back(is_te_link.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::PolicySources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::PolicySources::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::PolicySources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-cable")
    {
        is_cable = value;
    }
    if(value_path == "is-cops")
    {
        is_cops = value;
    }
    if(value_path == "is-default")
    {
        is_default = value;
    }
    if(value_path == "is-local")
    {
        is_local = value;
    }
    if(value_path == "is-te-link")
    {
        is_te_link = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::PolicyFlags()
    :
    is_accepted{YType::boolean, "is-accepted"},
    is_forwarding{YType::boolean, "is-forwarding"},
    is_installed{YType::boolean, "is-installed"}
{
    yang_name = "policy-flags"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::~PolicyFlags()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::has_data() const
{
    return is_accepted.is_set
	|| is_forwarding.is_set
	|| is_installed.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_accepted.operation)
	|| is_set(is_forwarding.operation)
	|| is_set(is_installed.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_accepted.is_set || is_set(is_accepted.operation)) leaf_name_data.push_back(is_accepted.get_name_leafdata());
    if (is_forwarding.is_set || is_set(is_forwarding.operation)) leaf_name_data.push_back(is_forwarding.get_name_leafdata());
    if (is_installed.is_set || is_set(is_installed.operation)) leaf_name_data.push_back(is_installed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::PolicyFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-accepted")
    {
        is_accepted = value;
    }
    if(value_path == "is-forwarding")
    {
        is_forwarding = value;
    }
    if(value_path == "is-installed")
    {
        is_installed = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::PolicyQueryFlags()
    :
    is_bypass{YType::boolean, "is-bypass"},
    is_needed{YType::boolean, "is-needed"},
    is_report_required{YType::boolean, "is-report-required"},
    is_resync{YType::boolean, "is-resync"}
{
    yang_name = "policy-query-flags"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::~PolicyQueryFlags()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::has_data() const
{
    return is_bypass.is_set
	|| is_needed.is_set
	|| is_report_required.is_set
	|| is_resync.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bypass.operation)
	|| is_set(is_needed.operation)
	|| is_set(is_report_required.operation)
	|| is_set(is_resync.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-query-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bypass.is_set || is_set(is_bypass.operation)) leaf_name_data.push_back(is_bypass.get_name_leafdata());
    if (is_needed.is_set || is_set(is_needed.operation)) leaf_name_data.push_back(is_needed.get_name_leafdata());
    if (is_report_required.is_set || is_set(is_report_required.operation)) leaf_name_data.push_back(is_report_required.get_name_leafdata());
    if (is_resync.is_set || is_set(is_resync.operation)) leaf_name_data.push_back(is_resync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::PolicyQueryFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bypass")
    {
        is_bypass = value;
    }
    if(value_path == "is-needed")
    {
        is_needed = value;
    }
    if(value_path == "is-report-required")
    {
        is_report_required = value;
    }
    if(value_path == "is-resync")
    {
        is_resync = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::PsbKey::PsbKey()
    :
    destination_address{YType::str, "destination-address"},
    destination_port_or_tunnel_id{YType::uint32, "destination-port-or-tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    protocol{YType::uint32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port_or_lsp_id{YType::uint32, "source-port-or-lsp-id"},
    sub_group_id{YType::uint16, "sub-group-id"},
    vrfid{YType::uint32, "vrfid"}
{
    yang_name = "psb-key"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::PsbKey::~PsbKey()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::PsbKey::has_data() const
{
    return destination_address.is_set
	|| destination_port_or_tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| p2mp_sub_group_origin.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port_or_lsp_id.is_set
	|| sub_group_id.is_set
	|| vrfid.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::PsbKey::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port_or_tunnel_id.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(p2mp_sub_group_origin.operation)
	|| is_set(protocol.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port_or_lsp_id.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(vrfid.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::PsbKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-key";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::PsbKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port_or_tunnel_id.is_set || is_set(destination_port_or_tunnel_id.operation)) leaf_name_data.push_back(destination_port_or_tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.operation)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port_or_lsp_id.is_set || is_set(source_port_or_lsp_id.operation)) leaf_name_data.push_back(source_port_or_lsp_id.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.operation)) leaf_name_data.push_back(vrfid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::PsbKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::PsbKey::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::PsbKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port-or-tunnel-id")
    {
        destination_port_or_tunnel_id = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port-or-lsp-id")
    {
        source_port_or_lsp_id = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
    }
}

RsvpStandby::RequestDetails::RequestDetail::RsbKey::RsbKey()
    :
    destination_address{YType::str, "destination-address"},
    destination_port_or_tunnel_id{YType::uint32, "destination-port-or-tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    protocol{YType::uint32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    source_port_or_lsp_id{YType::uint32, "source-port-or-lsp-id"},
    sub_group_id{YType::uint16, "sub-group-id"},
    vrfid{YType::uint32, "vrfid"}
{
    yang_name = "rsb-key"; yang_parent_name = "request-detail";
}

RsvpStandby::RequestDetails::RequestDetail::RsbKey::~RsbKey()
{
}

bool RsvpStandby::RequestDetails::RequestDetail::RsbKey::has_data() const
{
    return destination_address.is_set
	|| destination_port_or_tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| p2mp_sub_group_origin.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| source_port_or_lsp_id.is_set
	|| sub_group_id.is_set
	|| vrfid.is_set;
}

bool RsvpStandby::RequestDetails::RequestDetail::RsbKey::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port_or_tunnel_id.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(p2mp_sub_group_origin.operation)
	|| is_set(protocol.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port_or_lsp_id.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(vrfid.operation);
}

std::string RsvpStandby::RequestDetails::RequestDetail::RsbKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsb-key";

    return path_buffer.str();

}

EntityPath RsvpStandby::RequestDetails::RequestDetail::RsbKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/request-details/request-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port_or_tunnel_id.is_set || is_set(destination_port_or_tunnel_id.operation)) leaf_name_data.push_back(destination_port_or_tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.operation)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port_or_lsp_id.is_set || is_set(source_port_or_lsp_id.operation)) leaf_name_data.push_back(source_port_or_lsp_id.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.operation)) leaf_name_data.push_back(vrfid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::RequestDetails::RequestDetail::RsbKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::RequestDetails::RequestDetail::RsbKey::get_children()
{
    return children;
}

void RsvpStandby::RequestDetails::RequestDetail::RsbKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port-or-tunnel-id")
    {
        destination_port_or_tunnel_id = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port-or-lsp-id")
    {
        source_port_or_lsp_id = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
    }
}

RsvpStandby::InterfaceBriefs::InterfaceBriefs()
{
    yang_name = "interface-briefs"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::InterfaceBriefs::~InterfaceBriefs()
{
}

bool RsvpStandby::InterfaceBriefs::has_data() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::InterfaceBriefs::has_operation() const
{
    for (std::size_t index=0; index<interface_brief.size(); index++)
    {
        if(interface_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::InterfaceBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-briefs";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-brief")
    {
        for(auto const & c : interface_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::InterfaceBriefs::InterfaceBrief>();
        c->parent = this;
        interface_brief.push_back(std::move(c));
        children[segment_path] = interface_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceBriefs::get_children()
{
    for (auto const & c : interface_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::InterfaceBriefs::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::InterfaceBriefs::InterfaceBrief::InterfaceBrief()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
    	,
    bandwidth_information(std::make_shared<RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation>())
{
    bandwidth_information->parent = this;
    children["bandwidth-information"] = bandwidth_information;

    yang_name = "interface-brief"; yang_parent_name = "interface-briefs";
}

RsvpStandby::InterfaceBriefs::InterfaceBrief::~InterfaceBrief()
{
}

bool RsvpStandby::InterfaceBriefs::InterfaceBrief::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_data());
}

bool RsvpStandby::InterfaceBriefs::InterfaceBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| (bandwidth_information !=  nullptr && bandwidth_information->has_operation());
}

std::string RsvpStandby::InterfaceBriefs::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceBriefs::InterfaceBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/interface-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceBriefs::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-information")
    {
        if(bandwidth_information != nullptr)
        {
            children["bandwidth-information"] = bandwidth_information;
        }
        else
        {
            bandwidth_information = std::make_shared<RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation>();
            bandwidth_information->parent = this;
            children["bandwidth-information"] = bandwidth_information;
        }
        return children.at("bandwidth-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceBriefs::InterfaceBrief::get_children()
{
    if(children.find("bandwidth-information") == children.end())
    {
        if(bandwidth_information != nullptr)
        {
            children["bandwidth-information"] = bandwidth_information;
        }
    }

    return children;
}

void RsvpStandby::InterfaceBriefs::InterfaceBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
}

RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::BandwidthInformation()
    :
    dste_mode{YType::enumeration, "dste-mode"}
    	,
    pre_standard_dste_interface(std::make_shared<RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface>())
	,standard_dste_interface(std::make_shared<RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface>())
{
    pre_standard_dste_interface->parent = this;
    children["pre-standard-dste-interface"] = pre_standard_dste_interface;

    standard_dste_interface->parent = this;
    children["standard-dste-interface"] = standard_dste_interface;

    yang_name = "bandwidth-information"; yang_parent_name = "interface-brief";
}

RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::~BandwidthInformation()
{
}

bool RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::has_data() const
{
    return dste_mode.is_set
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_data())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_data());
}

bool RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(dste_mode.operation)
	|| (pre_standard_dste_interface !=  nullptr && pre_standard_dste_interface->has_operation())
	|| (standard_dste_interface !=  nullptr && standard_dste_interface->has_operation());
}

std::string RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-information";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthInformation' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_mode.is_set || is_set(dste_mode.operation)) leaf_name_data.push_back(dste_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pre-standard-dste-interface")
    {
        if(pre_standard_dste_interface != nullptr)
        {
            children["pre-standard-dste-interface"] = pre_standard_dste_interface;
        }
        else
        {
            pre_standard_dste_interface = std::make_shared<RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface>();
            pre_standard_dste_interface->parent = this;
            children["pre-standard-dste-interface"] = pre_standard_dste_interface;
        }
        return children.at("pre-standard-dste-interface");
    }

    if(child_yang_name == "standard-dste-interface")
    {
        if(standard_dste_interface != nullptr)
        {
            children["standard-dste-interface"] = standard_dste_interface;
        }
        else
        {
            standard_dste_interface = std::make_shared<RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface>();
            standard_dste_interface->parent = this;
            children["standard-dste-interface"] = standard_dste_interface;
        }
        return children.at("standard-dste-interface");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::get_children()
{
    if(children.find("pre-standard-dste-interface") == children.end())
    {
        if(pre_standard_dste_interface != nullptr)
        {
            children["pre-standard-dste-interface"] = pre_standard_dste_interface;
        }
    }

    if(children.find("standard-dste-interface") == children.end())
    {
        if(standard_dste_interface != nullptr)
        {
            children["standard-dste-interface"] = standard_dste_interface;
        }
    }

    return children;
}

void RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dste-mode")
    {
        dste_mode = value;
    }
}

RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::PreStandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_subpool_bandwidth_absolute{YType::boolean, "is-max-subpool-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_subpool_bandwidth{YType::uint64, "max-subpool-bandwidth"}
{
    yang_name = "pre-standard-dste-interface"; yang_parent_name = "bandwidth-information";
}

RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::~PreStandardDsteInterface()
{
}

bool RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_subpool_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_subpool_bandwidth.is_set;
}

bool RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(allocated_bit_rate.operation)
	|| is_set(is_max_bandwidth_absolute.operation)
	|| is_set(is_max_subpool_bandwidth_absolute.operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_flow_bandwidth.operation)
	|| is_set(max_subpool_bandwidth.operation);
}

std::string RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-standard-dste-interface";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreStandardDsteInterface' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.operation)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_subpool_bandwidth_absolute.is_set || is_set(is_max_subpool_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_subpool_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.operation)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_subpool_bandwidth.is_set || is_set(max_subpool_bandwidth.operation)) leaf_name_data.push_back(max_subpool_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::get_children()
{
    return children;
}

void RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::PreStandardDsteInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
    }
    if(value_path == "is-max-subpool-bandwidth-absolute")
    {
        is_max_subpool_bandwidth_absolute = value;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
    }
    if(value_path == "max-subpool-bandwidth")
    {
        max_subpool_bandwidth = value;
    }
}

RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::StandardDsteInterface()
    :
    allocated_bit_rate{YType::uint64, "allocated-bit-rate"},
    is_max_bandwidth_absolute{YType::boolean, "is-max-bandwidth-absolute"},
    is_max_bc0_bandwidth_absolute{YType::boolean, "is-max-bc0-bandwidth-absolute"},
    is_max_bc1_bandwidth_absolute{YType::boolean, "is-max-bc1-bandwidth-absolute"},
    max_bandwidth{YType::uint64, "max-bandwidth"},
    max_flow_bandwidth{YType::uint64, "max-flow-bandwidth"},
    max_pool0_bandwidth{YType::uint64, "max-pool0-bandwidth"},
    max_pool1_bandwidth{YType::uint64, "max-pool1-bandwidth"}
{
    yang_name = "standard-dste-interface"; yang_parent_name = "bandwidth-information";
}

RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::~StandardDsteInterface()
{
}

bool RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::has_data() const
{
    return allocated_bit_rate.is_set
	|| is_max_bandwidth_absolute.is_set
	|| is_max_bc0_bandwidth_absolute.is_set
	|| is_max_bc1_bandwidth_absolute.is_set
	|| max_bandwidth.is_set
	|| max_flow_bandwidth.is_set
	|| max_pool0_bandwidth.is_set
	|| max_pool1_bandwidth.is_set;
}

bool RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(allocated_bit_rate.operation)
	|| is_set(is_max_bandwidth_absolute.operation)
	|| is_set(is_max_bc0_bandwidth_absolute.operation)
	|| is_set(is_max_bc1_bandwidth_absolute.operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_flow_bandwidth.operation)
	|| is_set(max_pool0_bandwidth.operation)
	|| is_set(max_pool1_bandwidth.operation);
}

std::string RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard-dste-interface";

    return path_buffer.str();

}

EntityPath RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StandardDsteInterface' in Cisco_IOS_XR_ip_rsvp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bit_rate.is_set || is_set(allocated_bit_rate.operation)) leaf_name_data.push_back(allocated_bit_rate.get_name_leafdata());
    if (is_max_bandwidth_absolute.is_set || is_set(is_max_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc0_bandwidth_absolute.is_set || is_set(is_max_bc0_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_bc0_bandwidth_absolute.get_name_leafdata());
    if (is_max_bc1_bandwidth_absolute.is_set || is_set(is_max_bc1_bandwidth_absolute.operation)) leaf_name_data.push_back(is_max_bc1_bandwidth_absolute.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_flow_bandwidth.is_set || is_set(max_flow_bandwidth.operation)) leaf_name_data.push_back(max_flow_bandwidth.get_name_leafdata());
    if (max_pool0_bandwidth.is_set || is_set(max_pool0_bandwidth.operation)) leaf_name_data.push_back(max_pool0_bandwidth.get_name_leafdata());
    if (max_pool1_bandwidth.is_set || is_set(max_pool1_bandwidth.operation)) leaf_name_data.push_back(max_pool1_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::get_children()
{
    return children;
}

void RsvpStandby::InterfaceBriefs::InterfaceBrief::BandwidthInformation::StandardDsteInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocated-bit-rate")
    {
        allocated_bit_rate = value;
    }
    if(value_path == "is-max-bandwidth-absolute")
    {
        is_max_bandwidth_absolute = value;
    }
    if(value_path == "is-max-bc0-bandwidth-absolute")
    {
        is_max_bc0_bandwidth_absolute = value;
    }
    if(value_path == "is-max-bc1-bandwidth-absolute")
    {
        is_max_bc1_bandwidth_absolute = value;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-flow-bandwidth")
    {
        max_flow_bandwidth = value;
    }
    if(value_path == "max-pool0-bandwidth")
    {
        max_pool0_bandwidth = value;
    }
    if(value_path == "max-pool1-bandwidth")
    {
        max_pool1_bandwidth = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetaileds()
{
    yang_name = "session-detaileds"; yang_parent_name = "rsvp-standby";
}

RsvpStandby::SessionDetaileds::~SessionDetaileds()
{
}

bool RsvpStandby::SessionDetaileds::has_data() const
{
    for (std::size_t index=0; index<session_detailed.size(); index++)
    {
        if(session_detailed[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::SessionDetaileds::has_operation() const
{
    for (std::size_t index=0; index<session_detailed.size(); index++)
    {
        if(session_detailed[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::SessionDetaileds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detaileds";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-detailed")
    {
        for(auto const & c : session_detailed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed>();
        c->parent = this;
        session_detailed.push_back(std::move(c));
        children[segment_path] = session_detailed.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::get_children()
{
    for (auto const & c : session_detailed)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::SessionDetaileds::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::SessionDetaileds::SessionDetailed::SessionDetailed()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    protocol{YType::int32, "protocol"},
    session_type{YType::enumeration, "session-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    compact(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact>())
	,s2l_sub_lsp(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp>())
{
    compact->parent = this;
    children["compact"] = compact;

    s2l_sub_lsp->parent = this;
    children["s2l-sub-lsp"] = s2l_sub_lsp;

    yang_name = "session-detailed"; yang_parent_name = "session-detaileds";
}

RsvpStandby::SessionDetaileds::SessionDetailed::~SessionDetailed()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::has_data() const
{
    for (std::size_t index=0; index<psb_rsb_info.size(); index++)
    {
        if(psb_rsb_info[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| protocol.is_set
	|| session_type.is_set
	|| vrf_name.is_set
	|| (compact !=  nullptr && compact->has_data())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::has_operation() const
{
    for (std::size_t index=0; index<psb_rsb_info.size(); index++)
    {
        if(psb_rsb_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(protocol.operation)
	|| is_set(session_type.operation)
	|| is_set(vrf_name.operation)
	|| (compact !=  nullptr && compact->has_operation())
	|| (s2l_sub_lsp !=  nullptr && s2l_sub_lsp->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detailed";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "compact")
    {
        if(compact != nullptr)
        {
            children["compact"] = compact;
        }
        else
        {
            compact = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact>();
            compact->parent = this;
            children["compact"] = compact;
        }
        return children.at("compact");
    }

    if(child_yang_name == "psb-rsb-info")
    {
        for(auto const & c : psb_rsb_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo>();
        c->parent = this;
        psb_rsb_info.push_back(std::move(c));
        children[segment_path] = psb_rsb_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l-sub-lsp")
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        else
        {
            s2l_sub_lsp = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp>();
            s2l_sub_lsp->parent = this;
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
        return children.at("s2l-sub-lsp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::get_children()
{
    if(children.find("compact") == children.end())
    {
        if(compact != nullptr)
        {
            children["compact"] = compact;
        }
    }

    for (auto const & c : psb_rsb_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("s2l-sub-lsp") == children.end())
    {
        if(s2l_sub_lsp != nullptr)
        {
            children["s2l-sub-lsp"] = s2l_sub_lsp;
        }
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Compact()
    :
    detail_list_size{YType::uint32, "detail-list-size"},
    ps_bs{YType::uint32, "ps-bs"},
    requests{YType::uint32, "requests"},
    rs_bs{YType::uint32, "rs-bs"}
    	,
    session(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session>())
{
    session->parent = this;
    children["session"] = session;

    yang_name = "compact"; yang_parent_name = "session-detailed";
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::~Compact()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::has_data() const
{
    return detail_list_size.is_set
	|| ps_bs.is_set
	|| requests.is_set
	|| rs_bs.is_set
	|| (session !=  nullptr && session->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::has_operation() const
{
    return is_set(operation)
	|| is_set(detail_list_size.operation)
	|| is_set(ps_bs.operation)
	|| is_set(requests.operation)
	|| is_set(rs_bs.operation)
	|| (session !=  nullptr && session->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "compact";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::Compact::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detail_list_size.is_set || is_set(detail_list_size.operation)) leaf_name_data.push_back(detail_list_size.get_name_leafdata());
    if (ps_bs.is_set || is_set(ps_bs.operation)) leaf_name_data.push_back(ps_bs.get_name_leafdata());
    if (requests.is_set || is_set(requests.operation)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (rs_bs.is_set || is_set(rs_bs.operation)) leaf_name_data.push_back(rs_bs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::Compact::get_children()
{
    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detail-list-size")
    {
        detail_list_size = value;
    }
    if(value_path == "ps-bs")
    {
        ps_bs = value;
    }
    if(value_path == "requests")
    {
        requests = value;
    }
    if(value_path == "rs-bs")
    {
        rs_bs = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::Session()
    :
    rsvp_session(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession>())
{
    rsvp_session->parent = this;
    children["rsvp-session"] = rsvp_session;

    yang_name = "session"; yang_parent_name = "compact";
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::~Session()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::has_data() const
{
    return (rsvp_session !=  nullptr && rsvp_session->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::has_operation() const
{
    return is_set(operation)
	|| (rsvp_session !=  nullptr && rsvp_session->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/compact/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-session")
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
        else
        {
            rsvp_session = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession>();
            rsvp_session->parent = this;
            children["rsvp-session"] = rsvp_session;
        }
        return children.at("rsvp-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::get_children()
{
    if(children.find("rsvp-session") == children.end())
    {
        if(rsvp_session != nullptr)
        {
            children["rsvp-session"] = rsvp_session;
        }
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::RsvpSession()
    :
    session_type{YType::enumeration, "session-type"}
    	,
    ipv4(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4>())
	,ipv4_lsp_session(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession>())
	,ipv4_p2mp_lsp_session(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession>())
	,ipv4_uni_session(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv4_lsp_session->parent = this;
    children["ipv4-lsp-session"] = ipv4_lsp_session;

    ipv4_p2mp_lsp_session->parent = this;
    children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;

    ipv4_uni_session->parent = this;
    children["ipv4-uni-session"] = ipv4_uni_session;

    yang_name = "rsvp-session"; yang_parent_name = "session";
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::~RsvpSession()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::has_data() const
{
    return session_type.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_data())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_data())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session_type.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_lsp_session !=  nullptr && ipv4_lsp_session->has_operation())
	|| (ipv4_p2mp_lsp_session !=  nullptr && ipv4_p2mp_lsp_session->has_operation())
	|| (ipv4_uni_session !=  nullptr && ipv4_uni_session->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/compact/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv4-lsp-session")
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        else
        {
            ipv4_lsp_session = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession>();
            ipv4_lsp_session->parent = this;
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
        return children.at("ipv4-lsp-session");
    }

    if(child_yang_name == "ipv4-p2mp-lsp-session")
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        else
        {
            ipv4_p2mp_lsp_session = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession>();
            ipv4_p2mp_lsp_session->parent = this;
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
        return children.at("ipv4-p2mp-lsp-session");
    }

    if(child_yang_name == "ipv4-uni-session")
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        else
        {
            ipv4_uni_session = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession>();
            ipv4_uni_session->parent = this;
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
        return children.at("ipv4-uni-session");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv4-lsp-session") == children.end())
    {
        if(ipv4_lsp_session != nullptr)
        {
            children["ipv4-lsp-session"] = ipv4_lsp_session;
        }
    }

    if(children.find("ipv4-p2mp-lsp-session") == children.end())
    {
        if(ipv4_p2mp_lsp_session != nullptr)
        {
            children["ipv4-p2mp-lsp-session"] = ipv4_p2mp_lsp_session;
        }
    }

    if(children.find("ipv4-uni-session") == children.end())
    {
        if(ipv4_uni_session != nullptr)
        {
            children["ipv4-uni-session"] = ipv4_uni_session;
        }
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-type")
    {
        session_type = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    destination_port{YType::uint16, "destination-port"},
    protocol{YType::uint8, "protocol"}
{
    yang_name = "ipv4"; yang_parent_name = "rsvp-session";
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::~Ipv4()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::has_data() const
{
    return destination_address.is_set
	|| destination_port.is_set
	|| protocol.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(protocol.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::Ipv4LspSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::~Ipv4LspSession()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4LspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::Ipv4UniSession()
    :
    destination_address{YType::str, "destination-address"},
    extended_address{YType::str, "extended-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-uni-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::~Ipv4UniSession()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::has_data() const
{
    return destination_address.is_set
	|| extended_address.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-uni-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_address.is_set || is_set(extended_address.operation)) leaf_name_data.push_back(extended_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4UniSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-address")
    {
        extended_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::Ipv4P2MpLspSession()
    :
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "ipv4-p2mp-lsp-session"; yang_parent_name = "rsvp-session";
}

RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::~Ipv4P2MpLspSession()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::has_data() const
{
    return extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| tunnel_id.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(tunnel_id.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-p2mp-lsp-session";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/compact/session/rsvp-session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::Compact::Session::RsvpSession::Ipv4P2MpLspSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::S2LSubLsp()
    :
    s2l_destination_address{YType::str, "s2l-destination-address"}
{
    yang_name = "s2l-sub-lsp"; yang_parent_name = "session-detailed";
}

RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::~S2LSubLsp()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::has_data() const
{
    return s2l_destination_address.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_destination_address.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-sub-lsp";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_destination_address.is_set || is_set(s2l_destination_address.operation)) leaf_name_data.push_back(s2l_destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::S2LSubLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-destination-address")
    {
        s2l_destination_address = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbRsbInfo()
{
    yang_name = "psb-rsb-info"; yang_parent_name = "session-detailed";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::~PsbRsbInfo()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::has_data() const
{
    for (std::size_t index=0; index<psb_info.size(); index++)
    {
        if(psb_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsb_info.size(); index++)
    {
        if(rsb_info[index]->has_data())
            return true;
    }
    return false;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::has_operation() const
{
    for (std::size_t index=0; index<psb_info.size(); index++)
    {
        if(psb_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsb_info.size(); index++)
    {
        if(rsb_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-rsb-info";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "psb-info")
    {
        for(auto const & c : psb_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo>();
        c->parent = this;
        psb_info.push_back(std::move(c));
        children[segment_path] = psb_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "rsb-info")
    {
        for(auto const & c : rsb_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::RsbInfo>();
        c->parent = this;
        rsb_info.push_back(std::move(c));
        children[segment_path] = rsb_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::get_children()
{
    for (auto const & c : psb_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : rsb_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::set_value(const std::string & value_path, std::string value)
{
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::PsbInfo()
    :
    destination_address{YType::str, "destination-address"},
    in_interface{YType::str, "in-interface"},
    in_label{YType::uint32, "in-label"},
    incoming_interface_address{YType::str, "incoming-interface-address"},
    is_bad_address{YType::boolean, "is-bad-address"},
    is_ero_valid{YType::boolean, "is-ero-valid"},
    is_rro_valid{YType::boolean, "is-rro-valid"},
    is_traffic_spec_valid{YType::boolean, "is-traffic-spec-valid"},
    is_valid{YType::boolean, "is-valid"},
    lsp_id{YType::uint32, "lsp-id"},
    lsp_wrap_label{YType::uint32, "lsp-wrap-label"},
    p2mp_sub_group_origin{YType::str, "p2mp-sub-group-origin"},
    sub_group_id{YType::uint16, "sub-group-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    association(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association>())
	,generic_in_label(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel>())
	,generic_traffic_spec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec>())
	,protection(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection>())
	,reverse_lsp(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp>())
	,traffic_spec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec>())
{
    association->parent = this;
    children["association"] = association;

    generic_in_label->parent = this;
    children["generic-in-label"] = generic_in_label;

    generic_traffic_spec->parent = this;
    children["generic-traffic-spec"] = generic_traffic_spec;

    protection->parent = this;
    children["protection"] = protection;

    reverse_lsp->parent = this;
    children["reverse-lsp"] = reverse_lsp;

    traffic_spec->parent = this;
    children["traffic-spec"] = traffic_spec;

    yang_name = "psb-info"; yang_parent_name = "psb-rsb-info";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::~PsbInfo()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::has_data() const
{
    for (std::size_t index=0; index<ero.size(); index++)
    {
        if(ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rro.size(); index++)
    {
        if(rro[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| in_interface.is_set
	|| in_label.is_set
	|| incoming_interface_address.is_set
	|| is_bad_address.is_set
	|| is_ero_valid.is_set
	|| is_rro_valid.is_set
	|| is_traffic_spec_valid.is_set
	|| is_valid.is_set
	|| lsp_id.is_set
	|| lsp_wrap_label.is_set
	|| p2mp_sub_group_origin.is_set
	|| sub_group_id.is_set
	|| tunnel_name.is_set
	|| (association !=  nullptr && association->has_data())
	|| (generic_in_label !=  nullptr && generic_in_label->has_data())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data())
	|| (traffic_spec !=  nullptr && traffic_spec->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::has_operation() const
{
    for (std::size_t index=0; index<ero.size(); index++)
    {
        if(ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rro.size(); index++)
    {
        if(rro[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(in_interface.operation)
	|| is_set(in_label.operation)
	|| is_set(incoming_interface_address.operation)
	|| is_set(is_bad_address.operation)
	|| is_set(is_ero_valid.operation)
	|| is_set(is_rro_valid.operation)
	|| is_set(is_traffic_spec_valid.operation)
	|| is_set(is_valid.operation)
	|| is_set(lsp_id.operation)
	|| is_set(lsp_wrap_label.operation)
	|| is_set(p2mp_sub_group_origin.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(tunnel_name.operation)
	|| (association !=  nullptr && association->has_operation())
	|| (generic_in_label !=  nullptr && generic_in_label->has_operation())
	|| (generic_traffic_spec !=  nullptr && generic_traffic_spec->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation())
	|| (traffic_spec !=  nullptr && traffic_spec->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psb-info";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (in_interface.is_set || is_set(in_interface.operation)) leaf_name_data.push_back(in_interface.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (incoming_interface_address.is_set || is_set(incoming_interface_address.operation)) leaf_name_data.push_back(incoming_interface_address.get_name_leafdata());
    if (is_bad_address.is_set || is_set(is_bad_address.operation)) leaf_name_data.push_back(is_bad_address.get_name_leafdata());
    if (is_ero_valid.is_set || is_set(is_ero_valid.operation)) leaf_name_data.push_back(is_ero_valid.get_name_leafdata());
    if (is_rro_valid.is_set || is_set(is_rro_valid.operation)) leaf_name_data.push_back(is_rro_valid.get_name_leafdata());
    if (is_traffic_spec_valid.is_set || is_set(is_traffic_spec_valid.operation)) leaf_name_data.push_back(is_traffic_spec_valid.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.operation)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_wrap_label.is_set || is_set(lsp_wrap_label.operation)) leaf_name_data.push_back(lsp_wrap_label.get_name_leafdata());
    if (p2mp_sub_group_origin.is_set || is_set(p2mp_sub_group_origin.operation)) leaf_name_data.push_back(p2mp_sub_group_origin.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "association")
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
        else
        {
            association = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association>();
            association->parent = this;
            children["association"] = association;
        }
        return children.at("association");
    }

    if(child_yang_name == "ero")
    {
        for(auto const & c : ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Ero>();
        c->parent = this;
        ero.push_back(std::move(c));
        children[segment_path] = ero.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-in-label")
    {
        if(generic_in_label != nullptr)
        {
            children["generic-in-label"] = generic_in_label;
        }
        else
        {
            generic_in_label = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel>();
            generic_in_label->parent = this;
            children["generic-in-label"] = generic_in_label;
        }
        return children.at("generic-in-label");
    }

    if(child_yang_name == "generic-traffic-spec")
    {
        if(generic_traffic_spec != nullptr)
        {
            children["generic-traffic-spec"] = generic_traffic_spec;
        }
        else
        {
            generic_traffic_spec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec>();
            generic_traffic_spec->parent = this;
            children["generic-traffic-spec"] = generic_traffic_spec;
        }
        return children.at("generic-traffic-spec");
    }

    if(child_yang_name == "protection")
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
        else
        {
            protection = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection>();
            protection->parent = this;
            children["protection"] = protection;
        }
        return children.at("protection");
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp != nullptr)
        {
            children["reverse-lsp"] = reverse_lsp;
        }
        else
        {
            reverse_lsp = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::ReverseLsp>();
            reverse_lsp->parent = this;
            children["reverse-lsp"] = reverse_lsp;
        }
        return children.at("reverse-lsp");
    }

    if(child_yang_name == "rro")
    {
        for(auto const & c : rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Rro>();
        c->parent = this;
        rro.push_back(std::move(c));
        children[segment_path] = rro.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "traffic-spec")
    {
        if(traffic_spec != nullptr)
        {
            children["traffic-spec"] = traffic_spec;
        }
        else
        {
            traffic_spec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec>();
            traffic_spec->parent = this;
            children["traffic-spec"] = traffic_spec;
        }
        return children.at("traffic-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::get_children()
{
    if(children.find("association") == children.end())
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
    }

    for (auto const & c : ero)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("generic-in-label") == children.end())
    {
        if(generic_in_label != nullptr)
        {
            children["generic-in-label"] = generic_in_label;
        }
    }

    if(children.find("generic-traffic-spec") == children.end())
    {
        if(generic_traffic_spec != nullptr)
        {
            children["generic-traffic-spec"] = generic_traffic_spec;
        }
    }

    if(children.find("protection") == children.end())
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
    }

    if(children.find("reverse-lsp") == children.end())
    {
        if(reverse_lsp != nullptr)
        {
            children["reverse-lsp"] = reverse_lsp;
        }
    }

    for (auto const & c : rro)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("traffic-spec") == children.end())
    {
        if(traffic_spec != nullptr)
        {
            children["traffic-spec"] = traffic_spec;
        }
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "in-interface")
    {
        in_interface = value;
    }
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "incoming-interface-address")
    {
        incoming_interface_address = value;
    }
    if(value_path == "is-bad-address")
    {
        is_bad_address = value;
    }
    if(value_path == "is-ero-valid")
    {
        is_ero_valid = value;
    }
    if(value_path == "is-rro-valid")
    {
        is_rro_valid = value;
    }
    if(value_path == "is-traffic-spec-valid")
    {
        is_traffic_spec_valid = value;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "lsp-wrap-label")
    {
        lsp_wrap_label = value;
    }
    if(value_path == "p2mp-sub-group-origin")
    {
        p2mp_sub_group_origin = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GenericInLabel()
    :
    generic_label_type{YType::enumeration, "generic-label-type"}
    	,
    generalized_label(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel>())
{
    generalized_label->parent = this;
    children["generalized-label"] = generalized_label;

    yang_name = "generic-in-label"; yang_parent_name = "psb-info";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::~GenericInLabel()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::has_data() const
{
    return generic_label_type.is_set
	|| (generalized_label !=  nullptr && generalized_label->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_label_type.operation)
	|| (generalized_label !=  nullptr && generalized_label->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-in-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_label_type.is_set || is_set(generic_label_type.operation)) leaf_name_data.push_back(generic_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generalized-label")
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
        else
        {
            generalized_label = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel>();
            generalized_label->parent = this;
            children["generalized-label"] = generalized_label;
        }
        return children.at("generalized-label");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::get_children()
{
    if(children.find("generalized-label") == children.end())
    {
        if(generalized_label != nullptr)
        {
            children["generalized-label"] = generalized_label;
        }
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-label-type")
    {
        generic_label_type = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::GeneralizedLabel()
    :
    value_{YType::uint32, "value"}
{
    yang_name = "generalized-label"; yang_parent_name = "generic-in-label";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::~GeneralizedLabel()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::has_data() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generalized-label";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/generic-in-label/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericInLabel::GeneralizedLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_.append(value);
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::TrafficSpec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{
    yang_name = "traffic-spec"; yang_parent_name = "psb-info";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::~TrafficSpec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(traffic_average_rate.operation)
	|| is_set(traffic_max_burst.operation)
	|| is_set(traffic_max_unit.operation)
	|| is_set(traffic_min_unit.operation)
	|| is_set(traffic_peak_rate.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.operation)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.operation)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.operation)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.operation)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.operation)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::TrafficSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::GenericTrafficSpec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
    	,
    g709otn_tspec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec>())
	,intsrv_tspec(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec>())
{
    g709otn_tspec->parent = this;
    children["g709otn-tspec"] = g709otn_tspec;

    intsrv_tspec->parent = this;
    children["intsrv-tspec"] = intsrv_tspec;

    yang_name = "generic-traffic-spec"; yang_parent_name = "psb-info";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::~GenericTrafficSpec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::has_data() const
{
    return tspec_type.is_set
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_data())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(tspec_type.operation)
	|| (g709otn_tspec !=  nullptr && g709otn_tspec->has_operation())
	|| (intsrv_tspec !=  nullptr && intsrv_tspec->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-traffic-spec";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.operation)) leaf_name_data.push_back(tspec_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "g709otn-tspec")
    {
        if(g709otn_tspec != nullptr)
        {
            children["g709otn-tspec"] = g709otn_tspec;
        }
        else
        {
            g709otn_tspec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec>();
            g709otn_tspec->parent = this;
            children["g709otn-tspec"] = g709otn_tspec;
        }
        return children.at("g709otn-tspec");
    }

    if(child_yang_name == "intsrv-tspec")
    {
        if(intsrv_tspec != nullptr)
        {
            children["intsrv-tspec"] = intsrv_tspec;
        }
        else
        {
            intsrv_tspec = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec>();
            intsrv_tspec->parent = this;
            children["intsrv-tspec"] = intsrv_tspec;
        }
        return children.at("intsrv-tspec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::get_children()
{
    if(children.find("g709otn-tspec") == children.end())
    {
        if(g709otn_tspec != nullptr)
        {
            children["g709otn-tspec"] = g709otn_tspec;
        }
    }

    if(children.find("intsrv-tspec") == children.end())
    {
        if(intsrv_tspec != nullptr)
        {
            children["intsrv-tspec"] = intsrv_tspec;
        }
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::G709OtnTspec()
    :
    traffic_bit_rate{YType::uint64, "traffic-bit-rate"},
    traffic_multiplier{YType::uint16, "traffic-multiplier"},
    traffic_nvc{YType::uint16, "traffic-nvc"},
    traffic_signal_type{YType::uint8, "traffic-signal-type"}
{
    yang_name = "g709otn-tspec"; yang_parent_name = "generic-traffic-spec";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::~G709OtnTspec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::has_data() const
{
    return traffic_bit_rate.is_set
	|| traffic_multiplier.is_set
	|| traffic_nvc.is_set
	|| traffic_signal_type.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::has_operation() const
{
    return is_set(operation)
	|| is_set(traffic_bit_rate.operation)
	|| is_set(traffic_multiplier.operation)
	|| is_set(traffic_nvc.operation)
	|| is_set(traffic_signal_type.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g709otn-tspec";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/generic-traffic-spec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_bit_rate.is_set || is_set(traffic_bit_rate.operation)) leaf_name_data.push_back(traffic_bit_rate.get_name_leafdata());
    if (traffic_multiplier.is_set || is_set(traffic_multiplier.operation)) leaf_name_data.push_back(traffic_multiplier.get_name_leafdata());
    if (traffic_nvc.is_set || is_set(traffic_nvc.operation)) leaf_name_data.push_back(traffic_nvc.get_name_leafdata());
    if (traffic_signal_type.is_set || is_set(traffic_signal_type.operation)) leaf_name_data.push_back(traffic_signal_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::G709OtnTspec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-bit-rate")
    {
        traffic_bit_rate = value;
    }
    if(value_path == "traffic-multiplier")
    {
        traffic_multiplier = value;
    }
    if(value_path == "traffic-nvc")
    {
        traffic_nvc = value;
    }
    if(value_path == "traffic-signal-type")
    {
        traffic_signal_type = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::IntsrvTspec()
    :
    traffic_average_rate{YType::uint64, "traffic-average-rate"},
    traffic_max_burst{YType::uint64, "traffic-max-burst"},
    traffic_max_unit{YType::uint32, "traffic-max-unit"},
    traffic_min_unit{YType::uint32, "traffic-min-unit"},
    traffic_peak_rate{YType::uint64, "traffic-peak-rate"}
{
    yang_name = "intsrv-tspec"; yang_parent_name = "generic-traffic-spec";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::~IntsrvTspec()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::has_data() const
{
    return traffic_average_rate.is_set
	|| traffic_max_burst.is_set
	|| traffic_max_unit.is_set
	|| traffic_min_unit.is_set
	|| traffic_peak_rate.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::has_operation() const
{
    return is_set(operation)
	|| is_set(traffic_average_rate.operation)
	|| is_set(traffic_max_burst.operation)
	|| is_set(traffic_max_unit.operation)
	|| is_set(traffic_min_unit.operation)
	|| is_set(traffic_peak_rate.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intsrv-tspec";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/generic-traffic-spec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_average_rate.is_set || is_set(traffic_average_rate.operation)) leaf_name_data.push_back(traffic_average_rate.get_name_leafdata());
    if (traffic_max_burst.is_set || is_set(traffic_max_burst.operation)) leaf_name_data.push_back(traffic_max_burst.get_name_leafdata());
    if (traffic_max_unit.is_set || is_set(traffic_max_unit.operation)) leaf_name_data.push_back(traffic_max_unit.get_name_leafdata());
    if (traffic_min_unit.is_set || is_set(traffic_min_unit.operation)) leaf_name_data.push_back(traffic_min_unit.get_name_leafdata());
    if (traffic_peak_rate.is_set || is_set(traffic_peak_rate.operation)) leaf_name_data.push_back(traffic_peak_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::GenericTrafficSpec::IntsrvTspec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-average-rate")
    {
        traffic_average_rate = value;
    }
    if(value_path == "traffic-max-burst")
    {
        traffic_max_burst = value;
    }
    if(value_path == "traffic-max-unit")
    {
        traffic_max_unit = value;
    }
    if(value_path == "traffic-min-unit")
    {
        traffic_min_unit = value;
    }
    if(value_path == "traffic-peak-rate")
    {
        traffic_peak_rate = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Association()
    :
    association_type{YType::enumeration, "association-type"}
    	,
    extended_ipv4(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4>())
	,extended_ipv6(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6>())
	,ipv4(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4>())
	,ipv6(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6>())
{
    extended_ipv4->parent = this;
    children["extended-ipv4"] = extended_ipv4;

    extended_ipv6->parent = this;
    children["extended-ipv6"] = extended_ipv6;

    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    yang_name = "association"; yang_parent_name = "psb-info";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::~Association()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::has_data() const
{
    return association_type.is_set
	|| (extended_ipv4 !=  nullptr && extended_ipv4->has_data())
	|| (extended_ipv6 !=  nullptr && extended_ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::has_operation() const
{
    return is_set(operation)
	|| is_set(association_type.operation)
	|| (extended_ipv4 !=  nullptr && extended_ipv4->has_operation())
	|| (extended_ipv6 !=  nullptr && extended_ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_type.is_set || is_set(association_type.operation)) leaf_name_data.push_back(association_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-ipv4")
    {
        if(extended_ipv4 != nullptr)
        {
            children["extended-ipv4"] = extended_ipv4;
        }
        else
        {
            extended_ipv4 = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4>();
            extended_ipv4->parent = this;
            children["extended-ipv4"] = extended_ipv4;
        }
        return children.at("extended-ipv4");
    }

    if(child_yang_name == "extended-ipv6")
    {
        if(extended_ipv6 != nullptr)
        {
            children["extended-ipv6"] = extended_ipv6;
        }
        else
        {
            extended_ipv6 = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6>();
            extended_ipv6->parent = this;
            children["extended-ipv6"] = extended_ipv6;
        }
        return children.at("extended-ipv6");
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::get_children()
{
    if(children.find("extended-ipv4") == children.end())
    {
        if(extended_ipv4 != nullptr)
        {
            children["extended-ipv4"] = extended_ipv4;
        }
    }

    if(children.find("extended-ipv6") == children.end())
    {
        if(extended_ipv6 != nullptr)
        {
            children["extended-ipv6"] = extended_ipv6;
        }
    }

    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "association-type")
    {
        association_type = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::Ipv4()
    :
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    type{YType::uint16, "type"}
{
    yang_name = "ipv4"; yang_parent_name = "association";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::~Ipv4()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::has_data() const
{
    return id.is_set
	|| source.is_set
	|| type.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(source.operation)
	|| is_set(type.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::Ipv6()
    :
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    type{YType::uint16, "type"}
{
    yang_name = "ipv6"; yang_parent_name = "association";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::~Ipv6()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::has_data() const
{
    return id.is_set
	|| source.is_set
	|| type.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(source.operation)
	|| is_set(type.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::ExtendedIpv4()
    :
    extended_id{YType::uint32, "extended-id"},
    global_source{YType::uint32, "global-source"},
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    type{YType::uint16, "type"}
{
    yang_name = "extended-ipv4"; yang_parent_name = "association";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::~ExtendedIpv4()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::has_data() const
{
    for (auto const & leaf : extended_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return global_source.is_set
	|| id.is_set
	|| source.is_set
	|| type.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::has_operation() const
{
    for (auto const & leaf : extended_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(extended_id.operation)
	|| is_set(global_source.operation)
	|| is_set(id.operation)
	|| is_set(source.operation)
	|| is_set(type.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv4";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_source.is_set || is_set(global_source.operation)) leaf_name_data.push_back(global_source.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());

    auto extended_id_name_datas = extended_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_id_name_datas.begin(), extended_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-id")
    {
        extended_id.append(value);
    }
    if(value_path == "global-source")
    {
        global_source = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::ExtendedIpv6()
    :
    extended_id{YType::uint32, "extended-id"},
    global_source{YType::uint32, "global-source"},
    id{YType::uint16, "id"},
    source{YType::str, "source"},
    type{YType::uint16, "type"}
{
    yang_name = "extended-ipv6"; yang_parent_name = "association";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::~ExtendedIpv6()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::has_data() const
{
    for (auto const & leaf : extended_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return global_source.is_set
	|| id.is_set
	|| source.is_set
	|| type.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::has_operation() const
{
    for (auto const & leaf : extended_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(extended_id.operation)
	|| is_set(global_source.operation)
	|| is_set(id.operation)
	|| is_set(source.operation)
	|| is_set(type.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv6";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/association/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_source.is_set || is_set(global_source.operation)) leaf_name_data.push_back(global_source.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());

    auto extended_id_name_datas = extended_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_id_name_datas.begin(), extended_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Association::ExtendedIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-id")
    {
        extended_id.append(value);
    }
    if(value_path == "global-source")
    {
        global_source = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::Protection()
    :
    n{YType::boolean, "n"},
    o{YType::boolean, "o"},
    p{YType::boolean, "p"},
    s{YType::boolean, "s"}
    	,
    link_flags(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags>())
	,lsp_flags(std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags>())
{
    link_flags->parent = this;
    children["link-flags"] = link_flags;

    lsp_flags->parent = this;
    children["lsp-flags"] = lsp_flags;

    yang_name = "protection"; yang_parent_name = "psb-info";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::~Protection()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::has_data() const
{
    return n.is_set
	|| o.is_set
	|| p.is_set
	|| s.is_set
	|| (link_flags !=  nullptr && link_flags->has_data())
	|| (lsp_flags !=  nullptr && lsp_flags->has_data());
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::has_operation() const
{
    return is_set(operation)
	|| is_set(n.operation)
	|| is_set(o.operation)
	|| is_set(p.operation)
	|| is_set(s.operation)
	|| (link_flags !=  nullptr && link_flags->has_operation())
	|| (lsp_flags !=  nullptr && lsp_flags->has_operation());
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (n.is_set || is_set(n.operation)) leaf_name_data.push_back(n.get_name_leafdata());
    if (o.is_set || is_set(o.operation)) leaf_name_data.push_back(o.get_name_leafdata());
    if (p.is_set || is_set(p.operation)) leaf_name_data.push_back(p.get_name_leafdata());
    if (s.is_set || is_set(s.operation)) leaf_name_data.push_back(s.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-flags")
    {
        if(link_flags != nullptr)
        {
            children["link-flags"] = link_flags;
        }
        else
        {
            link_flags = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LinkFlags>();
            link_flags->parent = this;
            children["link-flags"] = link_flags;
        }
        return children.at("link-flags");
    }

    if(child_yang_name == "lsp-flags")
    {
        if(lsp_flags != nullptr)
        {
            children["lsp-flags"] = lsp_flags;
        }
        else
        {
            lsp_flags = std::make_shared<RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags>();
            lsp_flags->parent = this;
            children["lsp-flags"] = lsp_flags;
        }
        return children.at("lsp-flags");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::get_children()
{
    if(children.find("link-flags") == children.end())
    {
        if(link_flags != nullptr)
        {
            children["link-flags"] = link_flags;
        }
    }

    if(children.find("lsp-flags") == children.end())
    {
        if(lsp_flags != nullptr)
        {
            children["lsp-flags"] = lsp_flags;
        }
    }

    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "n")
    {
        n = value;
    }
    if(value_path == "o")
    {
        o = value;
    }
    if(value_path == "p")
    {
        p = value;
    }
    if(value_path == "s")
    {
        s = value;
    }
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::LspFlags()
    :
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"}
{
    yang_name = "lsp-flags"; yang_parent_name = "protection";
}

RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::~LspFlags()
{
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::has_data() const
{
    return one_plus_one_bi.is_set
	|| one_plus_one_uni.is_set
	|| one_to_n_protection_et.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set;
}

bool RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(one_plus_one_bi.operation)
	|| is_set(one_plus_one_uni.operation)
	|| is_set(one_to_n_protection_et.operation)
	|| is_set(rerouting.operation)
	|| is_set(rerouting_no_et.operation);
}

std::string RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-flags";

    return path_buffer.str();

}

EntityPath RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby/session-detaileds/session-detailed/psb-rsb-info/psb-info/protection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.operation)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.operation)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.operation)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.operation)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.operation)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::get_children()
{
    return children;
}

void RsvpStandby::SessionDetaileds::SessionDetailed::PsbRsbInfo::PsbInfo::Protection::LspFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
    }
}


}
}

