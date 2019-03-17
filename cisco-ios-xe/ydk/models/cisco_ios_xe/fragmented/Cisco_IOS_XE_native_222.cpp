
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_222.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Line::Aux::Privilege::Privilege()
    :
    level(nullptr) // presence node
{

    yang_name = "privilege"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::Privilege::~Privilege()
{
}

bool Native::Line::Aux::Privilege::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Line::Aux::Privilege::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Line::Aux::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Aux::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Line::Aux::Privilege::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Aux::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Line::Aux::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Line::Aux::Privilege::Level::Level()
    :
    number{YType::uint8, "number"}
{

    yang_name = "level"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Aux::Privilege::Level::~Level()
{
}

bool Native::Line::Aux::Privilege::Level::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set;
}

bool Native::Line::Aux::Privilege::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Line::Aux::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Privilege::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Aux::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Aux::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Aux::Privilege::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Privilege::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Privilege::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::Line::Aux::SessionTimeout::SessionTimeout()
    :
    session_timeout_value{YType::uint16, "session-timeout-value"},
    output{YType::empty, "output"}
{

    yang_name = "session-timeout"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::SessionTimeout::~SessionTimeout()
{
}

bool Native::Line::Aux::SessionTimeout::has_data() const
{
    if (is_presence_container) return true;
    return session_timeout_value.is_set
	|| output.is_set;
}

bool Native::Line::Aux::SessionTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_timeout_value.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Line::Aux::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::SessionTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_timeout_value.is_set || is_set(session_timeout_value.yfilter)) leaf_name_data.push_back(session_timeout_value.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Aux::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Aux::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Aux::SessionTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-timeout-value")
    {
        session_timeout_value = value;
        session_timeout_value.value_namespace = name_space;
        session_timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::SessionTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-timeout-value")
    {
        session_timeout_value.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::Aux::SessionTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-timeout-value" || name == "output")
        return true;
    return false;
}

Native::Line::Aux::Timeout::Timeout()
    :
    login{YType::empty, "login"}
{

    yang_name = "timeout"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::Timeout::~Timeout()
{
}

bool Native::Line::Aux::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return login.is_set;
}

bool Native::Line::Aux::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Native::Line::Aux::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Aux::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Aux::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Aux::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Native::Line::Aux::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{

    yang_name = "telnet"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::Telnet::~Telnet()
{
}

bool Native::Line::Aux::Telnet::has_data() const
{
    if (is_presence_container) return true;
    return transparent.is_set;
}

bool Native::Line::Aux::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Line::Aux::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Aux::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Aux::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Aux::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transparent")
        return true;
    return false;
}

Native::Line::Aux::Transport::Transport()
    :
    input(std::make_shared<Native::Line::Aux::Transport::Input>())
    , output(std::make_shared<Native::Line::Aux::Transport::Output>())
    , preferred(nullptr) // presence node
{
    input->parent = this;
    output->parent = this;

    yang_name = "transport"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::Transport::~Transport()
{
}

bool Native::Line::Aux::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (preferred !=  nullptr && preferred->has_data());
}

bool Native::Line::Aux::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (preferred !=  nullptr && preferred->has_operation());
}

std::string Native::Line::Aux::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Aux::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Line::Aux::Transport::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Line::Aux::Transport::Output>();
        }
        return output;
    }

    if(child_yang_name == "preferred")
    {
        if(preferred == nullptr)
        {
            preferred = std::make_shared<Native::Line::Aux::Transport::Preferred>();
        }
        return preferred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Aux::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    if(preferred != nullptr)
    {
        _children["preferred"] = preferred;
    }

    return _children;
}

void Native::Line::Aux::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Aux::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Aux::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "preferred")
        return true;
    return false;
}

Native::Line::Aux::Transport::Input::Input()
    :
    input{YType::enumeration, "input"}
{

    yang_name = "input"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::Transport::Input::~Input()
{
}

bool Native::Line::Aux::Transport::Input::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : input.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Aux::Transport::Input::has_operation() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string Native::Line::Aux::Transport::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Transport::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto input_name_datas = input.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_name_datas.begin(), input_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Aux::Transport::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Aux::Transport::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Aux::Transport::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

void Native::Line::Aux::Transport::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Transport::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Line::Aux::Transport::Output::Output()
    :
    output{YType::enumeration, "output"}
{

    yang_name = "output"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::Transport::Output::~Output()
{
}

bool Native::Line::Aux::Transport::Output::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Aux::Transport::Output::has_operation() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Line::Aux::Transport::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Transport::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto output_name_datas = output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), output_name_datas.begin(), output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Aux::Transport::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Aux::Transport::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Aux::Transport::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

void Native::Line::Aux::Transport::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Transport::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Line::Aux::Transport::Preferred::Preferred()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "preferred"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Aux::Transport::Preferred::~Preferred()
{
}

bool Native::Line::Aux::Transport::Preferred::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set;
}

bool Native::Line::Aux::Transport::Preferred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Line::Aux::Transport::Preferred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::Transport::Preferred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Aux::Transport::Preferred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Aux::Transport::Preferred::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Aux::Transport::Preferred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::Transport::Preferred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Line::Aux::Transport::Preferred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Line::Aux::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "usb-inactivity-timeout"; yang_parent_name = "aux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Aux::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::Aux::UsbInactivityTimeout::has_data() const
{
    if (is_presence_container) return true;
    return switch_.is_set;
}

bool Native::Line::Aux::UsbInactivityTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Line::Aux::UsbInactivityTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usb-inactivity-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Aux::UsbInactivityTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Aux::UsbInactivityTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Aux::UsbInactivityTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Aux::UsbInactivityTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Aux::UsbInactivityTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Line::Aux::UsbInactivityTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Line::Console::Console()
    :
    first{YType::enumeration, "first"},
    no_activation_character{YType::boolean, "no-activation-character"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    notify{YType::empty, "notify"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    session_limit{YType::uint32, "session-limit"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
        ,
    authorization(std::make_shared<Native::Line::Console::Authorization>())
    , access_class(std::make_shared<Native::Line::Console::AccessClass>())
    , autocommand(std::make_shared<Native::Line::Console::Autocommand>())
    , autocommand_options(nullptr) // presence node
    , databits(std::make_shared<Native::Line::Console::Databits>())
    , escape_character(std::make_shared<Native::Line::Console::EscapeCharacter>())
    , no_exec(std::make_shared<Native::Line::Console::NoExec>())
    , exec(std::make_shared<Native::Line::Console::Exec>())
    , exec_timeout(std::make_shared<Native::Line::Console::ExecTimeout>())
    , flowcontrol(std::make_shared<Native::Line::Console::Flowcontrol>())
    , history(nullptr) // presence node
    , ip(std::make_shared<Native::Line::Console::Ip>())
    , ipv6(std::make_shared<Native::Line::Console::Ipv6>())
    , logging(std::make_shared<Native::Line::Console::Logging>())
    , login(nullptr) // presence node
    , media_type(std::make_shared<Native::Line::Console::MediaType>())
    , modem(std::make_shared<Native::Line::Console::Modem>())
    , padding(std::make_shared<Native::Line::Console::Padding>())
    , parity(std::make_shared<Native::Line::Console::Parity>())
    , password(std::make_shared<Native::Line::Console::Password>())
    , prc(std::make_shared<Native::Line::Console::Prc>())
    , privilege(std::make_shared<Native::Line::Console::Privilege>())
    , session_timeout(std::make_shared<Native::Line::Console::SessionTimeout>())
    , timeout(std::make_shared<Native::Line::Console::Timeout>())
    , telnet(std::make_shared<Native::Line::Console::Telnet>())
    , transport(std::make_shared<Native::Line::Console::Transport>())
    , usb_inactivity_timeout(std::make_shared<Native::Line::Console::UsbInactivityTimeout>())
{
    authorization->parent = this;
    access_class->parent = this;
    autocommand->parent = this;
    databits->parent = this;
    escape_character->parent = this;
    no_exec->parent = this;
    exec->parent = this;
    exec_timeout->parent = this;
    flowcontrol->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    media_type->parent = this;
    modem->parent = this;
    padding->parent = this;
    parity->parent = this;
    password->parent = this;
    prc->parent = this;
    privilege->parent = this;
    session_timeout->parent = this;
    timeout->parent = this;
    telnet->parent = this;
    transport->parent = this;
    usb_inactivity_timeout->parent = this;

    yang_name = "console"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Line::Console::~Console()
{
}

bool Native::Line::Console::has_data() const
{
    if (is_presence_container) return true;
    return first.is_set
	|| no_activation_character.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| notify.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| session_limit.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (authorization !=  nullptr && authorization->has_data())
	|| (access_class !=  nullptr && access_class->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data());
}

bool Native::Line::Console::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first.yfilter)
	|| ydk::is_set(no_activation_character.yfilter)
	|| ydk::is_set(activation_character.yfilter)
	|| ydk::is_set(data_character_bits.yfilter)
	|| ydk::is_set(domain_lookup.yfilter)
	|| ydk::is_set(editing.yfilter)
	|| ydk::is_set(exec_banner.yfilter)
	|| ydk::is_set(exec_character_bits.yfilter)
	|| ydk::is_set(full_help.yfilter)
	|| ydk::is_set(international.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(monitor.yfilter)
	|| ydk::is_set(motd_banner.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(rotary.yfilter)
	|| ydk::is_set(rxspeed.yfilter)
	|| ydk::is_set(session_limit.yfilter)
	|| ydk::is_set(special_character_bits.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(start_character.yfilter)
	|| ydk::is_set(stop_character.yfilter)
	|| ydk::is_set(stopbits.yfilter)
	|| ydk::is_set(terminal_type.yfilter)
	|| ydk::is_set(txspeed.yfilter)
	|| ydk::is_set(width.yfilter)
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation());
}

std::string Native::Line::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Line::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";
    ADD_KEY_TOKEN(first, "first");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first.is_set || is_set(first.yfilter)) leaf_name_data.push_back(first.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.yfilter)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.yfilter)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.yfilter)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.yfilter)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.yfilter)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.yfilter)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.yfilter)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.yfilter)) leaf_name_data.push_back(international.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.yfilter)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.yfilter)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.yfilter)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.yfilter)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.yfilter)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.yfilter)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.yfilter)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.yfilter)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.yfilter)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::Console::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Console::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::Console::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::Console::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::Console::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::Console::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::Console::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::Console::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::Console::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::Console::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::Console::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::Console::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::Console::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::Console::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::Console::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::Console::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::Console::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::Console::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::Console::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::Console::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::Console::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::Console::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::Console::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::Console::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::Console::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::Console::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::Console::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    if(access_class != nullptr)
    {
        _children["access-class"] = access_class;
    }

    if(autocommand != nullptr)
    {
        _children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        _children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        _children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        _children["escape-character"] = escape_character;
    }

    if(no_exec != nullptr)
    {
        _children["no-exec"] = no_exec;
    }

    if(exec != nullptr)
    {
        _children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        _children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        _children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        _children["history"] = history;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(login != nullptr)
    {
        _children["login"] = login;
    }

    if(media_type != nullptr)
    {
        _children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        _children["modem"] = modem;
    }

    if(padding != nullptr)
    {
        _children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        _children["parity"] = parity;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(prc != nullptr)
    {
        _children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        _children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        _children["session-timeout"] = session_timeout;
    }

    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    if(telnet != nullptr)
    {
        _children["telnet"] = telnet;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        _children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    return _children;
}

void Native::Line::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first")
    {
        first = value;
        first.value_namespace = name_space;
        first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
        no_activation_character.value_namespace = name_space;
        no_activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
        activation_character.value_namespace = name_space;
        activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
        data_character_bits.value_namespace = name_space;
        data_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "editing")
    {
        editing = value;
        editing.value_namespace = name_space;
        editing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
        exec_banner.value_namespace = name_space;
        exec_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
        exec_character_bits.value_namespace = name_space;
        exec_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-help")
    {
        full_help = value;
        full_help.value_namespace = name_space;
        full_help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "international")
    {
        international = value;
        international.value_namespace = name_space;
        international.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
        motd_banner.value_namespace = name_space;
        motd_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotary")
    {
        rotary = value;
        rotary.value_namespace = name_space;
        rotary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
        rxspeed.value_namespace = name_space;
        rxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
        session_limit.value_namespace = name_space;
        session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
        special_character_bits.value_namespace = name_space;
        special_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-character")
    {
        start_character = value;
        start_character.value_namespace = name_space;
        start_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
        stop_character.value_namespace = name_space;
        stop_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
        stopbits.value_namespace = name_space;
        stopbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
        terminal_type.value_namespace = name_space;
        terminal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
        txspeed.value_namespace = name_space;
        txspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first")
    {
        first.yfilter = yfilter;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character.yfilter = yfilter;
    }
    if(value_path == "activation-character")
    {
        activation_character.yfilter = yfilter;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits.yfilter = yfilter;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
    if(value_path == "editing")
    {
        editing.yfilter = yfilter;
    }
    if(value_path == "exec-banner")
    {
        exec_banner.yfilter = yfilter;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits.yfilter = yfilter;
    }
    if(value_path == "full-help")
    {
        full_help.yfilter = yfilter;
    }
    if(value_path == "international")
    {
        international.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
    if(value_path == "motd-banner")
    {
        motd_banner.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "rotary")
    {
        rotary.yfilter = yfilter;
    }
    if(value_path == "rxspeed")
    {
        rxspeed.yfilter = yfilter;
    }
    if(value_path == "session-limit")
    {
        session_limit.yfilter = yfilter;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "start-character")
    {
        start_character.yfilter = yfilter;
    }
    if(value_path == "stop-character")
    {
        stop_character.yfilter = yfilter;
    }
    if(value_path == "stopbits")
    {
        stopbits.yfilter = yfilter;
    }
    if(value_path == "terminal-type")
    {
        terminal_type.yfilter = yfilter;
    }
    if(value_path == "txspeed")
    {
        txspeed.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool Native::Line::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "access-class" || name == "autocommand" || name == "autocommand-options" || name == "databits" || name == "escape-character" || name == "no-exec" || name == "exec" || name == "exec-timeout" || name == "flowcontrol" || name == "history" || name == "ip" || name == "ipv6" || name == "logging" || name == "login" || name == "media-type" || name == "modem" || name == "padding" || name == "parity" || name == "password" || name == "prc" || name == "privilege" || name == "session-timeout" || name == "timeout" || name == "telnet" || name == "transport" || name == "usb-inactivity-timeout" || name == "first" || name == "no-activation-character" || name == "activation-character" || name == "data-character-bits" || name == "domain-lookup" || name == "editing" || name == "exec-banner" || name == "exec-character-bits" || name == "full-help" || name == "international" || name == "length" || name == "line" || name == "location" || name == "monitor" || name == "motd-banner" || name == "notify" || name == "rotary" || name == "rxspeed" || name == "session-limit" || name == "special-character-bits" || name == "speed" || name == "start-character" || name == "stop-character" || name == "stopbits" || name == "terminal-type" || name == "txspeed" || name == "width")
        return true;
    return false;
}

Native::Line::Console::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::Console::Authorization::Command>())
    , exec(std::make_shared<Native::Line::Console::Authorization::Exec>())
{
    command->parent = this;
    exec->parent = this;

    yang_name = "authorization"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Authorization::~Authorization()
{
}

bool Native::Line::Console::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return (command !=  nullptr && command->has_data())
	|| (exec !=  nullptr && exec->has_data());
}

bool Native::Line::Console::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (command !=  nullptr && command->has_operation())
	|| (exec !=  nullptr && exec->has_operation());
}

std::string Native::Line::Console::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::Console::Authorization::Command>();
        }
        return command;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::Console::Authorization::Exec>();
        }
        return exec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(command != nullptr)
    {
        _children["command"] = command;
    }

    if(exec != nullptr)
    {
        _children["exec"] = exec;
    }

    return _children;
}

void Native::Line::Console::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "exec")
        return true;
    return false;
}

Native::Line::Console::Authorization::Command::Command()
    :
    enable_level{YType::uint8, "enable-level"},
    auth_name{YType::str, "auth-name"}
{

    yang_name = "command"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Authorization::Command::~Command()
{
}

bool Native::Line::Console::Authorization::Command::has_data() const
{
    if (is_presence_container) return true;
    return enable_level.is_set
	|| auth_name.is_set;
}

bool Native::Line::Console::Authorization::Command::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_level.yfilter)
	|| ydk::is_set(auth_name.yfilter);
}

