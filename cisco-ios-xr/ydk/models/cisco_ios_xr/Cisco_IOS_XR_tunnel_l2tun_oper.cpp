
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tunnel_l2tun_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tunnel_l2tun_oper {

L2Tp::L2Tp()
    :
    classes(std::make_shared<L2Tp::Classes>())
	,counter_hist_fail(std::make_shared<L2Tp::CounterHistFail>())
	,counters(std::make_shared<L2Tp::Counters>())
	,session(std::make_shared<L2Tp::Session>())
	,sessions(std::make_shared<L2Tp::Sessions>())
	,tunnel_configurations(std::make_shared<L2Tp::TunnelConfigurations>())
	,tunnels(std::make_shared<L2Tp::Tunnels>())
{
    classes->parent = this;
    children["classes"] = classes;

    counter_hist_fail->parent = this;
    children["counter-hist-fail"] = counter_hist_fail;

    counters->parent = this;
    children["counters"] = counters;

    session->parent = this;
    children["session"] = session;

    sessions->parent = this;
    children["sessions"] = sessions;

    tunnel_configurations->parent = this;
    children["tunnel-configurations"] = tunnel_configurations;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    yang_name = "l2tp"; yang_parent_name = "Cisco-IOS-XR-tunnel-l2tun-oper";
}

L2Tp::~L2Tp()
{
}

bool L2Tp::has_data() const
{
    return (classes !=  nullptr && classes->has_data())
	|| (counter_hist_fail !=  nullptr && counter_hist_fail->has_data())
	|| (counters !=  nullptr && counters->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (tunnel_configurations !=  nullptr && tunnel_configurations->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool L2Tp::has_operation() const
{
    return is_set(operation)
	|| (classes !=  nullptr && classes->has_operation())
	|| (counter_hist_fail !=  nullptr && counter_hist_fail->has_operation())
	|| (counters !=  nullptr && counters->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (tunnel_configurations !=  nullptr && tunnel_configurations->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp";

    return path_buffer.str();

}

EntityPath L2Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "classes")
    {
        if(classes != nullptr)
        {
            children["classes"] = classes;
        }
        else
        {
            classes = std::make_shared<L2Tp::Classes>();
            classes->parent = this;
            children["classes"] = classes;
        }
        return children.at("classes");
    }

    if(child_yang_name == "counter-hist-fail")
    {
        if(counter_hist_fail != nullptr)
        {
            children["counter-hist-fail"] = counter_hist_fail;
        }
        else
        {
            counter_hist_fail = std::make_shared<L2Tp::CounterHistFail>();
            counter_hist_fail->parent = this;
            children["counter-hist-fail"] = counter_hist_fail;
        }
        return children.at("counter-hist-fail");
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<L2Tp::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<L2Tp::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<L2Tp::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    if(child_yang_name == "tunnel-configurations")
    {
        if(tunnel_configurations != nullptr)
        {
            children["tunnel-configurations"] = tunnel_configurations;
        }
        else
        {
            tunnel_configurations = std::make_shared<L2Tp::TunnelConfigurations>();
            tunnel_configurations->parent = this;
            children["tunnel-configurations"] = tunnel_configurations;
        }
        return children.at("tunnel-configurations");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<L2Tp::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::get_children()
{
    if(children.find("classes") == children.end())
    {
        if(classes != nullptr)
        {
            children["classes"] = classes;
        }
    }

    if(children.find("counter-hist-fail") == children.end())
    {
        if(counter_hist_fail != nullptr)
        {
            children["counter-hist-fail"] = counter_hist_fail;
        }
    }

    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    if(children.find("tunnel-configurations") == children.end())
    {
        if(tunnel_configurations != nullptr)
        {
            children["tunnel-configurations"] = tunnel_configurations;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    return children;
}

void L2Tp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> L2Tp::clone_ptr() const
{
    return std::make_shared<L2Tp>();
}

std::string L2Tp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2Tp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2Tp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

L2Tp::Counters::Counters()
    :
    control(std::make_shared<L2Tp::Counters::Control>())
{
    control->parent = this;
    children["control"] = control;

    yang_name = "counters"; yang_parent_name = "l2tp";
}

L2Tp::Counters::~Counters()
{
}

bool L2Tp::Counters::has_data() const
{
    return (control !=  nullptr && control->has_data());
}

bool L2Tp::Counters::has_operation() const
{
    return is_set(operation)
	|| (control !=  nullptr && control->has_operation());
}

std::string L2Tp::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "control")
    {
        if(control != nullptr)
        {
            children["control"] = control;
        }
        else
        {
            control = std::make_shared<L2Tp::Counters::Control>();
            control->parent = this;
            children["control"] = control;
        }
        return children.at("control");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::get_children()
{
    if(children.find("control") == children.end())
    {
        if(control != nullptr)
        {
            children["control"] = control;
        }
    }

    return children;
}

void L2Tp::Counters::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::Counters::Control::Control()
    :
    tunnel_xr(std::make_shared<L2Tp::Counters::Control::TunnelXr>())
	,tunnels(std::make_shared<L2Tp::Counters::Control::Tunnels>())
{
    tunnel_xr->parent = this;
    children["tunnel-xr"] = tunnel_xr;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    yang_name = "control"; yang_parent_name = "counters";
}

L2Tp::Counters::Control::~Control()
{
}

bool L2Tp::Counters::Control::has_data() const
{
    return (tunnel_xr !=  nullptr && tunnel_xr->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool L2Tp::Counters::Control::has_operation() const
{
    return is_set(operation)
	|| (tunnel_xr !=  nullptr && tunnel_xr->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string L2Tp::Counters::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-xr")
    {
        if(tunnel_xr != nullptr)
        {
            children["tunnel-xr"] = tunnel_xr;
        }
        else
        {
            tunnel_xr = std::make_shared<L2Tp::Counters::Control::TunnelXr>();
            tunnel_xr->parent = this;
            children["tunnel-xr"] = tunnel_xr;
        }
        return children.at("tunnel-xr");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<L2Tp::Counters::Control::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::get_children()
{
    if(children.find("tunnel-xr") == children.end())
    {
        if(tunnel_xr != nullptr)
        {
            children["tunnel-xr"] = tunnel_xr;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    return children;
}

void L2Tp::Counters::Control::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::Counters::Control::TunnelXr::TunnelXr()
    :
    authentication(std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication>())
	,global(std::make_shared<L2Tp::Counters::Control::TunnelXr::Global>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    global->parent = this;
    children["global"] = global;

    yang_name = "tunnel-xr"; yang_parent_name = "control";
}

L2Tp::Counters::Control::TunnelXr::~TunnelXr()
{
}

bool L2Tp::Counters::Control::TunnelXr::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool L2Tp::Counters::Control::TunnelXr::has_operation() const
{
    return is_set(operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string L2Tp::Counters::Control::TunnelXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-xr";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<L2Tp::Counters::Control::TunnelXr::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    return children;
}

void L2Tp::Counters::Control::TunnelXr::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::Counters::Control::TunnelXr::Authentication::Authentication()
    :
    challenge_avp(std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp>())
	,challenge_reponse(std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse>())
	,common_digest(std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest>())
	,integrity_check(std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck>())
	,local_secret(std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret>())
	,nonce_avp(std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp>())
	,overall_statistics(std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics>())
	,primary_digest(std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest>())
	,secondary_digest(std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest>())
{
    challenge_avp->parent = this;
    children["challenge-avp"] = challenge_avp;

    challenge_reponse->parent = this;
    children["challenge-reponse"] = challenge_reponse;

    common_digest->parent = this;
    children["common-digest"] = common_digest;

    integrity_check->parent = this;
    children["integrity-check"] = integrity_check;

    local_secret->parent = this;
    children["local-secret"] = local_secret;

    nonce_avp->parent = this;
    children["nonce-avp"] = nonce_avp;

    overall_statistics->parent = this;
    children["overall-statistics"] = overall_statistics;

    primary_digest->parent = this;
    children["primary-digest"] = primary_digest;

    secondary_digest->parent = this;
    children["secondary-digest"] = secondary_digest;

    yang_name = "authentication"; yang_parent_name = "tunnel-xr";
}

L2Tp::Counters::Control::TunnelXr::Authentication::~Authentication()
{
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::has_data() const
{
    return (challenge_avp !=  nullptr && challenge_avp->has_data())
	|| (challenge_reponse !=  nullptr && challenge_reponse->has_data())
	|| (common_digest !=  nullptr && common_digest->has_data())
	|| (integrity_check !=  nullptr && integrity_check->has_data())
	|| (local_secret !=  nullptr && local_secret->has_data())
	|| (nonce_avp !=  nullptr && nonce_avp->has_data())
	|| (overall_statistics !=  nullptr && overall_statistics->has_data())
	|| (primary_digest !=  nullptr && primary_digest->has_data())
	|| (secondary_digest !=  nullptr && secondary_digest->has_data());
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::has_operation() const
{
    return is_set(operation)
	|| (challenge_avp !=  nullptr && challenge_avp->has_operation())
	|| (challenge_reponse !=  nullptr && challenge_reponse->has_operation())
	|| (common_digest !=  nullptr && common_digest->has_operation())
	|| (integrity_check !=  nullptr && integrity_check->has_operation())
	|| (local_secret !=  nullptr && local_secret->has_operation())
	|| (nonce_avp !=  nullptr && nonce_avp->has_operation())
	|| (overall_statistics !=  nullptr && overall_statistics->has_operation())
	|| (primary_digest !=  nullptr && primary_digest->has_operation())
	|| (secondary_digest !=  nullptr && secondary_digest->has_operation());
}

std::string L2Tp::Counters::Control::TunnelXr::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "challenge-avp")
    {
        if(challenge_avp != nullptr)
        {
            children["challenge-avp"] = challenge_avp;
        }
        else
        {
            challenge_avp = std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp>();
            challenge_avp->parent = this;
            children["challenge-avp"] = challenge_avp;
        }
        return children.at("challenge-avp");
    }

    if(child_yang_name == "challenge-reponse")
    {
        if(challenge_reponse != nullptr)
        {
            children["challenge-reponse"] = challenge_reponse;
        }
        else
        {
            challenge_reponse = std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse>();
            challenge_reponse->parent = this;
            children["challenge-reponse"] = challenge_reponse;
        }
        return children.at("challenge-reponse");
    }

    if(child_yang_name == "common-digest")
    {
        if(common_digest != nullptr)
        {
            children["common-digest"] = common_digest;
        }
        else
        {
            common_digest = std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest>();
            common_digest->parent = this;
            children["common-digest"] = common_digest;
        }
        return children.at("common-digest");
    }

    if(child_yang_name == "integrity-check")
    {
        if(integrity_check != nullptr)
        {
            children["integrity-check"] = integrity_check;
        }
        else
        {
            integrity_check = std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck>();
            integrity_check->parent = this;
            children["integrity-check"] = integrity_check;
        }
        return children.at("integrity-check");
    }

    if(child_yang_name == "local-secret")
    {
        if(local_secret != nullptr)
        {
            children["local-secret"] = local_secret;
        }
        else
        {
            local_secret = std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret>();
            local_secret->parent = this;
            children["local-secret"] = local_secret;
        }
        return children.at("local-secret");
    }

    if(child_yang_name == "nonce-avp")
    {
        if(nonce_avp != nullptr)
        {
            children["nonce-avp"] = nonce_avp;
        }
        else
        {
            nonce_avp = std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp>();
            nonce_avp->parent = this;
            children["nonce-avp"] = nonce_avp;
        }
        return children.at("nonce-avp");
    }

    if(child_yang_name == "overall-statistics")
    {
        if(overall_statistics != nullptr)
        {
            children["overall-statistics"] = overall_statistics;
        }
        else
        {
            overall_statistics = std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics>();
            overall_statistics->parent = this;
            children["overall-statistics"] = overall_statistics;
        }
        return children.at("overall-statistics");
    }

    if(child_yang_name == "primary-digest")
    {
        if(primary_digest != nullptr)
        {
            children["primary-digest"] = primary_digest;
        }
        else
        {
            primary_digest = std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest>();
            primary_digest->parent = this;
            children["primary-digest"] = primary_digest;
        }
        return children.at("primary-digest");
    }

    if(child_yang_name == "secondary-digest")
    {
        if(secondary_digest != nullptr)
        {
            children["secondary-digest"] = secondary_digest;
        }
        else
        {
            secondary_digest = std::make_shared<L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest>();
            secondary_digest->parent = this;
            children["secondary-digest"] = secondary_digest;
        }
        return children.at("secondary-digest");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Authentication::get_children()
{
    if(children.find("challenge-avp") == children.end())
    {
        if(challenge_avp != nullptr)
        {
            children["challenge-avp"] = challenge_avp;
        }
    }

    if(children.find("challenge-reponse") == children.end())
    {
        if(challenge_reponse != nullptr)
        {
            children["challenge-reponse"] = challenge_reponse;
        }
    }

    if(children.find("common-digest") == children.end())
    {
        if(common_digest != nullptr)
        {
            children["common-digest"] = common_digest;
        }
    }

    if(children.find("integrity-check") == children.end())
    {
        if(integrity_check != nullptr)
        {
            children["integrity-check"] = integrity_check;
        }
    }

    if(children.find("local-secret") == children.end())
    {
        if(local_secret != nullptr)
        {
            children["local-secret"] = local_secret;
        }
    }

    if(children.find("nonce-avp") == children.end())
    {
        if(nonce_avp != nullptr)
        {
            children["nonce-avp"] = nonce_avp;
        }
    }

    if(children.find("overall-statistics") == children.end())
    {
        if(overall_statistics != nullptr)
        {
            children["overall-statistics"] = overall_statistics;
        }
    }

    if(children.find("primary-digest") == children.end())
    {
        if(primary_digest != nullptr)
        {
            children["primary-digest"] = primary_digest;
        }
    }

    if(children.find("secondary-digest") == children.end())
    {
        if(secondary_digest != nullptr)
        {
            children["secondary-digest"] = secondary_digest;
        }
    }

    return children;
}

void L2Tp::Counters::Control::TunnelXr::Authentication::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp::NonceAvp()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "nonce-avp"; yang_parent_name = "authentication";
}

L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp::~NonceAvp()
{
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nonce-avp";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest::CommonDigest()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "common-digest"; yang_parent_name = "authentication";
}

L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest::~CommonDigest()
{
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-digest";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::PrimaryDigest()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "primary-digest"; yang_parent_name = "authentication";
}

L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::~PrimaryDigest()
{
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-digest";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::SecondaryDigest()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "secondary-digest"; yang_parent_name = "authentication";
}

L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::~SecondaryDigest()
{
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-digest";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::IntegrityCheck()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "integrity-check"; yang_parent_name = "authentication";
}

L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::~IntegrityCheck()
{
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "integrity-check";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret::LocalSecret()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "local-secret"; yang_parent_name = "authentication";
}

L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret::~LocalSecret()
{
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-secret";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::ChallengeAvp()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "challenge-avp"; yang_parent_name = "authentication";
}

L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::~ChallengeAvp()
{
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "challenge-avp";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::ChallengeReponse()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "challenge-reponse"; yang_parent_name = "authentication";
}

L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::~ChallengeReponse()
{
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "challenge-reponse";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::OverallStatistics()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "overall-statistics"; yang_parent_name = "authentication";
}

L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::~OverallStatistics()
{
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overall-statistics";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Global::Global()
    :
    total_drop{YType::uint32, "total-drop"},
    total_received{YType::uint32, "total-received"},
    total_retransmit{YType::uint32, "total-retransmit"},
    total_transmit{YType::uint32, "total-transmit"}
    	,
    drop(std::make_shared<L2Tp::Counters::Control::TunnelXr::Global::Drop>())
	,received(std::make_shared<L2Tp::Counters::Control::TunnelXr::Global::Received>())
	,retransmit(std::make_shared<L2Tp::Counters::Control::TunnelXr::Global::Retransmit>())
	,transmit(std::make_shared<L2Tp::Counters::Control::TunnelXr::Global::Transmit>())
{
    drop->parent = this;
    children["drop"] = drop;

    received->parent = this;
    children["received"] = received;

    retransmit->parent = this;
    children["retransmit"] = retransmit;

    transmit->parent = this;
    children["transmit"] = transmit;

    yang_name = "global"; yang_parent_name = "tunnel-xr";
}

L2Tp::Counters::Control::TunnelXr::Global::~Global()
{
}

bool L2Tp::Counters::Control::TunnelXr::Global::has_data() const
{
    return total_drop.is_set
	|| total_received.is_set
	|| total_retransmit.is_set
	|| total_transmit.is_set
	|| (drop !=  nullptr && drop->has_data())
	|| (received !=  nullptr && received->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (transmit !=  nullptr && transmit->has_data());
}

bool L2Tp::Counters::Control::TunnelXr::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(total_drop.operation)
	|| is_set(total_received.operation)
	|| is_set(total_retransmit.operation)
	|| is_set(total_transmit.operation)
	|| (drop !=  nullptr && drop->has_operation())
	|| (received !=  nullptr && received->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation());
}

std::string L2Tp::Counters::Control::TunnelXr::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_drop.is_set || is_set(total_drop.operation)) leaf_name_data.push_back(total_drop.get_name_leafdata());
    if (total_received.is_set || is_set(total_received.operation)) leaf_name_data.push_back(total_received.get_name_leafdata());
    if (total_retransmit.is_set || is_set(total_retransmit.operation)) leaf_name_data.push_back(total_retransmit.get_name_leafdata());
    if (total_transmit.is_set || is_set(total_transmit.operation)) leaf_name_data.push_back(total_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "drop")
    {
        if(drop != nullptr)
        {
            children["drop"] = drop;
        }
        else
        {
            drop = std::make_shared<L2Tp::Counters::Control::TunnelXr::Global::Drop>();
            drop->parent = this;
            children["drop"] = drop;
        }
        return children.at("drop");
    }

    if(child_yang_name == "received")
    {
        if(received != nullptr)
        {
            children["received"] = received;
        }
        else
        {
            received = std::make_shared<L2Tp::Counters::Control::TunnelXr::Global::Received>();
            received->parent = this;
            children["received"] = received;
        }
        return children.at("received");
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit != nullptr)
        {
            children["retransmit"] = retransmit;
        }
        else
        {
            retransmit = std::make_shared<L2Tp::Counters::Control::TunnelXr::Global::Retransmit>();
            retransmit->parent = this;
            children["retransmit"] = retransmit;
        }
        return children.at("retransmit");
    }

    if(child_yang_name == "transmit")
    {
        if(transmit != nullptr)
        {
            children["transmit"] = transmit;
        }
        else
        {
            transmit = std::make_shared<L2Tp::Counters::Control::TunnelXr::Global::Transmit>();
            transmit->parent = this;
            children["transmit"] = transmit;
        }
        return children.at("transmit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Global::get_children()
{
    if(children.find("drop") == children.end())
    {
        if(drop != nullptr)
        {
            children["drop"] = drop;
        }
    }

    if(children.find("received") == children.end())
    {
        if(received != nullptr)
        {
            children["received"] = received;
        }
    }

    if(children.find("retransmit") == children.end())
    {
        if(retransmit != nullptr)
        {
            children["retransmit"] = retransmit;
        }
    }

    if(children.find("transmit") == children.end())
    {
        if(transmit != nullptr)
        {
            children["transmit"] = transmit;
        }
    }

    return children;
}

void L2Tp::Counters::Control::TunnelXr::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-drop")
    {
        total_drop = value;
    }
    if(value_path == "total-received")
    {
        total_received = value;
    }
    if(value_path == "total-retransmit")
    {
        total_retransmit = value;
    }
    if(value_path == "total-transmit")
    {
        total_transmit = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Global::Transmit::Transmit()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "transmit"; yang_parent_name = "global";
}

L2Tp::Counters::Control::TunnelXr::Global::Transmit::~Transmit()
{
}

bool L2Tp::Counters::Control::TunnelXr::Global::Transmit::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Global::Transmit::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Global::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Global::Transmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Global::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Global::Transmit::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Global::Transmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Global::Retransmit::Retransmit()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "retransmit"; yang_parent_name = "global";
}

L2Tp::Counters::Control::TunnelXr::Global::Retransmit::~Retransmit()
{
}

bool L2Tp::Counters::Control::TunnelXr::Global::Retransmit::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Global::Retransmit::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Global::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Global::Retransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Global::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Global::Retransmit::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Global::Retransmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Global::Received::Received()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "received"; yang_parent_name = "global";
}

L2Tp::Counters::Control::TunnelXr::Global::Received::~Received()
{
}

bool L2Tp::Counters::Control::TunnelXr::Global::Received::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Global::Received::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Global::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Global::Received::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Global::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Global::Received::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Global::Received::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tp::Counters::Control::TunnelXr::Global::Drop::Drop()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "drop"; yang_parent_name = "global";
}

L2Tp::Counters::Control::TunnelXr::Global::Drop::~Drop()
{
}

bool L2Tp::Counters::Control::TunnelXr::Global::Drop::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tp::Counters::Control::TunnelXr::Global::Drop::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tp::Counters::Control::TunnelXr::Global::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::TunnelXr::Global::Drop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnel-xr/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::TunnelXr::Global::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::TunnelXr::Global::Drop::get_children()
{
    return children;
}

void L2Tp::Counters::Control::TunnelXr::Global::Drop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tp::Counters::Control::Tunnels::Tunnels()
{
    yang_name = "tunnels"; yang_parent_name = "control";
}

L2Tp::Counters::Control::Tunnels::~Tunnels()
{
}

bool L2Tp::Counters::Control::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tp::Counters::Control::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tp::Counters::Control::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::Tunnels::get_children()
{
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Tp::Counters::Control::Tunnels::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::Counters::Control::Tunnels::Tunnel::Tunnel()
    :
    tunnel_id{YType::int32, "tunnel-id"}
    	,
    brief(std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel::Brief>())
	,global(std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel::Global>())
{
    brief->parent = this;
    children["brief"] = brief;

    global->parent = this;
    children["global"] = global;

    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

L2Tp::Counters::Control::Tunnels::Tunnel::~Tunnel()
{
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::has_data() const
{
    return tunnel_id.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_id.operation)
	|| (brief !=  nullptr && brief->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string L2Tp::Counters::Control::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/counters/control/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief")
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
        else
        {
            brief = std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel::Brief>();
            brief->parent = this;
            children["brief"] = brief;
        }
        return children.at("brief");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::Tunnels::Tunnel::get_children()
{
    if(children.find("brief") == children.end())
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    return children;
}

void L2Tp::Counters::Control::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2Tp::Counters::Control::Tunnels::Tunnel::Brief::Brief()
    :
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"}
{
    yang_name = "brief"; yang_parent_name = "tunnel";
}

L2Tp::Counters::Control::Tunnels::Tunnel::Brief::~Brief()
{
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::Brief::has_data() const
{
    return local_address.is_set
	|| remote_address.is_set
	|| remote_tunnel_id.is_set;
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::Brief::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(remote_address.operation)
	|| is_set(remote_tunnel_id.operation);
}

std::string L2Tp::Counters::Control::Tunnels::Tunnel::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::Tunnels::Tunnel::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Brief' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::Tunnels::Tunnel::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::Tunnels::Tunnel::Brief::get_children()
{
    return children;
}

void L2Tp::Counters::Control::Tunnels::Tunnel::Brief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
}

L2Tp::Counters::Control::Tunnels::Tunnel::Global::Global()
    :
    total_drop{YType::uint32, "total-drop"},
    total_received{YType::uint32, "total-received"},
    total_retransmit{YType::uint32, "total-retransmit"},
    total_transmit{YType::uint32, "total-transmit"}
    	,
    drop(std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop>())
	,received(std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received>())
	,retransmit(std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit>())
	,transmit(std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit>())
{
    drop->parent = this;
    children["drop"] = drop;

    received->parent = this;
    children["received"] = received;

    retransmit->parent = this;
    children["retransmit"] = retransmit;

    transmit->parent = this;
    children["transmit"] = transmit;

    yang_name = "global"; yang_parent_name = "tunnel";
}

L2Tp::Counters::Control::Tunnels::Tunnel::Global::~Global()
{
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::Global::has_data() const
{
    return total_drop.is_set
	|| total_received.is_set
	|| total_retransmit.is_set
	|| total_transmit.is_set
	|| (drop !=  nullptr && drop->has_data())
	|| (received !=  nullptr && received->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (transmit !=  nullptr && transmit->has_data());
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(total_drop.operation)
	|| is_set(total_received.operation)
	|| is_set(total_retransmit.operation)
	|| is_set(total_transmit.operation)
	|| (drop !=  nullptr && drop->has_operation())
	|| (received !=  nullptr && received->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation());
}

std::string L2Tp::Counters::Control::Tunnels::Tunnel::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::Tunnels::Tunnel::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_drop.is_set || is_set(total_drop.operation)) leaf_name_data.push_back(total_drop.get_name_leafdata());
    if (total_received.is_set || is_set(total_received.operation)) leaf_name_data.push_back(total_received.get_name_leafdata());
    if (total_retransmit.is_set || is_set(total_retransmit.operation)) leaf_name_data.push_back(total_retransmit.get_name_leafdata());
    if (total_transmit.is_set || is_set(total_transmit.operation)) leaf_name_data.push_back(total_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::Tunnels::Tunnel::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "drop")
    {
        if(drop != nullptr)
        {
            children["drop"] = drop;
        }
        else
        {
            drop = std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop>();
            drop->parent = this;
            children["drop"] = drop;
        }
        return children.at("drop");
    }

    if(child_yang_name == "received")
    {
        if(received != nullptr)
        {
            children["received"] = received;
        }
        else
        {
            received = std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received>();
            received->parent = this;
            children["received"] = received;
        }
        return children.at("received");
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit != nullptr)
        {
            children["retransmit"] = retransmit;
        }
        else
        {
            retransmit = std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit>();
            retransmit->parent = this;
            children["retransmit"] = retransmit;
        }
        return children.at("retransmit");
    }

    if(child_yang_name == "transmit")
    {
        if(transmit != nullptr)
        {
            children["transmit"] = transmit;
        }
        else
        {
            transmit = std::make_shared<L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit>();
            transmit->parent = this;
            children["transmit"] = transmit;
        }
        return children.at("transmit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::Tunnels::Tunnel::Global::get_children()
{
    if(children.find("drop") == children.end())
    {
        if(drop != nullptr)
        {
            children["drop"] = drop;
        }
    }

    if(children.find("received") == children.end())
    {
        if(received != nullptr)
        {
            children["received"] = received;
        }
    }

    if(children.find("retransmit") == children.end())
    {
        if(retransmit != nullptr)
        {
            children["retransmit"] = retransmit;
        }
    }

    if(children.find("transmit") == children.end())
    {
        if(transmit != nullptr)
        {
            children["transmit"] = transmit;
        }
    }

    return children;
}

void L2Tp::Counters::Control::Tunnels::Tunnel::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-drop")
    {
        total_drop = value;
    }
    if(value_path == "total-received")
    {
        total_received = value;
    }
    if(value_path == "total-retransmit")
    {
        total_retransmit = value;
    }
    if(value_path == "total-transmit")
    {
        total_transmit = value;
    }
}

L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::Transmit()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "transmit"; yang_parent_name = "global";
}

L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::~Transmit()
{
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transmit' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_children()
{
    return children;
}

void L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::Retransmit()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "retransmit"; yang_parent_name = "global";
}

L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::~Retransmit()
{
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmit' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_children()
{
    return children;
}

void L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received::Received()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "received"; yang_parent_name = "global";
}

L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received::~Received()
{
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Received' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received::get_children()
{
    return children;
}

void L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop::Drop()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "drop"; yang_parent_name = "global";
}

L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop::~Drop()
{
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";

    return path_buffer.str();

}

EntityPath L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Drop' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop::get_children()
{
    return children;
}

void L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tp::TunnelConfigurations::TunnelConfigurations()
{
    yang_name = "tunnel-configurations"; yang_parent_name = "l2tp";
}

L2Tp::TunnelConfigurations::~TunnelConfigurations()
{
}

bool L2Tp::TunnelConfigurations::has_data() const
{
    for (std::size_t index=0; index<tunnel_configuration.size(); index++)
    {
        if(tunnel_configuration[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tp::TunnelConfigurations::has_operation() const
{
    for (std::size_t index=0; index<tunnel_configuration.size(); index++)
    {
        if(tunnel_configuration[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tp::TunnelConfigurations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-configurations";

    return path_buffer.str();

}

EntityPath L2Tp::TunnelConfigurations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::TunnelConfigurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-configuration")
    {
        for(auto const & c : tunnel_configuration)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Tp::TunnelConfigurations::TunnelConfiguration>();
        c->parent = this;
        tunnel_configuration.push_back(std::move(c));
        children[segment_path] = tunnel_configuration.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::TunnelConfigurations::get_children()
{
    for (auto const & c : tunnel_configuration)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Tp::TunnelConfigurations::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::TunnelConfigurations::TunnelConfiguration::TunnelConfiguration()
    :
    local_tunnel_id{YType::int32, "local-tunnel-id"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"}
    	,
    l2tp_class(std::make_shared<L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass>())
{
    l2tp_class->parent = this;
    children["l2tp-class"] = l2tp_class;

    yang_name = "tunnel-configuration"; yang_parent_name = "tunnel-configurations";
}

L2Tp::TunnelConfigurations::TunnelConfiguration::~TunnelConfiguration()
{
}

bool L2Tp::TunnelConfigurations::TunnelConfiguration::has_data() const
{
    return local_tunnel_id.is_set
	|| remote_tunnel_id.is_set
	|| (l2tp_class !=  nullptr && l2tp_class->has_data());
}

bool L2Tp::TunnelConfigurations::TunnelConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(local_tunnel_id.operation)
	|| is_set(remote_tunnel_id.operation)
	|| (l2tp_class !=  nullptr && l2tp_class->has_operation());
}

std::string L2Tp::TunnelConfigurations::TunnelConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-configuration" <<"[local-tunnel-id='" <<local_tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath L2Tp::TunnelConfigurations::TunnelConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/tunnel-configurations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_tunnel_id.is_set || is_set(local_tunnel_id.operation)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::TunnelConfigurations::TunnelConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tp-class")
    {
        if(l2tp_class != nullptr)
        {
            children["l2tp-class"] = l2tp_class;
        }
        else
        {
            l2tp_class = std::make_shared<L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass>();
            l2tp_class->parent = this;
            children["l2tp-class"] = l2tp_class;
        }
        return children.at("l2tp-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::TunnelConfigurations::TunnelConfiguration::get_children()
{
    if(children.find("l2tp-class") == children.end())
    {
        if(l2tp_class != nullptr)
        {
            children["l2tp-class"] = l2tp_class;
        }
    }

    return children;
}

void L2Tp::TunnelConfigurations::TunnelConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
}

L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass::L2TpClass()
    :
    accounting_method_list{YType::str, "accounting-method-list"},
    class_name_xr{YType::str, "class-name-xr"},
    digest_hash{YType::enumeration, "digest-hash"},
    encoded_password{YType::str, "encoded-password"},
    hello_timeout{YType::uint32, "hello-timeout"},
    host_name{YType::str, "host-name"},
    initial_retransmit_maximum_timeout{YType::uint32, "initial-retransmit-maximum-timeout"},
    initial_retransmit_minimum_timeout{YType::uint32, "initial-retransmit-minimum-timeout"},
    initial_retransmit_retries{YType::uint32, "initial-retransmit-retries"},
    ip_tos{YType::uint8, "ip-tos"},
    is_authentication_enabled{YType::boolean, "is-authentication-enabled"},
    is_congestion_control_enabled{YType::boolean, "is-congestion-control-enabled"},
    is_digest_check_enabled{YType::boolean, "is-digest-check-enabled"},
    is_digest_enabled{YType::boolean, "is-digest-enabled"},
    is_hidden{YType::boolean, "is-hidden"},
    is_peer_address_checked{YType::boolean, "is-peer-address-checked"},
    password{YType::str, "password"},
    receive_window_size{YType::uint16, "receive-window-size"},
    retransmit_maximum_timeout{YType::uint32, "retransmit-maximum-timeout"},
    retransmit_minimum_timeout{YType::uint32, "retransmit-minimum-timeout"},
    retransmit_retries{YType::uint32, "retransmit-retries"},
    setup_timeout{YType::uint32, "setup-timeout"},
    timeout_no_user{YType::uint32, "timeout-no-user"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "l2tp-class"; yang_parent_name = "tunnel-configuration";
}

L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass::~L2TpClass()
{
}

bool L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass::has_data() const
{
    return accounting_method_list.is_set
	|| class_name_xr.is_set
	|| digest_hash.is_set
	|| encoded_password.is_set
	|| hello_timeout.is_set
	|| host_name.is_set
	|| initial_retransmit_maximum_timeout.is_set
	|| initial_retransmit_minimum_timeout.is_set
	|| initial_retransmit_retries.is_set
	|| ip_tos.is_set
	|| is_authentication_enabled.is_set
	|| is_congestion_control_enabled.is_set
	|| is_digest_check_enabled.is_set
	|| is_digest_enabled.is_set
	|| is_hidden.is_set
	|| is_peer_address_checked.is_set
	|| password.is_set
	|| receive_window_size.is_set
	|| retransmit_maximum_timeout.is_set
	|| retransmit_minimum_timeout.is_set
	|| retransmit_retries.is_set
	|| setup_timeout.is_set
	|| timeout_no_user.is_set
	|| vrf_name.is_set;
}

bool L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting_method_list.operation)
	|| is_set(class_name_xr.operation)
	|| is_set(digest_hash.operation)
	|| is_set(encoded_password.operation)
	|| is_set(hello_timeout.operation)
	|| is_set(host_name.operation)
	|| is_set(initial_retransmit_maximum_timeout.operation)
	|| is_set(initial_retransmit_minimum_timeout.operation)
	|| is_set(initial_retransmit_retries.operation)
	|| is_set(ip_tos.operation)
	|| is_set(is_authentication_enabled.operation)
	|| is_set(is_congestion_control_enabled.operation)
	|| is_set(is_digest_check_enabled.operation)
	|| is_set(is_digest_enabled.operation)
	|| is_set(is_hidden.operation)
	|| is_set(is_peer_address_checked.operation)
	|| is_set(password.operation)
	|| is_set(receive_window_size.operation)
	|| is_set(retransmit_maximum_timeout.operation)
	|| is_set(retransmit_minimum_timeout.operation)
	|| is_set(retransmit_retries.operation)
	|| is_set(setup_timeout.operation)
	|| is_set(timeout_no_user.operation)
	|| is_set(vrf_name.operation);
}

std::string L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-class";

    return path_buffer.str();

}

EntityPath L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpClass' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_method_list.is_set || is_set(accounting_method_list.operation)) leaf_name_data.push_back(accounting_method_list.get_name_leafdata());
    if (class_name_xr.is_set || is_set(class_name_xr.operation)) leaf_name_data.push_back(class_name_xr.get_name_leafdata());
    if (digest_hash.is_set || is_set(digest_hash.operation)) leaf_name_data.push_back(digest_hash.get_name_leafdata());
    if (encoded_password.is_set || is_set(encoded_password.operation)) leaf_name_data.push_back(encoded_password.get_name_leafdata());
    if (hello_timeout.is_set || is_set(hello_timeout.operation)) leaf_name_data.push_back(hello_timeout.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (initial_retransmit_maximum_timeout.is_set || is_set(initial_retransmit_maximum_timeout.operation)) leaf_name_data.push_back(initial_retransmit_maximum_timeout.get_name_leafdata());
    if (initial_retransmit_minimum_timeout.is_set || is_set(initial_retransmit_minimum_timeout.operation)) leaf_name_data.push_back(initial_retransmit_minimum_timeout.get_name_leafdata());
    if (initial_retransmit_retries.is_set || is_set(initial_retransmit_retries.operation)) leaf_name_data.push_back(initial_retransmit_retries.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.operation)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (is_authentication_enabled.is_set || is_set(is_authentication_enabled.operation)) leaf_name_data.push_back(is_authentication_enabled.get_name_leafdata());
    if (is_congestion_control_enabled.is_set || is_set(is_congestion_control_enabled.operation)) leaf_name_data.push_back(is_congestion_control_enabled.get_name_leafdata());
    if (is_digest_check_enabled.is_set || is_set(is_digest_check_enabled.operation)) leaf_name_data.push_back(is_digest_check_enabled.get_name_leafdata());
    if (is_digest_enabled.is_set || is_set(is_digest_enabled.operation)) leaf_name_data.push_back(is_digest_enabled.get_name_leafdata());
    if (is_hidden.is_set || is_set(is_hidden.operation)) leaf_name_data.push_back(is_hidden.get_name_leafdata());
    if (is_peer_address_checked.is_set || is_set(is_peer_address_checked.operation)) leaf_name_data.push_back(is_peer_address_checked.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (receive_window_size.is_set || is_set(receive_window_size.operation)) leaf_name_data.push_back(receive_window_size.get_name_leafdata());
    if (retransmit_maximum_timeout.is_set || is_set(retransmit_maximum_timeout.operation)) leaf_name_data.push_back(retransmit_maximum_timeout.get_name_leafdata());
    if (retransmit_minimum_timeout.is_set || is_set(retransmit_minimum_timeout.operation)) leaf_name_data.push_back(retransmit_minimum_timeout.get_name_leafdata());
    if (retransmit_retries.is_set || is_set(retransmit_retries.operation)) leaf_name_data.push_back(retransmit_retries.get_name_leafdata());
    if (setup_timeout.is_set || is_set(setup_timeout.operation)) leaf_name_data.push_back(setup_timeout.get_name_leafdata());
    if (timeout_no_user.is_set || is_set(timeout_no_user.operation)) leaf_name_data.push_back(timeout_no_user.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass::get_children()
{
    return children;
}

void L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting-method-list")
    {
        accounting_method_list = value;
    }
    if(value_path == "class-name-xr")
    {
        class_name_xr = value;
    }
    if(value_path == "digest-hash")
    {
        digest_hash = value;
    }
    if(value_path == "encoded-password")
    {
        encoded_password = value;
    }
    if(value_path == "hello-timeout")
    {
        hello_timeout = value;
    }
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "initial-retransmit-maximum-timeout")
    {
        initial_retransmit_maximum_timeout = value;
    }
    if(value_path == "initial-retransmit-minimum-timeout")
    {
        initial_retransmit_minimum_timeout = value;
    }
    if(value_path == "initial-retransmit-retries")
    {
        initial_retransmit_retries = value;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
    }
    if(value_path == "is-authentication-enabled")
    {
        is_authentication_enabled = value;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled = value;
    }
    if(value_path == "is-digest-check-enabled")
    {
        is_digest_check_enabled = value;
    }
    if(value_path == "is-digest-enabled")
    {
        is_digest_enabled = value;
    }
    if(value_path == "is-hidden")
    {
        is_hidden = value;
    }
    if(value_path == "is-peer-address-checked")
    {
        is_peer_address_checked = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size = value;
    }
    if(value_path == "retransmit-maximum-timeout")
    {
        retransmit_maximum_timeout = value;
    }
    if(value_path == "retransmit-minimum-timeout")
    {
        retransmit_minimum_timeout = value;
    }
    if(value_path == "retransmit-retries")
    {
        retransmit_retries = value;
    }
    if(value_path == "setup-timeout")
    {
        setup_timeout = value;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

L2Tp::CounterHistFail::CounterHistFail()
    :
    pkt_timeout{YType::uint32, "pkt-timeout"},
    rx_counters{YType::str, "rx-counters"},
    sess_down_tmout{YType::uint32, "sess-down-tmout"},
    tx_counters{YType::str, "tx-counters"}
{
    yang_name = "counter-hist-fail"; yang_parent_name = "l2tp";
}

L2Tp::CounterHistFail::~CounterHistFail()
{
}

bool L2Tp::CounterHistFail::has_data() const
{
    for (auto const & leaf : pkt_timeout.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return rx_counters.is_set
	|| sess_down_tmout.is_set
	|| tx_counters.is_set;
}

bool L2Tp::CounterHistFail::has_operation() const
{
    for (auto const & leaf : pkt_timeout.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(pkt_timeout.operation)
	|| is_set(rx_counters.operation)
	|| is_set(sess_down_tmout.operation)
	|| is_set(tx_counters.operation);
}

std::string L2Tp::CounterHistFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter-hist-fail";

    return path_buffer.str();

}

EntityPath L2Tp::CounterHistFail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_counters.is_set || is_set(rx_counters.operation)) leaf_name_data.push_back(rx_counters.get_name_leafdata());
    if (sess_down_tmout.is_set || is_set(sess_down_tmout.operation)) leaf_name_data.push_back(sess_down_tmout.get_name_leafdata());
    if (tx_counters.is_set || is_set(tx_counters.operation)) leaf_name_data.push_back(tx_counters.get_name_leafdata());

    auto pkt_timeout_name_datas = pkt_timeout.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pkt_timeout_name_datas.begin(), pkt_timeout_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::CounterHistFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::CounterHistFail::get_children()
{
    return children;
}

void L2Tp::CounterHistFail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pkt-timeout")
    {
        pkt_timeout.append(value);
    }
    if(value_path == "rx-counters")
    {
        rx_counters = value;
    }
    if(value_path == "sess-down-tmout")
    {
        sess_down_tmout = value;
    }
    if(value_path == "tx-counters")
    {
        tx_counters = value;
    }
}

L2Tp::Classes::Classes()
{
    yang_name = "classes"; yang_parent_name = "l2tp";
}

L2Tp::Classes::~Classes()
{
}

bool L2Tp::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tp::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tp::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";

    return path_buffer.str();

}

EntityPath L2Tp::Classes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Tp::Classes::Class_>();
        c->parent = this;
        class_.push_back(std::move(c));
        children[segment_path] = class_.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Classes::get_children()
{
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Tp::Classes::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::Classes::Class_::Class_()
    :
    class_name{YType::str, "class-name"},
    accounting_method_list{YType::str, "accounting-method-list"},
    class_name_xr{YType::str, "class-name-xr"},
    digest_hash{YType::enumeration, "digest-hash"},
    encoded_password{YType::str, "encoded-password"},
    hello_timeout{YType::uint32, "hello-timeout"},
    host_name{YType::str, "host-name"},
    initial_retransmit_maximum_timeout{YType::uint32, "initial-retransmit-maximum-timeout"},
    initial_retransmit_minimum_timeout{YType::uint32, "initial-retransmit-minimum-timeout"},
    initial_retransmit_retries{YType::uint32, "initial-retransmit-retries"},
    ip_tos{YType::uint8, "ip-tos"},
    is_authentication_enabled{YType::boolean, "is-authentication-enabled"},
    is_congestion_control_enabled{YType::boolean, "is-congestion-control-enabled"},
    is_digest_check_enabled{YType::boolean, "is-digest-check-enabled"},
    is_digest_enabled{YType::boolean, "is-digest-enabled"},
    is_hidden{YType::boolean, "is-hidden"},
    is_peer_address_checked{YType::boolean, "is-peer-address-checked"},
    password{YType::str, "password"},
    receive_window_size{YType::uint16, "receive-window-size"},
    retransmit_maximum_timeout{YType::uint32, "retransmit-maximum-timeout"},
    retransmit_minimum_timeout{YType::uint32, "retransmit-minimum-timeout"},
    retransmit_retries{YType::uint32, "retransmit-retries"},
    setup_timeout{YType::uint32, "setup-timeout"},
    timeout_no_user{YType::uint32, "timeout-no-user"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "class"; yang_parent_name = "classes";
}

L2Tp::Classes::Class_::~Class_()
{
}

bool L2Tp::Classes::Class_::has_data() const
{
    return class_name.is_set
	|| accounting_method_list.is_set
	|| class_name_xr.is_set
	|| digest_hash.is_set
	|| encoded_password.is_set
	|| hello_timeout.is_set
	|| host_name.is_set
	|| initial_retransmit_maximum_timeout.is_set
	|| initial_retransmit_minimum_timeout.is_set
	|| initial_retransmit_retries.is_set
	|| ip_tos.is_set
	|| is_authentication_enabled.is_set
	|| is_congestion_control_enabled.is_set
	|| is_digest_check_enabled.is_set
	|| is_digest_enabled.is_set
	|| is_hidden.is_set
	|| is_peer_address_checked.is_set
	|| password.is_set
	|| receive_window_size.is_set
	|| retransmit_maximum_timeout.is_set
	|| retransmit_minimum_timeout.is_set
	|| retransmit_retries.is_set
	|| setup_timeout.is_set
	|| timeout_no_user.is_set
	|| vrf_name.is_set;
}

bool L2Tp::Classes::Class_::has_operation() const
{
    return is_set(operation)
	|| is_set(class_name.operation)
	|| is_set(accounting_method_list.operation)
	|| is_set(class_name_xr.operation)
	|| is_set(digest_hash.operation)
	|| is_set(encoded_password.operation)
	|| is_set(hello_timeout.operation)
	|| is_set(host_name.operation)
	|| is_set(initial_retransmit_maximum_timeout.operation)
	|| is_set(initial_retransmit_minimum_timeout.operation)
	|| is_set(initial_retransmit_retries.operation)
	|| is_set(ip_tos.operation)
	|| is_set(is_authentication_enabled.operation)
	|| is_set(is_congestion_control_enabled.operation)
	|| is_set(is_digest_check_enabled.operation)
	|| is_set(is_digest_enabled.operation)
	|| is_set(is_hidden.operation)
	|| is_set(is_peer_address_checked.operation)
	|| is_set(password.operation)
	|| is_set(receive_window_size.operation)
	|| is_set(retransmit_maximum_timeout.operation)
	|| is_set(retransmit_minimum_timeout.operation)
	|| is_set(retransmit_retries.operation)
	|| is_set(setup_timeout.operation)
	|| is_set(timeout_no_user.operation)
	|| is_set(vrf_name.operation);
}

std::string L2Tp::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-name='" <<class_name <<"']";

    return path_buffer.str();

}

EntityPath L2Tp::Classes::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/classes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (accounting_method_list.is_set || is_set(accounting_method_list.operation)) leaf_name_data.push_back(accounting_method_list.get_name_leafdata());
    if (class_name_xr.is_set || is_set(class_name_xr.operation)) leaf_name_data.push_back(class_name_xr.get_name_leafdata());
    if (digest_hash.is_set || is_set(digest_hash.operation)) leaf_name_data.push_back(digest_hash.get_name_leafdata());
    if (encoded_password.is_set || is_set(encoded_password.operation)) leaf_name_data.push_back(encoded_password.get_name_leafdata());
    if (hello_timeout.is_set || is_set(hello_timeout.operation)) leaf_name_data.push_back(hello_timeout.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (initial_retransmit_maximum_timeout.is_set || is_set(initial_retransmit_maximum_timeout.operation)) leaf_name_data.push_back(initial_retransmit_maximum_timeout.get_name_leafdata());
    if (initial_retransmit_minimum_timeout.is_set || is_set(initial_retransmit_minimum_timeout.operation)) leaf_name_data.push_back(initial_retransmit_minimum_timeout.get_name_leafdata());
    if (initial_retransmit_retries.is_set || is_set(initial_retransmit_retries.operation)) leaf_name_data.push_back(initial_retransmit_retries.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.operation)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (is_authentication_enabled.is_set || is_set(is_authentication_enabled.operation)) leaf_name_data.push_back(is_authentication_enabled.get_name_leafdata());
    if (is_congestion_control_enabled.is_set || is_set(is_congestion_control_enabled.operation)) leaf_name_data.push_back(is_congestion_control_enabled.get_name_leafdata());
    if (is_digest_check_enabled.is_set || is_set(is_digest_check_enabled.operation)) leaf_name_data.push_back(is_digest_check_enabled.get_name_leafdata());
    if (is_digest_enabled.is_set || is_set(is_digest_enabled.operation)) leaf_name_data.push_back(is_digest_enabled.get_name_leafdata());
    if (is_hidden.is_set || is_set(is_hidden.operation)) leaf_name_data.push_back(is_hidden.get_name_leafdata());
    if (is_peer_address_checked.is_set || is_set(is_peer_address_checked.operation)) leaf_name_data.push_back(is_peer_address_checked.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (receive_window_size.is_set || is_set(receive_window_size.operation)) leaf_name_data.push_back(receive_window_size.get_name_leafdata());
    if (retransmit_maximum_timeout.is_set || is_set(retransmit_maximum_timeout.operation)) leaf_name_data.push_back(retransmit_maximum_timeout.get_name_leafdata());
    if (retransmit_minimum_timeout.is_set || is_set(retransmit_minimum_timeout.operation)) leaf_name_data.push_back(retransmit_minimum_timeout.get_name_leafdata());
    if (retransmit_retries.is_set || is_set(retransmit_retries.operation)) leaf_name_data.push_back(retransmit_retries.get_name_leafdata());
    if (setup_timeout.is_set || is_set(setup_timeout.operation)) leaf_name_data.push_back(setup_timeout.get_name_leafdata());
    if (timeout_no_user.is_set || is_set(timeout_no_user.operation)) leaf_name_data.push_back(timeout_no_user.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Classes::Class_::get_children()
{
    return children;
}

void L2Tp::Classes::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list = value;
    }
    if(value_path == "class-name-xr")
    {
        class_name_xr = value;
    }
    if(value_path == "digest-hash")
    {
        digest_hash = value;
    }
    if(value_path == "encoded-password")
    {
        encoded_password = value;
    }
    if(value_path == "hello-timeout")
    {
        hello_timeout = value;
    }
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "initial-retransmit-maximum-timeout")
    {
        initial_retransmit_maximum_timeout = value;
    }
    if(value_path == "initial-retransmit-minimum-timeout")
    {
        initial_retransmit_minimum_timeout = value;
    }
    if(value_path == "initial-retransmit-retries")
    {
        initial_retransmit_retries = value;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
    }
    if(value_path == "is-authentication-enabled")
    {
        is_authentication_enabled = value;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled = value;
    }
    if(value_path == "is-digest-check-enabled")
    {
        is_digest_check_enabled = value;
    }
    if(value_path == "is-digest-enabled")
    {
        is_digest_enabled = value;
    }
    if(value_path == "is-hidden")
    {
        is_hidden = value;
    }
    if(value_path == "is-peer-address-checked")
    {
        is_peer_address_checked = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size = value;
    }
    if(value_path == "retransmit-maximum-timeout")
    {
        retransmit_maximum_timeout = value;
    }
    if(value_path == "retransmit-minimum-timeout")
    {
        retransmit_minimum_timeout = value;
    }
    if(value_path == "retransmit-retries")
    {
        retransmit_retries = value;
    }
    if(value_path == "setup-timeout")
    {
        setup_timeout = value;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

L2Tp::Tunnels::Tunnels()
{
    yang_name = "tunnels"; yang_parent_name = "l2tp";
}

L2Tp::Tunnels::~Tunnels()
{
}

bool L2Tp::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tp::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tp::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

EntityPath L2Tp::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Tp::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Tunnels::get_children()
{
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Tp::Tunnels::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::Tunnels::Tunnel::Tunnel()
    :
    local_tunnel_id{YType::int32, "local-tunnel-id"},
    active_sessions{YType::uint32, "active-sessions"},
    class_name{YType::str, "class-name"},
    digest_secrets{YType::uint16, "digest-secrets"},
    is_congestion_control_enabled{YType::boolean, "is-congestion-control-enabled"},
    is_pmtu_enabled{YType::boolean, "is-pmtu-enabled"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    local_address{YType::str, "local-address"},
    local_port{YType::uint16, "local-port"},
    local_tunnel_name{YType::str, "local-tunnel-name"},
    local_window_size{YType::uint16, "local-window-size"},
    maximum_retransmission_time{YType::uint16, "maximum-retransmission-time"},
    order_queue_size{YType::uint16, "order-queue-size"},
    packet_queue_check{YType::uint16, "packet-queue-check"},
    protocol{YType::uint8, "protocol"},
    remote_address{YType::str, "remote-address"},
    remote_port{YType::uint16, "remote-port"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    remote_tunnel_name{YType::str, "remote-tunnel-name"},
    remote_window_size{YType::uint16, "remote-window-size"},
    resend_maximum_queue_size{YType::uint16, "resend-maximum-queue-size"},
    resend_queue_size{YType::uint16, "resend-queue-size"},
    resends{YType::uint32, "resends"},
    retransmission_time{YType::uint16, "retransmission-time"},
    retransmit_time{YType::uint16, "retransmit-time"},
    sequence_nr{YType::uint16, "sequence-nr"},
    sequence_ns{YType::uint16, "sequence-ns"},
    total_out_of_order_drop_packets{YType::uint32, "total-out-of-order-drop-packets"},
    total_out_of_order_reorder_packets{YType::uint32, "total-out-of-order-reorder-packets"},
    total_peer_authentication_failures{YType::uint32, "total-peer-authentication-failures"},
    unsent_maximum_queue_size{YType::uint16, "unsent-maximum-queue-size"},
    unsent_queue_size{YType::uint16, "unsent-queue-size"},
    zero_length_body_acknowledgement_sent{YType::uint32, "zero-length-body-acknowledgement-sent"}
{
    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

L2Tp::Tunnels::Tunnel::~Tunnel()
{
}

bool L2Tp::Tunnels::Tunnel::has_data() const
{
    for (auto const & leaf : retransmit_time.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_tunnel_id.is_set
	|| active_sessions.is_set
	|| class_name.is_set
	|| digest_secrets.is_set
	|| is_congestion_control_enabled.is_set
	|| is_pmtu_enabled.is_set
	|| is_tunnel_up.is_set
	|| local_address.is_set
	|| local_port.is_set
	|| local_tunnel_name.is_set
	|| local_window_size.is_set
	|| maximum_retransmission_time.is_set
	|| order_queue_size.is_set
	|| packet_queue_check.is_set
	|| protocol.is_set
	|| remote_address.is_set
	|| remote_port.is_set
	|| remote_tunnel_id.is_set
	|| remote_tunnel_name.is_set
	|| remote_window_size.is_set
	|| resend_maximum_queue_size.is_set
	|| resend_queue_size.is_set
	|| resends.is_set
	|| retransmission_time.is_set
	|| sequence_nr.is_set
	|| sequence_ns.is_set
	|| total_out_of_order_drop_packets.is_set
	|| total_out_of_order_reorder_packets.is_set
	|| total_peer_authentication_failures.is_set
	|| unsent_maximum_queue_size.is_set
	|| unsent_queue_size.is_set
	|| zero_length_body_acknowledgement_sent.is_set;
}

bool L2Tp::Tunnels::Tunnel::has_operation() const
{
    for (auto const & leaf : retransmit_time.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(local_tunnel_id.operation)
	|| is_set(active_sessions.operation)
	|| is_set(class_name.operation)
	|| is_set(digest_secrets.operation)
	|| is_set(is_congestion_control_enabled.operation)
	|| is_set(is_pmtu_enabled.operation)
	|| is_set(is_tunnel_up.operation)
	|| is_set(local_address.operation)
	|| is_set(local_port.operation)
	|| is_set(local_tunnel_name.operation)
	|| is_set(local_window_size.operation)
	|| is_set(maximum_retransmission_time.operation)
	|| is_set(order_queue_size.operation)
	|| is_set(packet_queue_check.operation)
	|| is_set(protocol.operation)
	|| is_set(remote_address.operation)
	|| is_set(remote_port.operation)
	|| is_set(remote_tunnel_id.operation)
	|| is_set(remote_tunnel_name.operation)
	|| is_set(remote_window_size.operation)
	|| is_set(resend_maximum_queue_size.operation)
	|| is_set(resend_queue_size.operation)
	|| is_set(resends.operation)
	|| is_set(retransmission_time.operation)
	|| is_set(retransmit_time.operation)
	|| is_set(sequence_nr.operation)
	|| is_set(sequence_ns.operation)
	|| is_set(total_out_of_order_drop_packets.operation)
	|| is_set(total_out_of_order_reorder_packets.operation)
	|| is_set(total_peer_authentication_failures.operation)
	|| is_set(unsent_maximum_queue_size.operation)
	|| is_set(unsent_queue_size.operation)
	|| is_set(zero_length_body_acknowledgement_sent.operation);
}

std::string L2Tp::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[local-tunnel-id='" <<local_tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath L2Tp::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_tunnel_id.is_set || is_set(local_tunnel_id.operation)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (digest_secrets.is_set || is_set(digest_secrets.operation)) leaf_name_data.push_back(digest_secrets.get_name_leafdata());
    if (is_congestion_control_enabled.is_set || is_set(is_congestion_control_enabled.operation)) leaf_name_data.push_back(is_congestion_control_enabled.get_name_leafdata());
    if (is_pmtu_enabled.is_set || is_set(is_pmtu_enabled.operation)) leaf_name_data.push_back(is_pmtu_enabled.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.operation)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (local_tunnel_name.is_set || is_set(local_tunnel_name.operation)) leaf_name_data.push_back(local_tunnel_name.get_name_leafdata());
    if (local_window_size.is_set || is_set(local_window_size.operation)) leaf_name_data.push_back(local_window_size.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.operation)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (order_queue_size.is_set || is_set(order_queue_size.operation)) leaf_name_data.push_back(order_queue_size.get_name_leafdata());
    if (packet_queue_check.is_set || is_set(packet_queue_check.operation)) leaf_name_data.push_back(packet_queue_check.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_port.is_set || is_set(remote_port.operation)) leaf_name_data.push_back(remote_port.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (remote_tunnel_name.is_set || is_set(remote_tunnel_name.operation)) leaf_name_data.push_back(remote_tunnel_name.get_name_leafdata());
    if (remote_window_size.is_set || is_set(remote_window_size.operation)) leaf_name_data.push_back(remote_window_size.get_name_leafdata());
    if (resend_maximum_queue_size.is_set || is_set(resend_maximum_queue_size.operation)) leaf_name_data.push_back(resend_maximum_queue_size.get_name_leafdata());
    if (resend_queue_size.is_set || is_set(resend_queue_size.operation)) leaf_name_data.push_back(resend_queue_size.get_name_leafdata());
    if (resends.is_set || is_set(resends.operation)) leaf_name_data.push_back(resends.get_name_leafdata());
    if (retransmission_time.is_set || is_set(retransmission_time.operation)) leaf_name_data.push_back(retransmission_time.get_name_leafdata());
    if (sequence_nr.is_set || is_set(sequence_nr.operation)) leaf_name_data.push_back(sequence_nr.get_name_leafdata());
    if (sequence_ns.is_set || is_set(sequence_ns.operation)) leaf_name_data.push_back(sequence_ns.get_name_leafdata());
    if (total_out_of_order_drop_packets.is_set || is_set(total_out_of_order_drop_packets.operation)) leaf_name_data.push_back(total_out_of_order_drop_packets.get_name_leafdata());
    if (total_out_of_order_reorder_packets.is_set || is_set(total_out_of_order_reorder_packets.operation)) leaf_name_data.push_back(total_out_of_order_reorder_packets.get_name_leafdata());
    if (total_peer_authentication_failures.is_set || is_set(total_peer_authentication_failures.operation)) leaf_name_data.push_back(total_peer_authentication_failures.get_name_leafdata());
    if (unsent_maximum_queue_size.is_set || is_set(unsent_maximum_queue_size.operation)) leaf_name_data.push_back(unsent_maximum_queue_size.get_name_leafdata());
    if (unsent_queue_size.is_set || is_set(unsent_queue_size.operation)) leaf_name_data.push_back(unsent_queue_size.get_name_leafdata());
    if (zero_length_body_acknowledgement_sent.is_set || is_set(zero_length_body_acknowledgement_sent.operation)) leaf_name_data.push_back(zero_length_body_acknowledgement_sent.get_name_leafdata());

    auto retransmit_time_name_datas = retransmit_time.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), retransmit_time_name_datas.begin(), retransmit_time_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Tunnels::Tunnel::get_children()
{
    return children;
}

void L2Tp::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
    }
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "digest-secrets")
    {
        digest_secrets = value;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled = value;
    }
    if(value_path == "is-pmtu-enabled")
    {
        is_pmtu_enabled = value;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
    if(value_path == "local-tunnel-name")
    {
        local_tunnel_name = value;
    }
    if(value_path == "local-window-size")
    {
        local_window_size = value;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
    }
    if(value_path == "order-queue-size")
    {
        order_queue_size = value;
    }
    if(value_path == "packet-queue-check")
    {
        packet_queue_check = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "remote-port")
    {
        remote_port = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
    if(value_path == "remote-tunnel-name")
    {
        remote_tunnel_name = value;
    }
    if(value_path == "remote-window-size")
    {
        remote_window_size = value;
    }
    if(value_path == "resend-maximum-queue-size")
    {
        resend_maximum_queue_size = value;
    }
    if(value_path == "resend-queue-size")
    {
        resend_queue_size = value;
    }
    if(value_path == "resends")
    {
        resends = value;
    }
    if(value_path == "retransmission-time")
    {
        retransmission_time = value;
    }
    if(value_path == "retransmit-time")
    {
        retransmit_time.append(value);
    }
    if(value_path == "sequence-nr")
    {
        sequence_nr = value;
    }
    if(value_path == "sequence-ns")
    {
        sequence_ns = value;
    }
    if(value_path == "total-out-of-order-drop-packets")
    {
        total_out_of_order_drop_packets = value;
    }
    if(value_path == "total-out-of-order-reorder-packets")
    {
        total_out_of_order_reorder_packets = value;
    }
    if(value_path == "total-peer-authentication-failures")
    {
        total_peer_authentication_failures = value;
    }
    if(value_path == "unsent-maximum-queue-size")
    {
        unsent_maximum_queue_size = value;
    }
    if(value_path == "unsent-queue-size")
    {
        unsent_queue_size = value;
    }
    if(value_path == "zero-length-body-acknowledgement-sent")
    {
        zero_length_body_acknowledgement_sent = value;
    }
}

L2Tp::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "l2tp";
}

L2Tp::Sessions::~Sessions()
{
}

bool L2Tp::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tp::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tp::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath L2Tp::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Tp::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Tp::Sessions::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::Sessions::Session::Session()
    :
    local_session_id{YType::int32, "local-session-id"},
    local_tunnel_id{YType::int32, "local-tunnel-id"},
    call_serial_number{YType::uint32, "call-serial-number"},
    interface_name{YType::str, "interface-name"},
    is_conditional_debug_enabled{YType::boolean, "is-conditional-debug-enabled"},
    is_sequencing_on{YType::boolean, "is-sequencing-on"},
    is_session_locally_initiated{YType::boolean, "is-session-locally-initiated"},
    is_session_manual{YType::boolean, "is-session-manual"},
    is_session_state_established{YType::boolean, "is-session-state-established"},
    is_session_up{YType::boolean, "is-session-up"},
    is_udp_checksum_enabled{YType::boolean, "is-udp-checksum-enabled"},
    l2tp_sh_sess_tie_breaker{YType::uint64, "l2tp-sh-sess-tie-breaker"},
    l2tp_sh_sess_tie_breaker_enabled{YType::uint8, "l2tp-sh-sess-tie-breaker-enabled"},
    l2tp_sh_sess_udp_lport{YType::uint16, "l2tp-sh-sess-udp-lport"},
    l2tp_sh_sess_udp_rport{YType::uint16, "l2tp-sh-sess-udp-rport"},
    local_ip_address{YType::str, "local-ip-address"},
    local_tunnel_name{YType::str, "local-tunnel-name"},
    protocol{YType::uint8, "protocol"},
    remote_ip_address{YType::str, "remote-ip-address"},
    remote_session_id{YType::uint32, "remote-session-id"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    remote_tunnel_name{YType::str, "remote-tunnel-name"},
    unique_id{YType::uint32, "unique-id"}
    	,
    session_application_data(std::make_shared<L2Tp::Sessions::Session::SessionApplicationData>())
{
    session_application_data->parent = this;
    children["session-application-data"] = session_application_data;

    yang_name = "session"; yang_parent_name = "sessions";
}

L2Tp::Sessions::Session::~Session()
{
}

bool L2Tp::Sessions::Session::has_data() const
{
    return local_session_id.is_set
	|| local_tunnel_id.is_set
	|| call_serial_number.is_set
	|| interface_name.is_set
	|| is_conditional_debug_enabled.is_set
	|| is_sequencing_on.is_set
	|| is_session_locally_initiated.is_set
	|| is_session_manual.is_set
	|| is_session_state_established.is_set
	|| is_session_up.is_set
	|| is_udp_checksum_enabled.is_set
	|| l2tp_sh_sess_tie_breaker.is_set
	|| l2tp_sh_sess_tie_breaker_enabled.is_set
	|| l2tp_sh_sess_udp_lport.is_set
	|| l2tp_sh_sess_udp_rport.is_set
	|| local_ip_address.is_set
	|| local_tunnel_name.is_set
	|| protocol.is_set
	|| remote_ip_address.is_set
	|| remote_session_id.is_set
	|| remote_tunnel_id.is_set
	|| remote_tunnel_name.is_set
	|| unique_id.is_set
	|| (session_application_data !=  nullptr && session_application_data->has_data());
}

bool L2Tp::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(local_session_id.operation)
	|| is_set(local_tunnel_id.operation)
	|| is_set(call_serial_number.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_conditional_debug_enabled.operation)
	|| is_set(is_sequencing_on.operation)
	|| is_set(is_session_locally_initiated.operation)
	|| is_set(is_session_manual.operation)
	|| is_set(is_session_state_established.operation)
	|| is_set(is_session_up.operation)
	|| is_set(is_udp_checksum_enabled.operation)
	|| is_set(l2tp_sh_sess_tie_breaker.operation)
	|| is_set(l2tp_sh_sess_tie_breaker_enabled.operation)
	|| is_set(l2tp_sh_sess_udp_lport.operation)
	|| is_set(l2tp_sh_sess_udp_rport.operation)
	|| is_set(local_ip_address.operation)
	|| is_set(local_tunnel_name.operation)
	|| is_set(protocol.operation)
	|| is_set(remote_ip_address.operation)
	|| is_set(remote_session_id.operation)
	|| is_set(remote_tunnel_id.operation)
	|| is_set(remote_tunnel_name.operation)
	|| is_set(unique_id.operation)
	|| (session_application_data !=  nullptr && session_application_data->has_operation());
}

std::string L2Tp::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[local-session-id='" <<local_session_id <<"']" <<"[local-tunnel-id='" <<local_tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath L2Tp::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_session_id.is_set || is_set(local_session_id.operation)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (local_tunnel_id.is_set || is_set(local_tunnel_id.operation)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (call_serial_number.is_set || is_set(call_serial_number.operation)) leaf_name_data.push_back(call_serial_number.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_conditional_debug_enabled.is_set || is_set(is_conditional_debug_enabled.operation)) leaf_name_data.push_back(is_conditional_debug_enabled.get_name_leafdata());
    if (is_sequencing_on.is_set || is_set(is_sequencing_on.operation)) leaf_name_data.push_back(is_sequencing_on.get_name_leafdata());
    if (is_session_locally_initiated.is_set || is_set(is_session_locally_initiated.operation)) leaf_name_data.push_back(is_session_locally_initiated.get_name_leafdata());
    if (is_session_manual.is_set || is_set(is_session_manual.operation)) leaf_name_data.push_back(is_session_manual.get_name_leafdata());
    if (is_session_state_established.is_set || is_set(is_session_state_established.operation)) leaf_name_data.push_back(is_session_state_established.get_name_leafdata());
    if (is_session_up.is_set || is_set(is_session_up.operation)) leaf_name_data.push_back(is_session_up.get_name_leafdata());
    if (is_udp_checksum_enabled.is_set || is_set(is_udp_checksum_enabled.operation)) leaf_name_data.push_back(is_udp_checksum_enabled.get_name_leafdata());
    if (l2tp_sh_sess_tie_breaker.is_set || is_set(l2tp_sh_sess_tie_breaker.operation)) leaf_name_data.push_back(l2tp_sh_sess_tie_breaker.get_name_leafdata());
    if (l2tp_sh_sess_tie_breaker_enabled.is_set || is_set(l2tp_sh_sess_tie_breaker_enabled.operation)) leaf_name_data.push_back(l2tp_sh_sess_tie_breaker_enabled.get_name_leafdata());
    if (l2tp_sh_sess_udp_lport.is_set || is_set(l2tp_sh_sess_udp_lport.operation)) leaf_name_data.push_back(l2tp_sh_sess_udp_lport.get_name_leafdata());
    if (l2tp_sh_sess_udp_rport.is_set || is_set(l2tp_sh_sess_udp_rport.operation)) leaf_name_data.push_back(l2tp_sh_sess_udp_rport.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.operation)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());
    if (local_tunnel_name.is_set || is_set(local_tunnel_name.operation)) leaf_name_data.push_back(local_tunnel_name.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (remote_ip_address.is_set || is_set(remote_ip_address.operation)) leaf_name_data.push_back(remote_ip_address.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.operation)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (remote_tunnel_name.is_set || is_set(remote_tunnel_name.operation)) leaf_name_data.push_back(remote_tunnel_name.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-application-data")
    {
        if(session_application_data != nullptr)
        {
            children["session-application-data"] = session_application_data;
        }
        else
        {
            session_application_data = std::make_shared<L2Tp::Sessions::Session::SessionApplicationData>();
            session_application_data->parent = this;
            children["session-application-data"] = session_application_data;
        }
        return children.at("session-application-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Sessions::Session::get_children()
{
    if(children.find("session-application-data") == children.end())
    {
        if(session_application_data != nullptr)
        {
            children["session-application-data"] = session_application_data;
        }
    }

    return children;
}

void L2Tp::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-session-id")
    {
        local_session_id = value;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
    }
    if(value_path == "call-serial-number")
    {
        call_serial_number = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-conditional-debug-enabled")
    {
        is_conditional_debug_enabled = value;
    }
    if(value_path == "is-sequencing-on")
    {
        is_sequencing_on = value;
    }
    if(value_path == "is-session-locally-initiated")
    {
        is_session_locally_initiated = value;
    }
    if(value_path == "is-session-manual")
    {
        is_session_manual = value;
    }
    if(value_path == "is-session-state-established")
    {
        is_session_state_established = value;
    }
    if(value_path == "is-session-up")
    {
        is_session_up = value;
    }
    if(value_path == "is-udp-checksum-enabled")
    {
        is_udp_checksum_enabled = value;
    }
    if(value_path == "l2tp-sh-sess-tie-breaker")
    {
        l2tp_sh_sess_tie_breaker = value;
    }
    if(value_path == "l2tp-sh-sess-tie-breaker-enabled")
    {
        l2tp_sh_sess_tie_breaker_enabled = value;
    }
    if(value_path == "l2tp-sh-sess-udp-lport")
    {
        l2tp_sh_sess_udp_lport = value;
    }
    if(value_path == "l2tp-sh-sess-udp-rport")
    {
        l2tp_sh_sess_udp_rport = value;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
    }
    if(value_path == "local-tunnel-name")
    {
        local_tunnel_name = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "remote-ip-address")
    {
        remote_ip_address = value;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
    if(value_path == "remote-tunnel-name")
    {
        remote_tunnel_name = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
}

L2Tp::Sessions::Session::SessionApplicationData::SessionApplicationData()
    :
    l2tp_sh_sess_app_type{YType::uint32, "l2tp-sh-sess-app-type"}
    	,
    vpdn(std::make_shared<L2Tp::Sessions::Session::SessionApplicationData::Vpdn>())
	,xconnect(std::make_shared<L2Tp::Sessions::Session::SessionApplicationData::Xconnect>())
{
    vpdn->parent = this;
    children["vpdn"] = vpdn;

    xconnect->parent = this;
    children["xconnect"] = xconnect;

    yang_name = "session-application-data"; yang_parent_name = "session";
}

L2Tp::Sessions::Session::SessionApplicationData::~SessionApplicationData()
{
}

bool L2Tp::Sessions::Session::SessionApplicationData::has_data() const
{
    return l2tp_sh_sess_app_type.is_set
	|| (vpdn !=  nullptr && vpdn->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data());
}

bool L2Tp::Sessions::Session::SessionApplicationData::has_operation() const
{
    return is_set(operation)
	|| is_set(l2tp_sh_sess_app_type.operation)
	|| (vpdn !=  nullptr && vpdn->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string L2Tp::Sessions::Session::SessionApplicationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-application-data";

    return path_buffer.str();

}

EntityPath L2Tp::Sessions::Session::SessionApplicationData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionApplicationData' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_sh_sess_app_type.is_set || is_set(l2tp_sh_sess_app_type.operation)) leaf_name_data.push_back(l2tp_sh_sess_app_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Sessions::Session::SessionApplicationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vpdn")
    {
        if(vpdn != nullptr)
        {
            children["vpdn"] = vpdn;
        }
        else
        {
            vpdn = std::make_shared<L2Tp::Sessions::Session::SessionApplicationData::Vpdn>();
            vpdn->parent = this;
            children["vpdn"] = vpdn;
        }
        return children.at("vpdn");
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect != nullptr)
        {
            children["xconnect"] = xconnect;
        }
        else
        {
            xconnect = std::make_shared<L2Tp::Sessions::Session::SessionApplicationData::Xconnect>();
            xconnect->parent = this;
            children["xconnect"] = xconnect;
        }
        return children.at("xconnect");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Sessions::Session::SessionApplicationData::get_children()
{
    if(children.find("vpdn") == children.end())
    {
        if(vpdn != nullptr)
        {
            children["vpdn"] = vpdn;
        }
    }

    if(children.find("xconnect") == children.end())
    {
        if(xconnect != nullptr)
        {
            children["xconnect"] = xconnect;
        }
    }

    return children;
}

void L2Tp::Sessions::Session::SessionApplicationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2tp-sh-sess-app-type")
    {
        l2tp_sh_sess_app_type = value;
    }
}

L2Tp::Sessions::Session::SessionApplicationData::Xconnect::Xconnect()
    :
    circuit_name{YType::str, "circuit-name"},
    ipv6_protocol_tunneling{YType::boolean, "ipv6-protocol-tunneling"},
    is_circuit_state_up{YType::boolean, "is-circuit-state-up"},
    is_local_circuit_state_up{YType::boolean, "is-local-circuit-state-up"},
    is_remote_circuit_state_up{YType::boolean, "is-remote-circuit-state-up"},
    sessionvc_id{YType::uint32, "sessionvc-id"}
{
    yang_name = "xconnect"; yang_parent_name = "session-application-data";
}

L2Tp::Sessions::Session::SessionApplicationData::Xconnect::~Xconnect()
{
}

bool L2Tp::Sessions::Session::SessionApplicationData::Xconnect::has_data() const
{
    return circuit_name.is_set
	|| ipv6_protocol_tunneling.is_set
	|| is_circuit_state_up.is_set
	|| is_local_circuit_state_up.is_set
	|| is_remote_circuit_state_up.is_set
	|| sessionvc_id.is_set;
}

bool L2Tp::Sessions::Session::SessionApplicationData::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(circuit_name.operation)
	|| is_set(ipv6_protocol_tunneling.operation)
	|| is_set(is_circuit_state_up.operation)
	|| is_set(is_local_circuit_state_up.operation)
	|| is_set(is_remote_circuit_state_up.operation)
	|| is_set(sessionvc_id.operation);
}

std::string L2Tp::Sessions::Session::SessionApplicationData::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

EntityPath L2Tp::Sessions::Session::SessionApplicationData::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_name.is_set || is_set(circuit_name.operation)) leaf_name_data.push_back(circuit_name.get_name_leafdata());
    if (ipv6_protocol_tunneling.is_set || is_set(ipv6_protocol_tunneling.operation)) leaf_name_data.push_back(ipv6_protocol_tunneling.get_name_leafdata());
    if (is_circuit_state_up.is_set || is_set(is_circuit_state_up.operation)) leaf_name_data.push_back(is_circuit_state_up.get_name_leafdata());
    if (is_local_circuit_state_up.is_set || is_set(is_local_circuit_state_up.operation)) leaf_name_data.push_back(is_local_circuit_state_up.get_name_leafdata());
    if (is_remote_circuit_state_up.is_set || is_set(is_remote_circuit_state_up.operation)) leaf_name_data.push_back(is_remote_circuit_state_up.get_name_leafdata());
    if (sessionvc_id.is_set || is_set(sessionvc_id.operation)) leaf_name_data.push_back(sessionvc_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Sessions::Session::SessionApplicationData::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Sessions::Session::SessionApplicationData::Xconnect::get_children()
{
    return children;
}

void L2Tp::Sessions::Session::SessionApplicationData::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "circuit-name")
    {
        circuit_name = value;
    }
    if(value_path == "ipv6-protocol-tunneling")
    {
        ipv6_protocol_tunneling = value;
    }
    if(value_path == "is-circuit-state-up")
    {
        is_circuit_state_up = value;
    }
    if(value_path == "is-local-circuit-state-up")
    {
        is_local_circuit_state_up = value;
    }
    if(value_path == "is-remote-circuit-state-up")
    {
        is_remote_circuit_state_up = value;
    }
    if(value_path == "sessionvc-id")
    {
        sessionvc_id = value;
    }
}

L2Tp::Sessions::Session::SessionApplicationData::Vpdn::Vpdn()
    :
    interface_name{YType::str, "interface-name"},
    username{YType::str, "username"}
{
    yang_name = "vpdn"; yang_parent_name = "session-application-data";
}

L2Tp::Sessions::Session::SessionApplicationData::Vpdn::~Vpdn()
{
}

bool L2Tp::Sessions::Session::SessionApplicationData::Vpdn::has_data() const
{
    return interface_name.is_set
	|| username.is_set;
}

bool L2Tp::Sessions::Session::SessionApplicationData::Vpdn::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(username.operation);
}

std::string L2Tp::Sessions::Session::SessionApplicationData::Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpdn";

    return path_buffer.str();

}

EntityPath L2Tp::Sessions::Session::SessionApplicationData::Vpdn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vpdn' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Sessions::Session::SessionApplicationData::Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Sessions::Session::SessionApplicationData::Vpdn::get_children()
{
    return children;
}

void L2Tp::Sessions::Session::SessionApplicationData::Vpdn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

L2Tp::Session::Session()
    :
    unavailable(std::make_shared<L2Tp::Session::Unavailable>())
{
    unavailable->parent = this;
    children["unavailable"] = unavailable;

    yang_name = "session"; yang_parent_name = "l2tp";
}

L2Tp::Session::~Session()
{
}

bool L2Tp::Session::has_data() const
{
    return (unavailable !=  nullptr && unavailable->has_data());
}

bool L2Tp::Session::has_operation() const
{
    return is_set(operation)
	|| (unavailable !=  nullptr && unavailable->has_operation());
}

std::string L2Tp::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath L2Tp::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "unavailable")
    {
        if(unavailable != nullptr)
        {
            children["unavailable"] = unavailable;
        }
        else
        {
            unavailable = std::make_shared<L2Tp::Session::Unavailable>();
            unavailable->parent = this;
            children["unavailable"] = unavailable;
        }
        return children.at("unavailable");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Session::get_children()
{
    if(children.find("unavailable") == children.end())
    {
        if(unavailable != nullptr)
        {
            children["unavailable"] = unavailable;
        }
    }

    return children;
}

void L2Tp::Session::set_value(const std::string & value_path, std::string value)
{
}

L2Tp::Session::Unavailable::Unavailable()
    :
    sessions_on_hold{YType::uint32, "sessions-on-hold"}
{
    yang_name = "unavailable"; yang_parent_name = "session";
}

L2Tp::Session::Unavailable::~Unavailable()
{
}

bool L2Tp::Session::Unavailable::has_data() const
{
    return sessions_on_hold.is_set;
}

bool L2Tp::Session::Unavailable::has_operation() const
{
    return is_set(operation)
	|| is_set(sessions_on_hold.operation);
}

std::string L2Tp::Session::Unavailable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unavailable";

    return path_buffer.str();

}

EntityPath L2Tp::Session::Unavailable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tp/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessions_on_hold.is_set || is_set(sessions_on_hold.operation)) leaf_name_data.push_back(sessions_on_hold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tp::Session::Unavailable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tp::Session::Unavailable::get_children()
{
    return children;
}

void L2Tp::Session::Unavailable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sessions-on-hold")
    {
        sessions_on_hold = value;
    }
}

L2Tpv2::L2Tpv2()
    :
    classes(std::make_shared<L2Tpv2::Classes>())
	,counter_hist_fail(std::make_shared<L2Tpv2::CounterHistFail>())
	,counters(std::make_shared<L2Tpv2::Counters>())
	,session(std::make_shared<L2Tpv2::Session>())
	,sessions(std::make_shared<L2Tpv2::Sessions>())
	,statistics(std::make_shared<L2Tpv2::Statistics>())
	,tunnel(std::make_shared<L2Tpv2::Tunnel>())
	,tunnel_configurations(std::make_shared<L2Tpv2::TunnelConfigurations>())
	,tunnels(std::make_shared<L2Tpv2::Tunnels>())
{
    classes->parent = this;
    children["classes"] = classes;

    counter_hist_fail->parent = this;
    children["counter-hist-fail"] = counter_hist_fail;

    counters->parent = this;
    children["counters"] = counters;

    session->parent = this;
    children["session"] = session;

    sessions->parent = this;
    children["sessions"] = sessions;

    statistics->parent = this;
    children["statistics"] = statistics;

    tunnel->parent = this;
    children["tunnel"] = tunnel;

    tunnel_configurations->parent = this;
    children["tunnel-configurations"] = tunnel_configurations;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    yang_name = "l2tpv2"; yang_parent_name = "Cisco-IOS-XR-tunnel-l2tun-oper";
}

L2Tpv2::~L2Tpv2()
{
}

bool L2Tpv2::has_data() const
{
    return (classes !=  nullptr && classes->has_data())
	|| (counter_hist_fail !=  nullptr && counter_hist_fail->has_data())
	|| (counters !=  nullptr && counters->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (tunnel_configurations !=  nullptr && tunnel_configurations->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool L2Tpv2::has_operation() const
{
    return is_set(operation)
	|| (classes !=  nullptr && classes->has_operation())
	|| (counter_hist_fail !=  nullptr && counter_hist_fail->has_operation())
	|| (counters !=  nullptr && counters->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (tunnel_configurations !=  nullptr && tunnel_configurations->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string L2Tpv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2";

    return path_buffer.str();

}

EntityPath L2Tpv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "classes")
    {
        if(classes != nullptr)
        {
            children["classes"] = classes;
        }
        else
        {
            classes = std::make_shared<L2Tpv2::Classes>();
            classes->parent = this;
            children["classes"] = classes;
        }
        return children.at("classes");
    }

    if(child_yang_name == "counter-hist-fail")
    {
        if(counter_hist_fail != nullptr)
        {
            children["counter-hist-fail"] = counter_hist_fail;
        }
        else
        {
            counter_hist_fail = std::make_shared<L2Tpv2::CounterHistFail>();
            counter_hist_fail->parent = this;
            children["counter-hist-fail"] = counter_hist_fail;
        }
        return children.at("counter-hist-fail");
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<L2Tpv2::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<L2Tpv2::Session>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<L2Tpv2::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<L2Tpv2::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel != nullptr)
        {
            children["tunnel"] = tunnel;
        }
        else
        {
            tunnel = std::make_shared<L2Tpv2::Tunnel>();
            tunnel->parent = this;
            children["tunnel"] = tunnel;
        }
        return children.at("tunnel");
    }

    if(child_yang_name == "tunnel-configurations")
    {
        if(tunnel_configurations != nullptr)
        {
            children["tunnel-configurations"] = tunnel_configurations;
        }
        else
        {
            tunnel_configurations = std::make_shared<L2Tpv2::TunnelConfigurations>();
            tunnel_configurations->parent = this;
            children["tunnel-configurations"] = tunnel_configurations;
        }
        return children.at("tunnel-configurations");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<L2Tpv2::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::get_children()
{
    if(children.find("classes") == children.end())
    {
        if(classes != nullptr)
        {
            children["classes"] = classes;
        }
    }

    if(children.find("counter-hist-fail") == children.end())
    {
        if(counter_hist_fail != nullptr)
        {
            children["counter-hist-fail"] = counter_hist_fail;
        }
    }

    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    if(children.find("tunnel") == children.end())
    {
        if(tunnel != nullptr)
        {
            children["tunnel"] = tunnel;
        }
    }

    if(children.find("tunnel-configurations") == children.end())
    {
        if(tunnel_configurations != nullptr)
        {
            children["tunnel-configurations"] = tunnel_configurations;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    return children;
}

void L2Tpv2::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> L2Tpv2::clone_ptr() const
{
    return std::make_shared<L2Tpv2>();
}

std::string L2Tpv2::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2Tpv2::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2Tpv2::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

L2Tpv2::Counters::Counters()
    :
    control(std::make_shared<L2Tpv2::Counters::Control>())
	,forwarding(std::make_shared<L2Tpv2::Counters::Forwarding>())
{
    control->parent = this;
    children["control"] = control;

    forwarding->parent = this;
    children["forwarding"] = forwarding;

    yang_name = "counters"; yang_parent_name = "l2tpv2";
}

L2Tpv2::Counters::~Counters()
{
}

bool L2Tpv2::Counters::has_data() const
{
    return (control !=  nullptr && control->has_data())
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool L2Tpv2::Counters::has_operation() const
{
    return is_set(operation)
	|| (control !=  nullptr && control->has_operation())
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string L2Tpv2::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "control")
    {
        if(control != nullptr)
        {
            children["control"] = control;
        }
        else
        {
            control = std::make_shared<L2Tpv2::Counters::Control>();
            control->parent = this;
            children["control"] = control;
        }
        return children.at("control");
    }

    if(child_yang_name == "forwarding")
    {
        if(forwarding != nullptr)
        {
            children["forwarding"] = forwarding;
        }
        else
        {
            forwarding = std::make_shared<L2Tpv2::Counters::Forwarding>();
            forwarding->parent = this;
            children["forwarding"] = forwarding;
        }
        return children.at("forwarding");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::get_children()
{
    if(children.find("control") == children.end())
    {
        if(control != nullptr)
        {
            children["control"] = control;
        }
    }

    if(children.find("forwarding") == children.end())
    {
        if(forwarding != nullptr)
        {
            children["forwarding"] = forwarding;
        }
    }

    return children;
}

void L2Tpv2::Counters::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Counters::Forwarding::Forwarding()
    :
    sessions(std::make_shared<L2Tpv2::Counters::Forwarding::Sessions>())
{
    sessions->parent = this;
    children["sessions"] = sessions;

    yang_name = "forwarding"; yang_parent_name = "counters";
}

L2Tpv2::Counters::Forwarding::~Forwarding()
{
}

bool L2Tpv2::Counters::Forwarding::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data());
}

bool L2Tpv2::Counters::Forwarding::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string L2Tpv2::Counters::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Forwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<L2Tpv2::Counters::Forwarding::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Forwarding::get_children()
{
    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    return children;
}

void L2Tpv2::Counters::Forwarding::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Counters::Forwarding::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "forwarding";
}

L2Tpv2::Counters::Forwarding::Sessions::~Sessions()
{
}

bool L2Tpv2::Counters::Forwarding::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tpv2::Counters::Forwarding::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tpv2::Counters::Forwarding::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Forwarding::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/forwarding/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Forwarding::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Tpv2::Counters::Forwarding::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Forwarding::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Tpv2::Counters::Forwarding::Sessions::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Counters::Forwarding::Sessions::Session::Session()
    :
    session_id{YType::int32, "session-id"},
    tunnel_id{YType::int32, "tunnel-id"},
    in_bytes{YType::uint64, "in-bytes"},
    in_packets{YType::uint64, "in-packets"},
    out_bytes{YType::uint64, "out-bytes"},
    out_packets{YType::uint64, "out-packets"},
    remote_session_id{YType::uint32, "remote-session-id"}
{
    yang_name = "session"; yang_parent_name = "sessions";
}

L2Tpv2::Counters::Forwarding::Sessions::Session::~Session()
{
}

bool L2Tpv2::Counters::Forwarding::Sessions::Session::has_data() const
{
    return session_id.is_set
	|| tunnel_id.is_set
	|| in_bytes.is_set
	|| in_packets.is_set
	|| out_bytes.is_set
	|| out_packets.is_set
	|| remote_session_id.is_set;
}

bool L2Tpv2::Counters::Forwarding::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(in_bytes.operation)
	|| is_set(in_packets.operation)
	|| is_set(out_bytes.operation)
	|| is_set(out_packets.operation)
	|| is_set(remote_session_id.operation);
}

std::string L2Tpv2::Counters::Forwarding::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-id='" <<session_id <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Forwarding::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/forwarding/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (in_bytes.is_set || is_set(in_bytes.operation)) leaf_name_data.push_back(in_bytes.get_name_leafdata());
    if (in_packets.is_set || is_set(in_packets.operation)) leaf_name_data.push_back(in_packets.get_name_leafdata());
    if (out_bytes.is_set || is_set(out_bytes.operation)) leaf_name_data.push_back(out_bytes.get_name_leafdata());
    if (out_packets.is_set || is_set(out_packets.operation)) leaf_name_data.push_back(out_packets.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.operation)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Forwarding::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Forwarding::Sessions::Session::get_children()
{
    return children;
}

void L2Tpv2::Counters::Forwarding::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "in-bytes")
    {
        in_bytes = value;
    }
    if(value_path == "in-packets")
    {
        in_packets = value;
    }
    if(value_path == "out-bytes")
    {
        out_bytes = value;
    }
    if(value_path == "out-packets")
    {
        out_packets = value;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
    }
}

L2Tpv2::Counters::Control::Control()
    :
    tunnel_xr(std::make_shared<L2Tpv2::Counters::Control::TunnelXr>())
	,tunnels(std::make_shared<L2Tpv2::Counters::Control::Tunnels>())
{
    tunnel_xr->parent = this;
    children["tunnel-xr"] = tunnel_xr;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    yang_name = "control"; yang_parent_name = "counters";
}

L2Tpv2::Counters::Control::~Control()
{
}

bool L2Tpv2::Counters::Control::has_data() const
{
    return (tunnel_xr !=  nullptr && tunnel_xr->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool L2Tpv2::Counters::Control::has_operation() const
{
    return is_set(operation)
	|| (tunnel_xr !=  nullptr && tunnel_xr->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string L2Tpv2::Counters::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-xr")
    {
        if(tunnel_xr != nullptr)
        {
            children["tunnel-xr"] = tunnel_xr;
        }
        else
        {
            tunnel_xr = std::make_shared<L2Tpv2::Counters::Control::TunnelXr>();
            tunnel_xr->parent = this;
            children["tunnel-xr"] = tunnel_xr;
        }
        return children.at("tunnel-xr");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<L2Tpv2::Counters::Control::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::get_children()
{
    if(children.find("tunnel-xr") == children.end())
    {
        if(tunnel_xr != nullptr)
        {
            children["tunnel-xr"] = tunnel_xr;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    return children;
}

void L2Tpv2::Counters::Control::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Counters::Control::TunnelXr::TunnelXr()
    :
    authentication(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication>())
	,global(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Global>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    global->parent = this;
    children["global"] = global;

    yang_name = "tunnel-xr"; yang_parent_name = "control";
}

L2Tpv2::Counters::Control::TunnelXr::~TunnelXr()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool L2Tpv2::Counters::Control::TunnelXr::has_operation() const
{
    return is_set(operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string L2Tpv2::Counters::Control::TunnelXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-xr";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::Authentication()
    :
    challenge_avp(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp>())
	,challenge_reponse(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse>())
	,common_digest(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest>())
	,integrity_check(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck>())
	,local_secret(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret>())
	,nonce_avp(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp>())
	,overall_statistics(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics>())
	,primary_digest(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest>())
	,secondary_digest(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest>())
{
    challenge_avp->parent = this;
    children["challenge-avp"] = challenge_avp;

    challenge_reponse->parent = this;
    children["challenge-reponse"] = challenge_reponse;

    common_digest->parent = this;
    children["common-digest"] = common_digest;

    integrity_check->parent = this;
    children["integrity-check"] = integrity_check;

    local_secret->parent = this;
    children["local-secret"] = local_secret;

    nonce_avp->parent = this;
    children["nonce-avp"] = nonce_avp;

    overall_statistics->parent = this;
    children["overall-statistics"] = overall_statistics;

    primary_digest->parent = this;
    children["primary-digest"] = primary_digest;

    secondary_digest->parent = this;
    children["secondary-digest"] = secondary_digest;

    yang_name = "authentication"; yang_parent_name = "tunnel-xr";
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::~Authentication()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::has_data() const
{
    return (challenge_avp !=  nullptr && challenge_avp->has_data())
	|| (challenge_reponse !=  nullptr && challenge_reponse->has_data())
	|| (common_digest !=  nullptr && common_digest->has_data())
	|| (integrity_check !=  nullptr && integrity_check->has_data())
	|| (local_secret !=  nullptr && local_secret->has_data())
	|| (nonce_avp !=  nullptr && nonce_avp->has_data())
	|| (overall_statistics !=  nullptr && overall_statistics->has_data())
	|| (primary_digest !=  nullptr && primary_digest->has_data())
	|| (secondary_digest !=  nullptr && secondary_digest->has_data());
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::has_operation() const
{
    return is_set(operation)
	|| (challenge_avp !=  nullptr && challenge_avp->has_operation())
	|| (challenge_reponse !=  nullptr && challenge_reponse->has_operation())
	|| (common_digest !=  nullptr && common_digest->has_operation())
	|| (integrity_check !=  nullptr && integrity_check->has_operation())
	|| (local_secret !=  nullptr && local_secret->has_operation())
	|| (nonce_avp !=  nullptr && nonce_avp->has_operation())
	|| (overall_statistics !=  nullptr && overall_statistics->has_operation())
	|| (primary_digest !=  nullptr && primary_digest->has_operation())
	|| (secondary_digest !=  nullptr && secondary_digest->has_operation());
}

std::string L2Tpv2::Counters::Control::TunnelXr::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "challenge-avp")
    {
        if(challenge_avp != nullptr)
        {
            children["challenge-avp"] = challenge_avp;
        }
        else
        {
            challenge_avp = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp>();
            challenge_avp->parent = this;
            children["challenge-avp"] = challenge_avp;
        }
        return children.at("challenge-avp");
    }

    if(child_yang_name == "challenge-reponse")
    {
        if(challenge_reponse != nullptr)
        {
            children["challenge-reponse"] = challenge_reponse;
        }
        else
        {
            challenge_reponse = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse>();
            challenge_reponse->parent = this;
            children["challenge-reponse"] = challenge_reponse;
        }
        return children.at("challenge-reponse");
    }

    if(child_yang_name == "common-digest")
    {
        if(common_digest != nullptr)
        {
            children["common-digest"] = common_digest;
        }
        else
        {
            common_digest = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest>();
            common_digest->parent = this;
            children["common-digest"] = common_digest;
        }
        return children.at("common-digest");
    }

    if(child_yang_name == "integrity-check")
    {
        if(integrity_check != nullptr)
        {
            children["integrity-check"] = integrity_check;
        }
        else
        {
            integrity_check = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck>();
            integrity_check->parent = this;
            children["integrity-check"] = integrity_check;
        }
        return children.at("integrity-check");
    }

    if(child_yang_name == "local-secret")
    {
        if(local_secret != nullptr)
        {
            children["local-secret"] = local_secret;
        }
        else
        {
            local_secret = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret>();
            local_secret->parent = this;
            children["local-secret"] = local_secret;
        }
        return children.at("local-secret");
    }

    if(child_yang_name == "nonce-avp")
    {
        if(nonce_avp != nullptr)
        {
            children["nonce-avp"] = nonce_avp;
        }
        else
        {
            nonce_avp = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp>();
            nonce_avp->parent = this;
            children["nonce-avp"] = nonce_avp;
        }
        return children.at("nonce-avp");
    }

    if(child_yang_name == "overall-statistics")
    {
        if(overall_statistics != nullptr)
        {
            children["overall-statistics"] = overall_statistics;
        }
        else
        {
            overall_statistics = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics>();
            overall_statistics->parent = this;
            children["overall-statistics"] = overall_statistics;
        }
        return children.at("overall-statistics");
    }

    if(child_yang_name == "primary-digest")
    {
        if(primary_digest != nullptr)
        {
            children["primary-digest"] = primary_digest;
        }
        else
        {
            primary_digest = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest>();
            primary_digest->parent = this;
            children["primary-digest"] = primary_digest;
        }
        return children.at("primary-digest");
    }

    if(child_yang_name == "secondary-digest")
    {
        if(secondary_digest != nullptr)
        {
            children["secondary-digest"] = secondary_digest;
        }
        else
        {
            secondary_digest = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest>();
            secondary_digest->parent = this;
            children["secondary-digest"] = secondary_digest;
        }
        return children.at("secondary-digest");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Authentication::get_children()
{
    if(children.find("challenge-avp") == children.end())
    {
        if(challenge_avp != nullptr)
        {
            children["challenge-avp"] = challenge_avp;
        }
    }

    if(children.find("challenge-reponse") == children.end())
    {
        if(challenge_reponse != nullptr)
        {
            children["challenge-reponse"] = challenge_reponse;
        }
    }

    if(children.find("common-digest") == children.end())
    {
        if(common_digest != nullptr)
        {
            children["common-digest"] = common_digest;
        }
    }

    if(children.find("integrity-check") == children.end())
    {
        if(integrity_check != nullptr)
        {
            children["integrity-check"] = integrity_check;
        }
    }

    if(children.find("local-secret") == children.end())
    {
        if(local_secret != nullptr)
        {
            children["local-secret"] = local_secret;
        }
    }

    if(children.find("nonce-avp") == children.end())
    {
        if(nonce_avp != nullptr)
        {
            children["nonce-avp"] = nonce_avp;
        }
    }

    if(children.find("overall-statistics") == children.end())
    {
        if(overall_statistics != nullptr)
        {
            children["overall-statistics"] = overall_statistics;
        }
    }

    if(children.find("primary-digest") == children.end())
    {
        if(primary_digest != nullptr)
        {
            children["primary-digest"] = primary_digest;
        }
    }

    if(children.find("secondary-digest") == children.end())
    {
        if(secondary_digest != nullptr)
        {
            children["secondary-digest"] = secondary_digest;
        }
    }

    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Authentication::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::NonceAvp()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "nonce-avp"; yang_parent_name = "authentication";
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::~NonceAvp()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nonce-avp";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::CommonDigest()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "common-digest"; yang_parent_name = "authentication";
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::~CommonDigest()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-digest";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::PrimaryDigest()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "primary-digest"; yang_parent_name = "authentication";
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::~PrimaryDigest()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-digest";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::SecondaryDigest()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "secondary-digest"; yang_parent_name = "authentication";
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::~SecondaryDigest()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-digest";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::IntegrityCheck()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "integrity-check"; yang_parent_name = "authentication";
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::~IntegrityCheck()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "integrity-check";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::LocalSecret()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "local-secret"; yang_parent_name = "authentication";
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::~LocalSecret()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-secret";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::ChallengeAvp()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "challenge-avp"; yang_parent_name = "authentication";
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::~ChallengeAvp()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "challenge-avp";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::ChallengeReponse()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "challenge-reponse"; yang_parent_name = "authentication";
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::~ChallengeReponse()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "challenge-reponse";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::OverallStatistics()
    :
    bad_hash{YType::uint32, "bad-hash"},
    bad_length{YType::uint32, "bad-length"},
    failed{YType::uint32, "failed"},
    generate_response_failures{YType::uint32, "generate-response-failures"},
    ignored{YType::uint32, "ignored"},
    missing{YType::uint32, "missing"},
    passed{YType::uint32, "passed"},
    skipped{YType::uint32, "skipped"},
    unexpected{YType::uint32, "unexpected"},
    unexpected_zlb{YType::uint32, "unexpected-zlb"},
    validate{YType::uint32, "validate"}
{
    yang_name = "overall-statistics"; yang_parent_name = "authentication";
}

L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::~OverallStatistics()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::has_data() const
{
    return bad_hash.is_set
	|| bad_length.is_set
	|| failed.is_set
	|| generate_response_failures.is_set
	|| ignored.is_set
	|| missing.is_set
	|| passed.is_set
	|| skipped.is_set
	|| unexpected.is_set
	|| unexpected_zlb.is_set
	|| validate.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_hash.operation)
	|| is_set(bad_length.operation)
	|| is_set(failed.operation)
	|| is_set(generate_response_failures.operation)
	|| is_set(ignored.operation)
	|| is_set(missing.operation)
	|| is_set(passed.operation)
	|| is_set(skipped.operation)
	|| is_set(unexpected.operation)
	|| is_set(unexpected_zlb.operation)
	|| is_set(validate.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overall-statistics";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bad_hash.is_set || is_set(bad_hash.operation)) leaf_name_data.push_back(bad_hash.get_name_leafdata());
    if (bad_length.is_set || is_set(bad_length.operation)) leaf_name_data.push_back(bad_length.get_name_leafdata());
    if (failed.is_set || is_set(failed.operation)) leaf_name_data.push_back(failed.get_name_leafdata());
    if (generate_response_failures.is_set || is_set(generate_response_failures.operation)) leaf_name_data.push_back(generate_response_failures.get_name_leafdata());
    if (ignored.is_set || is_set(ignored.operation)) leaf_name_data.push_back(ignored.get_name_leafdata());
    if (missing.is_set || is_set(missing.operation)) leaf_name_data.push_back(missing.get_name_leafdata());
    if (passed.is_set || is_set(passed.operation)) leaf_name_data.push_back(passed.get_name_leafdata());
    if (skipped.is_set || is_set(skipped.operation)) leaf_name_data.push_back(skipped.get_name_leafdata());
    if (unexpected.is_set || is_set(unexpected.operation)) leaf_name_data.push_back(unexpected.get_name_leafdata());
    if (unexpected_zlb.is_set || is_set(unexpected_zlb.operation)) leaf_name_data.push_back(unexpected_zlb.get_name_leafdata());
    if (validate.is_set || is_set(validate.operation)) leaf_name_data.push_back(validate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-hash")
    {
        bad_hash = value;
    }
    if(value_path == "bad-length")
    {
        bad_length = value;
    }
    if(value_path == "failed")
    {
        failed = value;
    }
    if(value_path == "generate-response-failures")
    {
        generate_response_failures = value;
    }
    if(value_path == "ignored")
    {
        ignored = value;
    }
    if(value_path == "missing")
    {
        missing = value;
    }
    if(value_path == "passed")
    {
        passed = value;
    }
    if(value_path == "skipped")
    {
        skipped = value;
    }
    if(value_path == "unexpected")
    {
        unexpected = value;
    }
    if(value_path == "unexpected-zlb")
    {
        unexpected_zlb = value;
    }
    if(value_path == "validate")
    {
        validate = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Global::Global()
    :
    total_drop{YType::uint32, "total-drop"},
    total_received{YType::uint32, "total-received"},
    total_retransmit{YType::uint32, "total-retransmit"},
    total_transmit{YType::uint32, "total-transmit"}
    	,
    drop(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Global::Drop>())
	,received(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Global::Received>())
	,retransmit(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit>())
	,transmit(std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Global::Transmit>())
{
    drop->parent = this;
    children["drop"] = drop;

    received->parent = this;
    children["received"] = received;

    retransmit->parent = this;
    children["retransmit"] = retransmit;

    transmit->parent = this;
    children["transmit"] = transmit;

    yang_name = "global"; yang_parent_name = "tunnel-xr";
}

L2Tpv2::Counters::Control::TunnelXr::Global::~Global()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Global::has_data() const
{
    return total_drop.is_set
	|| total_received.is_set
	|| total_retransmit.is_set
	|| total_transmit.is_set
	|| (drop !=  nullptr && drop->has_data())
	|| (received !=  nullptr && received->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (transmit !=  nullptr && transmit->has_data());
}

bool L2Tpv2::Counters::Control::TunnelXr::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(total_drop.operation)
	|| is_set(total_received.operation)
	|| is_set(total_retransmit.operation)
	|| is_set(total_transmit.operation)
	|| (drop !=  nullptr && drop->has_operation())
	|| (received !=  nullptr && received->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation());
}

std::string L2Tpv2::Counters::Control::TunnelXr::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_drop.is_set || is_set(total_drop.operation)) leaf_name_data.push_back(total_drop.get_name_leafdata());
    if (total_received.is_set || is_set(total_received.operation)) leaf_name_data.push_back(total_received.get_name_leafdata());
    if (total_retransmit.is_set || is_set(total_retransmit.operation)) leaf_name_data.push_back(total_retransmit.get_name_leafdata());
    if (total_transmit.is_set || is_set(total_transmit.operation)) leaf_name_data.push_back(total_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "drop")
    {
        if(drop != nullptr)
        {
            children["drop"] = drop;
        }
        else
        {
            drop = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Global::Drop>();
            drop->parent = this;
            children["drop"] = drop;
        }
        return children.at("drop");
    }

    if(child_yang_name == "received")
    {
        if(received != nullptr)
        {
            children["received"] = received;
        }
        else
        {
            received = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Global::Received>();
            received->parent = this;
            children["received"] = received;
        }
        return children.at("received");
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit != nullptr)
        {
            children["retransmit"] = retransmit;
        }
        else
        {
            retransmit = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit>();
            retransmit->parent = this;
            children["retransmit"] = retransmit;
        }
        return children.at("retransmit");
    }

    if(child_yang_name == "transmit")
    {
        if(transmit != nullptr)
        {
            children["transmit"] = transmit;
        }
        else
        {
            transmit = std::make_shared<L2Tpv2::Counters::Control::TunnelXr::Global::Transmit>();
            transmit->parent = this;
            children["transmit"] = transmit;
        }
        return children.at("transmit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Global::get_children()
{
    if(children.find("drop") == children.end())
    {
        if(drop != nullptr)
        {
            children["drop"] = drop;
        }
    }

    if(children.find("received") == children.end())
    {
        if(received != nullptr)
        {
            children["received"] = received;
        }
    }

    if(children.find("retransmit") == children.end())
    {
        if(retransmit != nullptr)
        {
            children["retransmit"] = retransmit;
        }
    }

    if(children.find("transmit") == children.end())
    {
        if(transmit != nullptr)
        {
            children["transmit"] = transmit;
        }
    }

    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-drop")
    {
        total_drop = value;
    }
    if(value_path == "total-received")
    {
        total_received = value;
    }
    if(value_path == "total-retransmit")
    {
        total_retransmit = value;
    }
    if(value_path == "total-transmit")
    {
        total_transmit = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Global::Transmit::Transmit()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "transmit"; yang_parent_name = "global";
}

L2Tpv2::Counters::Control::TunnelXr::Global::Transmit::~Transmit()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Global::Transmit::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Global::Transmit::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Global::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Global::Transmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Global::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Global::Transmit::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Global::Transmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit::Retransmit()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "retransmit"; yang_parent_name = "global";
}

L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit::~Retransmit()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Global::Received::Received()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "received"; yang_parent_name = "global";
}

L2Tpv2::Counters::Control::TunnelXr::Global::Received::~Received()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Global::Received::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Global::Received::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Global::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Global::Received::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Global::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Global::Received::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Global::Received::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tpv2::Counters::Control::TunnelXr::Global::Drop::Drop()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "drop"; yang_parent_name = "global";
}

L2Tpv2::Counters::Control::TunnelXr::Global::Drop::~Drop()
{
}

bool L2Tpv2::Counters::Control::TunnelXr::Global::Drop::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tpv2::Counters::Control::TunnelXr::Global::Drop::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tpv2::Counters::Control::TunnelXr::Global::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::TunnelXr::Global::Drop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnel-xr/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::TunnelXr::Global::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::TunnelXr::Global::Drop::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::TunnelXr::Global::Drop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tpv2::Counters::Control::Tunnels::Tunnels()
{
    yang_name = "tunnels"; yang_parent_name = "control";
}

L2Tpv2::Counters::Control::Tunnels::~Tunnels()
{
}

bool L2Tpv2::Counters::Control::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tpv2::Counters::Control::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tpv2::Counters::Control::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::Tunnels::get_children()
{
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Tpv2::Counters::Control::Tunnels::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Tunnel()
    :
    tunnel_id{YType::int32, "tunnel-id"}
    	,
    brief(std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief>())
	,global(std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel::Global>())
{
    brief->parent = this;
    children["brief"] = brief;

    global->parent = this;
    children["global"] = global;

    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::~Tunnel()
{
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::has_data() const
{
    return tunnel_id.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_id.operation)
	|| (brief !=  nullptr && brief->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string L2Tpv2::Counters::Control::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/counters/control/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief")
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
        else
        {
            brief = std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief>();
            brief->parent = this;
            children["brief"] = brief;
        }
        return children.at("brief");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::Tunnels::Tunnel::get_children()
{
    if(children.find("brief") == children.end())
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    return children;
}

void L2Tpv2::Counters::Control::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief::Brief()
    :
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"}
{
    yang_name = "brief"; yang_parent_name = "tunnel";
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief::~Brief()
{
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief::has_data() const
{
    return local_address.is_set
	|| remote_address.is_set
	|| remote_tunnel_id.is_set;
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(remote_address.operation)
	|| is_set(remote_tunnel_id.operation);
}

std::string L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Brief' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Global()
    :
    total_drop{YType::uint32, "total-drop"},
    total_received{YType::uint32, "total-received"},
    total_retransmit{YType::uint32, "total-retransmit"},
    total_transmit{YType::uint32, "total-transmit"}
    	,
    drop(std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop>())
	,received(std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received>())
	,retransmit(std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit>())
	,transmit(std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit>())
{
    drop->parent = this;
    children["drop"] = drop;

    received->parent = this;
    children["received"] = received;

    retransmit->parent = this;
    children["retransmit"] = retransmit;

    transmit->parent = this;
    children["transmit"] = transmit;

    yang_name = "global"; yang_parent_name = "tunnel";
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::~Global()
{
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::has_data() const
{
    return total_drop.is_set
	|| total_received.is_set
	|| total_retransmit.is_set
	|| total_transmit.is_set
	|| (drop !=  nullptr && drop->has_data())
	|| (received !=  nullptr && received->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (transmit !=  nullptr && transmit->has_data());
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(total_drop.operation)
	|| is_set(total_received.operation)
	|| is_set(total_retransmit.operation)
	|| is_set(total_transmit.operation)
	|| (drop !=  nullptr && drop->has_operation())
	|| (received !=  nullptr && received->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation());
}

std::string L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_drop.is_set || is_set(total_drop.operation)) leaf_name_data.push_back(total_drop.get_name_leafdata());
    if (total_received.is_set || is_set(total_received.operation)) leaf_name_data.push_back(total_received.get_name_leafdata());
    if (total_retransmit.is_set || is_set(total_retransmit.operation)) leaf_name_data.push_back(total_retransmit.get_name_leafdata());
    if (total_transmit.is_set || is_set(total_transmit.operation)) leaf_name_data.push_back(total_transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "drop")
    {
        if(drop != nullptr)
        {
            children["drop"] = drop;
        }
        else
        {
            drop = std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop>();
            drop->parent = this;
            children["drop"] = drop;
        }
        return children.at("drop");
    }

    if(child_yang_name == "received")
    {
        if(received != nullptr)
        {
            children["received"] = received;
        }
        else
        {
            received = std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received>();
            received->parent = this;
            children["received"] = received;
        }
        return children.at("received");
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit != nullptr)
        {
            children["retransmit"] = retransmit;
        }
        else
        {
            retransmit = std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit>();
            retransmit->parent = this;
            children["retransmit"] = retransmit;
        }
        return children.at("retransmit");
    }

    if(child_yang_name == "transmit")
    {
        if(transmit != nullptr)
        {
            children["transmit"] = transmit;
        }
        else
        {
            transmit = std::make_shared<L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit>();
            transmit->parent = this;
            children["transmit"] = transmit;
        }
        return children.at("transmit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::get_children()
{
    if(children.find("drop") == children.end())
    {
        if(drop != nullptr)
        {
            children["drop"] = drop;
        }
    }

    if(children.find("received") == children.end())
    {
        if(received != nullptr)
        {
            children["received"] = received;
        }
    }

    if(children.find("retransmit") == children.end())
    {
        if(retransmit != nullptr)
        {
            children["retransmit"] = retransmit;
        }
    }

    if(children.find("transmit") == children.end())
    {
        if(transmit != nullptr)
        {
            children["transmit"] = transmit;
        }
    }

    return children;
}

void L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-drop")
    {
        total_drop = value;
    }
    if(value_path == "total-received")
    {
        total_received = value;
    }
    if(value_path == "total-retransmit")
    {
        total_retransmit = value;
    }
    if(value_path == "total-transmit")
    {
        total_transmit = value;
    }
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::Transmit()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "transmit"; yang_parent_name = "global";
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::~Transmit()
{
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transmit' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::Retransmit()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "retransmit"; yang_parent_name = "global";
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::~Retransmit()
{
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmit' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::Received()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "received"; yang_parent_name = "global";
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::~Received()
{
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Received' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::Drop()
    :
    acknowledgement_packets{YType::uint32, "acknowledgement-packets"},
    call_disconnect_notify_packets{YType::uint32, "call-disconnect-notify-packets"},
    hello_packets{YType::uint32, "hello-packets"},
    incoming_call_connected_packets{YType::uint32, "incoming-call-connected-packets"},
    incoming_call_replies{YType::uint32, "incoming-call-replies"},
    incoming_call_requests{YType::uint32, "incoming-call-requests"},
    outgoing_call_connected_packets{YType::uint32, "outgoing-call-connected-packets"},
    outgoing_call_replies{YType::uint32, "outgoing-call-replies"},
    outgoing_call_requests{YType::uint32, "outgoing-call-requests"},
    service_relay_replies{YType::uint32, "service-relay-replies"},
    service_relay_requests{YType::uint32, "service-relay-requests"},
    set_link_info_packets{YType::uint32, "set-link-info-packets"},
    start_control_connection_notifications{YType::uint32, "start-control-connection-notifications"},
    start_control_connection_replies{YType::uint32, "start-control-connection-replies"},
    start_control_connection_requests{YType::uint32, "start-control-connection-requests"},
    stop_control_connection_notifications{YType::uint32, "stop-control-connection-notifications"},
    unknown_packets{YType::uint32, "unknown-packets"},
    wan_error_notify_packets{YType::uint32, "wan-error-notify-packets"},
    zero_length_body_packets{YType::uint32, "zero-length-body-packets"}
{
    yang_name = "drop"; yang_parent_name = "global";
}

L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::~Drop()
{
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::has_data() const
{
    return acknowledgement_packets.is_set
	|| call_disconnect_notify_packets.is_set
	|| hello_packets.is_set
	|| incoming_call_connected_packets.is_set
	|| incoming_call_replies.is_set
	|| incoming_call_requests.is_set
	|| outgoing_call_connected_packets.is_set
	|| outgoing_call_replies.is_set
	|| outgoing_call_requests.is_set
	|| service_relay_replies.is_set
	|| service_relay_requests.is_set
	|| set_link_info_packets.is_set
	|| start_control_connection_notifications.is_set
	|| start_control_connection_replies.is_set
	|| start_control_connection_requests.is_set
	|| stop_control_connection_notifications.is_set
	|| unknown_packets.is_set
	|| wan_error_notify_packets.is_set
	|| zero_length_body_packets.is_set;
}

bool L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement_packets.operation)
	|| is_set(call_disconnect_notify_packets.operation)
	|| is_set(hello_packets.operation)
	|| is_set(incoming_call_connected_packets.operation)
	|| is_set(incoming_call_replies.operation)
	|| is_set(incoming_call_requests.operation)
	|| is_set(outgoing_call_connected_packets.operation)
	|| is_set(outgoing_call_replies.operation)
	|| is_set(outgoing_call_requests.operation)
	|| is_set(service_relay_replies.operation)
	|| is_set(service_relay_requests.operation)
	|| is_set(set_link_info_packets.operation)
	|| is_set(start_control_connection_notifications.operation)
	|| is_set(start_control_connection_replies.operation)
	|| is_set(start_control_connection_requests.operation)
	|| is_set(stop_control_connection_notifications.operation)
	|| is_set(unknown_packets.operation)
	|| is_set(wan_error_notify_packets.operation)
	|| is_set(zero_length_body_packets.operation);
}

std::string L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";

    return path_buffer.str();

}

EntityPath L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Drop' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_packets.is_set || is_set(acknowledgement_packets.operation)) leaf_name_data.push_back(acknowledgement_packets.get_name_leafdata());
    if (call_disconnect_notify_packets.is_set || is_set(call_disconnect_notify_packets.operation)) leaf_name_data.push_back(call_disconnect_notify_packets.get_name_leafdata());
    if (hello_packets.is_set || is_set(hello_packets.operation)) leaf_name_data.push_back(hello_packets.get_name_leafdata());
    if (incoming_call_connected_packets.is_set || is_set(incoming_call_connected_packets.operation)) leaf_name_data.push_back(incoming_call_connected_packets.get_name_leafdata());
    if (incoming_call_replies.is_set || is_set(incoming_call_replies.operation)) leaf_name_data.push_back(incoming_call_replies.get_name_leafdata());
    if (incoming_call_requests.is_set || is_set(incoming_call_requests.operation)) leaf_name_data.push_back(incoming_call_requests.get_name_leafdata());
    if (outgoing_call_connected_packets.is_set || is_set(outgoing_call_connected_packets.operation)) leaf_name_data.push_back(outgoing_call_connected_packets.get_name_leafdata());
    if (outgoing_call_replies.is_set || is_set(outgoing_call_replies.operation)) leaf_name_data.push_back(outgoing_call_replies.get_name_leafdata());
    if (outgoing_call_requests.is_set || is_set(outgoing_call_requests.operation)) leaf_name_data.push_back(outgoing_call_requests.get_name_leafdata());
    if (service_relay_replies.is_set || is_set(service_relay_replies.operation)) leaf_name_data.push_back(service_relay_replies.get_name_leafdata());
    if (service_relay_requests.is_set || is_set(service_relay_requests.operation)) leaf_name_data.push_back(service_relay_requests.get_name_leafdata());
    if (set_link_info_packets.is_set || is_set(set_link_info_packets.operation)) leaf_name_data.push_back(set_link_info_packets.get_name_leafdata());
    if (start_control_connection_notifications.is_set || is_set(start_control_connection_notifications.operation)) leaf_name_data.push_back(start_control_connection_notifications.get_name_leafdata());
    if (start_control_connection_replies.is_set || is_set(start_control_connection_replies.operation)) leaf_name_data.push_back(start_control_connection_replies.get_name_leafdata());
    if (start_control_connection_requests.is_set || is_set(start_control_connection_requests.operation)) leaf_name_data.push_back(start_control_connection_requests.get_name_leafdata());
    if (stop_control_connection_notifications.is_set || is_set(stop_control_connection_notifications.operation)) leaf_name_data.push_back(stop_control_connection_notifications.get_name_leafdata());
    if (unknown_packets.is_set || is_set(unknown_packets.operation)) leaf_name_data.push_back(unknown_packets.get_name_leafdata());
    if (wan_error_notify_packets.is_set || is_set(wan_error_notify_packets.operation)) leaf_name_data.push_back(wan_error_notify_packets.get_name_leafdata());
    if (zero_length_body_packets.is_set || is_set(zero_length_body_packets.operation)) leaf_name_data.push_back(zero_length_body_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::get_children()
{
    return children;
}

void L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement-packets")
    {
        acknowledgement_packets = value;
    }
    if(value_path == "call-disconnect-notify-packets")
    {
        call_disconnect_notify_packets = value;
    }
    if(value_path == "hello-packets")
    {
        hello_packets = value;
    }
    if(value_path == "incoming-call-connected-packets")
    {
        incoming_call_connected_packets = value;
    }
    if(value_path == "incoming-call-replies")
    {
        incoming_call_replies = value;
    }
    if(value_path == "incoming-call-requests")
    {
        incoming_call_requests = value;
    }
    if(value_path == "outgoing-call-connected-packets")
    {
        outgoing_call_connected_packets = value;
    }
    if(value_path == "outgoing-call-replies")
    {
        outgoing_call_replies = value;
    }
    if(value_path == "outgoing-call-requests")
    {
        outgoing_call_requests = value;
    }
    if(value_path == "service-relay-replies")
    {
        service_relay_replies = value;
    }
    if(value_path == "service-relay-requests")
    {
        service_relay_requests = value;
    }
    if(value_path == "set-link-info-packets")
    {
        set_link_info_packets = value;
    }
    if(value_path == "start-control-connection-notifications")
    {
        start_control_connection_notifications = value;
    }
    if(value_path == "start-control-connection-replies")
    {
        start_control_connection_replies = value;
    }
    if(value_path == "start-control-connection-requests")
    {
        start_control_connection_requests = value;
    }
    if(value_path == "stop-control-connection-notifications")
    {
        stop_control_connection_notifications = value;
    }
    if(value_path == "unknown-packets")
    {
        unknown_packets = value;
    }
    if(value_path == "wan-error-notify-packets")
    {
        wan_error_notify_packets = value;
    }
    if(value_path == "zero-length-body-packets")
    {
        zero_length_body_packets = value;
    }
}

L2Tpv2::Statistics::Statistics()
    :
    average_packet_processing_time{YType::uint32, "average-packet-processing-time"},
    buffered_packets{YType::uint32, "buffered-packets"},
    incoming_dropped_packets{YType::uint32, "incoming-dropped-packets"},
    netio_packets{YType::uint32, "netio-packets"},
    received_out_of_order_packets{YType::uint32, "received-out-of-order-packets"},
    received_packets{YType::uint32, "received-packets"},
    reorder_deviation_packets{YType::uint32, "reorder-deviation-packets"},
    reorder_packets{YType::uint32, "reorder-packets"},
    sent_packets{YType::uint32, "sent-packets"},
    sessions{YType::uint32, "sessions"},
    tunnels{YType::uint32, "tunnels"}
{
    yang_name = "statistics"; yang_parent_name = "l2tpv2";
}

L2Tpv2::Statistics::~Statistics()
{
}

bool L2Tpv2::Statistics::has_data() const
{
    return average_packet_processing_time.is_set
	|| buffered_packets.is_set
	|| incoming_dropped_packets.is_set
	|| netio_packets.is_set
	|| received_out_of_order_packets.is_set
	|| received_packets.is_set
	|| reorder_deviation_packets.is_set
	|| reorder_packets.is_set
	|| sent_packets.is_set
	|| sessions.is_set
	|| tunnels.is_set;
}

bool L2Tpv2::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(average_packet_processing_time.operation)
	|| is_set(buffered_packets.operation)
	|| is_set(incoming_dropped_packets.operation)
	|| is_set(netio_packets.operation)
	|| is_set(received_out_of_order_packets.operation)
	|| is_set(received_packets.operation)
	|| is_set(reorder_deviation_packets.operation)
	|| is_set(reorder_packets.operation)
	|| is_set(sent_packets.operation)
	|| is_set(sessions.operation)
	|| is_set(tunnels.operation);
}

std::string L2Tpv2::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath L2Tpv2::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_packet_processing_time.is_set || is_set(average_packet_processing_time.operation)) leaf_name_data.push_back(average_packet_processing_time.get_name_leafdata());
    if (buffered_packets.is_set || is_set(buffered_packets.operation)) leaf_name_data.push_back(buffered_packets.get_name_leafdata());
    if (incoming_dropped_packets.is_set || is_set(incoming_dropped_packets.operation)) leaf_name_data.push_back(incoming_dropped_packets.get_name_leafdata());
    if (netio_packets.is_set || is_set(netio_packets.operation)) leaf_name_data.push_back(netio_packets.get_name_leafdata());
    if (received_out_of_order_packets.is_set || is_set(received_out_of_order_packets.operation)) leaf_name_data.push_back(received_out_of_order_packets.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (reorder_deviation_packets.is_set || is_set(reorder_deviation_packets.operation)) leaf_name_data.push_back(reorder_deviation_packets.get_name_leafdata());
    if (reorder_packets.is_set || is_set(reorder_packets.operation)) leaf_name_data.push_back(reorder_packets.get_name_leafdata());
    if (sent_packets.is_set || is_set(sent_packets.operation)) leaf_name_data.push_back(sent_packets.get_name_leafdata());
    if (sessions.is_set || is_set(sessions.operation)) leaf_name_data.push_back(sessions.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.operation)) leaf_name_data.push_back(tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Statistics::get_children()
{
    return children;
}

void L2Tpv2::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-packet-processing-time")
    {
        average_packet_processing_time = value;
    }
    if(value_path == "buffered-packets")
    {
        buffered_packets = value;
    }
    if(value_path == "incoming-dropped-packets")
    {
        incoming_dropped_packets = value;
    }
    if(value_path == "netio-packets")
    {
        netio_packets = value;
    }
    if(value_path == "received-out-of-order-packets")
    {
        received_out_of_order_packets = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "reorder-deviation-packets")
    {
        reorder_deviation_packets = value;
    }
    if(value_path == "reorder-packets")
    {
        reorder_packets = value;
    }
    if(value_path == "sent-packets")
    {
        sent_packets = value;
    }
    if(value_path == "sessions")
    {
        sessions = value;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
    }
}

L2Tpv2::Tunnel::Tunnel()
    :
    accounting(std::make_shared<L2Tpv2::Tunnel::Accounting>())
{
    accounting->parent = this;
    children["accounting"] = accounting;

    yang_name = "tunnel"; yang_parent_name = "l2tpv2";
}

L2Tpv2::Tunnel::~Tunnel()
{
}

bool L2Tpv2::Tunnel::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data());
}

bool L2Tpv2::Tunnel::has_operation() const
{
    return is_set(operation)
	|| (accounting !=  nullptr && accounting->has_operation());
}

std::string L2Tpv2::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

EntityPath L2Tpv2::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["accounting"] = accounting;
        }
        else
        {
            accounting = std::make_shared<L2Tpv2::Tunnel::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting;
        }
        return children.at("accounting");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Tunnel::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting;
        }
    }

    return children;
}

void L2Tpv2::Tunnel::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Tunnel::Accounting::Accounting()
    :
    statistics(std::make_shared<L2Tpv2::Tunnel::Accounting::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "accounting"; yang_parent_name = "tunnel";
}

L2Tpv2::Tunnel::Accounting::~Accounting()
{
}

bool L2Tpv2::Tunnel::Accounting::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data());
}

bool L2Tpv2::Tunnel::Accounting::has_operation() const
{
    return is_set(operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string L2Tpv2::Tunnel::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

EntityPath L2Tpv2::Tunnel::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Tunnel::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<L2Tpv2::Tunnel::Accounting::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Tunnel::Accounting::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void L2Tpv2::Tunnel::Accounting::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Tunnel::Accounting::Statistics::Statistics()
    :
    current_size{YType::uint32, "current-size"},
    memory_failures{YType::uint32, "memory-failures"},
    negative_acknowledgement{YType::uint64, "negative-acknowledgement"},
    positive_acknowledgement{YType::uint64, "positive-acknowledgement"},
    queue_statistics_size{YType::int32, "queue-statistics-size"},
    records_checkpointed{YType::uint64, "records-checkpointed"},
    records_fail_to_recover{YType::uint32, "records-fail-to-recover"},
    records_failed_to_checkpoint{YType::uint64, "records-failed-to-checkpoint"},
    records_recovered_from_checkpoint{YType::uint32, "records-recovered-from-checkpoint"},
    records_sent_from_queue{YType::uint64, "records-sent-from-queue"},
    records_sent_successfully{YType::uint64, "records-sent-successfully"},
    reject{YType::uint64, "reject"},
    start{YType::uint64, "start"},
    stop{YType::uint64, "stop"},
    transport_failures{YType::uint64, "transport-failures"}
{
    yang_name = "statistics"; yang_parent_name = "accounting";
}

L2Tpv2::Tunnel::Accounting::Statistics::~Statistics()
{
}

bool L2Tpv2::Tunnel::Accounting::Statistics::has_data() const
{
    return current_size.is_set
	|| memory_failures.is_set
	|| negative_acknowledgement.is_set
	|| positive_acknowledgement.is_set
	|| queue_statistics_size.is_set
	|| records_checkpointed.is_set
	|| records_fail_to_recover.is_set
	|| records_failed_to_checkpoint.is_set
	|| records_recovered_from_checkpoint.is_set
	|| records_sent_from_queue.is_set
	|| records_sent_successfully.is_set
	|| reject.is_set
	|| start.is_set
	|| stop.is_set
	|| transport_failures.is_set;
}

bool L2Tpv2::Tunnel::Accounting::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(current_size.operation)
	|| is_set(memory_failures.operation)
	|| is_set(negative_acknowledgement.operation)
	|| is_set(positive_acknowledgement.operation)
	|| is_set(queue_statistics_size.operation)
	|| is_set(records_checkpointed.operation)
	|| is_set(records_fail_to_recover.operation)
	|| is_set(records_failed_to_checkpoint.operation)
	|| is_set(records_recovered_from_checkpoint.operation)
	|| is_set(records_sent_from_queue.operation)
	|| is_set(records_sent_successfully.operation)
	|| is_set(reject.operation)
	|| is_set(start.operation)
	|| is_set(stop.operation)
	|| is_set(transport_failures.operation);
}

std::string L2Tpv2::Tunnel::Accounting::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath L2Tpv2::Tunnel::Accounting::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/tunnel/accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_size.is_set || is_set(current_size.operation)) leaf_name_data.push_back(current_size.get_name_leafdata());
    if (memory_failures.is_set || is_set(memory_failures.operation)) leaf_name_data.push_back(memory_failures.get_name_leafdata());
    if (negative_acknowledgement.is_set || is_set(negative_acknowledgement.operation)) leaf_name_data.push_back(negative_acknowledgement.get_name_leafdata());
    if (positive_acknowledgement.is_set || is_set(positive_acknowledgement.operation)) leaf_name_data.push_back(positive_acknowledgement.get_name_leafdata());
    if (queue_statistics_size.is_set || is_set(queue_statistics_size.operation)) leaf_name_data.push_back(queue_statistics_size.get_name_leafdata());
    if (records_checkpointed.is_set || is_set(records_checkpointed.operation)) leaf_name_data.push_back(records_checkpointed.get_name_leafdata());
    if (records_fail_to_recover.is_set || is_set(records_fail_to_recover.operation)) leaf_name_data.push_back(records_fail_to_recover.get_name_leafdata());
    if (records_failed_to_checkpoint.is_set || is_set(records_failed_to_checkpoint.operation)) leaf_name_data.push_back(records_failed_to_checkpoint.get_name_leafdata());
    if (records_recovered_from_checkpoint.is_set || is_set(records_recovered_from_checkpoint.operation)) leaf_name_data.push_back(records_recovered_from_checkpoint.get_name_leafdata());
    if (records_sent_from_queue.is_set || is_set(records_sent_from_queue.operation)) leaf_name_data.push_back(records_sent_from_queue.get_name_leafdata());
    if (records_sent_successfully.is_set || is_set(records_sent_successfully.operation)) leaf_name_data.push_back(records_sent_successfully.get_name_leafdata());
    if (reject.is_set || is_set(reject.operation)) leaf_name_data.push_back(reject.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());
    if (stop.is_set || is_set(stop.operation)) leaf_name_data.push_back(stop.get_name_leafdata());
    if (transport_failures.is_set || is_set(transport_failures.operation)) leaf_name_data.push_back(transport_failures.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Tunnel::Accounting::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Tunnel::Accounting::Statistics::get_children()
{
    return children;
}

void L2Tpv2::Tunnel::Accounting::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-size")
    {
        current_size = value;
    }
    if(value_path == "memory-failures")
    {
        memory_failures = value;
    }
    if(value_path == "negative-acknowledgement")
    {
        negative_acknowledgement = value;
    }
    if(value_path == "positive-acknowledgement")
    {
        positive_acknowledgement = value;
    }
    if(value_path == "queue-statistics-size")
    {
        queue_statistics_size = value;
    }
    if(value_path == "records-checkpointed")
    {
        records_checkpointed = value;
    }
    if(value_path == "records-fail-to-recover")
    {
        records_fail_to_recover = value;
    }
    if(value_path == "records-failed-to-checkpoint")
    {
        records_failed_to_checkpoint = value;
    }
    if(value_path == "records-recovered-from-checkpoint")
    {
        records_recovered_from_checkpoint = value;
    }
    if(value_path == "records-sent-from-queue")
    {
        records_sent_from_queue = value;
    }
    if(value_path == "records-sent-successfully")
    {
        records_sent_successfully = value;
    }
    if(value_path == "reject")
    {
        reject = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
    if(value_path == "stop")
    {
        stop = value;
    }
    if(value_path == "transport-failures")
    {
        transport_failures = value;
    }
}

L2Tpv2::TunnelConfigurations::TunnelConfigurations()
{
    yang_name = "tunnel-configurations"; yang_parent_name = "l2tpv2";
}

L2Tpv2::TunnelConfigurations::~TunnelConfigurations()
{
}

bool L2Tpv2::TunnelConfigurations::has_data() const
{
    for (std::size_t index=0; index<tunnel_configuration.size(); index++)
    {
        if(tunnel_configuration[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tpv2::TunnelConfigurations::has_operation() const
{
    for (std::size_t index=0; index<tunnel_configuration.size(); index++)
    {
        if(tunnel_configuration[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tpv2::TunnelConfigurations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-configurations";

    return path_buffer.str();

}

EntityPath L2Tpv2::TunnelConfigurations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::TunnelConfigurations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-configuration")
    {
        for(auto const & c : tunnel_configuration)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Tpv2::TunnelConfigurations::TunnelConfiguration>();
        c->parent = this;
        tunnel_configuration.push_back(std::move(c));
        children[segment_path] = tunnel_configuration.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::TunnelConfigurations::get_children()
{
    for (auto const & c : tunnel_configuration)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Tpv2::TunnelConfigurations::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::TunnelConfigurations::TunnelConfiguration::TunnelConfiguration()
    :
    local_tunnel_id{YType::int32, "local-tunnel-id"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"}
    	,
    l2tp_class(std::make_shared<L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass>())
{
    l2tp_class->parent = this;
    children["l2tp-class"] = l2tp_class;

    yang_name = "tunnel-configuration"; yang_parent_name = "tunnel-configurations";
}

L2Tpv2::TunnelConfigurations::TunnelConfiguration::~TunnelConfiguration()
{
}

bool L2Tpv2::TunnelConfigurations::TunnelConfiguration::has_data() const
{
    return local_tunnel_id.is_set
	|| remote_tunnel_id.is_set
	|| (l2tp_class !=  nullptr && l2tp_class->has_data());
}

bool L2Tpv2::TunnelConfigurations::TunnelConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(local_tunnel_id.operation)
	|| is_set(remote_tunnel_id.operation)
	|| (l2tp_class !=  nullptr && l2tp_class->has_operation());
}

std::string L2Tpv2::TunnelConfigurations::TunnelConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-configuration" <<"[local-tunnel-id='" <<local_tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath L2Tpv2::TunnelConfigurations::TunnelConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/tunnel-configurations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_tunnel_id.is_set || is_set(local_tunnel_id.operation)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::TunnelConfigurations::TunnelConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tp-class")
    {
        if(l2tp_class != nullptr)
        {
            children["l2tp-class"] = l2tp_class;
        }
        else
        {
            l2tp_class = std::make_shared<L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass>();
            l2tp_class->parent = this;
            children["l2tp-class"] = l2tp_class;
        }
        return children.at("l2tp-class");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::TunnelConfigurations::TunnelConfiguration::get_children()
{
    if(children.find("l2tp-class") == children.end())
    {
        if(l2tp_class != nullptr)
        {
            children["l2tp-class"] = l2tp_class;
        }
    }

    return children;
}

void L2Tpv2::TunnelConfigurations::TunnelConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
}

L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass::L2TpClass()
    :
    accounting_method_list{YType::str, "accounting-method-list"},
    class_name_xr{YType::str, "class-name-xr"},
    digest_hash{YType::enumeration, "digest-hash"},
    encoded_password{YType::str, "encoded-password"},
    hello_timeout{YType::uint32, "hello-timeout"},
    host_name{YType::str, "host-name"},
    initial_retransmit_maximum_timeout{YType::uint32, "initial-retransmit-maximum-timeout"},
    initial_retransmit_minimum_timeout{YType::uint32, "initial-retransmit-minimum-timeout"},
    initial_retransmit_retries{YType::uint32, "initial-retransmit-retries"},
    ip_tos{YType::uint8, "ip-tos"},
    is_authentication_enabled{YType::boolean, "is-authentication-enabled"},
    is_congestion_control_enabled{YType::boolean, "is-congestion-control-enabled"},
    is_digest_check_enabled{YType::boolean, "is-digest-check-enabled"},
    is_digest_enabled{YType::boolean, "is-digest-enabled"},
    is_hidden{YType::boolean, "is-hidden"},
    is_peer_address_checked{YType::boolean, "is-peer-address-checked"},
    password{YType::str, "password"},
    receive_window_size{YType::uint16, "receive-window-size"},
    retransmit_maximum_timeout{YType::uint32, "retransmit-maximum-timeout"},
    retransmit_minimum_timeout{YType::uint32, "retransmit-minimum-timeout"},
    retransmit_retries{YType::uint32, "retransmit-retries"},
    setup_timeout{YType::uint32, "setup-timeout"},
    timeout_no_user{YType::uint32, "timeout-no-user"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "l2tp-class"; yang_parent_name = "tunnel-configuration";
}

L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass::~L2TpClass()
{
}

bool L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass::has_data() const
{
    return accounting_method_list.is_set
	|| class_name_xr.is_set
	|| digest_hash.is_set
	|| encoded_password.is_set
	|| hello_timeout.is_set
	|| host_name.is_set
	|| initial_retransmit_maximum_timeout.is_set
	|| initial_retransmit_minimum_timeout.is_set
	|| initial_retransmit_retries.is_set
	|| ip_tos.is_set
	|| is_authentication_enabled.is_set
	|| is_congestion_control_enabled.is_set
	|| is_digest_check_enabled.is_set
	|| is_digest_enabled.is_set
	|| is_hidden.is_set
	|| is_peer_address_checked.is_set
	|| password.is_set
	|| receive_window_size.is_set
	|| retransmit_maximum_timeout.is_set
	|| retransmit_minimum_timeout.is_set
	|| retransmit_retries.is_set
	|| setup_timeout.is_set
	|| timeout_no_user.is_set
	|| vrf_name.is_set;
}

bool L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting_method_list.operation)
	|| is_set(class_name_xr.operation)
	|| is_set(digest_hash.operation)
	|| is_set(encoded_password.operation)
	|| is_set(hello_timeout.operation)
	|| is_set(host_name.operation)
	|| is_set(initial_retransmit_maximum_timeout.operation)
	|| is_set(initial_retransmit_minimum_timeout.operation)
	|| is_set(initial_retransmit_retries.operation)
	|| is_set(ip_tos.operation)
	|| is_set(is_authentication_enabled.operation)
	|| is_set(is_congestion_control_enabled.operation)
	|| is_set(is_digest_check_enabled.operation)
	|| is_set(is_digest_enabled.operation)
	|| is_set(is_hidden.operation)
	|| is_set(is_peer_address_checked.operation)
	|| is_set(password.operation)
	|| is_set(receive_window_size.operation)
	|| is_set(retransmit_maximum_timeout.operation)
	|| is_set(retransmit_minimum_timeout.operation)
	|| is_set(retransmit_retries.operation)
	|| is_set(setup_timeout.operation)
	|| is_set(timeout_no_user.operation)
	|| is_set(vrf_name.operation);
}

std::string L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-class";

    return path_buffer.str();

}

EntityPath L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpClass' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_method_list.is_set || is_set(accounting_method_list.operation)) leaf_name_data.push_back(accounting_method_list.get_name_leafdata());
    if (class_name_xr.is_set || is_set(class_name_xr.operation)) leaf_name_data.push_back(class_name_xr.get_name_leafdata());
    if (digest_hash.is_set || is_set(digest_hash.operation)) leaf_name_data.push_back(digest_hash.get_name_leafdata());
    if (encoded_password.is_set || is_set(encoded_password.operation)) leaf_name_data.push_back(encoded_password.get_name_leafdata());
    if (hello_timeout.is_set || is_set(hello_timeout.operation)) leaf_name_data.push_back(hello_timeout.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (initial_retransmit_maximum_timeout.is_set || is_set(initial_retransmit_maximum_timeout.operation)) leaf_name_data.push_back(initial_retransmit_maximum_timeout.get_name_leafdata());
    if (initial_retransmit_minimum_timeout.is_set || is_set(initial_retransmit_minimum_timeout.operation)) leaf_name_data.push_back(initial_retransmit_minimum_timeout.get_name_leafdata());
    if (initial_retransmit_retries.is_set || is_set(initial_retransmit_retries.operation)) leaf_name_data.push_back(initial_retransmit_retries.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.operation)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (is_authentication_enabled.is_set || is_set(is_authentication_enabled.operation)) leaf_name_data.push_back(is_authentication_enabled.get_name_leafdata());
    if (is_congestion_control_enabled.is_set || is_set(is_congestion_control_enabled.operation)) leaf_name_data.push_back(is_congestion_control_enabled.get_name_leafdata());
    if (is_digest_check_enabled.is_set || is_set(is_digest_check_enabled.operation)) leaf_name_data.push_back(is_digest_check_enabled.get_name_leafdata());
    if (is_digest_enabled.is_set || is_set(is_digest_enabled.operation)) leaf_name_data.push_back(is_digest_enabled.get_name_leafdata());
    if (is_hidden.is_set || is_set(is_hidden.operation)) leaf_name_data.push_back(is_hidden.get_name_leafdata());
    if (is_peer_address_checked.is_set || is_set(is_peer_address_checked.operation)) leaf_name_data.push_back(is_peer_address_checked.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (receive_window_size.is_set || is_set(receive_window_size.operation)) leaf_name_data.push_back(receive_window_size.get_name_leafdata());
    if (retransmit_maximum_timeout.is_set || is_set(retransmit_maximum_timeout.operation)) leaf_name_data.push_back(retransmit_maximum_timeout.get_name_leafdata());
    if (retransmit_minimum_timeout.is_set || is_set(retransmit_minimum_timeout.operation)) leaf_name_data.push_back(retransmit_minimum_timeout.get_name_leafdata());
    if (retransmit_retries.is_set || is_set(retransmit_retries.operation)) leaf_name_data.push_back(retransmit_retries.get_name_leafdata());
    if (setup_timeout.is_set || is_set(setup_timeout.operation)) leaf_name_data.push_back(setup_timeout.get_name_leafdata());
    if (timeout_no_user.is_set || is_set(timeout_no_user.operation)) leaf_name_data.push_back(timeout_no_user.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass::get_children()
{
    return children;
}

void L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting-method-list")
    {
        accounting_method_list = value;
    }
    if(value_path == "class-name-xr")
    {
        class_name_xr = value;
    }
    if(value_path == "digest-hash")
    {
        digest_hash = value;
    }
    if(value_path == "encoded-password")
    {
        encoded_password = value;
    }
    if(value_path == "hello-timeout")
    {
        hello_timeout = value;
    }
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "initial-retransmit-maximum-timeout")
    {
        initial_retransmit_maximum_timeout = value;
    }
    if(value_path == "initial-retransmit-minimum-timeout")
    {
        initial_retransmit_minimum_timeout = value;
    }
    if(value_path == "initial-retransmit-retries")
    {
        initial_retransmit_retries = value;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
    }
    if(value_path == "is-authentication-enabled")
    {
        is_authentication_enabled = value;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled = value;
    }
    if(value_path == "is-digest-check-enabled")
    {
        is_digest_check_enabled = value;
    }
    if(value_path == "is-digest-enabled")
    {
        is_digest_enabled = value;
    }
    if(value_path == "is-hidden")
    {
        is_hidden = value;
    }
    if(value_path == "is-peer-address-checked")
    {
        is_peer_address_checked = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size = value;
    }
    if(value_path == "retransmit-maximum-timeout")
    {
        retransmit_maximum_timeout = value;
    }
    if(value_path == "retransmit-minimum-timeout")
    {
        retransmit_minimum_timeout = value;
    }
    if(value_path == "retransmit-retries")
    {
        retransmit_retries = value;
    }
    if(value_path == "setup-timeout")
    {
        setup_timeout = value;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

L2Tpv2::CounterHistFail::CounterHistFail()
    :
    pkt_timeout{YType::uint32, "pkt-timeout"},
    rx_counters{YType::str, "rx-counters"},
    sess_down_tmout{YType::uint32, "sess-down-tmout"},
    tx_counters{YType::str, "tx-counters"}
{
    yang_name = "counter-hist-fail"; yang_parent_name = "l2tpv2";
}

L2Tpv2::CounterHistFail::~CounterHistFail()
{
}

bool L2Tpv2::CounterHistFail::has_data() const
{
    for (auto const & leaf : pkt_timeout.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return rx_counters.is_set
	|| sess_down_tmout.is_set
	|| tx_counters.is_set;
}

bool L2Tpv2::CounterHistFail::has_operation() const
{
    for (auto const & leaf : pkt_timeout.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(pkt_timeout.operation)
	|| is_set(rx_counters.operation)
	|| is_set(sess_down_tmout.operation)
	|| is_set(tx_counters.operation);
}

std::string L2Tpv2::CounterHistFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter-hist-fail";

    return path_buffer.str();

}

EntityPath L2Tpv2::CounterHistFail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_counters.is_set || is_set(rx_counters.operation)) leaf_name_data.push_back(rx_counters.get_name_leafdata());
    if (sess_down_tmout.is_set || is_set(sess_down_tmout.operation)) leaf_name_data.push_back(sess_down_tmout.get_name_leafdata());
    if (tx_counters.is_set || is_set(tx_counters.operation)) leaf_name_data.push_back(tx_counters.get_name_leafdata());

    auto pkt_timeout_name_datas = pkt_timeout.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pkt_timeout_name_datas.begin(), pkt_timeout_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::CounterHistFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::CounterHistFail::get_children()
{
    return children;
}

void L2Tpv2::CounterHistFail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pkt-timeout")
    {
        pkt_timeout.append(value);
    }
    if(value_path == "rx-counters")
    {
        rx_counters = value;
    }
    if(value_path == "sess-down-tmout")
    {
        sess_down_tmout = value;
    }
    if(value_path == "tx-counters")
    {
        tx_counters = value;
    }
}

L2Tpv2::Classes::Classes()
{
    yang_name = "classes"; yang_parent_name = "l2tpv2";
}

L2Tpv2::Classes::~Classes()
{
}

bool L2Tpv2::Classes::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tpv2::Classes::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tpv2::Classes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classes";

    return path_buffer.str();

}

EntityPath L2Tpv2::Classes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Classes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Tpv2::Classes::Class_>();
        c->parent = this;
        class_.push_back(std::move(c));
        children[segment_path] = class_.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Classes::get_children()
{
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Tpv2::Classes::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Classes::Class_::Class_()
    :
    class_name{YType::str, "class-name"},
    accounting_method_list{YType::str, "accounting-method-list"},
    class_name_xr{YType::str, "class-name-xr"},
    digest_hash{YType::enumeration, "digest-hash"},
    encoded_password{YType::str, "encoded-password"},
    hello_timeout{YType::uint32, "hello-timeout"},
    host_name{YType::str, "host-name"},
    initial_retransmit_maximum_timeout{YType::uint32, "initial-retransmit-maximum-timeout"},
    initial_retransmit_minimum_timeout{YType::uint32, "initial-retransmit-minimum-timeout"},
    initial_retransmit_retries{YType::uint32, "initial-retransmit-retries"},
    ip_tos{YType::uint8, "ip-tos"},
    is_authentication_enabled{YType::boolean, "is-authentication-enabled"},
    is_congestion_control_enabled{YType::boolean, "is-congestion-control-enabled"},
    is_digest_check_enabled{YType::boolean, "is-digest-check-enabled"},
    is_digest_enabled{YType::boolean, "is-digest-enabled"},
    is_hidden{YType::boolean, "is-hidden"},
    is_peer_address_checked{YType::boolean, "is-peer-address-checked"},
    password{YType::str, "password"},
    receive_window_size{YType::uint16, "receive-window-size"},
    retransmit_maximum_timeout{YType::uint32, "retransmit-maximum-timeout"},
    retransmit_minimum_timeout{YType::uint32, "retransmit-minimum-timeout"},
    retransmit_retries{YType::uint32, "retransmit-retries"},
    setup_timeout{YType::uint32, "setup-timeout"},
    timeout_no_user{YType::uint32, "timeout-no-user"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "class"; yang_parent_name = "classes";
}

L2Tpv2::Classes::Class_::~Class_()
{
}

bool L2Tpv2::Classes::Class_::has_data() const
{
    return class_name.is_set
	|| accounting_method_list.is_set
	|| class_name_xr.is_set
	|| digest_hash.is_set
	|| encoded_password.is_set
	|| hello_timeout.is_set
	|| host_name.is_set
	|| initial_retransmit_maximum_timeout.is_set
	|| initial_retransmit_minimum_timeout.is_set
	|| initial_retransmit_retries.is_set
	|| ip_tos.is_set
	|| is_authentication_enabled.is_set
	|| is_congestion_control_enabled.is_set
	|| is_digest_check_enabled.is_set
	|| is_digest_enabled.is_set
	|| is_hidden.is_set
	|| is_peer_address_checked.is_set
	|| password.is_set
	|| receive_window_size.is_set
	|| retransmit_maximum_timeout.is_set
	|| retransmit_minimum_timeout.is_set
	|| retransmit_retries.is_set
	|| setup_timeout.is_set
	|| timeout_no_user.is_set
	|| vrf_name.is_set;
}

bool L2Tpv2::Classes::Class_::has_operation() const
{
    return is_set(operation)
	|| is_set(class_name.operation)
	|| is_set(accounting_method_list.operation)
	|| is_set(class_name_xr.operation)
	|| is_set(digest_hash.operation)
	|| is_set(encoded_password.operation)
	|| is_set(hello_timeout.operation)
	|| is_set(host_name.operation)
	|| is_set(initial_retransmit_maximum_timeout.operation)
	|| is_set(initial_retransmit_minimum_timeout.operation)
	|| is_set(initial_retransmit_retries.operation)
	|| is_set(ip_tos.operation)
	|| is_set(is_authentication_enabled.operation)
	|| is_set(is_congestion_control_enabled.operation)
	|| is_set(is_digest_check_enabled.operation)
	|| is_set(is_digest_enabled.operation)
	|| is_set(is_hidden.operation)
	|| is_set(is_peer_address_checked.operation)
	|| is_set(password.operation)
	|| is_set(receive_window_size.operation)
	|| is_set(retransmit_maximum_timeout.operation)
	|| is_set(retransmit_minimum_timeout.operation)
	|| is_set(retransmit_retries.operation)
	|| is_set(setup_timeout.operation)
	|| is_set(timeout_no_user.operation)
	|| is_set(vrf_name.operation);
}

std::string L2Tpv2::Classes::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-name='" <<class_name <<"']";

    return path_buffer.str();

}

EntityPath L2Tpv2::Classes::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/classes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (accounting_method_list.is_set || is_set(accounting_method_list.operation)) leaf_name_data.push_back(accounting_method_list.get_name_leafdata());
    if (class_name_xr.is_set || is_set(class_name_xr.operation)) leaf_name_data.push_back(class_name_xr.get_name_leafdata());
    if (digest_hash.is_set || is_set(digest_hash.operation)) leaf_name_data.push_back(digest_hash.get_name_leafdata());
    if (encoded_password.is_set || is_set(encoded_password.operation)) leaf_name_data.push_back(encoded_password.get_name_leafdata());
    if (hello_timeout.is_set || is_set(hello_timeout.operation)) leaf_name_data.push_back(hello_timeout.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (initial_retransmit_maximum_timeout.is_set || is_set(initial_retransmit_maximum_timeout.operation)) leaf_name_data.push_back(initial_retransmit_maximum_timeout.get_name_leafdata());
    if (initial_retransmit_minimum_timeout.is_set || is_set(initial_retransmit_minimum_timeout.operation)) leaf_name_data.push_back(initial_retransmit_minimum_timeout.get_name_leafdata());
    if (initial_retransmit_retries.is_set || is_set(initial_retransmit_retries.operation)) leaf_name_data.push_back(initial_retransmit_retries.get_name_leafdata());
    if (ip_tos.is_set || is_set(ip_tos.operation)) leaf_name_data.push_back(ip_tos.get_name_leafdata());
    if (is_authentication_enabled.is_set || is_set(is_authentication_enabled.operation)) leaf_name_data.push_back(is_authentication_enabled.get_name_leafdata());
    if (is_congestion_control_enabled.is_set || is_set(is_congestion_control_enabled.operation)) leaf_name_data.push_back(is_congestion_control_enabled.get_name_leafdata());
    if (is_digest_check_enabled.is_set || is_set(is_digest_check_enabled.operation)) leaf_name_data.push_back(is_digest_check_enabled.get_name_leafdata());
    if (is_digest_enabled.is_set || is_set(is_digest_enabled.operation)) leaf_name_data.push_back(is_digest_enabled.get_name_leafdata());
    if (is_hidden.is_set || is_set(is_hidden.operation)) leaf_name_data.push_back(is_hidden.get_name_leafdata());
    if (is_peer_address_checked.is_set || is_set(is_peer_address_checked.operation)) leaf_name_data.push_back(is_peer_address_checked.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (receive_window_size.is_set || is_set(receive_window_size.operation)) leaf_name_data.push_back(receive_window_size.get_name_leafdata());
    if (retransmit_maximum_timeout.is_set || is_set(retransmit_maximum_timeout.operation)) leaf_name_data.push_back(retransmit_maximum_timeout.get_name_leafdata());
    if (retransmit_minimum_timeout.is_set || is_set(retransmit_minimum_timeout.operation)) leaf_name_data.push_back(retransmit_minimum_timeout.get_name_leafdata());
    if (retransmit_retries.is_set || is_set(retransmit_retries.operation)) leaf_name_data.push_back(retransmit_retries.get_name_leafdata());
    if (setup_timeout.is_set || is_set(setup_timeout.operation)) leaf_name_data.push_back(setup_timeout.get_name_leafdata());
    if (timeout_no_user.is_set || is_set(timeout_no_user.operation)) leaf_name_data.push_back(timeout_no_user.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Classes::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Classes::Class_::get_children()
{
    return children;
}

void L2Tpv2::Classes::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "accounting-method-list")
    {
        accounting_method_list = value;
    }
    if(value_path == "class-name-xr")
    {
        class_name_xr = value;
    }
    if(value_path == "digest-hash")
    {
        digest_hash = value;
    }
    if(value_path == "encoded-password")
    {
        encoded_password = value;
    }
    if(value_path == "hello-timeout")
    {
        hello_timeout = value;
    }
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "initial-retransmit-maximum-timeout")
    {
        initial_retransmit_maximum_timeout = value;
    }
    if(value_path == "initial-retransmit-minimum-timeout")
    {
        initial_retransmit_minimum_timeout = value;
    }
    if(value_path == "initial-retransmit-retries")
    {
        initial_retransmit_retries = value;
    }
    if(value_path == "ip-tos")
    {
        ip_tos = value;
    }
    if(value_path == "is-authentication-enabled")
    {
        is_authentication_enabled = value;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled = value;
    }
    if(value_path == "is-digest-check-enabled")
    {
        is_digest_check_enabled = value;
    }
    if(value_path == "is-digest-enabled")
    {
        is_digest_enabled = value;
    }
    if(value_path == "is-hidden")
    {
        is_hidden = value;
    }
    if(value_path == "is-peer-address-checked")
    {
        is_peer_address_checked = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size = value;
    }
    if(value_path == "retransmit-maximum-timeout")
    {
        retransmit_maximum_timeout = value;
    }
    if(value_path == "retransmit-minimum-timeout")
    {
        retransmit_minimum_timeout = value;
    }
    if(value_path == "retransmit-retries")
    {
        retransmit_retries = value;
    }
    if(value_path == "setup-timeout")
    {
        setup_timeout = value;
    }
    if(value_path == "timeout-no-user")
    {
        timeout_no_user = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

L2Tpv2::Tunnels::Tunnels()
{
    yang_name = "tunnels"; yang_parent_name = "l2tpv2";
}

L2Tpv2::Tunnels::~Tunnels()
{
}

bool L2Tpv2::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tpv2::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tpv2::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

EntityPath L2Tpv2::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Tpv2::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Tunnels::get_children()
{
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Tpv2::Tunnels::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Tunnels::Tunnel::Tunnel()
    :
    local_tunnel_id{YType::int32, "local-tunnel-id"},
    active_sessions{YType::uint32, "active-sessions"},
    class_name{YType::str, "class-name"},
    digest_secrets{YType::uint16, "digest-secrets"},
    is_congestion_control_enabled{YType::boolean, "is-congestion-control-enabled"},
    is_pmtu_enabled{YType::boolean, "is-pmtu-enabled"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    local_address{YType::str, "local-address"},
    local_port{YType::uint16, "local-port"},
    local_tunnel_name{YType::str, "local-tunnel-name"},
    local_window_size{YType::uint16, "local-window-size"},
    maximum_retransmission_time{YType::uint16, "maximum-retransmission-time"},
    order_queue_size{YType::uint16, "order-queue-size"},
    packet_queue_check{YType::uint16, "packet-queue-check"},
    protocol{YType::uint8, "protocol"},
    remote_address{YType::str, "remote-address"},
    remote_port{YType::uint16, "remote-port"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    remote_tunnel_name{YType::str, "remote-tunnel-name"},
    remote_window_size{YType::uint16, "remote-window-size"},
    resend_maximum_queue_size{YType::uint16, "resend-maximum-queue-size"},
    resend_queue_size{YType::uint16, "resend-queue-size"},
    resends{YType::uint32, "resends"},
    retransmission_time{YType::uint16, "retransmission-time"},
    retransmit_time{YType::uint16, "retransmit-time"},
    sequence_nr{YType::uint16, "sequence-nr"},
    sequence_ns{YType::uint16, "sequence-ns"},
    total_out_of_order_drop_packets{YType::uint32, "total-out-of-order-drop-packets"},
    total_out_of_order_reorder_packets{YType::uint32, "total-out-of-order-reorder-packets"},
    total_peer_authentication_failures{YType::uint32, "total-peer-authentication-failures"},
    unsent_maximum_queue_size{YType::uint16, "unsent-maximum-queue-size"},
    unsent_queue_size{YType::uint16, "unsent-queue-size"},
    zero_length_body_acknowledgement_sent{YType::uint32, "zero-length-body-acknowledgement-sent"}
{
    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

L2Tpv2::Tunnels::Tunnel::~Tunnel()
{
}

bool L2Tpv2::Tunnels::Tunnel::has_data() const
{
    for (auto const & leaf : retransmit_time.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_tunnel_id.is_set
	|| active_sessions.is_set
	|| class_name.is_set
	|| digest_secrets.is_set
	|| is_congestion_control_enabled.is_set
	|| is_pmtu_enabled.is_set
	|| is_tunnel_up.is_set
	|| local_address.is_set
	|| local_port.is_set
	|| local_tunnel_name.is_set
	|| local_window_size.is_set
	|| maximum_retransmission_time.is_set
	|| order_queue_size.is_set
	|| packet_queue_check.is_set
	|| protocol.is_set
	|| remote_address.is_set
	|| remote_port.is_set
	|| remote_tunnel_id.is_set
	|| remote_tunnel_name.is_set
	|| remote_window_size.is_set
	|| resend_maximum_queue_size.is_set
	|| resend_queue_size.is_set
	|| resends.is_set
	|| retransmission_time.is_set
	|| sequence_nr.is_set
	|| sequence_ns.is_set
	|| total_out_of_order_drop_packets.is_set
	|| total_out_of_order_reorder_packets.is_set
	|| total_peer_authentication_failures.is_set
	|| unsent_maximum_queue_size.is_set
	|| unsent_queue_size.is_set
	|| zero_length_body_acknowledgement_sent.is_set;
}

bool L2Tpv2::Tunnels::Tunnel::has_operation() const
{
    for (auto const & leaf : retransmit_time.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(local_tunnel_id.operation)
	|| is_set(active_sessions.operation)
	|| is_set(class_name.operation)
	|| is_set(digest_secrets.operation)
	|| is_set(is_congestion_control_enabled.operation)
	|| is_set(is_pmtu_enabled.operation)
	|| is_set(is_tunnel_up.operation)
	|| is_set(local_address.operation)
	|| is_set(local_port.operation)
	|| is_set(local_tunnel_name.operation)
	|| is_set(local_window_size.operation)
	|| is_set(maximum_retransmission_time.operation)
	|| is_set(order_queue_size.operation)
	|| is_set(packet_queue_check.operation)
	|| is_set(protocol.operation)
	|| is_set(remote_address.operation)
	|| is_set(remote_port.operation)
	|| is_set(remote_tunnel_id.operation)
	|| is_set(remote_tunnel_name.operation)
	|| is_set(remote_window_size.operation)
	|| is_set(resend_maximum_queue_size.operation)
	|| is_set(resend_queue_size.operation)
	|| is_set(resends.operation)
	|| is_set(retransmission_time.operation)
	|| is_set(retransmit_time.operation)
	|| is_set(sequence_nr.operation)
	|| is_set(sequence_ns.operation)
	|| is_set(total_out_of_order_drop_packets.operation)
	|| is_set(total_out_of_order_reorder_packets.operation)
	|| is_set(total_peer_authentication_failures.operation)
	|| is_set(unsent_maximum_queue_size.operation)
	|| is_set(unsent_queue_size.operation)
	|| is_set(zero_length_body_acknowledgement_sent.operation);
}

std::string L2Tpv2::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[local-tunnel-id='" <<local_tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath L2Tpv2::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_tunnel_id.is_set || is_set(local_tunnel_id.operation)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (digest_secrets.is_set || is_set(digest_secrets.operation)) leaf_name_data.push_back(digest_secrets.get_name_leafdata());
    if (is_congestion_control_enabled.is_set || is_set(is_congestion_control_enabled.operation)) leaf_name_data.push_back(is_congestion_control_enabled.get_name_leafdata());
    if (is_pmtu_enabled.is_set || is_set(is_pmtu_enabled.operation)) leaf_name_data.push_back(is_pmtu_enabled.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.operation)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (local_tunnel_name.is_set || is_set(local_tunnel_name.operation)) leaf_name_data.push_back(local_tunnel_name.get_name_leafdata());
    if (local_window_size.is_set || is_set(local_window_size.operation)) leaf_name_data.push_back(local_window_size.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.operation)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (order_queue_size.is_set || is_set(order_queue_size.operation)) leaf_name_data.push_back(order_queue_size.get_name_leafdata());
    if (packet_queue_check.is_set || is_set(packet_queue_check.operation)) leaf_name_data.push_back(packet_queue_check.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_port.is_set || is_set(remote_port.operation)) leaf_name_data.push_back(remote_port.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (remote_tunnel_name.is_set || is_set(remote_tunnel_name.operation)) leaf_name_data.push_back(remote_tunnel_name.get_name_leafdata());
    if (remote_window_size.is_set || is_set(remote_window_size.operation)) leaf_name_data.push_back(remote_window_size.get_name_leafdata());
    if (resend_maximum_queue_size.is_set || is_set(resend_maximum_queue_size.operation)) leaf_name_data.push_back(resend_maximum_queue_size.get_name_leafdata());
    if (resend_queue_size.is_set || is_set(resend_queue_size.operation)) leaf_name_data.push_back(resend_queue_size.get_name_leafdata());
    if (resends.is_set || is_set(resends.operation)) leaf_name_data.push_back(resends.get_name_leafdata());
    if (retransmission_time.is_set || is_set(retransmission_time.operation)) leaf_name_data.push_back(retransmission_time.get_name_leafdata());
    if (sequence_nr.is_set || is_set(sequence_nr.operation)) leaf_name_data.push_back(sequence_nr.get_name_leafdata());
    if (sequence_ns.is_set || is_set(sequence_ns.operation)) leaf_name_data.push_back(sequence_ns.get_name_leafdata());
    if (total_out_of_order_drop_packets.is_set || is_set(total_out_of_order_drop_packets.operation)) leaf_name_data.push_back(total_out_of_order_drop_packets.get_name_leafdata());
    if (total_out_of_order_reorder_packets.is_set || is_set(total_out_of_order_reorder_packets.operation)) leaf_name_data.push_back(total_out_of_order_reorder_packets.get_name_leafdata());
    if (total_peer_authentication_failures.is_set || is_set(total_peer_authentication_failures.operation)) leaf_name_data.push_back(total_peer_authentication_failures.get_name_leafdata());
    if (unsent_maximum_queue_size.is_set || is_set(unsent_maximum_queue_size.operation)) leaf_name_data.push_back(unsent_maximum_queue_size.get_name_leafdata());
    if (unsent_queue_size.is_set || is_set(unsent_queue_size.operation)) leaf_name_data.push_back(unsent_queue_size.get_name_leafdata());
    if (zero_length_body_acknowledgement_sent.is_set || is_set(zero_length_body_acknowledgement_sent.operation)) leaf_name_data.push_back(zero_length_body_acknowledgement_sent.get_name_leafdata());

    auto retransmit_time_name_datas = retransmit_time.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), retransmit_time_name_datas.begin(), retransmit_time_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Tunnels::Tunnel::get_children()
{
    return children;
}

void L2Tpv2::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
    }
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "digest-secrets")
    {
        digest_secrets = value;
    }
    if(value_path == "is-congestion-control-enabled")
    {
        is_congestion_control_enabled = value;
    }
    if(value_path == "is-pmtu-enabled")
    {
        is_pmtu_enabled = value;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
    if(value_path == "local-tunnel-name")
    {
        local_tunnel_name = value;
    }
    if(value_path == "local-window-size")
    {
        local_window_size = value;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
    }
    if(value_path == "order-queue-size")
    {
        order_queue_size = value;
    }
    if(value_path == "packet-queue-check")
    {
        packet_queue_check = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
    if(value_path == "remote-port")
    {
        remote_port = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
    if(value_path == "remote-tunnel-name")
    {
        remote_tunnel_name = value;
    }
    if(value_path == "remote-window-size")
    {
        remote_window_size = value;
    }
    if(value_path == "resend-maximum-queue-size")
    {
        resend_maximum_queue_size = value;
    }
    if(value_path == "resend-queue-size")
    {
        resend_queue_size = value;
    }
    if(value_path == "resends")
    {
        resends = value;
    }
    if(value_path == "retransmission-time")
    {
        retransmission_time = value;
    }
    if(value_path == "retransmit-time")
    {
        retransmit_time.append(value);
    }
    if(value_path == "sequence-nr")
    {
        sequence_nr = value;
    }
    if(value_path == "sequence-ns")
    {
        sequence_ns = value;
    }
    if(value_path == "total-out-of-order-drop-packets")
    {
        total_out_of_order_drop_packets = value;
    }
    if(value_path == "total-out-of-order-reorder-packets")
    {
        total_out_of_order_reorder_packets = value;
    }
    if(value_path == "total-peer-authentication-failures")
    {
        total_peer_authentication_failures = value;
    }
    if(value_path == "unsent-maximum-queue-size")
    {
        unsent_maximum_queue_size = value;
    }
    if(value_path == "unsent-queue-size")
    {
        unsent_queue_size = value;
    }
    if(value_path == "zero-length-body-acknowledgement-sent")
    {
        zero_length_body_acknowledgement_sent = value;
    }
}

L2Tpv2::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "l2tpv2";
}

L2Tpv2::Sessions::~Sessions()
{
}

bool L2Tpv2::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool L2Tpv2::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Tpv2::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath L2Tpv2::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Tpv2::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Tpv2::Sessions::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Sessions::Session::Session()
    :
    local_session_id{YType::int32, "local-session-id"},
    local_tunnel_id{YType::int32, "local-tunnel-id"},
    call_serial_number{YType::uint32, "call-serial-number"},
    interface_name{YType::str, "interface-name"},
    is_conditional_debug_enabled{YType::boolean, "is-conditional-debug-enabled"},
    is_sequencing_on{YType::boolean, "is-sequencing-on"},
    is_session_locally_initiated{YType::boolean, "is-session-locally-initiated"},
    is_session_manual{YType::boolean, "is-session-manual"},
    is_session_state_established{YType::boolean, "is-session-state-established"},
    is_session_up{YType::boolean, "is-session-up"},
    is_udp_checksum_enabled{YType::boolean, "is-udp-checksum-enabled"},
    l2tp_sh_sess_tie_breaker{YType::uint64, "l2tp-sh-sess-tie-breaker"},
    l2tp_sh_sess_tie_breaker_enabled{YType::uint8, "l2tp-sh-sess-tie-breaker-enabled"},
    l2tp_sh_sess_udp_lport{YType::uint16, "l2tp-sh-sess-udp-lport"},
    l2tp_sh_sess_udp_rport{YType::uint16, "l2tp-sh-sess-udp-rport"},
    local_ip_address{YType::str, "local-ip-address"},
    local_tunnel_name{YType::str, "local-tunnel-name"},
    protocol{YType::uint8, "protocol"},
    remote_ip_address{YType::str, "remote-ip-address"},
    remote_session_id{YType::uint32, "remote-session-id"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    remote_tunnel_name{YType::str, "remote-tunnel-name"},
    unique_id{YType::uint32, "unique-id"}
    	,
    session_application_data(std::make_shared<L2Tpv2::Sessions::Session::SessionApplicationData>())
{
    session_application_data->parent = this;
    children["session-application-data"] = session_application_data;

    yang_name = "session"; yang_parent_name = "sessions";
}

L2Tpv2::Sessions::Session::~Session()
{
}

bool L2Tpv2::Sessions::Session::has_data() const
{
    return local_session_id.is_set
	|| local_tunnel_id.is_set
	|| call_serial_number.is_set
	|| interface_name.is_set
	|| is_conditional_debug_enabled.is_set
	|| is_sequencing_on.is_set
	|| is_session_locally_initiated.is_set
	|| is_session_manual.is_set
	|| is_session_state_established.is_set
	|| is_session_up.is_set
	|| is_udp_checksum_enabled.is_set
	|| l2tp_sh_sess_tie_breaker.is_set
	|| l2tp_sh_sess_tie_breaker_enabled.is_set
	|| l2tp_sh_sess_udp_lport.is_set
	|| l2tp_sh_sess_udp_rport.is_set
	|| local_ip_address.is_set
	|| local_tunnel_name.is_set
	|| protocol.is_set
	|| remote_ip_address.is_set
	|| remote_session_id.is_set
	|| remote_tunnel_id.is_set
	|| remote_tunnel_name.is_set
	|| unique_id.is_set
	|| (session_application_data !=  nullptr && session_application_data->has_data());
}

bool L2Tpv2::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(local_session_id.operation)
	|| is_set(local_tunnel_id.operation)
	|| is_set(call_serial_number.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_conditional_debug_enabled.operation)
	|| is_set(is_sequencing_on.operation)
	|| is_set(is_session_locally_initiated.operation)
	|| is_set(is_session_manual.operation)
	|| is_set(is_session_state_established.operation)
	|| is_set(is_session_up.operation)
	|| is_set(is_udp_checksum_enabled.operation)
	|| is_set(l2tp_sh_sess_tie_breaker.operation)
	|| is_set(l2tp_sh_sess_tie_breaker_enabled.operation)
	|| is_set(l2tp_sh_sess_udp_lport.operation)
	|| is_set(l2tp_sh_sess_udp_rport.operation)
	|| is_set(local_ip_address.operation)
	|| is_set(local_tunnel_name.operation)
	|| is_set(protocol.operation)
	|| is_set(remote_ip_address.operation)
	|| is_set(remote_session_id.operation)
	|| is_set(remote_tunnel_id.operation)
	|| is_set(remote_tunnel_name.operation)
	|| is_set(unique_id.operation)
	|| (session_application_data !=  nullptr && session_application_data->has_operation());
}

std::string L2Tpv2::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[local-session-id='" <<local_session_id <<"']" <<"[local-tunnel-id='" <<local_tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath L2Tpv2::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_session_id.is_set || is_set(local_session_id.operation)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (local_tunnel_id.is_set || is_set(local_tunnel_id.operation)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (call_serial_number.is_set || is_set(call_serial_number.operation)) leaf_name_data.push_back(call_serial_number.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_conditional_debug_enabled.is_set || is_set(is_conditional_debug_enabled.operation)) leaf_name_data.push_back(is_conditional_debug_enabled.get_name_leafdata());
    if (is_sequencing_on.is_set || is_set(is_sequencing_on.operation)) leaf_name_data.push_back(is_sequencing_on.get_name_leafdata());
    if (is_session_locally_initiated.is_set || is_set(is_session_locally_initiated.operation)) leaf_name_data.push_back(is_session_locally_initiated.get_name_leafdata());
    if (is_session_manual.is_set || is_set(is_session_manual.operation)) leaf_name_data.push_back(is_session_manual.get_name_leafdata());
    if (is_session_state_established.is_set || is_set(is_session_state_established.operation)) leaf_name_data.push_back(is_session_state_established.get_name_leafdata());
    if (is_session_up.is_set || is_set(is_session_up.operation)) leaf_name_data.push_back(is_session_up.get_name_leafdata());
    if (is_udp_checksum_enabled.is_set || is_set(is_udp_checksum_enabled.operation)) leaf_name_data.push_back(is_udp_checksum_enabled.get_name_leafdata());
    if (l2tp_sh_sess_tie_breaker.is_set || is_set(l2tp_sh_sess_tie_breaker.operation)) leaf_name_data.push_back(l2tp_sh_sess_tie_breaker.get_name_leafdata());
    if (l2tp_sh_sess_tie_breaker_enabled.is_set || is_set(l2tp_sh_sess_tie_breaker_enabled.operation)) leaf_name_data.push_back(l2tp_sh_sess_tie_breaker_enabled.get_name_leafdata());
    if (l2tp_sh_sess_udp_lport.is_set || is_set(l2tp_sh_sess_udp_lport.operation)) leaf_name_data.push_back(l2tp_sh_sess_udp_lport.get_name_leafdata());
    if (l2tp_sh_sess_udp_rport.is_set || is_set(l2tp_sh_sess_udp_rport.operation)) leaf_name_data.push_back(l2tp_sh_sess_udp_rport.get_name_leafdata());
    if (local_ip_address.is_set || is_set(local_ip_address.operation)) leaf_name_data.push_back(local_ip_address.get_name_leafdata());
    if (local_tunnel_name.is_set || is_set(local_tunnel_name.operation)) leaf_name_data.push_back(local_tunnel_name.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (remote_ip_address.is_set || is_set(remote_ip_address.operation)) leaf_name_data.push_back(remote_ip_address.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.operation)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (remote_tunnel_name.is_set || is_set(remote_tunnel_name.operation)) leaf_name_data.push_back(remote_tunnel_name.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-application-data")
    {
        if(session_application_data != nullptr)
        {
            children["session-application-data"] = session_application_data;
        }
        else
        {
            session_application_data = std::make_shared<L2Tpv2::Sessions::Session::SessionApplicationData>();
            session_application_data->parent = this;
            children["session-application-data"] = session_application_data;
        }
        return children.at("session-application-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Sessions::Session::get_children()
{
    if(children.find("session-application-data") == children.end())
    {
        if(session_application_data != nullptr)
        {
            children["session-application-data"] = session_application_data;
        }
    }

    return children;
}

void L2Tpv2::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-session-id")
    {
        local_session_id = value;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
    }
    if(value_path == "call-serial-number")
    {
        call_serial_number = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-conditional-debug-enabled")
    {
        is_conditional_debug_enabled = value;
    }
    if(value_path == "is-sequencing-on")
    {
        is_sequencing_on = value;
    }
    if(value_path == "is-session-locally-initiated")
    {
        is_session_locally_initiated = value;
    }
    if(value_path == "is-session-manual")
    {
        is_session_manual = value;
    }
    if(value_path == "is-session-state-established")
    {
        is_session_state_established = value;
    }
    if(value_path == "is-session-up")
    {
        is_session_up = value;
    }
    if(value_path == "is-udp-checksum-enabled")
    {
        is_udp_checksum_enabled = value;
    }
    if(value_path == "l2tp-sh-sess-tie-breaker")
    {
        l2tp_sh_sess_tie_breaker = value;
    }
    if(value_path == "l2tp-sh-sess-tie-breaker-enabled")
    {
        l2tp_sh_sess_tie_breaker_enabled = value;
    }
    if(value_path == "l2tp-sh-sess-udp-lport")
    {
        l2tp_sh_sess_udp_lport = value;
    }
    if(value_path == "l2tp-sh-sess-udp-rport")
    {
        l2tp_sh_sess_udp_rport = value;
    }
    if(value_path == "local-ip-address")
    {
        local_ip_address = value;
    }
    if(value_path == "local-tunnel-name")
    {
        local_tunnel_name = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "remote-ip-address")
    {
        remote_ip_address = value;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
    if(value_path == "remote-tunnel-name")
    {
        remote_tunnel_name = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
}

L2Tpv2::Sessions::Session::SessionApplicationData::SessionApplicationData()
    :
    l2tp_sh_sess_app_type{YType::uint32, "l2tp-sh-sess-app-type"}
    	,
    vpdn(std::make_shared<L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn>())
	,xconnect(std::make_shared<L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect>())
{
    vpdn->parent = this;
    children["vpdn"] = vpdn;

    xconnect->parent = this;
    children["xconnect"] = xconnect;

    yang_name = "session-application-data"; yang_parent_name = "session";
}

L2Tpv2::Sessions::Session::SessionApplicationData::~SessionApplicationData()
{
}

bool L2Tpv2::Sessions::Session::SessionApplicationData::has_data() const
{
    return l2tp_sh_sess_app_type.is_set
	|| (vpdn !=  nullptr && vpdn->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data());
}

bool L2Tpv2::Sessions::Session::SessionApplicationData::has_operation() const
{
    return is_set(operation)
	|| is_set(l2tp_sh_sess_app_type.operation)
	|| (vpdn !=  nullptr && vpdn->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string L2Tpv2::Sessions::Session::SessionApplicationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-application-data";

    return path_buffer.str();

}

EntityPath L2Tpv2::Sessions::Session::SessionApplicationData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionApplicationData' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_sh_sess_app_type.is_set || is_set(l2tp_sh_sess_app_type.operation)) leaf_name_data.push_back(l2tp_sh_sess_app_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Sessions::Session::SessionApplicationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vpdn")
    {
        if(vpdn != nullptr)
        {
            children["vpdn"] = vpdn;
        }
        else
        {
            vpdn = std::make_shared<L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn>();
            vpdn->parent = this;
            children["vpdn"] = vpdn;
        }
        return children.at("vpdn");
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect != nullptr)
        {
            children["xconnect"] = xconnect;
        }
        else
        {
            xconnect = std::make_shared<L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect>();
            xconnect->parent = this;
            children["xconnect"] = xconnect;
        }
        return children.at("xconnect");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Sessions::Session::SessionApplicationData::get_children()
{
    if(children.find("vpdn") == children.end())
    {
        if(vpdn != nullptr)
        {
            children["vpdn"] = vpdn;
        }
    }

    if(children.find("xconnect") == children.end())
    {
        if(xconnect != nullptr)
        {
            children["xconnect"] = xconnect;
        }
    }

    return children;
}

void L2Tpv2::Sessions::Session::SessionApplicationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2tp-sh-sess-app-type")
    {
        l2tp_sh_sess_app_type = value;
    }
}

L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect::Xconnect()
    :
    circuit_name{YType::str, "circuit-name"},
    ipv6_protocol_tunneling{YType::boolean, "ipv6-protocol-tunneling"},
    is_circuit_state_up{YType::boolean, "is-circuit-state-up"},
    is_local_circuit_state_up{YType::boolean, "is-local-circuit-state-up"},
    is_remote_circuit_state_up{YType::boolean, "is-remote-circuit-state-up"},
    sessionvc_id{YType::uint32, "sessionvc-id"}
{
    yang_name = "xconnect"; yang_parent_name = "session-application-data";
}

L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect::~Xconnect()
{
}

bool L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect::has_data() const
{
    return circuit_name.is_set
	|| ipv6_protocol_tunneling.is_set
	|| is_circuit_state_up.is_set
	|| is_local_circuit_state_up.is_set
	|| is_remote_circuit_state_up.is_set
	|| sessionvc_id.is_set;
}

bool L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(circuit_name.operation)
	|| is_set(ipv6_protocol_tunneling.operation)
	|| is_set(is_circuit_state_up.operation)
	|| is_set(is_local_circuit_state_up.operation)
	|| is_set(is_remote_circuit_state_up.operation)
	|| is_set(sessionvc_id.operation);
}

std::string L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";

    return path_buffer.str();

}

EntityPath L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xconnect' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_name.is_set || is_set(circuit_name.operation)) leaf_name_data.push_back(circuit_name.get_name_leafdata());
    if (ipv6_protocol_tunneling.is_set || is_set(ipv6_protocol_tunneling.operation)) leaf_name_data.push_back(ipv6_protocol_tunneling.get_name_leafdata());
    if (is_circuit_state_up.is_set || is_set(is_circuit_state_up.operation)) leaf_name_data.push_back(is_circuit_state_up.get_name_leafdata());
    if (is_local_circuit_state_up.is_set || is_set(is_local_circuit_state_up.operation)) leaf_name_data.push_back(is_local_circuit_state_up.get_name_leafdata());
    if (is_remote_circuit_state_up.is_set || is_set(is_remote_circuit_state_up.operation)) leaf_name_data.push_back(is_remote_circuit_state_up.get_name_leafdata());
    if (sessionvc_id.is_set || is_set(sessionvc_id.operation)) leaf_name_data.push_back(sessionvc_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect::get_children()
{
    return children;
}

void L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "circuit-name")
    {
        circuit_name = value;
    }
    if(value_path == "ipv6-protocol-tunneling")
    {
        ipv6_protocol_tunneling = value;
    }
    if(value_path == "is-circuit-state-up")
    {
        is_circuit_state_up = value;
    }
    if(value_path == "is-local-circuit-state-up")
    {
        is_local_circuit_state_up = value;
    }
    if(value_path == "is-remote-circuit-state-up")
    {
        is_remote_circuit_state_up = value;
    }
    if(value_path == "sessionvc-id")
    {
        sessionvc_id = value;
    }
}

L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn::Vpdn()
    :
    interface_name{YType::str, "interface-name"},
    username{YType::str, "username"}
{
    yang_name = "vpdn"; yang_parent_name = "session-application-data";
}

L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn::~Vpdn()
{
}

bool L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn::has_data() const
{
    return interface_name.is_set
	|| username.is_set;
}

bool L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(username.operation);
}

std::string L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpdn";

    return path_buffer.str();

}

EntityPath L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vpdn' in Cisco_IOS_XR_tunnel_l2tun_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn::get_children()
{
    return children;
}

void L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

L2Tpv2::Session::Session()
    :
    unavailable(std::make_shared<L2Tpv2::Session::Unavailable>())
{
    unavailable->parent = this;
    children["unavailable"] = unavailable;

    yang_name = "session"; yang_parent_name = "l2tpv2";
}

L2Tpv2::Session::~Session()
{
}

bool L2Tpv2::Session::has_data() const
{
    return (unavailable !=  nullptr && unavailable->has_data());
}

bool L2Tpv2::Session::has_operation() const
{
    return is_set(operation)
	|| (unavailable !=  nullptr && unavailable->has_operation());
}

std::string L2Tpv2::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath L2Tpv2::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "unavailable")
    {
        if(unavailable != nullptr)
        {
            children["unavailable"] = unavailable;
        }
        else
        {
            unavailable = std::make_shared<L2Tpv2::Session::Unavailable>();
            unavailable->parent = this;
            children["unavailable"] = unavailable;
        }
        return children.at("unavailable");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Session::get_children()
{
    if(children.find("unavailable") == children.end())
    {
        if(unavailable != nullptr)
        {
            children["unavailable"] = unavailable;
        }
    }

    return children;
}

void L2Tpv2::Session::set_value(const std::string & value_path, std::string value)
{
}

L2Tpv2::Session::Unavailable::Unavailable()
    :
    sessions_on_hold{YType::uint32, "sessions-on-hold"}
{
    yang_name = "unavailable"; yang_parent_name = "session";
}

L2Tpv2::Session::Unavailable::~Unavailable()
{
}

bool L2Tpv2::Session::Unavailable::has_data() const
{
    return sessions_on_hold.is_set;
}

bool L2Tpv2::Session::Unavailable::has_operation() const
{
    return is_set(operation)
	|| is_set(sessions_on_hold.operation);
}

std::string L2Tpv2::Session::Unavailable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unavailable";

    return path_buffer.str();

}

EntityPath L2Tpv2::Session::Unavailable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-l2tun-oper:l2tpv2/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sessions_on_hold.is_set || is_set(sessions_on_hold.operation)) leaf_name_data.push_back(sessions_on_hold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Tpv2::Session::Unavailable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Tpv2::Session::Unavailable::get_children()
{
    return children;
}

void L2Tpv2::Session::Unavailable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sessions-on-hold")
    {
        sessions_on_hold = value;
    }
}

const Enum::YLeaf DigestHashEnum::md5 {0, "md5"};
const Enum::YLeaf DigestHashEnum::sha1 {1, "sha1"};


}
}

