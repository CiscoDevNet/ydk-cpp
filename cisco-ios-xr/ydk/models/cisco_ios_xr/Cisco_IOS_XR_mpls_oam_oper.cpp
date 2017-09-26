
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_oam_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_oam_oper {

MplsOam::MplsOam()
    :
    global(std::make_shared<MplsOam::Global>())
	,interface(std::make_shared<MplsOam::Interface>())
	,packet(std::make_shared<MplsOam::Packet>())
{
    global->parent = this;
    interface->parent = this;
    packet->parent = this;

    yang_name = "mpls-oam"; yang_parent_name = "Cisco-IOS-XR-mpls-oam-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsOam::~MplsOam()
{
}

bool MplsOam::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (packet !=  nullptr && packet->has_data());
}

bool MplsOam::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (packet !=  nullptr && packet->has_operation());
}

std::string MplsOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsOam::Global>();
        }
        return global;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<MplsOam::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<MplsOam::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    return children;
}

void MplsOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsOam::clone_ptr() const
{
    return std::make_shared<MplsOam>();
}

std::string MplsOam::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsOam::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsOam::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsOam::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsOam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "interface" || name == "packet")
        return true;
    return false;
}

MplsOam::Global::Global()
    :
    total_clients{YType::uint32, "total-clients"}
    	,
    collaborator_statistics(std::make_shared<MplsOam::Global::CollaboratorStatistics>())
	,message_statistics(std::make_shared<MplsOam::Global::MessageStatistics>())
{
    collaborator_statistics->parent = this;
    message_statistics->parent = this;

    yang_name = "global"; yang_parent_name = "mpls-oam"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Global::~Global()
{
}

bool MplsOam::Global::has_data() const
{
    return total_clients.is_set
	|| (collaborator_statistics !=  nullptr && collaborator_statistics->has_data())
	|| (message_statistics !=  nullptr && message_statistics->has_data());
}

bool MplsOam::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_clients.yfilter)
	|| (collaborator_statistics !=  nullptr && collaborator_statistics->has_operation())
	|| (message_statistics !=  nullptr && message_statistics->has_operation());
}

std::string MplsOam::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_clients.is_set || is_set(total_clients.yfilter)) leaf_name_data.push_back(total_clients.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collaborator-statistics")
    {
        if(collaborator_statistics == nullptr)
        {
            collaborator_statistics = std::make_shared<MplsOam::Global::CollaboratorStatistics>();
        }
        return collaborator_statistics;
    }

    if(child_yang_name == "message-statistics")
    {
        if(message_statistics == nullptr)
        {
            message_statistics = std::make_shared<MplsOam::Global::MessageStatistics>();
        }
        return message_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(collaborator_statistics != nullptr)
    {
        children["collaborator-statistics"] = collaborator_statistics;
    }

    if(message_statistics != nullptr)
    {
        children["message-statistics"] = message_statistics;
    }

    return children;
}

void MplsOam::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-clients")
    {
        total_clients = value;
        total_clients.value_namespace = name_space;
        total_clients.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-clients")
    {
        total_clients.yfilter = yfilter;
    }
}

bool MplsOam::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-statistics" || name == "message-statistics" || name == "total-clients")
        return true;
    return false;
}

MplsOam::Global::CollaboratorStatistics::CollaboratorStatistics()
    :
    collaborator_i_parm(std::make_shared<MplsOam::Global::CollaboratorStatistics::CollaboratorIParm>())
	,collaborator_im(std::make_shared<MplsOam::Global::CollaboratorStatistics::CollaboratorIm>())
	,collaborator_net_io(std::make_shared<MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo>())
	,collaborator_rib(std::make_shared<MplsOam::Global::CollaboratorStatistics::CollaboratorRib>())
{
    collaborator_i_parm->parent = this;
    collaborator_im->parent = this;
    collaborator_net_io->parent = this;
    collaborator_rib->parent = this;

    yang_name = "collaborator-statistics"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Global::CollaboratorStatistics::~CollaboratorStatistics()
{
}

bool MplsOam::Global::CollaboratorStatistics::has_data() const
{
    return (collaborator_i_parm !=  nullptr && collaborator_i_parm->has_data())
	|| (collaborator_im !=  nullptr && collaborator_im->has_data())
	|| (collaborator_net_io !=  nullptr && collaborator_net_io->has_data())
	|| (collaborator_rib !=  nullptr && collaborator_rib->has_data());
}

bool MplsOam::Global::CollaboratorStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (collaborator_i_parm !=  nullptr && collaborator_i_parm->has_operation())
	|| (collaborator_im !=  nullptr && collaborator_im->has_operation())
	|| (collaborator_net_io !=  nullptr && collaborator_net_io->has_operation())
	|| (collaborator_rib !=  nullptr && collaborator_rib->has_operation());
}

std::string MplsOam::Global::CollaboratorStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Global::CollaboratorStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Global::CollaboratorStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Global::CollaboratorStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collaborator-i-parm")
    {
        if(collaborator_i_parm == nullptr)
        {
            collaborator_i_parm = std::make_shared<MplsOam::Global::CollaboratorStatistics::CollaboratorIParm>();
        }
        return collaborator_i_parm;
    }

    if(child_yang_name == "collaborator-im")
    {
        if(collaborator_im == nullptr)
        {
            collaborator_im = std::make_shared<MplsOam::Global::CollaboratorStatistics::CollaboratorIm>();
        }
        return collaborator_im;
    }

    if(child_yang_name == "collaborator-net-io")
    {
        if(collaborator_net_io == nullptr)
        {
            collaborator_net_io = std::make_shared<MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo>();
        }
        return collaborator_net_io;
    }

    if(child_yang_name == "collaborator-rib")
    {
        if(collaborator_rib == nullptr)
        {
            collaborator_rib = std::make_shared<MplsOam::Global::CollaboratorStatistics::CollaboratorRib>();
        }
        return collaborator_rib;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Global::CollaboratorStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(collaborator_i_parm != nullptr)
    {
        children["collaborator-i-parm"] = collaborator_i_parm;
    }

    if(collaborator_im != nullptr)
    {
        children["collaborator-im"] = collaborator_im;
    }

    if(collaborator_net_io != nullptr)
    {
        children["collaborator-net-io"] = collaborator_net_io;
    }

    if(collaborator_rib != nullptr)
    {
        children["collaborator-rib"] = collaborator_rib;
    }

    return children;
}

void MplsOam::Global::CollaboratorStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Global::CollaboratorStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Global::CollaboratorStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-i-parm" || name == "collaborator-im" || name == "collaborator-net-io" || name == "collaborator-rib")
        return true;
    return false;
}

MplsOam::Global::CollaboratorStatistics::CollaboratorIParm::CollaboratorIParm()
    :
    downs{YType::uint32, "downs"},
    ups{YType::uint32, "ups"}
{

    yang_name = "collaborator-i-parm"; yang_parent_name = "collaborator-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Global::CollaboratorStatistics::CollaboratorIParm::~CollaboratorIParm()
{
}

bool MplsOam::Global::CollaboratorStatistics::CollaboratorIParm::has_data() const
{
    return downs.is_set
	|| ups.is_set;
}

bool MplsOam::Global::CollaboratorStatistics::CollaboratorIParm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(downs.yfilter)
	|| ydk::is_set(ups.yfilter);
}

std::string MplsOam::Global::CollaboratorStatistics::CollaboratorIParm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/global/collaborator-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Global::CollaboratorStatistics::CollaboratorIParm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-i-parm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Global::CollaboratorStatistics::CollaboratorIParm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (downs.is_set || is_set(downs.yfilter)) leaf_name_data.push_back(downs.get_name_leafdata());
    if (ups.is_set || is_set(ups.yfilter)) leaf_name_data.push_back(ups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Global::CollaboratorStatistics::CollaboratorIParm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Global::CollaboratorStatistics::CollaboratorIParm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Global::CollaboratorStatistics::CollaboratorIParm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "downs")
    {
        downs = value;
        downs.value_namespace = name_space;
        downs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ups")
    {
        ups = value;
        ups.value_namespace = name_space;
        ups.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Global::CollaboratorStatistics::CollaboratorIParm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "downs")
    {
        downs.yfilter = yfilter;
    }
    if(value_path == "ups")
    {
        ups.yfilter = yfilter;
    }
}

bool MplsOam::Global::CollaboratorStatistics::CollaboratorIParm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downs" || name == "ups")
        return true;
    return false;
}

MplsOam::Global::CollaboratorStatistics::CollaboratorIm::CollaboratorIm()
    :
    downs{YType::uint32, "downs"},
    ups{YType::uint32, "ups"}
{

    yang_name = "collaborator-im"; yang_parent_name = "collaborator-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Global::CollaboratorStatistics::CollaboratorIm::~CollaboratorIm()
{
}

bool MplsOam::Global::CollaboratorStatistics::CollaboratorIm::has_data() const
{
    return downs.is_set
	|| ups.is_set;
}

bool MplsOam::Global::CollaboratorStatistics::CollaboratorIm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(downs.yfilter)
	|| ydk::is_set(ups.yfilter);
}

std::string MplsOam::Global::CollaboratorStatistics::CollaboratorIm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/global/collaborator-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Global::CollaboratorStatistics::CollaboratorIm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-im";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Global::CollaboratorStatistics::CollaboratorIm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (downs.is_set || is_set(downs.yfilter)) leaf_name_data.push_back(downs.get_name_leafdata());
    if (ups.is_set || is_set(ups.yfilter)) leaf_name_data.push_back(ups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Global::CollaboratorStatistics::CollaboratorIm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Global::CollaboratorStatistics::CollaboratorIm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Global::CollaboratorStatistics::CollaboratorIm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "downs")
    {
        downs = value;
        downs.value_namespace = name_space;
        downs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ups")
    {
        ups = value;
        ups.value_namespace = name_space;
        ups.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Global::CollaboratorStatistics::CollaboratorIm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "downs")
    {
        downs.yfilter = yfilter;
    }
    if(value_path == "ups")
    {
        ups.yfilter = yfilter;
    }
}

bool MplsOam::Global::CollaboratorStatistics::CollaboratorIm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downs" || name == "ups")
        return true;
    return false;
}

MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo::CollaboratorNetIo()
    :
    downs{YType::uint32, "downs"},
    ups{YType::uint32, "ups"}
{

    yang_name = "collaborator-net-io"; yang_parent_name = "collaborator-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo::~CollaboratorNetIo()
{
}

bool MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo::has_data() const
{
    return downs.is_set
	|| ups.is_set;
}

bool MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(downs.yfilter)
	|| ydk::is_set(ups.yfilter);
}

std::string MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/global/collaborator-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-net-io";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (downs.is_set || is_set(downs.yfilter)) leaf_name_data.push_back(downs.get_name_leafdata());
    if (ups.is_set || is_set(ups.yfilter)) leaf_name_data.push_back(ups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "downs")
    {
        downs = value;
        downs.value_namespace = name_space;
        downs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ups")
    {
        ups = value;
        ups.value_namespace = name_space;
        ups.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "downs")
    {
        downs.yfilter = yfilter;
    }
    if(value_path == "ups")
    {
        ups.yfilter = yfilter;
    }
}

bool MplsOam::Global::CollaboratorStatistics::CollaboratorNetIo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downs" || name == "ups")
        return true;
    return false;
}

MplsOam::Global::CollaboratorStatistics::CollaboratorRib::CollaboratorRib()
    :
    downs{YType::uint32, "downs"},
    ups{YType::uint32, "ups"}
{

    yang_name = "collaborator-rib"; yang_parent_name = "collaborator-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Global::CollaboratorStatistics::CollaboratorRib::~CollaboratorRib()
{
}

bool MplsOam::Global::CollaboratorStatistics::CollaboratorRib::has_data() const
{
    return downs.is_set
	|| ups.is_set;
}

bool MplsOam::Global::CollaboratorStatistics::CollaboratorRib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(downs.yfilter)
	|| ydk::is_set(ups.yfilter);
}

std::string MplsOam::Global::CollaboratorStatistics::CollaboratorRib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/global/collaborator-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Global::CollaboratorStatistics::CollaboratorRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Global::CollaboratorStatistics::CollaboratorRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (downs.is_set || is_set(downs.yfilter)) leaf_name_data.push_back(downs.get_name_leafdata());
    if (ups.is_set || is_set(ups.yfilter)) leaf_name_data.push_back(ups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Global::CollaboratorStatistics::CollaboratorRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Global::CollaboratorStatistics::CollaboratorRib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Global::CollaboratorStatistics::CollaboratorRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "downs")
    {
        downs = value;
        downs.value_namespace = name_space;
        downs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ups")
    {
        ups = value;
        ups.value_namespace = name_space;
        ups.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Global::CollaboratorStatistics::CollaboratorRib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "downs")
    {
        downs.yfilter = yfilter;
    }
    if(value_path == "ups")
    {
        ups.yfilter = yfilter;
    }
}

bool MplsOam::Global::CollaboratorStatistics::CollaboratorRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downs" || name == "ups")
        return true;
    return false;
}