std::string Native::Line::Console::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Authorization::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_level.is_set || is_set(enable_level.yfilter)) leaf_name_data.push_back(enable_level.get_name_leafdata());
    if (auth_name.is_set || is_set(auth_name.yfilter)) leaf_name_data.push_back(auth_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Authorization::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-level")
    {
        enable_level = value;
        enable_level.value_namespace = name_space;
        enable_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-name")
    {
        auth_name = value;
        auth_name.value_namespace = name_space;
        auth_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Authorization::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-level")
    {
        enable_level.yfilter = yfilter;
    }
    if(value_path == "auth-name")
    {
        auth_name.yfilter = yfilter;
    }
}

bool Native::Line::Console::Authorization::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-level" || name == "auth-name")
        return true;
    return false;
}

Native::Line::Console::Authorization::Exec::Exec()
    :
    authorization_name{YType::str, "authorization-name"},
    default_{YType::empty, "default"}
{

    yang_name = "exec"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Authorization::Exec::~Exec()
{
}

bool Native::Line::Console::Authorization::Exec::has_data() const
{
    if (is_presence_container) return true;
    return authorization_name.is_set
	|| default_.is_set;
}

bool Native::Line::Console::Authorization::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorization_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Line::Console::Authorization::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Authorization::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorization_name.is_set || is_set(authorization_name.yfilter)) leaf_name_data.push_back(authorization_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Authorization::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Authorization::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Authorization::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorization-name")
    {
        authorization_name = value;
        authorization_name.value_namespace = name_space;
        authorization_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Authorization::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorization-name")
    {
        authorization_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Line::Console::Authorization::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization-name" || name == "default")
        return true;
    return false;
}

Native::Line::Console::AccessClass::AccessClass()
    :
    acccess_list(this, {"direction"})
{

    yang_name = "access-class"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::AccessClass::~AccessClass()
{
}

bool Native::Line::Console::AccessClass::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acccess_list.len(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Console::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.len(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::Console::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        auto ent_ = std::make_shared<Native::Line::Console::AccessClass::AcccessList>();
        ent_->parent = this;
        acccess_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : acccess_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Line::Console::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acccess-list")
        return true;
    return false;
}

Native::Line::Console::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{

    yang_name = "acccess-list"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::Console::AccessClass::AcccessList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::Console::AccessClass::AcccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(vrf_also.yfilter);
}

std::string Native::Line::Console::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::AccessClass::AcccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.yfilter)) leaf_name_data.push_back(vrf_also.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::AccessClass::AcccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
        vrf_also.value_namespace = name_space;
        vrf_also.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::AccessClass::AcccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "vrf-also")
    {
        vrf_also.yfilter = yfilter;
    }
}

bool Native::Line::Console::AccessClass::AcccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list" || name == "vrf-also")
        return true;
    return false;
}

Native::Line::Console::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
        ,
    no_suppress_linenumber(nullptr) // presence node
{

    yang_name = "autocommand"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Autocommand::~Autocommand()
{
}

bool Native::Line::Console::Autocommand::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::Console::Autocommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::Console::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Autocommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::Console::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(no_suppress_linenumber != nullptr)
    {
        _children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return _children;
}

void Native::Line::Console::Autocommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Autocommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::Console::Autocommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-suppress-linenumber" || name == "line")
        return true;
    return false;
}

Native::Line::Console::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{

    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Console::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::Console::Autocommand::NoSuppressLinenumber::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set;
}

bool Native::Line::Console::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Line::Console::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Autocommand::NoSuppressLinenumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Autocommand::NoSuppressLinenumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::Console::Autocommand::NoSuppressLinenumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line")
        return true;
    return false;
}

Native::Line::Console::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
    , delay(nullptr) // presence node
    , nohangup(nullptr) // presence node
{

    yang_name = "autocommand-options"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Console::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::Console::AutocommandOptions::has_data() const
{
    if (is_presence_container) return true;
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::Console::AutocommandOptions::has_operation() const
{
    return is_set(yfilter)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::Console::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::AutocommandOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::Console::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::Console::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::Console::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(abort_character != nullptr)
    {
        _children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        _children["nohangup"] = nohangup;
    }

    return _children;
}

void Native::Line::Console::AutocommandOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::AutocommandOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::AutocommandOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay" || name == "nohangup")
        return true;
    return false;
}

Native::Line::Console::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{

    yang_name = "abort-character"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Console::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::Console::AutocommandOptions::AbortCharacter::has_data() const
{
    if (is_presence_container) return true;
    return character.is_set;
}

bool Native::Line::Console::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter);
}

std::string Native::Line::Console::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::AutocommandOptions::AbortCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::AutocommandOptions::AbortCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
}

bool Native::Line::Console::AutocommandOptions::AbortCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character")
        return true;
    return false;
}

Native::Line::Console::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{

    yang_name = "delay"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Console::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::Console::AutocommandOptions::Delay::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set;
}

bool Native::Line::Console::AutocommandOptions::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Line::Console::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::AutocommandOptions::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::AutocommandOptions::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::AutocommandOptions::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Line::Console::AutocommandOptions::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Line::Console::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{

    yang_name = "nohangup"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Console::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::Console::AutocommandOptions::Nohangup::has_data() const
{
    if (is_presence_container) return true;
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::Console::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abort_character.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Line::Console::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::AutocommandOptions::Nohangup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.yfilter)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::AutocommandOptions::Nohangup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
        abort_character.value_namespace = name_space;
        abort_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::AutocommandOptions::Nohangup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abort-character")
    {
        abort_character.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Line::Console::AutocommandOptions::Nohangup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay")
        return true;
    return false;
}

Native::Line::Console::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{

    yang_name = "databits"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Databits::~Databits()
{
}

bool Native::Line::Console::Databits::has_data() const
{
    if (is_presence_container) return true;
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::Console::Databits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_to_5.yfilter)
	|| ydk::is_set(set_to_6.yfilter)
	|| ydk::is_set(set_to_7.yfilter)
	|| ydk::is_set(set_to_8.yfilter);
}

std::string Native::Line::Console::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Databits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.yfilter)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.yfilter)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.yfilter)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.yfilter)) leaf_name_data.push_back(set_to_8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Databits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
        set_to_5.value_namespace = name_space;
        set_to_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
        set_to_6.value_namespace = name_space;
        set_to_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
        set_to_7.value_namespace = name_space;
        set_to_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
        set_to_8.value_namespace = name_space;
        set_to_8.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Databits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-to-5")
    {
        set_to_5.yfilter = yfilter;
    }
    if(value_path == "set-to-6")
    {
        set_to_6.yfilter = yfilter;
    }
    if(value_path == "set-to-7")
    {
        set_to_7.yfilter = yfilter;
    }
    if(value_path == "set-to-8")
    {
        set_to_8.yfilter = yfilter;
    }
}

bool Native::Line::Console::Databits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-to-5" || name == "set-to-6" || name == "set-to-7" || name == "set-to-8")
        return true;
    return false;
}

Native::Line::Console::EscapeCharacter::EscapeCharacter()
    :
    char_{YType::str, "char"},
    soft{YType::empty, "soft"}
{

    yang_name = "escape-character"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::Console::EscapeCharacter::has_data() const
{
    if (is_presence_container) return true;
    return char_.is_set
	|| soft.is_set;
}

bool Native::Line::Console::EscapeCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(char_.yfilter)
	|| ydk::is_set(soft.yfilter);
}

std::string Native::Line::Console::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::EscapeCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char_.is_set || is_set(char_.yfilter)) leaf_name_data.push_back(char_.get_name_leafdata());
    if (soft.is_set || is_set(soft.yfilter)) leaf_name_data.push_back(soft.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::EscapeCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "char")
    {
        char_ = value;
        char_.value_namespace = name_space;
        char_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft")
    {
        soft = value;
        soft.value_namespace = name_space;
        soft.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::EscapeCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "char")
    {
        char_.yfilter = yfilter;
    }
    if(value_path == "soft")
    {
        soft.yfilter = yfilter;
    }
}

bool Native::Line::Console::EscapeCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "char" || name == "soft")
        return true;
    return false;
}

Native::Line::Console::NoExec::NoExec()
    :
    exec{YType::boolean, "exec"}
{

    yang_name = "no-exec"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::NoExec::~NoExec()
{
}

bool Native::Line::Console::NoExec::has_data() const
{
    if (is_presence_container) return true;
    return exec.is_set;
}

bool Native::Line::Console::NoExec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exec.yfilter);
}

std::string Native::Line::Console::NoExec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::NoExec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.yfilter)) leaf_name_data.push_back(exec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::NoExec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::NoExec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::NoExec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exec")
    {
        exec = value;
        exec.value_namespace = name_space;
        exec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::NoExec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exec")
    {
        exec.yfilter = yfilter;
    }
}

bool Native::Line::Console::NoExec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Line::Console::Exec::Exec()
    :
    prompt(std::make_shared<Native::Line::Console::Exec::Prompt>())
{
    prompt->parent = this;

    yang_name = "exec"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Exec::~Exec()
{
}

bool Native::Line::Console::Exec::has_data() const
{
    if (is_presence_container) return true;
    return (prompt !=  nullptr && prompt->has_data());
}

bool Native::Line::Console::Exec::has_operation() const
{
    return is_set(yfilter)
	|| (prompt !=  nullptr && prompt->has_operation());
}

std::string Native::Line::Console::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Line::Console::Exec::Prompt>();
        }
        return prompt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prompt != nullptr)
    {
        _children["prompt"] = prompt;
    }

    return _children;
}

void Native::Line::Console::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prompt")
        return true;
    return false;
}

Native::Line::Console::Exec::Prompt::Prompt()
    :
    timestamp{YType::empty, "timestamp"}
{

    yang_name = "prompt"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Exec::Prompt::~Prompt()
{
}

bool Native::Line::Console::Exec::Prompt::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set;
}

bool Native::Line::Console::Exec::Prompt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string Native::Line::Console::Exec::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Exec::Prompt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Exec::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Exec::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Exec::Prompt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Exec::Prompt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool Native::Line::Console::Exec::Prompt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Native::Line::Console::ExecTimeout::ExecTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "exec-timeout"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::ExecTimeout::~ExecTimeout()
{
}

bool Native::Line::Console::ExecTimeout::has_data() const
{
    if (is_presence_container) return true;
    return minutes.is_set
	|| seconds.is_set;
}

bool Native::Line::Console::ExecTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Line::Console::ExecTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::ExecTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::ExecTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::ExecTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::ExecTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::ExecTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Line::Console::ExecTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minutes" || name == "seconds")
        return true;
    return false;
}

Native::Line::Console::Flowcontrol::Flowcontrol()
    :
    none{YType::empty, "NONE"},
    hardware{YType::empty, "hardware"},
    software{YType::empty, "software"}
{

    yang_name = "flowcontrol"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Flowcontrol::~Flowcontrol()
{
}

bool Native::Line::Console::Flowcontrol::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| hardware.is_set
	|| software.is_set;
}

bool Native::Line::Console::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(hardware.yfilter)
	|| ydk::is_set(software.yfilter);
}

std::string Native::Line::Console::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (hardware.is_set || is_set(hardware.yfilter)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (software.is_set || is_set(software.yfilter)) leaf_name_data.push_back(software.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "NONE")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware")
    {
        hardware = value;
        hardware.value_namespace = name_space;
        hardware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software")
    {
        software = value;
        software.value_namespace = name_space;
        software.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "NONE")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "hardware")
    {
        hardware.yfilter = yfilter;
    }
    if(value_path == "software")
    {
        software.yfilter = yfilter;
    }
}

bool Native::Line::Console::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NONE" || name == "hardware" || name == "software")
        return true;
    return false;
}

Native::Line::Console::History::History()
    :
    size{YType::uint16, "size"}
{

    yang_name = "history"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Console::History::~History()
{
}

bool Native::Line::Console::History::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Line::Console::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Line::Console::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Line::Console::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Line::Console::Ip::Ip()
    :
    tcp{YType::empty, "tcp"}
        ,
    netmask_format(nullptr) // presence node
{

    yang_name = "ip"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Ip::~Ip()
{
}

bool Native::Line::Console::Ip::has_data() const
{
    if (is_presence_container) return true;
    return tcp.is_set
	|| (netmask_format !=  nullptr && netmask_format->has_data());
}

bool Native::Line::Console::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| (netmask_format !=  nullptr && netmask_format->has_operation());
}

std::string Native::Line::Console::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netmask-format")
    {
        if(netmask_format == nullptr)
        {
            netmask_format = std::make_shared<Native::Line::Console::Ip::NetmaskFormat>();
        }
        return netmask_format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(netmask_format != nullptr)
    {
        _children["netmask-format"] = netmask_format;
    }

    return _children;
}

void Native::Line::Console::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
}

bool Native::Line::Console::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netmask-format" || name == "tcp")
        return true;
    return false;
}

Native::Line::Console::Ip::NetmaskFormat::NetmaskFormat()
    :
    format{YType::enumeration, "format"}
{

    yang_name = "netmask-format"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Console::Ip::NetmaskFormat::~NetmaskFormat()
{
}

bool Native::Line::Console::Ip::NetmaskFormat::has_data() const
{
    if (is_presence_container) return true;
    return format.is_set;
}

bool Native::Line::Console::Ip::NetmaskFormat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Native::Line::Console::Ip::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Ip::NetmaskFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Ip::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Ip::NetmaskFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Ip::NetmaskFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Ip::NetmaskFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Native::Line::Console::Ip::NetmaskFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Line::Console::Ipv6::Ipv6()
    :
    access_class(std::make_shared<Native::Line::Console::Ipv6::AccessClass>())
{
    access_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Ipv6::~Ipv6()
{
}

bool Native::Line::Console::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (access_class !=  nullptr && access_class->has_data());
}

bool Native::Line::Console::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (access_class !=  nullptr && access_class->has_operation());
}

std::string Native::Line::Console::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Console::Ipv6::AccessClass>();
        }
        return access_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_class != nullptr)
    {
        _children["access-class"] = access_class;
    }

    return _children;
}

void Native::Line::Console::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::Console::Ipv6::AccessClass::AccessClass()
    :
    access_class(this, {"access_class_name"})
{

    yang_name = "access-class"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Ipv6::AccessClass::~AccessClass()
{
}

bool Native::Line::Console::Ipv6::AccessClass::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_class.len(); index++)
    {
        if(access_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Console::Ipv6::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<access_class.len(); index++)
    {
        if(access_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::Console::Ipv6::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Ipv6::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Ipv6::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        auto ent_ = std::make_shared<Native::Line::Console::Ipv6::AccessClass::AccessClass_>();
        ent_->parent = this;
        access_class.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Ipv6::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Line::Console::Ipv6::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Ipv6::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Ipv6::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::Console::Ipv6::AccessClass::AccessClass_::AccessClass_()
    :
    access_class_name{YType::str, "access-class-name"},
    enumeration_in_out{YType::enumeration, "enumeration-in-out"}
{

    yang_name = "access-class"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Ipv6::AccessClass::AccessClass_::~AccessClass_()
{
}

bool Native::Line::Console::Ipv6::AccessClass::AccessClass_::has_data() const
{
    if (is_presence_container) return true;
    return access_class_name.is_set
	|| enumeration_in_out.is_set;
}

bool Native::Line::Console::Ipv6::AccessClass::AccessClass_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_class_name.yfilter)
	|| ydk::is_set(enumeration_in_out.yfilter);
}

std::string Native::Line::Console::Ipv6::AccessClass::AccessClass_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    ADD_KEY_TOKEN(access_class_name, "access-class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Ipv6::AccessClass::AccessClass_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class_name.is_set || is_set(access_class_name.yfilter)) leaf_name_data.push_back(access_class_name.get_name_leafdata());
    if (enumeration_in_out.is_set || is_set(enumeration_in_out.yfilter)) leaf_name_data.push_back(enumeration_in_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Ipv6::AccessClass::AccessClass_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Ipv6::AccessClass::AccessClass_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Ipv6::AccessClass::AccessClass_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-class-name")
    {
        access_class_name = value;
        access_class_name.value_namespace = name_space;
        access_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out = value;
        enumeration_in_out.value_namespace = name_space;
        enumeration_in_out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Ipv6::AccessClass::AccessClass_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-class-name")
    {
        access_class_name.yfilter = yfilter;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out.yfilter = yfilter;
    }
}

bool Native::Line::Console::Ipv6::AccessClass::AccessClass_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class-name" || name == "enumeration-in-out")
        return true;
    return false;
}

Native::Line::Console::Logging::Logging()
    :
    synchronous(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Logging::~Logging()
{
}

bool Native::Line::Console::Logging::has_data() const
{
    if (is_presence_container) return true;
    return (synchronous !=  nullptr && synchronous->has_data());
}

bool Native::Line::Console::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (synchronous !=  nullptr && synchronous->has_operation());
}

std::string Native::Line::Console::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Line::Console::Logging::Synchronous>();
        }
        return synchronous;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(synchronous != nullptr)
    {
        _children["synchronous"] = synchronous;
    }

    return _children;
}

void Native::Line::Console::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronous")
        return true;
    return false;
}

Native::Line::Console::Logging::Synchronous::Synchronous()
{

    yang_name = "synchronous"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Console::Logging::Synchronous::~Synchronous()
{
}

bool Native::Line::Console::Logging::Synchronous::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Line::Console::Logging::Synchronous::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Line::Console::Logging::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Logging::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Logging::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Logging::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Logging::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Logging::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Logging::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Line::Console::Login::Login()
    :
    local{YType::empty, "local"},
    authentication{YType::str, "authentication"}
{

    yang_name = "login"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Console::Login::~Login()
{
}

bool Native::Line::Console::Login::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| authentication.is_set;
}

bool Native::Line::Console::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(authentication.yfilter);
}

std::string Native::Line::Console::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
}

