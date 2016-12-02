
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_mpls_oam_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_oam_cfg {

MplsOam::ReplyMode::ControlChannel::ControlChannel()
    :
    	allow_reverse_lsp{YType::empty, "allow-reverse-lsp"}
{
    yang_name = "control-channel"; yang_parent_name = "reply-mode";
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
    return is_set(operation)
	|| is_set(allow_reverse_lsp.operation);
}

std::string MplsOam::ReplyMode::ControlChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control-channel";

    return path_buffer.str();

}

EntityPath MplsOam::ReplyMode::ControlChannel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-oam-cfg:mpls-oam/reply-mode/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_reverse_lsp.is_set || is_set(allow_reverse_lsp.operation)) leaf_name_data.push_back(allow_reverse_lsp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsOam::ReplyMode::ControlChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsOam::ReplyMode::ControlChannel::get_children()
{
    return children;
}

void MplsOam::ReplyMode::ControlChannel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-reverse-lsp")
    {
        allow_reverse_lsp = value;
    }
}

MplsOam::ReplyMode::ReplyMode()
    :
    control_channel(std::make_unique<MplsOam::ReplyMode::ControlChannel>())
{
    control_channel->parent = this;
    children["control-channel"] = control_channel.get();

    yang_name = "reply-mode"; yang_parent_name = "mpls-oam";
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
    return is_set(operation)
	|| (control_channel !=  nullptr && is_set(control_channel->operation));
}

std::string MplsOam::ReplyMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reply-mode";

    return path_buffer.str();

}

EntityPath MplsOam::ReplyMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-oam-cfg:mpls-oam/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsOam::ReplyMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "control-channel")
    {
        if(control_channel != nullptr)
        {
            children["control-channel"] = control_channel.get();
        }
        else
        {
            control_channel = std::make_unique<MplsOam::ReplyMode::ControlChannel>();
            control_channel->parent = this;
            children["control-channel"] = control_channel.get();
        }
        return children.at("control-channel");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsOam::ReplyMode::get_children()
{
    if(children.find("control-channel") == children.end())
    {
        if(control_channel != nullptr)
        {
            children["control-channel"] = control_channel.get();
        }
    }

    return children;
}

void MplsOam::ReplyMode::set_value(const std::string & value_path, std::string value)
{
}

MplsOam::MplsOam()
    :
    	disable_vendor_extension{YType::empty, "disable-vendor-extension"},
	 enable_oam{YType::empty, "enable-oam"}
    	,
    reply_mode(std::make_unique<MplsOam::ReplyMode>())
{
    reply_mode->parent = this;
    children["reply-mode"] = reply_mode.get();

    yang_name = "mpls-oam"; yang_parent_name = "Cisco-IOS-XR-mpls-oam-cfg";
}

MplsOam::~MplsOam()
{
}

bool MplsOam::has_data() const
{
    return disable_vendor_extension.is_set
	|| enable_oam.is_set
	|| (reply_mode !=  nullptr && reply_mode->has_data());
}

bool MplsOam::has_operation() const
{
    return is_set(operation)
	|| is_set(disable_vendor_extension.operation)
	|| is_set(enable_oam.operation)
	|| (reply_mode !=  nullptr && is_set(reply_mode->operation));
}

std::string MplsOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-oam-cfg:mpls-oam";

    return path_buffer.str();

}

EntityPath MplsOam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_vendor_extension.is_set || is_set(disable_vendor_extension.operation)) leaf_name_data.push_back(disable_vendor_extension.get_name_leafdata());
    if (enable_oam.is_set || is_set(enable_oam.operation)) leaf_name_data.push_back(enable_oam.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "reply-mode")
    {
        if(reply_mode != nullptr)
        {
            children["reply-mode"] = reply_mode.get();
        }
        else
        {
            reply_mode = std::make_unique<MplsOam::ReplyMode>();
            reply_mode->parent = this;
            children["reply-mode"] = reply_mode.get();
        }
        return children.at("reply-mode");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsOam::get_children()
{
    if(children.find("reply-mode") == children.end())
    {
        if(reply_mode != nullptr)
        {
            children["reply-mode"] = reply_mode.get();
        }
    }

    return children;
}

void MplsOam::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-vendor-extension")
    {
        disable_vendor_extension = value;
    }
    if(value_path == "enable-oam")
    {
        enable_oam = value;
    }
}

std::unique_ptr<Entity> MplsOam::clone_ptr()
{
    return std::make_unique<MplsOam>();
}


}
}

