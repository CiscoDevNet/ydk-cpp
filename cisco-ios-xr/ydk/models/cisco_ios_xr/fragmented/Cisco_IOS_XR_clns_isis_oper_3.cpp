
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_clns_isis_oper {

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::UptimeValid()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "uptime-valid"; yang_parent_name = "isis-nsr-peer";
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::~UptimeValid()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uptime-valid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UptimeValid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::UptimeValid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::Uptime()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "uptime"; yang_parent_name = "isis-nsr-peer";
}

Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::~Uptime()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::has_data() const
{
    return entry.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uptime";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Uptime' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrPeer::Uptime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::IsisNsrInfra()
    :
    ds(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds>())
	,gen(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen>())
	,pm(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm>())
	,te(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te>())
{
    ds->parent = this;
    children["ds"] = ds;

    gen->parent = this;
    children["gen"] = gen;

    pm->parent = this;
    children["pm"] = pm;

    te->parent = this;
    children["te"] = te;

    yang_name = "isis-nsr-infra"; yang_parent_name = "nsr-status";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::~IsisNsrInfra()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::has_data() const
{
    for (std::size_t index=0; index<ncd.size(); index++)
    {
        if(ncd[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nii_idb.size(); index++)
    {
        if(nii_idb[index]->has_data())
            return true;
    }
    return (ds !=  nullptr && ds->has_data())
	|| (gen !=  nullptr && gen->has_data())
	|| (pm !=  nullptr && pm->has_data())
	|| (te !=  nullptr && te->has_data());
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::has_operation() const
{
    for (std::size_t index=0; index<ncd.size(); index++)
    {
        if(ncd[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nii_idb.size(); index++)
    {
        if(nii_idb[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (ds !=  nullptr && ds->has_operation())
	|| (gen !=  nullptr && gen->has_operation())
	|| (pm !=  nullptr && pm->has_operation())
	|| (te !=  nullptr && te->has_operation());
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-nsr-infra";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisNsrInfra' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ds")
    {
        if(ds != nullptr)
        {
            children["ds"] = ds;
        }
        else
        {
            ds = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds>();
            ds->parent = this;
            children["ds"] = ds;
        }
        return children.at("ds");
    }

    if(child_yang_name == "gen")
    {
        if(gen != nullptr)
        {
            children["gen"] = gen;
        }
        else
        {
            gen = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen>();
            gen->parent = this;
            children["gen"] = gen;
        }
        return children.at("gen");
    }

    if(child_yang_name == "ncd")
    {
        for(auto const & c : ncd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd>();
        c->parent = this;
        ncd.push_back(std::move(c));
        children[segment_path] = ncd.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "nii-idb")
    {
        for(auto const & c : nii_idb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb>();
        c->parent = this;
        nii_idb.push_back(std::move(c));
        children[segment_path] = nii_idb.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pm")
    {
        if(pm != nullptr)
        {
            children["pm"] = pm;
        }
        else
        {
            pm = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm>();
            pm->parent = this;
            children["pm"] = pm;
        }
        return children.at("pm");
    }

    if(child_yang_name == "te")
    {
        if(te != nullptr)
        {
            children["te"] = te;
        }
        else
        {
            te = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te>();
            te->parent = this;
            children["te"] = te;
        }
        return children.at("te");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::get_children()
{
    if(children.find("ds") == children.end())
    {
        if(ds != nullptr)
        {
            children["ds"] = ds;
        }
    }

    if(children.find("gen") == children.end())
    {
        if(gen != nullptr)
        {
            children["gen"] = gen;
        }
    }

    for (auto const & c : ncd)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : nii_idb)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("pm") == children.end())
    {
        if(pm != nullptr)
        {
            children["pm"] = pm;
        }
    }

    if(children.find("te") == children.end())
    {
        if(te != nullptr)
        {
            children["te"] = te;
        }
    }

    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::Gen()
    :
    failover{YType::boolean, "failover"},
    lanid_req_needed{YType::boolean, "lanid-req-needed"},
    my_nodeid{YType::uint32, "my-nodeid"},
    my_process_id{YType::uint32, "my-process-id"},
    nsf_configured{YType::boolean, "nsf-configured"},
    nsr_configured{YType::boolean, "nsr-configured"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_recv_err{YType::uint32, "nsr-recv-err"},
    nsr_send_err{YType::uint32, "nsr-send-err"},
    nsr_send_ready{YType::uint8, "nsr-send-ready"},
    nsr_send_unready{YType::uint8, "nsr-send-unready"},
    pm_ha_role{YType::uint8, "pm-ha-role"},
    pm_issu_role{YType::uint8, "pm-issu-role"},
    retry_flag{YType::uint32, "retry-flag"},
    sysmgr_ha_role{YType::uint8, "sysmgr-ha-role"}
{
    yang_name = "gen"; yang_parent_name = "isis-nsr-infra";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::~Gen()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::has_data() const
{
    return failover.is_set
	|| lanid_req_needed.is_set
	|| my_nodeid.is_set
	|| my_process_id.is_set
	|| nsf_configured.is_set
	|| nsr_configured.is_set
	|| nsr_enabled.is_set
	|| nsr_recv_err.is_set
	|| nsr_send_err.is_set
	|| nsr_send_ready.is_set
	|| nsr_send_unready.is_set
	|| pm_ha_role.is_set
	|| pm_issu_role.is_set
	|| retry_flag.is_set
	|| sysmgr_ha_role.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::has_operation() const
{
    return is_set(operation)
	|| is_set(failover.operation)
	|| is_set(lanid_req_needed.operation)
	|| is_set(my_nodeid.operation)
	|| is_set(my_process_id.operation)
	|| is_set(nsf_configured.operation)
	|| is_set(nsr_configured.operation)
	|| is_set(nsr_enabled.operation)
	|| is_set(nsr_recv_err.operation)
	|| is_set(nsr_send_err.operation)
	|| is_set(nsr_send_ready.operation)
	|| is_set(nsr_send_unready.operation)
	|| is_set(pm_ha_role.operation)
	|| is_set(pm_issu_role.operation)
	|| is_set(retry_flag.operation)
	|| is_set(sysmgr_ha_role.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gen";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gen' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failover.is_set || is_set(failover.operation)) leaf_name_data.push_back(failover.get_name_leafdata());
    if (lanid_req_needed.is_set || is_set(lanid_req_needed.operation)) leaf_name_data.push_back(lanid_req_needed.get_name_leafdata());
    if (my_nodeid.is_set || is_set(my_nodeid.operation)) leaf_name_data.push_back(my_nodeid.get_name_leafdata());
    if (my_process_id.is_set || is_set(my_process_id.operation)) leaf_name_data.push_back(my_process_id.get_name_leafdata());
    if (nsf_configured.is_set || is_set(nsf_configured.operation)) leaf_name_data.push_back(nsf_configured.get_name_leafdata());
    if (nsr_configured.is_set || is_set(nsr_configured.operation)) leaf_name_data.push_back(nsr_configured.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.operation)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_recv_err.is_set || is_set(nsr_recv_err.operation)) leaf_name_data.push_back(nsr_recv_err.get_name_leafdata());
    if (nsr_send_err.is_set || is_set(nsr_send_err.operation)) leaf_name_data.push_back(nsr_send_err.get_name_leafdata());
    if (nsr_send_ready.is_set || is_set(nsr_send_ready.operation)) leaf_name_data.push_back(nsr_send_ready.get_name_leafdata());
    if (nsr_send_unready.is_set || is_set(nsr_send_unready.operation)) leaf_name_data.push_back(nsr_send_unready.get_name_leafdata());
    if (pm_ha_role.is_set || is_set(pm_ha_role.operation)) leaf_name_data.push_back(pm_ha_role.get_name_leafdata());
    if (pm_issu_role.is_set || is_set(pm_issu_role.operation)) leaf_name_data.push_back(pm_issu_role.get_name_leafdata());
    if (retry_flag.is_set || is_set(retry_flag.operation)) leaf_name_data.push_back(retry_flag.get_name_leafdata());
    if (sysmgr_ha_role.is_set || is_set(sysmgr_ha_role.operation)) leaf_name_data.push_back(sysmgr_ha_role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Gen::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failover")
    {
        failover = value;
    }
    if(value_path == "lanid-req-needed")
    {
        lanid_req_needed = value;
    }
    if(value_path == "my-nodeid")
    {
        my_nodeid = value;
    }
    if(value_path == "my-process-id")
    {
        my_process_id = value;
    }
    if(value_path == "nsf-configured")
    {
        nsf_configured = value;
    }
    if(value_path == "nsr-configured")
    {
        nsr_configured = value;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
    }
    if(value_path == "nsr-recv-err")
    {
        nsr_recv_err = value;
    }
    if(value_path == "nsr-send-err")
    {
        nsr_send_err = value;
    }
    if(value_path == "nsr-send-ready")
    {
        nsr_send_ready = value;
    }
    if(value_path == "nsr-send-unready")
    {
        nsr_send_unready = value;
    }
    if(value_path == "pm-ha-role")
    {
        pm_ha_role = value;
    }
    if(value_path == "pm-issu-role")
    {
        pm_issu_role = value;
    }
    if(value_path == "retry-flag")
    {
        retry_flag = value;
    }
    if(value_path == "sysmgr-ha-role")
    {
        sysmgr_ha_role = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::Pm()
    :
    conn_cb{YType::uint8, "conn-cb"},
    conn_status{YType::boolean, "conn-status"},
    disconn_cb{YType::uint8, "disconn-cb"},
    reg{YType::uint8, "reg"}
{
    yang_name = "pm"; yang_parent_name = "isis-nsr-infra";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::~Pm()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::has_data() const
{
    return conn_cb.is_set
	|| conn_status.is_set
	|| disconn_cb.is_set
	|| reg.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::has_operation() const
{
    return is_set(operation)
	|| is_set(conn_cb.operation)
	|| is_set(conn_status.operation)
	|| is_set(disconn_cb.operation)
	|| is_set(reg.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pm' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conn_cb.is_set || is_set(conn_cb.operation)) leaf_name_data.push_back(conn_cb.get_name_leafdata());
    if (conn_status.is_set || is_set(conn_status.operation)) leaf_name_data.push_back(conn_status.get_name_leafdata());
    if (disconn_cb.is_set || is_set(disconn_cb.operation)) leaf_name_data.push_back(disconn_cb.get_name_leafdata());
    if (reg.is_set || is_set(reg.operation)) leaf_name_data.push_back(reg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Pm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conn-cb")
    {
        conn_cb = value;
    }
    if(value_path == "conn-status")
    {
        conn_status = value;
    }
    if(value_path == "disconn-cb")
    {
        disconn_cb = value;
    }
    if(value_path == "reg")
    {
        reg = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::Ds()
    :
    conn{YType::uint8, "conn"},
    conn_cb{YType::uint8, "conn-cb"},
    conn_status{YType::boolean, "conn-status"},
    del_cb{YType::uint8, "del-cb"},
    disconn_cb{YType::uint8, "disconn-cb"},
    notify_cb{YType::uint8, "notify-cb"},
    notify_peer_xr{YType::str, "notify-peer-xr"},
    pub{YType::uint8, "pub"},
    pub_cb{YType::uint8, "pub-cb"},
    reg{YType::uint8, "reg"},
    reg_cb{YType::uint8, "reg-cb"},
    remove_srv{YType::uint8, "remove-srv"},
    unreg{YType::uint8, "unreg"},
    unreg_cb{YType::uint8, "unreg-cb"}
    	,
    conn_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs>())
	,conn_status_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs>())
	,conn_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs>())
	,del_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs>())
	,disconn_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs>())
	,notify_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs>())
	,pub_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs>())
	,pub_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs>())
	,reg_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs>())
	,reg_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs>())
	,remove_srv_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs>())
	,unreg_cb_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs>())
	,unreg_ts(std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs>())
{
    conn_cb_ts->parent = this;
    children["conn-cb-ts"] = conn_cb_ts;

    conn_status_ts->parent = this;
    children["conn-status-ts"] = conn_status_ts;

    conn_ts->parent = this;
    children["conn-ts"] = conn_ts;

    del_cb_ts->parent = this;
    children["del-cb-ts"] = del_cb_ts;

    disconn_cb_ts->parent = this;
    children["disconn-cb-ts"] = disconn_cb_ts;

    notify_cb_ts->parent = this;
    children["notify-cb-ts"] = notify_cb_ts;

    pub_cb_ts->parent = this;
    children["pub-cb-ts"] = pub_cb_ts;

    pub_ts->parent = this;
    children["pub-ts"] = pub_ts;

    reg_cb_ts->parent = this;
    children["reg-cb-ts"] = reg_cb_ts;

    reg_ts->parent = this;
    children["reg-ts"] = reg_ts;

    remove_srv_ts->parent = this;
    children["remove-srv-ts"] = remove_srv_ts;

    unreg_cb_ts->parent = this;
    children["unreg-cb-ts"] = unreg_cb_ts;

    unreg_ts->parent = this;
    children["unreg-ts"] = unreg_ts;

    yang_name = "ds"; yang_parent_name = "isis-nsr-infra";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::~Ds()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::has_data() const
{
    for (std::size_t index=0; index<notify_peer.size(); index++)
    {
        if(notify_peer[index]->has_data())
            return true;
    }
    return conn.is_set
	|| conn_cb.is_set
	|| conn_status.is_set
	|| del_cb.is_set
	|| disconn_cb.is_set
	|| notify_cb.is_set
	|| notify_peer_xr.is_set
	|| pub.is_set
	|| pub_cb.is_set
	|| reg.is_set
	|| reg_cb.is_set
	|| remove_srv.is_set
	|| unreg.is_set
	|| unreg_cb.is_set
	|| (conn_cb_ts !=  nullptr && conn_cb_ts->has_data())
	|| (conn_status_ts !=  nullptr && conn_status_ts->has_data())
	|| (conn_ts !=  nullptr && conn_ts->has_data())
	|| (del_cb_ts !=  nullptr && del_cb_ts->has_data())
	|| (disconn_cb_ts !=  nullptr && disconn_cb_ts->has_data())
	|| (notify_cb_ts !=  nullptr && notify_cb_ts->has_data())
	|| (pub_cb_ts !=  nullptr && pub_cb_ts->has_data())
	|| (pub_ts !=  nullptr && pub_ts->has_data())
	|| (reg_cb_ts !=  nullptr && reg_cb_ts->has_data())
	|| (reg_ts !=  nullptr && reg_ts->has_data())
	|| (remove_srv_ts !=  nullptr && remove_srv_ts->has_data())
	|| (unreg_cb_ts !=  nullptr && unreg_cb_ts->has_data())
	|| (unreg_ts !=  nullptr && unreg_ts->has_data());
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::has_operation() const
{
    for (std::size_t index=0; index<notify_peer.size(); index++)
    {
        if(notify_peer[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(conn.operation)
	|| is_set(conn_cb.operation)
	|| is_set(conn_status.operation)
	|| is_set(del_cb.operation)
	|| is_set(disconn_cb.operation)
	|| is_set(notify_cb.operation)
	|| is_set(notify_peer_xr.operation)
	|| is_set(pub.operation)
	|| is_set(pub_cb.operation)
	|| is_set(reg.operation)
	|| is_set(reg_cb.operation)
	|| is_set(remove_srv.operation)
	|| is_set(unreg.operation)
	|| is_set(unreg_cb.operation)
	|| (conn_cb_ts !=  nullptr && conn_cb_ts->has_operation())
	|| (conn_status_ts !=  nullptr && conn_status_ts->has_operation())
	|| (conn_ts !=  nullptr && conn_ts->has_operation())
	|| (del_cb_ts !=  nullptr && del_cb_ts->has_operation())
	|| (disconn_cb_ts !=  nullptr && disconn_cb_ts->has_operation())
	|| (notify_cb_ts !=  nullptr && notify_cb_ts->has_operation())
	|| (pub_cb_ts !=  nullptr && pub_cb_ts->has_operation())
	|| (pub_ts !=  nullptr && pub_ts->has_operation())
	|| (reg_cb_ts !=  nullptr && reg_cb_ts->has_operation())
	|| (reg_ts !=  nullptr && reg_ts->has_operation())
	|| (remove_srv_ts !=  nullptr && remove_srv_ts->has_operation())
	|| (unreg_cb_ts !=  nullptr && unreg_cb_ts->has_operation())
	|| (unreg_ts !=  nullptr && unreg_ts->has_operation());
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ds' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conn.is_set || is_set(conn.operation)) leaf_name_data.push_back(conn.get_name_leafdata());
    if (conn_cb.is_set || is_set(conn_cb.operation)) leaf_name_data.push_back(conn_cb.get_name_leafdata());
    if (conn_status.is_set || is_set(conn_status.operation)) leaf_name_data.push_back(conn_status.get_name_leafdata());
    if (del_cb.is_set || is_set(del_cb.operation)) leaf_name_data.push_back(del_cb.get_name_leafdata());
    if (disconn_cb.is_set || is_set(disconn_cb.operation)) leaf_name_data.push_back(disconn_cb.get_name_leafdata());
    if (notify_cb.is_set || is_set(notify_cb.operation)) leaf_name_data.push_back(notify_cb.get_name_leafdata());
    if (notify_peer_xr.is_set || is_set(notify_peer_xr.operation)) leaf_name_data.push_back(notify_peer_xr.get_name_leafdata());
    if (pub.is_set || is_set(pub.operation)) leaf_name_data.push_back(pub.get_name_leafdata());
    if (pub_cb.is_set || is_set(pub_cb.operation)) leaf_name_data.push_back(pub_cb.get_name_leafdata());
    if (reg.is_set || is_set(reg.operation)) leaf_name_data.push_back(reg.get_name_leafdata());
    if (reg_cb.is_set || is_set(reg_cb.operation)) leaf_name_data.push_back(reg_cb.get_name_leafdata());
    if (remove_srv.is_set || is_set(remove_srv.operation)) leaf_name_data.push_back(remove_srv.get_name_leafdata());
    if (unreg.is_set || is_set(unreg.operation)) leaf_name_data.push_back(unreg.get_name_leafdata());
    if (unreg_cb.is_set || is_set(unreg_cb.operation)) leaf_name_data.push_back(unreg_cb.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "conn-cb-ts")
    {
        if(conn_cb_ts != nullptr)
        {
            children["conn-cb-ts"] = conn_cb_ts;
        }
        else
        {
            conn_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs>();
            conn_cb_ts->parent = this;
            children["conn-cb-ts"] = conn_cb_ts;
        }
        return children.at("conn-cb-ts");
    }

    if(child_yang_name == "conn-status-ts")
    {
        if(conn_status_ts != nullptr)
        {
            children["conn-status-ts"] = conn_status_ts;
        }
        else
        {
            conn_status_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs>();
            conn_status_ts->parent = this;
            children["conn-status-ts"] = conn_status_ts;
        }
        return children.at("conn-status-ts");
    }

    if(child_yang_name == "conn-ts")
    {
        if(conn_ts != nullptr)
        {
            children["conn-ts"] = conn_ts;
        }
        else
        {
            conn_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs>();
            conn_ts->parent = this;
            children["conn-ts"] = conn_ts;
        }
        return children.at("conn-ts");
    }

    if(child_yang_name == "del-cb-ts")
    {
        if(del_cb_ts != nullptr)
        {
            children["del-cb-ts"] = del_cb_ts;
        }
        else
        {
            del_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs>();
            del_cb_ts->parent = this;
            children["del-cb-ts"] = del_cb_ts;
        }
        return children.at("del-cb-ts");
    }

    if(child_yang_name == "disconn-cb-ts")
    {
        if(disconn_cb_ts != nullptr)
        {
            children["disconn-cb-ts"] = disconn_cb_ts;
        }
        else
        {
            disconn_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs>();
            disconn_cb_ts->parent = this;
            children["disconn-cb-ts"] = disconn_cb_ts;
        }
        return children.at("disconn-cb-ts");
    }

    if(child_yang_name == "notify-cb-ts")
    {
        if(notify_cb_ts != nullptr)
        {
            children["notify-cb-ts"] = notify_cb_ts;
        }
        else
        {
            notify_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs>();
            notify_cb_ts->parent = this;
            children["notify-cb-ts"] = notify_cb_ts;
        }
        return children.at("notify-cb-ts");
    }

    if(child_yang_name == "notify-peer")
    {
        for(auto const & c : notify_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer>();
        c->parent = this;
        notify_peer.push_back(std::move(c));
        children[segment_path] = notify_peer.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pub-cb-ts")
    {
        if(pub_cb_ts != nullptr)
        {
            children["pub-cb-ts"] = pub_cb_ts;
        }
        else
        {
            pub_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs>();
            pub_cb_ts->parent = this;
            children["pub-cb-ts"] = pub_cb_ts;
        }
        return children.at("pub-cb-ts");
    }

    if(child_yang_name == "pub-ts")
    {
        if(pub_ts != nullptr)
        {
            children["pub-ts"] = pub_ts;
        }
        else
        {
            pub_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs>();
            pub_ts->parent = this;
            children["pub-ts"] = pub_ts;
        }
        return children.at("pub-ts");
    }

    if(child_yang_name == "reg-cb-ts")
    {
        if(reg_cb_ts != nullptr)
        {
            children["reg-cb-ts"] = reg_cb_ts;
        }
        else
        {
            reg_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs>();
            reg_cb_ts->parent = this;
            children["reg-cb-ts"] = reg_cb_ts;
        }
        return children.at("reg-cb-ts");
    }

    if(child_yang_name == "reg-ts")
    {
        if(reg_ts != nullptr)
        {
            children["reg-ts"] = reg_ts;
        }
        else
        {
            reg_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs>();
            reg_ts->parent = this;
            children["reg-ts"] = reg_ts;
        }
        return children.at("reg-ts");
    }

    if(child_yang_name == "remove-srv-ts")
    {
        if(remove_srv_ts != nullptr)
        {
            children["remove-srv-ts"] = remove_srv_ts;
        }
        else
        {
            remove_srv_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs>();
            remove_srv_ts->parent = this;
            children["remove-srv-ts"] = remove_srv_ts;
        }
        return children.at("remove-srv-ts");
    }

    if(child_yang_name == "unreg-cb-ts")
    {
        if(unreg_cb_ts != nullptr)
        {
            children["unreg-cb-ts"] = unreg_cb_ts;
        }
        else
        {
            unreg_cb_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs>();
            unreg_cb_ts->parent = this;
            children["unreg-cb-ts"] = unreg_cb_ts;
        }
        return children.at("unreg-cb-ts");
    }

    if(child_yang_name == "unreg-ts")
    {
        if(unreg_ts != nullptr)
        {
            children["unreg-ts"] = unreg_ts;
        }
        else
        {
            unreg_ts = std::make_shared<Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs>();
            unreg_ts->parent = this;
            children["unreg-ts"] = unreg_ts;
        }
        return children.at("unreg-ts");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::get_children()
{
    if(children.find("conn-cb-ts") == children.end())
    {
        if(conn_cb_ts != nullptr)
        {
            children["conn-cb-ts"] = conn_cb_ts;
        }
    }

    if(children.find("conn-status-ts") == children.end())
    {
        if(conn_status_ts != nullptr)
        {
            children["conn-status-ts"] = conn_status_ts;
        }
    }

    if(children.find("conn-ts") == children.end())
    {
        if(conn_ts != nullptr)
        {
            children["conn-ts"] = conn_ts;
        }
    }

    if(children.find("del-cb-ts") == children.end())
    {
        if(del_cb_ts != nullptr)
        {
            children["del-cb-ts"] = del_cb_ts;
        }
    }

    if(children.find("disconn-cb-ts") == children.end())
    {
        if(disconn_cb_ts != nullptr)
        {
            children["disconn-cb-ts"] = disconn_cb_ts;
        }
    }

    if(children.find("notify-cb-ts") == children.end())
    {
        if(notify_cb_ts != nullptr)
        {
            children["notify-cb-ts"] = notify_cb_ts;
        }
    }

    for (auto const & c : notify_peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("pub-cb-ts") == children.end())
    {
        if(pub_cb_ts != nullptr)
        {
            children["pub-cb-ts"] = pub_cb_ts;
        }
    }

    if(children.find("pub-ts") == children.end())
    {
        if(pub_ts != nullptr)
        {
            children["pub-ts"] = pub_ts;
        }
    }

    if(children.find("reg-cb-ts") == children.end())
    {
        if(reg_cb_ts != nullptr)
        {
            children["reg-cb-ts"] = reg_cb_ts;
        }
    }

    if(children.find("reg-ts") == children.end())
    {
        if(reg_ts != nullptr)
        {
            children["reg-ts"] = reg_ts;
        }
    }

    if(children.find("remove-srv-ts") == children.end())
    {
        if(remove_srv_ts != nullptr)
        {
            children["remove-srv-ts"] = remove_srv_ts;
        }
    }

    if(children.find("unreg-cb-ts") == children.end())
    {
        if(unreg_cb_ts != nullptr)
        {
            children["unreg-cb-ts"] = unreg_cb_ts;
        }
    }

    if(children.find("unreg-ts") == children.end())
    {
        if(unreg_ts != nullptr)
        {
            children["unreg-ts"] = unreg_ts;
        }
    }

    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conn")
    {
        conn = value;
    }
    if(value_path == "conn-cb")
    {
        conn_cb = value;
    }
    if(value_path == "conn-status")
    {
        conn_status = value;
    }
    if(value_path == "del-cb")
    {
        del_cb = value;
    }
    if(value_path == "disconn-cb")
    {
        disconn_cb = value;
    }
    if(value_path == "notify-cb")
    {
        notify_cb = value;
    }
    if(value_path == "notify-peer-xr")
    {
        notify_peer_xr = value;
    }
    if(value_path == "pub")
    {
        pub = value;
    }
    if(value_path == "pub-cb")
    {
        pub_cb = value;
    }
    if(value_path == "reg")
    {
        reg = value;
    }
    if(value_path == "reg-cb")
    {
        reg_cb = value;
    }
    if(value_path == "remove-srv")
    {
        remove_srv = value;
    }
    if(value_path == "unreg")
    {
        unreg = value;
    }
    if(value_path == "unreg-cb")
    {
        unreg_cb = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::ConnTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "conn-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::~ConnTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::ConnCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "conn-cb-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::~ConnCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-cb-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnCbTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnCbTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::PubTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "pub-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::~PubTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pub-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PubTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::PubCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "pub-cb-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::~PubCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pub-cb-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PubCbTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::PubCbTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::RegTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "reg-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::~RegTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::RegCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "reg-cb-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::~RegCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-cb-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegCbTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RegCbTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::UnregTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "unreg-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::~UnregTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreg-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnregTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::UnregCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "unreg-cb-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::~UnregCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreg-cb-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnregCbTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::UnregCbTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::DisconnCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "disconn-cb-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::~DisconnCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconn-cb-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DisconnCbTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DisconnCbTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::NotifyCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "notify-cb-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::~NotifyCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify-cb-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NotifyCbTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyCbTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::DelCbTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "del-cb-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::~DelCbTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "del-cb-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DelCbTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::DelCbTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::RemoveSrvTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "remove-srv-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::~RemoveSrvTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-srv-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoveSrvTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::RemoveSrvTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::ConnStatusTs()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "conn-status-ts"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::~ConnStatusTs()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conn-status-ts";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnStatusTs' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::ConnStatusTs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::NotifyPeer()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "notify-peer"; yang_parent_name = "ds";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::~NotifyPeer()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify-peer";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NotifyPeer' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ds::NotifyPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::Te()
    :
    adv_sync_data{YType::uint8, "adv-sync-data"},
    conn_up{YType::uint8, "conn-up"},
    enabled{YType::uint8, "enabled"},
    has_info_from_te{YType::uint8, "has-info-from-te"},
    link_purge_time_on{YType::uint8, "link-purge-time-on"},
    te_link_cb{YType::uint8, "te-link-cb"},
    te_tunnel_cb{YType::uint8, "te-tunnel-cb"},
    tunnel_purge_time_on{YType::uint8, "tunnel-purge-time-on"}
{
    yang_name = "te"; yang_parent_name = "isis-nsr-infra";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::~Te()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::has_data() const
{
    return adv_sync_data.is_set
	|| conn_up.is_set
	|| enabled.is_set
	|| has_info_from_te.is_set
	|| link_purge_time_on.is_set
	|| te_link_cb.is_set
	|| te_tunnel_cb.is_set
	|| tunnel_purge_time_on.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::has_operation() const
{
    return is_set(operation)
	|| is_set(adv_sync_data.operation)
	|| is_set(conn_up.operation)
	|| is_set(enabled.operation)
	|| is_set(has_info_from_te.operation)
	|| is_set(link_purge_time_on.operation)
	|| is_set(te_link_cb.operation)
	|| is_set(te_tunnel_cb.operation)
	|| is_set(tunnel_purge_time_on.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Te' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adv_sync_data.is_set || is_set(adv_sync_data.operation)) leaf_name_data.push_back(adv_sync_data.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.operation)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (has_info_from_te.is_set || is_set(has_info_from_te.operation)) leaf_name_data.push_back(has_info_from_te.get_name_leafdata());
    if (link_purge_time_on.is_set || is_set(link_purge_time_on.operation)) leaf_name_data.push_back(link_purge_time_on.get_name_leafdata());
    if (te_link_cb.is_set || is_set(te_link_cb.operation)) leaf_name_data.push_back(te_link_cb.get_name_leafdata());
    if (te_tunnel_cb.is_set || is_set(te_tunnel_cb.operation)) leaf_name_data.push_back(te_tunnel_cb.get_name_leafdata());
    if (tunnel_purge_time_on.is_set || is_set(tunnel_purge_time_on.operation)) leaf_name_data.push_back(tunnel_purge_time_on.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Te::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adv-sync-data")
    {
        adv_sync_data = value;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "has-info-from-te")
    {
        has_info_from_te = value;
    }
    if(value_path == "link-purge-time-on")
    {
        link_purge_time_on = value;
    }
    if(value_path == "te-link-cb")
    {
        te_link_cb = value;
    }
    if(value_path == "te-tunnel-cb")
    {
        te_tunnel_cb = value;
    }
    if(value_path == "tunnel-purge-time-on")
    {
        tunnel_purge_time_on = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::Ncd()
    :
    chksum{YType::uint16, "chksum"},
    conn_up{YType::boolean, "conn-up"},
    endp_hdl{YType::uint8, "endp-hdl"},
    recv_cnt{YType::uint32, "recv-cnt"},
    send_seqnum{YType::uint32, "send-seqnum"},
    vm_idx{YType::uint8, "vm-idx"}
{
    yang_name = "ncd"; yang_parent_name = "isis-nsr-infra";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::~Ncd()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::has_data() const
{
    return chksum.is_set
	|| conn_up.is_set
	|| endp_hdl.is_set
	|| recv_cnt.is_set
	|| send_seqnum.is_set
	|| vm_idx.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::has_operation() const
{
    return is_set(operation)
	|| is_set(chksum.operation)
	|| is_set(conn_up.operation)
	|| is_set(endp_hdl.operation)
	|| is_set(recv_cnt.operation)
	|| is_set(send_seqnum.operation)
	|| is_set(vm_idx.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncd";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ncd' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chksum.is_set || is_set(chksum.operation)) leaf_name_data.push_back(chksum.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.operation)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (endp_hdl.is_set || is_set(endp_hdl.operation)) leaf_name_data.push_back(endp_hdl.get_name_leafdata());
    if (recv_cnt.is_set || is_set(recv_cnt.operation)) leaf_name_data.push_back(recv_cnt.get_name_leafdata());
    if (send_seqnum.is_set || is_set(send_seqnum.operation)) leaf_name_data.push_back(send_seqnum.get_name_leafdata());
    if (vm_idx.is_set || is_set(vm_idx.operation)) leaf_name_data.push_back(vm_idx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::Ncd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chksum")
    {
        chksum = value;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
    }
    if(value_path == "endp-hdl")
    {
        endp_hdl = value;
    }
    if(value_path == "recv-cnt")
    {
        recv_cnt = value;
    }
    if(value_path == "send-seqnum")
    {
        send_seqnum = value;
    }
    if(value_path == "vm-idx")
    {
        vm_idx = value;
    }
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::NiiIdb()
    :
    brought_up{YType::boolean, "brought-up"},
    exist{YType::boolean, "exist"},
    has_adj{YType::boolean, "has-adj"},
    retry_timer{YType::boolean, "retry-timer"},
    running{YType::boolean, "running"}
{
    yang_name = "nii-idb"; yang_parent_name = "isis-nsr-infra";
}

Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::~NiiIdb()
{
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::has_data() const
{
    return brought_up.is_set
	|| exist.is_set
	|| has_adj.is_set
	|| retry_timer.is_set
	|| running.is_set;
}

bool Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::has_operation() const
{
    return is_set(operation)
	|| is_set(brought_up.operation)
	|| is_set(exist.operation)
	|| is_set(has_adj.operation)
	|| is_set(retry_timer.operation)
	|| is_set(running.operation);
}

std::string Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nii-idb";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NiiIdb' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (brought_up.is_set || is_set(brought_up.operation)) leaf_name_data.push_back(brought_up.get_name_leafdata());
    if (exist.is_set || is_set(exist.operation)) leaf_name_data.push_back(exist.get_name_leafdata());
    if (has_adj.is_set || is_set(has_adj.operation)) leaf_name_data.push_back(has_adj.get_name_leafdata());
    if (retry_timer.is_set || is_set(retry_timer.operation)) leaf_name_data.push_back(retry_timer.get_name_leafdata());
    if (running.is_set || is_set(running.operation)) leaf_name_data.push_back(running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatus::IsisNsrInfra::NiiIdb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "brought-up")
    {
        brought_up = value;
    }
    if(value_path == "exist")
    {
        exist = value;
    }
    if(value_path == "has-adj")
    {
        has_adj = value;
    }
    if(value_path == "retry-timer")
    {
        retry_timer = value;
    }
    if(value_path == "running")
    {
        running = value;
    }
}

Isis::Instances::Instance::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "instance";
}

Isis::Instances::Instance::Interfaces::~Interfaces()
{
}

bool Isis::Instances::Instance::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::get_children()
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

void Isis::Instances::Instance::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    configured_circuit_type{YType::enumeration, "configured-circuit-type"},
    is_type{YType::enumeration, "is-type"},
    mesh_group{YType::uint32, "mesh-group"},
    nsr_intf{YType::boolean, "nsr-intf"}
    	,
    configured_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus>())
	,interface_status_and_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData>())
{
    configured_status->parent = this;
    children["configured-status"] = configured_status;

    interface_status_and_data->parent = this;
    children["interface-status-and-data"] = interface_status_and_data;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Isis::Instances::Instance::Interfaces::Interface::~Interface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| configured_circuit_type.is_set
	|| is_type.is_set
	|| mesh_group.is_set
	|| nsr_intf.is_set
	|| (configured_status !=  nullptr && configured_status->has_data())
	|| (interface_status_and_data !=  nullptr && interface_status_and_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configured_circuit_type.operation)
	|| is_set(is_type.operation)
	|| is_set(mesh_group.operation)
	|| is_set(nsr_intf.operation)
	|| (configured_status !=  nullptr && configured_status->has_operation())
	|| (interface_status_and_data !=  nullptr && interface_status_and_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configured_circuit_type.is_set || is_set(configured_circuit_type.operation)) leaf_name_data.push_back(configured_circuit_type.get_name_leafdata());
    if (is_type.is_set || is_set(is_type.operation)) leaf_name_data.push_back(is_type.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.operation)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (nsr_intf.is_set || is_set(nsr_intf.operation)) leaf_name_data.push_back(nsr_intf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "configured-status")
    {
        if(configured_status != nullptr)
        {
            children["configured-status"] = configured_status;
        }
        else
        {
            configured_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus>();
            configured_status->parent = this;
            children["configured-status"] = configured_status;
        }
        return children.at("configured-status");
    }

    if(child_yang_name == "interface-status-and-data")
    {
        if(interface_status_and_data != nullptr)
        {
            children["interface-status-and-data"] = interface_status_and_data;
        }
        else
        {
            interface_status_and_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData>();
            interface_status_and_data->parent = this;
            children["interface-status-and-data"] = interface_status_and_data;
        }
        return children.at("interface-status-and-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::get_children()
{
    if(children.find("configured-status") == children.end())
    {
        if(configured_status != nullptr)
        {
            children["configured-status"] = configured_status;
        }
    }

    if(children.find("interface-status-and-data") == children.end())
    {
        if(interface_status_and_data != nullptr)
        {
            children["interface-status-and-data"] = interface_status_and_data;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configured-circuit-type")
    {
        configured_circuit_type = value;
    }
    if(value_path == "is-type")
    {
        is_type = value;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
    }
    if(value_path == "nsr-intf")
    {
        nsr_intf = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::ConfiguredStatus()
    :
    adjacency_form_status{YType::boolean, "adjacency-form-status"},
    adv_prefix_status{YType::boolean, "adv-prefix-status"}
{
    yang_name = "configured-status"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::~ConfiguredStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::has_data() const
{
    return adjacency_form_status.is_set
	|| adv_prefix_status.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_form_status.operation)
	|| is_set(adv_prefix_status.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfiguredStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_form_status.is_set || is_set(adjacency_form_status.operation)) leaf_name_data.push_back(adjacency_form_status.get_name_leafdata());
    if (adv_prefix_status.is_set || is_set(adv_prefix_status.operation)) leaf_name_data.push_back(adv_prefix_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-form-status")
    {
        adjacency_form_status = value;
    }
    if(value_path == "adv-prefix-status")
    {
        adv_prefix_status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::InterfaceStatusAndData()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled>())
	,enabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled>())
{
    disabled->parent = this;
    children["disabled"] = disabled;

    enabled->parent = this;
    children["enabled"] = enabled;

    yang_name = "interface-status-and-data"; yang_parent_name = "interface";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::~InterfaceStatusAndData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data())
	|| (enabled !=  nullptr && enabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (disabled !=  nullptr && disabled->has_operation())
	|| (enabled !=  nullptr && enabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-status-and-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatusAndData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "disabled")
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
        else
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled>();
            disabled->parent = this;
            children["disabled"] = disabled;
        }
        return children.at("disabled");
    }

    if(child_yang_name == "enabled")
    {
        if(enabled != nullptr)
        {
            children["enabled"] = enabled;
        }
        else
        {
            enabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled>();
            enabled->parent = this;
            children["enabled"] = enabled;
        }
        return children.at("enabled");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_children()
{
    if(children.find("disabled") == children.end())
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
    }

    if(children.find("enabled") == children.end())
    {
        if(enabled != nullptr)
        {
            children["enabled"] = enabled;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "interface-status-and-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::Enabled()
    :
    enabled_circuit_type{YType::enumeration, "enabled-circuit-type"},
    interface_media_type{YType::enumeration, "interface-media-type"},
    local_circuit_number{YType::uint8, "local-circuit-number"},
    rsi_srlg_registered{YType::boolean, "rsi-srlg-registered"},
    underlying_interface{YType::str, "underlying-interface"}
    	,
    adjacency_form_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus>())
	,adv_prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus>())
	,bfd_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData>())
	,clns_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData>())
	,p2p_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData>())
{
    adjacency_form_status->parent = this;
    children["adjacency-form-status"] = adjacency_form_status;

    adv_prefix_status->parent = this;
    children["adv-prefix-status"] = adv_prefix_status;

    bfd_data->parent = this;
    children["bfd-data"] = bfd_data;

    clns_data->parent = this;
    children["clns-data"] = clns_data;

    p2p_data->parent = this;
    children["p2p-data"] = p2p_data;

    yang_name = "enabled"; yang_parent_name = "interface-status-and-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::~Enabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::has_data() const
{
    for (std::size_t index=0; index<per_address_family_data.size(); index++)
    {
        if(per_address_family_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_topology_data.size(); index++)
    {
        if(per_topology_data[index]->has_data())
            return true;
    }
    for (auto const & leaf : underlying_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enabled_circuit_type.is_set
	|| interface_media_type.is_set
	|| local_circuit_number.is_set
	|| rsi_srlg_registered.is_set
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_data())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_data())
	|| (bfd_data !=  nullptr && bfd_data->has_data())
	|| (clns_data !=  nullptr && clns_data->has_data())
	|| (p2p_data !=  nullptr && p2p_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::has_operation() const
{
    for (std::size_t index=0; index<per_address_family_data.size(); index++)
    {
        if(per_address_family_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_topology_data.size(); index++)
    {
        if(per_topology_data[index]->has_operation())
            return true;
    }
    for (auto const & leaf : underlying_interface.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(enabled_circuit_type.operation)
	|| is_set(interface_media_type.operation)
	|| is_set(local_circuit_number.operation)
	|| is_set(rsi_srlg_registered.operation)
	|| is_set(underlying_interface.operation)
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_operation())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_operation())
	|| (bfd_data !=  nullptr && bfd_data->has_operation())
	|| (clns_data !=  nullptr && clns_data->has_operation())
	|| (p2p_data !=  nullptr && p2p_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enabled";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled_circuit_type.is_set || is_set(enabled_circuit_type.operation)) leaf_name_data.push_back(enabled_circuit_type.get_name_leafdata());
    if (interface_media_type.is_set || is_set(interface_media_type.operation)) leaf_name_data.push_back(interface_media_type.get_name_leafdata());
    if (local_circuit_number.is_set || is_set(local_circuit_number.operation)) leaf_name_data.push_back(local_circuit_number.get_name_leafdata());
    if (rsi_srlg_registered.is_set || is_set(rsi_srlg_registered.operation)) leaf_name_data.push_back(rsi_srlg_registered.get_name_leafdata());

    auto underlying_interface_name_datas = underlying_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), underlying_interface_name_datas.begin(), underlying_interface_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-form-status")
    {
        if(adjacency_form_status != nullptr)
        {
            children["adjacency-form-status"] = adjacency_form_status;
        }
        else
        {
            adjacency_form_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus>();
            adjacency_form_status->parent = this;
            children["adjacency-form-status"] = adjacency_form_status;
        }
        return children.at("adjacency-form-status");
    }

    if(child_yang_name == "adv-prefix-status")
    {
        if(adv_prefix_status != nullptr)
        {
            children["adv-prefix-status"] = adv_prefix_status;
        }
        else
        {
            adv_prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus>();
            adv_prefix_status->parent = this;
            children["adv-prefix-status"] = adv_prefix_status;
        }
        return children.at("adv-prefix-status");
    }

    if(child_yang_name == "bfd-data")
    {
        if(bfd_data != nullptr)
        {
            children["bfd-data"] = bfd_data;
        }
        else
        {
            bfd_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData>();
            bfd_data->parent = this;
            children["bfd-data"] = bfd_data;
        }
        return children.at("bfd-data");
    }

    if(child_yang_name == "clns-data")
    {
        if(clns_data != nullptr)
        {
            children["clns-data"] = clns_data;
        }
        else
        {
            clns_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData>();
            clns_data->parent = this;
            children["clns-data"] = clns_data;
        }
        return children.at("clns-data");
    }

    if(child_yang_name == "p2p-data")
    {
        if(p2p_data != nullptr)
        {
            children["p2p-data"] = p2p_data;
        }
        else
        {
            p2p_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData>();
            p2p_data->parent = this;
            children["p2p-data"] = p2p_data;
        }
        return children.at("p2p-data");
    }

    if(child_yang_name == "per-address-family-data")
    {
        for(auto const & c : per_address_family_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData>();
        c->parent = this;
        per_address_family_data.push_back(std::move(c));
        children[segment_path] = per_address_family_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "per-area-data")
    {
        for(auto const & c : per_area_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(std::move(c));
        children[segment_path] = per_area_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "per-topology-data")
    {
        for(auto const & c : per_topology_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData>();
        c->parent = this;
        per_topology_data.push_back(std::move(c));
        children[segment_path] = per_topology_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_children()
{
    if(children.find("adjacency-form-status") == children.end())
    {
        if(adjacency_form_status != nullptr)
        {
            children["adjacency-form-status"] = adjacency_form_status;
        }
    }

    if(children.find("adv-prefix-status") == children.end())
    {
        if(adv_prefix_status != nullptr)
        {
            children["adv-prefix-status"] = adv_prefix_status;
        }
    }

    if(children.find("bfd-data") == children.end())
    {
        if(bfd_data != nullptr)
        {
            children["bfd-data"] = bfd_data;
        }
    }

    if(children.find("clns-data") == children.end())
    {
        if(clns_data != nullptr)
        {
            children["clns-data"] = clns_data;
        }
    }

    if(children.find("p2p-data") == children.end())
    {
        if(p2p_data != nullptr)
        {
            children["p2p-data"] = p2p_data;
        }
    }

    for (auto const & c : per_address_family_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : per_area_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : per_topology_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled-circuit-type")
    {
        enabled_circuit_type = value;
    }
    if(value_path == "interface-media-type")
    {
        interface_media_type = value;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number = value;
    }
    if(value_path == "rsi-srlg-registered")
    {
        rsi_srlg_registered = value;
    }
    if(value_path == "underlying-interface")
    {
        underlying_interface.append(value);
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::AdjacencyFormStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled>())
{
    disabled->parent = this;
    children["disabled"] = disabled;

    yang_name = "adjacency-form-status"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::~AdjacencyFormStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-form-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyFormStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "disabled")
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
        else
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled>();
            disabled->parent = this;
            children["disabled"] = disabled;
        }
        return children.at("disabled");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_children()
{
    if(children.find("disabled") == children.end())
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "adjacency-form-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::AdvPrefixStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled>())
{
    disabled->parent = this;
    children["disabled"] = disabled;

    yang_name = "adv-prefix-status"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::~AdvPrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-prefix-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvPrefixStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "disabled")
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
        else
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled>();
            disabled->parent = this;
            children["disabled"] = disabled;
        }
        return children.at("disabled");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_children()
{
    if(children.find("disabled") == children.end())
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "adv-prefix-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::P2PData()
    :
    extended_circuit_number{YType::uint32, "extended-circuit-number"},
    retransmit_lsp_interval{YType::uint32, "retransmit-lsp-interval"},
    retransmit_lsp_queue_size{YType::uint32, "retransmit-lsp-queue-size"},
    time_until_next_iih{YType::uint32, "time-until-next-iih"}
{
    yang_name = "p2p-data"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::~P2PData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::has_data() const
{
    return extended_circuit_number.is_set
	|| retransmit_lsp_interval.is_set
	|| retransmit_lsp_queue_size.is_set
	|| time_until_next_iih.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_circuit_number.operation)
	|| is_set(retransmit_lsp_interval.operation)
	|| is_set(retransmit_lsp_queue_size.operation)
	|| is_set(time_until_next_iih.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2PData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_circuit_number.is_set || is_set(extended_circuit_number.operation)) leaf_name_data.push_back(extended_circuit_number.get_name_leafdata());
    if (retransmit_lsp_interval.is_set || is_set(retransmit_lsp_interval.operation)) leaf_name_data.push_back(retransmit_lsp_interval.get_name_leafdata());
    if (retransmit_lsp_queue_size.is_set || is_set(retransmit_lsp_queue_size.operation)) leaf_name_data.push_back(retransmit_lsp_queue_size.get_name_leafdata());
    if (time_until_next_iih.is_set || is_set(time_until_next_iih.operation)) leaf_name_data.push_back(time_until_next_iih.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2PData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-circuit-number")
    {
        extended_circuit_number = value;
    }
    if(value_path == "retransmit-lsp-interval")
    {
        retransmit_lsp_interval = value;
    }
    if(value_path == "retransmit-lsp-queue-size")
    {
        retransmit_lsp_queue_size = value;
    }
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::BfdData()
    :
    enabled{YType::boolean, "enabled"},
    interval{YType::uint32, "interval"},
    ipv6_enabled{YType::boolean, "ipv6-enabled"},
    multiplier{YType::uint32, "multiplier"}
{
    yang_name = "bfd-data"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::~BfdData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::has_data() const
{
    return enabled.is_set
	|| interval.is_set
	|| ipv6_enabled.is_set
	|| multiplier.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation)
	|| is_set(interval.operation)
	|| is_set(ipv6_enabled.operation)
	|| is_set(multiplier.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (ipv6_enabled.is_set || is_set(ipv6_enabled.operation)) leaf_name_data.push_back(ipv6_enabled.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.operation)) leaf_name_data.push_back(multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "ipv6-enabled")
    {
        ipv6_enabled = value;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsData()
    :
    last_lsp_id_transmitted{YType::str, "last-lsp-id-transmitted"},
    last_lsp_level_transmitted{YType::enumeration, "last-lsp-level-transmitted"},
    lsp_transmit_requested_flag{YType::boolean, "lsp-transmit-requested-flag"},
    lsp_transmitted_flag{YType::boolean, "lsp-transmitted-flag"},
    lsp_txmitd_b2b_limit{YType::uint32, "lsp-txmitd-b2b-limit"},
    lsp_txmt_b2b_msecs{YType::uint32, "lsp-txmt-b2b-msecs"},
    time_until_next_lsp{YType::uint32, "time-until-next-lsp"}
    	,
    clns_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus>())
	,media_specific_state(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState>())
	,mtu_info(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo>())
	,snpa_state(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState>())
{
    clns_status->parent = this;
    children["clns-status"] = clns_status;

    media_specific_state->parent = this;
    children["media-specific-state"] = media_specific_state;

    mtu_info->parent = this;
    children["mtu-info"] = mtu_info;

    snpa_state->parent = this;
    children["snpa-state"] = snpa_state;

    yang_name = "clns-data"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::~ClnsData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::has_data() const
{
    return last_lsp_id_transmitted.is_set
	|| last_lsp_level_transmitted.is_set
	|| lsp_transmit_requested_flag.is_set
	|| lsp_transmitted_flag.is_set
	|| lsp_txmitd_b2b_limit.is_set
	|| lsp_txmt_b2b_msecs.is_set
	|| time_until_next_lsp.is_set
	|| (clns_status !=  nullptr && clns_status->has_data())
	|| (media_specific_state !=  nullptr && media_specific_state->has_data())
	|| (mtu_info !=  nullptr && mtu_info->has_data())
	|| (snpa_state !=  nullptr && snpa_state->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::has_operation() const
{
    return is_set(operation)
	|| is_set(last_lsp_id_transmitted.operation)
	|| is_set(last_lsp_level_transmitted.operation)
	|| is_set(lsp_transmit_requested_flag.operation)
	|| is_set(lsp_transmitted_flag.operation)
	|| is_set(lsp_txmitd_b2b_limit.operation)
	|| is_set(lsp_txmt_b2b_msecs.operation)
	|| is_set(time_until_next_lsp.operation)
	|| (clns_status !=  nullptr && clns_status->has_operation())
	|| (media_specific_state !=  nullptr && media_specific_state->has_operation())
	|| (mtu_info !=  nullptr && mtu_info->has_operation())
	|| (snpa_state !=  nullptr && snpa_state->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClnsData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_lsp_id_transmitted.is_set || is_set(last_lsp_id_transmitted.operation)) leaf_name_data.push_back(last_lsp_id_transmitted.get_name_leafdata());
    if (last_lsp_level_transmitted.is_set || is_set(last_lsp_level_transmitted.operation)) leaf_name_data.push_back(last_lsp_level_transmitted.get_name_leafdata());
    if (lsp_transmit_requested_flag.is_set || is_set(lsp_transmit_requested_flag.operation)) leaf_name_data.push_back(lsp_transmit_requested_flag.get_name_leafdata());
    if (lsp_transmitted_flag.is_set || is_set(lsp_transmitted_flag.operation)) leaf_name_data.push_back(lsp_transmitted_flag.get_name_leafdata());
    if (lsp_txmitd_b2b_limit.is_set || is_set(lsp_txmitd_b2b_limit.operation)) leaf_name_data.push_back(lsp_txmitd_b2b_limit.get_name_leafdata());
    if (lsp_txmt_b2b_msecs.is_set || is_set(lsp_txmt_b2b_msecs.operation)) leaf_name_data.push_back(lsp_txmt_b2b_msecs.get_name_leafdata());
    if (time_until_next_lsp.is_set || is_set(time_until_next_lsp.operation)) leaf_name_data.push_back(time_until_next_lsp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clns-status")
    {
        if(clns_status != nullptr)
        {
            children["clns-status"] = clns_status;
        }
        else
        {
            clns_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus>();
            clns_status->parent = this;
            children["clns-status"] = clns_status;
        }
        return children.at("clns-status");
    }

    if(child_yang_name == "media-specific-state")
    {
        if(media_specific_state != nullptr)
        {
            children["media-specific-state"] = media_specific_state;
        }
        else
        {
            media_specific_state = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState>();
            media_specific_state->parent = this;
            children["media-specific-state"] = media_specific_state;
        }
        return children.at("media-specific-state");
    }

    if(child_yang_name == "mtu-info")
    {
        if(mtu_info != nullptr)
        {
            children["mtu-info"] = mtu_info;
        }
        else
        {
            mtu_info = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo>();
            mtu_info->parent = this;
            children["mtu-info"] = mtu_info;
        }
        return children.at("mtu-info");
    }

    if(child_yang_name == "snpa-state")
    {
        if(snpa_state != nullptr)
        {
            children["snpa-state"] = snpa_state;
        }
        else
        {
            snpa_state = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState>();
            snpa_state->parent = this;
            children["snpa-state"] = snpa_state;
        }
        return children.at("snpa-state");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_children()
{
    if(children.find("clns-status") == children.end())
    {
        if(clns_status != nullptr)
        {
            children["clns-status"] = clns_status;
        }
    }

    if(children.find("media-specific-state") == children.end())
    {
        if(media_specific_state != nullptr)
        {
            children["media-specific-state"] = media_specific_state;
        }
    }

    if(children.find("mtu-info") == children.end())
    {
        if(mtu_info != nullptr)
        {
            children["mtu-info"] = mtu_info;
        }
    }

    if(children.find("snpa-state") == children.end())
    {
        if(snpa_state != nullptr)
        {
            children["snpa-state"] = snpa_state;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-lsp-id-transmitted")
    {
        last_lsp_id_transmitted = value;
    }
    if(value_path == "last-lsp-level-transmitted")
    {
        last_lsp_level_transmitted = value;
    }
    if(value_path == "lsp-transmit-requested-flag")
    {
        lsp_transmit_requested_flag = value;
    }
    if(value_path == "lsp-transmitted-flag")
    {
        lsp_transmitted_flag = value;
    }
    if(value_path == "lsp-txmitd-b2b-limit")
    {
        lsp_txmitd_b2b_limit = value;
    }
    if(value_path == "lsp-txmt-b2b-msecs")
    {
        lsp_txmt_b2b_msecs = value;
    }
    if(value_path == "time-until-next-lsp")
    {
        time_until_next_lsp = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsStatus()
    :
    status{YType::enumeration, "status"}
    	,
    clns_down_info(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo>())
{
    clns_down_info->parent = this;
    children["clns-down-info"] = clns_down_info;

    yang_name = "clns-status"; yang_parent_name = "clns-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::~ClnsStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::has_data() const
{
    return status.is_set
	|| (clns_down_info !=  nullptr && clns_down_info->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (clns_down_info !=  nullptr && clns_down_info->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClnsStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clns-down-info")
    {
        if(clns_down_info != nullptr)
        {
            children["clns-down-info"] = clns_down_info;
        }
        else
        {
            clns_down_info = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo>();
            clns_down_info->parent = this;
            children["clns-down-info"] = clns_down_info;
        }
        return children.at("clns-down-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_children()
{
    if(children.find("clns-down-info") == children.end())
    {
        if(clns_down_info != nullptr)
        {
            children["clns-down-info"] = clns_down_info;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::ClnsDownInfo()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "clns-down-info"; yang_parent_name = "clns-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::~ClnsDownInfo()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-down-info";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClnsDownInfo' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::MtuInfo()
    :
    mtu{YType::uint32, "mtu"},
    status{YType::enumeration, "status"}
    	,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid>())
{
    invalid->parent = this;
    children["invalid"] = invalid;

    yang_name = "mtu-info"; yang_parent_name = "clns-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::~MtuInfo()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::has_data() const
{
    return mtu.is_set
	|| status.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(status.operation)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-info";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MtuInfo' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "invalid")
    {
        if(invalid != nullptr)
        {
            children["invalid"] = invalid;
        }
        else
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid>();
            invalid->parent = this;
            children["invalid"] = invalid;
        }
        return children.at("invalid");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_children()
{
    if(children.find("invalid") == children.end())
    {
        if(invalid != nullptr)
        {
            children["invalid"] = invalid;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "invalid"; yang_parent_name = "mtu-info";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Invalid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::SnpaState()
    :
    status{YType::enumeration, "status"}
    	,
    known(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known>())
	,unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown>())
{
    known->parent = this;
    children["known"] = known;

    unknown->parent = this;
    children["unknown"] = unknown;

    yang_name = "snpa-state"; yang_parent_name = "clns-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::~SnpaState()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::has_data() const
{
    return status.is_set
	|| (known !=  nullptr && known->has_data())
	|| (unknown !=  nullptr && unknown->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (known !=  nullptr && known->has_operation())
	|| (unknown !=  nullptr && unknown->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snpa-state";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SnpaState' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "known")
    {
        if(known != nullptr)
        {
            children["known"] = known;
        }
        else
        {
            known = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known>();
            known->parent = this;
            children["known"] = known;
        }
        return children.at("known");
    }

    if(child_yang_name == "unknown")
    {
        if(unknown != nullptr)
        {
            children["unknown"] = unknown;
        }
        else
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown>();
            unknown->parent = this;
            children["unknown"] = unknown;
        }
        return children.at("unknown");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_children()
{
    if(children.find("known") == children.end())
    {
        if(known != nullptr)
        {
            children["known"] = known;
        }
    }

    if(children.find("unknown") == children.end())
    {
        if(unknown != nullptr)
        {
            children["unknown"] = unknown;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "unknown"; yang_parent_name = "snpa-state";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unknown' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::Known()
    :
    snpa{YType::str, "snpa"}
{
    yang_name = "known"; yang_parent_name = "snpa-state";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::~Known()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::has_data() const
{
    return snpa.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::has_operation() const
{
    return is_set(operation)
	|| is_set(snpa.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Known' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snpa.is_set || is_set(snpa.operation)) leaf_name_data.push_back(snpa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snpa")
    {
        snpa = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::MediaSpecificState()
    :
    clns_media_type{YType::enumeration, "clns-media-type"}
    	,
    clns_lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData>())
	,clns_p2p_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData>())
{
    clns_lan_data->parent = this;
    children["clns-lan-data"] = clns_lan_data;

    clns_p2p_data->parent = this;
    children["clns-p2p-data"] = clns_p2p_data;

    yang_name = "media-specific-state"; yang_parent_name = "clns-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::~MediaSpecificState()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::has_data() const
{
    return clns_media_type.is_set
	|| (clns_lan_data !=  nullptr && clns_lan_data->has_data())
	|| (clns_p2p_data !=  nullptr && clns_p2p_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::has_operation() const
{
    return is_set(operation)
	|| is_set(clns_media_type.operation)
	|| (clns_lan_data !=  nullptr && clns_lan_data->has_operation())
	|| (clns_p2p_data !=  nullptr && clns_p2p_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-specific-state";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MediaSpecificState' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clns_media_type.is_set || is_set(clns_media_type.operation)) leaf_name_data.push_back(clns_media_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clns-lan-data")
    {
        if(clns_lan_data != nullptr)
        {
            children["clns-lan-data"] = clns_lan_data;
        }
        else
        {
            clns_lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData>();
            clns_lan_data->parent = this;
            children["clns-lan-data"] = clns_lan_data;
        }
        return children.at("clns-lan-data");
    }

    if(child_yang_name == "clns-p2p-data")
    {
        if(clns_p2p_data != nullptr)
        {
            children["clns-p2p-data"] = clns_p2p_data;
        }
        else
        {
            clns_p2p_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData>();
            clns_p2p_data->parent = this;
            children["clns-p2p-data"] = clns_p2p_data;
        }
        return children.at("clns-p2p-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_children()
{
    if(children.find("clns-lan-data") == children.end())
    {
        if(clns_lan_data != nullptr)
        {
            children["clns-lan-data"] = clns_lan_data;
        }
    }

    if(children.find("clns-p2p-data") == children.end())
    {
        if(clns_p2p_data != nullptr)
        {
            children["clns-p2p-data"] = clns_p2p_data;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clns-media-type")
    {
        clns_media_type = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::ClnsLanData()
{
    yang_name = "clns-lan-data"; yang_parent_name = "media-specific-state";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::~ClnsLanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::has_data() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-lan-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClnsLanData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-area-data")
    {
        for(auto const & c : per_area_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(std::move(c));
        children[segment_path] = per_area_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_children()
{
    for (auto const & c : per_area_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
    	,
    multicast_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus>())
{
    multicast_status->parent = this;
    children["multicast-status"] = multicast_status;

    yang_name = "per-area-data"; yang_parent_name = "clns-lan-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::has_data() const
{
    return level.is_set
	|| (multicast_status !=  nullptr && multicast_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| (multicast_status !=  nullptr && multicast_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerAreaData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-status")
    {
        if(multicast_status != nullptr)
        {
            children["multicast-status"] = multicast_status;
        }
        else
        {
            multicast_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus>();
            multicast_status->parent = this;
            children["multicast-status"] = multicast_status;
        }
        return children.at("multicast-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_children()
{
    if(children.find("multicast-status") == children.end())
    {
        if(multicast_status != nullptr)
        {
            children["multicast-status"] = multicast_status;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::MulticastStatus()
    :
    status{YType::enumeration, "status"}
    	,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid>())
{
    invalid->parent = this;
    children["invalid"] = invalid;

    yang_name = "multicast-status"; yang_parent_name = "per-area-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::~MulticastStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::has_data() const
{
    return status.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "invalid")
    {
        if(invalid != nullptr)
        {
            children["invalid"] = invalid;
        }
        else
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid>();
            invalid->parent = this;
            children["invalid"] = invalid;
        }
        return children.at("invalid");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_children()
{
    if(children.find("invalid") == children.end())
    {
        if(invalid != nullptr)
        {
            children["invalid"] = invalid;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "invalid"; yang_parent_name = "multicast-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Invalid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::ClnsP2PData()
    :
    p2p_over_lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData>())
{
    p2p_over_lan_data->parent = this;
    children["p2p-over-lan-data"] = p2p_over_lan_data;

    yang_name = "clns-p2p-data"; yang_parent_name = "media-specific-state";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::~ClnsP2PData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::has_data() const
{
    return (p2p_over_lan_data !=  nullptr && p2p_over_lan_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::has_operation() const
{
    return is_set(operation)
	|| (p2p_over_lan_data !=  nullptr && p2p_over_lan_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-p2p-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClnsP2PData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2p-over-lan-data")
    {
        if(p2p_over_lan_data != nullptr)
        {
            children["p2p-over-lan-data"] = p2p_over_lan_data;
        }
        else
        {
            p2p_over_lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData>();
            p2p_over_lan_data->parent = this;
            children["p2p-over-lan-data"] = p2p_over_lan_data;
        }
        return children.at("p2p-over-lan-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::get_children()
{
    if(children.find("p2p-over-lan-data") == children.end())
    {
        if(p2p_over_lan_data != nullptr)
        {
            children["p2p-over-lan-data"] = p2p_over_lan_data;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::P2POverLanData()
    :
    multicast_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus>())
{
    multicast_status->parent = this;
    children["multicast-status"] = multicast_status;

    yang_name = "p2p-over-lan-data"; yang_parent_name = "clns-p2p-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::~P2POverLanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::has_data() const
{
    return (multicast_status !=  nullptr && multicast_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::has_operation() const
{
    return is_set(operation)
	|| (multicast_status !=  nullptr && multicast_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-over-lan-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2POverLanData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-status")
    {
        if(multicast_status != nullptr)
        {
            children["multicast-status"] = multicast_status;
        }
        else
        {
            multicast_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus>();
            multicast_status->parent = this;
            children["multicast-status"] = multicast_status;
        }
        return children.at("multicast-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::get_children()
{
    if(children.find("multicast-status") == children.end())
    {
        if(multicast_status != nullptr)
        {
            children["multicast-status"] = multicast_status;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::MulticastStatus()
    :
    status{YType::enumeration, "status"}
    	,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid>())
{
    invalid->parent = this;
    children["invalid"] = invalid;

    yang_name = "multicast-status"; yang_parent_name = "p2p-over-lan-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::~MulticastStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::has_data() const
{
    return status.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "invalid")
    {
        if(invalid != nullptr)
        {
            children["invalid"] = invalid;
        }
        else
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid>();
            invalid->parent = this;
            children["invalid"] = invalid;
        }
        return children.at("invalid");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::get_children()
{
    if(children.find("invalid") == children.end())
    {
        if(invalid != nullptr)
        {
            children["invalid"] = invalid;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "invalid"; yang_parent_name = "multicast-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Invalid' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2PData::P2POverLanData::MulticastStatus::Invalid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::PerAreaData()
    :
    adjacency_count{YType::uint32, "adjacency-count"},
    level{YType::enumeration, "level"},
    lsp_pacing_interval{YType::uint32, "lsp-pacing-interval"},
    psnp_transmit_queue_size{YType::uint32, "psnp-transmit-queue-size"}
    	,
    lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData>())
{
    lan_data->parent = this;
    children["lan-data"] = lan_data;

    yang_name = "per-area-data"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_data() const
{
    return adjacency_count.is_set
	|| level.is_set
	|| lsp_pacing_interval.is_set
	|| psnp_transmit_queue_size.is_set
	|| (lan_data !=  nullptr && lan_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_count.operation)
	|| is_set(level.operation)
	|| is_set(lsp_pacing_interval.operation)
	|| is_set(psnp_transmit_queue_size.operation)
	|| (lan_data !=  nullptr && lan_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerAreaData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_count.is_set || is_set(adjacency_count.operation)) leaf_name_data.push_back(adjacency_count.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (lsp_pacing_interval.is_set || is_set(lsp_pacing_interval.operation)) leaf_name_data.push_back(lsp_pacing_interval.get_name_leafdata());
    if (psnp_transmit_queue_size.is_set || is_set(psnp_transmit_queue_size.operation)) leaf_name_data.push_back(psnp_transmit_queue_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lan-data")
    {
        if(lan_data != nullptr)
        {
            children["lan-data"] = lan_data;
        }
        else
        {
            lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData>();
            lan_data->parent = this;
            children["lan-data"] = lan_data;
        }
        return children.at("lan-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_children()
{
    if(children.find("lan-data") == children.end())
    {
        if(lan_data != nullptr)
        {
            children["lan-data"] = lan_data;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-count")
    {
        adjacency_count = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval = value;
    }
    if(value_path == "psnp-transmit-queue-size")
    {
        psnp_transmit_queue_size = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::LanData()
    :
    are_we_dis{YType::boolean, "are-we-dis"},
    circuit_lan_id{YType::str, "circuit-lan-id"},
    dispriority{YType::uint8, "dispriority"},
    interface_priority{YType::uint8, "interface-priority"},
    time_until_next_iih{YType::uint32, "time-until-next-iih"}
{
    yang_name = "lan-data"; yang_parent_name = "per-area-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::~LanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_data() const
{
    return are_we_dis.is_set
	|| circuit_lan_id.is_set
	|| dispriority.is_set
	|| interface_priority.is_set
	|| time_until_next_iih.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_operation() const
{
    return is_set(operation)
	|| is_set(are_we_dis.operation)
	|| is_set(circuit_lan_id.operation)
	|| is_set(dispriority.operation)
	|| is_set(interface_priority.operation)
	|| is_set(time_until_next_iih.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LanData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_we_dis.is_set || is_set(are_we_dis.operation)) leaf_name_data.push_back(are_we_dis.get_name_leafdata());
    if (circuit_lan_id.is_set || is_set(circuit_lan_id.operation)) leaf_name_data.push_back(circuit_lan_id.get_name_leafdata());
    if (dispriority.is_set || is_set(dispriority.operation)) leaf_name_data.push_back(dispriority.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.operation)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (time_until_next_iih.is_set || is_set(time_until_next_iih.operation)) leaf_name_data.push_back(time_until_next_iih.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "are-we-dis")
    {
        are_we_dis = value;
    }
    if(value_path == "circuit-lan-id")
    {
        circuit_lan_id = value;
    }
    if(value_path == "dispriority")
    {
        dispriority = value;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
    }
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::PerTopologyData()
    :
    status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status>())
	,topology_id(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId>())
{
    status->parent = this;
    children["status"] = status;

    topology_id->parent = this;
    children["topology-id"] = topology_id;

    yang_name = "per-topology-data"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::~PerTopologyData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_data() const
{
    return (status !=  nullptr && status->has_data())
	|| (topology_id !=  nullptr && topology_id->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_operation() const
{
    return is_set(operation)
	|| (status !=  nullptr && status->has_operation())
	|| (topology_id !=  nullptr && topology_id->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerTopologyData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status>();
            status->parent = this;
            children["status"] = status;
        }
        return children.at("status");
    }

    if(child_yang_name == "topology-id")
    {
        if(topology_id != nullptr)
        {
            children["topology-id"] = topology_id;
        }
        else
        {
            topology_id = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId>();
            topology_id->parent = this;
            children["topology-id"] = topology_id;
        }
        return children.at("topology-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_children()
{
    if(children.find("status") == children.end())
    {
        if(status != nullptr)
        {
            children["status"] = status;
        }
    }

    if(children.find("topology-id") == children.end())
    {
        if(topology_id != nullptr)
        {
            children["topology-id"] = topology_id;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::TopologyId()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "topology-id"; yang_parent_name = "per-topology-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::~TopologyId()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-id";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyId' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Status()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled>())
	,enabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_>())
{
    disabled->parent = this;
    children["disabled"] = disabled;

    enabled->parent = this;
    children["enabled"] = enabled;

    yang_name = "status"; yang_parent_name = "per-topology-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::~Status()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data())
	|| (enabled !=  nullptr && enabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (disabled !=  nullptr && disabled->has_operation())
	|| (enabled !=  nullptr && enabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "disabled")
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
        else
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled>();
            disabled->parent = this;
            children["disabled"] = disabled;
        }
        return children.at("disabled");
    }

    if(child_yang_name == "enabled")
    {
        if(enabled != nullptr)
        {
            children["enabled"] = enabled;
        }
        else
        {
            enabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_>();
            enabled->parent = this;
            children["enabled"] = enabled;
        }
        return children.at("enabled");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_children()
{
    if(children.find("disabled") == children.end())
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
    }

    if(children.find("enabled") == children.end())
    {
        if(enabled != nullptr)
        {
            children["enabled"] = enabled;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Enabled_()
    :
    ld_pv6_sync_status{YType::boolean, "ld-pv6-sync-status"},
    ldp_sync_status{YType::boolean, "ldp-sync-status"},
    level1_lkgp_configured{YType::boolean, "level1-lkgp-configured"},
    level1_metric{YType::uint32, "level1-metric"},
    level1_offset_metric{YType::uint32, "level1-offset-metric"},
    level1_weight{YType::uint32, "level1-weight"},
    level1ldp_sync_enabled{YType::boolean, "level1ldp-sync-enabled"},
    level1pp_configured{YType::boolean, "level1pp-configured"},
    level1pp_metric{YType::uint32, "level1pp-metric"},
    level2_lkgp_configured{YType::boolean, "level2-lkgp-configured"},
    level2_metric{YType::uint32, "level2-metric"},
    level2_offset_metric{YType::uint32, "level2-offset-metric"},
    level2_weight{YType::uint32, "level2-weight"},
    level2ldp_sync_enabled{YType::boolean, "level2ldp-sync-enabled"},
    level2pp_configured{YType::boolean, "level2pp-configured"},
    level2pp_metric{YType::uint32, "level2pp-metric"},
    max_bkp_label_supported{YType::uint8, "max-bkp-label-supported"},
    max_label_supported{YType::uint8, "max-label-supported"},
    max_srte_label_supported{YType::uint8, "max-srte-label-supported"}
    	,
    adjacency_form_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus>())
	,adv_prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus>())
{
    adjacency_form_status->parent = this;
    children["adjacency-form-status"] = adjacency_form_status;

    adv_prefix_status->parent = this;
    children["adv-prefix-status"] = adv_prefix_status;

    yang_name = "enabled"; yang_parent_name = "status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::~Enabled_()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_data() const
{
    return ld_pv6_sync_status.is_set
	|| ldp_sync_status.is_set
	|| level1_lkgp_configured.is_set
	|| level1_metric.is_set
	|| level1_offset_metric.is_set
	|| level1_weight.is_set
	|| level1ldp_sync_enabled.is_set
	|| level1pp_configured.is_set
	|| level1pp_metric.is_set
	|| level2_lkgp_configured.is_set
	|| level2_metric.is_set
	|| level2_offset_metric.is_set
	|| level2_weight.is_set
	|| level2ldp_sync_enabled.is_set
	|| level2pp_configured.is_set
	|| level2pp_metric.is_set
	|| max_bkp_label_supported.is_set
	|| max_label_supported.is_set
	|| max_srte_label_supported.is_set
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_data())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_operation() const
{
    return is_set(operation)
	|| is_set(ld_pv6_sync_status.operation)
	|| is_set(ldp_sync_status.operation)
	|| is_set(level1_lkgp_configured.operation)
	|| is_set(level1_metric.operation)
	|| is_set(level1_offset_metric.operation)
	|| is_set(level1_weight.operation)
	|| is_set(level1ldp_sync_enabled.operation)
	|| is_set(level1pp_configured.operation)
	|| is_set(level1pp_metric.operation)
	|| is_set(level2_lkgp_configured.operation)
	|| is_set(level2_metric.operation)
	|| is_set(level2_offset_metric.operation)
	|| is_set(level2_weight.operation)
	|| is_set(level2ldp_sync_enabled.operation)
	|| is_set(level2pp_configured.operation)
	|| is_set(level2pp_metric.operation)
	|| is_set(max_bkp_label_supported.operation)
	|| is_set(max_label_supported.operation)
	|| is_set(max_srte_label_supported.operation)
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_operation())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enabled";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Enabled_' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ld_pv6_sync_status.is_set || is_set(ld_pv6_sync_status.operation)) leaf_name_data.push_back(ld_pv6_sync_status.get_name_leafdata());
    if (ldp_sync_status.is_set || is_set(ldp_sync_status.operation)) leaf_name_data.push_back(ldp_sync_status.get_name_leafdata());
    if (level1_lkgp_configured.is_set || is_set(level1_lkgp_configured.operation)) leaf_name_data.push_back(level1_lkgp_configured.get_name_leafdata());
    if (level1_metric.is_set || is_set(level1_metric.operation)) leaf_name_data.push_back(level1_metric.get_name_leafdata());
    if (level1_offset_metric.is_set || is_set(level1_offset_metric.operation)) leaf_name_data.push_back(level1_offset_metric.get_name_leafdata());
    if (level1_weight.is_set || is_set(level1_weight.operation)) leaf_name_data.push_back(level1_weight.get_name_leafdata());
    if (level1ldp_sync_enabled.is_set || is_set(level1ldp_sync_enabled.operation)) leaf_name_data.push_back(level1ldp_sync_enabled.get_name_leafdata());
    if (level1pp_configured.is_set || is_set(level1pp_configured.operation)) leaf_name_data.push_back(level1pp_configured.get_name_leafdata());
    if (level1pp_metric.is_set || is_set(level1pp_metric.operation)) leaf_name_data.push_back(level1pp_metric.get_name_leafdata());
    if (level2_lkgp_configured.is_set || is_set(level2_lkgp_configured.operation)) leaf_name_data.push_back(level2_lkgp_configured.get_name_leafdata());
    if (level2_metric.is_set || is_set(level2_metric.operation)) leaf_name_data.push_back(level2_metric.get_name_leafdata());
    if (level2_offset_metric.is_set || is_set(level2_offset_metric.operation)) leaf_name_data.push_back(level2_offset_metric.get_name_leafdata());
    if (level2_weight.is_set || is_set(level2_weight.operation)) leaf_name_data.push_back(level2_weight.get_name_leafdata());
    if (level2ldp_sync_enabled.is_set || is_set(level2ldp_sync_enabled.operation)) leaf_name_data.push_back(level2ldp_sync_enabled.get_name_leafdata());
    if (level2pp_configured.is_set || is_set(level2pp_configured.operation)) leaf_name_data.push_back(level2pp_configured.get_name_leafdata());
    if (level2pp_metric.is_set || is_set(level2pp_metric.operation)) leaf_name_data.push_back(level2pp_metric.get_name_leafdata());
    if (max_bkp_label_supported.is_set || is_set(max_bkp_label_supported.operation)) leaf_name_data.push_back(max_bkp_label_supported.get_name_leafdata());
    if (max_label_supported.is_set || is_set(max_label_supported.operation)) leaf_name_data.push_back(max_label_supported.get_name_leafdata());
    if (max_srte_label_supported.is_set || is_set(max_srte_label_supported.operation)) leaf_name_data.push_back(max_srte_label_supported.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-form-status")
    {
        if(adjacency_form_status != nullptr)
        {
            children["adjacency-form-status"] = adjacency_form_status;
        }
        else
        {
            adjacency_form_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus>();
            adjacency_form_status->parent = this;
            children["adjacency-form-status"] = adjacency_form_status;
        }
        return children.at("adjacency-form-status");
    }

    if(child_yang_name == "adv-prefix-status")
    {
        if(adv_prefix_status != nullptr)
        {
            children["adv-prefix-status"] = adv_prefix_status;
        }
        else
        {
            adv_prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus>();
            adv_prefix_status->parent = this;
            children["adv-prefix-status"] = adv_prefix_status;
        }
        return children.at("adv-prefix-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_children()
{
    if(children.find("adjacency-form-status") == children.end())
    {
        if(adjacency_form_status != nullptr)
        {
            children["adjacency-form-status"] = adjacency_form_status;
        }
    }

    if(children.find("adv-prefix-status") == children.end())
    {
        if(adv_prefix_status != nullptr)
        {
            children["adv-prefix-status"] = adv_prefix_status;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ld-pv6-sync-status")
    {
        ld_pv6_sync_status = value;
    }
    if(value_path == "ldp-sync-status")
    {
        ldp_sync_status = value;
    }
    if(value_path == "level1-lkgp-configured")
    {
        level1_lkgp_configured = value;
    }
    if(value_path == "level1-metric")
    {
        level1_metric = value;
    }
    if(value_path == "level1-offset-metric")
    {
        level1_offset_metric = value;
    }
    if(value_path == "level1-weight")
    {
        level1_weight = value;
    }
    if(value_path == "level1ldp-sync-enabled")
    {
        level1ldp_sync_enabled = value;
    }
    if(value_path == "level1pp-configured")
    {
        level1pp_configured = value;
    }
    if(value_path == "level1pp-metric")
    {
        level1pp_metric = value;
    }
    if(value_path == "level2-lkgp-configured")
    {
        level2_lkgp_configured = value;
    }
    if(value_path == "level2-metric")
    {
        level2_metric = value;
    }
    if(value_path == "level2-offset-metric")
    {
        level2_offset_metric = value;
    }
    if(value_path == "level2-weight")
    {
        level2_weight = value;
    }
    if(value_path == "level2ldp-sync-enabled")
    {
        level2ldp_sync_enabled = value;
    }
    if(value_path == "level2pp-configured")
    {
        level2pp_configured = value;
    }
    if(value_path == "level2pp-metric")
    {
        level2pp_metric = value;
    }
    if(value_path == "max-bkp-label-supported")
    {
        max_bkp_label_supported = value;
    }
    if(value_path == "max-label-supported")
    {
        max_label_supported = value;
    }
    if(value_path == "max-srte-label-supported")
    {
        max_srte_label_supported = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::AdjacencyFormStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled>())
{
    disabled->parent = this;
    children["disabled"] = disabled;

    yang_name = "adjacency-form-status"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::~AdjacencyFormStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-form-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyFormStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "disabled")
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
        else
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled>();
            disabled->parent = this;
            children["disabled"] = disabled;
        }
        return children.at("disabled");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_children()
{
    if(children.find("disabled") == children.end())
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "adjacency-form-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::AdvPrefixStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled>())
{
    disabled->parent = this;
    children["disabled"] = disabled;

    yang_name = "adv-prefix-status"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::~AdvPrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-prefix-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvPrefixStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "disabled")
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
        else
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled>();
            disabled->parent = this;
            children["disabled"] = disabled;
        }
        return children.at("disabled");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_children()
{
    if(children.find("disabled") == children.end())
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "adv-prefix-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::PerAddressFamilyData()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    af_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus>())
{
    af_status->parent = this;
    children["af-status"] = af_status;

    yang_name = "per-address-family-data"; yang_parent_name = "enabled";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::~PerAddressFamilyData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_data() const
{
    return af_name.is_set
	|| (af_status !=  nullptr && af_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (af_status !=  nullptr && af_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-address-family-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerAddressFamilyData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af-status")
    {
        if(af_status != nullptr)
        {
            children["af-status"] = af_status;
        }
        else
        {
            af_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus>();
            af_status->parent = this;
            children["af-status"] = af_status;
        }
        return children.at("af-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_children()
{
    if(children.find("af-status") == children.end())
    {
        if(af_status != nullptr)
        {
            children["af-status"] = af_status;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfStatus()
    :
    status{YType::enumeration, "status"}
    	,
    af_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData>())
	,disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled>())
{
    af_data->parent = this;
    children["af-data"] = af_data;

    disabled->parent = this;
    children["disabled"] = disabled;

    yang_name = "af-status"; yang_parent_name = "per-address-family-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::~AfStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_data() const
{
    return status.is_set
	|| (af_data !=  nullptr && af_data->has_data())
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (af_data !=  nullptr && af_data->has_operation())
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af-data")
    {
        if(af_data != nullptr)
        {
            children["af-data"] = af_data;
        }
        else
        {
            af_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData>();
            af_data->parent = this;
            children["af-data"] = af_data;
        }
        return children.at("af-data");
    }

    if(child_yang_name == "disabled")
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
        else
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled>();
            disabled->parent = this;
            children["disabled"] = disabled;
        }
        return children.at("disabled");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_children()
{
    if(children.find("af-data") == children.end())
    {
        if(af_data != nullptr)
        {
            children["af-data"] = af_data;
        }
    }

    if(children.find("disabled") == children.end())
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "af-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::AfData()
    :
    forwarding_address_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus>())
	,prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus>())
	,protocol_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus>())
{
    forwarding_address_status->parent = this;
    children["forwarding-address-status"] = forwarding_address_status;

    prefix_status->parent = this;
    children["prefix-status"] = prefix_status;

    protocol_status->parent = this;
    children["protocol-status"] = protocol_status;

    yang_name = "af-data"; yang_parent_name = "af-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::~AfData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_data() const
{
    return (forwarding_address_status !=  nullptr && forwarding_address_status->has_data())
	|| (prefix_status !=  nullptr && prefix_status->has_data())
	|| (protocol_status !=  nullptr && protocol_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_operation() const
{
    return is_set(operation)
	|| (forwarding_address_status !=  nullptr && forwarding_address_status->has_operation())
	|| (prefix_status !=  nullptr && prefix_status->has_operation())
	|| (protocol_status !=  nullptr && protocol_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "forwarding-address-status")
    {
        if(forwarding_address_status != nullptr)
        {
            children["forwarding-address-status"] = forwarding_address_status;
        }
        else
        {
            forwarding_address_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus>();
            forwarding_address_status->parent = this;
            children["forwarding-address-status"] = forwarding_address_status;
        }
        return children.at("forwarding-address-status");
    }

    if(child_yang_name == "prefix-status")
    {
        if(prefix_status != nullptr)
        {
            children["prefix-status"] = prefix_status;
        }
        else
        {
            prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus>();
            prefix_status->parent = this;
            children["prefix-status"] = prefix_status;
        }
        return children.at("prefix-status");
    }

    if(child_yang_name == "protocol-status")
    {
        if(protocol_status != nullptr)
        {
            children["protocol-status"] = protocol_status;
        }
        else
        {
            protocol_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus>();
            protocol_status->parent = this;
            children["protocol-status"] = protocol_status;
        }
        return children.at("protocol-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_children()
{
    if(children.find("forwarding-address-status") == children.end())
    {
        if(forwarding_address_status != nullptr)
        {
            children["forwarding-address-status"] = forwarding_address_status;
        }
    }

    if(children.find("prefix-status") == children.end())
    {
        if(prefix_status != nullptr)
        {
            children["prefix-status"] = prefix_status;
        }
    }

    if(children.find("protocol-status") == children.end())
    {
        if(protocol_status != nullptr)
        {
            children["protocol-status"] = protocol_status;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::ProtocolStatus()
    :
    status{YType::enumeration, "status"}
    	,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled>())
{
    disabled->parent = this;
    children["disabled"] = disabled;

    yang_name = "protocol-status"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::~ProtocolStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_data() const
{
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "disabled")
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
        else
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled>();
            disabled->parent = this;
            children["disabled"] = disabled;
        }
        return children.at("disabled");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_children()
{
    if(children.find("disabled") == children.end())
    {
        if(disabled != nullptr)
        {
            children["disabled"] = disabled;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "disabled"; yang_parent_name = "protocol-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Disabled' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressStatus()
    :
    status{YType::enumeration, "status"}
    	,
    forwarding_address_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData>())
	,unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown>())
{
    forwarding_address_data->parent = this;
    children["forwarding-address-data"] = forwarding_address_data;

    unknown->parent = this;
    children["unknown"] = unknown;

    yang_name = "forwarding-address-status"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::~ForwardingAddressStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_data() const
{
    return status.is_set
	|| (forwarding_address_data !=  nullptr && forwarding_address_data->has_data())
	|| (unknown !=  nullptr && unknown->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (forwarding_address_data !=  nullptr && forwarding_address_data->has_operation())
	|| (unknown !=  nullptr && unknown->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingAddressStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "forwarding-address-data")
    {
        if(forwarding_address_data != nullptr)
        {
            children["forwarding-address-data"] = forwarding_address_data;
        }
        else
        {
            forwarding_address_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData>();
            forwarding_address_data->parent = this;
            children["forwarding-address-data"] = forwarding_address_data;
        }
        return children.at("forwarding-address-data");
    }

    if(child_yang_name == "unknown")
    {
        if(unknown != nullptr)
        {
            children["unknown"] = unknown;
        }
        else
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown>();
            unknown->parent = this;
            children["unknown"] = unknown;
        }
        return children.at("unknown");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_children()
{
    if(children.find("forwarding-address-data") == children.end())
    {
        if(forwarding_address_data != nullptr)
        {
            children["forwarding-address-data"] = forwarding_address_data;
        }
    }

    if(children.find("unknown") == children.end())
    {
        if(unknown != nullptr)
        {
            children["unknown"] = unknown;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "unknown"; yang_parent_name = "forwarding-address-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unknown' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddressData()
    :
    unnumbered_interface_name{YType::str, "unnumbered-interface-name"}
{
    yang_name = "forwarding-address-data"; yang_parent_name = "forwarding-address-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::~ForwardingAddressData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_data() const
{
    for (std::size_t index=0; index<forwarding_address.size(); index++)
    {
        if(forwarding_address[index]->has_data())
            return true;
    }
    return unnumbered_interface_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_operation() const
{
    for (std::size_t index=0; index<forwarding_address.size(); index++)
    {
        if(forwarding_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(unnumbered_interface_name.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingAddressData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered_interface_name.is_set || is_set(unnumbered_interface_name.operation)) leaf_name_data.push_back(unnumbered_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "forwarding-address")
    {
        for(auto const & c : forwarding_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress>();
        c->parent = this;
        forwarding_address.push_back(std::move(c));
        children[segment_path] = forwarding_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_children()
{
    for (auto const & c : forwarding_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::ForwardingAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "forwarding-address"; yang_parent_name = "forwarding-address-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::~ForwardingAddress()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingAddress' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixStatus()
    :
    status{YType::enumeration, "status"}
    	,
    prefix_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData>())
	,unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown>())
{
    prefix_data->parent = this;
    children["prefix-data"] = prefix_data;

    unknown->parent = this;
    children["unknown"] = unknown;

    yang_name = "prefix-status"; yang_parent_name = "af-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::~PrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_data() const
{
    return status.is_set
	|| (prefix_data !=  nullptr && prefix_data->has_data())
	|| (unknown !=  nullptr && unknown->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (prefix_data !=  nullptr && prefix_data->has_operation())
	|| (unknown !=  nullptr && unknown->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-status";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixStatus' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-data")
    {
        if(prefix_data != nullptr)
        {
            children["prefix-data"] = prefix_data;
        }
        else
        {
            prefix_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData>();
            prefix_data->parent = this;
            children["prefix-data"] = prefix_data;
        }
        return children.at("prefix-data");
    }

    if(child_yang_name == "unknown")
    {
        if(unknown != nullptr)
        {
            children["unknown"] = unknown;
        }
        else
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown>();
            unknown->parent = this;
            children["unknown"] = unknown;
        }
        return children.at("unknown");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_children()
{
    if(children.find("prefix-data") == children.end())
    {
        if(prefix_data != nullptr)
        {
            children["prefix-data"] = prefix_data;
        }
    }

    if(children.find("unknown") == children.end())
    {
        if(unknown != nullptr)
        {
            children["unknown"] = unknown;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{
    yang_name = "unknown"; yang_parent_name = "prefix-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_data() const
{
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_operation() const
{
    return is_set(operation)
	|| is_set(reason_code.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unknown' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.operation)) leaf_name_data.push_back(reason_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::PrefixData()
    :
    is_unnumbered{YType::boolean, "is-unnumbered"}
{
    yang_name = "prefix-data"; yang_parent_name = "prefix-status";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::~PrefixData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_data() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return is_unnumbered.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_operation() const
{
    for (std::size_t index=0; index<prefix.size(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_unnumbered.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_unnumbered.is_set || is_set(is_unnumbered.operation)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        for(auto const & c : prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix>();
        c->parent = this;
        prefix.push_back(std::move(c));
        children[segment_path] = prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_children()
{
    for (auto const & c : prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    ipv4(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4>())
	,ipv6(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    yang_name = "prefix"; yang_parent_name = "prefix-data";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::~Prefix()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_data() const
{
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4 = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4>();
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
            ipv6 = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_children()
{
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

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::Ipv4()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv4"; yang_parent_name = "prefix";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::Ipv6()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "ipv6"; yang_parent_name = "prefix";
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_children()
{
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacencies()
{
    yang_name = "checkpoint-adjacencies"; yang_parent_name = "instance";
}

Isis::Instances::Instance::CheckpointAdjacencies::~CheckpointAdjacencies()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_data() const
{
    for (std::size_t index=0; index<checkpoint_adjacency.size(); index++)
    {
        if(checkpoint_adjacency[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_adjacency.size(); index++)
    {
        if(checkpoint_adjacency[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacencies";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::CheckpointAdjacencies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointAdjacencies' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointAdjacencies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "checkpoint-adjacency")
    {
        for(auto const & c : checkpoint_adjacency)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency>();
        c->parent = this;
        checkpoint_adjacency.push_back(std::move(c));
        children[segment_path] = checkpoint_adjacency.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::CheckpointAdjacencies::get_children()
{
    for (auto const & c : checkpoint_adjacency)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacency()
    :
    checkpoint_adjacency_circuit_number{YType::uint8, "checkpoint-adjacency-circuit-number"},
    checkpoint_adjacency_holdtime{YType::uint16, "checkpoint-adjacency-holdtime"},
    checkpoint_adjacency_interface{YType::str, "checkpoint-adjacency-interface"},
    checkpoint_adjacency_lan_priority{YType::uint8, "checkpoint-adjacency-lan-priority"},
    checkpoint_adjacency_level{YType::enumeration, "checkpoint-adjacency-level"},
    checkpoint_adjacency_object_id{YType::uint32, "checkpoint-adjacency-object-id"},
    checkpoint_adjacency_snpa{YType::str, "checkpoint-adjacency-snpa"},
    checkpoint_adjacency_system_id{YType::str, "checkpoint-adjacency-system-id"},
    interface_name{YType::str, "interface-name"},
    level{YType::enumeration, "level"},
    system_id{YType::str, "system-id"}
{
    yang_name = "checkpoint-adjacency"; yang_parent_name = "checkpoint-adjacencies";
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::~CheckpointAdjacency()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_data() const
{
    for (std::size_t index=0; index<checkpoint_adjacency_per_address_family_next_hop.size(); index++)
    {
        if(checkpoint_adjacency_per_address_family_next_hop[index]->has_data())
            return true;
    }
    return checkpoint_adjacency_circuit_number.is_set
	|| checkpoint_adjacency_holdtime.is_set
	|| checkpoint_adjacency_interface.is_set
	|| checkpoint_adjacency_lan_priority.is_set
	|| checkpoint_adjacency_level.is_set
	|| checkpoint_adjacency_object_id.is_set
	|| checkpoint_adjacency_snpa.is_set
	|| checkpoint_adjacency_system_id.is_set
	|| interface_name.is_set
	|| level.is_set
	|| system_id.is_set;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_adjacency_per_address_family_next_hop.size(); index++)
    {
        if(checkpoint_adjacency_per_address_family_next_hop[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(checkpoint_adjacency_circuit_number.operation)
	|| is_set(checkpoint_adjacency_holdtime.operation)
	|| is_set(checkpoint_adjacency_interface.operation)
	|| is_set(checkpoint_adjacency_lan_priority.operation)
	|| is_set(checkpoint_adjacency_level.operation)
	|| is_set(checkpoint_adjacency_object_id.operation)
	|| is_set(checkpoint_adjacency_snpa.operation)
	|| is_set(checkpoint_adjacency_system_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(level.operation)
	|| is_set(system_id.operation);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacency";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointAdjacency' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checkpoint_adjacency_circuit_number.is_set || is_set(checkpoint_adjacency_circuit_number.operation)) leaf_name_data.push_back(checkpoint_adjacency_circuit_number.get_name_leafdata());
    if (checkpoint_adjacency_holdtime.is_set || is_set(checkpoint_adjacency_holdtime.operation)) leaf_name_data.push_back(checkpoint_adjacency_holdtime.get_name_leafdata());
    if (checkpoint_adjacency_interface.is_set || is_set(checkpoint_adjacency_interface.operation)) leaf_name_data.push_back(checkpoint_adjacency_interface.get_name_leafdata());
    if (checkpoint_adjacency_lan_priority.is_set || is_set(checkpoint_adjacency_lan_priority.operation)) leaf_name_data.push_back(checkpoint_adjacency_lan_priority.get_name_leafdata());
    if (checkpoint_adjacency_level.is_set || is_set(checkpoint_adjacency_level.operation)) leaf_name_data.push_back(checkpoint_adjacency_level.get_name_leafdata());
    if (checkpoint_adjacency_object_id.is_set || is_set(checkpoint_adjacency_object_id.operation)) leaf_name_data.push_back(checkpoint_adjacency_object_id.get_name_leafdata());
    if (checkpoint_adjacency_snpa.is_set || is_set(checkpoint_adjacency_snpa.operation)) leaf_name_data.push_back(checkpoint_adjacency_snpa.get_name_leafdata());
    if (checkpoint_adjacency_system_id.is_set || is_set(checkpoint_adjacency_system_id.operation)) leaf_name_data.push_back(checkpoint_adjacency_system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "checkpoint-adjacency-per-address-family-next-hop")
    {
        for(auto const & c : checkpoint_adjacency_per_address_family_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop>();
        c->parent = this;
        checkpoint_adjacency_per_address_family_next_hop.push_back(std::move(c));
        children[segment_path] = checkpoint_adjacency_per_address_family_next_hop.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_children()
{
    for (auto const & c : checkpoint_adjacency_per_address_family_next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "checkpoint-adjacency-circuit-number")
    {
        checkpoint_adjacency_circuit_number = value;
    }
    if(value_path == "checkpoint-adjacency-holdtime")
    {
        checkpoint_adjacency_holdtime = value;
    }
    if(value_path == "checkpoint-adjacency-interface")
    {
        checkpoint_adjacency_interface = value;
    }
    if(value_path == "checkpoint-adjacency-lan-priority")
    {
        checkpoint_adjacency_lan_priority = value;
    }
    if(value_path == "checkpoint-adjacency-level")
    {
        checkpoint_adjacency_level = value;
    }
    if(value_path == "checkpoint-adjacency-object-id")
    {
        checkpoint_adjacency_object_id = value;
    }
    if(value_path == "checkpoint-adjacency-snpa")
    {
        checkpoint_adjacency_snpa = value;
    }
    if(value_path == "checkpoint-adjacency-system-id")
    {
        checkpoint_adjacency_system_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::CheckpointAdjacencyPerAddressFamilyNextHop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "checkpoint-adjacency-per-address-family-next-hop"; yang_parent_name = "checkpoint-adjacency";
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::~CheckpointAdjacencyPerAddressFamilyNextHop()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacency-per-address-family-next-hop";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointAdjacencyPerAddressFamilyNextHop' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_children()
{
    return children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Isis::Instances::Instance::Srms::Srms()
    :
    policy(std::make_shared<Isis::Instances::Instance::Srms::Policy>())
{
    policy->parent = this;
    children["policy"] = policy;

    yang_name = "srms"; yang_parent_name = "instance";
}

Isis::Instances::Instance::Srms::~Srms()
{
}

bool Isis::Instances::Instance::Srms::has_data() const
{
    return (policy !=  nullptr && policy->has_data());
}

bool Isis::Instances::Instance::Srms::has_operation() const
{
    return is_set(operation)
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Isis::Instances::Instance::Srms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srms";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srms' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy")
    {
        if(policy != nullptr)
        {
            children["policy"] = policy;
        }
        else
        {
            policy = std::make_shared<Isis::Instances::Instance::Srms::Policy>();
            policy->parent = this;
            children["policy"] = policy;
        }
        return children.at("policy");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::get_children()
{
    if(children.find("policy") == children.end())
    {
        if(policy != nullptr)
        {
            children["policy"] = policy;
        }
    }

    return children;
}

void Isis::Instances::Instance::Srms::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Srms::Policy::Policy()
    :
    policy_ipv4(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4>())
	,policy_ipv6(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6>())
{
    policy_ipv4->parent = this;
    children["policy-ipv4"] = policy_ipv4;

    policy_ipv6->parent = this;
    children["policy-ipv6"] = policy_ipv6;

    yang_name = "policy"; yang_parent_name = "srms";
}

Isis::Instances::Instance::Srms::Policy::~Policy()
{
}

bool Isis::Instances::Instance::Srms::Policy::has_data() const
{
    return (policy_ipv4 !=  nullptr && policy_ipv4->has_data())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::has_operation() const
{
    return is_set(operation)
	|| (policy_ipv4 !=  nullptr && policy_ipv4->has_operation())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Policy' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-ipv4")
    {
        if(policy_ipv4 != nullptr)
        {
            children["policy-ipv4"] = policy_ipv4;
        }
        else
        {
            policy_ipv4 = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4>();
            policy_ipv4->parent = this;
            children["policy-ipv4"] = policy_ipv4;
        }
        return children.at("policy-ipv4");
    }

    if(child_yang_name == "policy-ipv6")
    {
        if(policy_ipv6 != nullptr)
        {
            children["policy-ipv6"] = policy_ipv6;
        }
        else
        {
            policy_ipv6 = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6>();
            policy_ipv6->parent = this;
            children["policy-ipv6"] = policy_ipv6;
        }
        return children.at("policy-ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::get_children()
{
    if(children.find("policy-ipv4") == children.end())
    {
        if(policy_ipv4 != nullptr)
        {
            children["policy-ipv4"] = policy_ipv4;
        }
    }

    if(children.find("policy-ipv6") == children.end())
    {
        if(policy_ipv6 != nullptr)
        {
            children["policy-ipv6"] = policy_ipv6;
        }
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4()
    :
    policy_ipv4_active(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active>())
	,policy_ipv4_backup(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>())
{
    policy_ipv4_active->parent = this;
    children["policy-ipv4-active"] = policy_ipv4_active;

    policy_ipv4_backup->parent = this;
    children["policy-ipv4-backup"] = policy_ipv4_backup;

    yang_name = "policy-ipv4"; yang_parent_name = "policy";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::~PolicyIpv4()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_data() const
{
    return (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_data())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_operation() const
{
    return is_set(operation)
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_operation())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv4' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-ipv4-active")
    {
        if(policy_ipv4_active != nullptr)
        {
            children["policy-ipv4-active"] = policy_ipv4_active;
        }
        else
        {
            policy_ipv4_active = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active>();
            policy_ipv4_active->parent = this;
            children["policy-ipv4-active"] = policy_ipv4_active;
        }
        return children.at("policy-ipv4-active");
    }

    if(child_yang_name == "policy-ipv4-backup")
    {
        if(policy_ipv4_backup != nullptr)
        {
            children["policy-ipv4-backup"] = policy_ipv4_backup;
        }
        else
        {
            policy_ipv4_backup = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>();
            policy_ipv4_backup->parent = this;
            children["policy-ipv4-backup"] = policy_ipv4_backup;
        }
        return children.at("policy-ipv4-backup");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_children()
{
    if(children.find("policy-ipv4-active") == children.end())
    {
        if(policy_ipv4_active != nullptr)
        {
            children["policy-ipv4-active"] = policy_ipv4_active;
        }
    }

    if(children.find("policy-ipv4-backup") == children.end())
    {
        if(policy_ipv4_backup != nullptr)
        {
            children["policy-ipv4-backup"] = policy_ipv4_backup;
        }
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyIpv4Active()
{
    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-active";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv4Active' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(std::move(c));
        children[segment_path] = policy_mi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_children()
{
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>())
{
    addr->parent = this;
    children["addr"] = addr;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-active";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_operation() const
{
    return is_set(operation)
	|| is_set(mi_id.operation)
	|| is_set(area.operation)
	|| is_set(flag_attached.operation)
	|| is_set(last_prefix.operation)
	|| is_set(last_sid_index.operation)
	|| is_set(prefix.operation)
	|| is_set(router.operation)
	|| is_set(sid_count.operation)
	|| is_set(sid_start.operation)
	|| is_set(src.operation)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMi' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.operation)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.operation)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.operation)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.operation)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.operation)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addr")
    {
        if(addr != nullptr)
        {
            children["addr"] = addr;
        }
        else
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>();
            addr->parent = this;
            children["addr"] = addr;
        }
        return children.at("addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children()
{
    if(children.find("addr") == children.end())
    {
        if(addr != nullptr)
        {
            children["addr"] = addr;
        }
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
    if(value_path == "src")
    {
        src = value;
    }
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addr' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children()
{
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyIpv4Backup()
{
    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv4Backup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(std::move(c));
        children[segment_path] = policy_mi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children()
{
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>())
{
    addr->parent = this;
    children["addr"] = addr;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-backup";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_operation() const
{
    return is_set(operation)
	|| is_set(mi_id.operation)
	|| is_set(area.operation)
	|| is_set(flag_attached.operation)
	|| is_set(last_prefix.operation)
	|| is_set(last_sid_index.operation)
	|| is_set(prefix.operation)
	|| is_set(router.operation)
	|| is_set(sid_count.operation)
	|| is_set(sid_start.operation)
	|| is_set(src.operation)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMi' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.operation)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.operation)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.operation)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.operation)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.operation)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addr")
    {
        if(addr != nullptr)
        {
            children["addr"] = addr;
        }
        else
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>();
            addr->parent = this;
            children["addr"] = addr;
        }
        return children.at("addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children()
{
    if(children.find("addr") == children.end())
    {
        if(addr != nullptr)
        {
            children["addr"] = addr;
        }
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
    if(value_path == "src")
    {
        src = value;
    }
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addr' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children()
{
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6()
    :
    policy_ipv6_active(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active>())
	,policy_ipv6_backup(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup>())
{
    policy_ipv6_active->parent = this;
    children["policy-ipv6-active"] = policy_ipv6_active;

    policy_ipv6_backup->parent = this;
    children["policy-ipv6-backup"] = policy_ipv6_backup;

    yang_name = "policy-ipv6"; yang_parent_name = "policy";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::~PolicyIpv6()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_data() const
{
    return (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_data())
	|| (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_operation() const
{
    return is_set(operation)
	|| (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_operation())
	|| (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv6' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-ipv6-active")
    {
        if(policy_ipv6_active != nullptr)
        {
            children["policy-ipv6-active"] = policy_ipv6_active;
        }
        else
        {
            policy_ipv6_active = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active>();
            policy_ipv6_active->parent = this;
            children["policy-ipv6-active"] = policy_ipv6_active;
        }
        return children.at("policy-ipv6-active");
    }

    if(child_yang_name == "policy-ipv6-backup")
    {
        if(policy_ipv6_backup != nullptr)
        {
            children["policy-ipv6-backup"] = policy_ipv6_backup;
        }
        else
        {
            policy_ipv6_backup = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup>();
            policy_ipv6_backup->parent = this;
            children["policy-ipv6-backup"] = policy_ipv6_backup;
        }
        return children.at("policy-ipv6-backup");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_children()
{
    if(children.find("policy-ipv6-active") == children.end())
    {
        if(policy_ipv6_active != nullptr)
        {
            children["policy-ipv6-active"] = policy_ipv6_active;
        }
    }

    if(children.find("policy-ipv6-backup") == children.end())
    {
        if(policy_ipv6_backup != nullptr)
        {
            children["policy-ipv6-backup"] = policy_ipv6_backup;
        }
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyIpv6Backup()
{
    yang_name = "policy-ipv6-backup"; yang_parent_name = "policy-ipv6";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::~PolicyIpv6Backup()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-backup";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv6Backup' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(std::move(c));
        children[segment_path] = policy_mi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_children()
{
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>())
{
    addr->parent = this;
    children["addr"] = addr;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-backup";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_operation() const
{
    return is_set(operation)
	|| is_set(mi_id.operation)
	|| is_set(area.operation)
	|| is_set(flag_attached.operation)
	|| is_set(last_prefix.operation)
	|| is_set(last_sid_index.operation)
	|| is_set(prefix.operation)
	|| is_set(router.operation)
	|| is_set(sid_count.operation)
	|| is_set(sid_start.operation)
	|| is_set(src.operation)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMi' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.operation)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.operation)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.operation)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.operation)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.operation)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addr")
    {
        if(addr != nullptr)
        {
            children["addr"] = addr;
        }
        else
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>();
            addr->parent = this;
            children["addr"] = addr;
        }
        return children.at("addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_children()
{
    if(children.find("addr") == children.end())
    {
        if(addr != nullptr)
        {
            children["addr"] = addr;
        }
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
    if(value_path == "src")
    {
        src = value;
    }
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addr' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_children()
{
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyIpv6Active()
{
    yang_name = "policy-ipv6-active"; yang_parent_name = "policy-ipv6";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::~PolicyIpv6Active()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-active";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyIpv6Active' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(std::move(c));
        children[segment_path] = policy_mi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_children()
{
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    area{YType::str, "area"},
    flag_attached{YType::enumeration, "flag-attached"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    prefix{YType::uint8, "prefix"},
    router{YType::str, "router"},
    sid_count{YType::uint32, "sid-count"},
    sid_start{YType::uint32, "sid-start"},
    src{YType::enumeration, "src"}
    	,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>())
{
    addr->parent = this;
    children["addr"] = addr;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-active";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_operation() const
{
    return is_set(operation)
	|| is_set(mi_id.operation)
	|| is_set(area.operation)
	|| is_set(flag_attached.operation)
	|| is_set(last_prefix.operation)
	|| is_set(last_sid_index.operation)
	|| is_set(prefix.operation)
	|| is_set(router.operation)
	|| is_set(sid_count.operation)
	|| is_set(sid_start.operation)
	|| is_set(src.operation)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PolicyMi' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.operation)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.operation)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.operation)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.operation)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.operation)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addr")
    {
        if(addr != nullptr)
        {
            children["addr"] = addr;
        }
        else
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>();
            addr->parent = this;
            children["addr"] = addr;
        }
        return children.at("addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_children()
{
    if(children.find("addr") == children.end())
    {
        if(addr != nullptr)
        {
            children["addr"] = addr;
        }
    }

    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
    if(value_path == "src")
    {
        src = value;
    }
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addr' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_children()
{
    return children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Isis::Instances::Instance::ErrorLog::ErrorLog()
{
    yang_name = "error-log"; yang_parent_name = "instance";
}

Isis::Instances::Instance::ErrorLog::~ErrorLog()
{
}

bool Isis::Instances::Instance::ErrorLog::has_data() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::ErrorLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.size(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::ErrorLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-log";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::ErrorLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErrorLog' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log-entry")
    {
        for(auto const & c : log_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry>();
        c->parent = this;
        log_entry.push_back(std::move(c));
        children[segment_path] = log_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::ErrorLog::get_children()
{
    for (auto const & c : log_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::ErrorLog::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::ErrorLog::LogEntry::LogEntry()
    :
    error_code{YType::uint32, "error-code"},
    error_log_level{YType::enumeration, "error-log-level"},
    error_reason{YType::str, "error-reason"}
    	,
    generic_data(std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData>())
{
    generic_data->parent = this;
    children["generic-data"] = generic_data;

    yang_name = "log-entry"; yang_parent_name = "error-log";
}

Isis::Instances::Instance::ErrorLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_data() const
{
    return error_code.is_set
	|| error_log_level.is_set
	|| error_reason.is_set
	|| (generic_data !=  nullptr && generic_data->has_data());
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(error_code.operation)
	|| is_set(error_log_level.operation)
	|| is_set(error_reason.operation)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::ErrorLog::LogEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LogEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_code.is_set || is_set(error_code.operation)) leaf_name_data.push_back(error_code.get_name_leafdata());
    if (error_log_level.is_set || is_set(error_log_level.operation)) leaf_name_data.push_back(error_log_level.get_name_leafdata());
    if (error_reason.is_set || is_set(error_reason.operation)) leaf_name_data.push_back(error_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-data")
    {
        if(generic_data != nullptr)
        {
            children["generic-data"] = generic_data;
        }
        else
        {
            generic_data = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData>();
            generic_data->parent = this;
            children["generic-data"] = generic_data;
        }
        return children.at("generic-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::ErrorLog::LogEntry::get_children()
{
    if(children.find("generic-data") == children.end())
    {
        if(generic_data != nullptr)
        {
            children["generic-data"] = generic_data;
        }
    }

    return children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-code")
    {
        error_code = value;
    }
    if(value_path == "error-log-level")
    {
        error_log_level = value;
    }
    if(value_path == "error-reason")
    {
        error_reason = value;
    }
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;
    children["timestamp"] = timestamp;

    yang_name = "generic-data"; yang_parent_name = "log-entry";
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_data() const
{
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_operation() const
{
    return is_set(operation)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GenericData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "timestamp")
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
        else
        {
            timestamp = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp>();
            timestamp->parent = this;
            children["timestamp"] = timestamp;
        }
        return children.at("timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_children()
{
    if(children.find("timestamp") == children.end())
    {
        if(timestamp != nullptr)
        {
            children["timestamp"] = timestamp;
        }
    }

    return children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    nano_seconds{YType::uint32, "nano-seconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "timestamp"; yang_parent_name = "generic-data";
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timestamp' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_children()
{
    return children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterfaces()
{
    yang_name = "checkpoint-interfaces"; yang_parent_name = "instance";
}

Isis::Instances::Instance::CheckpointInterfaces::~CheckpointInterfaces()
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_data() const
{
    for (std::size_t index=0; index<checkpoint_interface.size(); index++)
    {
        if(checkpoint_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_interface.size(); index++)
    {
        if(checkpoint_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::CheckpointInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-interfaces";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::CheckpointInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointInterfaces' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "checkpoint-interface")
    {
        for(auto const & c : checkpoint_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface>();
        c->parent = this;
        checkpoint_interface.push_back(std::move(c));
        children[segment_path] = checkpoint_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::CheckpointInterfaces::get_children()
{
    for (auto const & c : checkpoint_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::CheckpointInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::CheckpointInterface()
    :
    interface_name{YType::str, "interface-name"},
    checkpoint_interface_handle{YType::str, "checkpoint-interface-handle"},
    checkpoint_object_id{YType::uint32, "checkpoint-object-id"},
    dis_areas{YType::enumeration, "dis-areas"},
    has_achieved_ld_pv6_sync{YType::boolean, "has-achieved-ld-pv6-sync"},
    has_achieved_ldp_sync{YType::boolean, "has-achieved-ldp-sync"},
    has_adjacency{YType::boolean, "has-adjacency"},
    has_joined_mcast_group{YType::boolean, "has-joined-mcast-group"},
    interface_name_xr{YType::str, "interface-name-xr"},
    local_circuit_number{YType::uint8, "local-circuit-number"},
    local_snpa{YType::str, "local-snpa"}
{
    yang_name = "checkpoint-interface"; yang_parent_name = "checkpoint-interfaces";
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::~CheckpointInterface()
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_data() const
{
    return interface_name.is_set
	|| checkpoint_interface_handle.is_set
	|| checkpoint_object_id.is_set
	|| dis_areas.is_set
	|| has_achieved_ld_pv6_sync.is_set
	|| has_achieved_ldp_sync.is_set
	|| has_adjacency.is_set
	|| has_joined_mcast_group.is_set
	|| interface_name_xr.is_set
	|| local_circuit_number.is_set
	|| local_snpa.is_set;
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(checkpoint_interface_handle.operation)
	|| is_set(checkpoint_object_id.operation)
	|| is_set(dis_areas.operation)
	|| is_set(has_achieved_ld_pv6_sync.operation)
	|| is_set(has_achieved_ldp_sync.operation)
	|| is_set(has_adjacency.operation)
	|| is_set(has_joined_mcast_group.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(local_circuit_number.operation)
	|| is_set(local_snpa.operation);
}

std::string Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointInterface' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (checkpoint_interface_handle.is_set || is_set(checkpoint_interface_handle.operation)) leaf_name_data.push_back(checkpoint_interface_handle.get_name_leafdata());
    if (checkpoint_object_id.is_set || is_set(checkpoint_object_id.operation)) leaf_name_data.push_back(checkpoint_object_id.get_name_leafdata());
    if (dis_areas.is_set || is_set(dis_areas.operation)) leaf_name_data.push_back(dis_areas.get_name_leafdata());
    if (has_achieved_ld_pv6_sync.is_set || is_set(has_achieved_ld_pv6_sync.operation)) leaf_name_data.push_back(has_achieved_ld_pv6_sync.get_name_leafdata());
    if (has_achieved_ldp_sync.is_set || is_set(has_achieved_ldp_sync.operation)) leaf_name_data.push_back(has_achieved_ldp_sync.get_name_leafdata());
    if (has_adjacency.is_set || is_set(has_adjacency.operation)) leaf_name_data.push_back(has_adjacency.get_name_leafdata());
    if (has_joined_mcast_group.is_set || is_set(has_joined_mcast_group.operation)) leaf_name_data.push_back(has_joined_mcast_group.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (local_circuit_number.is_set || is_set(local_circuit_number.operation)) leaf_name_data.push_back(local_circuit_number.get_name_leafdata());
    if (local_snpa.is_set || is_set(local_snpa.operation)) leaf_name_data.push_back(local_snpa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_children()
{
    return children;
}

void Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "checkpoint-interface-handle")
    {
        checkpoint_interface_handle = value;
    }
    if(value_path == "checkpoint-object-id")
    {
        checkpoint_object_id = value;
    }
    if(value_path == "dis-areas")
    {
        dis_areas = value;
    }
    if(value_path == "has-achieved-ld-pv6-sync")
    {
        has_achieved_ld_pv6_sync = value;
    }
    if(value_path == "has-achieved-ldp-sync")
    {
        has_achieved_ldp_sync = value;
    }
    if(value_path == "has-adjacency")
    {
        has_adjacency = value;
    }
    if(value_path == "has-joined-mcast-group")
    {
        has_joined_mcast_group = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number = value;
    }
    if(value_path == "local-snpa")
    {
        local_snpa = value;
    }
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistics()
{
    yang_name = "interface-statistics"; yang_parent_name = "instance";
}

Isis::Instances::Instance::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::has_data() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::InterfaceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-statistic")
    {
        for(auto const & c : interface_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic>();
        c->parent = this;
        interface_statistic.push_back(std::move(c));
        children[segment_path] = interface_statistic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::InterfaceStatistics::get_children()
{
    for (auto const & c : interface_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"},
    interface_media_type{YType::enumeration, "interface-media-type"},
    traffic_interface{YType::str, "traffic-interface"}
    	,
    p2p_statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics>())
{
    p2p_statistics->parent = this;
    children["p2p-statistics"] = p2p_statistics;

    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_media_type.is_set
	|| traffic_interface.is_set
	|| (p2p_statistics !=  nullptr && p2p_statistics->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_media_type.operation)
	|| is_set(traffic_interface.operation)
	|| (p2p_statistics !=  nullptr && p2p_statistics->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatistic' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_media_type.is_set || is_set(interface_media_type.operation)) leaf_name_data.push_back(interface_media_type.get_name_leafdata());
    if (traffic_interface.is_set || is_set(traffic_interface.operation)) leaf_name_data.push_back(traffic_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2p-statistics")
    {
        if(p2p_statistics != nullptr)
        {
            children["p2p-statistics"] = p2p_statistics;
        }
        else
        {
            p2p_statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics>();
            p2p_statistics->parent = this;
            children["p2p-statistics"] = p2p_statistics;
        }
        return children.at("p2p-statistics");
    }

    if(child_yang_name == "per-area-data")
    {
        for(auto const & c : per_area_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(std::move(c));
        children[segment_path] = per_area_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_children()
{
    if(children.find("p2p-statistics") == children.end())
    {
        if(p2p_statistics != nullptr)
        {
            children["p2p-statistics"] = p2p_statistics;
        }
    }

    for (auto const & c : per_area_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-media-type")
    {
        interface_media_type = value;
    }
    if(value_path == "traffic-interface")
    {
        traffic_interface = value;
    }
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::P2PStatistics()
    :
    lsp_retransmit_count{YType::uint32, "lsp-retransmit-count"},
    memory_exhausted_iih_count{YType::uint32, "memory-exhausted-iih-count"}
    	,
    iih_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount>())
{
    iih_count->parent = this;
    children["iih-count"] = iih_count;

    yang_name = "p2p-statistics"; yang_parent_name = "interface-statistic";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::~P2PStatistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::has_data() const
{
    return lsp_retransmit_count.is_set
	|| memory_exhausted_iih_count.is_set
	|| (iih_count !=  nullptr && iih_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_retransmit_count.operation)
	|| is_set(memory_exhausted_iih_count.operation)
	|| (iih_count !=  nullptr && iih_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-statistics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2PStatistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_retransmit_count.is_set || is_set(lsp_retransmit_count.operation)) leaf_name_data.push_back(lsp_retransmit_count.get_name_leafdata());
    if (memory_exhausted_iih_count.is_set || is_set(memory_exhausted_iih_count.operation)) leaf_name_data.push_back(memory_exhausted_iih_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iih-count")
    {
        if(iih_count != nullptr)
        {
            children["iih-count"] = iih_count;
        }
        else
        {
            iih_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount>();
            iih_count->parent = this;
            children["iih-count"] = iih_count;
        }
        return children.at("iih-count");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::get_children()
{
    if(children.find("iih-count") == children.end())
    {
        if(iih_count != nullptr)
        {
            children["iih-count"] = iih_count;
        }
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-retransmit-count")
    {
        lsp_retransmit_count = value;
    }
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count = value;
    }
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::IihCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{
    yang_name = "iih-count"; yang_parent_name = "p2p-statistics";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::~IihCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::has_operation() const
{
    return is_set(operation)
	|| is_set(pdu_receive_count.operation)
	|| is_set(pdu_send_count.operation);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iih-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IihCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.operation)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.operation)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2PStatistics::IihCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
    }
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
    	,
    lan_data(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData>())
	,statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics>())
{
    lan_data->parent = this;
    children["lan-data"] = lan_data;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "per-area-data"; yang_parent_name = "interface-statistic";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_data() const
{
    return level.is_set
	|| (lan_data !=  nullptr && lan_data->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| (lan_data !=  nullptr && lan_data->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerAreaData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lan-data")
    {
        if(lan_data != nullptr)
        {
            children["lan-data"] = lan_data;
        }
        else
        {
            lan_data = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData>();
            lan_data->parent = this;
            children["lan-data"] = lan_data;
        }
        return children.at("lan-data");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_children()
{
    if(children.find("lan-data") == children.end())
    {
        if(lan_data != nullptr)
        {
            children["lan-data"] = lan_data;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::Statistics()
    :
    lsp_drop_count{YType::uint32, "lsp-drop-count"},
    lsp_flooding_dup_count{YType::uint32, "lsp-flooding-dup-count"}
    	,
    csnp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount>())
	,lsp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount>())
	,psnp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount>())
{
    csnp_count->parent = this;
    children["csnp-count"] = csnp_count;

    lsp_count->parent = this;
    children["lsp-count"] = lsp_count;

    psnp_count->parent = this;
    children["psnp-count"] = psnp_count;

    yang_name = "statistics"; yang_parent_name = "per-area-data";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_data() const
{
    return lsp_drop_count.is_set
	|| lsp_flooding_dup_count.is_set
	|| (csnp_count !=  nullptr && csnp_count->has_data())
	|| (lsp_count !=  nullptr && lsp_count->has_data())
	|| (psnp_count !=  nullptr && psnp_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_drop_count.operation)
	|| is_set(lsp_flooding_dup_count.operation)
	|| (csnp_count !=  nullptr && csnp_count->has_operation())
	|| (lsp_count !=  nullptr && lsp_count->has_operation())
	|| (psnp_count !=  nullptr && psnp_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_drop_count.is_set || is_set(lsp_drop_count.operation)) leaf_name_data.push_back(lsp_drop_count.get_name_leafdata());
    if (lsp_flooding_dup_count.is_set || is_set(lsp_flooding_dup_count.operation)) leaf_name_data.push_back(lsp_flooding_dup_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csnp-count")
    {
        if(csnp_count != nullptr)
        {
            children["csnp-count"] = csnp_count;
        }
        else
        {
            csnp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount>();
            csnp_count->parent = this;
            children["csnp-count"] = csnp_count;
        }
        return children.at("csnp-count");
    }

    if(child_yang_name == "lsp-count")
    {
        if(lsp_count != nullptr)
        {
            children["lsp-count"] = lsp_count;
        }
        else
        {
            lsp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount>();
            lsp_count->parent = this;
            children["lsp-count"] = lsp_count;
        }
        return children.at("lsp-count");
    }

    if(child_yang_name == "psnp-count")
    {
        if(psnp_count != nullptr)
        {
            children["psnp-count"] = psnp_count;
        }
        else
        {
            psnp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount>();
            psnp_count->parent = this;
            children["psnp-count"] = psnp_count;
        }
        return children.at("psnp-count");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_children()
{
    if(children.find("csnp-count") == children.end())
    {
        if(csnp_count != nullptr)
        {
            children["csnp-count"] = csnp_count;
        }
    }

    if(children.find("lsp-count") == children.end())
    {
        if(lsp_count != nullptr)
        {
            children["lsp-count"] = lsp_count;
        }
    }

    if(children.find("psnp-count") == children.end())
    {
        if(psnp_count != nullptr)
        {
            children["psnp-count"] = psnp_count;
        }
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-drop-count")
    {
        lsp_drop_count = value;
    }
    if(value_path == "lsp-flooding-dup-count")
    {
        lsp_flooding_dup_count = value;
    }
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::LspCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{
    yang_name = "lsp-count"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::~LspCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_operation() const
{
    return is_set(operation)
	|| is_set(pdu_receive_count.operation)
	|| is_set(pdu_send_count.operation);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.operation)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.operation)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
    }
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::CsnpCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{
    yang_name = "csnp-count"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::~CsnpCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_operation() const
{
    return is_set(operation)
	|| is_set(pdu_receive_count.operation)
	|| is_set(pdu_send_count.operation);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CsnpCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.operation)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.operation)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
    }
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::PsnpCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{
    yang_name = "psnp-count"; yang_parent_name = "statistics";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::~PsnpCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_operation() const
{
    return is_set(operation)
	|| is_set(pdu_receive_count.operation)
	|| is_set(pdu_send_count.operation);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psnp-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PsnpCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.operation)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.operation)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
    }
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::LanData()
    :
    dis_election_count{YType::uint32, "dis-election-count"},
    memory_exhausted_iih_count{YType::uint32, "memory-exhausted-iih-count"}
    	,
    iih_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount>())
{
    iih_count->parent = this;
    children["iih-count"] = iih_count;

    yang_name = "lan-data"; yang_parent_name = "per-area-data";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::~LanData()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_data() const
{
    return dis_election_count.is_set
	|| memory_exhausted_iih_count.is_set
	|| (iih_count !=  nullptr && iih_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_operation() const
{
    return is_set(operation)
	|| is_set(dis_election_count.operation)
	|| is_set(memory_exhausted_iih_count.operation)
	|| (iih_count !=  nullptr && iih_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LanData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dis_election_count.is_set || is_set(dis_election_count.operation)) leaf_name_data.push_back(dis_election_count.get_name_leafdata());
    if (memory_exhausted_iih_count.is_set || is_set(memory_exhausted_iih_count.operation)) leaf_name_data.push_back(memory_exhausted_iih_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iih-count")
    {
        if(iih_count != nullptr)
        {
            children["iih-count"] = iih_count;
        }
        else
        {
            iih_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount>();
            iih_count->parent = this;
            children["iih-count"] = iih_count;
        }
        return children.at("iih-count");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_children()
{
    if(children.find("iih-count") == children.end())
    {
        if(iih_count != nullptr)
        {
            children["iih-count"] = iih_count;
        }
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dis-election-count")
    {
        dis_election_count = value;
    }
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count = value;
    }
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::IihCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{
    yang_name = "iih-count"; yang_parent_name = "lan-data";
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::~IihCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_data() const
{
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_operation() const
{
    return is_set(operation)
	|| is_set(pdu_receive_count.operation)
	|| is_set(pdu_send_count.operation);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iih-count";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IihCount' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.operation)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.operation)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_children()
{
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
    }
}

Isis::Instances::Instance::Protocol::Protocol()
    :
    active_area_address{YType::str, "active-area-address"},
    adj_form_count{YType::uint32, "adj-form-count"},
    adj_full_count{YType::uint32, "adj-full-count"},
    adj_stagger_enabled{YType::boolean, "adj-stagger-enabled"},
    adj_stagger_init{YType::uint32, "adj-stagger-init"},
    adj_stagger_max{YType::uint32, "adj-stagger-max"},
    configured_nsf_flavor{YType::enumeration, "configured-nsf-flavor"},
    instance_id{YType::uint16, "instance-id"},
    last_restart_nsf_flavor{YType::enumeration, "last-restart-nsf-flavor"},
    last_restart_status{YType::enumeration, "last-restart-status"},
    manual_area_address{YType::str, "manual-area-address"},
    nsap_system_id{YType::str, "nsap-system-id"},
    remaining_time_for_next_nsf_restart{YType::uint32, "remaining-time-for-next-nsf-restart"},
    running_levels{YType::enumeration, "running-levels"},
    valid_nsap_system_id{YType::boolean, "valid-nsap-system-id"}
{
    yang_name = "protocol"; yang_parent_name = "instance";
}

Isis::Instances::Instance::Protocol::~Protocol()
{
}

bool Isis::Instances::Instance::Protocol::has_data() const
{
    for (std::size_t index=0; index<per_topo_data.size(); index++)
    {
        if(per_topo_data[index]->has_data())
            return true;
    }
    for (auto const & leaf : active_area_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : manual_area_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return adj_form_count.is_set
	|| adj_full_count.is_set
	|| adj_stagger_enabled.is_set
	|| adj_stagger_init.is_set
	|| adj_stagger_max.is_set
	|| configured_nsf_flavor.is_set
	|| instance_id.is_set
	|| last_restart_nsf_flavor.is_set
	|| last_restart_status.is_set
	|| nsap_system_id.is_set
	|| remaining_time_for_next_nsf_restart.is_set
	|| running_levels.is_set
	|| valid_nsap_system_id.is_set;
}

bool Isis::Instances::Instance::Protocol::has_operation() const
{
    for (std::size_t index=0; index<per_topo_data.size(); index++)
    {
        if(per_topo_data[index]->has_operation())
            return true;
    }
    for (auto const & leaf : active_area_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : manual_area_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(active_area_address.operation)
	|| is_set(adj_form_count.operation)
	|| is_set(adj_full_count.operation)
	|| is_set(adj_stagger_enabled.operation)
	|| is_set(adj_stagger_init.operation)
	|| is_set(adj_stagger_max.operation)
	|| is_set(configured_nsf_flavor.operation)
	|| is_set(instance_id.operation)
	|| is_set(last_restart_nsf_flavor.operation)
	|| is_set(last_restart_status.operation)
	|| is_set(manual_area_address.operation)
	|| is_set(nsap_system_id.operation)
	|| is_set(remaining_time_for_next_nsf_restart.operation)
	|| is_set(running_levels.operation)
	|| is_set(valid_nsap_system_id.operation);
}

std::string Isis::Instances::Instance::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adj_form_count.is_set || is_set(adj_form_count.operation)) leaf_name_data.push_back(adj_form_count.get_name_leafdata());
    if (adj_full_count.is_set || is_set(adj_full_count.operation)) leaf_name_data.push_back(adj_full_count.get_name_leafdata());
    if (adj_stagger_enabled.is_set || is_set(adj_stagger_enabled.operation)) leaf_name_data.push_back(adj_stagger_enabled.get_name_leafdata());
    if (adj_stagger_init.is_set || is_set(adj_stagger_init.operation)) leaf_name_data.push_back(adj_stagger_init.get_name_leafdata());
    if (adj_stagger_max.is_set || is_set(adj_stagger_max.operation)) leaf_name_data.push_back(adj_stagger_max.get_name_leafdata());
    if (configured_nsf_flavor.is_set || is_set(configured_nsf_flavor.operation)) leaf_name_data.push_back(configured_nsf_flavor.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.operation)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (last_restart_nsf_flavor.is_set || is_set(last_restart_nsf_flavor.operation)) leaf_name_data.push_back(last_restart_nsf_flavor.get_name_leafdata());
    if (last_restart_status.is_set || is_set(last_restart_status.operation)) leaf_name_data.push_back(last_restart_status.get_name_leafdata());
    if (nsap_system_id.is_set || is_set(nsap_system_id.operation)) leaf_name_data.push_back(nsap_system_id.get_name_leafdata());
    if (remaining_time_for_next_nsf_restart.is_set || is_set(remaining_time_for_next_nsf_restart.operation)) leaf_name_data.push_back(remaining_time_for_next_nsf_restart.get_name_leafdata());
    if (running_levels.is_set || is_set(running_levels.operation)) leaf_name_data.push_back(running_levels.get_name_leafdata());
    if (valid_nsap_system_id.is_set || is_set(valid_nsap_system_id.operation)) leaf_name_data.push_back(valid_nsap_system_id.get_name_leafdata());

    auto active_area_address_name_datas = active_area_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), active_area_address_name_datas.begin(), active_area_address_name_datas.end());
    auto manual_area_address_name_datas = manual_area_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), manual_area_address_name_datas.begin(), manual_area_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-topo-data")
    {
        for(auto const & c : per_topo_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData>();
        c->parent = this;
        per_topo_data.push_back(std::move(c));
        children[segment_path] = per_topo_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Protocol::get_children()
{
    for (auto const & c : per_topo_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-area-address")
    {
        active_area_address.append(value);
    }
    if(value_path == "adj-form-count")
    {
        adj_form_count = value;
    }
    if(value_path == "adj-full-count")
    {
        adj_full_count = value;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled = value;
    }
    if(value_path == "adj-stagger-init")
    {
        adj_stagger_init = value;
    }
    if(value_path == "adj-stagger-max")
    {
        adj_stagger_max = value;
    }
    if(value_path == "configured-nsf-flavor")
    {
        configured_nsf_flavor = value;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
    }
    if(value_path == "last-restart-nsf-flavor")
    {
        last_restart_nsf_flavor = value;
    }
    if(value_path == "last-restart-status")
    {
        last_restart_status = value;
    }
    if(value_path == "manual-area-address")
    {
        manual_area_address.append(value);
    }
    if(value_path == "nsap-system-id")
    {
        nsap_system_id = value;
    }
    if(value_path == "remaining-time-for-next-nsf-restart")
    {
        remaining_time_for_next_nsf_restart = value;
    }
    if(value_path == "running-levels")
    {
        running_levels = value;
    }
    if(value_path == "valid-nsap-system-id")
    {
        valid_nsap_system_id = value;
    }
}

Isis::Instances::Instance::Protocol::PerTopoData::PerTopoData()
    :
    advertise_passive_only{YType::boolean, "advertise-passive-only"},
    default_admin_distance{YType::uint32, "default-admin-distance"},
    wait_redist_complete{YType::boolean, "wait-redist-complete"}
    	,
    id(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::Id>())
	,redist_protocols_list(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList>())
{
    id->parent = this;
    children["id"] = id;

    redist_protocols_list->parent = this;
    children["redist-protocols-list"] = redist_protocols_list;

    yang_name = "per-topo-data"; yang_parent_name = "protocol";
}

Isis::Instances::Instance::Protocol::PerTopoData::~PerTopoData()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_data() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return advertise_passive_only.is_set
	|| default_admin_distance.is_set
	|| wait_redist_complete.is_set
	|| (id !=  nullptr && id->has_data())
	|| (redist_protocols_list !=  nullptr && redist_protocols_list->has_data());
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.size(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(advertise_passive_only.operation)
	|| is_set(default_admin_distance.operation)
	|| is_set(wait_redist_complete.operation)
	|| (id !=  nullptr && id->has_operation())
	|| (redist_protocols_list !=  nullptr && redist_protocols_list->has_operation());
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topo-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Protocol::PerTopoData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerTopoData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_passive_only.is_set || is_set(advertise_passive_only.operation)) leaf_name_data.push_back(advertise_passive_only.get_name_leafdata());
    if (default_admin_distance.is_set || is_set(default_admin_distance.operation)) leaf_name_data.push_back(default_admin_distance.get_name_leafdata());
    if (wait_redist_complete.is_set || is_set(wait_redist_complete.operation)) leaf_name_data.push_back(wait_redist_complete.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "id")
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
        else
        {
            id = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::Id>();
            id->parent = this;
            children["id"] = id;
        }
        return children.at("id");
    }

    if(child_yang_name == "per-area-data")
    {
        for(auto const & c : per_area_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData>();
        c->parent = this;
        per_area_data.push_back(std::move(c));
        children[segment_path] = per_area_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "redist-protocols-list")
    {
        if(redist_protocols_list != nullptr)
        {
            children["redist-protocols-list"] = redist_protocols_list;
        }
        else
        {
            redist_protocols_list = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList>();
            redist_protocols_list->parent = this;
            children["redist-protocols-list"] = redist_protocols_list;
        }
        return children.at("redist-protocols-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Protocol::PerTopoData::get_children()
{
    if(children.find("id") == children.end())
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
    }

    for (auto const & c : per_area_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("redist-protocols-list") == children.end())
    {
        if(redist_protocols_list != nullptr)
        {
            children["redist-protocols-list"] = redist_protocols_list;
        }
    }

    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only = value;
    }
    if(value_path == "default-admin-distance")
    {
        default_admin_distance = value;
    }
    if(value_path == "wait-redist-complete")
    {
        wait_redist_complete = value;
    }
}

Isis::Instances::Instance::Protocol::PerTopoData::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "id"; yang_parent_name = "per-topo-data";
}

Isis::Instances::Instance::Protocol::PerTopoData::Id::~Id()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set
	|| topology_name.is_set
	|| vrf_name.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Protocol::PerTopoData::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Protocol::PerTopoData::Id::get_children()
{
    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::RedistProtocolsList()
{
    yang_name = "redist-protocols-list"; yang_parent_name = "per-topo-data";
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::~RedistProtocolsList()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_data() const
{
    for (std::size_t index=0; index<isis_sh_redist_entry.size(); index++)
    {
        if(isis_sh_redist_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_redist_entry.size(); index++)
    {
        if(isis_sh_redist_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-protocols-list";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedistProtocolsList' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "isis-sh-redist-entry")
    {
        for(auto const & c : isis_sh_redist_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry>();
        c->parent = this;
        isis_sh_redist_entry.push_back(std::move(c));
        children[segment_path] = isis_sh_redist_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_children()
{
    for (auto const & c : isis_sh_redist_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::IsisShRedistEntry()
    :
    protocol_details(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails>())
{
    protocol_details->parent = this;
    children["protocol-details"] = protocol_details;

    yang_name = "isis-sh-redist-entry"; yang_parent_name = "redist-protocols-list";
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::~IsisShRedistEntry()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_data() const
{
    return (protocol_details !=  nullptr && protocol_details->has_data());
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_operation() const
{
    return is_set(operation)
	|| (protocol_details !=  nullptr && protocol_details->has_operation());
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-redist-entry";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisShRedistEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protocol-details")
    {
        if(protocol_details != nullptr)
        {
            children["protocol-details"] = protocol_details;
        }
        else
        {
            protocol_details = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails>();
            protocol_details->parent = this;
            children["protocol-details"] = protocol_details;
        }
        return children.at("protocol-details");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_children()
{
    if(children.find("protocol-details") == children.end())
    {
        if(protocol_details != nullptr)
        {
            children["protocol-details"] = protocol_details;
        }
    }

    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::ProtocolDetails()
    :
    application_name{YType::str, "application-name"},
    bgp_as_number{YType::str, "bgp-as-number"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    ospfv3_process_id{YType::str, "ospfv3-process-id"},
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "protocol-details"; yang_parent_name = "isis-sh-redist-entry";
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::~ProtocolDetails()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_data() const
{
    return application_name.is_set
	|| bgp_as_number.is_set
	|| eigrp_as_number.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| ospfv3_process_id.is_set
	|| protocol.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_operation() const
{
    return is_set(operation)
	|| is_set(application_name.operation)
	|| is_set(bgp_as_number.operation)
	|| is_set(eigrp_as_number.operation)
	|| is_set(isis_instance_id.operation)
	|| is_set(ospf_process_id.operation)
	|| is_set(ospfv3_process_id.operation)
	|| is_set(protocol.operation);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-details";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolDetails' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.operation)) leaf_name_data.push_back(application_name.get_name_leafdata());
    if (bgp_as_number.is_set || is_set(bgp_as_number.operation)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.operation)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.operation)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.operation)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (ospfv3_process_id.is_set || is_set(ospfv3_process_id.operation)) leaf_name_data.push_back(ospfv3_process_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_children()
{
    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-name")
    {
        application_name = value;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::PerAreaData()
    :
    accepted_metric_style{YType::enumeration, "accepted-metric-style"},
    duration{YType::uint32, "duration"},
    generated_metric_style{YType::enumeration, "generated-metric-style"},
    ispf_state{YType::enumeration, "ispf-state"},
    level{YType::enumeration, "level"},
    metric{YType::uint32, "metric"},
    rib_update_delay{YType::uint32, "rib-update-delay"},
    sr_uloop_event{YType::enumeration, "sr-uloop-event"},
    sr_uloop_far_node_id{YType::str, "sr-uloop-far-node-id"},
    sr_uloop_is_active{YType::boolean, "sr-uloop-is-active"},
    sr_uloop_near_node_id{YType::str, "sr-uloop-near-node-id"},
    te_enabled{YType::boolean, "te-enabled"},
    uloop_avoidance_type{YType::enumeration, "uloop-avoidance-type"},
    uses_default_link_topo_flag{YType::boolean, "uses-default-link-topo-flag"}
{
    yang_name = "per-area-data"; yang_parent_name = "per-topo-data";
}

Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_data() const
{
    return accepted_metric_style.is_set
	|| duration.is_set
	|| generated_metric_style.is_set
	|| ispf_state.is_set
	|| level.is_set
	|| metric.is_set
	|| rib_update_delay.is_set
	|| sr_uloop_event.is_set
	|| sr_uloop_far_node_id.is_set
	|| sr_uloop_is_active.is_set
	|| sr_uloop_near_node_id.is_set
	|| te_enabled.is_set
	|| uloop_avoidance_type.is_set
	|| uses_default_link_topo_flag.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_metric_style.operation)
	|| is_set(duration.operation)
	|| is_set(generated_metric_style.operation)
	|| is_set(ispf_state.operation)
	|| is_set(level.operation)
	|| is_set(metric.operation)
	|| is_set(rib_update_delay.operation)
	|| is_set(sr_uloop_event.operation)
	|| is_set(sr_uloop_far_node_id.operation)
	|| is_set(sr_uloop_is_active.operation)
	|| is_set(sr_uloop_near_node_id.operation)
	|| is_set(te_enabled.operation)
	|| is_set(uloop_avoidance_type.operation)
	|| is_set(uses_default_link_topo_flag.operation);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerAreaData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_metric_style.is_set || is_set(accepted_metric_style.operation)) leaf_name_data.push_back(accepted_metric_style.get_name_leafdata());
    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (generated_metric_style.is_set || is_set(generated_metric_style.operation)) leaf_name_data.push_back(generated_metric_style.get_name_leafdata());
    if (ispf_state.is_set || is_set(ispf_state.operation)) leaf_name_data.push_back(ispf_state.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.operation)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());
    if (sr_uloop_event.is_set || is_set(sr_uloop_event.operation)) leaf_name_data.push_back(sr_uloop_event.get_name_leafdata());
    if (sr_uloop_far_node_id.is_set || is_set(sr_uloop_far_node_id.operation)) leaf_name_data.push_back(sr_uloop_far_node_id.get_name_leafdata());
    if (sr_uloop_is_active.is_set || is_set(sr_uloop_is_active.operation)) leaf_name_data.push_back(sr_uloop_is_active.get_name_leafdata());
    if (sr_uloop_near_node_id.is_set || is_set(sr_uloop_near_node_id.operation)) leaf_name_data.push_back(sr_uloop_near_node_id.get_name_leafdata());
    if (te_enabled.is_set || is_set(te_enabled.operation)) leaf_name_data.push_back(te_enabled.get_name_leafdata());
    if (uloop_avoidance_type.is_set || is_set(uloop_avoidance_type.operation)) leaf_name_data.push_back(uloop_avoidance_type.get_name_leafdata());
    if (uses_default_link_topo_flag.is_set || is_set(uses_default_link_topo_flag.operation)) leaf_name_data.push_back(uses_default_link_topo_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_children()
{
    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-metric-style")
    {
        accepted_metric_style = value;
    }
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "generated-metric-style")
    {
        generated_metric_style = value;
    }
    if(value_path == "ispf-state")
    {
        ispf_state = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
    }
    if(value_path == "sr-uloop-event")
    {
        sr_uloop_event = value;
    }
    if(value_path == "sr-uloop-far-node-id")
    {
        sr_uloop_far_node_id = value;
    }
    if(value_path == "sr-uloop-is-active")
    {
        sr_uloop_is_active = value;
    }
    if(value_path == "sr-uloop-near-node-id")
    {
        sr_uloop_near_node_id = value;
    }
    if(value_path == "te-enabled")
    {
        te_enabled = value;
    }
    if(value_path == "uloop-avoidance-type")
    {
        uloop_avoidance_type = value;
    }
    if(value_path == "uses-default-link-topo-flag")
    {
        uses_default_link_topo_flag = value;
    }
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummaries()
{
    yang_name = "neighbor-summaries"; yang_parent_name = "instance";
}

Isis::Instances::Instance::NeighborSummaries::~NeighborSummaries()
{
}

bool Isis::Instances::Instance::NeighborSummaries::has_data() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::NeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::NeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summaries";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NeighborSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSummaries' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-summary")
    {
        for(auto const & c : neighbor_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary>();
        c->parent = this;
        neighbor_summary.push_back(std::move(c));
        children[segment_path] = neighbor_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NeighborSummaries::get_children()
{
    for (auto const & c : neighbor_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::NeighborSummaries::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::NeighborSummary()
    :
    interface_name{YType::str, "interface-name"}
    	,
    level12_neigbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors>())
	,level1_neighbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors>())
	,level2_neighbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors>())
{
    level12_neigbors->parent = this;
    children["level12-neigbors"] = level12_neigbors;

    level1_neighbors->parent = this;
    children["level1-neighbors"] = level1_neighbors;

    level2_neighbors->parent = this;
    children["level2-neighbors"] = level2_neighbors;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-summaries";
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::~NeighborSummary()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_data() const
{
    return interface_name.is_set
	|| (level12_neigbors !=  nullptr && level12_neigbors->has_data())
	|| (level1_neighbors !=  nullptr && level1_neighbors->has_data())
	|| (level2_neighbors !=  nullptr && level2_neighbors->has_data());
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (level12_neigbors !=  nullptr && level12_neigbors->has_operation())
	|| (level1_neighbors !=  nullptr && level1_neighbors->has_operation())
	|| (level2_neighbors !=  nullptr && level2_neighbors->has_operation());
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSummary' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "level12-neigbors")
    {
        if(level12_neigbors != nullptr)
        {
            children["level12-neigbors"] = level12_neigbors;
        }
        else
        {
            level12_neigbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors>();
            level12_neigbors->parent = this;
            children["level12-neigbors"] = level12_neigbors;
        }
        return children.at("level12-neigbors");
    }

    if(child_yang_name == "level1-neighbors")
    {
        if(level1_neighbors != nullptr)
        {
            children["level1-neighbors"] = level1_neighbors;
        }
        else
        {
            level1_neighbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors>();
            level1_neighbors->parent = this;
            children["level1-neighbors"] = level1_neighbors;
        }
        return children.at("level1-neighbors");
    }

    if(child_yang_name == "level2-neighbors")
    {
        if(level2_neighbors != nullptr)
        {
            children["level2-neighbors"] = level2_neighbors;
        }
        else
        {
            level2_neighbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors>();
            level2_neighbors->parent = this;
            children["level2-neighbors"] = level2_neighbors;
        }
        return children.at("level2-neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_children()
{
    if(children.find("level12-neigbors") == children.end())
    {
        if(level12_neigbors != nullptr)
        {
            children["level12-neigbors"] = level12_neigbors;
        }
    }

    if(children.find("level1-neighbors") == children.end())
    {
        if(level1_neighbors != nullptr)
        {
            children["level1-neighbors"] = level1_neighbors;
        }
    }

    if(children.find("level2-neighbors") == children.end())
    {
        if(level2_neighbors != nullptr)
        {
            children["level2-neighbors"] = level2_neighbors;
        }
    }

    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::Level1Neighbors()
    :
    neighbor_down_count{YType::uint32, "neighbor-down-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_up_count{YType::uint32, "neighbor-up-count"}
{
    yang_name = "level1-neighbors"; yang_parent_name = "neighbor-summary";
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::~Level1Neighbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_data() const
{
    return neighbor_down_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_up_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_down_count.operation)
	|| is_set(neighbor_init_count.operation)
	|| is_set(neighbor_up_count.operation);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level1-neighbors";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level1Neighbors' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_down_count.is_set || is_set(neighbor_down_count.operation)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.operation)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_up_count.is_set || is_set(neighbor_up_count.operation)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_children()
{
    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
    }
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::Level2Neighbors()
    :
    neighbor_down_count{YType::uint32, "neighbor-down-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_up_count{YType::uint32, "neighbor-up-count"}
{
    yang_name = "level2-neighbors"; yang_parent_name = "neighbor-summary";
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::~Level2Neighbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_data() const
{
    return neighbor_down_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_up_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_down_count.operation)
	|| is_set(neighbor_init_count.operation)
	|| is_set(neighbor_up_count.operation);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-neighbors";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level2Neighbors' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_down_count.is_set || is_set(neighbor_down_count.operation)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.operation)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_up_count.is_set || is_set(neighbor_up_count.operation)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_children()
{
    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
    }
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::Level12Neigbors()
    :
    neighbor_down_count{YType::uint32, "neighbor-down-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_up_count{YType::uint32, "neighbor-up-count"}
{
    yang_name = "level12-neigbors"; yang_parent_name = "neighbor-summary";
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::~Level12Neigbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_data() const
{
    return neighbor_down_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_up_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_down_count.operation)
	|| is_set(neighbor_init_count.operation)
	|| is_set(neighbor_up_count.operation);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level12-neigbors";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level12Neigbors' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_down_count.is_set || is_set(neighbor_down_count.operation)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.operation)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_up_count.is_set || is_set(neighbor_up_count.operation)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_children()
{
    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
    }
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
    }
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsps()
{
    yang_name = "checkpoint-lsps"; yang_parent_name = "instance";
}

Isis::Instances::Instance::CheckpointLsps::~CheckpointLsps()
{
}

bool Isis::Instances::Instance::CheckpointLsps::has_data() const
{
    for (std::size_t index=0; index<checkpoint_lsp.size(); index++)
    {
        if(checkpoint_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointLsps::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_lsp.size(); index++)
    {
        if(checkpoint_lsp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::CheckpointLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-lsps";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::CheckpointLsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointLsps' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "checkpoint-lsp")
    {
        for(auto const & c : checkpoint_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointLsps::CheckpointLsp>();
        c->parent = this;
        checkpoint_lsp.push_back(std::move(c));
        children[segment_path] = checkpoint_lsp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::CheckpointLsps::get_children()
{
    for (auto const & c : checkpoint_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::CheckpointLsps::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::CheckpointLsp()
    :
    checkpoint_lsp_id{YType::str, "checkpoint-lsp-id"},
    checkpoint_lsp_level{YType::uint8, "checkpoint-lsp-level"},
    checkpoint_lsp_local_flag{YType::boolean, "checkpoint-lsp-local-flag"},
    checkpoint_lsp_object_id{YType::uint32, "checkpoint-lsp-object-id"},
    level{YType::enumeration, "level"},
    lsp_id{YType::str, "lsp-id"}
{
    yang_name = "checkpoint-lsp"; yang_parent_name = "checkpoint-lsps";
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::~CheckpointLsp()
{
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_data() const
{
    return checkpoint_lsp_id.is_set
	|| checkpoint_lsp_level.is_set
	|| checkpoint_lsp_local_flag.is_set
	|| checkpoint_lsp_object_id.is_set
	|| level.is_set
	|| lsp_id.is_set;
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(checkpoint_lsp_id.operation)
	|| is_set(checkpoint_lsp_level.operation)
	|| is_set(checkpoint_lsp_local_flag.operation)
	|| is_set(checkpoint_lsp_object_id.operation)
	|| is_set(level.operation)
	|| is_set(lsp_id.operation);
}

std::string Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-lsp";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointLsp' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checkpoint_lsp_id.is_set || is_set(checkpoint_lsp_id.operation)) leaf_name_data.push_back(checkpoint_lsp_id.get_name_leafdata());
    if (checkpoint_lsp_level.is_set || is_set(checkpoint_lsp_level.operation)) leaf_name_data.push_back(checkpoint_lsp_level.get_name_leafdata());
    if (checkpoint_lsp_local_flag.is_set || is_set(checkpoint_lsp_local_flag.operation)) leaf_name_data.push_back(checkpoint_lsp_local_flag.get_name_leafdata());
    if (checkpoint_lsp_object_id.is_set || is_set(checkpoint_lsp_object_id.operation)) leaf_name_data.push_back(checkpoint_lsp_object_id.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_children()
{
    return children;
}

void Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "checkpoint-lsp-id")
    {
        checkpoint_lsp_id = value;
    }
    if(value_path == "checkpoint-lsp-level")
    {
        checkpoint_lsp_level = value;
    }
    if(value_path == "checkpoint-lsp-local-flag")
    {
        checkpoint_lsp_local_flag = value;
    }
    if(value_path == "checkpoint-lsp-object-id")
    {
        checkpoint_lsp_object_id = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
}

Isis::Instances::Instance::MeshGroups::MeshGroups()
    :
    mesh_group_configured_interface_list(std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList>())
{
    mesh_group_configured_interface_list->parent = this;
    children["mesh-group-configured-interface-list"] = mesh_group_configured_interface_list;

    yang_name = "mesh-groups"; yang_parent_name = "instance";
}

Isis::Instances::Instance::MeshGroups::~MeshGroups()
{
}

bool Isis::Instances::Instance::MeshGroups::has_data() const
{
    return (mesh_group_configured_interface_list !=  nullptr && mesh_group_configured_interface_list->has_data());
}

bool Isis::Instances::Instance::MeshGroups::has_operation() const
{
    return is_set(operation)
	|| (mesh_group_configured_interface_list !=  nullptr && mesh_group_configured_interface_list->has_operation());
}

std::string Isis::Instances::Instance::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::MeshGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeshGroups' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mesh-group-configured-interface-list")
    {
        if(mesh_group_configured_interface_list != nullptr)
        {
            children["mesh-group-configured-interface-list"] = mesh_group_configured_interface_list;
        }
        else
        {
            mesh_group_configured_interface_list = std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList>();
            mesh_group_configured_interface_list->parent = this;
            children["mesh-group-configured-interface-list"] = mesh_group_configured_interface_list;
        }
        return children.at("mesh-group-configured-interface-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::MeshGroups::get_children()
{
    if(children.find("mesh-group-configured-interface-list") == children.end())
    {
        if(mesh_group_configured_interface_list != nullptr)
        {
            children["mesh-group-configured-interface-list"] = mesh_group_configured_interface_list;
        }
    }

    return children;
}

void Isis::Instances::Instance::MeshGroups::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::MeshGroupConfiguredInterfaceList()
{
    yang_name = "mesh-group-configured-interface-list"; yang_parent_name = "mesh-groups";
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::~MeshGroupConfiguredInterfaceList()
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_data() const
{
    for (std::size_t index=0; index<isis_sh_mesh_entry.size(); index++)
    {
        if(isis_sh_mesh_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_mesh_entry.size(); index++)
    {
        if(isis_sh_mesh_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-configured-interface-list";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MeshGroupConfiguredInterfaceList' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "isis-sh-mesh-entry")
    {
        for(auto const & c : isis_sh_mesh_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry>();
        c->parent = this;
        isis_sh_mesh_entry.push_back(std::move(c));
        children[segment_path] = isis_sh_mesh_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_children()
{
    for (auto const & c : isis_sh_mesh_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::IsisShMeshEntry()
    :
    mesh_group_interface{YType::str, "mesh-group-interface"},
    mesh_group_number{YType::uint32, "mesh-group-number"}
{
    yang_name = "isis-sh-mesh-entry"; yang_parent_name = "mesh-group-configured-interface-list";
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::~IsisShMeshEntry()
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_data() const
{
    return mesh_group_interface.is_set
	|| mesh_group_number.is_set;
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(mesh_group_interface.operation)
	|| is_set(mesh_group_number.operation);
}

std::string Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-mesh-entry";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisShMeshEntry' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_interface.is_set || is_set(mesh_group_interface.operation)) leaf_name_data.push_back(mesh_group_interface.get_name_leafdata());
    if (mesh_group_number.is_set || is_set(mesh_group_number.operation)) leaf_name_data.push_back(mesh_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_children()
{
    return children;
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mesh-group-interface")
    {
        mesh_group_interface = value;
    }
    if(value_path == "mesh-group-number")
    {
        mesh_group_number = value;
    }
}

Isis::Instances::Instance::NsrStatistics::NsrStatistics()
    :
    isis_vm_state{YType::uint16, "isis-vm-state"}
    	,
    isis_nsr_stats_data(std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData>())
{
    isis_nsr_stats_data->parent = this;
    children["isis-nsr-stats-data"] = isis_nsr_stats_data;

    yang_name = "nsr-statistics"; yang_parent_name = "instance";
}

Isis::Instances::Instance::NsrStatistics::~NsrStatistics()
{
}

bool Isis::Instances::Instance::NsrStatistics::has_data() const
{
    return isis_vm_state.is_set
	|| (isis_nsr_stats_data !=  nullptr && isis_nsr_stats_data->has_data());
}

bool Isis::Instances::Instance::NsrStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(isis_vm_state.operation)
	|| (isis_nsr_stats_data !=  nullptr && isis_nsr_stats_data->has_operation());
}

std::string Isis::Instances::Instance::NsrStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-statistics";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrStatistics' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_vm_state.is_set || is_set(isis_vm_state.operation)) leaf_name_data.push_back(isis_vm_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "isis-nsr-stats-data")
    {
        if(isis_nsr_stats_data != nullptr)
        {
            children["isis-nsr-stats-data"] = isis_nsr_stats_data;
        }
        else
        {
            isis_nsr_stats_data = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData>();
            isis_nsr_stats_data->parent = this;
            children["isis-nsr-stats-data"] = isis_nsr_stats_data;
        }
        return children.at("isis-nsr-stats-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatistics::get_children()
{
    if(children.find("isis-nsr-stats-data") == children.end())
    {
        if(isis_nsr_stats_data != nullptr)
        {
            children["isis-nsr-stats-data"] = isis_nsr_stats_data;
        }
    }

    return children;
}

void Isis::Instances::Instance::NsrStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state = value;
    }
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::IsisNsrStatsData()
    :
    self(std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self>())
{
    self->parent = this;
    children["self"] = self;

    yang_name = "isis-nsr-stats-data"; yang_parent_name = "nsr-statistics";
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::~IsisNsrStatsData()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return (self !=  nullptr && self->has_data());
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (self !=  nullptr && self->has_operation());
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-nsr-stats-data";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisNsrStatsData' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer>();
        c->parent = this;
        peer.push_back(std::move(c));
        children[segment_path] = peer.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "self")
    {
        if(self != nullptr)
        {
            children["self"] = self;
        }
        else
        {
            self = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self>();
            self->parent = this;
            children["self"] = self;
        }
        return children.at("self");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_children()
{
    for (auto const & c : peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("self") == children.end())
    {
        if(self != nullptr)
        {
            children["self"] = self;
        }
    }

    return children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::Self()
    :
    no_of_ipv4_routes{YType::uint32, "no-of-ipv4-routes"},
    no_of_ipv6_routes{YType::uint32, "no-of-ipv6-routes"},
    no_of_l1_adj{YType::uint16, "no-of-l1-adj"},
    no_of_l1_lsp{YType::uint32, "no-of-l1-lsp"},
    no_of_l2_adj{YType::uint16, "no-of-l2-adj"},
    no_of_l2_lsp{YType::uint32, "no-of-l2-lsp"},
    no_of_lan_interface{YType::uint16, "no-of-lan-interface"},
    no_of_live_interface{YType::uint16, "no-of-live-interface"},
    no_of_loopback_interface{YType::uint16, "no-of-loopback-interface"},
    no_of_ptp_interface{YType::uint16, "no-of-ptp-interface"},
    no_of_te_links{YType::uint16, "no-of-te-links"},
    no_of_te_tunnels{YType::uint16, "no-of-te-tunnels"},
    seqnum{YType::uint32, "seqnum"}
{
    yang_name = "self"; yang_parent_name = "isis-nsr-stats-data";
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::~Self()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_data() const
{
    return no_of_ipv4_routes.is_set
	|| no_of_ipv6_routes.is_set
	|| no_of_l1_adj.is_set
	|| no_of_l1_lsp.is_set
	|| no_of_l2_adj.is_set
	|| no_of_l2_lsp.is_set
	|| no_of_lan_interface.is_set
	|| no_of_live_interface.is_set
	|| no_of_loopback_interface.is_set
	|| no_of_ptp_interface.is_set
	|| no_of_te_links.is_set
	|| no_of_te_tunnels.is_set
	|| seqnum.is_set;
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_operation() const
{
    return is_set(operation)
	|| is_set(no_of_ipv4_routes.operation)
	|| is_set(no_of_ipv6_routes.operation)
	|| is_set(no_of_l1_adj.operation)
	|| is_set(no_of_l1_lsp.operation)
	|| is_set(no_of_l2_adj.operation)
	|| is_set(no_of_l2_lsp.operation)
	|| is_set(no_of_lan_interface.operation)
	|| is_set(no_of_live_interface.operation)
	|| is_set(no_of_loopback_interface.operation)
	|| is_set(no_of_ptp_interface.operation)
	|| is_set(no_of_te_links.operation)
	|| is_set(no_of_te_tunnels.operation)
	|| is_set(seqnum.operation);
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "self";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Self' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_of_ipv4_routes.is_set || is_set(no_of_ipv4_routes.operation)) leaf_name_data.push_back(no_of_ipv4_routes.get_name_leafdata());
    if (no_of_ipv6_routes.is_set || is_set(no_of_ipv6_routes.operation)) leaf_name_data.push_back(no_of_ipv6_routes.get_name_leafdata());
    if (no_of_l1_adj.is_set || is_set(no_of_l1_adj.operation)) leaf_name_data.push_back(no_of_l1_adj.get_name_leafdata());
    if (no_of_l1_lsp.is_set || is_set(no_of_l1_lsp.operation)) leaf_name_data.push_back(no_of_l1_lsp.get_name_leafdata());
    if (no_of_l2_adj.is_set || is_set(no_of_l2_adj.operation)) leaf_name_data.push_back(no_of_l2_adj.get_name_leafdata());
    if (no_of_l2_lsp.is_set || is_set(no_of_l2_lsp.operation)) leaf_name_data.push_back(no_of_l2_lsp.get_name_leafdata());
    if (no_of_lan_interface.is_set || is_set(no_of_lan_interface.operation)) leaf_name_data.push_back(no_of_lan_interface.get_name_leafdata());
    if (no_of_live_interface.is_set || is_set(no_of_live_interface.operation)) leaf_name_data.push_back(no_of_live_interface.get_name_leafdata());
    if (no_of_loopback_interface.is_set || is_set(no_of_loopback_interface.operation)) leaf_name_data.push_back(no_of_loopback_interface.get_name_leafdata());
    if (no_of_ptp_interface.is_set || is_set(no_of_ptp_interface.operation)) leaf_name_data.push_back(no_of_ptp_interface.get_name_leafdata());
    if (no_of_te_links.is_set || is_set(no_of_te_links.operation)) leaf_name_data.push_back(no_of_te_links.get_name_leafdata());
    if (no_of_te_tunnels.is_set || is_set(no_of_te_tunnels.operation)) leaf_name_data.push_back(no_of_te_tunnels.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.operation)) leaf_name_data.push_back(seqnum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes = value;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes = value;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj = value;
    }
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp = value;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj = value;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp = value;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface = value;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface = value;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface = value;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface = value;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links = value;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels = value;
    }
    if(value_path == "seqnum")
    {
        seqnum = value;
    }
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::Peer()
    :
    no_of_ipv4_routes{YType::uint32, "no-of-ipv4-routes"},
    no_of_ipv6_routes{YType::uint32, "no-of-ipv6-routes"},
    no_of_l1_adj{YType::uint16, "no-of-l1-adj"},
    no_of_l1_lsp{YType::uint32, "no-of-l1-lsp"},
    no_of_l2_adj{YType::uint16, "no-of-l2-adj"},
    no_of_l2_lsp{YType::uint32, "no-of-l2-lsp"},
    no_of_lan_interface{YType::uint16, "no-of-lan-interface"},
    no_of_live_interface{YType::uint16, "no-of-live-interface"},
    no_of_loopback_interface{YType::uint16, "no-of-loopback-interface"},
    no_of_ptp_interface{YType::uint16, "no-of-ptp-interface"},
    no_of_te_links{YType::uint16, "no-of-te-links"},
    no_of_te_tunnels{YType::uint16, "no-of-te-tunnels"},
    seqnum{YType::uint32, "seqnum"}
{
    yang_name = "peer"; yang_parent_name = "isis-nsr-stats-data";
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::~Peer()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_data() const
{
    return no_of_ipv4_routes.is_set
	|| no_of_ipv6_routes.is_set
	|| no_of_l1_adj.is_set
	|| no_of_l1_lsp.is_set
	|| no_of_l2_adj.is_set
	|| no_of_l2_lsp.is_set
	|| no_of_lan_interface.is_set
	|| no_of_live_interface.is_set
	|| no_of_loopback_interface.is_set
	|| no_of_ptp_interface.is_set
	|| no_of_te_links.is_set
	|| no_of_te_tunnels.is_set
	|| seqnum.is_set;
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(no_of_ipv4_routes.operation)
	|| is_set(no_of_ipv6_routes.operation)
	|| is_set(no_of_l1_adj.operation)
	|| is_set(no_of_l1_lsp.operation)
	|| is_set(no_of_l2_adj.operation)
	|| is_set(no_of_l2_lsp.operation)
	|| is_set(no_of_lan_interface.operation)
	|| is_set(no_of_live_interface.operation)
	|| is_set(no_of_loopback_interface.operation)
	|| is_set(no_of_ptp_interface.operation)
	|| is_set(no_of_te_links.operation)
	|| is_set(no_of_te_tunnels.operation)
	|| is_set(seqnum.operation);
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_of_ipv4_routes.is_set || is_set(no_of_ipv4_routes.operation)) leaf_name_data.push_back(no_of_ipv4_routes.get_name_leafdata());
    if (no_of_ipv6_routes.is_set || is_set(no_of_ipv6_routes.operation)) leaf_name_data.push_back(no_of_ipv6_routes.get_name_leafdata());
    if (no_of_l1_adj.is_set || is_set(no_of_l1_adj.operation)) leaf_name_data.push_back(no_of_l1_adj.get_name_leafdata());
    if (no_of_l1_lsp.is_set || is_set(no_of_l1_lsp.operation)) leaf_name_data.push_back(no_of_l1_lsp.get_name_leafdata());
    if (no_of_l2_adj.is_set || is_set(no_of_l2_adj.operation)) leaf_name_data.push_back(no_of_l2_adj.get_name_leafdata());
    if (no_of_l2_lsp.is_set || is_set(no_of_l2_lsp.operation)) leaf_name_data.push_back(no_of_l2_lsp.get_name_leafdata());
    if (no_of_lan_interface.is_set || is_set(no_of_lan_interface.operation)) leaf_name_data.push_back(no_of_lan_interface.get_name_leafdata());
    if (no_of_live_interface.is_set || is_set(no_of_live_interface.operation)) leaf_name_data.push_back(no_of_live_interface.get_name_leafdata());
    if (no_of_loopback_interface.is_set || is_set(no_of_loopback_interface.operation)) leaf_name_data.push_back(no_of_loopback_interface.get_name_leafdata());
    if (no_of_ptp_interface.is_set || is_set(no_of_ptp_interface.operation)) leaf_name_data.push_back(no_of_ptp_interface.get_name_leafdata());
    if (no_of_te_links.is_set || is_set(no_of_te_links.operation)) leaf_name_data.push_back(no_of_te_links.get_name_leafdata());
    if (no_of_te_tunnels.is_set || is_set(no_of_te_tunnels.operation)) leaf_name_data.push_back(no_of_te_tunnels.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.operation)) leaf_name_data.push_back(seqnum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_children()
{
    return children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes = value;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes = value;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj = value;
    }
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp = value;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj = value;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp = value;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface = value;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface = value;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface = value;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface = value;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links = value;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels = value;
    }
    if(value_path == "seqnum")
    {
        seqnum = value;
    }
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnels()
{
    yang_name = "checkpoint-te-tunnels"; yang_parent_name = "instance";
}

Isis::Instances::Instance::CheckpointTeTunnels::~CheckpointTeTunnels()
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_data() const
{
    for (std::size_t index=0; index<checkpoint_te_tunnel.size(); index++)
    {
        if(checkpoint_te_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_te_tunnel.size(); index++)
    {
        if(checkpoint_te_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Isis::Instances::Instance::CheckpointTeTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-te-tunnels";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::CheckpointTeTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointTeTunnels' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointTeTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "checkpoint-te-tunnel")
    {
        for(auto const & c : checkpoint_te_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel>();
        c->parent = this;
        checkpoint_te_tunnel.push_back(std::move(c));
        children[segment_path] = checkpoint_te_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::CheckpointTeTunnels::get_children()
{
    for (auto const & c : checkpoint_te_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Isis::Instances::Instance::CheckpointTeTunnels::set_value(const std::string & value_path, std::string value)
{
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::CheckpointTeTunnel()
    :
    checkpoint_te_bandwidth{YType::uint32, "checkpoint-te-bandwidth"},
    checkpoint_te_flags{YType::uint32, "checkpoint-te-flags"},
    checkpoint_te_interface{YType::str, "checkpoint-te-interface"},
    checkpoint_te_level{YType::enumeration, "checkpoint-te-level"},
    checkpoint_te_metric{YType::int32, "checkpoint-te-metric"},
    checkpoint_te_metric_mode{YType::enumeration, "checkpoint-te-metric-mode"},
    checkpoint_te_nexthop{YType::str, "checkpoint-te-nexthop"},
    checkpoint_te_object_id{YType::uint32, "checkpoint-te-object-id"},
    checkpoint_te_system_id{YType::str, "checkpoint-te-system-id"},
    interface_name{YType::str, "interface-name"},
    level{YType::enumeration, "level"}
{
    yang_name = "checkpoint-te-tunnel"; yang_parent_name = "checkpoint-te-tunnels";
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::~CheckpointTeTunnel()
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_data() const
{
    return checkpoint_te_bandwidth.is_set
	|| checkpoint_te_flags.is_set
	|| checkpoint_te_interface.is_set
	|| checkpoint_te_level.is_set
	|| checkpoint_te_metric.is_set
	|| checkpoint_te_metric_mode.is_set
	|| checkpoint_te_nexthop.is_set
	|| checkpoint_te_object_id.is_set
	|| checkpoint_te_system_id.is_set
	|| interface_name.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(checkpoint_te_bandwidth.operation)
	|| is_set(checkpoint_te_flags.operation)
	|| is_set(checkpoint_te_interface.operation)
	|| is_set(checkpoint_te_level.operation)
	|| is_set(checkpoint_te_metric.operation)
	|| is_set(checkpoint_te_metric_mode.operation)
	|| is_set(checkpoint_te_nexthop.operation)
	|| is_set(checkpoint_te_object_id.operation)
	|| is_set(checkpoint_te_system_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(level.operation);
}

std::string Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-te-tunnel";

    return path_buffer.str();

}

EntityPath Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckpointTeTunnel' in Cisco_IOS_XR_clns_isis_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checkpoint_te_bandwidth.is_set || is_set(checkpoint_te_bandwidth.operation)) leaf_name_data.push_back(checkpoint_te_bandwidth.get_name_leafdata());
    if (checkpoint_te_flags.is_set || is_set(checkpoint_te_flags.operation)) leaf_name_data.push_back(checkpoint_te_flags.get_name_leafdata());
    if (checkpoint_te_interface.is_set || is_set(checkpoint_te_interface.operation)) leaf_name_data.push_back(checkpoint_te_interface.get_name_leafdata());
    if (checkpoint_te_level.is_set || is_set(checkpoint_te_level.operation)) leaf_name_data.push_back(checkpoint_te_level.get_name_leafdata());
    if (checkpoint_te_metric.is_set || is_set(checkpoint_te_metric.operation)) leaf_name_data.push_back(checkpoint_te_metric.get_name_leafdata());
    if (checkpoint_te_metric_mode.is_set || is_set(checkpoint_te_metric_mode.operation)) leaf_name_data.push_back(checkpoint_te_metric_mode.get_name_leafdata());
    if (checkpoint_te_nexthop.is_set || is_set(checkpoint_te_nexthop.operation)) leaf_name_data.push_back(checkpoint_te_nexthop.get_name_leafdata());
    if (checkpoint_te_object_id.is_set || is_set(checkpoint_te_object_id.operation)) leaf_name_data.push_back(checkpoint_te_object_id.get_name_leafdata());
    if (checkpoint_te_system_id.is_set || is_set(checkpoint_te_system_id.operation)) leaf_name_data.push_back(checkpoint_te_system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_children()
{
    return children;
}

void Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "checkpoint-te-bandwidth")
    {
        checkpoint_te_bandwidth = value;
    }
    if(value_path == "checkpoint-te-flags")
    {
        checkpoint_te_flags = value;
    }
    if(value_path == "checkpoint-te-interface")
    {
        checkpoint_te_interface = value;
    }
    if(value_path == "checkpoint-te-level")
    {
        checkpoint_te_level = value;
    }
    if(value_path == "checkpoint-te-metric")
    {
        checkpoint_te_metric = value;
    }
    if(value_path == "checkpoint-te-metric-mode")
    {
        checkpoint_te_metric_mode = value;
    }
    if(value_path == "checkpoint-te-nexthop")
    {
        checkpoint_te_nexthop = value;
    }
    if(value_path == "checkpoint-te-object-id")
    {
        checkpoint_te_object_id = value;
    }
    if(value_path == "checkpoint-te-system-id")
    {
        checkpoint_te_system_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
}


}
}