bool Native::Line::Console::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "authentication")
        return true;
    return false;
}

Native::Line::Console::MediaType::MediaType()
    :
    rj45{YType::empty, "rj45"}
{

    yang_name = "media-type"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::MediaType::~MediaType()
{
}

bool Native::Line::Console::MediaType::has_data() const
{
    if (is_presence_container) return true;
    return rj45.is_set;
}

bool Native::Line::Console::MediaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rj45.yfilter);
}

std::string Native::Line::Console::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::MediaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rj45.is_set || is_set(rj45.yfilter)) leaf_name_data.push_back(rj45.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::MediaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rj45")
    {
        rj45 = value;
        rj45.value_namespace = name_space;
        rj45.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::MediaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rj45")
    {
        rj45.yfilter = yfilter;
    }
}

bool Native::Line::Console::MediaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rj45")
        return true;
    return false;
}

Native::Line::Console::Modem::Modem()
    :
    cts_alarm{YType::empty, "CTS-Alarm"},
    dtr_active{YType::empty, "DTR-active"},
    dialin{YType::empty, "Dialin"},
    host{YType::empty, "Host"},
    inout{YType::empty, "InOut"},
    printer{YType::empty, "Printer"},
    answer_timeout{YType::empty, "answer-timeout"},
    dtr_delay{YType::empty, "dtr-delay"}
{

    yang_name = "modem"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Modem::~Modem()
{
}

bool Native::Line::Console::Modem::has_data() const
{
    if (is_presence_container) return true;
    return cts_alarm.is_set
	|| dtr_active.is_set
	|| dialin.is_set
	|| host.is_set
	|| inout.is_set
	|| printer.is_set
	|| answer_timeout.is_set
	|| dtr_delay.is_set;
}

bool Native::Line::Console::Modem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cts_alarm.yfilter)
	|| ydk::is_set(dtr_active.yfilter)
	|| ydk::is_set(dialin.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(printer.yfilter)
	|| ydk::is_set(answer_timeout.yfilter)
	|| ydk::is_set(dtr_delay.yfilter);
}

std::string Native::Line::Console::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Modem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cts_alarm.is_set || is_set(cts_alarm.yfilter)) leaf_name_data.push_back(cts_alarm.get_name_leafdata());
    if (dtr_active.is_set || is_set(dtr_active.yfilter)) leaf_name_data.push_back(dtr_active.get_name_leafdata());
    if (dialin.is_set || is_set(dialin.yfilter)) leaf_name_data.push_back(dialin.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (printer.is_set || is_set(printer.yfilter)) leaf_name_data.push_back(printer.get_name_leafdata());
    if (answer_timeout.is_set || is_set(answer_timeout.yfilter)) leaf_name_data.push_back(answer_timeout.get_name_leafdata());
    if (dtr_delay.is_set || is_set(dtr_delay.yfilter)) leaf_name_data.push_back(dtr_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Modem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "CTS-Alarm")
    {
        cts_alarm = value;
        cts_alarm.value_namespace = name_space;
        cts_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "DTR-active")
    {
        dtr_active = value;
        dtr_active.value_namespace = name_space;
        dtr_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Dialin")
    {
        dialin = value;
        dialin.value_namespace = name_space;
        dialin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "InOut")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Printer")
    {
        printer = value;
        printer.value_namespace = name_space;
        printer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "answer-timeout")
    {
        answer_timeout = value;
        answer_timeout.value_namespace = name_space;
        answer_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay = value;
        dtr_delay.value_namespace = name_space;
        dtr_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Modem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "CTS-Alarm")
    {
        cts_alarm.yfilter = yfilter;
    }
    if(value_path == "DTR-active")
    {
        dtr_active.yfilter = yfilter;
    }
    if(value_path == "Dialin")
    {
        dialin.yfilter = yfilter;
    }
    if(value_path == "Host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "InOut")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "Printer")
    {
        printer.yfilter = yfilter;
    }
    if(value_path == "answer-timeout")
    {
        answer_timeout.yfilter = yfilter;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay.yfilter = yfilter;
    }
}

bool Native::Line::Console::Modem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CTS-Alarm" || name == "DTR-active" || name == "Dialin" || name == "Host" || name == "InOut" || name == "Printer" || name == "answer-timeout" || name == "dtr-delay")
        return true;
    return false;
}

Native::Line::Console::Padding::Padding()
    :
    character{YType::str, "character"},
    null{YType::uint8, "null"}
{

    yang_name = "padding"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Padding::~Padding()
{
}

bool Native::Line::Console::Padding::has_data() const
{
    if (is_presence_container) return true;
    return character.is_set
	|| null.is_set;
}

bool Native::Line::Console::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Line::Console::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Line::Console::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character" || name == "null")
        return true;
    return false;
}

Native::Line::Console::Parity::Parity()
    :
    even{YType::empty, "even"},
    mark{YType::empty, "mark"},
    none{YType::empty, "none"},
    odd{YType::empty, "odd"},
    space{YType::empty, "space"}
{

    yang_name = "parity"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Parity::~Parity()
{
}

bool Native::Line::Console::Parity::has_data() const
{
    if (is_presence_container) return true;
    return even.is_set
	|| mark.is_set
	|| none.is_set
	|| odd.is_set
	|| space.is_set;
}

bool Native::Line::Console::Parity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(even.yfilter)
	|| ydk::is_set(mark.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(odd.yfilter)
	|| ydk::is_set(space.yfilter);
}

std::string Native::Line::Console::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (even.is_set || is_set(even.yfilter)) leaf_name_data.push_back(even.get_name_leafdata());
    if (mark.is_set || is_set(mark.yfilter)) leaf_name_data.push_back(mark.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (odd.is_set || is_set(odd.yfilter)) leaf_name_data.push_back(odd.get_name_leafdata());
    if (space.is_set || is_set(space.yfilter)) leaf_name_data.push_back(space.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "even")
    {
        even = value;
        even.value_namespace = name_space;
        even.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark")
    {
        mark = value;
        mark.value_namespace = name_space;
        mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odd")
    {
        odd = value;
        odd.value_namespace = name_space;
        odd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "space")
    {
        space = value;
        space.value_namespace = name_space;
        space.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "even")
    {
        even.yfilter = yfilter;
    }
    if(value_path == "mark")
    {
        mark.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "odd")
    {
        odd.yfilter = yfilter;
    }
    if(value_path == "space")
    {
        space.yfilter = yfilter;
    }
}

bool Native::Line::Console::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "even" || name == "mark" || name == "none" || name == "odd" || name == "space")
        return true;
    return false;
}

Native::Line::Console::Password::Password()
    :
    level{YType::uint8, "level"},
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "password"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Password::~Password()
{
}

bool Native::Line::Console::Password::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| type.is_set
	|| secret.is_set;
}

bool Native::Line::Console::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Line::Console::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Line::Console::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type" || name == "secret")
        return true;
    return false;
}

Native::Line::Console::Prc::Prc()
    :
    expose{YType::empty, "expose"},
    hide{YType::empty, "hide"}
{

    yang_name = "prc"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Prc::~Prc()
{
}

bool Native::Line::Console::Prc::has_data() const
{
    if (is_presence_container) return true;
    return expose.is_set
	|| hide.is_set;
}

bool Native::Line::Console::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expose.yfilter)
	|| ydk::is_set(hide.yfilter);
}

std::string Native::Line::Console::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expose.is_set || is_set(expose.yfilter)) leaf_name_data.push_back(expose.get_name_leafdata());
    if (hide.is_set || is_set(hide.yfilter)) leaf_name_data.push_back(hide.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expose")
    {
        expose = value;
        expose.value_namespace = name_space;
        expose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hide")
    {
        hide = value;
        hide.value_namespace = name_space;
        hide.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expose")
    {
        expose.yfilter = yfilter;
    }
    if(value_path == "hide")
    {
        hide.yfilter = yfilter;
    }
}

bool Native::Line::Console::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expose" || name == "hide")
        return true;
    return false;
}

Native::Line::Console::Privilege::Privilege()
    :
    level(nullptr) // presence node
{

    yang_name = "privilege"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Privilege::~Privilege()
{
}

bool Native::Line::Console::Privilege::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Line::Console::Privilege::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Line::Console::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Line::Console::Privilege::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Line::Console::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Line::Console::Privilege::Level::Level()
    :
    number{YType::uint8, "number"}
{

    yang_name = "level"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Console::Privilege::Level::~Level()
{
}

bool Native::Line::Console::Privilege::Level::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set;
}

bool Native::Line::Console::Privilege::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Line::Console::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Privilege::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Privilege::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Privilege::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Line::Console::Privilege::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::Line::Console::SessionTimeout::SessionTimeout()
    :
    session_timeout_value{YType::uint16, "session-timeout-value"},
    output{YType::empty, "output"}
{

    yang_name = "session-timeout"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::SessionTimeout::~SessionTimeout()
{
}

bool Native::Line::Console::SessionTimeout::has_data() const
{
    if (is_presence_container) return true;
    return session_timeout_value.is_set
	|| output.is_set;
}

bool Native::Line::Console::SessionTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_timeout_value.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Line::Console::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::SessionTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_timeout_value.is_set || is_set(session_timeout_value.yfilter)) leaf_name_data.push_back(session_timeout_value.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::SessionTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-timeout-value")
    {
        session_timeout_value = value;
        session_timeout_value.value_namespace = name_space;
        session_timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::SessionTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-timeout-value")
    {
        session_timeout_value.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::Console::SessionTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-timeout-value" || name == "output")
        return true;
    return false;
}

Native::Line::Console::Timeout::Timeout()
    :
    login{YType::empty, "login"}
{

    yang_name = "timeout"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Timeout::~Timeout()
{
}

bool Native::Line::Console::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return login.is_set;
}

bool Native::Line::Console::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Native::Line::Console::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Native::Line::Console::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Native::Line::Console::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{

    yang_name = "telnet"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Telnet::~Telnet()
{
}

bool Native::Line::Console::Telnet::has_data() const
{
    if (is_presence_container) return true;
    return transparent.is_set;
}

bool Native::Line::Console::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Line::Console::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Line::Console::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transparent")
        return true;
    return false;
}

Native::Line::Console::Transport::Transport()
    :
    input(std::make_shared<Native::Line::Console::Transport::Input>())
    , output(std::make_shared<Native::Line::Console::Transport::Output>())
    , preferred(nullptr) // presence node
{
    input->parent = this;
    output->parent = this;

    yang_name = "transport"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Transport::~Transport()
{
}

bool Native::Line::Console::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (preferred !=  nullptr && preferred->has_data());
}

bool Native::Line::Console::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (preferred !=  nullptr && preferred->has_operation());
}

std::string Native::Line::Console::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Line::Console::Transport::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Line::Console::Transport::Output>();
        }
        return output;
    }

    if(child_yang_name == "preferred")
    {
        if(preferred == nullptr)
        {
            preferred = std::make_shared<Native::Line::Console::Transport::Preferred>();
        }
        return preferred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    if(preferred != nullptr)
    {
        _children["preferred"] = preferred;
    }

    return _children;
}

void Native::Line::Console::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Console::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Console::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "preferred")
        return true;
    return false;
}

Native::Line::Console::Transport::Input::Input()
    :
    input{YType::enumeration, "input"}
{

    yang_name = "input"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Transport::Input::~Input()
{
}

bool Native::Line::Console::Transport::Input::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : input.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Console::Transport::Input::has_operation() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string Native::Line::Console::Transport::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Transport::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto input_name_datas = input.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_name_datas.begin(), input_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Transport::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Transport::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Transport::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

void Native::Line::Console::Transport::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool Native::Line::Console::Transport::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Line::Console::Transport::Output::Output()
    :
    output{YType::enumeration, "output"}
{

    yang_name = "output"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::Transport::Output::~Output()
{
}

bool Native::Line::Console::Transport::Output::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Console::Transport::Output::has_operation() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Line::Console::Transport::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Transport::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto output_name_datas = output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), output_name_datas.begin(), output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Transport::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Transport::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Transport::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

void Native::Line::Console::Transport::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::Console::Transport::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Line::Console::Transport::Preferred::Preferred()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "preferred"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Console::Transport::Preferred::~Preferred()
{
}

bool Native::Line::Console::Transport::Preferred::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set;
}

bool Native::Line::Console::Transport::Preferred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Line::Console::Transport::Preferred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::Transport::Preferred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::Transport::Preferred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::Transport::Preferred::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::Transport::Preferred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::Transport::Preferred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Line::Console::Transport::Preferred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Line::Console::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "usb-inactivity-timeout"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Console::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::Console::UsbInactivityTimeout::has_data() const
{
    if (is_presence_container) return true;
    return switch_.is_set;
}