MplsOam::Global::MessageStatistics::MessageStatistics()
    :
    echo_cancel_messages{YType::uint32, "echo-cancel-messages"},
    echo_submit_messages{YType::uint32, "echo-submit-messages"},
    get_config_messages{YType::uint32, "get-config-messages"},
    get_response_messages{YType::uint32, "get-response-messages"},
    get_result_messages{YType::uint32, "get-result-messages"},
    property_block_messages{YType::uint32, "property-block-messages"},
    property_request_messages{YType::uint32, "property-request-messages"},
    property_response_messages{YType::uint32, "property-response-messages"},
    register_messages{YType::uint32, "register-messages"},
    thread_request_messages{YType::uint32, "thread-request-messages"},
    unregister_messages{YType::uint32, "unregister-messages"}
{

    yang_name = "message-statistics"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Global::MessageStatistics::~MessageStatistics()
{
}

bool MplsOam::Global::MessageStatistics::has_data() const
{
    return echo_cancel_messages.is_set
	|| echo_submit_messages.is_set
	|| get_config_messages.is_set
	|| get_response_messages.is_set
	|| get_result_messages.is_set
	|| property_block_messages.is_set
	|| property_request_messages.is_set
	|| property_response_messages.is_set
	|| register_messages.is_set
	|| thread_request_messages.is_set
	|| unregister_messages.is_set;
}

bool MplsOam::Global::MessageStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(echo_cancel_messages.yfilter)
	|| ydk::is_set(echo_submit_messages.yfilter)
	|| ydk::is_set(get_config_messages.yfilter)
	|| ydk::is_set(get_response_messages.yfilter)
	|| ydk::is_set(get_result_messages.yfilter)
	|| ydk::is_set(property_block_messages.yfilter)
	|| ydk::is_set(property_request_messages.yfilter)
	|| ydk::is_set(property_response_messages.yfilter)
	|| ydk::is_set(register_messages.yfilter)
	|| ydk::is_set(thread_request_messages.yfilter)
	|| ydk::is_set(unregister_messages.yfilter);
}

std::string MplsOam::Global::MessageStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Global::MessageStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Global::MessageStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (echo_cancel_messages.is_set || is_set(echo_cancel_messages.yfilter)) leaf_name_data.push_back(echo_cancel_messages.get_name_leafdata());
    if (echo_submit_messages.is_set || is_set(echo_submit_messages.yfilter)) leaf_name_data.push_back(echo_submit_messages.get_name_leafdata());
    if (get_config_messages.is_set || is_set(get_config_messages.yfilter)) leaf_name_data.push_back(get_config_messages.get_name_leafdata());
    if (get_response_messages.is_set || is_set(get_response_messages.yfilter)) leaf_name_data.push_back(get_response_messages.get_name_leafdata());
    if (get_result_messages.is_set || is_set(get_result_messages.yfilter)) leaf_name_data.push_back(get_result_messages.get_name_leafdata());
    if (property_block_messages.is_set || is_set(property_block_messages.yfilter)) leaf_name_data.push_back(property_block_messages.get_name_leafdata());
    if (property_request_messages.is_set || is_set(property_request_messages.yfilter)) leaf_name_data.push_back(property_request_messages.get_name_leafdata());
    if (property_response_messages.is_set || is_set(property_response_messages.yfilter)) leaf_name_data.push_back(property_response_messages.get_name_leafdata());
    if (register_messages.is_set || is_set(register_messages.yfilter)) leaf_name_data.push_back(register_messages.get_name_leafdata());
    if (thread_request_messages.is_set || is_set(thread_request_messages.yfilter)) leaf_name_data.push_back(thread_request_messages.get_name_leafdata());
    if (unregister_messages.is_set || is_set(unregister_messages.yfilter)) leaf_name_data.push_back(unregister_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Global::MessageStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Global::MessageStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Global::MessageStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "echo-cancel-messages")
    {
        echo_cancel_messages = value;
        echo_cancel_messages.value_namespace = name_space;
        echo_cancel_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-submit-messages")
    {
        echo_submit_messages = value;
        echo_submit_messages.value_namespace = name_space;
        echo_submit_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-config-messages")
    {
        get_config_messages = value;
        get_config_messages.value_namespace = name_space;
        get_config_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-response-messages")
    {
        get_response_messages = value;
        get_response_messages.value_namespace = name_space;
        get_response_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-result-messages")
    {
        get_result_messages = value;
        get_result_messages.value_namespace = name_space;
        get_result_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "property-block-messages")
    {
        property_block_messages = value;
        property_block_messages.value_namespace = name_space;
        property_block_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "property-request-messages")
    {
        property_request_messages = value;
        property_request_messages.value_namespace = name_space;
        property_request_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "property-response-messages")
    {
        property_response_messages = value;
        property_response_messages.value_namespace = name_space;
        property_response_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-messages")
    {
        register_messages = value;
        register_messages.value_namespace = name_space;
        register_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thread-request-messages")
    {
        thread_request_messages = value;
        thread_request_messages.value_namespace = name_space;
        thread_request_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unregister-messages")
    {
        unregister_messages = value;
        unregister_messages.value_namespace = name_space;
        unregister_messages.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Global::MessageStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "echo-cancel-messages")
    {
        echo_cancel_messages.yfilter = yfilter;
    }
    if(value_path == "echo-submit-messages")
    {
        echo_submit_messages.yfilter = yfilter;
    }
    if(value_path == "get-config-messages")
    {
        get_config_messages.yfilter = yfilter;
    }
    if(value_path == "get-response-messages")
    {
        get_response_messages.yfilter = yfilter;
    }
    if(value_path == "get-result-messages")
    {
        get_result_messages.yfilter = yfilter;
    }
    if(value_path == "property-block-messages")
    {
        property_block_messages.yfilter = yfilter;
    }
    if(value_path == "property-request-messages")
    {
        property_request_messages.yfilter = yfilter;
    }
    if(value_path == "property-response-messages")
    {
        property_response_messages.yfilter = yfilter;
    }
    if(value_path == "register-messages")
    {
        register_messages.yfilter = yfilter;
    }
    if(value_path == "thread-request-messages")
    {
        thread_request_messages.yfilter = yfilter;
    }
    if(value_path == "unregister-messages")
    {
        unregister_messages.yfilter = yfilter;
    }
}

bool MplsOam::Global::MessageStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "echo-cancel-messages" || name == "echo-submit-messages" || name == "get-config-messages" || name == "get-response-messages" || name == "get-result-messages" || name == "property-block-messages" || name == "property-request-messages" || name == "property-response-messages" || name == "register-messages" || name == "thread-request-messages" || name == "unregister-messages")
        return true;
    return false;
}

MplsOam::Interface::Interface()
    :
    briefs(std::make_shared<MplsOam::Interface::Briefs>())
	,details(std::make_shared<MplsOam::Interface::Details>())
{
    briefs->parent = this;
    details->parent = this;

    yang_name = "interface"; yang_parent_name = "mpls-oam"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Interface::~Interface()
{
}

bool MplsOam::Interface::has_data() const
{
    return (briefs !=  nullptr && briefs->has_data())
	|| (details !=  nullptr && details->has_data());
}

bool MplsOam::Interface::has_operation() const
{
    return is_set(yfilter)
	|| (briefs !=  nullptr && briefs->has_operation())
	|| (details !=  nullptr && details->has_operation());
}

std::string MplsOam::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "briefs")
    {
        if(briefs == nullptr)
        {
            briefs = std::make_shared<MplsOam::Interface::Briefs>();
        }
        return briefs;
    }

    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<MplsOam::Interface::Details>();
        }
        return details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(briefs != nullptr)
    {
        children["briefs"] = briefs;
    }

    if(details != nullptr)
    {
        children["details"] = details;
    }

    return children;
}

void MplsOam::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "briefs" || name == "details")
        return true;
    return false;
}

