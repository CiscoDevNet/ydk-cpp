
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_46.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

CopySrcLocal::CopySrcLocal()
    :
    input(std::make_shared<CopySrcLocal::Input>())
{
    input->parent = this;

    yang_name = "copy_src_local"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

CopySrcLocal::~CopySrcLocal()
{
}

bool CopySrcLocal::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CopySrcLocal::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopySrcLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_src_local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopySrcLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CopySrcLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopySrcLocal::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopySrcLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CopySrcLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopySrcLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CopySrcLocal::clone_ptr() const
{
    return std::make_shared<CopySrcLocal>();
}

std::string CopySrcLocal::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string CopySrcLocal::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function CopySrcLocal::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopySrcLocal::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool CopySrcLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopySrcLocal::Input::Input()
    :
    src_local{YType::str, "src_local"},
    dest_remote{YType::str, "dest_remote"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"},
    dest_local{YType::str, "dest_local"},
    running_config{YType::empty, "running-config"},
    echo_commands{YType::empty, "echo-commands"},
    stop_at_first_failure{YType::empty, "stop-at-first-failure"},
    startup_config{YType::empty, "startup-config"},
    scheduled_config{YType::empty, "scheduled-config"}
{

    yang_name = "input"; yang_parent_name = "copy_src_local"; is_top_level_class = false; has_list_ancestor = false; 
}

CopySrcLocal::Input::~Input()
{
}

bool CopySrcLocal::Input::has_data() const
{
    if (is_presence_container) return true;
    return src_local.is_set
	|| dest_remote.is_set
	|| source_interface.is_set
	|| vrf.is_set
	|| dest_local.is_set
	|| running_config.is_set
	|| echo_commands.is_set
	|| stop_at_first_failure.is_set
	|| startup_config.is_set
	|| scheduled_config.is_set;
}

bool CopySrcLocal::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_local.yfilter)
	|| ydk::is_set(dest_remote.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(dest_local.yfilter)
	|| ydk::is_set(running_config.yfilter)
	|| ydk::is_set(echo_commands.yfilter)
	|| ydk::is_set(stop_at_first_failure.yfilter)
	|| ydk::is_set(startup_config.yfilter)
	|| ydk::is_set(scheduled_config.yfilter);
}

std::string CopySrcLocal::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_src_local/" << get_segment_path();
    return path_buffer.str();
}