bool Native::Line::Console::UsbInactivityTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Line::Console::UsbInactivityTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usb-inactivity-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Console::UsbInactivityTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Console::UsbInactivityTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Console::UsbInactivityTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Console::UsbInactivityTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Console::UsbInactivityTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Line::Console::UsbInactivityTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Line::Vty::Vty()
    :
    first{YType::uint16, "first"},
    last{YType::uint16, "last"},
    no_activation_character{YType::boolean, "no-activation-character"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    notify{YType::empty, "notify"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    session_limit{YType::uint32, "session-limit"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
        ,
    authorization(std::make_shared<Native::Line::Vty::Authorization>())
    , access_class(std::make_shared<Native::Line::Vty::AccessClass>())
    , autocommand(std::make_shared<Native::Line::Vty::Autocommand>())
    , autocommand_options(nullptr) // presence node
    , databits(std::make_shared<Native::Line::Vty::Databits>())
    , escape_character(std::make_shared<Native::Line::Vty::EscapeCharacter>())
    , no_exec(std::make_shared<Native::Line::Vty::NoExec>())
    , exec(std::make_shared<Native::Line::Vty::Exec>())
    , exec_timeout(std::make_shared<Native::Line::Vty::ExecTimeout>())
    , flowcontrol(std::make_shared<Native::Line::Vty::Flowcontrol>())
    , history(nullptr) // presence node
    , ip(std::make_shared<Native::Line::Vty::Ip>())
    , ipv6(std::make_shared<Native::Line::Vty::Ipv6>())
    , logging(std::make_shared<Native::Line::Vty::Logging>())
    , login(nullptr) // presence node
    , media_type(std::make_shared<Native::Line::Vty::MediaType>())
    , modem(std::make_shared<Native::Line::Vty::Modem>())
    , padding(std::make_shared<Native::Line::Vty::Padding>())
    , parity(std::make_shared<Native::Line::Vty::Parity>())
    , password(std::make_shared<Native::Line::Vty::Password>())
    , prc(std::make_shared<Native::Line::Vty::Prc>())
    , privilege(std::make_shared<Native::Line::Vty::Privilege>())
    , session_timeout(std::make_shared<Native::Line::Vty::SessionTimeout>())
    , timeout(std::make_shared<Native::Line::Vty::Timeout>())
    , telnet(std::make_shared<Native::Line::Vty::Telnet>())
    , transport(std::make_shared<Native::Line::Vty::Transport>())
    , usb_inactivity_timeout(std::make_shared<Native::Line::Vty::UsbInactivityTimeout>())
{
    authorization->parent = this;
    access_class->parent = this;
    autocommand->parent = this;
    databits->parent = this;
    escape_character->parent = this;
    no_exec->parent = this;
    exec->parent = this;
    exec_timeout->parent = this;
    flowcontrol->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    media_type->parent = this;
    modem->parent = this;
    padding->parent = this;
    parity->parent = this;
    password->parent = this;
    prc->parent = this;
    privilege->parent = this;
    session_timeout->parent = this;
    timeout->parent = this;
    telnet->parent = this;
    transport->parent = this;
    usb_inactivity_timeout->parent = this;

    yang_name = "vty"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Line::Vty::~Vty()
{
}

bool Native::Line::Vty::has_data() const
{
    if (is_presence_container) return true;
    return first.is_set
	|| last.is_set
	|| no_activation_character.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| notify.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| session_limit.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (authorization !=  nullptr && authorization->has_data())
	|| (access_class !=  nullptr && access_class->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data());
}

bool Native::Line::Vty::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(no_activation_character.yfilter)
	|| ydk::is_set(activation_character.yfilter)
	|| ydk::is_set(data_character_bits.yfilter)
	|| ydk::is_set(domain_lookup.yfilter)
	|| ydk::is_set(editing.yfilter)
	|| ydk::is_set(exec_banner.yfilter)
	|| ydk::is_set(exec_character_bits.yfilter)
	|| ydk::is_set(full_help.yfilter)
	|| ydk::is_set(international.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(monitor.yfilter)
	|| ydk::is_set(motd_banner.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(rotary.yfilter)
	|| ydk::is_set(rxspeed.yfilter)
	|| ydk::is_set(session_limit.yfilter)
	|| ydk::is_set(special_character_bits.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(start_character.yfilter)
	|| ydk::is_set(stop_character.yfilter)
	|| ydk::is_set(stopbits.yfilter)
	|| ydk::is_set(terminal_type.yfilter)
	|| ydk::is_set(txspeed.yfilter)
	|| ydk::is_set(width.yfilter)
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation());
}

std::string Native::Line::Vty::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Line::Vty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vty";
    ADD_KEY_TOKEN(first, "first");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first.is_set || is_set(first.yfilter)) leaf_name_data.push_back(first.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.yfilter)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.yfilter)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.yfilter)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.yfilter)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.yfilter)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.yfilter)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.yfilter)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.yfilter)) leaf_name_data.push_back(international.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.yfilter)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.yfilter)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.yfilter)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.yfilter)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.yfilter)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.yfilter)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.yfilter)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.yfilter)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.yfilter)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::Vty::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Vty::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::Vty::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::Vty::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::Vty::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::Vty::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::Vty::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::Vty::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::Vty::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::Vty::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::Vty::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::Vty::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::Vty::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::Vty::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::Vty::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::Vty::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::Vty::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::Vty::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::Vty::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::Vty::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::Vty::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::Vty::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::Vty::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::Vty::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::Vty::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::Vty::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::Vty::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    if(access_class != nullptr)
    {
        _children["access-class"] = access_class;
    }

    if(autocommand != nullptr)
    {
        _children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        _children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        _children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        _children["escape-character"] = escape_character;
    }

    if(no_exec != nullptr)
    {
        _children["no-exec"] = no_exec;
    }

    if(exec != nullptr)
    {
        _children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        _children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        _children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        _children["history"] = history;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(login != nullptr)
    {
        _children["login"] = login;
    }

    if(media_type != nullptr)
    {
        _children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        _children["modem"] = modem;
    }

    if(padding != nullptr)
    {
        _children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        _children["parity"] = parity;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(prc != nullptr)
    {
        _children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        _children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        _children["session-timeout"] = session_timeout;
    }

    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    if(telnet != nullptr)
    {
        _children["telnet"] = telnet;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        _children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    return _children;
}

void Native::Line::Vty::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first")
    {
        first = value;
        first.value_namespace = name_space;
        first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
        no_activation_character.value_namespace = name_space;
        no_activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
        activation_character.value_namespace = name_space;
        activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
        data_character_bits.value_namespace = name_space;
        data_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "editing")
    {
        editing = value;
        editing.value_namespace = name_space;
        editing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
        exec_banner.value_namespace = name_space;
        exec_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
        exec_character_bits.value_namespace = name_space;
        exec_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-help")
    {
        full_help = value;
        full_help.value_namespace = name_space;
        full_help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "international")
    {
        international = value;
        international.value_namespace = name_space;
        international.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
        motd_banner.value_namespace = name_space;
        motd_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotary")
    {
        rotary = value;
        rotary.value_namespace = name_space;
        rotary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
        rxspeed.value_namespace = name_space;
        rxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
        session_limit.value_namespace = name_space;
        session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
        special_character_bits.value_namespace = name_space;
        special_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-character")
    {
        start_character = value;
        start_character.value_namespace = name_space;
        start_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
        stop_character.value_namespace = name_space;
        stop_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
        stopbits.value_namespace = name_space;
        stopbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
        terminal_type.value_namespace = name_space;
        terminal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
        txspeed.value_namespace = name_space;
        txspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first")
    {
        first.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character.yfilter = yfilter;
    }
    if(value_path == "activation-character")
    {
        activation_character.yfilter = yfilter;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits.yfilter = yfilter;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
    if(value_path == "editing")
    {
        editing.yfilter = yfilter;
    }
    if(value_path == "exec-banner")
    {
        exec_banner.yfilter = yfilter;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits.yfilter = yfilter;
    }
    if(value_path == "full-help")
    {
        full_help.yfilter = yfilter;
    }
    if(value_path == "international")
    {
        international.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
    if(value_path == "motd-banner")
    {
        motd_banner.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "rotary")
    {
        rotary.yfilter = yfilter;
    }
    if(value_path == "rxspeed")
    {
        rxspeed.yfilter = yfilter;
    }
    if(value_path == "session-limit")
    {
        session_limit.yfilter = yfilter;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "start-character")
    {
        start_character.yfilter = yfilter;
    }
    if(value_path == "stop-character")
    {
        stop_character.yfilter = yfilter;
    }
    if(value_path == "stopbits")
    {
        stopbits.yfilter = yfilter;
    }
    if(value_path == "terminal-type")
    {
        terminal_type.yfilter = yfilter;
    }
    if(value_path == "txspeed")
    {
        txspeed.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool Native::Line::Vty::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "access-class" || name == "autocommand" || name == "autocommand-options" || name == "databits" || name == "escape-character" || name == "no-exec" || name == "exec" || name == "exec-timeout" || name == "flowcontrol" || name == "history" || name == "ip" || name == "ipv6" || name == "logging" || name == "login" || name == "media-type" || name == "modem" || name == "padding" || name == "parity" || name == "password" || name == "prc" || name == "privilege" || name == "session-timeout" || name == "timeout" || name == "telnet" || name == "transport" || name == "usb-inactivity-timeout" || name == "first" || name == "last" || name == "no-activation-character" || name == "activation-character" || name == "data-character-bits" || name == "domain-lookup" || name == "editing" || name == "exec-banner" || name == "exec-character-bits" || name == "full-help" || name == "international" || name == "length" || name == "line" || name == "location" || name == "monitor" || name == "motd-banner" || name == "notify" || name == "rotary" || name == "rxspeed" || name == "session-limit" || name == "special-character-bits" || name == "speed" || name == "start-character" || name == "stop-character" || name == "stopbits" || name == "terminal-type" || name == "txspeed" || name == "width")
        return true;
    return false;
}

Native::Line::Vty::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::Vty::Authorization::Command>())
    , exec(std::make_shared<Native::Line::Vty::Authorization::Exec>())
{
    command->parent = this;
    exec->parent = this;

    yang_name = "authorization"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Authorization::~Authorization()
{
}

bool Native::Line::Vty::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return (command !=  nullptr && command->has_data())
	|| (exec !=  nullptr && exec->has_data());
}

bool Native::Line::Vty::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (command !=  nullptr && command->has_operation())
	|| (exec !=  nullptr && exec->has_operation());
}

std::string Native::Line::Vty::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::Vty::Authorization::Command>();
        }
        return command;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::Vty::Authorization::Exec>();
        }
        return exec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(command != nullptr)
    {
        _children["command"] = command;
    }

    if(exec != nullptr)
    {
        _children["exec"] = exec;
    }

    return _children;
}

void Native::Line::Vty::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "exec")
        return true;
    return false;
}

Native::Line::Vty::Authorization::Command::Command()
    :
    enable_level{YType::uint8, "enable-level"},
    auth_name{YType::str, "auth-name"}
{

    yang_name = "command"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Authorization::Command::~Command()
{
}

bool Native::Line::Vty::Authorization::Command::has_data() const
{
    if (is_presence_container) return true;
    return enable_level.is_set
	|| auth_name.is_set;
}

bool Native::Line::Vty::Authorization::Command::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_level.yfilter)
	|| ydk::is_set(auth_name.yfilter);
}

std::string Native::Line::Vty::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Authorization::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_level.is_set || is_set(enable_level.yfilter)) leaf_name_data.push_back(enable_level.get_name_leafdata());
    if (auth_name.is_set || is_set(auth_name.yfilter)) leaf_name_data.push_back(auth_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Authorization::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-level")
    {
        enable_level = value;
        enable_level.value_namespace = name_space;
        enable_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-name")
    {
        auth_name = value;
        auth_name.value_namespace = name_space;
        auth_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Authorization::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-level")
    {
        enable_level.yfilter = yfilter;
    }
    if(value_path == "auth-name")
    {
        auth_name.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Authorization::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-level" || name == "auth-name")
        return true;
    return false;
}

Native::Line::Vty::Authorization::Exec::Exec()
    :
    authorization_name{YType::str, "authorization-name"},
    default_{YType::empty, "default"}
{

    yang_name = "exec"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Authorization::Exec::~Exec()
{
}

bool Native::Line::Vty::Authorization::Exec::has_data() const
{
    if (is_presence_container) return true;
    return authorization_name.is_set
	|| default_.is_set;
}

bool Native::Line::Vty::Authorization::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorization_name.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Line::Vty::Authorization::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Authorization::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorization_name.is_set || is_set(authorization_name.yfilter)) leaf_name_data.push_back(authorization_name.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Authorization::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Authorization::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Authorization::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorization-name")
    {
        authorization_name = value;
        authorization_name.value_namespace = name_space;
        authorization_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Authorization::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorization-name")
    {
        authorization_name.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Authorization::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization-name" || name == "default")
        return true;
    return false;
}

Native::Line::Vty::AccessClass::AccessClass()
    :
    acccess_list(this, {"direction"})
{

    yang_name = "access-class"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::AccessClass::~AccessClass()
{
}

bool Native::Line::Vty::AccessClass::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acccess_list.len(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Vty::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.len(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::Vty::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        auto ent_ = std::make_shared<Native::Line::Vty::AccessClass::AcccessList>();
        ent_->parent = this;
        acccess_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : acccess_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Line::Vty::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acccess-list")
        return true;
    return false;
}

Native::Line::Vty::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{

    yang_name = "acccess-list"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::Vty::AccessClass::AcccessList::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::Vty::AccessClass::AcccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(vrf_also.yfilter);
}

std::string Native::Line::Vty::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::AccessClass::AcccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.yfilter)) leaf_name_data.push_back(vrf_also.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::AccessClass::AcccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
        vrf_also.value_namespace = name_space;
        vrf_also.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::AccessClass::AcccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "vrf-also")
    {
        vrf_also.yfilter = yfilter;
    }
}

bool Native::Line::Vty::AccessClass::AcccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list" || name == "vrf-also")
        return true;
    return false;
}

Native::Line::Vty::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
        ,
    no_suppress_linenumber(nullptr) // presence node
{

    yang_name = "autocommand"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Autocommand::~Autocommand()
{
}

bool Native::Line::Vty::Autocommand::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::Vty::Autocommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::Vty::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Autocommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::Vty::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(no_suppress_linenumber != nullptr)
    {
        _children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return _children;
}

void Native::Line::Vty::Autocommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Autocommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Autocommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-suppress-linenumber" || name == "line")
        return true;
    return false;
}

Native::Line::Vty::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{

    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Vty::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::Vty::Autocommand::NoSuppressLinenumber::has_data() const
{
    if (is_presence_container) return true;
    return line.is_set;
}

bool Native::Line::Vty::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Line::Vty::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Autocommand::NoSuppressLinenumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Autocommand::NoSuppressLinenumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Autocommand::NoSuppressLinenumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line")
        return true;
    return false;
}

Native::Line::Vty::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
    , delay(nullptr) // presence node
    , nohangup(nullptr) // presence node
{

    yang_name = "autocommand-options"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Vty::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::Vty::AutocommandOptions::has_data() const
{
    if (is_presence_container) return true;
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::Vty::AutocommandOptions::has_operation() const
{
    return is_set(yfilter)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::Vty::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::AutocommandOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::Vty::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::Vty::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::Vty::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(abort_character != nullptr)
    {
        _children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        _children["nohangup"] = nohangup;
    }

    return _children;
}

void Native::Line::Vty::AutocommandOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::AutocommandOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::AutocommandOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay" || name == "nohangup")
        return true;
    return false;
}

Native::Line::Vty::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{

    yang_name = "abort-character"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Vty::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::Vty::AutocommandOptions::AbortCharacter::has_data() const
{
    if (is_presence_container) return true;
    return character.is_set;
}

bool Native::Line::Vty::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter);
}

std::string Native::Line::Vty::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::AutocommandOptions::AbortCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::AutocommandOptions::AbortCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
}

bool Native::Line::Vty::AutocommandOptions::AbortCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character")
        return true;
    return false;
}

Native::Line::Vty::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{

    yang_name = "delay"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Vty::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::Vty::AutocommandOptions::Delay::has_data() const
{
    if (is_presence_container) return true;
    return time.is_set;
}

bool Native::Line::Vty::AutocommandOptions::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Line::Vty::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::AutocommandOptions::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::AutocommandOptions::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::AutocommandOptions::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Line::Vty::AutocommandOptions::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Line::Vty::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{

    yang_name = "nohangup"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Vty::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::Vty::AutocommandOptions::Nohangup::has_data() const
{
    if (is_presence_container) return true;
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::Vty::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abort_character.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Line::Vty::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::AutocommandOptions::Nohangup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.yfilter)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::AutocommandOptions::Nohangup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
        abort_character.value_namespace = name_space;
        abort_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::AutocommandOptions::Nohangup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abort-character")
    {
        abort_character.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Line::Vty::AutocommandOptions::Nohangup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay")
        return true;
    return false;
}

Native::Line::Vty::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{

    yang_name = "databits"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Databits::~Databits()
{
}

bool Native::Line::Vty::Databits::has_data() const
{
    if (is_presence_container) return true;
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::Vty::Databits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_to_5.yfilter)
	|| ydk::is_set(set_to_6.yfilter)
	|| ydk::is_set(set_to_7.yfilter)
	|| ydk::is_set(set_to_8.yfilter);
}

std::string Native::Line::Vty::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Databits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.yfilter)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.yfilter)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.yfilter)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.yfilter)) leaf_name_data.push_back(set_to_8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Databits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
        set_to_5.value_namespace = name_space;
        set_to_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
        set_to_6.value_namespace = name_space;
        set_to_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
        set_to_7.value_namespace = name_space;
        set_to_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
        set_to_8.value_namespace = name_space;
        set_to_8.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Databits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-to-5")
    {
        set_to_5.yfilter = yfilter;
    }
    if(value_path == "set-to-6")
    {
        set_to_6.yfilter = yfilter;
    }
    if(value_path == "set-to-7")
    {
        set_to_7.yfilter = yfilter;
    }
    if(value_path == "set-to-8")
    {
        set_to_8.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Databits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-to-5" || name == "set-to-6" || name == "set-to-7" || name == "set-to-8")
        return true;
    return false;
}

Native::Line::Vty::EscapeCharacter::EscapeCharacter()
    :
    char_{YType::str, "char"},
    soft{YType::empty, "soft"}
{

    yang_name = "escape-character"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::Vty::EscapeCharacter::has_data() const
{
    if (is_presence_container) return true;
    return char_.is_set
	|| soft.is_set;
}

bool Native::Line::Vty::EscapeCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(char_.yfilter)
	|| ydk::is_set(soft.yfilter);
}

std::string Native::Line::Vty::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::EscapeCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char_.is_set || is_set(char_.yfilter)) leaf_name_data.push_back(char_.get_name_leafdata());
    if (soft.is_set || is_set(soft.yfilter)) leaf_name_data.push_back(soft.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::EscapeCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "char")
    {
        char_ = value;
        char_.value_namespace = name_space;
        char_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft")
    {
        soft = value;
        soft.value_namespace = name_space;
        soft.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::EscapeCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "char")
    {
        char_.yfilter = yfilter;
    }
    if(value_path == "soft")
    {
        soft.yfilter = yfilter;
    }
}

bool Native::Line::Vty::EscapeCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "char" || name == "soft")
        return true;
    return false;
}

Native::Line::Vty::NoExec::NoExec()
    :
    exec{YType::boolean, "exec"}
{

    yang_name = "no-exec"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::NoExec::~NoExec()
{
}

bool Native::Line::Vty::NoExec::has_data() const
{
    if (is_presence_container) return true;
    return exec.is_set;
}

bool Native::Line::Vty::NoExec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exec.yfilter);
}

std::string Native::Line::Vty::NoExec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::NoExec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exec.is_set || is_set(exec.yfilter)) leaf_name_data.push_back(exec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::NoExec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::NoExec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::NoExec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exec")
    {
        exec = value;
        exec.value_namespace = name_space;
        exec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::NoExec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exec")
    {
        exec.yfilter = yfilter;
    }
}

bool Native::Line::Vty::NoExec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Line::Vty::Exec::Exec()
    :
    prompt(std::make_shared<Native::Line::Vty::Exec::Prompt>())
{
    prompt->parent = this;

    yang_name = "exec"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Exec::~Exec()
{
}

bool Native::Line::Vty::Exec::has_data() const
{
    if (is_presence_container) return true;
    return (prompt !=  nullptr && prompt->has_data());
}

bool Native::Line::Vty::Exec::has_operation() const
{
    return is_set(yfilter)
	|| (prompt !=  nullptr && prompt->has_operation());
}

std::string Native::Line::Vty::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Line::Vty::Exec::Prompt>();
        }
        return prompt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prompt != nullptr)
    {
        _children["prompt"] = prompt;
    }

    return _children;
}

void Native::Line::Vty::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prompt")
        return true;
    return false;
}

Native::Line::Vty::Exec::Prompt::Prompt()
    :
    timestamp{YType::empty, "timestamp"}
{

    yang_name = "prompt"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Exec::Prompt::~Prompt()
{
}

bool Native::Line::Vty::Exec::Prompt::has_data() const
{
    if (is_presence_container) return true;
    return timestamp.is_set;
}

bool Native::Line::Vty::Exec::Prompt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string Native::Line::Vty::Exec::Prompt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Exec::Prompt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Exec::Prompt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Exec::Prompt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Exec::Prompt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Exec::Prompt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Exec::Prompt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Native::Line::Vty::ExecTimeout::ExecTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "exec-timeout"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::ExecTimeout::~ExecTimeout()
{
}

bool Native::Line::Vty::ExecTimeout::has_data() const
{
    if (is_presence_container) return true;
    return minutes.is_set
	|| seconds.is_set;
}

bool Native::Line::Vty::ExecTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Line::Vty::ExecTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::ExecTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::ExecTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::ExecTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::ExecTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::ExecTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Line::Vty::ExecTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minutes" || name == "seconds")
        return true;
    return false;
}