MplsOam::Interface::Briefs::Briefs()
{

    yang_name = "briefs"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Interface::Briefs::~Briefs()
{
}

bool MplsOam::Interface::Briefs::has_data() const
{
    for (std::size_t index=0; index<brief.size(); index++)
    {
        if(brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsOam::Interface::Briefs::has_operation() const
{
    for (std::size_t index=0; index<brief.size(); index++)
    {
        if(brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsOam::Interface::Briefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Interface::Briefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Briefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Briefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        for(auto const & c : brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsOam::Interface::Briefs::Brief>();
        c->parent = this;
        brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Briefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsOam::Interface::Briefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Interface::Briefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Interface::Briefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief")
        return true;
    return false;
}

MplsOam::Interface::Briefs::Brief::Brief()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    mtu{YType::uint32, "mtu"},
    prefix_length{YType::uint32, "prefix-length"},
    prefix_length_v6{YType::uint32, "prefix-length-v6"},
    primary_address{YType::str, "primary-address"},
    primary_address_v6{YType::str, "primary-address-v6"},
    state{YType::enumeration, "state"}
{

    yang_name = "brief"; yang_parent_name = "briefs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Interface::Briefs::Brief::~Brief()
{
}

bool MplsOam::Interface::Briefs::Brief::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| mtu.is_set
	|| prefix_length.is_set
	|| prefix_length_v6.is_set
	|| primary_address.is_set
	|| primary_address_v6.is_set
	|| state.is_set;
}

bool MplsOam::Interface::Briefs::Brief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_length_v6.yfilter)
	|| ydk::is_set(primary_address.yfilter)
	|| ydk::is_set(primary_address_v6.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string MplsOam::Interface::Briefs::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/interface/briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Interface::Briefs::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Briefs::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_v6.is_set || is_set(prefix_length_v6.yfilter)) leaf_name_data.push_back(prefix_length_v6.get_name_leafdata());
    if (primary_address.is_set || is_set(primary_address.yfilter)) leaf_name_data.push_back(primary_address.get_name_leafdata());
    if (primary_address_v6.is_set || is_set(primary_address_v6.yfilter)) leaf_name_data.push_back(primary_address_v6.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Briefs::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Briefs::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Briefs::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-v6")
    {
        prefix_length_v6 = value;
        prefix_length_v6.value_namespace = name_space;
        prefix_length_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-address")
    {
        primary_address = value;
        primary_address.value_namespace = name_space;
        primary_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-address-v6")
    {
        primary_address_v6 = value;
        primary_address_v6.value_namespace = name_space;
        primary_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Briefs::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-length-v6")
    {
        prefix_length_v6.yfilter = yfilter;
    }
    if(value_path == "primary-address")
    {
        primary_address.yfilter = yfilter;
    }
    if(value_path == "primary-address-v6")
    {
        primary_address_v6.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Briefs::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-name-xr" || name == "mtu" || name == "prefix-length" || name == "prefix-length-v6" || name == "primary-address" || name == "primary-address-v6" || name == "state")
        return true;
    return false;
}

MplsOam::Interface::Details::Details()
{

    yang_name = "details"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Interface::Details::~Details()
{
}

bool MplsOam::Interface::Details::has_data() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool MplsOam::Interface::Details::has_operation() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsOam::Interface::Details::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Interface::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        for(auto const & c : detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsOam::Interface::Details::Detail>();
        c->parent = this;
        detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsOam::Interface::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Interface::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Interface::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::Detail()
    :
    interface_name{YType::str, "interface-name"}
    	,
    interface_brief(std::make_shared<MplsOam::Interface::Details::Detail::InterfaceBrief>())
	,packet_statistics(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics>())
{
    interface_brief->parent = this;
    packet_statistics->parent = this;

    yang_name = "detail"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Interface::Details::Detail::~Detail()
{
}

bool MplsOam::Interface::Details::Detail::has_data() const
{
    return interface_name.is_set
	|| (interface_brief !=  nullptr && interface_brief->has_data())
	|| (packet_statistics !=  nullptr && packet_statistics->has_data());
}

bool MplsOam::Interface::Details::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (interface_brief !=  nullptr && interface_brief->has_operation())
	|| (packet_statistics !=  nullptr && packet_statistics->has_operation());
}

std::string MplsOam::Interface::Details::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/interface/details/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Interface::Details::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-brief")
    {
        if(interface_brief == nullptr)
        {
            interface_brief = std::make_shared<MplsOam::Interface::Details::Detail::InterfaceBrief>();
        }
        return interface_brief;
    }

    if(child_yang_name == "packet-statistics")
    {
        if(packet_statistics == nullptr)
        {
            packet_statistics = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics>();
        }
        return packet_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_brief != nullptr)
    {
        children["interface-brief"] = interface_brief;
    }

    if(packet_statistics != nullptr)
    {
        children["packet-statistics"] = packet_statistics;
    }

    return children;
}

void MplsOam::Interface::Details::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-brief" || name == "packet-statistics" || name == "interface-name")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::InterfaceBrief::InterfaceBrief()
    :
    interface_name_xr{YType::str, "interface-name-xr"},
    mtu{YType::uint32, "mtu"},
    prefix_length{YType::uint32, "prefix-length"},
    prefix_length_v6{YType::uint32, "prefix-length-v6"},
    primary_address{YType::str, "primary-address"},
    primary_address_v6{YType::str, "primary-address-v6"},
    state{YType::enumeration, "state"}
{

    yang_name = "interface-brief"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::InterfaceBrief::~InterfaceBrief()
{
}

bool MplsOam::Interface::Details::Detail::InterfaceBrief::has_data() const
{
    return interface_name_xr.is_set
	|| mtu.is_set
	|| prefix_length.is_set
	|| prefix_length_v6.is_set
	|| primary_address.is_set
	|| primary_address_v6.is_set
	|| state.is_set;
}

bool MplsOam::Interface::Details::Detail::InterfaceBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_length_v6.yfilter)
	|| ydk::is_set(primary_address.yfilter)
	|| ydk::is_set(primary_address_v6.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string MplsOam::Interface::Details::Detail::InterfaceBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::InterfaceBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_v6.is_set || is_set(prefix_length_v6.yfilter)) leaf_name_data.push_back(prefix_length_v6.get_name_leafdata());
    if (primary_address.is_set || is_set(primary_address.yfilter)) leaf_name_data.push_back(primary_address.get_name_leafdata());
    if (primary_address_v6.is_set || is_set(primary_address_v6.yfilter)) leaf_name_data.push_back(primary_address_v6.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::InterfaceBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::InterfaceBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::InterfaceBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-v6")
    {
        prefix_length_v6 = value;
        prefix_length_v6.value_namespace = name_space;
        prefix_length_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-address")
    {
        primary_address = value;
        primary_address.value_namespace = name_space;
        primary_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-address-v6")
    {
        primary_address_v6 = value;
        primary_address_v6.value_namespace = name_space;
        primary_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::InterfaceBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-length-v6")
    {
        prefix_length_v6.yfilter = yfilter;
    }
    if(value_path == "primary-address")
    {
        primary_address.yfilter = yfilter;
    }
    if(value_path == "primary-address-v6")
    {
        primary_address_v6.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::InterfaceBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name-xr" || name == "mtu" || name == "prefix-length" || name == "prefix-length-v6" || name == "primary-address" || name == "primary-address-v6" || name == "state")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::PacketStatistics()
    :
    protect_rep_sent(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent>())
	,protect_req_sent(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent>())
	,received(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received>())
	,sent(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Sent>())
	,working_rep_sent(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent>())
	,working_req_sent(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent>())
{
    protect_rep_sent->parent = this;
    protect_req_sent->parent = this;
    received->parent = this;
    sent->parent = this;
    working_rep_sent->parent = this;
    working_req_sent->parent = this;

    yang_name = "packet-statistics"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::~PacketStatistics()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::has_data() const
{
    return (protect_rep_sent !=  nullptr && protect_rep_sent->has_data())
	|| (protect_req_sent !=  nullptr && protect_req_sent->has_data())
	|| (received !=  nullptr && received->has_data())
	|| (sent !=  nullptr && sent->has_data())
	|| (working_rep_sent !=  nullptr && working_rep_sent->has_data())
	|| (working_req_sent !=  nullptr && working_req_sent->has_data());
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (protect_rep_sent !=  nullptr && protect_rep_sent->has_operation())
	|| (protect_req_sent !=  nullptr && protect_req_sent->has_operation())
	|| (received !=  nullptr && received->has_operation())
	|| (sent !=  nullptr && sent->has_operation())
	|| (working_rep_sent !=  nullptr && working_rep_sent->has_operation())
	|| (working_req_sent !=  nullptr && working_req_sent->has_operation());
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-rep-sent")
    {
        if(protect_rep_sent == nullptr)
        {
            protect_rep_sent = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent>();
        }
        return protect_rep_sent;
    }

    if(child_yang_name == "protect-req-sent")
    {
        if(protect_req_sent == nullptr)
        {
            protect_req_sent = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent>();
        }
        return protect_req_sent;
    }

    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received>();
        }
        return received;
    }

    if(child_yang_name == "sent")
    {
        if(sent == nullptr)
        {
            sent = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Sent>();
        }
        return sent;
    }

    if(child_yang_name == "working-rep-sent")
    {
        if(working_rep_sent == nullptr)
        {
            working_rep_sent = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent>();
        }
        return working_rep_sent;
    }

    if(child_yang_name == "working-req-sent")
    {
        if(working_req_sent == nullptr)
        {
            working_req_sent = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent>();
        }
        return working_req_sent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protect_rep_sent != nullptr)
    {
        children["protect-rep-sent"] = protect_rep_sent;
    }

    if(protect_req_sent != nullptr)
    {
        children["protect-req-sent"] = protect_req_sent;
    }

    if(received != nullptr)
    {
        children["received"] = received;
    }

    if(sent != nullptr)
    {
        children["sent"] = sent;
    }

    if(working_rep_sent != nullptr)
    {
        children["working-rep-sent"] = working_rep_sent;
    }

    if(working_req_sent != nullptr)
    {
        children["working-req-sent"] = working_req_sent;
    }

    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Interface::Details::Detail::PacketStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-rep-sent" || name == "protect-req-sent" || name == "received" || name == "sent" || name == "working-rep-sent" || name == "working-req-sent")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::ProtectRepSent()
    :
    bfd_no_reply(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply>())
	,transmit_bfd_good(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood>())
	,transmit_drop(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop>())
	,transmit_good(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood>())
{
    bfd_no_reply->parent = this;
    transmit_bfd_good->parent = this;
    transmit_drop->parent = this;
    transmit_good->parent = this;

    yang_name = "protect-rep-sent"; yang_parent_name = "packet-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::~ProtectRepSent()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::has_data() const
{
    return (bfd_no_reply !=  nullptr && bfd_no_reply->has_data())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_data())
	|| (transmit_drop !=  nullptr && transmit_drop->has_data())
	|| (transmit_good !=  nullptr && transmit_good->has_data());
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_no_reply !=  nullptr && bfd_no_reply->has_operation())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_operation())
	|| (transmit_drop !=  nullptr && transmit_drop->has_operation())
	|| (transmit_good !=  nullptr && transmit_good->has_operation());
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-rep-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-no-reply")
    {
        if(bfd_no_reply == nullptr)
        {
            bfd_no_reply = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply>();
        }
        return bfd_no_reply;
    }

    if(child_yang_name == "transmit-bfd-good")
    {
        if(transmit_bfd_good == nullptr)
        {
            transmit_bfd_good = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood>();
        }
        return transmit_bfd_good;
    }

    if(child_yang_name == "transmit-drop")
    {
        if(transmit_drop == nullptr)
        {
            transmit_drop = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop>();
        }
        return transmit_drop;
    }

    if(child_yang_name == "transmit-good")
    {
        if(transmit_good == nullptr)
        {
            transmit_good = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood>();
        }
        return transmit_good;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_no_reply != nullptr)
    {
        children["bfd-no-reply"] = bfd_no_reply;
    }

    if(transmit_bfd_good != nullptr)
    {
        children["transmit-bfd-good"] = transmit_bfd_good;
    }

    if(transmit_drop != nullptr)
    {
        children["transmit-drop"] = transmit_drop;
    }

    if(transmit_good != nullptr)
    {
        children["transmit-good"] = transmit_good;
    }

    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-no-reply" || name == "transmit-bfd-good" || name == "transmit-drop" || name == "transmit-good")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply::BfdNoReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "bfd-no-reply"; yang_parent_name = "protect-rep-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply::~BfdNoReply()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-no-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::BfdNoReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood::TransmitBfdGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-bfd-good"; yang_parent_name = "protect-rep-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood::~TransmitBfdGood()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-bfd-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitBfdGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop::TransmitDrop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-drop"; yang_parent_name = "protect-rep-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop::~TransmitDrop()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood::TransmitGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-good"; yang_parent_name = "protect-rep-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood::~TransmitGood()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectRepSent::TransmitGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::ProtectReqSent()
    :
    bfd_no_reply(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply>())
	,transmit_bfd_good(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood>())
	,transmit_drop(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop>())
	,transmit_good(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood>())
{
    bfd_no_reply->parent = this;
    transmit_bfd_good->parent = this;
    transmit_drop->parent = this;
    transmit_good->parent = this;

    yang_name = "protect-req-sent"; yang_parent_name = "packet-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::~ProtectReqSent()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::has_data() const
{
    return (bfd_no_reply !=  nullptr && bfd_no_reply->has_data())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_data())
	|| (transmit_drop !=  nullptr && transmit_drop->has_data())
	|| (transmit_good !=  nullptr && transmit_good->has_data());
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_no_reply !=  nullptr && bfd_no_reply->has_operation())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_operation())
	|| (transmit_drop !=  nullptr && transmit_drop->has_operation())
	|| (transmit_good !=  nullptr && transmit_good->has_operation());
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-req-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-no-reply")
    {
        if(bfd_no_reply == nullptr)
        {
            bfd_no_reply = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply>();
        }
        return bfd_no_reply;
    }

    if(child_yang_name == "transmit-bfd-good")
    {
        if(transmit_bfd_good == nullptr)
        {
            transmit_bfd_good = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood>();
        }
        return transmit_bfd_good;
    }

    if(child_yang_name == "transmit-drop")
    {
        if(transmit_drop == nullptr)
        {
            transmit_drop = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop>();
        }
        return transmit_drop;
    }

    if(child_yang_name == "transmit-good")
    {
        if(transmit_good == nullptr)
        {
            transmit_good = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood>();
        }
        return transmit_good;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_no_reply != nullptr)
    {
        children["bfd-no-reply"] = bfd_no_reply;
    }

    if(transmit_bfd_good != nullptr)
    {
        children["transmit-bfd-good"] = transmit_bfd_good;
    }

    if(transmit_drop != nullptr)
    {
        children["transmit-drop"] = transmit_drop;
    }

    if(transmit_good != nullptr)
    {
        children["transmit-good"] = transmit_good;
    }

    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-no-reply" || name == "transmit-bfd-good" || name == "transmit-drop" || name == "transmit-good")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply::BfdNoReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "bfd-no-reply"; yang_parent_name = "protect-req-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply::~BfdNoReply()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-no-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::BfdNoReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood::TransmitBfdGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-bfd-good"; yang_parent_name = "protect-req-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood::~TransmitBfdGood()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-bfd-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitBfdGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop::TransmitDrop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-drop"; yang_parent_name = "protect-req-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop::~TransmitDrop()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood::TransmitGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-good"; yang_parent_name = "protect-req-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood::~TransmitGood()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::ProtectReqSent::TransmitGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::Received()
    :
    protect_protocol_received_good_reply(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply>())
	,protect_protocol_received_good_request(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest>())
	,received_error_general(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral>())
	,received_error_ip_header(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader>())
	,received_error_no_interface(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface>())
	,received_error_no_memory(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory>())
	,received_error_queue_full(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull>())
	,received_error_runt(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt>())
	,received_error_udp_header(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader>())
	,received_good_bfd_reply(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply>())
	,received_good_bfd_request(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest>())
	,received_good_reply(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply>())
	,received_good_request(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest>())
	,received_unknown(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown>())
{
    protect_protocol_received_good_reply->parent = this;
    protect_protocol_received_good_request->parent = this;
    received_error_general->parent = this;
    received_error_ip_header->parent = this;
    received_error_no_interface->parent = this;
    received_error_no_memory->parent = this;
    received_error_queue_full->parent = this;
    received_error_runt->parent = this;
    received_error_udp_header->parent = this;
    received_good_bfd_reply->parent = this;
    received_good_bfd_request->parent = this;
    received_good_reply->parent = this;
    received_good_request->parent = this;
    received_unknown->parent = this;

    yang_name = "received"; yang_parent_name = "packet-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::~Received()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::has_data() const
{
    return (protect_protocol_received_good_reply !=  nullptr && protect_protocol_received_good_reply->has_data())
	|| (protect_protocol_received_good_request !=  nullptr && protect_protocol_received_good_request->has_data())
	|| (received_error_general !=  nullptr && received_error_general->has_data())
	|| (received_error_ip_header !=  nullptr && received_error_ip_header->has_data())
	|| (received_error_no_interface !=  nullptr && received_error_no_interface->has_data())
	|| (received_error_no_memory !=  nullptr && received_error_no_memory->has_data())
	|| (received_error_queue_full !=  nullptr && received_error_queue_full->has_data())
	|| (received_error_runt !=  nullptr && received_error_runt->has_data())
	|| (received_error_udp_header !=  nullptr && received_error_udp_header->has_data())
	|| (received_good_bfd_reply !=  nullptr && received_good_bfd_reply->has_data())
	|| (received_good_bfd_request !=  nullptr && received_good_bfd_request->has_data())
	|| (received_good_reply !=  nullptr && received_good_reply->has_data())
	|| (received_good_request !=  nullptr && received_good_request->has_data())
	|| (received_unknown !=  nullptr && received_unknown->has_data());
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::has_operation() const
{
    return is_set(yfilter)
	|| (protect_protocol_received_good_reply !=  nullptr && protect_protocol_received_good_reply->has_operation())
	|| (protect_protocol_received_good_request !=  nullptr && protect_protocol_received_good_request->has_operation())
	|| (received_error_general !=  nullptr && received_error_general->has_operation())
	|| (received_error_ip_header !=  nullptr && received_error_ip_header->has_operation())
	|| (received_error_no_interface !=  nullptr && received_error_no_interface->has_operation())
	|| (received_error_no_memory !=  nullptr && received_error_no_memory->has_operation())
	|| (received_error_queue_full !=  nullptr && received_error_queue_full->has_operation())
	|| (received_error_runt !=  nullptr && received_error_runt->has_operation())
	|| (received_error_udp_header !=  nullptr && received_error_udp_header->has_operation())
	|| (received_good_bfd_reply !=  nullptr && received_good_bfd_reply->has_operation())
	|| (received_good_bfd_request !=  nullptr && received_good_bfd_request->has_operation())
	|| (received_good_reply !=  nullptr && received_good_reply->has_operation())
	|| (received_good_request !=  nullptr && received_good_request->has_operation())
	|| (received_unknown !=  nullptr && received_unknown->has_operation());
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-protocol-received-good-reply")
    {
        if(protect_protocol_received_good_reply == nullptr)
        {
            protect_protocol_received_good_reply = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply>();
        }
        return protect_protocol_received_good_reply;
    }

    if(child_yang_name == "protect-protocol-received-good-request")
    {
        if(protect_protocol_received_good_request == nullptr)
        {
            protect_protocol_received_good_request = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest>();
        }
        return protect_protocol_received_good_request;
    }

    if(child_yang_name == "received-error-general")
    {
        if(received_error_general == nullptr)
        {
            received_error_general = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral>();
        }
        return received_error_general;
    }

    if(child_yang_name == "received-error-ip-header")
    {
        if(received_error_ip_header == nullptr)
        {
            received_error_ip_header = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader>();
        }
        return received_error_ip_header;
    }

    if(child_yang_name == "received-error-no-interface")
    {
        if(received_error_no_interface == nullptr)
        {
            received_error_no_interface = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface>();
        }
        return received_error_no_interface;
    }

    if(child_yang_name == "received-error-no-memory")
    {
        if(received_error_no_memory == nullptr)
        {
            received_error_no_memory = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory>();
        }
        return received_error_no_memory;
    }

    if(child_yang_name == "received-error-queue-full")
    {
        if(received_error_queue_full == nullptr)
        {
            received_error_queue_full = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull>();
        }
        return received_error_queue_full;
    }

    if(child_yang_name == "received-error-runt")
    {
        if(received_error_runt == nullptr)
        {
            received_error_runt = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt>();
        }
        return received_error_runt;
    }

    if(child_yang_name == "received-error-udp-header")
    {
        if(received_error_udp_header == nullptr)
        {
            received_error_udp_header = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader>();
        }
        return received_error_udp_header;
    }

    if(child_yang_name == "received-good-bfd-reply")
    {
        if(received_good_bfd_reply == nullptr)
        {
            received_good_bfd_reply = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply>();
        }
        return received_good_bfd_reply;
    }

    if(child_yang_name == "received-good-bfd-request")
    {
        if(received_good_bfd_request == nullptr)
        {
            received_good_bfd_request = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest>();
        }
        return received_good_bfd_request;
    }

    if(child_yang_name == "received-good-reply")
    {
        if(received_good_reply == nullptr)
        {
            received_good_reply = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply>();
        }
        return received_good_reply;
    }

    if(child_yang_name == "received-good-request")
    {
        if(received_good_request == nullptr)
        {
            received_good_request = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest>();
        }
        return received_good_request;
    }

    if(child_yang_name == "received-unknown")
    {
        if(received_unknown == nullptr)
        {
            received_unknown = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown>();
        }
        return received_unknown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protect_protocol_received_good_reply != nullptr)
    {
        children["protect-protocol-received-good-reply"] = protect_protocol_received_good_reply;
    }

    if(protect_protocol_received_good_request != nullptr)
    {
        children["protect-protocol-received-good-request"] = protect_protocol_received_good_request;
    }

    if(received_error_general != nullptr)
    {
        children["received-error-general"] = received_error_general;
    }

    if(received_error_ip_header != nullptr)
    {
        children["received-error-ip-header"] = received_error_ip_header;
    }

    if(received_error_no_interface != nullptr)
    {
        children["received-error-no-interface"] = received_error_no_interface;
    }

    if(received_error_no_memory != nullptr)
    {
        children["received-error-no-memory"] = received_error_no_memory;
    }

    if(received_error_queue_full != nullptr)
    {
        children["received-error-queue-full"] = received_error_queue_full;
    }

    if(received_error_runt != nullptr)
    {
        children["received-error-runt"] = received_error_runt;
    }

    if(received_error_udp_header != nullptr)
    {
        children["received-error-udp-header"] = received_error_udp_header;
    }

    if(received_good_bfd_reply != nullptr)
    {
        children["received-good-bfd-reply"] = received_good_bfd_reply;
    }

    if(received_good_bfd_request != nullptr)
    {
        children["received-good-bfd-request"] = received_good_bfd_request;
    }

    if(received_good_reply != nullptr)
    {
        children["received-good-reply"] = received_good_reply;
    }

    if(received_good_request != nullptr)
    {
        children["received-good-request"] = received_good_request;
    }

    if(received_unknown != nullptr)
    {
        children["received-unknown"] = received_unknown;
    }

    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-protocol-received-good-reply" || name == "protect-protocol-received-good-request" || name == "received-error-general" || name == "received-error-ip-header" || name == "received-error-no-interface" || name == "received-error-no-memory" || name == "received-error-queue-full" || name == "received-error-runt" || name == "received-error-udp-header" || name == "received-good-bfd-reply" || name == "received-good-bfd-request" || name == "received-good-reply" || name == "received-good-request" || name == "received-unknown")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply::ProtectProtocolReceivedGoodReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "protect-protocol-received-good-reply"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply::~ProtectProtocolReceivedGoodReply()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-protocol-received-good-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest::ProtectProtocolReceivedGoodRequest()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "protect-protocol-received-good-request"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest::~ProtectProtocolReceivedGoodRequest()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-protocol-received-good-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ProtectProtocolReceivedGoodRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral::ReceivedErrorGeneral()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-general"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral::~ReceivedErrorGeneral()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-general";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorGeneral::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader::ReceivedErrorIpHeader()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-ip-header"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader::~ReceivedErrorIpHeader()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-ip-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorIpHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface::ReceivedErrorNoInterface()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-no-interface"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface::~ReceivedErrorNoInterface()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-no-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory::ReceivedErrorNoMemory()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-no-memory"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory::~ReceivedErrorNoMemory()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-no-memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorNoMemory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull::ReceivedErrorQueueFull()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-queue-full"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull::~ReceivedErrorQueueFull()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-queue-full";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorQueueFull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt::ReceivedErrorRunt()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-runt"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt::~ReceivedErrorRunt()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-runt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader::ReceivedErrorUdpHeader()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-udp-header"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader::~ReceivedErrorUdpHeader()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-udp-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedErrorUdpHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply::ReceivedGoodBfdReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-good-bfd-reply"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply::~ReceivedGoodBfdReply()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-good-bfd-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest::ReceivedGoodBfdRequest()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-good-bfd-request"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest::~ReceivedGoodBfdRequest()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-good-bfd-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodBfdRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply::ReceivedGoodReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-good-reply"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply::~ReceivedGoodReply()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-good-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest::ReceivedGoodRequest()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-good-request"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest::~ReceivedGoodRequest()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-good-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedGoodRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown::ReceivedUnknown()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-unknown"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown::~ReceivedUnknown()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-unknown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Received::ReceivedUnknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Sent::Sent()
    :
    bfd_no_reply(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply>())
	,transmit_bfd_good(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood>())
	,transmit_drop(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop>())
	,transmit_good(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood>())
{
    bfd_no_reply->parent = this;
    transmit_bfd_good->parent = this;
    transmit_drop->parent = this;
    transmit_good->parent = this;

    yang_name = "sent"; yang_parent_name = "packet-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Sent::~Sent()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::has_data() const
{
    return (bfd_no_reply !=  nullptr && bfd_no_reply->has_data())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_data())
	|| (transmit_drop !=  nullptr && transmit_drop->has_data())
	|| (transmit_good !=  nullptr && transmit_good->has_data());
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_no_reply !=  nullptr && bfd_no_reply->has_operation())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_operation())
	|| (transmit_drop !=  nullptr && transmit_drop->has_operation())
	|| (transmit_good !=  nullptr && transmit_good->has_operation());
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Sent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-no-reply")
    {
        if(bfd_no_reply == nullptr)
        {
            bfd_no_reply = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply>();
        }
        return bfd_no_reply;
    }

    if(child_yang_name == "transmit-bfd-good")
    {
        if(transmit_bfd_good == nullptr)
        {
            transmit_bfd_good = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood>();
        }
        return transmit_bfd_good;
    }

    if(child_yang_name == "transmit-drop")
    {
        if(transmit_drop == nullptr)
        {
            transmit_drop = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop>();
        }
        return transmit_drop;
    }

    if(child_yang_name == "transmit-good")
    {
        if(transmit_good == nullptr)
        {
            transmit_good = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood>();
        }
        return transmit_good;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Sent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_no_reply != nullptr)
    {
        children["bfd-no-reply"] = bfd_no_reply;
    }

    if(transmit_bfd_good != nullptr)
    {
        children["transmit-bfd-good"] = transmit_bfd_good;
    }

    if(transmit_drop != nullptr)
    {
        children["transmit-drop"] = transmit_drop;
    }

    if(transmit_good != nullptr)
    {
        children["transmit-good"] = transmit_good;
    }

    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Sent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Sent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-no-reply" || name == "transmit-bfd-good" || name == "transmit-drop" || name == "transmit-good")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply::BfdNoReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "bfd-no-reply"; yang_parent_name = "sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply::~BfdNoReply()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-no-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::BfdNoReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood::TransmitBfdGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-bfd-good"; yang_parent_name = "sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood::~TransmitBfdGood()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-bfd-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitBfdGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop::TransmitDrop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-drop"; yang_parent_name = "sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop::~TransmitDrop()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood::TransmitGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-good"; yang_parent_name = "sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood::~TransmitGood()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::Sent::TransmitGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::WorkingRepSent()
    :
    bfd_no_reply(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply>())
	,transmit_bfd_good(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood>())
	,transmit_drop(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop>())
	,transmit_good(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood>())
{
    bfd_no_reply->parent = this;
    transmit_bfd_good->parent = this;
    transmit_drop->parent = this;
    transmit_good->parent = this;

    yang_name = "working-rep-sent"; yang_parent_name = "packet-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::~WorkingRepSent()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::has_data() const
{
    return (bfd_no_reply !=  nullptr && bfd_no_reply->has_data())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_data())
	|| (transmit_drop !=  nullptr && transmit_drop->has_data())
	|| (transmit_good !=  nullptr && transmit_good->has_data());
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_no_reply !=  nullptr && bfd_no_reply->has_operation())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_operation())
	|| (transmit_drop !=  nullptr && transmit_drop->has_operation())
	|| (transmit_good !=  nullptr && transmit_good->has_operation());
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-rep-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-no-reply")
    {
        if(bfd_no_reply == nullptr)
        {
            bfd_no_reply = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply>();
        }
        return bfd_no_reply;
    }

    if(child_yang_name == "transmit-bfd-good")
    {
        if(transmit_bfd_good == nullptr)
        {
            transmit_bfd_good = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood>();
        }
        return transmit_bfd_good;
    }

    if(child_yang_name == "transmit-drop")
    {
        if(transmit_drop == nullptr)
        {
            transmit_drop = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop>();
        }
        return transmit_drop;
    }

    if(child_yang_name == "transmit-good")
    {
        if(transmit_good == nullptr)
        {
            transmit_good = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood>();
        }
        return transmit_good;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_no_reply != nullptr)
    {
        children["bfd-no-reply"] = bfd_no_reply;
    }

    if(transmit_bfd_good != nullptr)
    {
        children["transmit-bfd-good"] = transmit_bfd_good;
    }

    if(transmit_drop != nullptr)
    {
        children["transmit-drop"] = transmit_drop;
    }

    if(transmit_good != nullptr)
    {
        children["transmit-good"] = transmit_good;
    }

    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-no-reply" || name == "transmit-bfd-good" || name == "transmit-drop" || name == "transmit-good")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply::BfdNoReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "bfd-no-reply"; yang_parent_name = "working-rep-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply::~BfdNoReply()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-no-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::BfdNoReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood::TransmitBfdGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-bfd-good"; yang_parent_name = "working-rep-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood::~TransmitBfdGood()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-bfd-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitBfdGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop::TransmitDrop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-drop"; yang_parent_name = "working-rep-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop::~TransmitDrop()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood::TransmitGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-good"; yang_parent_name = "working-rep-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood::~TransmitGood()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingRepSent::TransmitGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::WorkingReqSent()
    :
    bfd_no_reply(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply>())
	,transmit_bfd_good(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood>())
	,transmit_drop(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop>())
	,transmit_good(std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood>())
{
    bfd_no_reply->parent = this;
    transmit_bfd_good->parent = this;
    transmit_drop->parent = this;
    transmit_good->parent = this;

    yang_name = "working-req-sent"; yang_parent_name = "packet-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::~WorkingReqSent()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::has_data() const
{
    return (bfd_no_reply !=  nullptr && bfd_no_reply->has_data())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_data())
	|| (transmit_drop !=  nullptr && transmit_drop->has_data())
	|| (transmit_good !=  nullptr && transmit_good->has_data());
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_no_reply !=  nullptr && bfd_no_reply->has_operation())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_operation())
	|| (transmit_drop !=  nullptr && transmit_drop->has_operation())
	|| (transmit_good !=  nullptr && transmit_good->has_operation());
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-req-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-no-reply")
    {
        if(bfd_no_reply == nullptr)
        {
            bfd_no_reply = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply>();
        }
        return bfd_no_reply;
    }

    if(child_yang_name == "transmit-bfd-good")
    {
        if(transmit_bfd_good == nullptr)
        {
            transmit_bfd_good = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood>();
        }
        return transmit_bfd_good;
    }

    if(child_yang_name == "transmit-drop")
    {
        if(transmit_drop == nullptr)
        {
            transmit_drop = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop>();
        }
        return transmit_drop;
    }

    if(child_yang_name == "transmit-good")
    {
        if(transmit_good == nullptr)
        {
            transmit_good = std::make_shared<MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood>();
        }
        return transmit_good;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_no_reply != nullptr)
    {
        children["bfd-no-reply"] = bfd_no_reply;
    }

    if(transmit_bfd_good != nullptr)
    {
        children["transmit-bfd-good"] = transmit_bfd_good;
    }

    if(transmit_drop != nullptr)
    {
        children["transmit-drop"] = transmit_drop;
    }

    if(transmit_good != nullptr)
    {
        children["transmit-good"] = transmit_good;
    }

    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-no-reply" || name == "transmit-bfd-good" || name == "transmit-drop" || name == "transmit-good")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply::BfdNoReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "bfd-no-reply"; yang_parent_name = "working-req-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply::~BfdNoReply()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-no-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::BfdNoReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood::TransmitBfdGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-bfd-good"; yang_parent_name = "working-req-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood::~TransmitBfdGood()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-bfd-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitBfdGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop::TransmitDrop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-drop"; yang_parent_name = "working-req-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop::~TransmitDrop()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood::TransmitGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-good"; yang_parent_name = "working-req-sent"; is_top_level_class = false; has_list_ancestor = true;
}

MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood::~TransmitGood()
{
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Interface::Details::Detail::PacketStatistics::WorkingReqSent::TransmitGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Packet()
    :
    protect_rep_sent(std::make_shared<MplsOam::Packet::ProtectRepSent>())
	,protect_req_sent(std::make_shared<MplsOam::Packet::ProtectReqSent>())
	,received(std::make_shared<MplsOam::Packet::Received>())
	,sent(std::make_shared<MplsOam::Packet::Sent>())
	,working_rep_sent(std::make_shared<MplsOam::Packet::WorkingRepSent>())
	,working_req_sent(std::make_shared<MplsOam::Packet::WorkingReqSent>())
{
    protect_rep_sent->parent = this;
    protect_req_sent->parent = this;
    received->parent = this;
    sent->parent = this;
    working_rep_sent->parent = this;
    working_req_sent->parent = this;

    yang_name = "packet"; yang_parent_name = "mpls-oam"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::~Packet()
{
}

bool MplsOam::Packet::has_data() const
{
    return (protect_rep_sent !=  nullptr && protect_rep_sent->has_data())
	|| (protect_req_sent !=  nullptr && protect_req_sent->has_data())
	|| (received !=  nullptr && received->has_data())
	|| (sent !=  nullptr && sent->has_data())
	|| (working_rep_sent !=  nullptr && working_rep_sent->has_data())
	|| (working_req_sent !=  nullptr && working_req_sent->has_data());
}

bool MplsOam::Packet::has_operation() const
{
    return is_set(yfilter)
	|| (protect_rep_sent !=  nullptr && protect_rep_sent->has_operation())
	|| (protect_req_sent !=  nullptr && protect_req_sent->has_operation())
	|| (received !=  nullptr && received->has_operation())
	|| (sent !=  nullptr && sent->has_operation())
	|| (working_rep_sent !=  nullptr && working_rep_sent->has_operation())
	|| (working_req_sent !=  nullptr && working_req_sent->has_operation());
}

std::string MplsOam::Packet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-rep-sent")
    {
        if(protect_rep_sent == nullptr)
        {
            protect_rep_sent = std::make_shared<MplsOam::Packet::ProtectRepSent>();
        }
        return protect_rep_sent;
    }

    if(child_yang_name == "protect-req-sent")
    {
        if(protect_req_sent == nullptr)
        {
            protect_req_sent = std::make_shared<MplsOam::Packet::ProtectReqSent>();
        }
        return protect_req_sent;
    }

    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<MplsOam::Packet::Received>();
        }
        return received;
    }

    if(child_yang_name == "sent")
    {
        if(sent == nullptr)
        {
            sent = std::make_shared<MplsOam::Packet::Sent>();
        }
        return sent;
    }

    if(child_yang_name == "working-rep-sent")
    {
        if(working_rep_sent == nullptr)
        {
            working_rep_sent = std::make_shared<MplsOam::Packet::WorkingRepSent>();
        }
        return working_rep_sent;
    }

    if(child_yang_name == "working-req-sent")
    {
        if(working_req_sent == nullptr)
        {
            working_req_sent = std::make_shared<MplsOam::Packet::WorkingReqSent>();
        }
        return working_req_sent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protect_rep_sent != nullptr)
    {
        children["protect-rep-sent"] = protect_rep_sent;
    }

    if(protect_req_sent != nullptr)
    {
        children["protect-req-sent"] = protect_req_sent;
    }

    if(received != nullptr)
    {
        children["received"] = received;
    }

    if(sent != nullptr)
    {
        children["sent"] = sent;
    }

    if(working_rep_sent != nullptr)
    {
        children["working-rep-sent"] = working_rep_sent;
    }

    if(working_req_sent != nullptr)
    {
        children["working-req-sent"] = working_req_sent;
    }

    return children;
}

void MplsOam::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-rep-sent" || name == "protect-req-sent" || name == "received" || name == "sent" || name == "working-rep-sent" || name == "working-req-sent")
        return true;
    return false;
}

MplsOam::Packet::ProtectRepSent::ProtectRepSent()
    :
    bfd_no_reply(std::make_shared<MplsOam::Packet::ProtectRepSent::BfdNoReply>())
	,transmit_bfd_good(std::make_shared<MplsOam::Packet::ProtectRepSent::TransmitBfdGood>())
	,transmit_drop(std::make_shared<MplsOam::Packet::ProtectRepSent::TransmitDrop>())
	,transmit_good(std::make_shared<MplsOam::Packet::ProtectRepSent::TransmitGood>())
{
    bfd_no_reply->parent = this;
    transmit_bfd_good->parent = this;
    transmit_drop->parent = this;
    transmit_good->parent = this;

    yang_name = "protect-rep-sent"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::ProtectRepSent::~ProtectRepSent()
{
}

bool MplsOam::Packet::ProtectRepSent::has_data() const
{
    return (bfd_no_reply !=  nullptr && bfd_no_reply->has_data())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_data())
	|| (transmit_drop !=  nullptr && transmit_drop->has_data())
	|| (transmit_good !=  nullptr && transmit_good->has_data());
}

bool MplsOam::Packet::ProtectRepSent::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_no_reply !=  nullptr && bfd_no_reply->has_operation())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_operation())
	|| (transmit_drop !=  nullptr && transmit_drop->has_operation())
	|| (transmit_good !=  nullptr && transmit_good->has_operation());
}

std::string MplsOam::Packet::ProtectRepSent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::ProtectRepSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-rep-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::ProtectRepSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::ProtectRepSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-no-reply")
    {
        if(bfd_no_reply == nullptr)
        {
            bfd_no_reply = std::make_shared<MplsOam::Packet::ProtectRepSent::BfdNoReply>();
        }
        return bfd_no_reply;
    }

    if(child_yang_name == "transmit-bfd-good")
    {
        if(transmit_bfd_good == nullptr)
        {
            transmit_bfd_good = std::make_shared<MplsOam::Packet::ProtectRepSent::TransmitBfdGood>();
        }
        return transmit_bfd_good;
    }

    if(child_yang_name == "transmit-drop")
    {
        if(transmit_drop == nullptr)
        {
            transmit_drop = std::make_shared<MplsOam::Packet::ProtectRepSent::TransmitDrop>();
        }
        return transmit_drop;
    }

    if(child_yang_name == "transmit-good")
    {
        if(transmit_good == nullptr)
        {
            transmit_good = std::make_shared<MplsOam::Packet::ProtectRepSent::TransmitGood>();
        }
        return transmit_good;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::ProtectRepSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_no_reply != nullptr)
    {
        children["bfd-no-reply"] = bfd_no_reply;
    }

    if(transmit_bfd_good != nullptr)
    {
        children["transmit-bfd-good"] = transmit_bfd_good;
    }

    if(transmit_drop != nullptr)
    {
        children["transmit-drop"] = transmit_drop;
    }

    if(transmit_good != nullptr)
    {
        children["transmit-good"] = transmit_good;
    }

    return children;
}

void MplsOam::Packet::ProtectRepSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Packet::ProtectRepSent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Packet::ProtectRepSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-no-reply" || name == "transmit-bfd-good" || name == "transmit-drop" || name == "transmit-good")
        return true;
    return false;
}

MplsOam::Packet::ProtectRepSent::BfdNoReply::BfdNoReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "bfd-no-reply"; yang_parent_name = "protect-rep-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::ProtectRepSent::BfdNoReply::~BfdNoReply()
{
}

bool MplsOam::Packet::ProtectRepSent::BfdNoReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::ProtectRepSent::BfdNoReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::ProtectRepSent::BfdNoReply::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/protect-rep-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::ProtectRepSent::BfdNoReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-no-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::ProtectRepSent::BfdNoReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::ProtectRepSent::BfdNoReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::ProtectRepSent::BfdNoReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::ProtectRepSent::BfdNoReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::ProtectRepSent::BfdNoReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::ProtectRepSent::BfdNoReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::ProtectRepSent::TransmitBfdGood::TransmitBfdGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-bfd-good"; yang_parent_name = "protect-rep-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::ProtectRepSent::TransmitBfdGood::~TransmitBfdGood()
{
}

bool MplsOam::Packet::ProtectRepSent::TransmitBfdGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::ProtectRepSent::TransmitBfdGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::ProtectRepSent::TransmitBfdGood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/protect-rep-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::ProtectRepSent::TransmitBfdGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-bfd-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::ProtectRepSent::TransmitBfdGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::ProtectRepSent::TransmitBfdGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::ProtectRepSent::TransmitBfdGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::ProtectRepSent::TransmitBfdGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::ProtectRepSent::TransmitBfdGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::ProtectRepSent::TransmitBfdGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::ProtectRepSent::TransmitDrop::TransmitDrop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-drop"; yang_parent_name = "protect-rep-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::ProtectRepSent::TransmitDrop::~TransmitDrop()
{
}

bool MplsOam::Packet::ProtectRepSent::TransmitDrop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::ProtectRepSent::TransmitDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::ProtectRepSent::TransmitDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/protect-rep-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::ProtectRepSent::TransmitDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::ProtectRepSent::TransmitDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::ProtectRepSent::TransmitDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::ProtectRepSent::TransmitDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::ProtectRepSent::TransmitDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::ProtectRepSent::TransmitDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::ProtectRepSent::TransmitDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::ProtectRepSent::TransmitGood::TransmitGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-good"; yang_parent_name = "protect-rep-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::ProtectRepSent::TransmitGood::~TransmitGood()
{
}

bool MplsOam::Packet::ProtectRepSent::TransmitGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::ProtectRepSent::TransmitGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::ProtectRepSent::TransmitGood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/protect-rep-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::ProtectRepSent::TransmitGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::ProtectRepSent::TransmitGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::ProtectRepSent::TransmitGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::ProtectRepSent::TransmitGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::ProtectRepSent::TransmitGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::ProtectRepSent::TransmitGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::ProtectRepSent::TransmitGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::ProtectReqSent::ProtectReqSent()
    :
    bfd_no_reply(std::make_shared<MplsOam::Packet::ProtectReqSent::BfdNoReply>())
	,transmit_bfd_good(std::make_shared<MplsOam::Packet::ProtectReqSent::TransmitBfdGood>())
	,transmit_drop(std::make_shared<MplsOam::Packet::ProtectReqSent::TransmitDrop>())
	,transmit_good(std::make_shared<MplsOam::Packet::ProtectReqSent::TransmitGood>())
{
    bfd_no_reply->parent = this;
    transmit_bfd_good->parent = this;
    transmit_drop->parent = this;
    transmit_good->parent = this;

    yang_name = "protect-req-sent"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::ProtectReqSent::~ProtectReqSent()
{
}

bool MplsOam::Packet::ProtectReqSent::has_data() const
{
    return (bfd_no_reply !=  nullptr && bfd_no_reply->has_data())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_data())
	|| (transmit_drop !=  nullptr && transmit_drop->has_data())
	|| (transmit_good !=  nullptr && transmit_good->has_data());
}

bool MplsOam::Packet::ProtectReqSent::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_no_reply !=  nullptr && bfd_no_reply->has_operation())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_operation())
	|| (transmit_drop !=  nullptr && transmit_drop->has_operation())
	|| (transmit_good !=  nullptr && transmit_good->has_operation());
}

std::string MplsOam::Packet::ProtectReqSent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::ProtectReqSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-req-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::ProtectReqSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::ProtectReqSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-no-reply")
    {
        if(bfd_no_reply == nullptr)
        {
            bfd_no_reply = std::make_shared<MplsOam::Packet::ProtectReqSent::BfdNoReply>();
        }
        return bfd_no_reply;
    }

    if(child_yang_name == "transmit-bfd-good")
    {
        if(transmit_bfd_good == nullptr)
        {
            transmit_bfd_good = std::make_shared<MplsOam::Packet::ProtectReqSent::TransmitBfdGood>();
        }
        return transmit_bfd_good;
    }

    if(child_yang_name == "transmit-drop")
    {
        if(transmit_drop == nullptr)
        {
            transmit_drop = std::make_shared<MplsOam::Packet::ProtectReqSent::TransmitDrop>();
        }
        return transmit_drop;
    }

    if(child_yang_name == "transmit-good")
    {
        if(transmit_good == nullptr)
        {
            transmit_good = std::make_shared<MplsOam::Packet::ProtectReqSent::TransmitGood>();
        }
        return transmit_good;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::ProtectReqSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_no_reply != nullptr)
    {
        children["bfd-no-reply"] = bfd_no_reply;
    }

    if(transmit_bfd_good != nullptr)
    {
        children["transmit-bfd-good"] = transmit_bfd_good;
    }

    if(transmit_drop != nullptr)
    {
        children["transmit-drop"] = transmit_drop;
    }

    if(transmit_good != nullptr)
    {
        children["transmit-good"] = transmit_good;
    }

    return children;
}

void MplsOam::Packet::ProtectReqSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Packet::ProtectReqSent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Packet::ProtectReqSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-no-reply" || name == "transmit-bfd-good" || name == "transmit-drop" || name == "transmit-good")
        return true;
    return false;
}

MplsOam::Packet::ProtectReqSent::BfdNoReply::BfdNoReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "bfd-no-reply"; yang_parent_name = "protect-req-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::ProtectReqSent::BfdNoReply::~BfdNoReply()
{
}

bool MplsOam::Packet::ProtectReqSent::BfdNoReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::ProtectReqSent::BfdNoReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::ProtectReqSent::BfdNoReply::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/protect-req-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::ProtectReqSent::BfdNoReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-no-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::ProtectReqSent::BfdNoReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::ProtectReqSent::BfdNoReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::ProtectReqSent::BfdNoReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::ProtectReqSent::BfdNoReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::ProtectReqSent::BfdNoReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::ProtectReqSent::BfdNoReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::ProtectReqSent::TransmitBfdGood::TransmitBfdGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-bfd-good"; yang_parent_name = "protect-req-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::ProtectReqSent::TransmitBfdGood::~TransmitBfdGood()
{
}

bool MplsOam::Packet::ProtectReqSent::TransmitBfdGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::ProtectReqSent::TransmitBfdGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::ProtectReqSent::TransmitBfdGood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/protect-req-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::ProtectReqSent::TransmitBfdGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-bfd-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::ProtectReqSent::TransmitBfdGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::ProtectReqSent::TransmitBfdGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::ProtectReqSent::TransmitBfdGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::ProtectReqSent::TransmitBfdGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::ProtectReqSent::TransmitBfdGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::ProtectReqSent::TransmitBfdGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::ProtectReqSent::TransmitDrop::TransmitDrop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-drop"; yang_parent_name = "protect-req-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::ProtectReqSent::TransmitDrop::~TransmitDrop()
{
}

bool MplsOam::Packet::ProtectReqSent::TransmitDrop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::ProtectReqSent::TransmitDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::ProtectReqSent::TransmitDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/protect-req-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::ProtectReqSent::TransmitDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::ProtectReqSent::TransmitDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::ProtectReqSent::TransmitDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::ProtectReqSent::TransmitDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::ProtectReqSent::TransmitDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::ProtectReqSent::TransmitDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::ProtectReqSent::TransmitDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::ProtectReqSent::TransmitGood::TransmitGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-good"; yang_parent_name = "protect-req-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::ProtectReqSent::TransmitGood::~TransmitGood()
{
}

bool MplsOam::Packet::ProtectReqSent::TransmitGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::ProtectReqSent::TransmitGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::ProtectReqSent::TransmitGood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/protect-req-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::ProtectReqSent::TransmitGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::ProtectReqSent::TransmitGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::ProtectReqSent::TransmitGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::ProtectReqSent::TransmitGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::ProtectReqSent::TransmitGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::ProtectReqSent::TransmitGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::ProtectReqSent::TransmitGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::Received()
    :
    protect_protocol_received_good_reply(std::make_shared<MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply>())
	,protect_protocol_received_good_request(std::make_shared<MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest>())
	,received_error_general(std::make_shared<MplsOam::Packet::Received::ReceivedErrorGeneral>())
	,received_error_ip_header(std::make_shared<MplsOam::Packet::Received::ReceivedErrorIpHeader>())
	,received_error_no_interface(std::make_shared<MplsOam::Packet::Received::ReceivedErrorNoInterface>())
	,received_error_no_memory(std::make_shared<MplsOam::Packet::Received::ReceivedErrorNoMemory>())
	,received_error_queue_full(std::make_shared<MplsOam::Packet::Received::ReceivedErrorQueueFull>())
	,received_error_runt(std::make_shared<MplsOam::Packet::Received::ReceivedErrorRunt>())
	,received_error_udp_header(std::make_shared<MplsOam::Packet::Received::ReceivedErrorUdpHeader>())
	,received_good_bfd_reply(std::make_shared<MplsOam::Packet::Received::ReceivedGoodBfdReply>())
	,received_good_bfd_request(std::make_shared<MplsOam::Packet::Received::ReceivedGoodBfdRequest>())
	,received_good_reply(std::make_shared<MplsOam::Packet::Received::ReceivedGoodReply>())
	,received_good_request(std::make_shared<MplsOam::Packet::Received::ReceivedGoodRequest>())
	,received_unknown(std::make_shared<MplsOam::Packet::Received::ReceivedUnknown>())
{
    protect_protocol_received_good_reply->parent = this;
    protect_protocol_received_good_request->parent = this;
    received_error_general->parent = this;
    received_error_ip_header->parent = this;
    received_error_no_interface->parent = this;
    received_error_no_memory->parent = this;
    received_error_queue_full->parent = this;
    received_error_runt->parent = this;
    received_error_udp_header->parent = this;
    received_good_bfd_reply->parent = this;
    received_good_bfd_request->parent = this;
    received_good_reply->parent = this;
    received_good_request->parent = this;
    received_unknown->parent = this;

    yang_name = "received"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::~Received()
{
}

bool MplsOam::Packet::Received::has_data() const
{
    return (protect_protocol_received_good_reply !=  nullptr && protect_protocol_received_good_reply->has_data())
	|| (protect_protocol_received_good_request !=  nullptr && protect_protocol_received_good_request->has_data())
	|| (received_error_general !=  nullptr && received_error_general->has_data())
	|| (received_error_ip_header !=  nullptr && received_error_ip_header->has_data())
	|| (received_error_no_interface !=  nullptr && received_error_no_interface->has_data())
	|| (received_error_no_memory !=  nullptr && received_error_no_memory->has_data())
	|| (received_error_queue_full !=  nullptr && received_error_queue_full->has_data())
	|| (received_error_runt !=  nullptr && received_error_runt->has_data())
	|| (received_error_udp_header !=  nullptr && received_error_udp_header->has_data())
	|| (received_good_bfd_reply !=  nullptr && received_good_bfd_reply->has_data())
	|| (received_good_bfd_request !=  nullptr && received_good_bfd_request->has_data())
	|| (received_good_reply !=  nullptr && received_good_reply->has_data())
	|| (received_good_request !=  nullptr && received_good_request->has_data())
	|| (received_unknown !=  nullptr && received_unknown->has_data());
}

bool MplsOam::Packet::Received::has_operation() const
{
    return is_set(yfilter)
	|| (protect_protocol_received_good_reply !=  nullptr && protect_protocol_received_good_reply->has_operation())
	|| (protect_protocol_received_good_request !=  nullptr && protect_protocol_received_good_request->has_operation())
	|| (received_error_general !=  nullptr && received_error_general->has_operation())
	|| (received_error_ip_header !=  nullptr && received_error_ip_header->has_operation())
	|| (received_error_no_interface !=  nullptr && received_error_no_interface->has_operation())
	|| (received_error_no_memory !=  nullptr && received_error_no_memory->has_operation())
	|| (received_error_queue_full !=  nullptr && received_error_queue_full->has_operation())
	|| (received_error_runt !=  nullptr && received_error_runt->has_operation())
	|| (received_error_udp_header !=  nullptr && received_error_udp_header->has_operation())
	|| (received_good_bfd_reply !=  nullptr && received_good_bfd_reply->has_operation())
	|| (received_good_bfd_request !=  nullptr && received_good_bfd_request->has_operation())
	|| (received_good_reply !=  nullptr && received_good_reply->has_operation())
	|| (received_good_request !=  nullptr && received_good_request->has_operation())
	|| (received_unknown !=  nullptr && received_unknown->has_operation());
}

std::string MplsOam::Packet::Received::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect-protocol-received-good-reply")
    {
        if(protect_protocol_received_good_reply == nullptr)
        {
            protect_protocol_received_good_reply = std::make_shared<MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply>();
        }
        return protect_protocol_received_good_reply;
    }

    if(child_yang_name == "protect-protocol-received-good-request")
    {
        if(protect_protocol_received_good_request == nullptr)
        {
            protect_protocol_received_good_request = std::make_shared<MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest>();
        }
        return protect_protocol_received_good_request;
    }

    if(child_yang_name == "received-error-general")
    {
        if(received_error_general == nullptr)
        {
            received_error_general = std::make_shared<MplsOam::Packet::Received::ReceivedErrorGeneral>();
        }
        return received_error_general;
    }

    if(child_yang_name == "received-error-ip-header")
    {
        if(received_error_ip_header == nullptr)
        {
            received_error_ip_header = std::make_shared<MplsOam::Packet::Received::ReceivedErrorIpHeader>();
        }
        return received_error_ip_header;
    }

    if(child_yang_name == "received-error-no-interface")
    {
        if(received_error_no_interface == nullptr)
        {
            received_error_no_interface = std::make_shared<MplsOam::Packet::Received::ReceivedErrorNoInterface>();
        }
        return received_error_no_interface;
    }

    if(child_yang_name == "received-error-no-memory")
    {
        if(received_error_no_memory == nullptr)
        {
            received_error_no_memory = std::make_shared<MplsOam::Packet::Received::ReceivedErrorNoMemory>();
        }
        return received_error_no_memory;
    }

    if(child_yang_name == "received-error-queue-full")
    {
        if(received_error_queue_full == nullptr)
        {
            received_error_queue_full = std::make_shared<MplsOam::Packet::Received::ReceivedErrorQueueFull>();
        }
        return received_error_queue_full;
    }

    if(child_yang_name == "received-error-runt")
    {
        if(received_error_runt == nullptr)
        {
            received_error_runt = std::make_shared<MplsOam::Packet::Received::ReceivedErrorRunt>();
        }
        return received_error_runt;
    }

    if(child_yang_name == "received-error-udp-header")
    {
        if(received_error_udp_header == nullptr)
        {
            received_error_udp_header = std::make_shared<MplsOam::Packet::Received::ReceivedErrorUdpHeader>();
        }
        return received_error_udp_header;
    }

    if(child_yang_name == "received-good-bfd-reply")
    {
        if(received_good_bfd_reply == nullptr)
        {
            received_good_bfd_reply = std::make_shared<MplsOam::Packet::Received::ReceivedGoodBfdReply>();
        }
        return received_good_bfd_reply;
    }

    if(child_yang_name == "received-good-bfd-request")
    {
        if(received_good_bfd_request == nullptr)
        {
            received_good_bfd_request = std::make_shared<MplsOam::Packet::Received::ReceivedGoodBfdRequest>();
        }
        return received_good_bfd_request;
    }

    if(child_yang_name == "received-good-reply")
    {
        if(received_good_reply == nullptr)
        {
            received_good_reply = std::make_shared<MplsOam::Packet::Received::ReceivedGoodReply>();
        }
        return received_good_reply;
    }

    if(child_yang_name == "received-good-request")
    {
        if(received_good_request == nullptr)
        {
            received_good_request = std::make_shared<MplsOam::Packet::Received::ReceivedGoodRequest>();
        }
        return received_good_request;
    }

    if(child_yang_name == "received-unknown")
    {
        if(received_unknown == nullptr)
        {
            received_unknown = std::make_shared<MplsOam::Packet::Received::ReceivedUnknown>();
        }
        return received_unknown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protect_protocol_received_good_reply != nullptr)
    {
        children["protect-protocol-received-good-reply"] = protect_protocol_received_good_reply;
    }

    if(protect_protocol_received_good_request != nullptr)
    {
        children["protect-protocol-received-good-request"] = protect_protocol_received_good_request;
    }

    if(received_error_general != nullptr)
    {
        children["received-error-general"] = received_error_general;
    }

    if(received_error_ip_header != nullptr)
    {
        children["received-error-ip-header"] = received_error_ip_header;
    }

    if(received_error_no_interface != nullptr)
    {
        children["received-error-no-interface"] = received_error_no_interface;
    }

    if(received_error_no_memory != nullptr)
    {
        children["received-error-no-memory"] = received_error_no_memory;
    }

    if(received_error_queue_full != nullptr)
    {
        children["received-error-queue-full"] = received_error_queue_full;
    }

    if(received_error_runt != nullptr)
    {
        children["received-error-runt"] = received_error_runt;
    }

    if(received_error_udp_header != nullptr)
    {
        children["received-error-udp-header"] = received_error_udp_header;
    }

    if(received_good_bfd_reply != nullptr)
    {
        children["received-good-bfd-reply"] = received_good_bfd_reply;
    }

    if(received_good_bfd_request != nullptr)
    {
        children["received-good-bfd-request"] = received_good_bfd_request;
    }

    if(received_good_reply != nullptr)
    {
        children["received-good-reply"] = received_good_reply;
    }

    if(received_good_request != nullptr)
    {
        children["received-good-request"] = received_good_request;
    }

    if(received_unknown != nullptr)
    {
        children["received-unknown"] = received_unknown;
    }

    return children;
}

void MplsOam::Packet::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Packet::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Packet::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect-protocol-received-good-reply" || name == "protect-protocol-received-good-request" || name == "received-error-general" || name == "received-error-ip-header" || name == "received-error-no-interface" || name == "received-error-no-memory" || name == "received-error-queue-full" || name == "received-error-runt" || name == "received-error-udp-header" || name == "received-good-bfd-reply" || name == "received-good-bfd-request" || name == "received-good-reply" || name == "received-good-request" || name == "received-unknown")
        return true;
    return false;
}

MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply::ProtectProtocolReceivedGoodReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "protect-protocol-received-good-reply"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply::~ProtectProtocolReceivedGoodReply()
{
}

bool MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-protocol-received-good-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ProtectProtocolReceivedGoodReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest::ProtectProtocolReceivedGoodRequest()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "protect-protocol-received-good-request"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest::~ProtectProtocolReceivedGoodRequest()
{
}

bool MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-protocol-received-good-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ProtectProtocolReceivedGoodRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ReceivedErrorGeneral::ReceivedErrorGeneral()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-general"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ReceivedErrorGeneral::~ReceivedErrorGeneral()
{
}

bool MplsOam::Packet::Received::ReceivedErrorGeneral::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ReceivedErrorGeneral::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ReceivedErrorGeneral::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ReceivedErrorGeneral::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-general";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ReceivedErrorGeneral::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ReceivedErrorGeneral::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ReceivedErrorGeneral::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ReceivedErrorGeneral::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ReceivedErrorGeneral::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ReceivedErrorGeneral::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ReceivedErrorIpHeader::ReceivedErrorIpHeader()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-ip-header"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ReceivedErrorIpHeader::~ReceivedErrorIpHeader()
{
}

bool MplsOam::Packet::Received::ReceivedErrorIpHeader::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ReceivedErrorIpHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ReceivedErrorIpHeader::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ReceivedErrorIpHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-ip-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ReceivedErrorIpHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ReceivedErrorIpHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ReceivedErrorIpHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ReceivedErrorIpHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ReceivedErrorIpHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ReceivedErrorIpHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ReceivedErrorNoInterface::ReceivedErrorNoInterface()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-no-interface"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ReceivedErrorNoInterface::~ReceivedErrorNoInterface()
{
}

