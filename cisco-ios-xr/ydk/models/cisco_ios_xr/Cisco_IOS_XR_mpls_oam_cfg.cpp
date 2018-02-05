
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_oam_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_oam_cfg {

MplsOam::MplsOam()
    :
    enable_oam{YType::empty, "enable-oam"},
    disable_vendor_extension{YType::empty, "disable-vendor-extension"}
    	,
    reply_mode(std::make_shared<MplsOam::ReplyMode>())
{
    reply_mode->parent = this;

    yang_name = "mpls-oam"; yang_parent_name = "Cisco-IOS-XR-mpls-oam-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

MplsOam::~MplsOam()
{
}

bool MplsOam::has_data() const
{
    return enable_oam.is_set
	|| disable_vendor_extension.is_set
	|| (reply_mode !=  nullptr && reply_mode->has_data());
}

bool MplsOam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_oam.yfilter)
	|| ydk::is_set(disable_vendor_extension.yfilter)
	|| (reply_mode !=  nullptr && reply_mode->has_operation());
}

std::string MplsOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-cfg:mpls-oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_oam.is_set || is_set(enable_oam.yfilter)) leaf_name_data.push_back(enable_oam.get_name_leafdata());
    if (disable_vendor_extension.is_set || is_set(disable_vendor_extension.yfilter)) leaf_name_data.push_back(disable_vendor_extension.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reply-mode")
    {
        if(reply_mode == nullptr)
        {
            reply_mode = std::make_shared<MplsOam::ReplyMode>();
        }
        return reply_mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reply_mode != nullptr)
    {
        children["reply-mode"] = reply_mode;
    }

    return children;
}

void MplsOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-oam")
    {
        enable_oam = value;
        enable_oam.value_namespace = name_space;
        enable_oam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-vendor-extension")
    {
        disable_vendor_extension = value;
        disable_vendor_extension.value_namespace = name_space;
        disable_vendor_extension.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-oam")
    {
        enable_oam.yfilter = yfilter;
    }
    if(value_path == "disable-vendor-extension")
    {
        disable_vendor_extension.yfilter = yfilter;
    }
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
    if(name == "reply-mode" || name == "enable-oam" || name == "disable-vendor-extension")
        return true;
    return false;
}

MplsOam::ReplyMode::ReplyMode()
    :
    control_channel(std::make_shared<MplsOam::ReplyMode::ControlChannel>())
{
    control_channel->parent = this;

    yang_name = "reply-mode"; yang_parent_name = "mpls-oam"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::ReplyMode::~ReplyMode()
{
}

bool MplsOam::ReplyMode::has_data() const
{
    return (control_channel !=  nullptr && control_channel->has_data());
}

bool MplsOam::ReplyMode::has_operation() const
{
    return is_set(yfilter)
	|| (control_channel !=  nullptr && control_channel->has_operation());
}

std::string MplsOam::ReplyMode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-cfg:mpls-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::ReplyMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::ReplyMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::ReplyMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control-channel")
    {
        if(control_channel == nullptr)
        {
            control_channel = std::make_shared<MplsOam::ReplyMode::ControlChannel>();
        }
        return control_channel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::ReplyMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(control_channel != nullptr)
    {
        children["control-channel"] = control_channel;
    }

    return children;
}

void MplsOam::ReplyMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsOam::ReplyMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsOam::ReplyMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control-channel")
        return true;
    return false;
}

MplsOam::ReplyMode::ControlChannel::ControlChannel()
    :
    allow_reverse_lsp{YType::empty, "allow-reverse-lsp"}
{

    yang_name = "control-channel"; yang_parent_name = "reply-mode"; is_top_level_class = false; has_list_ancestor = false;
}

MplsOam::ReplyMode::ControlChannel::~ControlChannel()
{
}

bool MplsOam::ReplyMode::ControlChannel::has_data() const
{
    return allow_reverse_lsp.is_set;
}

bool MplsOam::ReplyMode::ControlChannel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_reverse_lsp.yfilter);
}

std::string MplsOam::ReplyMode::ControlChannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-cfg:mpls-oam/reply-mode/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsOam::ReplyMode::ControlChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-channel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsOam::ReplyMode::ControlChannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_reverse_lsp.is_set || is_set(allow_reverse_lsp.yfilter)) leaf_name_data.push_back(allow_reverse_lsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsOam::ReplyMode::ControlChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsOam::ReplyMode::ControlChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsOam::ReplyMode::ControlChannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-reverse-lsp")
    {
        allow_reverse_lsp = value;
        allow_reverse_lsp.value_namespace = name_space;
        allow_reverse_lsp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsOam::ReplyMode::ControlChannel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-reverse-lsp")
    {
        allow_reverse_lsp.yfilter = yfilter;
    }
}

bool MplsOam::ReplyMode::ControlChannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-reverse-lsp")
        return true;
    return false;
}


}
}