Native::Line::Vty::Flowcontrol::Flowcontrol()
    :
    none{YType::empty, "NONE"},
    hardware{YType::empty, "hardware"},
    software{YType::empty, "software"}
{

    yang_name = "flowcontrol"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Flowcontrol::~Flowcontrol()
{
}

bool Native::Line::Vty::Flowcontrol::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| hardware.is_set
	|| software.is_set;
}

bool Native::Line::Vty::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(hardware.yfilter)
	|| ydk::is_set(software.yfilter);
}

std::string Native::Line::Vty::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (hardware.is_set || is_set(hardware.yfilter)) leaf_name_data.push_back(hardware.get_name_leafdata());
    if (software.is_set || is_set(software.yfilter)) leaf_name_data.push_back(software.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "NONE")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware")
    {
        hardware = value;
        hardware.value_namespace = name_space;
        hardware.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software")
    {
        software = value;
        software.value_namespace = name_space;
        software.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "NONE")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "hardware")
    {
        hardware.yfilter = yfilter;
    }
    if(value_path == "software")
    {
        software.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NONE" || name == "hardware" || name == "software")
        return true;
    return false;
}

Native::Line::Vty::History::History()
    :
    size{YType::uint16, "size"}
{

    yang_name = "history"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Vty::History::~History()
{
}

bool Native::Line::Vty::History::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Line::Vty::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Line::Vty::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Line::Vty::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Line::Vty::Ip::Ip()
    :
    tcp{YType::empty, "tcp"}
        ,
    netmask_format(nullptr) // presence node
{

    yang_name = "ip"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Ip::~Ip()
{
}

bool Native::Line::Vty::Ip::has_data() const
{
    if (is_presence_container) return true;
    return tcp.is_set
	|| (netmask_format !=  nullptr && netmask_format->has_data());
}

bool Native::Line::Vty::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcp.yfilter)
	|| (netmask_format !=  nullptr && netmask_format->has_operation());
}

std::string Native::Line::Vty::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp.is_set || is_set(tcp.yfilter)) leaf_name_data.push_back(tcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netmask-format")
    {
        if(netmask_format == nullptr)
        {
            netmask_format = std::make_shared<Native::Line::Vty::Ip::NetmaskFormat>();
        }
        return netmask_format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(netmask_format != nullptr)
    {
        _children["netmask-format"] = netmask_format;
    }

    return _children;
}

void Native::Line::Vty::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcp")
    {
        tcp = value;
        tcp.value_namespace = name_space;
        tcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcp")
    {
        tcp.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netmask-format" || name == "tcp")
        return true;
    return false;
}

Native::Line::Vty::Ip::NetmaskFormat::NetmaskFormat()
    :
    format{YType::enumeration, "format"}
{

    yang_name = "netmask-format"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Vty::Ip::NetmaskFormat::~NetmaskFormat()
{
}

bool Native::Line::Vty::Ip::NetmaskFormat::has_data() const
{
    if (is_presence_container) return true;
    return format.is_set;
}

bool Native::Line::Vty::Ip::NetmaskFormat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string Native::Line::Vty::Ip::NetmaskFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netmask-format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Ip::NetmaskFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Ip::NetmaskFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Ip::NetmaskFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Ip::NetmaskFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Ip::NetmaskFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Ip::NetmaskFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

Native::Line::Vty::Ipv6::Ipv6()
    :
    access_class(std::make_shared<Native::Line::Vty::Ipv6::AccessClass>())
{
    access_class->parent = this;

    yang_name = "ipv6"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Ipv6::~Ipv6()
{
}

bool Native::Line::Vty::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (access_class !=  nullptr && access_class->has_data());
}

bool Native::Line::Vty::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (access_class !=  nullptr && access_class->has_operation());
}

std::string Native::Line::Vty::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::Vty::Ipv6::AccessClass>();
        }
        return access_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_class != nullptr)
    {
        _children["access-class"] = access_class;
    }

    return _children;
}

void Native::Line::Vty::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::Vty::Ipv6::AccessClass::AccessClass()
    :
    access_class(this, {"access_class_name"})
{

    yang_name = "access-class"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Ipv6::AccessClass::~AccessClass()
{
}

bool Native::Line::Vty::Ipv6::AccessClass::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_class.len(); index++)
    {
        if(access_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::Vty::Ipv6::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<access_class.len(); index++)
    {
        if(access_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::Vty::Ipv6::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Ipv6::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Ipv6::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-class")
    {
        auto ent_ = std::make_shared<Native::Line::Vty::Ipv6::AccessClass::AccessClass_>();
        ent_->parent = this;
        access_class.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Ipv6::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Line::Vty::Ipv6::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Ipv6::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Ipv6::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class")
        return true;
    return false;
}

Native::Line::Vty::Ipv6::AccessClass::AccessClass_::AccessClass_()
    :
    access_class_name{YType::str, "access-class-name"},
    enumeration_in_out{YType::enumeration, "enumeration-in-out"}
{

    yang_name = "access-class"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Ipv6::AccessClass::AccessClass_::~AccessClass_()
{
}

bool Native::Line::Vty::Ipv6::AccessClass::AccessClass_::has_data() const
{
    if (is_presence_container) return true;
    return access_class_name.is_set
	|| enumeration_in_out.is_set;
}

bool Native::Line::Vty::Ipv6::AccessClass::AccessClass_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_class_name.yfilter)
	|| ydk::is_set(enumeration_in_out.yfilter);
}

std::string Native::Line::Vty::Ipv6::AccessClass::AccessClass_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    ADD_KEY_TOKEN(access_class_name, "access-class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Ipv6::AccessClass::AccessClass_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class_name.is_set || is_set(access_class_name.yfilter)) leaf_name_data.push_back(access_class_name.get_name_leafdata());
    if (enumeration_in_out.is_set || is_set(enumeration_in_out.yfilter)) leaf_name_data.push_back(enumeration_in_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Ipv6::AccessClass::AccessClass_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Ipv6::AccessClass::AccessClass_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Ipv6::AccessClass::AccessClass_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-class-name")
    {
        access_class_name = value;
        access_class_name.value_namespace = name_space;
        access_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out = value;
        enumeration_in_out.value_namespace = name_space;
        enumeration_in_out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Ipv6::AccessClass::AccessClass_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-class-name")
    {
        access_class_name.yfilter = yfilter;
    }
    if(value_path == "enumeration-in-out")
    {
        enumeration_in_out.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Ipv6::AccessClass::AccessClass_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-class-name" || name == "enumeration-in-out")
        return true;
    return false;
}

Native::Line::Vty::Logging::Logging()
    :
    synchronous(nullptr) // presence node
{

    yang_name = "logging"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Logging::~Logging()
{
}

bool Native::Line::Vty::Logging::has_data() const
{
    if (is_presence_container) return true;
    return (synchronous !=  nullptr && synchronous->has_data());
}

bool Native::Line::Vty::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (synchronous !=  nullptr && synchronous->has_operation());
}

std::string Native::Line::Vty::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Line::Vty::Logging::Synchronous>();
        }
        return synchronous;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(synchronous != nullptr)
    {
        _children["synchronous"] = synchronous;
    }

    return _children;
}

void Native::Line::Vty::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronous")
        return true;
    return false;
}

Native::Line::Vty::Logging::Synchronous::Synchronous()
{

    yang_name = "synchronous"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Vty::Logging::Synchronous::~Synchronous()
{
}

bool Native::Line::Vty::Logging::Synchronous::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Line::Vty::Logging::Synchronous::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Line::Vty::Logging::Synchronous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Logging::Synchronous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Logging::Synchronous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Logging::Synchronous::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Logging::Synchronous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Logging::Synchronous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Logging::Synchronous::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Line::Vty::Login::Login()
    :
    local{YType::empty, "local"},
    authentication{YType::str, "authentication"}
{

    yang_name = "login"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Vty::Login::~Login()
{
}

bool Native::Line::Vty::Login::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| authentication.is_set;
}

bool Native::Line::Vty::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(authentication.yfilter);
}

std::string Native::Line::Vty::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "authentication")
        return true;
    return false;
}

Native::Line::Vty::MediaType::MediaType()
    :
    rj45{YType::empty, "rj45"}
{

    yang_name = "media-type"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::MediaType::~MediaType()
{
}

bool Native::Line::Vty::MediaType::has_data() const
{
    if (is_presence_container) return true;
    return rj45.is_set;
}

bool Native::Line::Vty::MediaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rj45.yfilter);
}

std::string Native::Line::Vty::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::MediaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rj45.is_set || is_set(rj45.yfilter)) leaf_name_data.push_back(rj45.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::MediaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rj45")
    {
        rj45 = value;
        rj45.value_namespace = name_space;
        rj45.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::MediaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rj45")
    {
        rj45.yfilter = yfilter;
    }
}

bool Native::Line::Vty::MediaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rj45")
        return true;
    return false;
}

Native::Line::Vty::Modem::Modem()
    :
    cts_alarm{YType::empty, "CTS-Alarm"},
    dtr_active{YType::empty, "DTR-active"},
    dialin{YType::empty, "Dialin"},
    host{YType::empty, "Host"},
    inout{YType::empty, "InOut"},
    printer{YType::empty, "Printer"},
    answer_timeout{YType::empty, "answer-timeout"},
    dtr_delay{YType::empty, "dtr-delay"}
{

    yang_name = "modem"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Modem::~Modem()
{
}

bool Native::Line::Vty::Modem::has_data() const
{
    if (is_presence_container) return true;
    return cts_alarm.is_set
	|| dtr_active.is_set
	|| dialin.is_set
	|| host.is_set
	|| inout.is_set
	|| printer.is_set
	|| answer_timeout.is_set
	|| dtr_delay.is_set;
}

bool Native::Line::Vty::Modem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cts_alarm.yfilter)
	|| ydk::is_set(dtr_active.yfilter)
	|| ydk::is_set(dialin.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(printer.yfilter)
	|| ydk::is_set(answer_timeout.yfilter)
	|| ydk::is_set(dtr_delay.yfilter);
}

std::string Native::Line::Vty::Modem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Modem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cts_alarm.is_set || is_set(cts_alarm.yfilter)) leaf_name_data.push_back(cts_alarm.get_name_leafdata());
    if (dtr_active.is_set || is_set(dtr_active.yfilter)) leaf_name_data.push_back(dtr_active.get_name_leafdata());
    if (dialin.is_set || is_set(dialin.yfilter)) leaf_name_data.push_back(dialin.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (printer.is_set || is_set(printer.yfilter)) leaf_name_data.push_back(printer.get_name_leafdata());
    if (answer_timeout.is_set || is_set(answer_timeout.yfilter)) leaf_name_data.push_back(answer_timeout.get_name_leafdata());
    if (dtr_delay.is_set || is_set(dtr_delay.yfilter)) leaf_name_data.push_back(dtr_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Modem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Modem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Modem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "CTS-Alarm")
    {
        cts_alarm = value;
        cts_alarm.value_namespace = name_space;
        cts_alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "DTR-active")
    {
        dtr_active = value;
        dtr_active.value_namespace = name_space;
        dtr_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Dialin")
    {
        dialin = value;
        dialin.value_namespace = name_space;
        dialin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "InOut")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Printer")
    {
        printer = value;
        printer.value_namespace = name_space;
        printer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "answer-timeout")
    {
        answer_timeout = value;
        answer_timeout.value_namespace = name_space;
        answer_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay = value;
        dtr_delay.value_namespace = name_space;
        dtr_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Modem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "CTS-Alarm")
    {
        cts_alarm.yfilter = yfilter;
    }
    if(value_path == "DTR-active")
    {
        dtr_active.yfilter = yfilter;
    }
    if(value_path == "Dialin")
    {
        dialin.yfilter = yfilter;
    }
    if(value_path == "Host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "InOut")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "Printer")
    {
        printer.yfilter = yfilter;
    }
    if(value_path == "answer-timeout")
    {
        answer_timeout.yfilter = yfilter;
    }
    if(value_path == "dtr-delay")
    {
        dtr_delay.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Modem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CTS-Alarm" || name == "DTR-active" || name == "Dialin" || name == "Host" || name == "InOut" || name == "Printer" || name == "answer-timeout" || name == "dtr-delay")
        return true;
    return false;
}

Native::Line::Vty::Padding::Padding()
    :
    character{YType::str, "character"},
    null{YType::uint8, "null"}
{

    yang_name = "padding"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Padding::~Padding()
{
}

bool Native::Line::Vty::Padding::has_data() const
{
    if (is_presence_container) return true;
    return character.is_set
	|| null.is_set;
}

bool Native::Line::Vty::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Line::Vty::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());
    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character" || name == "null")
        return true;
    return false;
}

Native::Line::Vty::Parity::Parity()
    :
    even{YType::empty, "even"},
    mark{YType::empty, "mark"},
    none{YType::empty, "none"},
    odd{YType::empty, "odd"},
    space{YType::empty, "space"}
{

    yang_name = "parity"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Parity::~Parity()
{
}

bool Native::Line::Vty::Parity::has_data() const
{
    if (is_presence_container) return true;
    return even.is_set
	|| mark.is_set
	|| none.is_set
	|| odd.is_set
	|| space.is_set;
}

bool Native::Line::Vty::Parity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(even.yfilter)
	|| ydk::is_set(mark.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(odd.yfilter)
	|| ydk::is_set(space.yfilter);
}

std::string Native::Line::Vty::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (even.is_set || is_set(even.yfilter)) leaf_name_data.push_back(even.get_name_leafdata());
    if (mark.is_set || is_set(mark.yfilter)) leaf_name_data.push_back(mark.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (odd.is_set || is_set(odd.yfilter)) leaf_name_data.push_back(odd.get_name_leafdata());
    if (space.is_set || is_set(space.yfilter)) leaf_name_data.push_back(space.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "even")
    {
        even = value;
        even.value_namespace = name_space;
        even.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mark")
    {
        mark = value;
        mark.value_namespace = name_space;
        mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "odd")
    {
        odd = value;
        odd.value_namespace = name_space;
        odd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "space")
    {
        space = value;
        space.value_namespace = name_space;
        space.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "even")
    {
        even.yfilter = yfilter;
    }
    if(value_path == "mark")
    {
        mark.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "odd")
    {
        odd.yfilter = yfilter;
    }
    if(value_path == "space")
    {
        space.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "even" || name == "mark" || name == "none" || name == "odd" || name == "space")
        return true;
    return false;
}

Native::Line::Vty::Password::Password()
    :
    level{YType::uint8, "level"},
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "password"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Password::~Password()
{
}

bool Native::Line::Vty::Password::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| type.is_set
	|| secret.is_set;
}

bool Native::Line::Vty::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Line::Vty::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type" || name == "secret")
        return true;
    return false;
}

Native::Line::Vty::Prc::Prc()
    :
    expose{YType::empty, "expose"},
    hide{YType::empty, "hide"}
{

    yang_name = "prc"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Prc::~Prc()
{
}

bool Native::Line::Vty::Prc::has_data() const
{
    if (is_presence_container) return true;
    return expose.is_set
	|| hide.is_set;
}

bool Native::Line::Vty::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expose.yfilter)
	|| ydk::is_set(hide.yfilter);
}

std::string Native::Line::Vty::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expose.is_set || is_set(expose.yfilter)) leaf_name_data.push_back(expose.get_name_leafdata());
    if (hide.is_set || is_set(hide.yfilter)) leaf_name_data.push_back(hide.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expose")
    {
        expose = value;
        expose.value_namespace = name_space;
        expose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hide")
    {
        hide = value;
        hide.value_namespace = name_space;
        hide.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expose")
    {
        expose.yfilter = yfilter;
    }
    if(value_path == "hide")
    {
        hide.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expose" || name == "hide")
        return true;
    return false;
}

Native::Line::Vty::Privilege::Privilege()
    :
    level(nullptr) // presence node
{

    yang_name = "privilege"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Privilege::~Privilege()
{
}

bool Native::Line::Vty::Privilege::has_data() const
{
    if (is_presence_container) return true;
    return (level !=  nullptr && level->has_data());
}

bool Native::Line::Vty::Privilege::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Line::Vty::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Line::Vty::Privilege::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level != nullptr)
    {
        _children["level"] = level;
    }

    return _children;
}

void Native::Line::Vty::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Line::Vty::Privilege::Level::Level()
    :
    number{YType::uint8, "number"}
{

    yang_name = "level"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Vty::Privilege::Level::~Level()
{
}

bool Native::Line::Vty::Privilege::Level::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set;
}

bool Native::Line::Vty::Privilege::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Line::Vty::Privilege::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Privilege::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Privilege::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Privilege::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Privilege::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Privilege::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Privilege::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number")
        return true;
    return false;
}

Native::Line::Vty::SessionTimeout::SessionTimeout()
    :
    session_timeout_value{YType::uint16, "session-timeout-value"},
    output{YType::empty, "output"}
{

    yang_name = "session-timeout"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::SessionTimeout::~SessionTimeout()
{
}

bool Native::Line::Vty::SessionTimeout::has_data() const
{
    if (is_presence_container) return true;
    return session_timeout_value.is_set
	|| output.is_set;
}

bool Native::Line::Vty::SessionTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_timeout_value.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Line::Vty::SessionTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::SessionTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_timeout_value.is_set || is_set(session_timeout_value.yfilter)) leaf_name_data.push_back(session_timeout_value.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::SessionTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::SessionTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::SessionTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-timeout-value")
    {
        session_timeout_value = value;
        session_timeout_value.value_namespace = name_space;
        session_timeout_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::SessionTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-timeout-value")
    {
        session_timeout_value.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::Vty::SessionTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-timeout-value" || name == "output")
        return true;
    return false;
}

Native::Line::Vty::Timeout::Timeout()
    :
    login{YType::empty, "login"}
{

    yang_name = "timeout"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Timeout::~Timeout()
{
}

bool Native::Line::Vty::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return login.is_set;
}

bool Native::Line::Vty::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Native::Line::Vty::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Native::Line::Vty::Telnet::Telnet()
    :
    transparent{YType::empty, "transparent"}
{

    yang_name = "telnet"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Telnet::~Telnet()
{
}

bool Native::Line::Vty::Telnet::has_data() const
{
    if (is_presence_container) return true;
    return transparent.is_set;
}

bool Native::Line::Vty::Telnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Line::Vty::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Telnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Telnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Telnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Telnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transparent")
        return true;
    return false;
}

Native::Line::Vty::Transport::Transport()
    :
    input(std::make_shared<Native::Line::Vty::Transport::Input>())
    , output(std::make_shared<Native::Line::Vty::Transport::Output>())
    , preferred(nullptr) // presence node
{
    input->parent = this;
    output->parent = this;

    yang_name = "transport"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Transport::~Transport()
{
}

bool Native::Line::Vty::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data())
	|| (preferred !=  nullptr && preferred->has_data());
}

bool Native::Line::Vty::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation())
	|| (preferred !=  nullptr && preferred->has_operation());
}