bool MplsOam::Packet::Received::ReceivedErrorNoInterface::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ReceivedErrorNoInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ReceivedErrorNoInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ReceivedErrorNoInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-no-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ReceivedErrorNoInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ReceivedErrorNoInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ReceivedErrorNoInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ReceivedErrorNoInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ReceivedErrorNoInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ReceivedErrorNoInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ReceivedErrorNoMemory::ReceivedErrorNoMemory()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-no-memory"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ReceivedErrorNoMemory::~ReceivedErrorNoMemory()
{
}

bool MplsOam::Packet::Received::ReceivedErrorNoMemory::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ReceivedErrorNoMemory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ReceivedErrorNoMemory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ReceivedErrorNoMemory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-no-memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ReceivedErrorNoMemory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ReceivedErrorNoMemory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ReceivedErrorNoMemory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ReceivedErrorNoMemory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ReceivedErrorNoMemory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ReceivedErrorNoMemory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ReceivedErrorQueueFull::ReceivedErrorQueueFull()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-queue-full"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ReceivedErrorQueueFull::~ReceivedErrorQueueFull()
{
}

bool MplsOam::Packet::Received::ReceivedErrorQueueFull::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ReceivedErrorQueueFull::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ReceivedErrorQueueFull::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ReceivedErrorQueueFull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-queue-full";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ReceivedErrorQueueFull::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ReceivedErrorQueueFull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ReceivedErrorQueueFull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ReceivedErrorQueueFull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ReceivedErrorQueueFull::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ReceivedErrorQueueFull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ReceivedErrorRunt::ReceivedErrorRunt()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-runt"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ReceivedErrorRunt::~ReceivedErrorRunt()
{
}