std::string CopySrcLocal::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopySrcLocal::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_local.is_set || is_set(src_local.yfilter)) leaf_name_data.push_back(src_local.get_name_leafdata());
    if (dest_remote.is_set || is_set(dest_remote.yfilter)) leaf_name_data.push_back(dest_remote.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (dest_local.is_set || is_set(dest_local.yfilter)) leaf_name_data.push_back(dest_local.get_name_leafdata());
    if (running_config.is_set || is_set(running_config.yfilter)) leaf_name_data.push_back(running_config.get_name_leafdata());
    if (echo_commands.is_set || is_set(echo_commands.yfilter)) leaf_name_data.push_back(echo_commands.get_name_leafdata());
    if (stop_at_first_failure.is_set || is_set(stop_at_first_failure.yfilter)) leaf_name_data.push_back(stop_at_first_failure.get_name_leafdata());
    if (startup_config.is_set || is_set(startup_config.yfilter)) leaf_name_data.push_back(startup_config.get_name_leafdata());
    if (scheduled_config.is_set || is_set(scheduled_config.yfilter)) leaf_name_data.push_back(scheduled_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CopySrcLocal::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopySrcLocal::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CopySrcLocal::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src_local")
    {
        src_local = value;
        src_local.value_namespace = name_space;
        src_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_remote")
    {
        dest_remote = value;
        dest_remote.value_namespace = name_space;
        dest_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_local")
    {
        dest_local = value;
        dest_local.value_namespace = name_space;
        dest_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-config")
    {
        running_config = value;
        running_config.value_namespace = name_space;
        running_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-commands")
    {
        echo_commands = value;
        echo_commands.value_namespace = name_space;
        echo_commands.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-at-first-failure")
    {
        stop_at_first_failure = value;
        stop_at_first_failure.value_namespace = name_space;
        stop_at_first_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-config")
    {
        startup_config = value;
        startup_config.value_namespace = name_space;
        startup_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scheduled-config")
    {
        scheduled_config = value;
        scheduled_config.value_namespace = name_space;
        scheduled_config.value_namespace_prefix = name_space_prefix;
    }
}

void CopySrcLocal::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src_local")
    {
        src_local.yfilter = yfilter;
    }
    if(value_path == "dest_remote")
    {
        dest_remote.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "dest_local")
    {
        dest_local.yfilter = yfilter;
    }
    if(value_path == "running-config")
    {
        running_config.yfilter = yfilter;
    }
    if(value_path == "echo-commands")
    {
        echo_commands.yfilter = yfilter;
    }
    if(value_path == "stop-at-first-failure")
    {
        stop_at_first_failure.yfilter = yfilter;
    }
    if(value_path == "startup-config")
    {
        startup_config.yfilter = yfilter;
    }
    if(value_path == "scheduled-config")
    {
        scheduled_config.yfilter = yfilter;
    }
}

bool CopySrcLocal::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src_local" || name == "dest_remote" || name == "source-interface" || name == "vrf" || name == "dest_local" || name == "running-config" || name == "echo-commands" || name == "stop-at-first-failure" || name == "startup-config" || name == "scheduled-config")
        return true;
    return false;
}

CopySrcRemote::CopySrcRemote()
    :
    input(std::make_shared<CopySrcRemote::Input>())
{
    input->parent = this;

    yang_name = "copy_src_remote"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

CopySrcRemote::~CopySrcRemote()
{
}

bool CopySrcRemote::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CopySrcRemote::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopySrcRemote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_src_remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopySrcRemote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CopySrcRemote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopySrcRemote::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopySrcRemote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CopySrcRemote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopySrcRemote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CopySrcRemote::clone_ptr() const
{
    return std::make_shared<CopySrcRemote>();
}

std::string CopySrcRemote::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string CopySrcRemote::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function CopySrcRemote::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopySrcRemote::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool CopySrcRemote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopySrcRemote::Input::Input()
    :
    src_remote{YType::str, "src_remote"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"},
    dest_local{YType::str, "dest_local"},
    running_config{YType::empty, "running-config"},
    echo_commands{YType::empty, "echo-commands"},
    stop_at_first_failure{YType::empty, "stop-at-first-failure"},
    startup_config{YType::empty, "startup-config"}
{

    yang_name = "input"; yang_parent_name = "copy_src_remote"; is_top_level_class = false; has_list_ancestor = false; 
}

CopySrcRemote::Input::~Input()
{
}

bool CopySrcRemote::Input::has_data() const
{
    if (is_presence_container) return true;
    return src_remote.is_set
	|| source_interface.is_set
	|| vrf.is_set
	|| dest_local.is_set
	|| running_config.is_set
	|| echo_commands.is_set
	|| stop_at_first_failure.is_set
	|| startup_config.is_set;
}

bool CopySrcRemote::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_remote.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(dest_local.yfilter)
	|| ydk::is_set(running_config.yfilter)
	|| ydk::is_set(echo_commands.yfilter)
	|| ydk::is_set(stop_at_first_failure.yfilter)
	|| ydk::is_set(startup_config.yfilter);
}

std::string CopySrcRemote::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_src_remote/" << get_segment_path();
    return path_buffer.str();
}

std::string CopySrcRemote::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopySrcRemote::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_remote.is_set || is_set(src_remote.yfilter)) leaf_name_data.push_back(src_remote.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (dest_local.is_set || is_set(dest_local.yfilter)) leaf_name_data.push_back(dest_local.get_name_leafdata());
    if (running_config.is_set || is_set(running_config.yfilter)) leaf_name_data.push_back(running_config.get_name_leafdata());
    if (echo_commands.is_set || is_set(echo_commands.yfilter)) leaf_name_data.push_back(echo_commands.get_name_leafdata());
    if (stop_at_first_failure.is_set || is_set(stop_at_first_failure.yfilter)) leaf_name_data.push_back(stop_at_first_failure.get_name_leafdata());
    if (startup_config.is_set || is_set(startup_config.yfilter)) leaf_name_data.push_back(startup_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CopySrcRemote::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopySrcRemote::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CopySrcRemote::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src_remote")
    {
        src_remote = value;
        src_remote.value_namespace = name_space;
        src_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_local")
    {
        dest_local = value;
        dest_local.value_namespace = name_space;
        dest_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-config")
    {
        running_config = value;
        running_config.value_namespace = name_space;
        running_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-commands")
    {
        echo_commands = value;
        echo_commands.value_namespace = name_space;
        echo_commands.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-at-first-failure")
    {
        stop_at_first_failure = value;
        stop_at_first_failure.value_namespace = name_space;
        stop_at_first_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-config")
    {
        startup_config = value;
        startup_config.value_namespace = name_space;
        startup_config.value_namespace_prefix = name_space_prefix;
    }
}

void CopySrcRemote::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src_remote")
    {
        src_remote.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "dest_local")
    {
        dest_local.yfilter = yfilter;
    }
    if(value_path == "running-config")
    {
        running_config.yfilter = yfilter;
    }
    if(value_path == "echo-commands")
    {
        echo_commands.yfilter = yfilter;
    }
    if(value_path == "stop-at-first-failure")
    {
        stop_at_first_failure.yfilter = yfilter;
    }
    if(value_path == "startup-config")
    {
        startup_config.yfilter = yfilter;
    }
}

bool CopySrcRemote::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src_remote" || name == "source-interface" || name == "vrf" || name == "dest_local" || name == "running-config" || name == "echo-commands" || name == "stop-at-first-failure" || name == "startup-config")
        return true;
    return false;
}

CopySrcCore::CopySrcCore()
    :
    input(std::make_shared<CopySrcCore::Input>())
{
    input->parent = this;

    yang_name = "copy_src_core"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

CopySrcCore::~CopySrcCore()
{
}

bool CopySrcCore::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CopySrcCore::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopySrcCore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_src_core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopySrcCore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CopySrcCore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopySrcCore::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopySrcCore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CopySrcCore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopySrcCore::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CopySrcCore::clone_ptr() const
{
    return std::make_shared<CopySrcCore>();
}

std::string CopySrcCore::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string CopySrcCore::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function CopySrcCore::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopySrcCore::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool CopySrcCore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopySrcCore::Input::Input()
    :
    src_core{YType::str, "src_core"},
    dest_remote{YType::str, "dest_remote"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"},
    dest_local_core{YType::str, "dest_local_core"}
{

    yang_name = "input"; yang_parent_name = "copy_src_core"; is_top_level_class = false; has_list_ancestor = false; 
}

CopySrcCore::Input::~Input()
{
}

bool CopySrcCore::Input::has_data() const
{
    if (is_presence_container) return true;
    return src_core.is_set
	|| dest_remote.is_set
	|| source_interface.is_set
	|| vrf.is_set
	|| dest_local_core.is_set;
}

bool CopySrcCore::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_core.yfilter)
	|| ydk::is_set(dest_remote.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(dest_local_core.yfilter);
}

std::string CopySrcCore::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_src_core/" << get_segment_path();
    return path_buffer.str();
}

std::string CopySrcCore::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopySrcCore::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_core.is_set || is_set(src_core.yfilter)) leaf_name_data.push_back(src_core.get_name_leafdata());
    if (dest_remote.is_set || is_set(dest_remote.yfilter)) leaf_name_data.push_back(dest_remote.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (dest_local_core.is_set || is_set(dest_local_core.yfilter)) leaf_name_data.push_back(dest_local_core.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CopySrcCore::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopySrcCore::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CopySrcCore::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src_core")
    {
        src_core = value;
        src_core.value_namespace = name_space;
        src_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_remote")
    {
        dest_remote = value;
        dest_remote.value_namespace = name_space;
        dest_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_local_core")
    {
        dest_local_core = value;
        dest_local_core.value_namespace = name_space;
        dest_local_core.value_namespace_prefix = name_space_prefix;
    }
}

void CopySrcCore::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src_core")
    {
        src_core.yfilter = yfilter;
    }
    if(value_path == "dest_remote")
    {
        dest_remote.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "dest_local_core")
    {
        dest_local_core.yfilter = yfilter;
    }
}

bool CopySrcCore::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src_core" || name == "dest_remote" || name == "source-interface" || name == "vrf" || name == "dest_local_core")
        return true;
    return false;
}

CopyRunningConfigSrc::CopyRunningConfigSrc()
    :
    input(std::make_shared<CopyRunningConfigSrc::Input>())
{
    input->parent = this;

    yang_name = "copy_running_config_src"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

CopyRunningConfigSrc::~CopyRunningConfigSrc()
{
}

bool CopyRunningConfigSrc::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CopyRunningConfigSrc::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopyRunningConfigSrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_running_config_src";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyRunningConfigSrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CopyRunningConfigSrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopyRunningConfigSrc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyRunningConfigSrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CopyRunningConfigSrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopyRunningConfigSrc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CopyRunningConfigSrc::clone_ptr() const
{
    return std::make_shared<CopyRunningConfigSrc>();
}

std::string CopyRunningConfigSrc::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string CopyRunningConfigSrc::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function CopyRunningConfigSrc::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopyRunningConfigSrc::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool CopyRunningConfigSrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopyRunningConfigSrc::Input::Input()
    :
    vdc_all{YType::empty, "vdc-all"},
    dest_remote{YType::str, "dest_remote"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"},
    startup_config{YType::empty, "startup-config"},
    fabric{YType::empty, "fabric"},
    dest_local_config{YType::empty, "dest_local_config"}
{

    yang_name = "input"; yang_parent_name = "copy_running_config_src"; is_top_level_class = false; has_list_ancestor = false; 
}

CopyRunningConfigSrc::Input::~Input()
{
}

bool CopyRunningConfigSrc::Input::has_data() const
{
    if (is_presence_container) return true;
    return vdc_all.is_set
	|| dest_remote.is_set
	|| source_interface.is_set
	|| vrf.is_set
	|| startup_config.is_set
	|| fabric.is_set
	|| dest_local_config.is_set;
}

bool CopyRunningConfigSrc::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vdc_all.yfilter)
	|| ydk::is_set(dest_remote.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(startup_config.yfilter)
	|| ydk::is_set(fabric.yfilter)
	|| ydk::is_set(dest_local_config.yfilter);
}

std::string CopyRunningConfigSrc::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_running_config_src/" << get_segment_path();
    return path_buffer.str();
}

std::string CopyRunningConfigSrc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyRunningConfigSrc::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vdc_all.is_set || is_set(vdc_all.yfilter)) leaf_name_data.push_back(vdc_all.get_name_leafdata());
    if (dest_remote.is_set || is_set(dest_remote.yfilter)) leaf_name_data.push_back(dest_remote.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (startup_config.is_set || is_set(startup_config.yfilter)) leaf_name_data.push_back(startup_config.get_name_leafdata());
    if (fabric.is_set || is_set(fabric.yfilter)) leaf_name_data.push_back(fabric.get_name_leafdata());
    if (dest_local_config.is_set || is_set(dest_local_config.yfilter)) leaf_name_data.push_back(dest_local_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CopyRunningConfigSrc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyRunningConfigSrc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CopyRunningConfigSrc::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vdc-all")
    {
        vdc_all = value;
        vdc_all.value_namespace = name_space;
        vdc_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_remote")
    {
        dest_remote = value;
        dest_remote.value_namespace = name_space;
        dest_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup-config")
    {
        startup_config = value;
        startup_config.value_namespace = name_space;
        startup_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabric")
    {
        fabric = value;
        fabric.value_namespace = name_space;
        fabric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_local_config")
    {
        dest_local_config = value;
        dest_local_config.value_namespace = name_space;
        dest_local_config.value_namespace_prefix = name_space_prefix;
    }
}

void CopyRunningConfigSrc::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vdc-all")
    {
        vdc_all.yfilter = yfilter;
    }
    if(value_path == "dest_remote")
    {
        dest_remote.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "startup-config")
    {
        startup_config.yfilter = yfilter;
    }
    if(value_path == "fabric")
    {
        fabric.yfilter = yfilter;
    }
    if(value_path == "dest_local_config")
    {
        dest_local_config.yfilter = yfilter;
    }
}

bool CopyRunningConfigSrc::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vdc-all" || name == "dest_remote" || name == "source-interface" || name == "vrf" || name == "startup-config" || name == "fabric" || name == "dest_local_config")
        return true;
    return false;
}

CopyStartupConfigSrc::CopyStartupConfigSrc()
    :
    input(std::make_shared<CopyStartupConfigSrc::Input>())
{
    input->parent = this;

    yang_name = "copy_startup_config_src"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

CopyStartupConfigSrc::~CopyStartupConfigSrc()
{
}

bool CopyStartupConfigSrc::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CopyStartupConfigSrc::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopyStartupConfigSrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_startup_config_src";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyStartupConfigSrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CopyStartupConfigSrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopyStartupConfigSrc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyStartupConfigSrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CopyStartupConfigSrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopyStartupConfigSrc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CopyStartupConfigSrc::clone_ptr() const
{
    return std::make_shared<CopyStartupConfigSrc>();
}

std::string CopyStartupConfigSrc::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string CopyStartupConfigSrc::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function CopyStartupConfigSrc::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopyStartupConfigSrc::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool CopyStartupConfigSrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopyStartupConfigSrc::Input::Input()
    :
    dest_remote{YType::str, "dest_remote"},
    source_interface{YType::str, "source-interface"},
    vrf{YType::str, "vrf"},
    running_config{YType::empty, "running-config"},
    echo_commands{YType::empty, "echo-commands"},
    stop_at_first_failure{YType::empty, "stop-at-first-failure"},
    dest_local_config{YType::empty, "dest_local_config"}
{

    yang_name = "input"; yang_parent_name = "copy_startup_config_src"; is_top_level_class = false; has_list_ancestor = false; 
}

CopyStartupConfigSrc::Input::~Input()
{
}

bool CopyStartupConfigSrc::Input::has_data() const
{
    if (is_presence_container) return true;
    return dest_remote.is_set
	|| source_interface.is_set
	|| vrf.is_set
	|| running_config.is_set
	|| echo_commands.is_set
	|| stop_at_first_failure.is_set
	|| dest_local_config.is_set;
}

bool CopyStartupConfigSrc::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_remote.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(running_config.yfilter)
	|| ydk::is_set(echo_commands.yfilter)
	|| ydk::is_set(stop_at_first_failure.yfilter)
	|| ydk::is_set(dest_local_config.yfilter);
}

std::string CopyStartupConfigSrc::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_startup_config_src/" << get_segment_path();
    return path_buffer.str();
}

std::string CopyStartupConfigSrc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyStartupConfigSrc::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_remote.is_set || is_set(dest_remote.yfilter)) leaf_name_data.push_back(dest_remote.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (running_config.is_set || is_set(running_config.yfilter)) leaf_name_data.push_back(running_config.get_name_leafdata());
    if (echo_commands.is_set || is_set(echo_commands.yfilter)) leaf_name_data.push_back(echo_commands.get_name_leafdata());
    if (stop_at_first_failure.is_set || is_set(stop_at_first_failure.yfilter)) leaf_name_data.push_back(stop_at_first_failure.get_name_leafdata());
    if (dest_local_config.is_set || is_set(dest_local_config.yfilter)) leaf_name_data.push_back(dest_local_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CopyStartupConfigSrc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyStartupConfigSrc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CopyStartupConfigSrc::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest_remote")
    {
        dest_remote = value;
        dest_remote.value_namespace = name_space;
        dest_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-config")
    {
        running_config = value;
        running_config.value_namespace = name_space;
        running_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-commands")
    {
        echo_commands = value;
        echo_commands.value_namespace = name_space;
        echo_commands.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-at-first-failure")
    {
        stop_at_first_failure = value;
        stop_at_first_failure.value_namespace = name_space;
        stop_at_first_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest_local_config")
    {
        dest_local_config = value;
        dest_local_config.value_namespace = name_space;
        dest_local_config.value_namespace_prefix = name_space_prefix;
    }
}

void CopyStartupConfigSrc::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest_remote")
    {
        dest_remote.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "running-config")
    {
        running_config.yfilter = yfilter;
    }
    if(value_path == "echo-commands")
    {
        echo_commands.yfilter = yfilter;
    }
    if(value_path == "stop-at-first-failure")
    {
        stop_at_first_failure.yfilter = yfilter;
    }
    if(value_path == "dest_local_config")
    {
        dest_local_config.yfilter = yfilter;
    }
}

bool CopyStartupConfigSrc::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest_remote" || name == "source-interface" || name == "vrf" || name == "running-config" || name == "echo-commands" || name == "stop-at-first-failure" || name == "dest_local_config")
        return true;
    return false;
}

CopyLicenses::CopyLicenses()
    :
    input(std::make_shared<CopyLicenses::Input>())
{
    input->parent = this;

    yang_name = "copy_licenses"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

CopyLicenses::~CopyLicenses()
{
}

bool CopyLicenses::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool CopyLicenses::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string CopyLicenses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_licenses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyLicenses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CopyLicenses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CopyLicenses::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyLicenses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void CopyLicenses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CopyLicenses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CopyLicenses::clone_ptr() const
{
    return std::make_shared<CopyLicenses>();
}

std::string CopyLicenses::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string CopyLicenses::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function CopyLicenses::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CopyLicenses::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool CopyLicenses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

CopyLicenses::Input::Input()
    :
    licenses{YType::str, "licenses"}
{

    yang_name = "input"; yang_parent_name = "copy_licenses"; is_top_level_class = false; has_list_ancestor = false; 
}

CopyLicenses::Input::~Input()
{
}

bool CopyLicenses::Input::has_data() const
{
    if (is_presence_container) return true;
    return licenses.is_set;
}

bool CopyLicenses::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(licenses.yfilter);
}

std::string CopyLicenses::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:copy_licenses/" << get_segment_path();
    return path_buffer.str();
}

std::string CopyLicenses::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CopyLicenses::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (licenses.is_set || is_set(licenses.yfilter)) leaf_name_data.push_back(licenses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CopyLicenses::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CopyLicenses::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CopyLicenses::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "licenses")
    {
        licenses = value;
        licenses.value_namespace = name_space;
        licenses.value_namespace_prefix = name_space_prefix;
    }
}

void CopyLicenses::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "licenses")
    {
        licenses.yfilter = yfilter;
    }
}

bool CopyLicenses::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "licenses")
        return true;
    return false;
}

Delete::Delete()
    :
    input(std::make_shared<Delete::Input>())
{
    input->parent = this;

    yang_name = "delete"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

Delete::~Delete()
{
}

bool Delete::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool Delete::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string Delete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:delete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Delete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Delete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Delete::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Delete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void Delete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Delete::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Delete::clone_ptr() const
{
    return std::make_shared<Delete>();
}

std::string Delete::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string Delete::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function Delete::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Delete::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool Delete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Delete::Input::Input()
    :
    target{YType::str, "target"}
{

    yang_name = "input"; yang_parent_name = "delete"; is_top_level_class = false; has_list_ancestor = false; 
}

Delete::Input::~Input()
{
}

bool Delete::Input::has_data() const
{
    if (is_presence_container) return true;
    return target.is_set;
}

bool Delete::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(target.yfilter);
}

std::string Delete::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:delete/" << get_segment_path();
    return path_buffer.str();
}

std::string Delete::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Delete::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (target.is_set || is_set(target.yfilter)) leaf_name_data.push_back(target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Delete::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Delete::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Delete::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "target")
    {
        target = value;
        target.value_namespace = name_space;
        target.value_namespace_prefix = name_space_prefix;
    }
}

void Delete::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "target")
    {
        target.yfilter = yfilter;
    }
}

bool Delete::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "target")
        return true;
    return false;
}