std::string Native::Line::Vty::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Line::Vty::Transport::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Line::Vty::Transport::Output>();
        }
        return output;
    }

    if(child_yang_name == "preferred")
    {
        if(preferred == nullptr)
        {
            preferred = std::make_shared<Native::Line::Vty::Transport::Preferred>();
        }
        return preferred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    if(preferred != nullptr)
    {
        _children["preferred"] = preferred;
    }

    return _children;
}

void Native::Line::Vty::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::Vty::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::Vty::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output" || name == "preferred")
        return true;
    return false;
}

Native::Line::Vty::Transport::Input::Input()
    :
    input{YType::enumeration, "input"}
{

    yang_name = "input"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Transport::Input::~Input()
{
}

bool Native::Line::Vty::Transport::Input::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : input.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Vty::Transport::Input::has_operation() const
{
    for (auto const & leaf : input.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter);
}

std::string Native::Line::Vty::Transport::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Transport::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto input_name_datas = input.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_name_datas.begin(), input_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Transport::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Transport::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Transport::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input.append(value);
    }
}

void Native::Line::Vty::Transport::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Transport::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

Native::Line::Vty::Transport::Output::Output()
    :
    output{YType::enumeration, "output"}
{

    yang_name = "output"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::Transport::Output::~Output()
{
}

bool Native::Line::Vty::Transport::Output::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Line::Vty::Transport::Output::has_operation() const
{
    for (auto const & leaf : output.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Line::Vty::Transport::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Transport::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto output_name_datas = output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), output_name_datas.begin(), output_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Transport::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Transport::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Transport::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output.append(value);
    }
}

void Native::Line::Vty::Transport::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Transport::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Line::Vty::Transport::Preferred::Preferred()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "preferred"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Line::Vty::Transport::Preferred::~Preferred()
{
}

bool Native::Line::Vty::Transport::Preferred::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set;
}

bool Native::Line::Vty::Transport::Preferred::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Line::Vty::Transport::Preferred::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::Transport::Preferred::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::Transport::Preferred::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::Transport::Preferred::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::Transport::Preferred::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::Transport::Preferred::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Line::Vty::Transport::Preferred::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Line::Vty::UsbInactivityTimeout::UsbInactivityTimeout()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "usb-inactivity-timeout"; yang_parent_name = "vty"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Line::Vty::UsbInactivityTimeout::~UsbInactivityTimeout()
{
}

bool Native::Line::Vty::UsbInactivityTimeout::has_data() const
{
    if (is_presence_container) return true;
    return switch_.is_set;
}

bool Native::Line::Vty::UsbInactivityTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Line::Vty::UsbInactivityTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usb-inactivity-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::Vty::UsbInactivityTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Line::Vty::UsbInactivityTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Line::Vty::UsbInactivityTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Line::Vty::UsbInactivityTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::Vty::UsbInactivityTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Line::Vty::UsbInactivityTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Ntp::Ntp()
    :
    authenticate{YType::empty, "Cisco-IOS-XE-ntp:authenticate"},
    broadcastdelay{YType::uint32, "Cisco-IOS-XE-ntp:broadcastdelay"},
    clock_period{YType::uint32, "Cisco-IOS-XE-ntp:clock-period"},
    logging{YType::empty, "Cisco-IOS-XE-ntp:logging"},
    max_associations{YType::uint32, "Cisco-IOS-XE-ntp:max-associations"},
    maxdistance{YType::uint8, "Cisco-IOS-XE-ntp:maxdistance"},
    mindistance{YType::uint16, "Cisco-IOS-XE-ntp:mindistance"},
    orphan{YType::uint8, "Cisco-IOS-XE-ntp:orphan"},
    passive{YType::empty, "Cisco-IOS-XE-ntp:passive"},
    update_calendar{YType::empty, "Cisco-IOS-XE-ntp:update-calendar"}
        ,
    access_group(std::make_shared<Native::Ntp::AccessGroup>())
    , allow(std::make_shared<Native::Ntp::Allow>())
    , authentication_key(this, {"number"})
    , master(nullptr) // presence node
    , panic(std::make_shared<Native::Ntp::Panic>())
    , peer(std::make_shared<Native::Ntp::Peer>())
    , server(std::make_shared<Native::Ntp::Server>())
    , source(std::make_shared<Native::Ntp::Source>())
    , trusted_key(this, {"number"})
{
    access_group->parent = this;
    allow->parent = this;
    panic->parent = this;
    peer->parent = this;
    server->parent = this;
    source->parent = this;

    yang_name = "ntp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::~Ntp()
{
}

bool Native::Ntp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<authentication_key.len(); index++)
    {
        if(authentication_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trusted_key.len(); index++)
    {
        if(trusted_key[index]->has_data())
            return true;
    }
    return authenticate.is_set
	|| broadcastdelay.is_set
	|| clock_period.is_set
	|| logging.is_set
	|| max_associations.is_set
	|| maxdistance.is_set
	|| mindistance.is_set
	|| orphan.is_set
	|| passive.is_set
	|| update_calendar.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (allow !=  nullptr && allow->has_data())
	|| (master !=  nullptr && master->has_data())
	|| (panic !=  nullptr && panic->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Ntp::has_operation() const
{
    for (std::size_t index=0; index<authentication_key.len(); index++)
    {
        if(authentication_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trusted_key.len(); index++)
    {
        if(trusted_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| ydk::is_set(broadcastdelay.yfilter)
	|| ydk::is_set(clock_period.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(max_associations.yfilter)
	|| ydk::is_set(maxdistance.yfilter)
	|| ydk::is_set(mindistance.yfilter)
	|| ydk::is_set(orphan.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(update_calendar.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (allow !=  nullptr && allow->has_operation())
	|| (master !=  nullptr && master->has_operation())
	|| (panic !=  nullptr && panic->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ntp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (broadcastdelay.is_set || is_set(broadcastdelay.yfilter)) leaf_name_data.push_back(broadcastdelay.get_name_leafdata());
    if (clock_period.is_set || is_set(clock_period.yfilter)) leaf_name_data.push_back(clock_period.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (max_associations.is_set || is_set(max_associations.yfilter)) leaf_name_data.push_back(max_associations.get_name_leafdata());
    if (maxdistance.is_set || is_set(maxdistance.yfilter)) leaf_name_data.push_back(maxdistance.get_name_leafdata());
    if (mindistance.is_set || is_set(mindistance.yfilter)) leaf_name_data.push_back(mindistance.get_name_leafdata());
    if (orphan.is_set || is_set(orphan.yfilter)) leaf_name_data.push_back(orphan.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (update_calendar.is_set || is_set(update_calendar.yfilter)) leaf_name_data.push_back(update_calendar.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-ntp:access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Ntp::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "Cisco-IOS-XE-ntp:allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Ntp::Allow>();
        }
        return allow;
    }

    if(child_yang_name == "Cisco-IOS-XE-ntp:authentication-key")
    {
        auto ent_ = std::make_shared<Native::Ntp::AuthenticationKey>();
        ent_->parent = this;
        authentication_key.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-ntp:master")
    {
        if(master == nullptr)
        {
            master = std::make_shared<Native::Ntp::Master>();
        }
        return master;
    }

    if(child_yang_name == "Cisco-IOS-XE-ntp:panic")
    {
        if(panic == nullptr)
        {
            panic = std::make_shared<Native::Ntp::Panic>();
        }
        return panic;
    }

    if(child_yang_name == "Cisco-IOS-XE-ntp:peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ntp::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "Cisco-IOS-XE-ntp:server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ntp::Server>();
        }
        return server;
    }

    if(child_yang_name == "Cisco-IOS-XE-ntp:source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ntp::Source>();
        }
        return source;
    }

    if(child_yang_name == "Cisco-IOS-XE-ntp:trusted-key")
    {
        auto ent_ = std::make_shared<Native::Ntp::TrustedKey>();
        ent_->parent = this;
        trusted_key.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_group != nullptr)
    {
        _children["Cisco-IOS-XE-ntp:access-group"] = access_group;
    }

    if(allow != nullptr)
    {
        _children["Cisco-IOS-XE-ntp:allow"] = allow;
    }

    count_ = 0;
    for (auto ent_ : authentication_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(master != nullptr)
    {
        _children["Cisco-IOS-XE-ntp:master"] = master;
    }

    if(panic != nullptr)
    {
        _children["Cisco-IOS-XE-ntp:panic"] = panic;
    }

    if(peer != nullptr)
    {
        _children["Cisco-IOS-XE-ntp:peer"] = peer;
    }

    if(server != nullptr)
    {
        _children["Cisco-IOS-XE-ntp:server"] = server;
    }

    if(source != nullptr)
    {
        _children["Cisco-IOS-XE-ntp:source"] = source;
    }

    count_ = 0;
    for (auto ent_ : trusted_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-ntp:authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ntp:broadcastdelay")
    {
        broadcastdelay = value;
        broadcastdelay.value_namespace = name_space;
        broadcastdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ntp:clock-period")
    {
        clock_period = value;
        clock_period.value_namespace = name_space;
        clock_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ntp:logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ntp:max-associations")
    {
        max_associations = value;
        max_associations.value_namespace = name_space;
        max_associations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ntp:maxdistance")
    {
        maxdistance = value;
        maxdistance.value_namespace = name_space;
        maxdistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ntp:mindistance")
    {
        mindistance = value;
        mindistance.value_namespace = name_space;
        mindistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ntp:orphan")
    {
        orphan = value;
        orphan.value_namespace = name_space;
        orphan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ntp:passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ntp:update-calendar")
    {
        update_calendar = value;
        update_calendar.value_namespace = name_space;
        update_calendar.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
    if(value_path == "broadcastdelay")
    {
        broadcastdelay.yfilter = yfilter;
    }
    if(value_path == "clock-period")
    {
        clock_period.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "max-associations")
    {
        max_associations.yfilter = yfilter;
    }
    if(value_path == "maxdistance")
    {
        maxdistance.yfilter = yfilter;
    }
    if(value_path == "mindistance")
    {
        mindistance.yfilter = yfilter;
    }
    if(value_path == "orphan")
    {
        orphan.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "update-calendar")
    {
        update_calendar.yfilter = yfilter;
    }
}

bool Native::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "allow" || name == "authentication-key" || name == "master" || name == "panic" || name == "peer" || name == "server" || name == "source" || name == "trusted-key" || name == "authenticate" || name == "broadcastdelay" || name == "clock-period" || name == "logging" || name == "max-associations" || name == "maxdistance" || name == "mindistance" || name == "orphan" || name == "passive" || name == "update-calendar")
        return true;
    return false;
}

Native::Ntp::AccessGroup::AccessGroup()
    :
    ipv4(std::make_shared<Native::Ntp::AccessGroup::Ipv4>())
    , ipv6(std::make_shared<Native::Ntp::AccessGroup::Ipv6>())
    , peer(std::make_shared<Native::Ntp::AccessGroup::Peer>())
    , query_only(std::make_shared<Native::Ntp::AccessGroup::QueryOnly>())
    , serve(std::make_shared<Native::Ntp::AccessGroup::Serve>())
    , serve_only(std::make_shared<Native::Ntp::AccessGroup::ServeOnly>())
{
    ipv4->parent = this;
    ipv6->parent = this;
    peer->parent = this;
    query_only->parent = this;
    serve->parent = this;
    serve_only->parent = this;

    yang_name = "access-group"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::~AccessGroup()
{
}

bool Native::Ntp::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (query_only !=  nullptr && query_only->has_data())
	|| (serve !=  nullptr && serve->has_data())
	|| (serve_only !=  nullptr && serve_only->has_data());
}

bool Native::Ntp::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (query_only !=  nullptr && query_only->has_operation())
	|| (serve !=  nullptr && serve->has_operation())
	|| (serve_only !=  nullptr && serve_only->has_operation());
}

std::string Native::Ntp::AccessGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Ntp::AccessGroup::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ntp::AccessGroup::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ntp::AccessGroup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "query-only")
    {
        if(query_only == nullptr)
        {
            query_only = std::make_shared<Native::Ntp::AccessGroup::QueryOnly>();
        }
        return query_only;
    }

    if(child_yang_name == "serve")
    {
        if(serve == nullptr)
        {
            serve = std::make_shared<Native::Ntp::AccessGroup::Serve>();
        }
        return serve;
    }

    if(child_yang_name == "serve-only")
    {
        if(serve_only == nullptr)
        {
            serve_only = std::make_shared<Native::Ntp::AccessGroup::ServeOnly>();
        }
        return serve_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(query_only != nullptr)
    {
        _children["query-only"] = query_only;
    }

    if(serve != nullptr)
    {
        _children["serve"] = serve;
    }

    if(serve_only != nullptr)
    {
        _children["serve-only"] = serve_only;
    }

    return _children;
}

void Native::Ntp::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "peer" || name == "query-only" || name == "serve" || name == "serve-only")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv4::Ipv4()
    :
    peer(std::make_shared<Native::Ntp::AccessGroup::Ipv4::Peer>())
    , query_only(std::make_shared<Native::Ntp::AccessGroup::Ipv4::QueryOnly>())
    , serve(std::make_shared<Native::Ntp::AccessGroup::Ipv4::Serve>())
    , serve_only(std::make_shared<Native::Ntp::AccessGroup::Ipv4::ServeOnly>())
{
    peer->parent = this;
    query_only->parent = this;
    serve->parent = this;
    serve_only->parent = this;

    yang_name = "ipv4"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::Ipv4::~Ipv4()
{
}

bool Native::Ntp::AccessGroup::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data())
	|| (query_only !=  nullptr && query_only->has_data())
	|| (serve !=  nullptr && serve->has_data())
	|| (serve_only !=  nullptr && serve_only->has_data());
}

bool Native::Ntp::AccessGroup::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (query_only !=  nullptr && query_only->has_operation())
	|| (serve !=  nullptr && serve->has_operation())
	|| (serve_only !=  nullptr && serve_only->has_operation());
}

std::string Native::Ntp::AccessGroup::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ntp::AccessGroup::Ipv4::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "query-only")
    {
        if(query_only == nullptr)
        {
            query_only = std::make_shared<Native::Ntp::AccessGroup::Ipv4::QueryOnly>();
        }
        return query_only;
    }

    if(child_yang_name == "serve")
    {
        if(serve == nullptr)
        {
            serve = std::make_shared<Native::Ntp::AccessGroup::Ipv4::Serve>();
        }
        return serve;
    }

    if(child_yang_name == "serve-only")
    {
        if(serve_only == nullptr)
        {
            serve_only = std::make_shared<Native::Ntp::AccessGroup::Ipv4::ServeOnly>();
        }
        return serve_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(query_only != nullptr)
    {
        _children["query-only"] = query_only;
    }

    if(serve != nullptr)
    {
        _children["serve"] = serve;
    }

    if(serve_only != nullptr)
    {
        _children["serve-only"] = serve_only;
    }

    return _children;
}

void Native::Ntp::AccessGroup::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::AccessGroup::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::AccessGroup::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "query-only" || name == "serve" || name == "serve-only")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv4::Peer::Peer()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "peer"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::Ipv4::Peer::~Peer()
{
}

bool Native::Ntp::AccessGroup::Ipv4::Peer::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv4::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv4::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv4::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv4::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::Ipv4::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::Ipv4::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AccessGroup::Ipv4::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv4::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv4::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv4::QueryOnly::QueryOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "query-only"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::Ipv4::QueryOnly::~QueryOnly()
{
}

bool Native::Ntp::AccessGroup::Ipv4::QueryOnly::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv4::QueryOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::Ipv4::QueryOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AccessGroup::Ipv4::QueryOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv4::QueryOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv4::QueryOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv4::Serve::Serve()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "serve"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::Ipv4::Serve::~Serve()
{
}

bool Native::Ntp::AccessGroup::Ipv4::Serve::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv4::Serve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv4::Serve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv4::Serve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv4::Serve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::Ipv4::Serve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::Ipv4::Serve::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AccessGroup::Ipv4::Serve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv4::Serve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv4::Serve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv4::ServeOnly::ServeOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "serve-only"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::Ipv4::ServeOnly::~ServeOnly()
{
}

bool Native::Ntp::AccessGroup::Ipv4::ServeOnly::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv4::ServeOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::Ipv4::ServeOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AccessGroup::Ipv4::ServeOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv4::ServeOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv4::ServeOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv6::Ipv6()
    :
    peer(std::make_shared<Native::Ntp::AccessGroup::Ipv6::Peer>())
    , query_only(std::make_shared<Native::Ntp::AccessGroup::Ipv6::QueryOnly>())
    , serve(std::make_shared<Native::Ntp::AccessGroup::Ipv6::Serve>())
    , serve_only(std::make_shared<Native::Ntp::AccessGroup::Ipv6::ServeOnly>())
{
    peer->parent = this;
    query_only->parent = this;
    serve->parent = this;
    serve_only->parent = this;

    yang_name = "ipv6"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::Ipv6::~Ipv6()
{
}

bool Native::Ntp::AccessGroup::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data())
	|| (query_only !=  nullptr && query_only->has_data())
	|| (serve !=  nullptr && serve->has_data())
	|| (serve_only !=  nullptr && serve_only->has_data());
}

bool Native::Ntp::AccessGroup::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (query_only !=  nullptr && query_only->has_operation())
	|| (serve !=  nullptr && serve->has_operation())
	|| (serve_only !=  nullptr && serve_only->has_operation());
}

std::string Native::Ntp::AccessGroup::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Ntp::AccessGroup::Ipv6::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "query-only")
    {
        if(query_only == nullptr)
        {
            query_only = std::make_shared<Native::Ntp::AccessGroup::Ipv6::QueryOnly>();
        }
        return query_only;
    }

    if(child_yang_name == "serve")
    {
        if(serve == nullptr)
        {
            serve = std::make_shared<Native::Ntp::AccessGroup::Ipv6::Serve>();
        }
        return serve;
    }

    if(child_yang_name == "serve-only")
    {
        if(serve_only == nullptr)
        {
            serve_only = std::make_shared<Native::Ntp::AccessGroup::Ipv6::ServeOnly>();
        }
        return serve_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(query_only != nullptr)
    {
        _children["query-only"] = query_only;
    }

    if(serve != nullptr)
    {
        _children["serve"] = serve;
    }

    if(serve_only != nullptr)
    {
        _children["serve-only"] = serve_only;
    }

    return _children;
}

void Native::Ntp::AccessGroup::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::AccessGroup::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::AccessGroup::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "query-only" || name == "serve" || name == "serve-only")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv6::Peer::Peer()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "peer"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::Ipv6::Peer::~Peer()
{
}

bool Native::Ntp::AccessGroup::Ipv6::Peer::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv6::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv6::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv6::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv6::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::Ipv6::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::Ipv6::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AccessGroup::Ipv6::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv6::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv6::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv6::QueryOnly::QueryOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "query-only"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::Ipv6::QueryOnly::~QueryOnly()
{
}

bool Native::Ntp::AccessGroup::Ipv6::QueryOnly::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv6::QueryOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::Ipv6::QueryOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AccessGroup::Ipv6::QueryOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv6::QueryOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv6::QueryOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv6::Serve::Serve()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "serve"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::Ipv6::Serve::~Serve()
{
}

bool Native::Ntp::AccessGroup::Ipv6::Serve::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv6::Serve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv6::Serve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv6::Serve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv6::Serve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::Ipv6::Serve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::Ipv6::Serve::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AccessGroup::Ipv6::Serve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv6::Serve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv6::Serve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Ipv6::ServeOnly::ServeOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "serve-only"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::Ipv6::ServeOnly::~ServeOnly()
{
}

bool Native::Ntp::AccessGroup::Ipv6::ServeOnly::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Ipv6::ServeOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::Ipv6::ServeOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AccessGroup::Ipv6::ServeOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Ipv6::ServeOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Ipv6::ServeOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Peer::Peer()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "peer"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::Peer::~Peer()
{
}

bool Native::Ntp::AccessGroup::Peer::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AccessGroup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::QueryOnly::QueryOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "query-only"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::QueryOnly::~QueryOnly()
{
}

bool Native::Ntp::AccessGroup::QueryOnly::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::QueryOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::QueryOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::QueryOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::QueryOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::QueryOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::QueryOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AccessGroup::QueryOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::QueryOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::QueryOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::Serve::Serve()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "serve"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::Serve::~Serve()
{
}

bool Native::Ntp::AccessGroup::Serve::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::Serve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::Serve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::Serve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::Serve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::Serve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::Serve::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AccessGroup::Serve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::Serve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::Serve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::AccessGroup::ServeOnly::ServeOnly()
    :
    acl{YType::str, "acl"},
    kod{YType::empty, "kod"}
{

    yang_name = "serve-only"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AccessGroup::ServeOnly::~ServeOnly()
{
}

bool Native::Ntp::AccessGroup::ServeOnly::has_data() const
{
    if (is_presence_container) return true;
    return acl.is_set
	|| kod.is_set;
}

bool Native::Ntp::AccessGroup::ServeOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(kod.yfilter);
}

std::string Native::Ntp::AccessGroup::ServeOnly::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:access-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AccessGroup::ServeOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serve-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AccessGroup::ServeOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (kod.is_set || is_set(kod.yfilter)) leaf_name_data.push_back(kod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AccessGroup::ServeOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AccessGroup::ServeOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AccessGroup::ServeOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kod")
    {
        kod = value;
        kod.value_namespace = name_space;
        kod.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AccessGroup::ServeOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "kod")
    {
        kod.yfilter = yfilter;
    }
}

bool Native::Ntp::AccessGroup::ServeOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "kod")
        return true;
    return false;
}

Native::Ntp::Allow::Allow()
    :
    mode(std::make_shared<Native::Ntp::Allow::Mode>())
{
    mode->parent = this;

    yang_name = "allow"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Allow::~Allow()
{
}

bool Native::Ntp::Allow::has_data() const
{
    if (is_presence_container) return true;
    return (mode !=  nullptr && mode->has_data());
}

bool Native::Ntp::Allow::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Ntp::Allow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ntp::Allow::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Ntp::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode")
        return true;
    return false;
}

Native::Ntp::Allow::Mode::Mode()
    :
    private_{YType::empty, "private"}
        ,
    control(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "allow"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Allow::Mode::~Mode()
{
}

bool Native::Ntp::Allow::Mode::has_data() const
{
    if (is_presence_container) return true;
    return private_.is_set
	|| (control !=  nullptr && control->has_data());
}

bool Native::Ntp::Allow::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(private_.yfilter)
	|| (control !=  nullptr && control->has_operation());
}

std::string Native::Ntp::Allow::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:allow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Allow::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Allow::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (private_.is_set || is_set(private_.yfilter)) leaf_name_data.push_back(private_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Allow::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Ntp::Allow::Mode::Control>();
        }
        return control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Allow::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(control != nullptr)
    {
        _children["control"] = control;
    }

    return _children;
}

void Native::Ntp::Allow::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "private")
    {
        private_ = value;
        private_.value_namespace = name_space;
        private_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Allow::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "private")
    {
        private_.yfilter = yfilter;
    }
}