bool MplsOam::Packet::Received::ReceivedErrorRunt::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ReceivedErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ReceivedErrorRunt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ReceivedErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-runt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ReceivedErrorRunt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ReceivedErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ReceivedErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ReceivedErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ReceivedErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ReceivedErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ReceivedErrorUdpHeader::ReceivedErrorUdpHeader()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-error-udp-header"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ReceivedErrorUdpHeader::~ReceivedErrorUdpHeader()
{
}

bool MplsOam::Packet::Received::ReceivedErrorUdpHeader::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ReceivedErrorUdpHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ReceivedErrorUdpHeader::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ReceivedErrorUdpHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-error-udp-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ReceivedErrorUdpHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ReceivedErrorUdpHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ReceivedErrorUdpHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ReceivedErrorUdpHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ReceivedErrorUdpHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ReceivedErrorUdpHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ReceivedGoodBfdReply::ReceivedGoodBfdReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-good-bfd-reply"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ReceivedGoodBfdReply::~ReceivedGoodBfdReply()
{
}

bool MplsOam::Packet::Received::ReceivedGoodBfdReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ReceivedGoodBfdReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ReceivedGoodBfdReply::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ReceivedGoodBfdReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-good-bfd-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ReceivedGoodBfdReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ReceivedGoodBfdReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ReceivedGoodBfdReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ReceivedGoodBfdReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ReceivedGoodBfdReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ReceivedGoodBfdReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ReceivedGoodBfdRequest::ReceivedGoodBfdRequest()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-good-bfd-request"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ReceivedGoodBfdRequest::~ReceivedGoodBfdRequest()
{
}

