
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_flowspec_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_flowspec_oper {

FlowSpec::FlowSpec()
    :
    clients(std::make_shared<FlowSpec::Clients>())
    , summary(std::make_shared<FlowSpec::Summary>())
    , vrfs(std::make_shared<FlowSpec::Vrfs>())
{
    clients->parent = this;
    summary->parent = this;
    vrfs->parent = this;

    yang_name = "flow-spec"; yang_parent_name = "Cisco-IOS-XR-flowspec-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

FlowSpec::~FlowSpec()
{
}

bool FlowSpec::has_data() const
{
    if (is_presence_container) return true;
    return (clients !=  nullptr && clients->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool FlowSpec::has_operation() const
{
    return is_set(yfilter)
	|| (clients !=  nullptr && clients->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string FlowSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-oper:flow-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients")
    {
        if(clients == nullptr)
        {
            clients = std::make_shared<FlowSpec::Clients>();
        }
        return clients;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<FlowSpec::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<FlowSpec::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(clients != nullptr)
    {
        children["clients"] = clients;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void FlowSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> FlowSpec::clone_ptr() const
{
    return std::make_shared<FlowSpec>();
}

std::string FlowSpec::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string FlowSpec::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function FlowSpec::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FlowSpec::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool FlowSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clients" || name == "summary" || name == "vrfs")
        return true;
    return false;
}

FlowSpec::Clients::Clients()
    :
    client(this, {})
{

    yang_name = "clients"; yang_parent_name = "flow-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

FlowSpec::Clients::~Clients()
{
}

bool FlowSpec::Clients::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool FlowSpec::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.len(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FlowSpec::Clients::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-oper:flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowSpec::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        auto c = std::make_shared<FlowSpec::Clients::Client>();
        c->parent = this;
        client.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : client.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FlowSpec::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowSpec::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

FlowSpec::Clients::Client::Client()
    :
    client_type{YType::enumeration, "client-type"},
    client_id{YType::uint32, "client-id"},
    client_state{YType::enumeration, "client-state"},
    client_flows{YType::uint32, "client-flows"}
{

    yang_name = "client"; yang_parent_name = "clients"; is_top_level_class = false; has_list_ancestor = false; 
}

FlowSpec::Clients::Client::~Client()
{
}

bool FlowSpec::Clients::Client::has_data() const
{
    if (is_presence_container) return true;
    return client_type.is_set
	|| client_id.is_set
	|| client_state.is_set
	|| client_flows.is_set;
}

bool FlowSpec::Clients::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_type.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(client_state.yfilter)
	|| ydk::is_set(client_flows.yfilter);
}

std::string FlowSpec::Clients::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-oper:flow-spec/clients/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowSpec::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Clients::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_type.is_set || is_set(client_type.yfilter)) leaf_name_data.push_back(client_type.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (client_state.is_set || is_set(client_state.yfilter)) leaf_name_data.push_back(client_state.get_name_leafdata());
    if (client_flows.is_set || is_set(client_flows.yfilter)) leaf_name_data.push_back(client_flows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Clients::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FlowSpec::Clients::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-type")
    {
        client_type = value;
        client_type.value_namespace = name_space;
        client_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-state")
    {
        client_state = value;
        client_state.value_namespace = name_space;
        client_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-flows")
    {
        client_flows = value;
        client_flows.value_namespace = name_space;
        client_flows.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Clients::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-type")
    {
        client_type.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "client-state")
    {
        client_state.yfilter = yfilter;
    }
    if(value_path == "client-flows")
    {
        client_flows.yfilter = yfilter;
    }
}

bool FlowSpec::Clients::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-type" || name == "client-id" || name == "client-state" || name == "client-flows")
        return true;
    return false;
}

FlowSpec::Summary::Summary()
    :
    vrfafi_tables{YType::uint32, "vrfafi-tables"},
    flows{YType::uint32, "flows"}
{

    yang_name = "summary"; yang_parent_name = "flow-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

FlowSpec::Summary::~Summary()
{
}

bool FlowSpec::Summary::has_data() const
{
    if (is_presence_container) return true;
    return vrfafi_tables.is_set
	|| flows.is_set;
}

bool FlowSpec::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrfafi_tables.yfilter)
	|| ydk::is_set(flows.yfilter);
}

std::string FlowSpec::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-oper:flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowSpec::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrfafi_tables.is_set || is_set(vrfafi_tables.yfilter)) leaf_name_data.push_back(vrfafi_tables.get_name_leafdata());
    if (flows.is_set || is_set(flows.yfilter)) leaf_name_data.push_back(flows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FlowSpec::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrfafi-tables")
    {
        vrfafi_tables = value;
        vrfafi_tables.value_namespace = name_space;
        vrfafi_tables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flows")
    {
        flows = value;
        flows.value_namespace = name_space;
        flows.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrfafi-tables")
    {
        vrfafi_tables.yfilter = yfilter;
    }
    if(value_path == "flows")
    {
        flows.yfilter = yfilter;
    }
}

bool FlowSpec::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfafi-tables" || name == "flows")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "flow-spec"; is_top_level_class = false; has_list_ancestor = false; 
}

FlowSpec::Vrfs::~Vrfs()
{
}

bool FlowSpec::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool FlowSpec::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FlowSpec::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-oper:flow-spec/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowSpec::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<FlowSpec::Vrfs::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FlowSpec::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowSpec::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    afs(std::make_shared<FlowSpec::Vrfs::Vrf::Afs>())
{
    afs->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

FlowSpec::Vrfs::Vrf::~Vrf()
{
}

bool FlowSpec::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (afs !=  nullptr && afs->has_data());
}

bool FlowSpec::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string FlowSpec::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-flowspec-oper:flow-spec/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string FlowSpec::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<FlowSpec::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    return children;
}

void FlowSpec::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool FlowSpec::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afs" || name == "vrf-name")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Afs()
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::~Afs()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool FlowSpec::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FlowSpec::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto c = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : af.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::Vrfs::Vrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowSpec::Vrfs::Vrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::str, "af-name"}
        ,
    table_summary(std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary>())
    , nlris(std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Nlris>())
    , flows(std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Flows>())
{
    table_summary->parent = this;
    nlris->parent = this;
    flows->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (table_summary !=  nullptr && table_summary->has_data())
	|| (nlris !=  nullptr && nlris->has_data())
	|| (flows !=  nullptr && flows->has_data());
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (table_summary !=  nullptr && table_summary->has_operation())
	|| (nlris !=  nullptr && nlris->has_operation())
	|| (flows !=  nullptr && flows->has_operation());
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-summary")
    {
        if(table_summary == nullptr)
        {
            table_summary = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary>();
        }
        return table_summary;
    }

    if(child_yang_name == "nlris")
    {
        if(nlris == nullptr)
        {
            nlris = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Nlris>();
        }
        return nlris;
    }

    if(child_yang_name == "flows")
    {
        if(flows == nullptr)
        {
            flows = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Flows>();
        }
        return flows;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(table_summary != nullptr)
    {
        children["table-summary"] = table_summary;
    }

    if(nlris != nullptr)
    {
        children["nlris"] = nlris;
    }

    if(flows != nullptr)
    {
        children["flows"] = flows;
    }

    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Vrfs::Vrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-summary" || name == "nlris" || name == "flows" || name == "af-name")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary::TableSummary()
    :
    total_flows{YType::uint32, "total-flows"},
    service_policies{YType::uint32, "service-policies"},
    local_install_enabled{YType::boolean, "local-install-enabled"}
{

    yang_name = "table-summary"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary::~TableSummary()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary::has_data() const
{
    if (is_presence_container) return true;
    return total_flows.is_set
	|| service_policies.is_set
	|| local_install_enabled.is_set;
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_flows.yfilter)
	|| ydk::is_set(service_policies.yfilter)
	|| ydk::is_set(local_install_enabled.yfilter);
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_flows.is_set || is_set(total_flows.yfilter)) leaf_name_data.push_back(total_flows.get_name_leafdata());
    if (service_policies.is_set || is_set(service_policies.yfilter)) leaf_name_data.push_back(service_policies.get_name_leafdata());
    if (local_install_enabled.is_set || is_set(local_install_enabled.yfilter)) leaf_name_data.push_back(local_install_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-flows")
    {
        total_flows = value;
        total_flows.value_namespace = name_space;
        total_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-policies")
    {
        service_policies = value;
        service_policies.value_namespace = name_space;
        service_policies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-install-enabled")
    {
        local_install_enabled = value;
        local_install_enabled.value_namespace = name_space;
        local_install_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-flows")
    {
        total_flows.yfilter = yfilter;
    }
    if(value_path == "service-policies")
    {
        service_policies.yfilter = yfilter;
    }
    if(value_path == "local-install-enabled")
    {
        local_install_enabled.yfilter = yfilter;
    }
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::TableSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-flows" || name == "service-policies" || name == "local-install-enabled")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlris()
    :
    nlri(this, {"nlri_bytes"})
{

    yang_name = "nlris"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::~Nlris()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nlri.len(); index++)
    {
        if(nlri[index]->has_data())
            return true;
    }
    return false;
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::has_operation() const
{
    for (std::size_t index=0; index<nlri.len(); index++)
    {
        if(nlri[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlris";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlri")
    {
        auto c = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri>();
        c->parent = this;
        nlri.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nlri.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlri")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::Nlri()
    :
    nlri_bytes{YType::str, "nlri-bytes"}
        ,
    flow_statistics(std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics>())
{
    flow_statistics->parent = this;

    yang_name = "nlri"; yang_parent_name = "nlris"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::~Nlri()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::has_data() const
{
    if (is_presence_container) return true;
    return nlri_bytes.is_set
	|| (flow_statistics !=  nullptr && flow_statistics->has_data());
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlri_bytes.yfilter)
	|| (flow_statistics !=  nullptr && flow_statistics->has_operation());
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlri";
    ADD_KEY_TOKEN(nlri_bytes, "nlri-bytes");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlri_bytes.is_set || is_set(nlri_bytes.yfilter)) leaf_name_data.push_back(nlri_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-statistics")
    {
        if(flow_statistics == nullptr)
        {
            flow_statistics = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics>();
        }
        return flow_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow_statistics != nullptr)
    {
        children["flow-statistics"] = flow_statistics;
    }

    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlri-bytes")
    {
        nlri_bytes = value;
        nlri_bytes.value_namespace = name_space;
        nlri_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlri-bytes")
    {
        nlri_bytes.yfilter = yfilter;
    }
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-statistics" || name == "nlri-bytes")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::FlowStatistics()
    :
    classified(std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified>())
    , dropped(std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped>())
{
    classified->parent = this;
    dropped->parent = this;

    yang_name = "flow-statistics"; yang_parent_name = "nlri"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::~FlowStatistics()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (classified !=  nullptr && classified->has_data())
	|| (dropped !=  nullptr && dropped->has_data());
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (classified !=  nullptr && classified->has_operation())
	|| (dropped !=  nullptr && dropped->has_operation());
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classified")
    {
        if(classified == nullptr)
        {
            classified = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified>();
        }
        return classified;
    }

    if(child_yang_name == "dropped")
    {
        if(dropped == nullptr)
        {
            dropped = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped>();
        }
        return dropped;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(classified != nullptr)
    {
        children["classified"] = classified;
    }

    if(dropped != nullptr)
    {
        children["dropped"] = dropped;
    }

    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classified" || name == "dropped")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified::Classified()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "classified"; yang_parent_name = "flow-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified::~Classified()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classified";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Classified::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped::Dropped()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "dropped"; yang_parent_name = "flow-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped::~Dropped()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Nlris::Nlri::FlowStatistics::Dropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flows()
    :
    flow(this, {"flow_notation"})
{

    yang_name = "flows"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::Flows::~Flows()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow.len(); index++)
    {
        if(flow[index]->has_data())
            return true;
    }
    return false;
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::has_operation() const
{
    for (std::size_t index=0; index<flow.len(); index++)
    {
        if(flow[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::Flows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flows";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::Flows::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::Af::Flows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        auto c = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow>();
        c->parent = this;
        flow.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::Flows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : flow.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Flows::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Flows::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::Flow()
    :
    flow_notation{YType::str, "flow-notation"}
        ,
    flow_statistics(std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics>())
{
    flow_statistics->parent = this;

    yang_name = "flow"; yang_parent_name = "flows"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::~Flow()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::has_data() const
{
    if (is_presence_container) return true;
    return flow_notation.is_set
	|| (flow_statistics !=  nullptr && flow_statistics->has_data());
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_notation.yfilter)
	|| (flow_statistics !=  nullptr && flow_statistics->has_operation());
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    ADD_KEY_TOKEN(flow_notation, "flow-notation");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_notation.is_set || is_set(flow_notation.yfilter)) leaf_name_data.push_back(flow_notation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-statistics")
    {
        if(flow_statistics == nullptr)
        {
            flow_statistics = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics>();
        }
        return flow_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow_statistics != nullptr)
    {
        children["flow-statistics"] = flow_statistics;
    }

    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-notation")
    {
        flow_notation = value;
        flow_notation.value_namespace = name_space;
        flow_notation.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-notation")
    {
        flow_notation.yfilter = yfilter;
    }
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-statistics" || name == "flow-notation")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::FlowStatistics()
    :
    classified(std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified>())
    , dropped(std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped>())
{
    classified->parent = this;
    dropped->parent = this;

    yang_name = "flow-statistics"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::~FlowStatistics()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (classified !=  nullptr && classified->has_data())
	|| (dropped !=  nullptr && dropped->has_data());
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (classified !=  nullptr && classified->has_operation())
	|| (dropped !=  nullptr && dropped->has_operation());
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classified")
    {
        if(classified == nullptr)
        {
            classified = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified>();
        }
        return classified;
    }

    if(child_yang_name == "dropped")
    {
        if(dropped == nullptr)
        {
            dropped = std::make_shared<FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped>();
        }
        return dropped;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(classified != nullptr)
    {
        children["classified"] = classified;
    }

    if(dropped != nullptr)
    {
        children["dropped"] = dropped;
    }

    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classified" || name == "dropped")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified::Classified()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "classified"; yang_parent_name = "flow-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified::~Classified()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classified";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Classified::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped::Dropped()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "dropped"; yang_parent_name = "flow-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped::~Dropped()
{
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dropped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool FlowSpec::Vrfs::Vrf::Afs::Af::Flows::Flow::FlowStatistics::Dropped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

const Enum::YLeaf FsClient::bgp {0, "bgp"};
const Enum::YLeaf FsClient::one_pk {1, "one-pk"};
const Enum::YLeaf FsClient::policy {2, "policy"};
const Enum::YLeaf FsClient::ha {3, "ha"};
const Enum::YLeaf FsClient::test {4, "test"};

const Enum::YLeaf FsMgrClientState::dormant {0, "dormant"};
const Enum::YLeaf FsMgrClientState::connected {1, "connected"};
const Enum::YLeaf FsMgrClientState::replay {2, "replay"};
const Enum::YLeaf FsMgrClientState::unconfigured {3, "unconfigured"};


}
}