DeleteCaCertificate::DeleteCaCertificate()
{

    yang_name = "delete_ca_certificate"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

DeleteCaCertificate::~DeleteCaCertificate()
{
}

bool DeleteCaCertificate::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool DeleteCaCertificate::has_operation() const
{
    return is_set(yfilter);
}

std::string DeleteCaCertificate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:delete_ca_certificate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeleteCaCertificate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DeleteCaCertificate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteCaCertificate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DeleteCaCertificate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DeleteCaCertificate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DeleteCaCertificate::clone_ptr() const
{
    return std::make_shared<DeleteCaCertificate>();
}

std::string DeleteCaCertificate::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string DeleteCaCertificate::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function DeleteCaCertificate::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DeleteCaCertificate::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool DeleteCaCertificate::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

DeleteCrl::DeleteCrl()
{

    yang_name = "delete_crl"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

DeleteCrl::~DeleteCrl()
{
}

bool DeleteCrl::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool DeleteCrl::has_operation() const
{
    return is_set(yfilter);
}

std::string DeleteCrl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:delete_crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DeleteCrl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DeleteCrl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DeleteCrl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DeleteCrl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DeleteCrl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DeleteCrl::clone_ptr() const
{
    return std::make_shared<DeleteCrl>();
}

std::string DeleteCrl::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string DeleteCrl::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function DeleteCrl::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DeleteCrl::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool DeleteCrl::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

BootNxos::BootNxos()
    :
    input(std::make_shared<BootNxos::Input>())
{
    input->parent = this;

    yang_name = "boot_nxos"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

BootNxos::~BootNxos()
{
}

bool BootNxos::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data());
}

bool BootNxos::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string BootNxos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:boot_nxos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BootNxos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BootNxos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<BootNxos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BootNxos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void BootNxos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BootNxos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> BootNxos::clone_ptr() const
{
    return std::make_shared<BootNxos>();
}

std::string BootNxos::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string BootNxos::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function BootNxos::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BootNxos::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool BootNxos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

BootNxos::Input::Input()
    :
    image{YType::str, "image"}
{

    yang_name = "input"; yang_parent_name = "boot_nxos"; is_top_level_class = false; has_list_ancestor = false; 
}

BootNxos::Input::~Input()
{
}

bool BootNxos::Input::has_data() const
{
    if (is_presence_container) return true;
    return image.is_set;
}

bool BootNxos::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(image.yfilter);
}

