
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_lc_fca_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_lc_fca_oper {

MpaInternal::MpaInternal()
    :
    nodes(std::make_shared<MpaInternal::Nodes>())
{
    nodes->parent = this;

    yang_name = "mpa-internal"; yang_parent_name = "Cisco-IOS-XR-asr9k-lc-fca-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MpaInternal::~MpaInternal()
{
}

bool MpaInternal::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool MpaInternal::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string MpaInternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-fca-oper:mpa-internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MpaInternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MpaInternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<MpaInternal::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MpaInternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void MpaInternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MpaInternal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MpaInternal::clone_ptr() const
{
    return std::make_shared<MpaInternal>();
}

std::string MpaInternal::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MpaInternal::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MpaInternal::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MpaInternal::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MpaInternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

MpaInternal::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "mpa-internal"; is_top_level_class = false; has_list_ancestor = false;
}

MpaInternal::Nodes::~Nodes()
{
}

bool MpaInternal::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool MpaInternal::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MpaInternal::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-fca-oper:mpa-internal/" << get_segment_path();
    return path_buffer.str();
}

std::string MpaInternal::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MpaInternal::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MpaInternal::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MpaInternal::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MpaInternal::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MpaInternal::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MpaInternal::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MpaInternal::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

MpaInternal::Nodes::Node::Node()
    :
    node{YType::str, "node"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

MpaInternal::Nodes::Node::~Node()
{
}

bool MpaInternal::Nodes::Node::has_data() const
{
    for (std::size_t index=0; index<bay.size(); index++)
    {
        if(bay[index]->has_data())
            return true;
    }
    return node.is_set;
}

bool MpaInternal::Nodes::Node::has_operation() const
{
    for (std::size_t index=0; index<bay.size(); index++)
    {
        if(bay[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string MpaInternal::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-fca-oper:mpa-internal/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string MpaInternal::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MpaInternal::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MpaInternal::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bay")
    {
        for(auto const & c : bay)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MpaInternal::Nodes::Node::Bay>();
        c->parent = this;
        bay.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MpaInternal::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bay)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MpaInternal::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void MpaInternal::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool MpaInternal::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bay" || name == "node")
        return true;
    return false;
}

MpaInternal::Nodes::Node::Bay::Bay()
    :
    number{YType::int32, "number"}
    	,
    ifsubsies(std::make_shared<MpaInternal::Nodes::Node::Bay::Ifsubsies>())
{
    ifsubsies->parent = this;

    yang_name = "bay"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

MpaInternal::Nodes::Node::Bay::~Bay()
{
}

bool MpaInternal::Nodes::Node::Bay::has_data() const
{
    return number.is_set
	|| (ifsubsies !=  nullptr && ifsubsies->has_data());
}

bool MpaInternal::Nodes::Node::Bay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (ifsubsies !=  nullptr && ifsubsies->has_operation());
}

std::string MpaInternal::Nodes::Node::Bay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bay" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MpaInternal::Nodes::Node::Bay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MpaInternal::Nodes::Node::Bay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifsubsies")
    {
        if(ifsubsies == nullptr)
        {
            ifsubsies = std::make_shared<MpaInternal::Nodes::Node::Bay::Ifsubsies>();
        }
        return ifsubsies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MpaInternal::Nodes::Node::Bay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ifsubsies != nullptr)
    {
        children["ifsubsies"] = ifsubsies;
    }

    return children;
}

void MpaInternal::Nodes::Node::Bay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void MpaInternal::Nodes::Node::Bay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool MpaInternal::Nodes::Node::Bay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifsubsies" || name == "number")
        return true;
    return false;
}

MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsies()
{

    yang_name = "ifsubsies"; yang_parent_name = "bay"; is_top_level_class = false; has_list_ancestor = true;
}

MpaInternal::Nodes::Node::Bay::Ifsubsies::~Ifsubsies()
{
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::has_data() const
{
    for (std::size_t index=0; index<ifsubsy.size(); index++)
    {
        if(ifsubsy[index]->has_data())
            return true;
    }
    return false;
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::has_operation() const
{
    for (std::size_t index=0; index<ifsubsy.size(); index++)
    {
        if(ifsubsy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MpaInternal::Nodes::Node::Bay::Ifsubsies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifsubsies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MpaInternal::Nodes::Node::Bay::Ifsubsies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MpaInternal::Nodes::Node::Bay::Ifsubsies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifsubsy")
    {
        for(auto const & c : ifsubsy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy>();
        c->parent = this;
        ifsubsy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MpaInternal::Nodes::Node::Bay::Ifsubsies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifsubsy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MpaInternal::Nodes::Node::Bay::Ifsubsies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MpaInternal::Nodes::Node::Bay::Ifsubsies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifsubsy")
        return true;
    return false;
}

MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::Ifsubsy()
    :
    number{YType::str, "number"}
    	,
    mpa_internal_info(std::make_shared<MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo>())
{
    mpa_internal_info->parent = this;

    yang_name = "ifsubsy"; yang_parent_name = "ifsubsies"; is_top_level_class = false; has_list_ancestor = true;
}

MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::~Ifsubsy()
{
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::has_data() const
{
    return number.is_set
	|| (mpa_internal_info !=  nullptr && mpa_internal_info->has_data());
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (mpa_internal_info !=  nullptr && mpa_internal_info->has_operation());
}

std::string MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifsubsy" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpa-internal-info")
    {
        if(mpa_internal_info == nullptr)
        {
            mpa_internal_info = std::make_shared<MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo>();
        }
        return mpa_internal_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpa_internal_info != nullptr)
    {
        children["mpa-internal-info"] = mpa_internal_info;
    }

    return children;
}

void MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpa-internal-info" || name == "number")
        return true;
    return false;
}

MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::MpaInternalInfo()
    :
    bay{YType::uint32, "bay"},
    ifsubsys{YType::uint32, "ifsubsys"},
    if_state{YType::uint8, "if-state"},
    if_event{YType::uint8, "if-event"},
    ep_type{YType::uint32, "ep-type"},
    ep_state{YType::uint8, "ep-state"},
    ep_presence{YType::uint8, "ep-presence"},
    ep_idprom_major{YType::uint8, "ep-idprom-major"},
    ep_idprom_minor{YType::uint8, "ep-idprom-minor"},
    ep_idprom_data{YType::str, "ep-idprom-data"}
{

    yang_name = "mpa-internal-info"; yang_parent_name = "ifsubsy"; is_top_level_class = false; has_list_ancestor = true;
}

MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::~MpaInternalInfo()
{
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::has_data() const
{
    return bay.is_set
	|| ifsubsys.is_set
	|| if_state.is_set
	|| if_event.is_set
	|| ep_type.is_set
	|| ep_state.is_set
	|| ep_presence.is_set
	|| ep_idprom_major.is_set
	|| ep_idprom_minor.is_set
	|| ep_idprom_data.is_set;
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bay.yfilter)
	|| ydk::is_set(ifsubsys.yfilter)
	|| ydk::is_set(if_state.yfilter)
	|| ydk::is_set(if_event.yfilter)
	|| ydk::is_set(ep_type.yfilter)
	|| ydk::is_set(ep_state.yfilter)
	|| ydk::is_set(ep_presence.yfilter)
	|| ydk::is_set(ep_idprom_major.yfilter)
	|| ydk::is_set(ep_idprom_minor.yfilter)
	|| ydk::is_set(ep_idprom_data.yfilter);
}

std::string MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpa-internal-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bay.is_set || is_set(bay.yfilter)) leaf_name_data.push_back(bay.get_name_leafdata());
    if (ifsubsys.is_set || is_set(ifsubsys.yfilter)) leaf_name_data.push_back(ifsubsys.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.yfilter)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (if_event.is_set || is_set(if_event.yfilter)) leaf_name_data.push_back(if_event.get_name_leafdata());
    if (ep_type.is_set || is_set(ep_type.yfilter)) leaf_name_data.push_back(ep_type.get_name_leafdata());
    if (ep_state.is_set || is_set(ep_state.yfilter)) leaf_name_data.push_back(ep_state.get_name_leafdata());
    if (ep_presence.is_set || is_set(ep_presence.yfilter)) leaf_name_data.push_back(ep_presence.get_name_leafdata());
    if (ep_idprom_major.is_set || is_set(ep_idprom_major.yfilter)) leaf_name_data.push_back(ep_idprom_major.get_name_leafdata());
    if (ep_idprom_minor.is_set || is_set(ep_idprom_minor.yfilter)) leaf_name_data.push_back(ep_idprom_minor.get_name_leafdata());
    if (ep_idprom_data.is_set || is_set(ep_idprom_data.yfilter)) leaf_name_data.push_back(ep_idprom_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bay")
    {
        bay = value;
        bay.value_namespace = name_space;
        bay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifsubsys")
    {
        ifsubsys = value;
        ifsubsys.value_namespace = name_space;
        ifsubsys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-state")
    {
        if_state = value;
        if_state.value_namespace = name_space;
        if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-event")
    {
        if_event = value;
        if_event.value_namespace = name_space;
        if_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ep-type")
    {
        ep_type = value;
        ep_type.value_namespace = name_space;
        ep_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ep-state")
    {
        ep_state = value;
        ep_state.value_namespace = name_space;
        ep_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ep-presence")
    {
        ep_presence = value;
        ep_presence.value_namespace = name_space;
        ep_presence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ep-idprom-major")
    {
        ep_idprom_major = value;
        ep_idprom_major.value_namespace = name_space;
        ep_idprom_major.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ep-idprom-minor")
    {
        ep_idprom_minor = value;
        ep_idprom_minor.value_namespace = name_space;
        ep_idprom_minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ep-idprom-data")
    {
        ep_idprom_data = value;
        ep_idprom_data.value_namespace = name_space;
        ep_idprom_data.value_namespace_prefix = name_space_prefix;
    }
}

void MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bay")
    {
        bay.yfilter = yfilter;
    }
    if(value_path == "ifsubsys")
    {
        ifsubsys.yfilter = yfilter;
    }
    if(value_path == "if-state")
    {
        if_state.yfilter = yfilter;
    }
    if(value_path == "if-event")
    {
        if_event.yfilter = yfilter;
    }
    if(value_path == "ep-type")
    {
        ep_type.yfilter = yfilter;
    }
    if(value_path == "ep-state")
    {
        ep_state.yfilter = yfilter;
    }
    if(value_path == "ep-presence")
    {
        ep_presence.yfilter = yfilter;
    }
    if(value_path == "ep-idprom-major")
    {
        ep_idprom_major.yfilter = yfilter;
    }
    if(value_path == "ep-idprom-minor")
    {
        ep_idprom_minor.yfilter = yfilter;
    }
    if(value_path == "ep-idprom-data")
    {
        ep_idprom_data.yfilter = yfilter;
    }
}

bool MpaInternal::Nodes::Node::Bay::Ifsubsies::Ifsubsy::MpaInternalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bay" || name == "ifsubsys" || name == "if-state" || name == "if-event" || name == "ep-type" || name == "ep-state" || name == "ep-presence" || name == "ep-idprom-major" || name == "ep-idprom-minor" || name == "ep-idprom-data")
        return true;
    return false;
}

Mpa::Mpa()
    :
    nodes(std::make_shared<Mpa::Nodes>())
{
    nodes->parent = this;

    yang_name = "mpa"; yang_parent_name = "Cisco-IOS-XR-asr9k-lc-fca-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Mpa::~Mpa()
{
}

bool Mpa::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Mpa::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Mpa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-fca-oper:mpa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Mpa::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Mpa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Mpa::clone_ptr() const
{
    return std::make_shared<Mpa>();
}

std::string Mpa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Mpa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Mpa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Mpa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Mpa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Mpa::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "mpa"; is_top_level_class = false; has_list_ancestor = false;
}

Mpa::Nodes::~Nodes()
{
}

bool Mpa::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Mpa::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mpa::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-fca-oper:mpa/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpa::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpa::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpa::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpa::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpa::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpa::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpa::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpa::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Mpa::Nodes::Node::Node()
    :
    node{YType::str, "node"}
{

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Mpa::Nodes::Node::~Node()
{
}

bool Mpa::Nodes::Node::has_data() const
{
    for (std::size_t index=0; index<bay.size(); index++)
    {
        if(bay[index]->has_data())
            return true;
    }
    return node.is_set;
}

bool Mpa::Nodes::Node::has_operation() const
{
    for (std::size_t index=0; index<bay.size(); index++)
    {
        if(bay[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string Mpa::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-fca-oper:mpa/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Mpa::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpa::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpa::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bay")
    {
        for(auto const & c : bay)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mpa::Nodes::Node::Bay>();
        c->parent = this;
        bay.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpa::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bay)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mpa::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void Mpa::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool Mpa::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bay" || name == "node")
        return true;
    return false;
}

Mpa::Nodes::Node::Bay::Bay()
    :
    number{YType::int32, "number"}
    	,
    mpa_detail_table(std::make_shared<Mpa::Nodes::Node::Bay::MpaDetailTable>())
{
    mpa_detail_table->parent = this;

    yang_name = "bay"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Mpa::Nodes::Node::Bay::~Bay()
{
}

bool Mpa::Nodes::Node::Bay::has_data() const
{
    return number.is_set
	|| (mpa_detail_table !=  nullptr && mpa_detail_table->has_data());
}

bool Mpa::Nodes::Node::Bay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (mpa_detail_table !=  nullptr && mpa_detail_table->has_operation());
}

std::string Mpa::Nodes::Node::Bay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bay" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpa::Nodes::Node::Bay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpa::Nodes::Node::Bay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpa-detail-table")
    {
        if(mpa_detail_table == nullptr)
        {
            mpa_detail_table = std::make_shared<Mpa::Nodes::Node::Bay::MpaDetailTable>();
        }
        return mpa_detail_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpa::Nodes::Node::Bay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpa_detail_table != nullptr)
    {
        children["mpa-detail-table"] = mpa_detail_table;
    }

    return children;
}

void Mpa::Nodes::Node::Bay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Mpa::Nodes::Node::Bay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Mpa::Nodes::Node::Bay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpa-detail-table" || name == "number")
        return true;
    return false;
}

Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetailTable()
    :
    mpa_detail(std::make_shared<Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail>())
{
    mpa_detail->parent = this;

    yang_name = "mpa-detail-table"; yang_parent_name = "bay"; is_top_level_class = false; has_list_ancestor = true;
}

Mpa::Nodes::Node::Bay::MpaDetailTable::~MpaDetailTable()
{
}

bool Mpa::Nodes::Node::Bay::MpaDetailTable::has_data() const
{
    return (mpa_detail !=  nullptr && mpa_detail->has_data());
}

bool Mpa::Nodes::Node::Bay::MpaDetailTable::has_operation() const
{
    return is_set(yfilter)
	|| (mpa_detail !=  nullptr && mpa_detail->has_operation());
}

std::string Mpa::Nodes::Node::Bay::MpaDetailTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpa-detail-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpa::Nodes::Node::Bay::MpaDetailTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mpa::Nodes::Node::Bay::MpaDetailTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpa-detail")
    {
        if(mpa_detail == nullptr)
        {
            mpa_detail = std::make_shared<Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail>();
        }
        return mpa_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpa::Nodes::Node::Bay::MpaDetailTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpa_detail != nullptr)
    {
        children["mpa-detail"] = mpa_detail;
    }

    return children;
}

void Mpa::Nodes::Node::Bay::MpaDetailTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mpa::Nodes::Node::Bay::MpaDetailTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mpa::Nodes::Node::Bay::MpaDetailTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpa-detail")
        return true;
    return false;
}

Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::MpaDetail()
    :
    bay_number{YType::uint16, "bay-number"},
    is_spa_inserted{YType::boolean, "is-spa-inserted"},
    spa_type{YType::uint16, "spa-type"},
    is_spa_admin_up{YType::boolean, "is-spa-admin-up"},
    spa_oper_state{YType::enumeration, "spa-oper-state"},
    is_spa_power_admin_up{YType::boolean, "is-spa-power-admin-up"},
    is_spa_powered{YType::boolean, "is-spa-powered"},
    is_spa_in_reset{YType::boolean, "is-spa-in-reset"},
    last_reset_reason{YType::enumeration, "last-reset-reason"},
    last_failure_reason{YType::enumeration, "last-failure-reason"},
    insertion_time{YType::uint32, "insertion-time"},
    last_ready_time{YType::uint32, "last-ready-time"},
    up_time{YType::uint32, "up-time"}
{

    yang_name = "mpa-detail"; yang_parent_name = "mpa-detail-table"; is_top_level_class = false; has_list_ancestor = true;
}

Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::~MpaDetail()
{
}

bool Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::has_data() const
{
    return bay_number.is_set
	|| is_spa_inserted.is_set
	|| spa_type.is_set
	|| is_spa_admin_up.is_set
	|| spa_oper_state.is_set
	|| is_spa_power_admin_up.is_set
	|| is_spa_powered.is_set
	|| is_spa_in_reset.is_set
	|| last_reset_reason.is_set
	|| last_failure_reason.is_set
	|| insertion_time.is_set
	|| last_ready_time.is_set
	|| up_time.is_set;
}

bool Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bay_number.yfilter)
	|| ydk::is_set(is_spa_inserted.yfilter)
	|| ydk::is_set(spa_type.yfilter)
	|| ydk::is_set(is_spa_admin_up.yfilter)
	|| ydk::is_set(spa_oper_state.yfilter)
	|| ydk::is_set(is_spa_power_admin_up.yfilter)
	|| ydk::is_set(is_spa_powered.yfilter)
	|| ydk::is_set(is_spa_in_reset.yfilter)
	|| ydk::is_set(last_reset_reason.yfilter)
	|| ydk::is_set(last_failure_reason.yfilter)
	|| ydk::is_set(insertion_time.yfilter)
	|| ydk::is_set(last_ready_time.yfilter)
	|| ydk::is_set(up_time.yfilter);
}

std::string Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpa-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bay_number.is_set || is_set(bay_number.yfilter)) leaf_name_data.push_back(bay_number.get_name_leafdata());
    if (is_spa_inserted.is_set || is_set(is_spa_inserted.yfilter)) leaf_name_data.push_back(is_spa_inserted.get_name_leafdata());
    if (spa_type.is_set || is_set(spa_type.yfilter)) leaf_name_data.push_back(spa_type.get_name_leafdata());
    if (is_spa_admin_up.is_set || is_set(is_spa_admin_up.yfilter)) leaf_name_data.push_back(is_spa_admin_up.get_name_leafdata());
    if (spa_oper_state.is_set || is_set(spa_oper_state.yfilter)) leaf_name_data.push_back(spa_oper_state.get_name_leafdata());
    if (is_spa_power_admin_up.is_set || is_set(is_spa_power_admin_up.yfilter)) leaf_name_data.push_back(is_spa_power_admin_up.get_name_leafdata());
    if (is_spa_powered.is_set || is_set(is_spa_powered.yfilter)) leaf_name_data.push_back(is_spa_powered.get_name_leafdata());
    if (is_spa_in_reset.is_set || is_set(is_spa_in_reset.yfilter)) leaf_name_data.push_back(is_spa_in_reset.get_name_leafdata());
    if (last_reset_reason.is_set || is_set(last_reset_reason.yfilter)) leaf_name_data.push_back(last_reset_reason.get_name_leafdata());
    if (last_failure_reason.is_set || is_set(last_failure_reason.yfilter)) leaf_name_data.push_back(last_failure_reason.get_name_leafdata());
    if (insertion_time.is_set || is_set(insertion_time.yfilter)) leaf_name_data.push_back(insertion_time.get_name_leafdata());
    if (last_ready_time.is_set || is_set(last_ready_time.yfilter)) leaf_name_data.push_back(last_ready_time.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bay-number")
    {
        bay_number = value;
        bay_number.value_namespace = name_space;
        bay_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-spa-inserted")
    {
        is_spa_inserted = value;
        is_spa_inserted.value_namespace = name_space;
        is_spa_inserted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spa-type")
    {
        spa_type = value;
        spa_type.value_namespace = name_space;
        spa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-spa-admin-up")
    {
        is_spa_admin_up = value;
        is_spa_admin_up.value_namespace = name_space;
        is_spa_admin_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spa-oper-state")
    {
        spa_oper_state = value;
        spa_oper_state.value_namespace = name_space;
        spa_oper_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-spa-power-admin-up")
    {
        is_spa_power_admin_up = value;
        is_spa_power_admin_up.value_namespace = name_space;
        is_spa_power_admin_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-spa-powered")
    {
        is_spa_powered = value;
        is_spa_powered.value_namespace = name_space;
        is_spa_powered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-spa-in-reset")
    {
        is_spa_in_reset = value;
        is_spa_in_reset.value_namespace = name_space;
        is_spa_in_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-reset-reason")
    {
        last_reset_reason = value;
        last_reset_reason.value_namespace = name_space;
        last_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-failure-reason")
    {
        last_failure_reason = value;
        last_failure_reason.value_namespace = name_space;
        last_failure_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insertion-time")
    {
        insertion_time = value;
        insertion_time.value_namespace = name_space;
        insertion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-ready-time")
    {
        last_ready_time = value;
        last_ready_time.value_namespace = name_space;
        last_ready_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
}

void Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bay-number")
    {
        bay_number.yfilter = yfilter;
    }
    if(value_path == "is-spa-inserted")
    {
        is_spa_inserted.yfilter = yfilter;
    }
    if(value_path == "spa-type")
    {
        spa_type.yfilter = yfilter;
    }
    if(value_path == "is-spa-admin-up")
    {
        is_spa_admin_up.yfilter = yfilter;
    }
    if(value_path == "spa-oper-state")
    {
        spa_oper_state.yfilter = yfilter;
    }
    if(value_path == "is-spa-power-admin-up")
    {
        is_spa_power_admin_up.yfilter = yfilter;
    }
    if(value_path == "is-spa-powered")
    {
        is_spa_powered.yfilter = yfilter;
    }
    if(value_path == "is-spa-in-reset")
    {
        is_spa_in_reset.yfilter = yfilter;
    }
    if(value_path == "last-reset-reason")
    {
        last_reset_reason.yfilter = yfilter;
    }
    if(value_path == "last-failure-reason")
    {
        last_failure_reason.yfilter = yfilter;
    }
    if(value_path == "insertion-time")
    {
        insertion_time.yfilter = yfilter;
    }
    if(value_path == "last-ready-time")
    {
        last_ready_time.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
}

bool Mpa::Nodes::Node::Bay::MpaDetailTable::MpaDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bay-number" || name == "is-spa-inserted" || name == "spa-type" || name == "is-spa-admin-up" || name == "spa-oper-state" || name == "is-spa-power-admin-up" || name == "is-spa-powered" || name == "is-spa-in-reset" || name == "last-reset-reason" || name == "last-failure-reason" || name == "insertion-time" || name == "last-ready-time" || name == "up-time")
        return true;
    return false;
}

const Enum::YLeaf SpaFailureReason::spa_failure_reason_unknown {1, "spa-failure-reason-unknown"};
const Enum::YLeaf SpaFailureReason::spa_failure_reason_spi_failure {2, "spa-failure-reason-spi-failure"};
const Enum::YLeaf SpaFailureReason::spa_failure_reason_boot {3, "spa-failure-reason-boot"};
const Enum::YLeaf SpaFailureReason::spa_failure_reason_hw_failed {4, "spa-failure-reason-hw-failed"};
const Enum::YLeaf SpaFailureReason::spa_failure_reason_sw_failed {5, "spa-failure-reason-sw-failed"};
const Enum::YLeaf SpaFailureReason::spa_failure_reason_sw_restart {6, "spa-failure-reason-sw-restart"};
const Enum::YLeaf SpaFailureReason::spa_failure_reason_check_fpd {7, "spa-failure-reason-check-fpd"};
const Enum::YLeaf SpaFailureReason::spa_failure_reason_read_type {8, "spa-failure-reason-read-type"};

const Enum::YLeaf SpaResetReason::spa_reset_reason_unknown {1, "spa-reset-reason-unknown"};
const Enum::YLeaf SpaResetReason::spa_reset_reason_manual {2, "spa-reset-reason-manual"};
const Enum::YLeaf SpaResetReason::spa_reset_reason_fpd_upgrade {3, "spa-reset-reason-fpd-upgrade"};
const Enum::YLeaf SpaResetReason::spa_reset_reason_audit_fail {4, "spa-reset-reason-audit-fail"};
const Enum::YLeaf SpaResetReason::spa_reset_reason_failure {5, "spa-reset-reason-failure"};

const Enum::YLeaf SpaOperState::spa_state_reset {1, "spa-state-reset"};
const Enum::YLeaf SpaOperState::spa_state_failed {2, "spa-state-failed"};
const Enum::YLeaf SpaOperState::spa_state_booting {3, "spa-state-booting"};
const Enum::YLeaf SpaOperState::spa_state_ready {4, "spa-state-ready"};


}
}