bool Native::Ntp::Allow::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control" || name == "private")
        return true;
    return false;
}

Native::Ntp::Allow::Mode::Control::Control()
    :
    delay{YType::uint8, "delay"}
{

    yang_name = "control"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ntp::Allow::Mode::Control::~Control()
{
}

bool Native::Ntp::Allow::Mode::Control::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set;
}

bool Native::Ntp::Allow::Mode::Control::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Ntp::Allow::Mode::Control::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:allow/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Allow::Mode::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Allow::Mode::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Allow::Mode::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Allow::Mode::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Allow::Mode::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Allow::Mode::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Ntp::Allow::Mode::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Ntp::AuthenticationKey::AuthenticationKey()
    :
    number{YType::uint32, "number"},
    md5{YType::str, "md5"},
    encryption_type{YType::uint32, "encryption-type"}
{

    yang_name = "authentication-key"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Ntp::AuthenticationKey::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| md5.is_set
	|| encryption_type.is_set;
}

bool Native::Ntp::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(encryption_type.yfilter);
}

std::string Native::Ntp::AuthenticationKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:authentication-key";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (encryption_type.is_set || is_set(encryption_type.yfilter)) leaf_name_data.push_back(encryption_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-type")
    {
        encryption_type = value;
        encryption_type.value_namespace = name_space;
        encryption_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "encryption-type")
    {
        encryption_type.yfilter = yfilter;
    }
}

bool Native::Ntp::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "md5" || name == "encryption-type")
        return true;
    return false;
}

Native::Ntp::Master::Master()
    :
    stratum_number{YType::uint8, "stratum-number"}
{

    yang_name = "master"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ntp::Master::~Master()
{
}

bool Native::Ntp::Master::has_data() const
{
    if (is_presence_container) return true;
    return stratum_number.is_set;
}

bool Native::Ntp::Master::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stratum_number.yfilter);
}

std::string Native::Ntp::Master::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:master";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stratum_number.is_set || is_set(stratum_number.yfilter)) leaf_name_data.push_back(stratum_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stratum-number")
    {
        stratum_number = value;
        stratum_number.value_namespace = name_space;
        stratum_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stratum-number")
    {
        stratum_number.yfilter = yfilter;
    }
}

bool Native::Ntp::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stratum-number")
        return true;
    return false;
}

Native::Ntp::Panic::Panic()
    :
    update{YType::empty, "update"}
{

    yang_name = "panic"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Panic::~Panic()
{
}

bool Native::Ntp::Panic::has_data() const
{
    if (is_presence_container) return true;
    return update.is_set;
}

bool Native::Ntp::Panic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update.yfilter);
}

std::string Native::Ntp::Panic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Panic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:panic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Panic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Panic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Panic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Panic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Panic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Native::Ntp::Panic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update")
        return true;
    return false;
}