std::string BootNxos::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:boot_nxos/" << get_segment_path();
    return path_buffer.str();
}

std::string BootNxos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BootNxos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (image.is_set || is_set(image.yfilter)) leaf_name_data.push_back(image.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BootNxos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BootNxos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BootNxos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "image")
    {
        image = value;
        image.value_namespace = name_space;
        image.value_namespace_prefix = name_space_prefix;
    }
}

void BootNxos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "image")
    {
        image.yfilter = yfilter;
    }
}

bool BootNxos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "image")
        return true;
    return false;
}

Reload::Reload()
{

    yang_name = "reload"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

Reload::~Reload()
{
}

bool Reload::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Reload::has_operation() const
{
    return is_set(yfilter);
}

std::string Reload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:reload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Reload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Reload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Reload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Reload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Reload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Reload::clone_ptr() const
{
    return std::make_shared<Reload>();
}

std::string Reload::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string Reload::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function Reload::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Reload::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool Reload::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Dir::Dir()
    :
    input(std::make_shared<Dir::Input>())
    , output(std::make_shared<Dir::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "dir"; yang_parent_name = "Cisco-NX-OS-device"; is_top_level_class = true; has_list_ancestor = false; 
}

Dir::~Dir()
{
}

bool Dir::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Dir::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Dir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:dir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Dir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Dir::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Dir::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Dir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Dir::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Dir::clone_ptr() const
{
    return std::make_shared<Dir>();
}

std::string Dir::get_bundle_yang_models_location() const
{
    return ydk_cisco_nx_os_models_path;
}

std::string Dir::get_bundle_name() const
{
    return "cisco_nx_os";
}

augment_capabilities_function Dir::get_augment_capabilities_function() const
{
    return cisco_nx_os_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Dir::get_namespace_identity_lookup() const
{
    return cisco_nx_os_namespace_identity_lookup;
}

bool Dir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Dir::Input::Input()
    :
    filemask{YType::str, "filemask"}
{

    yang_name = "input"; yang_parent_name = "dir"; is_top_level_class = false; has_list_ancestor = false; 
}

Dir::Input::~Input()
{
}

bool Dir::Input::has_data() const
{
    if (is_presence_container) return true;
    return filemask.is_set;
}

bool Dir::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filemask.yfilter);
}

std::string Dir::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:dir/" << get_segment_path();
    return path_buffer.str();
}

std::string Dir::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dir::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filemask.is_set || is_set(filemask.yfilter)) leaf_name_data.push_back(filemask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dir::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dir::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Dir::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filemask")
    {
        filemask = value;
        filemask.value_namespace = name_space;
        filemask.value_namespace_prefix = name_space_prefix;
    }
}

void Dir::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filemask")
    {
        filemask.yfilter = yfilter;
    }
}

bool Dir::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filemask")
        return true;
    return false;
}

Dir::Output::Output()
    :
    data{YType::str, "data"}
{

    yang_name = "output"; yang_parent_name = "dir"; is_top_level_class = false; has_list_ancestor = false; 
}

Dir::Output::~Output()
{
}

bool Dir::Output::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Dir::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Dir::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:dir/" << get_segment_path();
    return path_buffer.str();
}

std::string Dir::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Dir::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Dir::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Dir::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Dir::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Dir::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Dir::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}


}
}