bool MplsOam::Packet::Received::ReceivedGoodBfdRequest::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ReceivedGoodBfdRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ReceivedGoodBfdRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ReceivedGoodBfdRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-good-bfd-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ReceivedGoodBfdRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ReceivedGoodBfdRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ReceivedGoodBfdRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ReceivedGoodBfdRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ReceivedGoodBfdRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ReceivedGoodBfdRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ReceivedGoodReply::ReceivedGoodReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-good-reply"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ReceivedGoodReply::~ReceivedGoodReply()
{
}

bool MplsOam::Packet::Received::ReceivedGoodReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ReceivedGoodReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ReceivedGoodReply::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ReceivedGoodReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-good-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ReceivedGoodReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ReceivedGoodReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ReceivedGoodReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ReceivedGoodReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ReceivedGoodReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ReceivedGoodReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ReceivedGoodRequest::ReceivedGoodRequest()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-good-request"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ReceivedGoodRequest::~ReceivedGoodRequest()
{
}

bool MplsOam::Packet::Received::ReceivedGoodRequest::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ReceivedGoodRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ReceivedGoodRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ReceivedGoodRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-good-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ReceivedGoodRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ReceivedGoodRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ReceivedGoodRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ReceivedGoodRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ReceivedGoodRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ReceivedGoodRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Received::ReceivedUnknown::ReceivedUnknown()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "received-unknown"; yang_parent_name = "received"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Received::ReceivedUnknown::~ReceivedUnknown()
{
}

bool MplsOam::Packet::Received::ReceivedUnknown::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Received::ReceivedUnknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Received::ReceivedUnknown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/received/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Received::ReceivedUnknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-unknown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Received::ReceivedUnknown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Received::ReceivedUnknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Received::ReceivedUnknown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Received::ReceivedUnknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Received::ReceivedUnknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Received::ReceivedUnknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Sent::Sent()
    :
    bfd_no_reply(std::make_shared<MplsOam::Packet::Sent::BfdNoReply>())
	,transmit_bfd_good(std::make_shared<MplsOam::Packet::Sent::TransmitBfdGood>())
	,transmit_drop(std::make_shared<MplsOam::Packet::Sent::TransmitDrop>())
	,transmit_good(std::make_shared<MplsOam::Packet::Sent::TransmitGood>())
{
    bfd_no_reply->parent = this;
    transmit_bfd_good->parent = this;
    transmit_drop->parent = this;
    transmit_good->parent = this;

    yang_name = "sent"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Sent::~Sent()
{
}

bool MplsOam::Packet::Sent::has_data() const
{
    return (bfd_no_reply !=  nullptr && bfd_no_reply->has_data())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_data())
	|| (transmit_drop !=  nullptr && transmit_drop->has_data())
	|| (transmit_good !=  nullptr && transmit_good->has_data());
}

bool MplsOam::Packet::Sent::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_no_reply !=  nullptr && bfd_no_reply->has_operation())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_operation())
	|| (transmit_drop !=  nullptr && transmit_drop->has_operation())
	|| (transmit_good !=  nullptr && transmit_good->has_operation());
}

std::string MplsOam::Packet::Sent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Sent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-no-reply")
    {
        if(bfd_no_reply == nullptr)
        {
            bfd_no_reply = std::make_shared<MplsOam::Packet::Sent::BfdNoReply>();
        }
        return bfd_no_reply;
    }

    if(child_yang_name == "transmit-bfd-good")
    {
        if(transmit_bfd_good == nullptr)
        {
            transmit_bfd_good = std::make_shared<MplsOam::Packet::Sent::TransmitBfdGood>();
        }
        return transmit_bfd_good;
    }

    if(child_yang_name == "transmit-drop")
    {
        if(transmit_drop == nullptr)
        {
            transmit_drop = std::make_shared<MplsOam::Packet::Sent::TransmitDrop>();
        }
        return transmit_drop;
    }

    if(child_yang_name == "transmit-good")
    {
        if(transmit_good == nullptr)
        {
            transmit_good = std::make_shared<MplsOam::Packet::Sent::TransmitGood>();
        }
        return transmit_good;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Sent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_no_reply != nullptr)
    {
        children["bfd-no-reply"] = bfd_no_reply;
    }

    if(transmit_bfd_good != nullptr)
    {
        children["transmit-bfd-good"] = transmit_bfd_good;
    }

    if(transmit_drop != nullptr)
    {
        children["transmit-drop"] = transmit_drop;
    }

    if(transmit_good != nullptr)
    {
        children["transmit-good"] = transmit_good;
    }

    return children;
}

void MplsOam::Packet::Sent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Packet::Sent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Packet::Sent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-no-reply" || name == "transmit-bfd-good" || name == "transmit-drop" || name == "transmit-good")
        return true;
    return false;
}

MplsOam::Packet::Sent::BfdNoReply::BfdNoReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "bfd-no-reply"; yang_parent_name = "sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Sent::BfdNoReply::~BfdNoReply()
{
}

bool MplsOam::Packet::Sent::BfdNoReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Sent::BfdNoReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Sent::BfdNoReply::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Sent::BfdNoReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-no-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Sent::BfdNoReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Sent::BfdNoReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Sent::BfdNoReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Sent::BfdNoReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Sent::BfdNoReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Sent::BfdNoReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Sent::TransmitBfdGood::TransmitBfdGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-bfd-good"; yang_parent_name = "sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Sent::TransmitBfdGood::~TransmitBfdGood()
{
}

bool MplsOam::Packet::Sent::TransmitBfdGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Sent::TransmitBfdGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Sent::TransmitBfdGood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Sent::TransmitBfdGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-bfd-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Sent::TransmitBfdGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Sent::TransmitBfdGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Sent::TransmitBfdGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Sent::TransmitBfdGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Sent::TransmitBfdGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Sent::TransmitBfdGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Sent::TransmitDrop::TransmitDrop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-drop"; yang_parent_name = "sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Sent::TransmitDrop::~TransmitDrop()
{
}

bool MplsOam::Packet::Sent::TransmitDrop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Sent::TransmitDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Sent::TransmitDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Sent::TransmitDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Sent::TransmitDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Sent::TransmitDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Sent::TransmitDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Sent::TransmitDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Sent::TransmitDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Sent::TransmitDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::Sent::TransmitGood::TransmitGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-good"; yang_parent_name = "sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::Sent::TransmitGood::~TransmitGood()
{
}

bool MplsOam::Packet::Sent::TransmitGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::Sent::TransmitGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::Sent::TransmitGood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::Sent::TransmitGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::Sent::TransmitGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::Sent::TransmitGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::Sent::TransmitGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::Sent::TransmitGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::Sent::TransmitGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::Sent::TransmitGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::WorkingRepSent::WorkingRepSent()
    :
    bfd_no_reply(std::make_shared<MplsOam::Packet::WorkingRepSent::BfdNoReply>())
	,transmit_bfd_good(std::make_shared<MplsOam::Packet::WorkingRepSent::TransmitBfdGood>())
	,transmit_drop(std::make_shared<MplsOam::Packet::WorkingRepSent::TransmitDrop>())
	,transmit_good(std::make_shared<MplsOam::Packet::WorkingRepSent::TransmitGood>())
{
    bfd_no_reply->parent = this;
    transmit_bfd_good->parent = this;
    transmit_drop->parent = this;
    transmit_good->parent = this;

    yang_name = "working-rep-sent"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::WorkingRepSent::~WorkingRepSent()
{
}

bool MplsOam::Packet::WorkingRepSent::has_data() const
{
    return (bfd_no_reply !=  nullptr && bfd_no_reply->has_data())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_data())
	|| (transmit_drop !=  nullptr && transmit_drop->has_data())
	|| (transmit_good !=  nullptr && transmit_good->has_data());
}