Native::Ntp::Peer::Peer()
    :
    server_list(this, {"ip_address"})
    , ip(this, {"host_name"})
    , ipv6(this, {"host_name"})
    , vrf(this, {"name"})
{

    yang_name = "peer"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Peer::~Peer()
{
}

bool Native::Ntp::Peer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server_list.len(); index++)
    {
        if(server_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ntp::Peer::has_operation() const
{
    for (std::size_t index=0; index<server_list.len(); index++)
    {
        if(server_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ntp::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-list")
    {
        auto ent_ = std::make_shared<Native::Ntp::Peer::ServerList>();
        ent_->parent = this;
        server_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip")
    {
        auto ent_ = std::make_shared<Native::Ntp::Peer::Ip>();
        ent_->parent = this;
        ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Ntp::Peer::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ntp::Peer::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ntp::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-list" || name == "ip" || name == "ipv6" || name == "vrf")
        return true;
    return false;
}

Native::Ntp::Peer::ServerList::ServerList()
    :
    ip_address{YType::str, "ip-address"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "server-list"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Peer::ServerList::~ServerList()
{
}

bool Native::Ntp::Peer::ServerList::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::ServerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Peer::ServerList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Peer::ServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-list";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::ServerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Peer::ServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Peer::ServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Peer::ServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::ServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::ServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Peer::Ip::Ip()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ip"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Peer::Ip::~Ip()
{
}

bool Native::Ntp::Peer::Ip::has_data() const
{
    if (is_presence_container) return true;
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Peer::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Peer::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Peer::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Peer::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Peer::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Peer::Ipv6::Ipv6()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ipv6"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Peer::Ipv6::~Ipv6()
{
}

bool Native::Ntp::Peer::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Peer::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Peer::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Peer::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Peer::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Peer::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Peer::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    server_list(this, {"ip_address"})
    , ip(this, {"host_name"})
    , ipv6(this, {"host_name"})
{

    yang_name = "vrf"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Peer::Vrf::~Vrf()
{
}

bool Native::Ntp::Peer::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server_list.len(); index++)
    {
        if(server_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ntp::Peer::Vrf::has_operation() const
{
    for (std::size_t index=0; index<server_list.len(); index++)
    {
        if(server_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ntp::Peer::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Peer::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Peer::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-list")
    {
        auto ent_ = std::make_shared<Native::Ntp::Peer::Vrf::ServerList>();
        ent_->parent = this;
        server_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip")
    {
        auto ent_ = std::make_shared<Native::Ntp::Peer::Vrf::Ip>();
        ent_->parent = this;
        ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Ntp::Peer::Vrf::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Peer::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ntp::Peer::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-list" || name == "ip" || name == "ipv6" || name == "name")
        return true;
    return false;
}

Native::Ntp::Peer::Vrf::ServerList::ServerList()
    :
    ip_address{YType::str, "ip-address"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "server-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ntp::Peer::Vrf::ServerList::~ServerList()
{
}

bool Native::Ntp::Peer::Vrf::ServerList::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Vrf::ServerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Peer::Vrf::ServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-list";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::Vrf::ServerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Peer::Vrf::ServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Peer::Vrf::ServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Peer::Vrf::ServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Vrf::ServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Vrf::ServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Peer::Vrf::Ip::Ip()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ip"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ntp::Peer::Vrf::Ip::~Ip()
{
}

bool Native::Ntp::Peer::Vrf::Ip::has_data() const
{
    if (is_presence_container) return true;
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Vrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Peer::Vrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::Vrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Peer::Vrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Peer::Vrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Peer::Vrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Vrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Vrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Peer::Vrf::Ipv6::Ipv6()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ipv6"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ntp::Peer::Vrf::Ipv6::~Ipv6()
{
}

bool Native::Ntp::Peer::Vrf::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Peer::Vrf::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Peer::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Peer::Vrf::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Peer::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Peer::Vrf::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Peer::Vrf::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Peer::Vrf::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Peer::Vrf::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Server::Server()
    :
    server_list(this, {"ip_address"})
    , ip(this, {"host_name"})
    , ipv6(this, {"host_name"})
    , vrf(this, {"name"})
{

    yang_name = "server"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Server::~Server()
{
}

bool Native::Ntp::Server::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server_list.len(); index++)
    {
        if(server_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ntp::Server::has_operation() const
{
    for (std::size_t index=0; index<server_list.len(); index++)
    {
        if(server_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ntp::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-list")
    {
        auto ent_ = std::make_shared<Native::Ntp::Server::ServerList>();
        ent_->parent = this;
        server_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip")
    {
        auto ent_ = std::make_shared<Native::Ntp::Server::Ip>();
        ent_->parent = this;
        ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Ntp::Server::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ntp::Server::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ntp::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ntp::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ntp::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-list" || name == "ip" || name == "ipv6" || name == "vrf")
        return true;
    return false;
}

Native::Ntp::Server::ServerList::ServerList()
    :
    ip_address{YType::str, "ip-address"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "server-list"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Server::ServerList::~ServerList()
{
}

bool Native::Ntp::Server::ServerList::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::ServerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Server::ServerList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Server::ServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-list";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::ServerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Server::ServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Server::ServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Server::ServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::ServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::ServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Server::Ip::Ip()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ip"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Server::Ip::~Ip()
{
}

bool Native::Ntp::Server::Ip::has_data() const
{
    if (is_presence_container) return true;
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Server::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Server::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Server::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Server::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Server::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Server::Ipv6::Ipv6()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ipv6"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Server::Ipv6::~Ipv6()
{
}

bool Native::Ntp::Server::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Server::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Server::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Server::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Server::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Server::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Server::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    server_list(this, {"ip_address"})
    , ip(this, {"host_name"})
    , ipv6(this, {"host_name"})
{

    yang_name = "vrf"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Server::Vrf::~Vrf()
{
}

bool Native::Ntp::Server::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server_list.len(); index++)
    {
        if(server_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ntp::Server::Vrf::has_operation() const
{
    for (std::size_t index=0; index<server_list.len(); index++)
    {
        if(server_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ip.len(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.len(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ntp::Server::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Server::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Server::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-list")
    {
        auto ent_ = std::make_shared<Native::Ntp::Server::Vrf::ServerList>();
        ent_->parent = this;
        server_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ip")
    {
        auto ent_ = std::make_shared<Native::Ntp::Server::Vrf::Ip>();
        ent_->parent = this;
        ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6")
    {
        auto ent_ = std::make_shared<Native::Ntp::Server::Vrf::Ipv6>();
        ent_->parent = this;
        ipv6.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Server::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ntp::Server::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-list" || name == "ip" || name == "ipv6" || name == "name")
        return true;
    return false;
}

Native::Ntp::Server::Vrf::ServerList::ServerList()
    :
    ip_address{YType::str, "ip-address"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "server-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ntp::Server::Vrf::ServerList::~ServerList()
{
}

bool Native::Ntp::Server::Vrf::ServerList::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Vrf::ServerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Server::Vrf::ServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-list";
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::Vrf::ServerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Server::Vrf::ServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Server::Vrf::ServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Server::Vrf::ServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Vrf::ServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Vrf::ServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Server::Vrf::Ip::Ip()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ip"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ntp::Server::Vrf::Ip::~Ip()
{
}

bool Native::Ntp::Server::Vrf::Ip::has_data() const
{
    if (is_presence_container) return true;
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Vrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Server::Vrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::Vrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Server::Vrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Server::Vrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Server::Vrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Vrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Vrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Server::Vrf::Ipv6::Ipv6()
    :
    host_name{YType::str, "host-name"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    key{YType::uint32, "key"},
    maxpoll{YType::uint8, "maxpoll"},
    minpoll{YType::uint8, "minpoll"},
    prefer{YType::empty, "prefer"},
    source{YType::str, "source"},
    version{YType::uint8, "version"}
{

    yang_name = "ipv6"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ntp::Server::Vrf::Ipv6::~Ipv6()
{
}

bool Native::Ntp::Server::Vrf::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return host_name.is_set
	|| burst.is_set
	|| iburst.is_set
	|| key.is_set
	|| maxpoll.is_set
	|| minpoll.is_set
	|| prefer.is_set
	|| source.is_set
	|| version.is_set;
}

bool Native::Ntp::Server::Vrf::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(iburst.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(maxpoll.yfilter)
	|| ydk::is_set(minpoll.yfilter)
	|| ydk::is_set(prefer.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Ntp::Server::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Server::Vrf::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.yfilter)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (maxpoll.is_set || is_set(maxpoll.yfilter)) leaf_name_data.push_back(maxpoll.get_name_leafdata());
    if (minpoll.is_set || is_set(minpoll.yfilter)) leaf_name_data.push_back(minpoll.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Server::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Server::Vrf::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Server::Vrf::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iburst")
    {
        iburst = value;
        iburst.value_namespace = name_space;
        iburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxpoll")
    {
        maxpoll = value;
        maxpoll.value_namespace = name_space;
        maxpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minpoll")
    {
        minpoll = value;
        minpoll.value_namespace = name_space;
        minpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Server::Vrf::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "iburst")
    {
        iburst.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "maxpoll")
    {
        maxpoll.yfilter = yfilter;
    }
    if(value_path == "minpoll")
    {
        minpoll.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Ntp::Server::Vrf::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "burst" || name == "iburst" || name == "key" || name == "maxpoll" || name == "minpoll" || name == "prefer" || name == "source" || name == "version")
        return true;
    return false;
}

Native::Ntp::Source::Source()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Ntp::Source::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ntp::Source::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ntp::Source::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ntp::Source::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Source::~Source()
{
}

bool Native::Ntp::Source::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ntp::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ntp::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ntp::Source::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ntp::Source::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ntp::Source::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ntp::Source::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Ntp::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ntp::Source::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Source::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ntp::Source::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ntp::Source::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ntp::Source::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Source::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Source::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Source::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Source::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Source::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ntp::Source::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Source::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ntp::Source::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ntp::Source::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ntp::Source::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Source::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Source::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Source::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Source::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Source::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ntp::Source::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Source::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ntp::Source::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ntp::Source::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ntp::Source::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Source::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Source::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Source::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Source::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Source::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ntp::Source::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::Source::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ntp::Source::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ntp::Source::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ntp::Source::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/Cisco-IOS-XE-ntp:source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::Source::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::Source::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::Source::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::Source::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::Source::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::Source::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ntp::Source::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ntp::TrustedKey::TrustedKey()
    :
    number{YType::uint16, "number"},
    end_key{YType::uint16, "end-key"}
{

    yang_name = "trusted-key"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ntp::TrustedKey::~TrustedKey()
{
}

bool Native::Ntp::TrustedKey::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| end_key.is_set;
}

bool Native::Ntp::TrustedKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(end_key.yfilter);
}

std::string Native::Ntp::TrustedKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ntp::TrustedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:trusted-key";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ntp::TrustedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (end_key.is_set || is_set(end_key.yfilter)) leaf_name_data.push_back(end_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ntp::TrustedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ntp::TrustedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ntp::TrustedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-key")
    {
        end_key = value;
        end_key.value_namespace = name_space;
        end_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ntp::TrustedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "end-key")
    {
        end_key.yfilter = yfilter;
    }
}

bool Native::Ntp::TrustedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "end-key")
        return true;
    return false;
}

Native::Wsma::Wsma()
    :
    agent(std::make_shared<Native::Wsma::Agent>())
    , profile(std::make_shared<Native::Wsma::Profile>())
{
    agent->parent = this;
    profile->parent = this;

    yang_name = "wsma"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Wsma::~Wsma()
{
}

bool Native::Wsma::has_data() const
{
    if (is_presence_container) return true;
    return (agent !=  nullptr && agent->has_data())
	|| (profile !=  nullptr && profile->has_data());
}

bool Native::Wsma::has_operation() const
{
    return is_set(yfilter)
	|| (agent !=  nullptr && agent->has_operation())
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Wsma::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wsma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Wsma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-wsma:agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<Native::Wsma::Agent>();
        }
        return agent;
    }

    if(child_yang_name == "Cisco-IOS-XE-wsma:profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Wsma::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Wsma::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(agent != nullptr)
    {
        _children["Cisco-IOS-XE-wsma:agent"] = agent;
    }

    if(profile != nullptr)
    {
        _children["Cisco-IOS-XE-wsma:profile"] = profile;
    }

    return _children;
}

void Native::Wsma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Wsma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Wsma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent" || name == "profile")
        return true;
    return false;
}

Native::Wsma::Agent::Agent()
    :
    exec(std::make_shared<Native::Wsma::Agent::Exec>())
    , config(std::make_shared<Native::Wsma::Agent::Config>())
    , filesys(std::make_shared<Native::Wsma::Agent::Filesys>())
    , notify(std::make_shared<Native::Wsma::Agent::Notify>())
{
    exec->parent = this;
    config->parent = this;
    filesys->parent = this;
    notify->parent = this;

    yang_name = "agent"; yang_parent_name = "wsma"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Wsma::Agent::~Agent()
{
}

bool Native::Wsma::Agent::has_data() const
{
    if (is_presence_container) return true;
    return (exec !=  nullptr && exec->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (filesys !=  nullptr && filesys->has_data())
	|| (notify !=  nullptr && notify->has_data());
}

bool Native::Wsma::Agent::has_operation() const
{
    return is_set(yfilter)
	|| (exec !=  nullptr && exec->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (filesys !=  nullptr && filesys->has_operation())
	|| (notify !=  nullptr && notify->has_operation());
}

std::string Native::Wsma::Agent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wsma:agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Wsma::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Wsma::Agent::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Wsma::Agent::Config>();
        }
        return config;
    }

    if(child_yang_name == "filesys")
    {
        if(filesys == nullptr)
        {
            filesys = std::make_shared<Native::Wsma::Agent::Filesys>();
        }
        return filesys;
    }

    if(child_yang_name == "notify")
    {
        if(notify == nullptr)
        {
            notify = std::make_shared<Native::Wsma::Agent::Notify>();
        }
        return notify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Wsma::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exec != nullptr)
    {
        _children["exec"] = exec;
    }

    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(filesys != nullptr)
    {
        _children["filesys"] = filesys;
    }

    if(notify != nullptr)
    {
        _children["notify"] = notify;
    }

    return _children;
}

void Native::Wsma::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Wsma::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Wsma::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec" || name == "config" || name == "filesys" || name == "notify")
        return true;
    return false;
}

Native::Wsma::Agent::Exec::Exec()
    :
    profile{YType::str, "profile"}
{

    yang_name = "exec"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Wsma::Agent::Exec::~Exec()
{
}

bool Native::Wsma::Agent::Exec::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : profile.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Wsma::Agent::Exec::has_operation() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Wsma::Agent::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Agent::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Agent::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto profile_name_datas = profile.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_name_datas.begin(), profile_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Wsma::Agent::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Wsma::Agent::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Wsma::Agent::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

void Native::Wsma::Agent::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Wsma::Agent::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Wsma::Agent::Config::Config()
    :
    profile{YType::str, "profile"}
{

    yang_name = "config"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Wsma::Agent::Config::~Config()
{
}

bool Native::Wsma::Agent::Config::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : profile.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Wsma::Agent::Config::has_operation() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Wsma::Agent::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Agent::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Agent::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto profile_name_datas = profile.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_name_datas.begin(), profile_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Wsma::Agent::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Wsma::Agent::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Wsma::Agent::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

void Native::Wsma::Agent::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Wsma::Agent::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Wsma::Agent::Filesys::Filesys()
    :
    profile{YType::str, "profile"}
{

    yang_name = "filesys"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Wsma::Agent::Filesys::~Filesys()
{
}

bool Native::Wsma::Agent::Filesys::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : profile.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Wsma::Agent::Filesys::has_operation() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Wsma::Agent::Filesys::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Agent::Filesys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filesys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Agent::Filesys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto profile_name_datas = profile.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_name_datas.begin(), profile_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Wsma::Agent::Filesys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Wsma::Agent::Filesys::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Wsma::Agent::Filesys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

void Native::Wsma::Agent::Filesys::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Wsma::Agent::Filesys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Wsma::Agent::Notify::Notify()
    :
    profile{YType::str, "profile"}
{

    yang_name = "notify"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Wsma::Agent::Notify::~Notify()
{
}

bool Native::Wsma::Agent::Notify::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : profile.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Wsma::Agent::Notify::has_operation() const
{
    for (auto const & leaf : profile.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Native::Wsma::Agent::Notify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Agent::Notify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Agent::Notify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto profile_name_datas = profile.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), profile_name_datas.begin(), profile_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Wsma::Agent::Notify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Wsma::Agent::Notify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Wsma::Agent::Notify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile.append(value);
    }
}

void Native::Wsma::Agent::Notify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Wsma::Agent::Notify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::Wsma::Profile::Profile()
    :
    listener(this, {"name"})
{

    yang_name = "profile"; yang_parent_name = "wsma"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Wsma::Profile::~Profile()
{
}

bool Native::Wsma::Profile::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<listener.len(); index++)
    {
        if(listener[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Wsma::Profile::has_operation() const
{
    for (std::size_t index=0; index<listener.len(); index++)
    {
        if(listener[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Wsma::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wsma:profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Wsma::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "listener")
    {
        auto ent_ = std::make_shared<Native::Wsma::Profile::Listener>();
        ent_->parent = this;
        listener.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Wsma::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : listener.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Wsma::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Wsma::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Wsma::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "listener")
        return true;
    return false;
}

Native::Wsma::Profile::Listener::Listener()
    :
    name{YType::str, "name"},
    transport{YType::enumeration, "transport"}
{

    yang_name = "listener"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Wsma::Profile::Listener::~Listener()
{
}

bool Native::Wsma::Profile::Listener::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| transport.is_set;
}

bool Native::Wsma::Profile::Listener::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(transport.yfilter);
}

std::string Native::Wsma::Profile::Listener::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/wsma/Cisco-IOS-XE-wsma:profile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wsma::Profile::Listener::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "listener";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wsma::Profile::Listener::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Wsma::Profile::Listener::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Wsma::Profile::Listener::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Wsma::Profile::Listener::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Wsma::Profile::Listener::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
}

bool Native::Wsma::Profile::Listener::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "transport")
        return true;
    return false;
}

const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::all {1, "all"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::lat {3, "lat"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::mop {4, "mop"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::none {6, "none"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::pad {7, "pad"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Aux::Transport::Input::Input_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::all {1, "all"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::lat {3, "lat"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::mop {4, "mop"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::none {6, "none"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::pad {7, "pad"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Aux::Transport::Output::Output_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::lat {1, "lat"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::mop {2, "mop"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::none {4, "none"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::pad {5, "pad"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::Aux::Transport::Preferred::Protocol::udptn {9, "udptn"};

const Enum::YLeaf Native::Line::Console::First::Y_0 {0, "0"};

const Enum::YLeaf Native::Line::Console::Stopbits::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::Console::Stopbits::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::Console::Stopbits::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::Console::AccessClass::AcccessList::Direction::in {0, "in"};
const Enum::YLeaf Native::Line::Console::AccessClass::AcccessList::Direction::out {1, "out"};

const Enum::YLeaf Native::Line::Console::EscapeCharacter::Char_::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::Console::EscapeCharacter::Char_::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::Console::EscapeCharacter::Char_::NONE {2, "NONE"};

const Enum::YLeaf Native::Line::Console::Ip::NetmaskFormat::Format::bit_count {0, "bit-count"};
const Enum::YLeaf Native::Line::Console::Ip::NetmaskFormat::Format::decimal {1, "decimal"};
const Enum::YLeaf Native::Line::Console::Ip::NetmaskFormat::Format::hexadecimal {2, "hexadecimal"};

const Enum::YLeaf Native::Line::Console::Ipv6::AccessClass::AccessClass_::EnumerationInOut::in {0, "in"};
const Enum::YLeaf Native::Line::Console::Ipv6::AccessClass::AccessClass_::EnumerationInOut::out {1, "out"};

const Enum::YLeaf Native::Line::Console::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Line::Console::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::all {1, "all"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::lat {3, "lat"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::mop {4, "mop"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::none {6, "none"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::pad {7, "pad"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Console::Transport::Input::Input_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::all {1, "all"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::lat {3, "lat"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::mop {4, "mop"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::none {6, "none"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::pad {7, "pad"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Console::Transport::Output::Output_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::lat {1, "lat"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::mop {2, "mop"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::none {4, "none"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::pad {5, "pad"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::Console::Transport::Preferred::Protocol::udptn {9, "udptn"};

const Enum::YLeaf Native::Line::Vty::Stopbits::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::Vty::Stopbits::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::Vty::Stopbits::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::Vty::AccessClass::AcccessList::Direction::in {0, "in"};
const Enum::YLeaf Native::Line::Vty::AccessClass::AcccessList::Direction::out {1, "out"};

const Enum::YLeaf Native::Line::Vty::EscapeCharacter::Char_::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::Vty::EscapeCharacter::Char_::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::Vty::EscapeCharacter::Char_::NONE {2, "NONE"};

const Enum::YLeaf Native::Line::Vty::Ip::NetmaskFormat::Format::bit_count {0, "bit-count"};
const Enum::YLeaf Native::Line::Vty::Ip::NetmaskFormat::Format::decimal {1, "decimal"};
const Enum::YLeaf Native::Line::Vty::Ip::NetmaskFormat::Format::hexadecimal {2, "hexadecimal"};

const Enum::YLeaf Native::Line::Vty::Ipv6::AccessClass::AccessClass_::EnumerationInOut::in {0, "in"};
const Enum::YLeaf Native::Line::Vty::Ipv6::AccessClass::AccessClass_::EnumerationInOut::out {1, "out"};

const Enum::YLeaf Native::Line::Vty::Password::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Line::Vty::Password::Type::Y_7 {1, "7"};

const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::all {1, "all"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::lat {3, "lat"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::mop {4, "mop"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::none {6, "none"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::pad {7, "pad"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Vty::Transport::Input::Input_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::all {1, "all"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::lapb_ta {2, "lapb-ta"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::lat {3, "lat"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::mop {4, "mop"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::nasi {5, "nasi"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::none {6, "none"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::pad {7, "pad"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::rlogin {8, "rlogin"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::ssh {9, "ssh"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::telnet {10, "telnet"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::udptn {11, "udptn"};
const Enum::YLeaf Native::Line::Vty::Transport::Output::Output_::v120 {12, "v120"};

const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::acercon {0, "acercon"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::lat {1, "lat"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::mop {2, "mop"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::nasi {3, "nasi"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::none {4, "none"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::pad {5, "pad"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::rlogin {6, "rlogin"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::ssh {7, "ssh"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::telnet {8, "telnet"};
const Enum::YLeaf Native::Line::Vty::Transport::Preferred::Protocol::udptn {9, "udptn"};

const Enum::YLeaf Native::Wsma::Profile::Listener::Transport::http {0, "http"};
const Enum::YLeaf Native::Wsma::Profile::Listener::Transport::https {1, "https"};
const Enum::YLeaf Native::Wsma::Profile::Listener::Transport::ssh {2, "ssh"};
const Enum::YLeaf Native::Wsma::Profile::Listener::Transport::tls {3, "tls"};


}
}