bool MplsOam::Packet::WorkingRepSent::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_no_reply !=  nullptr && bfd_no_reply->has_operation())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_operation())
	|| (transmit_drop !=  nullptr && transmit_drop->has_operation())
	|| (transmit_good !=  nullptr && transmit_good->has_operation());
}

std::string MplsOam::Packet::WorkingRepSent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::WorkingRepSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-rep-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::WorkingRepSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::WorkingRepSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-no-reply")
    {
        if(bfd_no_reply == nullptr)
        {
            bfd_no_reply = std::make_shared<MplsOam::Packet::WorkingRepSent::BfdNoReply>();
        }
        return bfd_no_reply;
    }

    if(child_yang_name == "transmit-bfd-good")
    {
        if(transmit_bfd_good == nullptr)
        {
            transmit_bfd_good = std::make_shared<MplsOam::Packet::WorkingRepSent::TransmitBfdGood>();
        }
        return transmit_bfd_good;
    }

    if(child_yang_name == "transmit-drop")
    {
        if(transmit_drop == nullptr)
        {
            transmit_drop = std::make_shared<MplsOam::Packet::WorkingRepSent::TransmitDrop>();
        }
        return transmit_drop;
    }

    if(child_yang_name == "transmit-good")
    {
        if(transmit_good == nullptr)
        {
            transmit_good = std::make_shared<MplsOam::Packet::WorkingRepSent::TransmitGood>();
        }
        return transmit_good;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::WorkingRepSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_no_reply != nullptr)
    {
        children["bfd-no-reply"] = bfd_no_reply;
    }

    if(transmit_bfd_good != nullptr)
    {
        children["transmit-bfd-good"] = transmit_bfd_good;
    }

    if(transmit_drop != nullptr)
    {
        children["transmit-drop"] = transmit_drop;
    }

    if(transmit_good != nullptr)
    {
        children["transmit-good"] = transmit_good;
    }

    return children;
}

void MplsOam::Packet::WorkingRepSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Packet::WorkingRepSent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Packet::WorkingRepSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-no-reply" || name == "transmit-bfd-good" || name == "transmit-drop" || name == "transmit-good")
        return true;
    return false;
}

MplsOam::Packet::WorkingRepSent::BfdNoReply::BfdNoReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "bfd-no-reply"; yang_parent_name = "working-rep-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::WorkingRepSent::BfdNoReply::~BfdNoReply()
{
}

bool MplsOam::Packet::WorkingRepSent::BfdNoReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::WorkingRepSent::BfdNoReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::WorkingRepSent::BfdNoReply::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/working-rep-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::WorkingRepSent::BfdNoReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-no-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::WorkingRepSent::BfdNoReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::WorkingRepSent::BfdNoReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::WorkingRepSent::BfdNoReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::WorkingRepSent::BfdNoReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::WorkingRepSent::BfdNoReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::WorkingRepSent::BfdNoReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::WorkingRepSent::TransmitBfdGood::TransmitBfdGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-bfd-good"; yang_parent_name = "working-rep-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::WorkingRepSent::TransmitBfdGood::~TransmitBfdGood()
{
}

bool MplsOam::Packet::WorkingRepSent::TransmitBfdGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::WorkingRepSent::TransmitBfdGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::WorkingRepSent::TransmitBfdGood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/working-rep-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::WorkingRepSent::TransmitBfdGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-bfd-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::WorkingRepSent::TransmitBfdGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::WorkingRepSent::TransmitBfdGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::WorkingRepSent::TransmitBfdGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::WorkingRepSent::TransmitBfdGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::WorkingRepSent::TransmitBfdGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::WorkingRepSent::TransmitBfdGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::WorkingRepSent::TransmitDrop::TransmitDrop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-drop"; yang_parent_name = "working-rep-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::WorkingRepSent::TransmitDrop::~TransmitDrop()
{
}

bool MplsOam::Packet::WorkingRepSent::TransmitDrop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::WorkingRepSent::TransmitDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::WorkingRepSent::TransmitDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/working-rep-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::WorkingRepSent::TransmitDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::WorkingRepSent::TransmitDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::WorkingRepSent::TransmitDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::WorkingRepSent::TransmitDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::WorkingRepSent::TransmitDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::WorkingRepSent::TransmitDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::WorkingRepSent::TransmitDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::WorkingRepSent::TransmitGood::TransmitGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-good"; yang_parent_name = "working-rep-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::WorkingRepSent::TransmitGood::~TransmitGood()
{
}

bool MplsOam::Packet::WorkingRepSent::TransmitGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::WorkingRepSent::TransmitGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::WorkingRepSent::TransmitGood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/working-rep-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::WorkingRepSent::TransmitGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::WorkingRepSent::TransmitGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::WorkingRepSent::TransmitGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::WorkingRepSent::TransmitGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::WorkingRepSent::TransmitGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::WorkingRepSent::TransmitGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::WorkingRepSent::TransmitGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::WorkingReqSent::WorkingReqSent()
    :
    bfd_no_reply(std::make_shared<MplsOam::Packet::WorkingReqSent::BfdNoReply>())
	,transmit_bfd_good(std::make_shared<MplsOam::Packet::WorkingReqSent::TransmitBfdGood>())
	,transmit_drop(std::make_shared<MplsOam::Packet::WorkingReqSent::TransmitDrop>())
	,transmit_good(std::make_shared<MplsOam::Packet::WorkingReqSent::TransmitGood>())
{
    bfd_no_reply->parent = this;
    transmit_bfd_good->parent = this;
    transmit_drop->parent = this;
    transmit_good->parent = this;

    yang_name = "working-req-sent"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::WorkingReqSent::~WorkingReqSent()
{
}

bool MplsOam::Packet::WorkingReqSent::has_data() const
{
    return (bfd_no_reply !=  nullptr && bfd_no_reply->has_data())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_data())
	|| (transmit_drop !=  nullptr && transmit_drop->has_data())
	|| (transmit_good !=  nullptr && transmit_good->has_data());
}

bool MplsOam::Packet::WorkingReqSent::has_operation() const
{
    return is_set(yfilter)
	|| (bfd_no_reply !=  nullptr && bfd_no_reply->has_operation())
	|| (transmit_bfd_good !=  nullptr && transmit_bfd_good->has_operation())
	|| (transmit_drop !=  nullptr && transmit_drop->has_operation())
	|| (transmit_good !=  nullptr && transmit_good->has_operation());
}

std::string MplsOam::Packet::WorkingReqSent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::WorkingReqSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-req-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::WorkingReqSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::WorkingReqSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-no-reply")
    {
        if(bfd_no_reply == nullptr)
        {
            bfd_no_reply = std::make_shared<MplsOam::Packet::WorkingReqSent::BfdNoReply>();
        }
        return bfd_no_reply;
    }

    if(child_yang_name == "transmit-bfd-good")
    {
        if(transmit_bfd_good == nullptr)
        {
            transmit_bfd_good = std::make_shared<MplsOam::Packet::WorkingReqSent::TransmitBfdGood>();
        }
        return transmit_bfd_good;
    }

    if(child_yang_name == "transmit-drop")
    {
        if(transmit_drop == nullptr)
        {
            transmit_drop = std::make_shared<MplsOam::Packet::WorkingReqSent::TransmitDrop>();
        }
        return transmit_drop;
    }

    if(child_yang_name == "transmit-good")
    {
        if(transmit_good == nullptr)
        {
            transmit_good = std::make_shared<MplsOam::Packet::WorkingReqSent::TransmitGood>();
        }
        return transmit_good;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::WorkingReqSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_no_reply != nullptr)
    {
        children["bfd-no-reply"] = bfd_no_reply;
    }

    if(transmit_bfd_good != nullptr)
    {
        children["transmit-bfd-good"] = transmit_bfd_good;
    }

    if(transmit_drop != nullptr)
    {
        children["transmit-drop"] = transmit_drop;
    }

    if(transmit_good != nullptr)
    {
        children["transmit-good"] = transmit_good;
    }

    return children;
}

void MplsOam::Packet::WorkingReqSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::Packet::WorkingReqSent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::Packet::WorkingReqSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-no-reply" || name == "transmit-bfd-good" || name == "transmit-drop" || name == "transmit-good")
        return true;
    return false;
}

MplsOam::Packet::WorkingReqSent::BfdNoReply::BfdNoReply()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "bfd-no-reply"; yang_parent_name = "working-req-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::WorkingReqSent::BfdNoReply::~BfdNoReply()
{
}

bool MplsOam::Packet::WorkingReqSent::BfdNoReply::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::WorkingReqSent::BfdNoReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::WorkingReqSent::BfdNoReply::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/working-req-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::WorkingReqSent::BfdNoReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-no-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::WorkingReqSent::BfdNoReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::WorkingReqSent::BfdNoReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::WorkingReqSent::BfdNoReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::WorkingReqSent::BfdNoReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::WorkingReqSent::BfdNoReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::WorkingReqSent::BfdNoReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::WorkingReqSent::TransmitBfdGood::TransmitBfdGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-bfd-good"; yang_parent_name = "working-req-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::WorkingReqSent::TransmitBfdGood::~TransmitBfdGood()
{
}

bool MplsOam::Packet::WorkingReqSent::TransmitBfdGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::WorkingReqSent::TransmitBfdGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::WorkingReqSent::TransmitBfdGood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/working-req-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::WorkingReqSent::TransmitBfdGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-bfd-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::WorkingReqSent::TransmitBfdGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::WorkingReqSent::TransmitBfdGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::WorkingReqSent::TransmitBfdGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::WorkingReqSent::TransmitBfdGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::WorkingReqSent::TransmitBfdGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::WorkingReqSent::TransmitBfdGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::WorkingReqSent::TransmitDrop::TransmitDrop()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-drop"; yang_parent_name = "working-req-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::WorkingReqSent::TransmitDrop::~TransmitDrop()
{
}

bool MplsOam::Packet::WorkingReqSent::TransmitDrop::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::WorkingReqSent::TransmitDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::WorkingReqSent::TransmitDrop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/working-req-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::WorkingReqSent::TransmitDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::WorkingReqSent::TransmitDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::WorkingReqSent::TransmitDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::WorkingReqSent::TransmitDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::WorkingReqSent::TransmitDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::WorkingReqSent::TransmitDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::WorkingReqSent::TransmitDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

MplsOam::Packet::WorkingReqSent::TransmitGood::TransmitGood()
    :
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"}
{

    yang_name = "transmit-good"; yang_parent_name = "working-req-sent"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::Packet::WorkingReqSent::TransmitGood::~TransmitGood()
{
}

bool MplsOam::Packet::WorkingReqSent::TransmitGood::has_data() const
{
    return bytes.is_set
	|| packets.is_set;
}

bool MplsOam::Packet::WorkingReqSent::TransmitGood::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string MplsOam::Packet::WorkingReqSent::TransmitGood::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-oper:mpls-oam/packet/working-req-sent/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::Packet::WorkingReqSent::TransmitGood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit-good";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::Packet::WorkingReqSent::TransmitGood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::Packet::WorkingReqSent::TransmitGood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::Packet::WorkingReqSent::TransmitGood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsOam::Packet::WorkingReqSent::TransmitGood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::Packet::WorkingReqSent::TransmitGood::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool MplsOam::Packet::WorkingReqSent::TransmitGood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

const Enum::YLeaf LspvBagInterfaceState::not_ready {0, "not-ready"};
const Enum::YLeaf LspvBagInterfaceState::admin_down {1, "admin-down"};
const Enum::YLeaf LspvBagInterfaceState::down {2, "down"};
const Enum::YLeaf LspvBagInterfaceState::up {3, "up"};
const Enum::YLeaf LspvBagInterfaceState::shutdown {4, "shutdown"};
const Enum::YLeaf LspvBagInterfaceState::error_disable {5, "error-disable"};
const Enum::YLeaf LspvBagInterfaceState::down_immediate {6, "down-immediate"};
const Enum::YLeaf LspvBagInterfaceState::admin_immediate {7, "admin-immediate"};
const Enum::YLeaf LspvBagInterfaceState::graceful_down {8, "graceful-down"};
const Enum::YLeaf LspvBagInterfaceState::begin_shutdown {9, "begin-shutdown"};
const Enum::YLeaf LspvBagInterfaceState::end_shutdown {10, "end-shutdown"};
const Enum::YLeaf LspvBagInterfaceState::begin_error_disable {11, "begin-error-disable"};
const Enum::YLeaf LspvBagInterfaceState::end_error_disable {12, "end-error-disable"};
const Enum::YLeaf LspvBagInterfaceState::begin_graceful_down {13, "begin-graceful-down"};
const Enum::YLeaf LspvBagInterfaceState::reset {14, "reset"};
const Enum::YLeaf LspvBagInterfaceState::operational {15, "operational"};
const Enum::YLeaf LspvBagInterfaceState::not_operational {16, "not-operational"};
const Enum::YLeaf LspvBagInterfaceState::not_known {17, "not-known"};


}
}

