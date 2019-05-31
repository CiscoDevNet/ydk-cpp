
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_44.hpp"
#include "Cisco_IOS_XE_native_47.hpp"
#include "Cisco_IOS_XE_native_50.hpp"
#include "Cisco_IOS_XE_native_45.hpp"
#include "Cisco_IOS_XE_native_48.hpp"
#include "Cisco_IOS_XE_native_49.hpp"
#include "Cisco_IOS_XE_native_46.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "performance-monitor"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input>())
    , output(std::make_shared<Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::get_children() const
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

    return _children;
}

void Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::ServicePolicy::Type::ServiceChain::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::FabricDomain::FabricDomain()
    :
    iwan_fabric(std::make_shared<Native::Interface::GigabitEthernet::FabricDomain::IwanFabric>())
{
    iwan_fabric->parent = this;

    yang_name = "fabric-domain"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::FabricDomain::~FabricDomain()
{
}

bool Native::Interface::GigabitEthernet::FabricDomain::has_data() const
{
    if (is_presence_container) return true;
    return (iwan_fabric !=  nullptr && iwan_fabric->has_data());
}

bool Native::Interface::GigabitEthernet::FabricDomain::has_operation() const
{
    return is_set(yfilter)
	|| (iwan_fabric !=  nullptr && iwan_fabric->has_operation());
}

std::string Native::Interface::GigabitEthernet::FabricDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-iwanfabric:fabric-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::FabricDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::FabricDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iwan-fabric")
    {
        if(iwan_fabric == nullptr)
        {
            iwan_fabric = std::make_shared<Native::Interface::GigabitEthernet::FabricDomain::IwanFabric>();
        }
        return iwan_fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::FabricDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iwan_fabric != nullptr)
    {
        _children["iwan-fabric"] = iwan_fabric;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::FabricDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::FabricDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::FabricDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iwan-fabric")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::IwanFabric()
    :
    word(this, {"word"})
{

    yang_name = "iwan-fabric"; yang_parent_name = "fabric-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::~IwanFabric()
{
}

bool Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::has_operation() const
{
    for (std::size_t index=0; index<word.len(); index++)
    {
        if(word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iwan-fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "word")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::Word>();
        ent_->parent = this;
        word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::Word::Word()
    :
    word{YType::str, "word"},
    interface_id{YType::uint8, "interface-id"}
{

    yang_name = "word"; yang_parent_name = "iwan-fabric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::Word::~Word()
{
}

bool Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::Word::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| interface_id.is_set;
}

bool Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::Word::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(interface_id.yfilter);
}

std::string Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::Word::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "word";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::Word::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::Word::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::Word::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::Word::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::Word::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::FabricDomain::IwanFabric::Word::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "interface-id")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
        ,
    mobility(std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Lisp::~Lisp()
{
}

bool Native::Interface::GigabitEthernet::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::GigabitEthernet::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_subnet_mode.yfilter)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::GigabitEthernet::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.yfilter)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mobility != nullptr)
    {
        _children["mobility"] = mobility;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
        extended_subnet_mode.value_namespace = name_space;
        extended_subnet_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobility" || name == "extended-subnet-mode")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::Mobility()
    :
    dynamic_eid(this, {"dynamic_eid_name"})
    , discover(std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility::Discover>())
    , liveness(std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness>())
{
    discover->parent = this;
    liveness->parent = this;

    yang_name = "mobility"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Lisp::Mobility::~Mobility()
{
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_data())
            return true;
    }
    return (discover !=  nullptr && discover->has_data())
	|| (liveness !=  nullptr && liveness->has_data());
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::has_operation() const
{
    for (std::size_t index=0; index<dynamic_eid.len(); index++)
    {
        if(dynamic_eid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (discover !=  nullptr && discover->has_operation())
	|| (liveness !=  nullptr && liveness->has_operation());
}

std::string Native::Interface::GigabitEthernet::Lisp::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lisp::Mobility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Lisp::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-eid")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid>();
        ent_->parent = this;
        dynamic_eid.append(ent_);
        return ent_;
    }

    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "liveness")
    {
        if(liveness == nullptr)
        {
            liveness = std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness>();
        }
        return liveness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Lisp::Mobility::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dynamic_eid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(discover != nullptr)
    {
        _children["discover"] = discover;
    }

    if(liveness != nullptr)
    {
        _children["liveness"] = liveness;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-eid" || name == "discover" || name == "liveness")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::DynamicEid()
    :
    dynamic_eid_name{YType::str, "dynamic-eid-name"}
        ,
    nbr_proxy_reply(nullptr) // presence node
{

    yang_name = "dynamic-eid"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::~DynamicEid()
{
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::has_data() const
{
    if (is_presence_container) return true;
    return dynamic_eid_name.is_set
	|| (nbr_proxy_reply !=  nullptr && nbr_proxy_reply->has_data());
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_eid_name.yfilter)
	|| (nbr_proxy_reply !=  nullptr && nbr_proxy_reply->has_operation());
}

std::string Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";
    ADD_KEY_TOKEN(dynamic_eid_name, "dynamic-eid-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_eid_name.is_set || is_set(dynamic_eid_name.yfilter)) leaf_name_data.push_back(dynamic_eid_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-proxy-reply")
    {
        if(nbr_proxy_reply == nullptr)
        {
            nbr_proxy_reply = std::make_shared<Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply>();
        }
        return nbr_proxy_reply;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nbr_proxy_reply != nullptr)
    {
        _children["nbr-proxy-reply"] = nbr_proxy_reply;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name = value;
        dynamic_eid_name.value_namespace = name_space;
        dynamic_eid_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-proxy-reply" || name == "dynamic-eid-name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::NbrProxyReply()
    :
    requests{YType::uint8, "requests"}
{

    yang_name = "nbr-proxy-reply"; yang_parent_name = "dynamic-eid"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::~NbrProxyReply()
{
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::has_data() const
{
    if (is_presence_container) return true;
    return requests.is_set;
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-proxy-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::DynamicEid::NbrProxyReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requests")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::Discover()
    :
    arp{YType::boolean, "arp"}
{

    yang_name = "discover"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::~Discover()
{
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::has_data() const
{
    if (is_presence_container) return true;
    return arp.is_set;
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp.yfilter);
}

std::string Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::Discover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::Liveness()
    :
    test{YType::boolean, "test"},
    ttl{YType::uint8, "ttl"}
{

    yang_name = "liveness"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::~Liveness()
{
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::has_data() const
{
    if (is_presence_container) return true;
    return test.is_set
	|| ttl.is_set;
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "liveness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test.is_set || is_set(test.yfilter)) leaf_name_data.push_back(test.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test")
    {
        test = value;
        test.value_namespace = name_space;
        test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test")
    {
        test.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Lisp::Mobility::Liveness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "ttl")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Lldp::Lldp()
    :
    receive{YType::boolean, "receive"},
    transmit{YType::boolean, "transmit"}
{

    yang_name = "lldp"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Lldp::~Lldp()
{
}

bool Native::Interface::GigabitEthernet::Lldp::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| transmit.is_set;
}

bool Native::Interface::GigabitEthernet::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Interface::GigabitEthernet::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lldp:lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "transmit")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mka::Mka()
    :
    policy(std::make_shared<Native::Interface::GigabitEthernet::Mka::Policy>())
    , pre_shared_key(std::make_shared<Native::Interface::GigabitEthernet::Mka::PreSharedKey>())
{
    policy->parent = this;
    pre_shared_key->parent = this;

    yang_name = "mka"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Mka::~Mka()
{
}

bool Native::Interface::GigabitEthernet::Mka::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data());
}

bool Native::Interface::GigabitEthernet::Mka::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mka::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mka:mka";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mka::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mka::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::GigabitEthernet::Mka::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Interface::GigabitEthernet::Mka::PreSharedKey>();
        }
        return pre_shared_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mka::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(pre_shared_key != nullptr)
    {
        _children["pre-shared-key"] = pre_shared_key;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Mka::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Mka::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Mka::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "pre-shared-key")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mka::Policy::Policy()
    :
    name{YType::str, "name"}
{

    yang_name = "policy"; yang_parent_name = "mka"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Mka::Policy::~Policy()
{
}

bool Native::Interface::GigabitEthernet::Mka::Policy::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::GigabitEthernet::Mka::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mka::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mka::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mka::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mka::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Mka::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mka::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mka::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mka::PreSharedKey::PreSharedKey()
    :
    key_chain(std::make_shared<Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain>())
{
    key_chain->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "mka"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Mka::PreSharedKey::~PreSharedKey()
{
}

bool Native::Interface::GigabitEthernet::Mka::PreSharedKey::has_data() const
{
    if (is_presence_container) return true;
    return (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Interface::GigabitEthernet::Mka::PreSharedKey::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mka::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mka::PreSharedKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mka::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mka::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Mka::PreSharedKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Mka::PreSharedKey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Mka::PreSharedKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "pre-shared-key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::~KeyChain()
{
}

bool Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mka::PreSharedKey::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mvrp::Mvrp()
    :
    mvrp{YType::empty, "mvrp"}
        ,
    registration(std::make_shared<Native::Interface::GigabitEthernet::Mvrp::Registration>())
    , timer(std::make_shared<Native::Interface::GigabitEthernet::Mvrp::Timer>())
{
    registration->parent = this;
    timer->parent = this;

    yang_name = "mvrp"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Mvrp::~Mvrp()
{
}

bool Native::Interface::GigabitEthernet::Mvrp::has_data() const
{
    if (is_presence_container) return true;
    return mvrp.is_set
	|| (registration !=  nullptr && registration->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Interface::GigabitEthernet::Mvrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mvrp.yfilter)
	|| (registration !=  nullptr && registration->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mvrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mvrp:mvrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mvrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mvrp.is_set || is_set(mvrp.yfilter)) leaf_name_data.push_back(mvrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mvrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Interface::GigabitEthernet::Mvrp::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Interface::GigabitEthernet::Mvrp::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mvrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(registration != nullptr)
    {
        _children["registration"] = registration;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Mvrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mvrp")
    {
        mvrp = value;
        mvrp.value_namespace = name_space;
        mvrp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mvrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mvrp")
    {
        mvrp.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mvrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registration" || name == "timer" || name == "mvrp")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mvrp::Registration::Registration()
    :
    fixed{YType::empty, "fixed"},
    forbidden{YType::empty, "forbidden"},
    normal{YType::empty, "normal"}
{

    yang_name = "registration"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Mvrp::Registration::~Registration()
{
}

bool Native::Interface::GigabitEthernet::Mvrp::Registration::has_data() const
{
    if (is_presence_container) return true;
    return fixed.is_set
	|| forbidden.is_set
	|| normal.is_set;
}

bool Native::Interface::GigabitEthernet::Mvrp::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed.yfilter)
	|| ydk::is_set(forbidden.yfilter)
	|| ydk::is_set(normal.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mvrp::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mvrp::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed.is_set || is_set(fixed.yfilter)) leaf_name_data.push_back(fixed.get_name_leafdata());
    if (forbidden.is_set || is_set(forbidden.yfilter)) leaf_name_data.push_back(forbidden.get_name_leafdata());
    if (normal.is_set || is_set(normal.yfilter)) leaf_name_data.push_back(normal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mvrp::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mvrp::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Mvrp::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed")
    {
        fixed = value;
        fixed.value_namespace = name_space;
        fixed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forbidden")
    {
        forbidden = value;
        forbidden.value_namespace = name_space;
        forbidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "normal")
    {
        normal = value;
        normal.value_namespace = name_space;
        normal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mvrp::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed")
    {
        fixed.yfilter = yfilter;
    }
    if(value_path == "forbidden")
    {
        forbidden.yfilter = yfilter;
    }
    if(value_path == "normal")
    {
        normal.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mvrp::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed" || name == "forbidden" || name == "normal")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mvrp::Timer::Timer()
    :
    periodic{YType::empty, "periodic"}
        ,
    join(nullptr) // presence node
    , leave(nullptr) // presence node
    , leave_all(nullptr) // presence node
{

    yang_name = "timer"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Mvrp::Timer::~Timer()
{
}

bool Native::Interface::GigabitEthernet::Mvrp::Timer::has_data() const
{
    if (is_presence_container) return true;
    return periodic.is_set
	|| (join !=  nullptr && join->has_data())
	|| (leave !=  nullptr && leave->has_data())
	|| (leave_all !=  nullptr && leave_all->has_data());
}

bool Native::Interface::GigabitEthernet::Mvrp::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| (join !=  nullptr && join->has_operation())
	|| (leave !=  nullptr && leave->has_operation())
	|| (leave_all !=  nullptr && leave_all->has_operation());
}

std::string Native::Interface::GigabitEthernet::Mvrp::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mvrp::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mvrp::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join")
    {
        if(join == nullptr)
        {
            join = std::make_shared<Native::Interface::GigabitEthernet::Mvrp::Timer::Join>();
        }
        return join;
    }

    if(child_yang_name == "leave")
    {
        if(leave == nullptr)
        {
            leave = std::make_shared<Native::Interface::GigabitEthernet::Mvrp::Timer::Leave>();
        }
        return leave;
    }

    if(child_yang_name == "leave-all")
    {
        if(leave_all == nullptr)
        {
            leave_all = std::make_shared<Native::Interface::GigabitEthernet::Mvrp::Timer::LeaveAll>();
        }
        return leave_all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mvrp::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(join != nullptr)
    {
        _children["join"] = join;
    }

    if(leave != nullptr)
    {
        _children["leave"] = leave;
    }

    if(leave_all != nullptr)
    {
        _children["leave-all"] = leave_all;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Mvrp::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mvrp::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mvrp::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "join" || name == "leave" || name == "leave-all" || name == "periodic")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mvrp::Timer::Join::Join()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "join"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Mvrp::Timer::Join::~Join()
{
}

bool Native::Interface::GigabitEthernet::Mvrp::Timer::Join::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::GigabitEthernet::Mvrp::Timer::Join::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mvrp::Timer::Join::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mvrp::Timer::Join::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mvrp::Timer::Join::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mvrp::Timer::Join::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Mvrp::Timer::Join::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mvrp::Timer::Join::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mvrp::Timer::Join::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mvrp::Timer::Leave::Leave()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "leave"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Mvrp::Timer::Leave::~Leave()
{
}

bool Native::Interface::GigabitEthernet::Mvrp::Timer::Leave::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::GigabitEthernet::Mvrp::Timer::Leave::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mvrp::Timer::Leave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leave";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mvrp::Timer::Leave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mvrp::Timer::Leave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mvrp::Timer::Leave::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Mvrp::Timer::Leave::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mvrp::Timer::Leave::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mvrp::Timer::Leave::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mvrp::Timer::LeaveAll::LeaveAll()
    :
    y_range{YType::uint32, "_range"}
{

    yang_name = "leave-all"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Mvrp::Timer::LeaveAll::~LeaveAll()
{
}

bool Native::Interface::GigabitEthernet::Mvrp::Timer::LeaveAll::has_data() const
{
    if (is_presence_container) return true;
    return y_range.is_set;
}

bool Native::Interface::GigabitEthernet::Mvrp::Timer::LeaveAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(y_range.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mvrp::Timer::LeaveAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leave-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mvrp::Timer::LeaveAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (y_range.is_set || is_set(y_range.yfilter)) leaf_name_data.push_back(y_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mvrp::Timer::LeaveAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mvrp::Timer::LeaveAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Mvrp::Timer::LeaveAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "_range")
    {
        y_range = value;
        y_range.value_namespace = name_space;
        y_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mvrp::Timer::LeaveAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "_range")
    {
        y_range.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mvrp::Timer::LeaveAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "_range")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::AnalysisModule::AnalysisModule()
    :
    monitoring(std::make_shared<Native::Interface::GigabitEthernet::AnalysisModule::Monitoring>())
{
    monitoring->parent = this;

    yang_name = "analysis-module"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::AnalysisModule::~AnalysisModule()
{
}

bool Native::Interface::GigabitEthernet::AnalysisModule::has_data() const
{
    if (is_presence_container) return true;
    return (monitoring !=  nullptr && monitoring->has_data());
}

bool Native::Interface::GigabitEthernet::AnalysisModule::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring !=  nullptr && monitoring->has_operation());
}

std::string Native::Interface::GigabitEthernet::AnalysisModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nam:analysis-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::AnalysisModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::AnalysisModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring")
    {
        if(monitoring == nullptr)
        {
            monitoring = std::make_shared<Native::Interface::GigabitEthernet::AnalysisModule::Monitoring>();
        }
        return monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::AnalysisModule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitoring != nullptr)
    {
        _children["monitoring"] = monitoring;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::AnalysisModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::AnalysisModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::AnalysisModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::AnalysisModule::Monitoring::Monitoring()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "monitoring"; yang_parent_name = "analysis-module"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::AnalysisModule::Monitoring::~Monitoring()
{
}

bool Native::Interface::GigabitEthernet::AnalysisModule::Monitoring::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool Native::Interface::GigabitEthernet::AnalysisModule::Monitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Interface::GigabitEthernet::AnalysisModule::Monitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::AnalysisModule::Monitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::AnalysisModule::Monitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::AnalysisModule::Monitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::AnalysisModule::Monitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::AnalysisModule::Monitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::AnalysisModule::Monitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ntp::Ntp()
    :
    broadcast{YType::empty, "broadcast"}
        ,
    broadcast_option(std::make_shared<Native::Interface::GigabitEthernet::Ntp::BroadcastOption>())
{
    broadcast_option->parent = this;

    yang_name = "ntp"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ntp::~Ntp()
{
}

bool Native::Interface::GigabitEthernet::Ntp::has_data() const
{
    if (is_presence_container) return true;
    return broadcast.is_set
	|| (broadcast_option !=  nullptr && broadcast_option->has_data());
}

bool Native::Interface::GigabitEthernet::Ntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| (broadcast_option !=  nullptr && broadcast_option->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp:ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-option")
    {
        if(broadcast_option == nullptr)
        {
            broadcast_option = std::make_shared<Native::Interface::GigabitEthernet::Ntp::BroadcastOption>();
        }
        return broadcast_option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast_option != nullptr)
    {
        _children["broadcast-option"] = broadcast_option;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-option" || name == "broadcast")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ntp::BroadcastOption::BroadcastOption()
    :
    broadcast(std::make_shared<Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast>())
{
    broadcast->parent = this;

    yang_name = "broadcast-option"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ntp::BroadcastOption::~BroadcastOption()
{
}

bool Native::Interface::GigabitEthernet::Ntp::BroadcastOption::has_data() const
{
    if (is_presence_container) return true;
    return (broadcast !=  nullptr && broadcast->has_data());
}

bool Native::Interface::GigabitEthernet::Ntp::BroadcastOption::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Native::Interface::GigabitEthernet::Ntp::BroadcastOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ntp::BroadcastOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ntp::BroadcastOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast>();
        }
        return broadcast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ntp::BroadcastOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(broadcast != nullptr)
    {
        _children["broadcast"] = broadcast;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Ntp::BroadcastOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Ntp::BroadcastOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Ntp::BroadcastOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast::Broadcast()
    :
    client{YType::empty, "client"}
{

    yang_name = "broadcast"; yang_parent_name = "broadcast-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast::~Broadcast()
{
}

bool Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast::has_data() const
{
    if (is_presence_container) return true;
    return client.is_set;
}

bool Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter);
}

std::string Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Ntp::BroadcastOption::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Power()
    :
    inline_(std::make_shared<Native::Interface::GigabitEthernet::Power::Inline>())
{
    inline_->parent = this;

    yang_name = "power"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Power::~Power()
{
}

bool Native::Interface::GigabitEthernet::Power::has_data() const
{
    if (is_presence_container) return true;
    return (inline_ !=  nullptr && inline_->has_data());
}

bool Native::Interface::GigabitEthernet::Power::has_operation() const
{
    return is_set(yfilter)
	|| (inline_ !=  nullptr && inline_->has_operation());
}

std::string Native::Interface::GigabitEthernet::Power::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-power:power";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inline")
    {
        if(inline_ == nullptr)
        {
            inline_ = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline>();
        }
        return inline_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inline_ != nullptr)
    {
        _children["inline"] = inline_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Power::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Power::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Power::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inline")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::Inline()
    :
    consumption{YType::uint16, "consumption"},
    never{YType::empty, "never"}
        ,
    auto_(nullptr) // presence node
    , four_pair(std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::FourPair>())
    , police(nullptr) // presence node
    , port(std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Port>())
    , static_(nullptr) // presence node
{
    four_pair->parent = this;
    port->parent = this;

    yang_name = "inline"; yang_parent_name = "power"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Power::Inline::~Inline()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::has_data() const
{
    if (is_presence_container) return true;
    return consumption.is_set
	|| never.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_pair !=  nullptr && four_pair->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (port !=  nullptr && port->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::GigabitEthernet::Power::Inline::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(consumption.yfilter)
	|| ydk::is_set(never.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_pair !=  nullptr && four_pair->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (port !=  nullptr && port->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::GigabitEthernet::Power::Inline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (consumption.is_set || is_set(consumption.yfilter)) leaf_name_data.push_back(consumption.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "four-pair")
    {
        if(four_pair == nullptr)
        {
            four_pair = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::FourPair>();
        }
        return four_pair;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Police>();
        }
        return police;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Port>();
        }
        return port;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    if(four_pair != nullptr)
    {
        _children["four-pair"] = four_pair;
    }

    if(police != nullptr)
    {
        _children["police"] = police;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "consumption")
    {
        consumption = value;
        consumption.value_namespace = name_space;
        consumption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Power::Inline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "consumption")
    {
        consumption.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Power::Inline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "four-pair" || name == "police" || name == "port" || name == "static" || name == "consumption" || name == "never")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::Auto::Auto()
    :
    max{YType::int32, "max"}
{

    yang_name = "auto"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Power::Inline::Auto::~Auto()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::Auto::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set;
}

bool Native::Interface::GigabitEthernet::Power::Inline::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::GigabitEthernet::Power::Inline::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Power::Inline::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Power::Inline::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::FourPair::FourPair()
    :
    forced{YType::empty, "forced"}
{

    yang_name = "four-pair"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Power::Inline::FourPair::~FourPair()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::FourPair::has_data() const
{
    if (is_presence_container) return true;
    return forced.is_set;
}

bool Native::Interface::GigabitEthernet::Power::Inline::FourPair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forced.yfilter);
}

std::string Native::Interface::GigabitEthernet::Power::Inline::FourPair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-pair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::FourPair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forced.is_set || is_set(forced.yfilter)) leaf_name_data.push_back(forced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::FourPair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::FourPair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::FourPair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forced")
    {
        forced = value;
        forced.value_namespace = name_space;
        forced.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Power::Inline::FourPair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forced")
    {
        forced.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Power::Inline::FourPair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forced")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::Police::Police()
    :
    action(std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Police::Action>())
{
    action->parent = this;

    yang_name = "police"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Power::Inline::Police::~Police()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::Police::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::GigabitEthernet::Power::Inline::Police::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::GigabitEthernet::Power::Inline::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::GigabitEthernet::Power::Inline::Police::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Power::Inline::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::Police::Action::Action()
    :
    errdisable{YType::empty, "errdisable"},
    log{YType::empty, "log"}
{

    yang_name = "action"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Power::Inline::Police::Action::~Action()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::Police::Action::has_data() const
{
    if (is_presence_container) return true;
    return errdisable.is_set
	|| log.is_set;
}

bool Native::Interface::GigabitEthernet::Power::Inline::Police::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(errdisable.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Interface::GigabitEthernet::Power::Inline::Police::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::Police::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errdisable.is_set || is_set(errdisable.yfilter)) leaf_name_data.push_back(errdisable.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::Police::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::Police::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::Police::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "errdisable")
    {
        errdisable = value;
        errdisable.value_namespace = name_space;
        errdisable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Power::Inline::Police::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "errdisable")
    {
        errdisable.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Power::Inline::Police::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "errdisable" || name == "log")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::Port::Port()
    :
    poe_ha{YType::empty, "poe-ha"},
    perpetual_poe_ha{YType::empty, "perpetual-poe-ha"},
    two_event{YType::empty, "two-event"}
{

    yang_name = "port"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Power::Inline::Port::~Port()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::Port::has_data() const
{
    if (is_presence_container) return true;
    return poe_ha.is_set
	|| perpetual_poe_ha.is_set
	|| two_event.is_set;
}

bool Native::Interface::GigabitEthernet::Power::Inline::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(poe_ha.yfilter)
	|| ydk::is_set(perpetual_poe_ha.yfilter)
	|| ydk::is_set(two_event.yfilter);
}

std::string Native::Interface::GigabitEthernet::Power::Inline::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (poe_ha.is_set || is_set(poe_ha.yfilter)) leaf_name_data.push_back(poe_ha.get_name_leafdata());
    if (perpetual_poe_ha.is_set || is_set(perpetual_poe_ha.yfilter)) leaf_name_data.push_back(perpetual_poe_ha.get_name_leafdata());
    if (two_event.is_set || is_set(two_event.yfilter)) leaf_name_data.push_back(two_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "poe-ha")
    {
        poe_ha = value;
        poe_ha.value_namespace = name_space;
        poe_ha.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "perpetual-poe-ha")
    {
        perpetual_poe_ha = value;
        perpetual_poe_ha.value_namespace = name_space;
        perpetual_poe_ha.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-event")
    {
        two_event = value;
        two_event.value_namespace = name_space;
        two_event.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Power::Inline::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "poe-ha")
    {
        poe_ha.yfilter = yfilter;
    }
    if(value_path == "perpetual-poe-ha")
    {
        perpetual_poe_ha.yfilter = yfilter;
    }
    if(value_path == "two-event")
    {
        two_event.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Power::Inline::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "poe-ha" || name == "perpetual-poe-ha" || name == "two-event")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Power::Inline::Static::Static()
    :
    max{YType::int32, "max"}
{

    yang_name = "static"; yang_parent_name = "inline"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Power::Inline::Static::~Static()
{
}

bool Native::Interface::GigabitEthernet::Power::Inline::Static::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set;
}

bool Native::Interface::GigabitEthernet::Power::Inline::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::GigabitEthernet::Power::Inline::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Power::Inline::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Power::Inline::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Power::Inline::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Power::Inline::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Power::Inline::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Power::Inline::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Authentication()
    :
    control_direction{YType::enumeration, "control-direction"},
    fallback{YType::str, "fallback"},
    host_mode{YType::enumeration, "host-mode"},
    open{YType::empty, "open"},
    port_control{YType::enumeration, "port-control"},
    periodic{YType::empty, "periodic"},
    violation{YType::enumeration, "violation"}
        ,
    event(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event>())
    , order(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Order>())
    , priority(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Priority>())
    , timer(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Timer>())
{
    event->parent = this;
    order->parent = this;
    priority->parent = this;
    timer->parent = this;

    yang_name = "authentication"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::~Authentication()
{
}

bool Native::Interface::GigabitEthernet::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return control_direction.is_set
	|| fallback.is_set
	|| host_mode.is_set
	|| open.is_set
	|| port_control.is_set
	|| periodic.is_set
	|| violation.is_set
	|| (event !=  nullptr && event->has_data())
	|| (order !=  nullptr && order->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Interface::GigabitEthernet::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_direction.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| ydk::is_set(open.yfilter)
	|| ydk::is_set(port_control.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(violation.yfilter)
	|| (event !=  nullptr && event->has_operation())
	|| (order !=  nullptr && order->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Interface::GigabitEthernet::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_direction.is_set || is_set(control_direction.yfilter)) leaf_name_data.push_back(control_direction.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());
    if (open.is_set || is_set(open.yfilter)) leaf_name_data.push_back(open.get_name_leafdata());
    if (port_control.is_set || is_set(port_control.yfilter)) leaf_name_data.push_back(port_control.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (violation.is_set || is_set(violation.yfilter)) leaf_name_data.push_back(violation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event>();
        }
        return event;
    }

    if(child_yang_name == "order")
    {
        if(order == nullptr)
        {
            order = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Order>();
        }
        return order;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(event != nullptr)
    {
        _children["event"] = event;
    }

    if(order != nullptr)
    {
        _children["order"] = order;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    if(timer != nullptr)
    {
        _children["timer"] = timer;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-direction")
    {
        control_direction = value;
        control_direction.value_namespace = name_space;
        control_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open")
    {
        open = value;
        open.value_namespace = name_space;
        open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-control")
    {
        port_control = value;
        port_control.value_namespace = name_space;
        port_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "violation")
    {
        violation = value;
        violation.value_namespace = name_space;
        violation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-direction")
    {
        control_direction.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
    if(value_path == "open")
    {
        open.yfilter = yfilter;
    }
    if(value_path == "port-control")
    {
        port_control.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "violation")
    {
        violation.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "order" || name == "priority" || name == "timer" || name == "control-direction" || name == "fallback" || name == "host-mode" || name == "open" || name == "port-control" || name == "periodic" || name == "violation")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::Event()
    :
    server(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server>())
    , fail(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Fail>())
    , no_response(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::NoResponse>())
{
    server->parent = this;
    fail->parent = this;
    no_response->parent = this;

    yang_name = "event"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::~Event()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::has_data() const
{
    if (is_presence_container) return true;
    return (server !=  nullptr && server->has_data())
	|| (fail !=  nullptr && fail->has_data())
	|| (no_response !=  nullptr && no_response->has_data());
}

bool Native::Interface::GigabitEthernet::Authentication::Event::has_operation() const
{
    return is_set(yfilter)
	|| (server !=  nullptr && server->has_operation())
	|| (fail !=  nullptr && fail->has_operation())
	|| (no_response !=  nullptr && no_response->has_operation());
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server>();
        }
        return server;
    }

    if(child_yang_name == "fail")
    {
        if(fail == nullptr)
        {
            fail = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Fail>();
        }
        return fail;
    }

    if(child_yang_name == "no-response")
    {
        if(no_response == nullptr)
        {
            no_response = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::NoResponse>();
        }
        return no_response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(server != nullptr)
    {
        _children["server"] = server;
    }

    if(fail != nullptr)
    {
        _children["fail"] = fail;
    }

    if(no_response != nullptr)
    {
        _children["no-response"] = no_response;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Authentication::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "fail" || name == "no-response")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Server()
    :
    alive(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive>())
    , dead(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead>())
{
    alive->parent = this;
    dead->parent = this;

    yang_name = "server"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::~Server()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::has_data() const
{
    if (is_presence_container) return true;
    return (alive !=  nullptr && alive->has_data())
	|| (dead !=  nullptr && dead->has_data());
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::has_operation() const
{
    return is_set(yfilter)
	|| (alive !=  nullptr && alive->has_operation())
	|| (dead !=  nullptr && dead->has_operation());
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alive")
    {
        if(alive == nullptr)
        {
            alive = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive>();
        }
        return alive;
    }

    if(child_yang_name == "dead")
    {
        if(dead == nullptr)
        {
            dead = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead>();
        }
        return dead;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(alive != nullptr)
    {
        _children["alive"] = alive;
    }

    if(dead != nullptr)
    {
        _children["dead"] = dead;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alive" || name == "dead")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Alive()
    :
    action(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action>())
{
    action->parent = this;

    yang_name = "alive"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::~Alive()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action::Action()
    :
    reinitialize{YType::empty, "reinitialize"}
{

    yang_name = "action"; yang_parent_name = "alive"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action::~Action()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action::has_data() const
{
    if (is_presence_container) return true;
    return reinitialize.is_set;
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reinitialize.yfilter);
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reinitialize.is_set || is_set(reinitialize.yfilter)) leaf_name_data.push_back(reinitialize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reinitialize")
    {
        reinitialize = value;
        reinitialize.value_namespace = name_space;
        reinitialize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reinitialize")
    {
        reinitialize.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Alive::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reinitialize")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Dead()
    :
    action(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action>())
{
    action->parent = this;

    yang_name = "dead"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::~Dead()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Action()
    :
    authorize(nullptr) // presence node
    , reinitialize(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize>())
{
    reinitialize->parent = this;

    yang_name = "action"; yang_parent_name = "dead"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::~Action()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::has_data() const
{
    if (is_presence_container) return true;
    return (authorize !=  nullptr && authorize->has_data())
	|| (reinitialize !=  nullptr && reinitialize->has_data());
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation())
	|| (reinitialize !=  nullptr && reinitialize->has_operation());
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize>();
        }
        return authorize;
    }

    if(child_yang_name == "reinitialize")
    {
        if(reinitialize == nullptr)
        {
            reinitialize = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize>();
        }
        return reinitialize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorize != nullptr)
    {
        _children["authorize"] = authorize;
    }

    if(reinitialize != nullptr)
    {
        _children["reinitialize"] = reinitialize;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize" || name == "reinitialize")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"},
    voice{YType::empty, "voice"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::~Authorize()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| voice.is_set;
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(voice.yfilter);
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (voice.is_set || is_set(voice.yfilter)) leaf_name_data.push_back(voice.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voice")
    {
        voice = value;
        voice.value_namespace = name_space;
        voice.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "voice")
    {
        voice.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "voice")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::Reinitialize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "reinitialize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::~Reinitialize()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reinitialize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Server::Dead::Action::Reinitialize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::Fail::Fail()
    :
    action(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action>())
{
    action->parent = this;

    yang_name = "fail"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::Fail::~Fail()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Fail::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Fail::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::Fail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::Fail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::Fail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::Fail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::Fail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Authentication::Event::Fail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Fail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "fail"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::~Action()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::has_data() const
{
    if (is_presence_container) return true;
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorize != nullptr)
    {
        _children["authorize"] = authorize;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize::~Authorize()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Authentication::Event::Fail::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::NoResponse()
    :
    action(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action>())
{
    action->parent = this;

    yang_name = "no-response"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::~NoResponse()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["action"] = action;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Action()
    :
    authorize(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize>())
{
    authorize->parent = this;

    yang_name = "action"; yang_parent_name = "no-response"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::~Action()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::has_data() const
{
    if (is_presence_container) return true;
    return (authorize !=  nullptr && authorize->has_data());
}

bool Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::has_operation() const
{
    return is_set(yfilter)
	|| (authorize !=  nullptr && authorize->has_operation());
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorize")
    {
        if(authorize == nullptr)
        {
            authorize = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize>();
        }
        return authorize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authorize != nullptr)
    {
        _children["authorize"] = authorize;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorize")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::Authorize()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "authorize"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::~Authorize()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set;
}

bool Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Authentication::Event::NoResponse::Action::Authorize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Order::Order()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "order"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Order::~Order()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Order::has_data() const
{
    if (is_presence_container) return true;
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::GigabitEthernet::Authentication::Order::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Interface::GigabitEthernet::Authentication::Order::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "order";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Order::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Order::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Order::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Order::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Authentication::Order::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Authentication::Order::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Priority::Priority()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "priority"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Priority::~Priority()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Priority::has_data() const
{
    if (is_presence_container) return true;
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Interface::GigabitEthernet::Authentication::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Interface::GigabitEthernet::Authentication::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Authentication::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Authentication::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Timer::Timer()
    :
    restart{YType::uint16, "restart"}
        ,
    reauthenticate(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate>())
    , inactivity(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity>())
{
    reauthenticate->parent = this;
    inactivity->parent = this;

    yang_name = "timer"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Timer::~Timer()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::has_data() const
{
    if (is_presence_container) return true;
    return restart.is_set
	|| (reauthenticate !=  nullptr && reauthenticate->has_data())
	|| (inactivity !=  nullptr && inactivity->has_data());
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| (reauthenticate !=  nullptr && reauthenticate->has_operation())
	|| (inactivity !=  nullptr && inactivity->has_operation());
}

std::string Native::Interface::GigabitEthernet::Authentication::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reauthenticate")
    {
        if(reauthenticate == nullptr)
        {
            reauthenticate = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate>();
        }
        return reauthenticate;
    }

    if(child_yang_name == "inactivity")
    {
        if(inactivity == nullptr)
        {
            inactivity = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity>();
        }
        return inactivity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reauthenticate != nullptr)
    {
        _children["reauthenticate"] = reauthenticate;
    }

    if(inactivity != nullptr)
    {
        _children["inactivity"] = inactivity;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Authentication::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthenticate" || name == "inactivity" || name == "restart")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate::Reauthenticate()
    :
    value_{YType::uint16, "value"},
    server{YType::empty, "server"}
{

    yang_name = "reauthenticate"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate::~Reauthenticate()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| server.is_set;
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reauthenticate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::Reauthenticate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "server")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Inactivity()
    :
    value_(std::make_shared<Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value>())
    , server(nullptr) // presence node
{
    value_->parent = this;

    yang_name = "inactivity"; yang_parent_name = "timer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::~Inactivity()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::has_data() const
{
    if (is_presence_container) return true;
    return (value_ !=  nullptr && value_->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::has_operation() const
{
    return is_set(yfilter)
	|| (value_ !=  nullptr && value_->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inactivity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value>();
        }
        return value_;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(value_ != nullptr)
    {
        _children["value"] = value_;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "server")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value::Value()
    :
    value_{YType::uint16, "value"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "value"; yang_parent_name = "inactivity"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value::~Value()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| dynamic.is_set;
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Value::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "dynamic")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Server::Server()
    :
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "server"; yang_parent_name = "inactivity"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Server::~Server()
{
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Server::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set;
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Authentication::Timer::Inactivity::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mab::Mab()
    :
    eap{YType::empty, "eap"}
{

    yang_name = "mab"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Mab::~Mab()
{
}

bool Native::Interface::GigabitEthernet::Mab::has_data() const
{
    if (is_presence_container) return true;
    return eap.is_set;
}

bool Native::Interface::GigabitEthernet::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eap.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap.is_set || is_set(eap.yfilter)) leaf_name_data.push_back(eap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eap")
    {
        eap = value;
        eap.value_namespace = name_space;
        eap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eap")
    {
        eap.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SpanningTree::SpanningTree()
    :
    bpdufilter{YType::enumeration, "bpdufilter"},
    cost{YType::uint32, "cost"},
    guard{YType::enumeration, "guard"},
    link_type{YType::enumeration, "link-type"},
    port_priority{YType::uint8, "port-priority"}
        ,
    bpduguard(std::make_shared<Native::Interface::GigabitEthernet::SpanningTree::Bpduguard>())
    , portfast(nullptr) // presence node
    , vlan(this, {"vlan_ids"})
    , loopguard(std::make_shared<Native::Interface::GigabitEthernet::SpanningTree::Loopguard>())
    , mst(std::make_shared<Native::Interface::GigabitEthernet::SpanningTree::Mst>())
{
    bpduguard->parent = this;
    loopguard->parent = this;
    mst->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::GigabitEthernet::SpanningTree::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return bpdufilter.is_set
	|| cost.is_set
	|| guard.is_set
	|| link_type.is_set
	|| port_priority.is_set
	|| (bpduguard !=  nullptr && bpduguard->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data());
}

bool Native::Interface::GigabitEthernet::SpanningTree::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bpdufilter.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(guard.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (bpduguard !=  nullptr && bpduguard->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation());
}

std::string Native::Interface::GigabitEthernet::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bpdufilter.is_set || is_set(bpdufilter.yfilter)) leaf_name_data.push_back(bpdufilter.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (guard.is_set || is_set(guard.yfilter)) leaf_name_data.push_back(guard.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpduguard")
    {
        if(bpduguard == nullptr)
        {
            bpduguard = std::make_shared<Native::Interface::GigabitEthernet::SpanningTree::Bpduguard>();
        }
        return bpduguard;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::Interface::GigabitEthernet::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::SpanningTree::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    if(child_yang_name == "loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::Interface::GigabitEthernet::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::Interface::GigabitEthernet::SpanningTree::Mst>();
        }
        return mst;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bpduguard != nullptr)
    {
        _children["bpduguard"] = bpduguard;
    }

    if(portfast != nullptr)
    {
        _children["portfast"] = portfast;
    }

    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(loopguard != nullptr)
    {
        _children["loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        _children["mst"] = mst;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bpdufilter")
    {
        bpdufilter = value;
        bpdufilter.value_namespace = name_space;
        bpdufilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guard")
    {
        guard = value;
        guard.value_namespace = name_space;
        guard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bpdufilter")
    {
        bpdufilter.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "guard")
    {
        guard.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpduguard" || name == "portfast" || name == "vlan" || name == "loopguard" || name == "mst" || name == "bpdufilter" || name == "cost" || name == "guard" || name == "link-type" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SpanningTree::Bpduguard::Bpduguard()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{

    yang_name = "bpduguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SpanningTree::Bpduguard::~Bpduguard()
{
}

bool Native::Interface::GigabitEthernet::SpanningTree::Bpduguard::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| enable.is_set;
}

bool Native::Interface::GigabitEthernet::SpanningTree::Bpduguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::GigabitEthernet::SpanningTree::Bpduguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpduguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SpanningTree::Bpduguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SpanningTree::Bpduguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SpanningTree::Bpduguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::SpanningTree::Bpduguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SpanningTree::Bpduguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SpanningTree::Bpduguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "enable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SpanningTree::Portfast::Portfast()
    :
    disable{YType::empty, "disable"},
    trunk{YType::empty, "trunk"},
    edge{YType::empty, "edge"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::SpanningTree::Portfast::~Portfast()
{
}

bool Native::Interface::GigabitEthernet::SpanningTree::Portfast::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| trunk.is_set
	|| edge.is_set;
}

bool Native::Interface::GigabitEthernet::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(trunk.yfilter)
	|| ydk::is_set(edge.yfilter);
}

std::string Native::Interface::GigabitEthernet::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (trunk.is_set || is_set(trunk.yfilter)) leaf_name_data.push_back(trunk.get_name_leafdata());
    if (edge.is_set || is_set(edge.yfilter)) leaf_name_data.push_back(edge.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk")
    {
        trunk = value;
        trunk.value_namespace = name_space;
        trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "edge")
    {
        edge = value;
        edge.value_namespace = name_space;
        edge.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "trunk")
    {
        trunk.yfilter = yfilter;
    }
    if(value_path == "edge")
    {
        edge.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "trunk" || name == "edge")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SpanningTree::Vlan::Vlan()
    :
    vlan_ids{YType::str, "vlan-ids"},
    cost{YType::uint32, "cost"},
    port_priority{YType::uint16, "port-priority"}
{

    yang_name = "vlan"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SpanningTree::Vlan::~Vlan()
{
}

bool Native::Interface::GigabitEthernet::SpanningTree::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return vlan_ids.is_set
	|| cost.is_set
	|| port_priority.is_set;
}

bool Native::Interface::GigabitEthernet::SpanningTree::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_ids.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(port_priority.yfilter);
}

std::string Native::Interface::GigabitEthernet::SpanningTree::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(vlan_ids, "vlan-ids");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SpanningTree::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_ids.is_set || is_set(vlan_ids.yfilter)) leaf_name_data.push_back(vlan_ids.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SpanningTree::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SpanningTree::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::SpanningTree::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-ids")
    {
        vlan_ids = value;
        vlan_ids.value_namespace = name_space;
        vlan_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SpanningTree::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-ids")
    {
        vlan_ids.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SpanningTree::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-ids" || name == "cost" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "loopguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::Interface::GigabitEthernet::SpanningTree::Loopguard::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool Native::Interface::GigabitEthernet::SpanningTree::Loopguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::GigabitEthernet::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SpanningTree::Loopguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::SpanningTree::Loopguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SpanningTree::Loopguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SpanningTree::Loopguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SpanningTree::Mst::Mst()
    :
    pre_standard{YType::empty, "pre-standard"}
        ,
    mst_instance(this, {"instance"})
{

    yang_name = "mst"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SpanningTree::Mst::~Mst()
{
}

bool Native::Interface::GigabitEthernet::SpanningTree::Mst::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mst_instance.len(); index++)
    {
        if(mst_instance[index]->has_data())
            return true;
    }
    return pre_standard.is_set;
}

bool Native::Interface::GigabitEthernet::SpanningTree::Mst::has_operation() const
{
    for (std::size_t index=0; index<mst_instance.len(); index++)
    {
        if(mst_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pre_standard.yfilter);
}

std::string Native::Interface::GigabitEthernet::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SpanningTree::Mst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_standard.is_set || is_set(pre_standard.yfilter)) leaf_name_data.push_back(pre_standard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mst-instance")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::SpanningTree::Mst::MstInstance>();
        ent_->parent = this;
        mst_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mst_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::SpanningTree::Mst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-standard")
    {
        pre_standard = value;
        pre_standard.value_namespace = name_space;
        pre_standard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SpanningTree::Mst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-standard")
    {
        pre_standard.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SpanningTree::Mst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst-instance" || name == "pre-standard")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SpanningTree::Mst::MstInstance::MstInstance()
    :
    instance{YType::str, "instance"},
    cost{YType::uint32, "cost"},
    port_priority{YType::uint16, "port-priority"}
{

    yang_name = "mst-instance"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SpanningTree::Mst::MstInstance::~MstInstance()
{
}

bool Native::Interface::GigabitEthernet::SpanningTree::Mst::MstInstance::has_data() const
{
    if (is_presence_container) return true;
    return instance.is_set
	|| cost.is_set
	|| port_priority.is_set;
}

bool Native::Interface::GigabitEthernet::SpanningTree::Mst::MstInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(port_priority.yfilter);
}

std::string Native::Interface::GigabitEthernet::SpanningTree::Mst::MstInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst-instance";
    ADD_KEY_TOKEN(instance, "instance");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SpanningTree::Mst::MstInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SpanningTree::Mst::MstInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SpanningTree::Mst::MstInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::SpanningTree::Mst::MstInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SpanningTree::Mst::MstInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SpanningTree::Mst::MstInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "cost" || name == "port-priority")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Auto::Auto()
    :
    qos(std::make_shared<Native::Interface::GigabitEthernet::Auto::Qos>())
{
    qos->parent = this;

    yang_name = "auto"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Auto::~Auto()
{
}

bool Native::Interface::GigabitEthernet::Auto::has_data() const
{
    if (is_presence_container) return true;
    return (qos !=  nullptr && qos->has_data());
}

bool Native::Interface::GigabitEthernet::Auto::has_operation() const
{
    return is_set(yfilter)
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Interface::GigabitEthernet::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Interface::GigabitEthernet::Auto::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(qos != nullptr)
    {
        _children["qos"] = qos;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Auto::Qos::Qos()
    :
    classify(nullptr) // presence node
    , trust(nullptr) // presence node
    , video(std::make_shared<Native::Interface::GigabitEthernet::Auto::Qos::Video>())
    , voip(nullptr) // presence node
{
    video->parent = this;

    yang_name = "qos"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Auto::Qos::~Qos()
{
}

bool Native::Interface::GigabitEthernet::Auto::Qos::has_data() const
{
    if (is_presence_container) return true;
    return (classify !=  nullptr && classify->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (video !=  nullptr && video->has_data())
	|| (voip !=  nullptr && voip->has_data());
}

bool Native::Interface::GigabitEthernet::Auto::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (classify !=  nullptr && classify->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (video !=  nullptr && video->has_operation())
	|| (voip !=  nullptr && voip->has_operation());
}

std::string Native::Interface::GigabitEthernet::Auto::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Auto::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Auto::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classify")
    {
        if(classify == nullptr)
        {
            classify = std::make_shared<Native::Interface::GigabitEthernet::Auto::Qos::Classify>();
        }
        return classify;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::GigabitEthernet::Auto::Qos::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "video")
    {
        if(video == nullptr)
        {
            video = std::make_shared<Native::Interface::GigabitEthernet::Auto::Qos::Video>();
        }
        return video;
    }

    if(child_yang_name == "voip")
    {
        if(voip == nullptr)
        {
            voip = std::make_shared<Native::Interface::GigabitEthernet::Auto::Qos::Voip>();
        }
        return voip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Auto::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(classify != nullptr)
    {
        _children["classify"] = classify;
    }

    if(trust != nullptr)
    {
        _children["trust"] = trust;
    }

    if(video != nullptr)
    {
        _children["video"] = video;
    }

    if(voip != nullptr)
    {
        _children["voip"] = voip;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Auto::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Auto::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Auto::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classify" || name == "trust" || name == "video" || name == "voip")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Auto::Qos::Classify::Classify()
    :
    police{YType::empty, "police"}
{

    yang_name = "classify"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Auto::Qos::Classify::~Classify()
{
}

bool Native::Interface::GigabitEthernet::Auto::Qos::Classify::has_data() const
{
    if (is_presence_container) return true;
    return police.is_set;
}

bool Native::Interface::GigabitEthernet::Auto::Qos::Classify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(police.yfilter);
}

std::string Native::Interface::GigabitEthernet::Auto::Qos::Classify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Auto::Qos::Classify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (police.is_set || is_set(police.yfilter)) leaf_name_data.push_back(police.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Auto::Qos::Classify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Auto::Qos::Classify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Auto::Qos::Classify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "police")
    {
        police = value;
        police.value_namespace = name_space;
        police.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Auto::Qos::Classify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "police")
    {
        police.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Auto::Qos::Classify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Auto::Qos::Trust::Trust()
    :
    cos{YType::empty, "cos"},
    dscp{YType::empty, "dscp"}
{

    yang_name = "trust"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Auto::Qos::Trust::~Trust()
{
}

bool Native::Interface::GigabitEthernet::Auto::Qos::Trust::has_data() const
{
    if (is_presence_container) return true;
    return cos.is_set
	|| dscp.is_set;
}

bool Native::Interface::GigabitEthernet::Auto::Qos::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::Interface::GigabitEthernet::Auto::Qos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Auto::Qos::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Auto::Qos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Auto::Qos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Auto::Qos::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Auto::Qos::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Auto::Qos::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos" || name == "dscp")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Auto::Qos::Video::Video()
    :
    cts{YType::empty, "cts"},
    ip_camera{YType::empty, "ip-camera"},
    media_player{YType::empty, "media-player"}
{

    yang_name = "video"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Auto::Qos::Video::~Video()
{
}

bool Native::Interface::GigabitEthernet::Auto::Qos::Video::has_data() const
{
    if (is_presence_container) return true;
    return cts.is_set
	|| ip_camera.is_set
	|| media_player.is_set;
}

bool Native::Interface::GigabitEthernet::Auto::Qos::Video::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cts.yfilter)
	|| ydk::is_set(ip_camera.yfilter)
	|| ydk::is_set(media_player.yfilter);
}

std::string Native::Interface::GigabitEthernet::Auto::Qos::Video::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "video";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Auto::Qos::Video::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cts.is_set || is_set(cts.yfilter)) leaf_name_data.push_back(cts.get_name_leafdata());
    if (ip_camera.is_set || is_set(ip_camera.yfilter)) leaf_name_data.push_back(ip_camera.get_name_leafdata());
    if (media_player.is_set || is_set(media_player.yfilter)) leaf_name_data.push_back(media_player.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Auto::Qos::Video::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Auto::Qos::Video::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Auto::Qos::Video::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cts")
    {
        cts = value;
        cts.value_namespace = name_space;
        cts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-camera")
    {
        ip_camera = value;
        ip_camera.value_namespace = name_space;
        ip_camera.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-player")
    {
        media_player = value;
        media_player.value_namespace = name_space;
        media_player.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Auto::Qos::Video::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cts")
    {
        cts.yfilter = yfilter;
    }
    if(value_path == "ip-camera")
    {
        ip_camera.yfilter = yfilter;
    }
    if(value_path == "media-player")
    {
        media_player.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Auto::Qos::Video::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts" || name == "ip-camera" || name == "media-player")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Auto::Qos::Voip::Voip()
    :
    cisco_phone{YType::empty, "cisco-phone"},
    cisco_softphone{YType::empty, "cisco-softphone"},
    trust{YType::empty, "trust"}
{

    yang_name = "voip"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Auto::Qos::Voip::~Voip()
{
}

bool Native::Interface::GigabitEthernet::Auto::Qos::Voip::has_data() const
{
    if (is_presence_container) return true;
    return cisco_phone.is_set
	|| cisco_softphone.is_set
	|| trust.is_set;
}

bool Native::Interface::GigabitEthernet::Auto::Qos::Voip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco_phone.yfilter)
	|| ydk::is_set(cisco_softphone.yfilter)
	|| ydk::is_set(trust.yfilter);
}

std::string Native::Interface::GigabitEthernet::Auto::Qos::Voip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "voip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Auto::Qos::Voip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_phone.is_set || is_set(cisco_phone.yfilter)) leaf_name_data.push_back(cisco_phone.get_name_leafdata());
    if (cisco_softphone.is_set || is_set(cisco_softphone.yfilter)) leaf_name_data.push_back(cisco_softphone.get_name_leafdata());
    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Auto::Qos::Voip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Auto::Qos::Voip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Auto::Qos::Voip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco-phone")
    {
        cisco_phone = value;
        cisco_phone.value_namespace = name_space;
        cisco_phone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-softphone")
    {
        cisco_softphone = value;
        cisco_softphone.value_namespace = name_space;
        cisco_softphone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Auto::Qos::Voip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco-phone")
    {
        cisco_phone.yfilter = yfilter;
    }
    if(value_path == "cisco-softphone")
    {
        cisco_softphone.yfilter = yfilter;
    }
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Auto::Qos::Voip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-phone" || name == "cisco-softphone" || name == "trust")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Datalink::Datalink()
    :
    flow(std::make_shared<Native::Interface::GigabitEthernet::Datalink::Flow>())
{
    flow->parent = this;

    yang_name = "datalink"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Datalink::~Datalink()
{
}

bool Native::Interface::GigabitEthernet::Datalink::has_data() const
{
    if (is_presence_container) return true;
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Interface::GigabitEthernet::Datalink::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Interface::GigabitEthernet::Datalink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:datalink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Datalink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Datalink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::GigabitEthernet::Datalink::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Datalink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow != nullptr)
    {
        _children["flow"] = flow;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Datalink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Datalink::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Datalink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Datalink::Flow::Flow()
    :
    monitor(nullptr) // presence node
{

    yang_name = "flow"; yang_parent_name = "datalink"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Datalink::Flow::~Flow()
{
}

bool Native::Interface::GigabitEthernet::Datalink::Flow::has_data() const
{
    if (is_presence_container) return true;
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Interface::GigabitEthernet::Datalink::Flow::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Interface::GigabitEthernet::Datalink::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Datalink::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Datalink::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::GigabitEthernet::Datalink::Flow::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Datalink::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(monitor != nullptr)
    {
        _children["monitor"] = monitor;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Datalink::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Datalink::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Datalink::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::Monitor()
    :
    user_defined_flow{YType::str, "User-defined-flow"},
    input_output{YType::enumeration, "input-output"}
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::has_data() const
{
    if (is_presence_container) return true;
    return user_defined_flow.is_set
	|| input_output.is_set;
}

bool Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user_defined_flow.yfilter)
	|| ydk::is_set(input_output.yfilter);
}

std::string Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_defined_flow.is_set || is_set(user_defined_flow.yfilter)) leaf_name_data.push_back(user_defined_flow.get_name_leafdata());
    if (input_output.is_set || is_set(input_output.yfilter)) leaf_name_data.push_back(input_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "User-defined-flow")
    {
        user_defined_flow = value;
        user_defined_flow.value_namespace = name_space;
        user_defined_flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-output")
    {
        input_output = value;
        input_output.value_namespace = name_space;
        input_output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "User-defined-flow")
    {
        user_defined_flow.yfilter = yfilter;
    }
    if(value_path == "input-output")
    {
        input_output.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "User-defined-flow" || name == "input-output")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Energywise::Energywise()
    :
    activitycheck{YType::empty, "activitycheck"}
        ,
    level(this, {"range"})
{

    yang_name = "energywise"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Energywise::~Energywise()
{
}

bool Native::Interface::GigabitEthernet::Energywise::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    return activitycheck.is_set;
}

bool Native::Interface::GigabitEthernet::Energywise::has_operation() const
{
    for (std::size_t index=0; index<level.len(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(activitycheck.yfilter);
}

std::string Native::Interface::GigabitEthernet::Energywise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:energywise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Energywise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activitycheck.is_set || is_set(activitycheck.yfilter)) leaf_name_data.push_back(activitycheck.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Energywise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Energywise::Level>();
        ent_->parent = this;
        level.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Energywise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : level.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Energywise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activitycheck")
    {
        activitycheck = value;
        activitycheck.value_namespace = name_space;
        activitycheck.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Energywise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activitycheck")
    {
        activitycheck.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Energywise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "activitycheck")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Energywise::Level::Level()
    :
    range{YType::uint8, "range"}
        ,
    recurrence(std::make_shared<Native::Interface::GigabitEthernet::Energywise::Level::Recurrence>())
{
    recurrence->parent = this;

    yang_name = "level"; yang_parent_name = "energywise"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Energywise::Level::~Level()
{
}

bool Native::Interface::GigabitEthernet::Energywise::Level::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (recurrence !=  nullptr && recurrence->has_data());
}

bool Native::Interface::GigabitEthernet::Energywise::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (recurrence !=  nullptr && recurrence->has_operation());
}

std::string Native::Interface::GigabitEthernet::Energywise::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Energywise::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Energywise::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recurrence")
    {
        if(recurrence == nullptr)
        {
            recurrence = std::make_shared<Native::Interface::GigabitEthernet::Energywise::Level::Recurrence>();
        }
        return recurrence;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Energywise::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(recurrence != nullptr)
    {
        _children["recurrence"] = recurrence;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Energywise::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Energywise::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Energywise::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recurrence" || name == "range")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Recurrence()
    :
    importance(this, {"range"})
{

    yang_name = "recurrence"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::~Recurrence()
{
}

bool Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<importance.len(); index++)
    {
        if(importance[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::has_operation() const
{
    for (std::size_t index=0; index<importance.len(); index++)
    {
        if(importance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recurrence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "importance")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance>();
        ent_->parent = this;
        importance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : importance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "importance")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::Importance()
    :
    range{YType::uint16, "range"}
        ,
    at(std::make_shared<Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At>())
{
    at->parent = this;

    yang_name = "importance"; yang_parent_name = "recurrence"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::~Importance()
{
}

bool Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| (at !=  nullptr && at->has_data());
}

bool Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (at !=  nullptr && at->has_operation());
}

std::string Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "importance";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "at")
    {
        if(at == nullptr)
        {
            at = std::make_shared<Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At>();
        }
        return at;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(at != nullptr)
    {
        _children["at"] = at;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "at" || name == "range")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At::At()
    :
    minute{YType::str, "minute"},
    hour{YType::str, "hour"},
    day{YType::str, "day"},
    month{YType::str, "month"},
    weekday{YType::str, "weekday"}
{

    yang_name = "at"; yang_parent_name = "importance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At::~At()
{
}

bool Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At::has_data() const
{
    if (is_presence_container) return true;
    return minute.is_set
	|| hour.is_set
	|| day.is_set
	|| month.is_set
	|| weekday.is_set;
}

bool Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minute.yfilter)
	|| ydk::is_set(hour.yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(weekday.yfilter);
}

std::string Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "at";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minute.is_set || is_set(minute.yfilter)) leaf_name_data.push_back(minute.get_name_leafdata());
    if (hour.is_set || is_set(hour.yfilter)) leaf_name_data.push_back(hour.get_name_leafdata());
    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (weekday.is_set || is_set(weekday.yfilter)) leaf_name_data.push_back(weekday.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minute")
    {
        minute = value;
        minute.value_namespace = name_space;
        minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour")
    {
        hour = value;
        hour.value_namespace = name_space;
        hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weekday")
    {
        weekday = value;
        weekday.value_namespace = name_space;
        weekday.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minute")
    {
        minute.yfilter = yfilter;
    }
    if(value_path == "hour")
    {
        hour.yfilter = yfilter;
    }
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "weekday")
    {
        weekday.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Energywise::Level::Recurrence::Importance::At::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute" || name == "hour" || name == "day" || name == "month" || name == "weekday")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Location::Location()
    :
    civic_location_id(std::make_shared<Native::Interface::GigabitEthernet::Location::CivicLocationId>())
{
    civic_location_id->parent = this;

    yang_name = "location"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Location::~Location()
{
}

bool Native::Interface::GigabitEthernet::Location::has_data() const
{
    if (is_presence_container) return true;
    return (civic_location_id !=  nullptr && civic_location_id->has_data());
}

bool Native::Interface::GigabitEthernet::Location::has_operation() const
{
    return is_set(yfilter)
	|| (civic_location_id !=  nullptr && civic_location_id->has_operation());
}

std::string Native::Interface::GigabitEthernet::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "civic-location-id")
    {
        if(civic_location_id == nullptr)
        {
            civic_location_id = std::make_shared<Native::Interface::GigabitEthernet::Location::CivicLocationId>();
        }
        return civic_location_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(civic_location_id != nullptr)
    {
        _children["civic-location-id"] = civic_location_id;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "civic-location-id")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Location::CivicLocationId::CivicLocationId()
    :
    location_identifier{YType::str, "location-identifier"}
        ,
    host(nullptr) // presence node
    , none(nullptr) // presence node
{

    yang_name = "civic-location-id"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Location::CivicLocationId::~CivicLocationId()
{
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::has_data() const
{
    if (is_presence_container) return true;
    return location_identifier.is_set
	|| (host !=  nullptr && host->has_data())
	|| (none !=  nullptr && none->has_data());
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_identifier.yfilter)
	|| (host !=  nullptr && host->has_operation())
	|| (none !=  nullptr && none->has_operation());
}

std::string Native::Interface::GigabitEthernet::Location::CivicLocationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "civic-location-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Location::CivicLocationId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_identifier.is_set || is_set(location_identifier.yfilter)) leaf_name_data.push_back(location_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Location::CivicLocationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Interface::GigabitEthernet::Location::CivicLocationId::Host>();
        }
        return host;
    }

    if(child_yang_name == "none")
    {
        if(none == nullptr)
        {
            none = std::make_shared<Native::Interface::GigabitEthernet::Location::CivicLocationId::None>();
        }
        return none;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Location::CivicLocationId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(host != nullptr)
    {
        _children["host"] = host;
    }

    if(none != nullptr)
    {
        _children["none"] = none;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Location::CivicLocationId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-identifier")
    {
        location_identifier = value;
        location_identifier.value_namespace = name_space;
        location_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Location::CivicLocationId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-identifier")
    {
        location_identifier.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "none" || name == "location-identifier")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::Host()
    :
    port_location{YType::str, "port-location"}
{

    yang_name = "host"; yang_parent_name = "civic-location-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::~Host()
{
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::has_data() const
{
    if (is_presence_container) return true;
    return port_location.is_set;
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_location.yfilter);
}

std::string Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_location.is_set || is_set(port_location.yfilter)) leaf_name_data.push_back(port_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-location")
    {
        port_location = value;
        port_location.value_namespace = name_space;
        port_location.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-location")
    {
        port_location.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-location")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Location::CivicLocationId::None::None()
    :
    port_location{YType::str, "port-location"}
{

    yang_name = "none"; yang_parent_name = "civic-location-id"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Location::CivicLocationId::None::~None()
{
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::None::has_data() const
{
    if (is_presence_container) return true;
    return port_location.is_set;
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::None::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_location.yfilter);
}

std::string Native::Interface::GigabitEthernet::Location::CivicLocationId::None::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "none";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Location::CivicLocationId::None::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_location.is_set || is_set(port_location.yfilter)) leaf_name_data.push_back(port_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Location::CivicLocationId::None::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Location::CivicLocationId::None::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Location::CivicLocationId::None::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-location")
    {
        port_location = value;
        port_location.value_namespace = name_space;
        port_location.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Location::CivicLocationId::None::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-location")
    {
        port_location.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Location::CivicLocationId::None::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-location")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mac::Mac()
    :
    access_group(this, {"direction"})
{

    yang_name = "mac"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Mac::~Mac()
{
}

bool Native::Interface::GigabitEthernet::Mac::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Mac::has_operation() const
{
    for (std::size_t index=0; index<access_group.len(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Mac::AccessGroup>();
        ent_->parent = this;
        access_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Mac::AccessGroup::AccessGroup()
    :
    direction{YType::enumeration, "direction"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "access-group"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Mac::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::GigabitEthernet::Mac::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| acl_name.is_set;
}

bool Native::Interface::GigabitEthernet::Mac::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Native::Interface::GigabitEthernet::Mac::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Mac::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Mac::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Mac::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Mac::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Mac::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Mac::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "acl-name")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Macro::Macro()
    :
    description{YType::str, "description"}
        ,
    auto_(std::make_shared<Native::Interface::GigabitEthernet::Macro::Auto>())
{
    auto_->parent = this;

    yang_name = "macro"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Macro::~Macro()
{
}

bool Native::Interface::GigabitEthernet::Macro::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| (auto_ !=  nullptr && auto_->has_data());
}

bool Native::Interface::GigabitEthernet::Macro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation());
}

std::string Native::Interface::GigabitEthernet::Macro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Macro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Macro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::GigabitEthernet::Macro::Auto>();
        }
        return auto_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Macro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Macro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Macro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Macro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "description")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Macro::Auto::Auto()
    :
    processing{YType::boolean, "processing"}
        ,
    port(std::make_shared<Native::Interface::GigabitEthernet::Macro::Auto::Port>())
    , control(std::make_shared<Native::Interface::GigabitEthernet::Macro::Auto::Control>())
{
    port->parent = this;
    control->parent = this;

    yang_name = "auto"; yang_parent_name = "macro"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Macro::Auto::~Auto()
{
}

bool Native::Interface::GigabitEthernet::Macro::Auto::has_data() const
{
    if (is_presence_container) return true;
    return processing.is_set
	|| (port !=  nullptr && port->has_data())
	|| (control !=  nullptr && control->has_data());
}

bool Native::Interface::GigabitEthernet::Macro::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processing.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (control !=  nullptr && control->has_operation());
}

std::string Native::Interface::GigabitEthernet::Macro::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Macro::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processing.is_set || is_set(processing.yfilter)) leaf_name_data.push_back(processing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Macro::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::GigabitEthernet::Macro::Auto::Port>();
        }
        return port;
    }

    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::GigabitEthernet::Macro::Auto::Control>();
        }
        return control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Macro::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    if(control != nullptr)
    {
        _children["control"] = control;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Macro::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processing")
    {
        processing = value;
        processing.value_namespace = name_space;
        processing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Macro::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processing")
    {
        processing.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Macro::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "control" || name == "processing")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Macro::Auto::Port::Port()
    :
    sticky{YType::empty, "sticky"}
{

    yang_name = "port"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Macro::Auto::Port::~Port()
{
}

bool Native::Interface::GigabitEthernet::Macro::Auto::Port::has_data() const
{
    if (is_presence_container) return true;
    return sticky.is_set;
}

bool Native::Interface::GigabitEthernet::Macro::Auto::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sticky.yfilter);
}

std::string Native::Interface::GigabitEthernet::Macro::Auto::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Macro::Auto::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Macro::Auto::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Macro::Auto::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Macro::Auto::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Macro::Auto::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Macro::Auto::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sticky")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Macro::Auto::Control::Control()
    :
    device(std::make_shared<Native::Interface::GigabitEthernet::Macro::Auto::Control::Device>())
{
    device->parent = this;

    yang_name = "control"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Macro::Auto::Control::~Control()
{
}

bool Native::Interface::GigabitEthernet::Macro::Auto::Control::has_data() const
{
    if (is_presence_container) return true;
    return (device !=  nullptr && device->has_data());
}

bool Native::Interface::GigabitEthernet::Macro::Auto::Control::has_operation() const
{
    return is_set(yfilter)
	|| (device !=  nullptr && device->has_operation());
}

std::string Native::Interface::GigabitEthernet::Macro::Auto::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Macro::Auto::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Macro::Auto::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device")
    {
        if(device == nullptr)
        {
            device = std::make_shared<Native::Interface::GigabitEthernet::Macro::Auto::Control::Device>();
        }
        return device;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Macro::Auto::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(device != nullptr)
    {
        _children["device"] = device;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Macro::Auto::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Macro::Auto::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Macro::Auto::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Macro::Auto::Control::Device::Device()
    :
    phone{YType::empty, "phone"}
{

    yang_name = "device"; yang_parent_name = "control"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Macro::Auto::Control::Device::~Device()
{
}

bool Native::Interface::GigabitEthernet::Macro::Auto::Control::Device::has_data() const
{
    if (is_presence_container) return true;
    return phone.is_set;
}

bool Native::Interface::GigabitEthernet::Macro::Auto::Control::Device::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(phone.yfilter);
}

std::string Native::Interface::GigabitEthernet::Macro::Auto::Control::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Macro::Auto::Control::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (phone.is_set || is_set(phone.yfilter)) leaf_name_data.push_back(phone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Macro::Auto::Control::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Macro::Auto::Control::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Macro::Auto::Control::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "phone")
    {
        phone = value;
        phone.value_namespace = name_space;
        phone.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Macro::Auto::Control::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "phone")
    {
        phone.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Macro::Auto::Control::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "phone")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::DualActive::DualActive()
    :
    fast_hello{YType::empty, "fast-hello"}
{

    yang_name = "dual-active"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::DualActive::~DualActive()
{
}

bool Native::Interface::GigabitEthernet::DualActive::has_data() const
{
    if (is_presence_container) return true;
    return fast_hello.is_set;
}

bool Native::Interface::GigabitEthernet::DualActive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fast_hello.yfilter);
}

std::string Native::Interface::GigabitEthernet::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:dual-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::DualActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_hello.is_set || is_set(fast_hello.yfilter)) leaf_name_data.push_back(fast_hello.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::DualActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-hello")
    {
        fast_hello = value;
        fast_hello.value_namespace = name_space;
        fast_hello.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::DualActive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-hello")
    {
        fast_hello.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::DualActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-hello")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::LoadBalancing::LoadBalancing()
    :
    flow{YType::empty, "flow"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "load-balancing"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::LoadBalancing::~LoadBalancing()
{
}

bool Native::Interface::GigabitEthernet::LoadBalancing::has_data() const
{
    if (is_presence_container) return true;
    return flow.is_set
	|| vlan.is_set;
}

bool Native::Interface::GigabitEthernet::LoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::GigabitEthernet::LoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::LoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::LoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::LoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::LoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow")
    {
        flow = value;
        flow.value_namespace = name_space;
        flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::LoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow")
    {
        flow.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::LoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow" || name == "vlan")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::VlanRange::VlanRange()
    :
    id{YType::str, "id"}
        ,
    service_policy(std::make_shared<Native::Interface::GigabitEthernet::VlanRange::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "vlan-range"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::VlanRange::~VlanRange()
{
}

bool Native::Interface::GigabitEthernet::VlanRange::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::GigabitEthernet::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::GigabitEthernet::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:vlan-range";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::GigabitEthernet::VlanRange::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy" || name == "id")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::VlanRange::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"},
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "vlan-range"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::VlanRange::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::GigabitEthernet::VlanRange::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::GigabitEthernet::VlanRange::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::GigabitEthernet::VlanRange::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::VlanRange::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::VlanRange::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::VlanRange::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::VlanRange::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::VlanRange::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::VlanRange::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switch::Switch()
    :
    virtual_(std::make_shared<Native::Interface::GigabitEthernet::Switch::Virtual>())
{
    virtual_->parent = this;

    yang_name = "switch"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switch::~Switch()
{
}

bool Native::Interface::GigabitEthernet::Switch::has_data() const
{
    if (is_presence_container) return true;
    return (virtual_ !=  nullptr && virtual_->has_data());
}

bool Native::Interface::GigabitEthernet::Switch::has_operation() const
{
    return is_set(yfilter)
	|| (virtual_ !=  nullptr && virtual_->has_operation());
}

std::string Native::Interface::GigabitEthernet::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual")
    {
        if(virtual_ == nullptr)
        {
            virtual_ = std::make_shared<Native::Interface::GigabitEthernet::Switch::Virtual>();
        }
        return virtual_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(virtual_ != nullptr)
    {
        _children["virtual"] = virtual_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Switch::Virtual::Virtual()
    :
    link{YType::uint8, "link"}
{

    yang_name = "virtual"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Switch::Virtual::~Virtual()
{
}

bool Native::Interface::GigabitEthernet::Switch::Virtual::has_data() const
{
    if (is_presence_container) return true;
    return link.is_set;
}

bool Native::Interface::GigabitEthernet::Switch::Virtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link.yfilter);
}

std::string Native::Interface::GigabitEthernet::Switch::Virtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Switch::Virtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Switch::Virtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Switch::Virtual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Switch::Virtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Switch::Virtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Switch::Virtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SrrQueue::SrrQueue()
    :
    bandwidth(std::make_shared<Native::Interface::GigabitEthernet::SrrQueue::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "srr-queue"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SrrQueue::~SrrQueue()
{
}

bool Native::Interface::GigabitEthernet::SrrQueue::has_data() const
{
    if (is_presence_container) return true;
    return (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::GigabitEthernet::SrrQueue::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::GigabitEthernet::SrrQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:srr-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SrrQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SrrQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::GigabitEthernet::SrrQueue::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SrrQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::SrrQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::SrrQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::SrrQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Bandwidth()
    :
    shape(std::make_shared<Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape>())
    , share(std::make_shared<Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share>())
{
    shape->parent = this;
    share->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "srr-queue"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (shape !=  nullptr && shape->has_data())
	|| (share !=  nullptr && share->has_data());
}

bool Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (shape !=  nullptr && shape->has_operation())
	|| (share !=  nullptr && share->has_operation());
}

std::string Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "share")
    {
        if(share == nullptr)
        {
            share = std::make_shared<Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share>();
        }
        return share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(shape != nullptr)
    {
        _children["shape"] = shape;
    }

    if(share != nullptr)
    {
        _children["share"] = share;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shape" || name == "share")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape::Shape()
    :
    weight1{YType::uint16, "weight1"},
    weight2{YType::uint16, "weight2"},
    weight3{YType::uint16, "weight3"},
    weight4{YType::uint16, "weight4"}
{

    yang_name = "shape"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape::~Shape()
{
}

bool Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape::has_data() const
{
    if (is_presence_container) return true;
    return weight1.is_set
	|| weight2.is_set
	|| weight3.is_set
	|| weight4.is_set;
}

bool Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(weight1.yfilter)
	|| ydk::is_set(weight2.yfilter)
	|| ydk::is_set(weight3.yfilter)
	|| ydk::is_set(weight4.yfilter);
}

std::string Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight1.is_set || is_set(weight1.yfilter)) leaf_name_data.push_back(weight1.get_name_leafdata());
    if (weight2.is_set || is_set(weight2.yfilter)) leaf_name_data.push_back(weight2.get_name_leafdata());
    if (weight3.is_set || is_set(weight3.yfilter)) leaf_name_data.push_back(weight3.get_name_leafdata());
    if (weight4.is_set || is_set(weight4.yfilter)) leaf_name_data.push_back(weight4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight1")
    {
        weight1 = value;
        weight1.value_namespace = name_space;
        weight1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight2")
    {
        weight2 = value;
        weight2.value_namespace = name_space;
        weight2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight3")
    {
        weight3 = value;
        weight3.value_namespace = name_space;
        weight3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight4")
    {
        weight4 = value;
        weight4.value_namespace = name_space;
        weight4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight1")
    {
        weight1.yfilter = yfilter;
    }
    if(value_path == "weight2")
    {
        weight2.yfilter = yfilter;
    }
    if(value_path == "weight3")
    {
        weight3.yfilter = yfilter;
    }
    if(value_path == "weight4")
    {
        weight4.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Shape::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight1" || name == "weight2" || name == "weight3" || name == "weight4")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share::Share()
    :
    weight1{YType::uint8, "weight1"},
    weight2{YType::uint8, "weight2"},
    weight3{YType::uint8, "weight3"},
    weight4{YType::uint8, "weight4"}
{

    yang_name = "share"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share::~Share()
{
}

bool Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share::has_data() const
{
    if (is_presence_container) return true;
    return weight1.is_set
	|| weight2.is_set
	|| weight3.is_set
	|| weight4.is_set;
}

bool Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(weight1.yfilter)
	|| ydk::is_set(weight2.yfilter)
	|| ydk::is_set(weight3.yfilter)
	|| ydk::is_set(weight4.yfilter);
}

std::string Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight1.is_set || is_set(weight1.yfilter)) leaf_name_data.push_back(weight1.get_name_leafdata());
    if (weight2.is_set || is_set(weight2.yfilter)) leaf_name_data.push_back(weight2.get_name_leafdata());
    if (weight3.is_set || is_set(weight3.yfilter)) leaf_name_data.push_back(weight3.get_name_leafdata());
    if (weight4.is_set || is_set(weight4.yfilter)) leaf_name_data.push_back(weight4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight1")
    {
        weight1 = value;
        weight1.value_namespace = name_space;
        weight1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight2")
    {
        weight2 = value;
        weight2.value_namespace = name_space;
        weight2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight3")
    {
        weight3 = value;
        weight3.value_namespace = name_space;
        weight3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight4")
    {
        weight4 = value;
        weight4.value_namespace = name_space;
        weight4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight1")
    {
        weight1.yfilter = yfilter;
    }
    if(value_path == "weight2")
    {
        weight2.yfilter = yfilter;
    }
    if(value_path == "weight3")
    {
        weight3.yfilter = yfilter;
    }
    if(value_path == "weight4")
    {
        weight4.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::SrrQueue::Bandwidth::Share::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight1" || name == "weight2" || name == "weight3" || name == "weight4")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::CiscoIOSXESwitchMacsecOption()
    :
    macsec(std::make_shared<Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec>())
{
    macsec->parent = this;

    yang_name = "macsec-option"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::~CiscoIOSXESwitchMacsecOption()
{
}

bool Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::has_data() const
{
    if (is_presence_container) return true;
    return (macsec !=  nullptr && macsec->has_data());
}

bool Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::has_operation() const
{
    return is_set(yfilter)
	|| (macsec !=  nullptr && macsec->has_operation());
}

std::string Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:macsec-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec>();
        }
        return macsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(macsec != nullptr)
    {
        _children["macsec"] = macsec;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::Macsec()
    :
    network_link{YType::empty, "network-link"}
        ,
    replay_protection(std::make_shared<Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection>())
{
    replay_protection->parent = this;

    yang_name = "macsec"; yang_parent_name = "macsec-option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::~Macsec()
{
}

bool Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::has_data() const
{
    if (is_presence_container) return true;
    return network_link.is_set
	|| (replay_protection !=  nullptr && replay_protection->has_data());
}

bool Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_link.yfilter)
	|| (replay_protection !=  nullptr && replay_protection->has_operation());
}

std::string Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_link.is_set || is_set(network_link.yfilter)) leaf_name_data.push_back(network_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "replay-protection")
    {
        if(replay_protection == nullptr)
        {
            replay_protection = std::make_shared<Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection>();
        }
        return replay_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(replay_protection != nullptr)
    {
        _children["replay-protection"] = replay_protection;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-link")
    {
        network_link = value;
        network_link.value_namespace = name_space;
        network_link.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-link")
    {
        network_link.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replay-protection" || name == "network-link")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::ReplayProtection()
    :
    window_size{YType::uint32, "window-size"}
{

    yang_name = "replay-protection"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::~ReplayProtection()
{
}

bool Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::has_data() const
{
    if (is_presence_container) return true;
    return window_size.is_set;
}

bool Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::CiscoIOSXESwitchMacsecOption::Macsec::ReplayProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window-size")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::DeviceTracking::DeviceTracking()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "device-tracking"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::DeviceTracking::~DeviceTracking()
{
}

bool Native::Interface::GigabitEthernet::DeviceTracking::has_data() const
{
    if (is_presence_container) return true;
    return attach_policy.is_set;
}

bool Native::Interface::GigabitEthernet::DeviceTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::GigabitEthernet::DeviceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:device-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::DeviceTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::DeviceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::DeviceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::DeviceTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::DeviceTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::DeviceTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Udld::Udld()
    :
    port(nullptr) // presence node
{

    yang_name = "udld"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Udld::~Udld()
{
}

bool Native::Interface::GigabitEthernet::Udld::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::GigabitEthernet::Udld::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::GigabitEthernet::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-udld:udld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Udld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::GigabitEthernet::Udld::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Udld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Udld::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Udld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Udld::Port::Port()
    :
    aggressive{YType::empty, "aggressive"},
    disable{YType::empty, "disable"}
{

    yang_name = "port"; yang_parent_name = "udld"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Udld::Port::~Port()
{
}

bool Native::Interface::GigabitEthernet::Udld::Port::has_data() const
{
    if (is_presence_container) return true;
    return aggressive.is_set
	|| disable.is_set;
}

bool Native::Interface::GigabitEthernet::Udld::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggressive.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::GigabitEthernet::Udld::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Udld::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggressive.is_set || is_set(aggressive.yfilter)) leaf_name_data.push_back(aggressive.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Udld::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Udld::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Udld::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggressive")
    {
        aggressive = value;
        aggressive.value_namespace = name_space;
        aggressive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Udld::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggressive")
    {
        aggressive.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Udld::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive" || name == "disable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Umbrella::Umbrella()
    :
    out{YType::empty, "out"},
    in{YType::str, "in"}
{

    yang_name = "umbrella"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Umbrella::~Umbrella()
{
}

bool Native::Interface::GigabitEthernet::Umbrella::has_data() const
{
    if (is_presence_container) return true;
    return out.is_set
	|| in.is_set;
}

bool Native::Interface::GigabitEthernet::Umbrella::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::GigabitEthernet::Umbrella::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-umbrella:umbrella";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Umbrella::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Umbrella::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Umbrella::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Umbrella::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Umbrella::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Umbrella::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Utd::~Utd()
{
}

bool Native::Interface::GigabitEthernet::Utd::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Interface::GigabitEthernet::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::GigabitEthernet::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-utd:utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::Vrrp()
    :
    vrrp_group(this, {"group_id"})
    , vrrp_group_v2(this, {"group_id"})
    , delay(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::Delay>())
{
    delay->parent = this;

    yang_name = "vrrp"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::~Vrrp()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrrp_group.len(); index++)
    {
        if(vrrp_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrrp_group_v2.len(); index++)
    {
        if(vrrp_group_v2[index]->has_data())
            return true;
    }
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<vrrp_group.len(); index++)
    {
        if(vrrp_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrrp_group_v2.len(); index++)
    {
        if(vrrp_group_v2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vrrp:vrrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrrp-group")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup>();
        ent_->parent = this;
        vrrp_group.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrrp-group-v2")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2>();
        ent_->parent = this;
        vrrp_group_v2.append(ent_);
        return ent_;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrrp_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vrrp_group_v2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrrp-group" || name == "vrrp-group-v2" || name == "delay")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::VrrpGroup()
    :
    group_id{YType::uint8, "group-id"}
        ,
    address_family(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "vrrp-group"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::~VrrpGroup()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| (address_family !=  nullptr && address_family->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "group-id")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
    , ipv6(nullptr) // presence node
{

    yang_name = "address-family"; yang_parent_name = "vrrp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::~AddressFamily()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::get_children() const
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

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Ipv4()
    :
    vrrpv2{YType::empty, "vrrpv2"},
    description{YType::str, "description"},
    match_address{YType::empty, "match-address"},
    priority{YType::uint8, "priority"},
    shutdown{YType::empty, "shutdown"}
        ,
    address(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address>())
    , preempt_config(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig>())
    , preempt(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt>())
    , timers(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers>())
    , track(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track>())
    , vrrs(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs>())
{
    address->parent = this;
    preempt_config->parent = this;
    preempt->parent = this;
    timers->parent = this;
    track->parent = this;
    vrrs->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return vrrpv2.is_set
	|| description.is_set
	|| match_address.is_set
	|| priority.is_set
	|| shutdown.is_set
	|| (address !=  nullptr && address->has_data())
	|| (preempt_config !=  nullptr && preempt_config->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (vrrs !=  nullptr && vrrs->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrrpv2.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(match_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (preempt_config !=  nullptr && preempt_config->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (vrrs !=  nullptr && vrrs->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrrpv2.is_set || is_set(vrrpv2.yfilter)) leaf_name_data.push_back(vrrpv2.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (match_address.is_set || is_set(match_address.yfilter)) leaf_name_data.push_back(match_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address>();
        }
        return address;
    }

    if(child_yang_name == "preempt-config")
    {
        if(preempt_config == nullptr)
        {
            preempt_config = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig>();
        }
        return preempt_config;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track>();
        }
        return track;
    }

    if(child_yang_name == "vrrs")
    {
        if(vrrs == nullptr)
        {
            vrrs = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs>();
        }
        return vrrs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(preempt_config != nullptr)
    {
        _children["preempt-config"] = preempt_config;
    }

    if(preempt != nullptr)
    {
        _children["preempt"] = preempt;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(track != nullptr)
    {
        _children["track"] = track;
    }

    if(vrrs != nullptr)
    {
        _children["vrrs"] = vrrs;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrrpv2")
    {
        vrrpv2 = value;
        vrrpv2.value_namespace = name_space;
        vrrpv2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-address")
    {
        match_address = value;
        match_address.value_namespace = name_space;
        match_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrrpv2")
    {
        vrrpv2.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "match-address")
    {
        match_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "preempt-config" || name == "preempt" || name == "timers" || name == "track" || name == "vrrs" || name == "vrrpv2" || name == "description" || name == "match-address" || name == "priority" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Address()
    :
    primary(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary>())
    , secondary(this, {"address"})
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::~Address()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary>();
        ent_->parent = this;
        secondary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    count_ = 0;
    for (auto ent_ : secondary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    primary{YType::empty, "primary"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::~Primary()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| primary.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(primary.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "primary")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::~Secondary()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Address::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::PreemptConfig()
    :
    preempt{YType::boolean, "preempt"}
{

    yang_name = "preempt-config"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::~PreemptConfig()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::has_data() const
{
    if (is_presence_container) return true;
    return preempt.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preempt.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::PreemptConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preempt")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::~Preempt()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::~Delay()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::Timers()
    :
    advertise{YType::uint16, "advertise"}
{

    yang_name = "timers"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::~Timers()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::has_data() const
{
    if (is_presence_container) return true;
    return advertise.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Track()
    :
    event(this, {"object_id"})
{

    yang_name = "track"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::~Track()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::has_operation() const
{
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event>();
        ent_->parent = this;
        event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::Event()
    :
    object_id{YType::uint16, "object-id"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "event"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::~Event()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    ADD_KEY_TOKEN(object_id, "object-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrement")
    {
        decrement = value;
        decrement.value_namespace = name_space;
        decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "decrement")
    {
        decrement.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Track::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-id" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::Vrrs()
    :
    leader{YType::str, "leader"}
{

    yang_name = "vrrs"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::~Vrrs()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::has_data() const
{
    if (is_presence_container) return true;
    return leader.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(leader.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (leader.is_set || is_set(leader.yfilter)) leaf_name_data.push_back(leader.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "leader")
    {
        leader = value;
        leader.value_namespace = name_space;
        leader.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "leader")
    {
        leader.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv4::Vrrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "leader")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Ipv6()
    :
    description{YType::str, "description"},
    match_address{YType::empty, "match-address"},
    priority{YType::uint8, "priority"},
    shutdown{YType::empty, "shutdown"}
        ,
    address(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address>())
    , preempt_config(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig>())
    , preempt(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt>())
    , timers(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers>())
    , track(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track>())
    , vrrs(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs>())
{
    address->parent = this;
    preempt_config->parent = this;
    preempt->parent = this;
    timers->parent = this;
    track->parent = this;
    vrrs->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::~Ipv6()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| match_address.is_set
	|| priority.is_set
	|| shutdown.is_set
	|| (address !=  nullptr && address->has_data())
	|| (preempt_config !=  nullptr && preempt_config->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (vrrs !=  nullptr && vrrs->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(match_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (preempt_config !=  nullptr && preempt_config->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (vrrs !=  nullptr && vrrs->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (match_address.is_set || is_set(match_address.yfilter)) leaf_name_data.push_back(match_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "preempt-config")
    {
        if(preempt_config == nullptr)
        {
            preempt_config = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig>();
        }
        return preempt_config;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track>();
        }
        return track;
    }

    if(child_yang_name == "vrrs")
    {
        if(vrrs == nullptr)
        {
            vrrs = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs>();
        }
        return vrrs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(preempt_config != nullptr)
    {
        _children["preempt-config"] = preempt_config;
    }

    if(preempt != nullptr)
    {
        _children["preempt"] = preempt;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(track != nullptr)
    {
        _children["track"] = track;
    }

    if(vrrs != nullptr)
    {
        _children["vrrs"] = vrrs;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-address")
    {
        match_address = value;
        match_address.value_namespace = name_space;
        match_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "match-address")
    {
        match_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "preempt-config" || name == "preempt" || name == "timers" || name == "track" || name == "vrrs" || name == "description" || name == "match-address" || name == "priority" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Address()
    :
    primary(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary>())
    , ipv6_prefix(this, {"prefix"})
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::~Address()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_prefix.len(); index++)
    {
        if(ipv6_prefix[index]->has_data())
            return true;
    }
    return (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv6_prefix.len(); index++)
    {
        if(ipv6_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "ipv6-prefix")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix>();
        ent_->parent = this;
        ipv6_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    count_ = 0;
    for (auto ent_ : ipv6_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "ipv6-prefix")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::Primary()
    :
    ipv6_link_local{YType::str, "ipv6-link-local"},
    primary{YType::empty, "primary"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::~Primary()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_link_local.is_set
	|| primary.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_link_local.yfilter)
	|| ydk::is_set(primary.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_link_local.is_set || is_set(ipv6_link_local.yfilter)) leaf_name_data.push_back(ipv6_link_local.get_name_leafdata());
    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-link-local")
    {
        ipv6_link_local = value;
        ipv6_link_local.value_namespace = name_space;
        ipv6_link_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-link-local")
    {
        ipv6_link_local.yfilter = yfilter;
    }
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-link-local" || name == "primary")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::Ipv6Prefix()
    :
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6-prefix"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::~Ipv6Prefix()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Address::Ipv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::PreemptConfig()
    :
    preempt{YType::boolean, "preempt"}
{

    yang_name = "preempt-config"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::~PreemptConfig()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::has_data() const
{
    if (is_presence_container) return true;
    return preempt.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preempt.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::PreemptConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preempt")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::~Preempt()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::~Delay()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::Timers()
    :
    advertise{YType::uint16, "advertise"}
{

    yang_name = "timers"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::~Timers()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::has_data() const
{
    if (is_presence_container) return true;
    return advertise.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Track()
    :
    event(this, {"object_id"})
{

    yang_name = "track"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::~Track()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::has_operation() const
{
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event>();
        ent_->parent = this;
        event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::Event()
    :
    object_id{YType::uint16, "object-id"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "event"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::~Event()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    ADD_KEY_TOKEN(object_id, "object-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrement")
    {
        decrement = value;
        decrement.value_namespace = name_space;
        decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "decrement")
    {
        decrement.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Track::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-id" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::Vrrs()
    :
    leader{YType::str, "leader"}
{

    yang_name = "vrrs"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::~Vrrs()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::has_data() const
{
    if (is_presence_container) return true;
    return leader.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(leader.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (leader.is_set || is_set(leader.yfilter)) leaf_name_data.push_back(leader.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "leader")
    {
        leader = value;
        leader.value_namespace = name_space;
        leader.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "leader")
    {
        leader.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroup::AddressFamily::Ipv6::Vrrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "leader")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::VrrpGroupV2()
    :
    group_id{YType::uint8, "group-id"},
    description{YType::str, "description"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"},
    shutdown{YType::empty, "shutdown"}
        ,
    authentication(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication>())
    , ip(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip>())
    , preempt_config(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig>())
    , preempt(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt>())
    , timers(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers>())
    , track(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track>())
{
    authentication->parent = this;
    ip->parent = this;
    preempt_config->parent = this;
    preempt->parent = this;
    timers->parent = this;
    track->parent = this;

    yang_name = "vrrp-group-v2"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::~VrrpGroupV2()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| description.is_set
	|| name.is_set
	|| priority.is_set
	|| shutdown.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (preempt_config !=  nullptr && preempt_config->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (track !=  nullptr && track->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (preempt_config !=  nullptr && preempt_config->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (track !=  nullptr && track->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrrp-group-v2";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt-config")
    {
        if(preempt_config == nullptr)
        {
            preempt_config = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig>();
        }
        return preempt_config;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track>();
        }
        return track;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(preempt_config != nullptr)
    {
        _children["preempt-config"] = preempt_config;
    }

    if(preempt != nullptr)
    {
        _children["preempt"] = preempt;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(track != nullptr)
    {
        _children["track"] = track;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "ip" || name == "preempt-config" || name == "preempt" || name == "timers" || name == "track" || name == "group-id" || name == "description" || name == "name" || name == "priority" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication::Authentication()
    :
    text{YType::str, "text"}
{

    yang_name = "authentication"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication::~Authentication()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return text.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "text")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Ip()
    :
    primary(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary>())
    , secondary(this, {"address"})
{
    primary->parent = this;

    yang_name = "ip"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::~Ip()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::has_operation() const
{
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary>();
        ent_->parent = this;
        secondary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    count_ = 0;
    for (auto ent_ : secondary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::Primary()
    :
    address{YType::str, "address"}
{

    yang_name = "primary"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::~Primary()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::Secondary()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::~Secondary()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Ip::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::PreemptConfig()
    :
    preempt{YType::boolean, "preempt"}
{

    yang_name = "preempt-config"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::~PreemptConfig()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::has_data() const
{
    if (is_presence_container) return true;
    return preempt.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preempt.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preempt.is_set || is_set(preempt.yfilter)) leaf_name_data.push_back(preempt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preempt")
    {
        preempt = value;
        preempt.value_namespace = name_space;
        preempt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preempt")
    {
        preempt.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::PreemptConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preempt")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::~Preempt()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::~Delay()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::has_data() const
{
    if (is_presence_container) return true;
    return minimum.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Timers()
    :
    learn{YType::empty, "learn"}
        ,
    advertise(std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise>())
{
    advertise->parent = this;

    yang_name = "timers"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::~Timers()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::has_data() const
{
    if (is_presence_container) return true;
    return learn.is_set
	|| (advertise !=  nullptr && advertise->has_data());
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learn.yfilter)
	|| (advertise !=  nullptr && advertise->has_operation());
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learn.is_set || is_set(learn.yfilter)) leaf_name_data.push_back(learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise>();
        }
        return advertise;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advertise != nullptr)
    {
        _children["advertise"] = advertise;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learn")
    {
        learn = value;
        learn.value_namespace = name_space;
        learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learn")
    {
        learn.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "learn")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::Advertise()
    :
    interval{YType::uint8, "interval"},
    msec{YType::uint16, "msec"}
{

    yang_name = "advertise"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::~Advertise()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| msec.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Timers::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "msec")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Track()
    :
    event(this, {"object_id"})
{

    yang_name = "track"; yang_parent_name = "vrrp-group-v2"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::~Track()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::has_operation() const
{
    for (std::size_t index=0; index<event.len(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto ent_ = std::make_shared<Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Event>();
        ent_->parent = this;
        event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::Event()
    :
    object_id{YType::uint16, "object-id"},
    decrement{YType::uint8, "decrement"}
{

    yang_name = "event"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::~Event()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::has_data() const
{
    if (is_presence_container) return true;
    return object_id.is_set
	|| decrement.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(object_id.yfilter)
	|| ydk::is_set(decrement.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    ADD_KEY_TOKEN(object_id, "object-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_id.is_set || is_set(object_id.yfilter)) leaf_name_data.push_back(object_id.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "object-id")
    {
        object_id = value;
        object_id.value_namespace = name_space;
        object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrement")
    {
        decrement = value;
        decrement.value_namespace = name_space;
        decrement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "object-id")
    {
        object_id.yfilter = yfilter;
    }
    if(value_path == "decrement")
    {
        decrement.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::VrrpGroupV2::Track::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "object-id" || name == "decrement")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::Vrrp::Delay::Delay()
    :
    reload{YType::uint16, "reload"},
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::Vrrp::Delay::~Delay()
{
}

bool Native::Interface::GigabitEthernet::Vrrp::Delay::has_data() const
{
    if (is_presence_container) return true;
    return reload.is_set
	|| minimum.is_set;
}

bool Native::Interface::GigabitEthernet::Vrrp::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reload.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::GigabitEthernet::Vrrp::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::Vrrp::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::Vrrp::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::Vrrp::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::Vrrp::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::Vrrp::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::Vrrp::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload" || name == "minimum")
        return true;
    return false;
}

Native::Interface::GigabitEthernet::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{

    yang_name = "zone-member"; yang_parent_name = "GigabitEthernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::GigabitEthernet::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::GigabitEthernet::ZoneMember::has_data() const
{
    if (is_presence_container) return true;
    return security.is_set;
}

bool Native::Interface::GigabitEthernet::ZoneMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Interface::GigabitEthernet::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::GigabitEthernet::ZoneMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::GigabitEthernet::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::GigabitEthernet::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::GigabitEthernet::ZoneMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::GigabitEthernet::ZoneMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Interface::GigabitEthernet::ZoneMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::TwoGigabitEthernet::TwoGigabitEthernet()
    :
    name{YType::str, "name"},
    media_type{YType::enumeration, "media-type"},
    port_type{YType::enumeration, "port-type"},
    description{YType::str, "description"},
    mac_address{YType::str, "mac-address"},
    shutdown{YType::empty, "shutdown"},
    keepalive{YType::boolean, "keepalive"},
    if_state{YType::enumeration, "if-state"},
    delay{YType::uint32, "delay"},
    load_interval{YType::uint16, "load-interval"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    service_insertion{YType::enumeration, "service-insertion"},
    channel_protocol{YType::enumeration, "Cisco-IOS-XE-ethernet:channel-protocol"},
    duplex{YType::enumeration, "Cisco-IOS-XE-ethernet:duplex"},
    cisco_ios_xe_ethernet_macsec{YType::empty, "Cisco-IOS-XE-ethernet:macsec"},
    nat66{YType::enumeration, "Cisco-IOS-XE-nat:nat66"},
    cisco_ios_xe_switch_macsec{YType::empty, "Cisco-IOS-XE-switch:macsec"}
        ,
    switchport_conf(std::make_shared<Native::Interface::TwoGigabitEthernet::SwitchportConf>())
    , switchport(std::make_shared<Native::Interface::TwoGigabitEthernet::Switchport>())
    , stackwise_virtual(std::make_shared<Native::Interface::TwoGigabitEthernet::StackwiseVirtual>())
    , arp(std::make_shared<Native::Interface::TwoGigabitEthernet::Arp>())
    , backup(std::make_shared<Native::Interface::TwoGigabitEthernet::Backup>())
    , cemoudp(std::make_shared<Native::Interface::TwoGigabitEthernet::Cemoudp>())
    , cws_tunnel(std::make_shared<Native::Interface::TwoGigabitEthernet::CwsTunnel>())
    , l2protocol_tunnel(nullptr) // presence node
    , encapsulation(std::make_shared<Native::Interface::TwoGigabitEthernet::Encapsulation>())
    , fair_queue_conf(std::make_shared<Native::Interface::TwoGigabitEthernet::FairQueueConf>())
    , fair_queue(std::make_shared<Native::Interface::TwoGigabitEthernet::FairQueue>())
    , flowcontrol(std::make_shared<Native::Interface::TwoGigabitEthernet::Flowcontrol>())
    , isis(std::make_shared<Native::Interface::TwoGigabitEthernet::Isis>())
    , keepalive_settings(std::make_shared<Native::Interface::TwoGigabitEthernet::KeepaliveSettings>())
    , bfd(std::make_shared<Native::Interface::TwoGigabitEthernet::Bfd>())
    , bandwidth(std::make_shared<Native::Interface::TwoGigabitEthernet::Bandwidth>())
    , dampening(std::make_shared<Native::Interface::TwoGigabitEthernet::Dampening>())
    , domain(std::make_shared<Native::Interface::TwoGigabitEthernet::Domain>())
    , hold_queue(this, {"direction"})
    , mpls(std::make_shared<Native::Interface::TwoGigabitEthernet::Mpls>())
    , ip_vrf(std::make_shared<Native::Interface::TwoGigabitEthernet::IpVrf>())
    , vrf(std::make_shared<Native::Interface::TwoGigabitEthernet::Vrf>())
    , ip(std::make_shared<Native::Interface::TwoGigabitEthernet::Ip>())
    , ipv6(std::make_shared<Native::Interface::TwoGigabitEthernet::Ipv6>())
    , logging(std::make_shared<Native::Interface::TwoGigabitEthernet::Logging>())
    , mdix(std::make_shared<Native::Interface::TwoGigabitEthernet::Mdix>())
    , mop(std::make_shared<Native::Interface::TwoGigabitEthernet::Mop>())
    , interface_qos(std::make_shared<Native::Interface::TwoGigabitEthernet::InterfaceQos>())
    , source(std::make_shared<Native::Interface::TwoGigabitEthernet::Source>())
    , standby(std::make_shared<Native::Interface::TwoGigabitEthernet::Standby>())
    , access_session(std::make_shared<Native::Interface::TwoGigabitEthernet::AccessSession>())
    , storm_control(std::make_shared<Native::Interface::TwoGigabitEthernet::StormControl>())
    , trust(std::make_shared<Native::Interface::TwoGigabitEthernet::Trust>())
    , priority_queue(std::make_shared<Native::Interface::TwoGigabitEthernet::PriorityQueue>())
    , rcv_queue(std::make_shared<Native::Interface::TwoGigabitEthernet::RcvQueue>())
    , peer(std::make_shared<Native::Interface::TwoGigabitEthernet::Peer>())
    , pm_path(std::make_shared<Native::Interface::TwoGigabitEthernet::PmPath>())
    , carrier_delay(std::make_shared<Native::Interface::TwoGigabitEthernet::CarrierDelay>())
    , channel_group(std::make_shared<Native::Interface::TwoGigabitEthernet::ChannelGroup>())
    , ethernet(std::make_shared<Native::Interface::TwoGigabitEthernet::Ethernet>())
    , eapol(std::make_shared<Native::Interface::TwoGigabitEthernet::Eapol>())
    , synchronous(std::make_shared<Native::Interface::TwoGigabitEthernet::Synchronous>())
    , speed(std::make_shared<Native::Interface::TwoGigabitEthernet::Speed>())
    , negotiation(std::make_shared<Native::Interface::TwoGigabitEthernet::Negotiation>())
    , plim(std::make_shared<Native::Interface::TwoGigabitEthernet::Plim>())
    , pppoe(std::make_shared<Native::Interface::TwoGigabitEthernet::Pppoe>())
    , service(std::make_shared<Native::Interface::TwoGigabitEthernet::Service>())
    , lacp(std::make_shared<Native::Interface::TwoGigabitEthernet::Lacp>())
    , cisco_ios_xe_ethernet_macsec_option(std::make_shared<Native::Interface::TwoGigabitEthernet::CiscoIOSXEEthernetMacsecOption>())
    , xconnect(std::make_shared<Native::Interface::TwoGigabitEthernet::Xconnect>())
    , evpn(std::make_shared<Native::Interface::TwoGigabitEthernet::Evpn>())
    , snmp(std::make_shared<Native::Interface::TwoGigabitEthernet::Snmp>())
    , ospfv3(std::make_shared<Native::Interface::TwoGigabitEthernet::Ospfv3>())
    , cdp(std::make_shared<Native::Interface::TwoGigabitEthernet::Cdp>())
    , crypto(std::make_shared<Native::Interface::TwoGigabitEthernet::Crypto>())
    , cts(std::make_shared<Native::Interface::TwoGigabitEthernet::Cts>())
    , dot1x(std::make_shared<Native::Interface::TwoGigabitEthernet::Dot1x>())
    , et_analytics(std::make_shared<Native::Interface::TwoGigabitEthernet::EtAnalytics>())
    , performance(std::make_shared<Native::Interface::TwoGigabitEthernet::Performance>())
    , service_policy(std::make_shared<Native::Interface::TwoGigabitEthernet::ServicePolicy>())
    , fabric_domain(std::make_shared<Native::Interface::TwoGigabitEthernet::FabricDomain>())
    , lisp(std::make_shared<Native::Interface::TwoGigabitEthernet::Lisp>())
    , lldp(std::make_shared<Native::Interface::TwoGigabitEthernet::Lldp>())
    , mka(std::make_shared<Native::Interface::TwoGigabitEthernet::Mka>())
    , mvrp(nullptr) // presence node
    , analysis_module(std::make_shared<Native::Interface::TwoGigabitEthernet::AnalysisModule>())
    , ntp(std::make_shared<Native::Interface::TwoGigabitEthernet::Ntp>())
    , power(std::make_shared<Native::Interface::TwoGigabitEthernet::Power>())
    , authentication(std::make_shared<Native::Interface::TwoGigabitEthernet::Authentication>())
    , mab(nullptr) // presence node
    , spanning_tree(std::make_shared<Native::Interface::TwoGigabitEthernet::SpanningTree>())
    , auto_(std::make_shared<Native::Interface::TwoGigabitEthernet::Auto>())
    , datalink(std::make_shared<Native::Interface::TwoGigabitEthernet::Datalink>())
    , energywise(nullptr) // presence node
    , location(std::make_shared<Native::Interface::TwoGigabitEthernet::Location>())
    , mac(std::make_shared<Native::Interface::TwoGigabitEthernet::Mac>())
    , macro(std::make_shared<Native::Interface::TwoGigabitEthernet::Macro>())
    , dual_active(std::make_shared<Native::Interface::TwoGigabitEthernet::DualActive>())
    , load_balancing(std::make_shared<Native::Interface::TwoGigabitEthernet::LoadBalancing>())
    , vlan_range(this, {"id"})
    , switch_(std::make_shared<Native::Interface::TwoGigabitEthernet::Switch>())
    , srr_queue(std::make_shared<Native::Interface::TwoGigabitEthernet::SrrQueue>())
    , cisco_ios_xe_switch_macsec_option(std::make_shared<Native::Interface::TwoGigabitEthernet::CiscoIOSXESwitchMacsecOption>())
    , device_tracking(std::make_shared<Native::Interface::TwoGigabitEthernet::DeviceTracking>())
    , udld(std::make_shared<Native::Interface::TwoGigabitEthernet::Udld>())
    , umbrella(std::make_shared<Native::Interface::TwoGigabitEthernet::Umbrella>())
    , utd(std::make_shared<Native::Interface::TwoGigabitEthernet::Utd>())
    , zone_member(std::make_shared<Native::Interface::TwoGigabitEthernet::ZoneMember>())
{
    switchport_conf->parent = this;
    switchport->parent = this;
    stackwise_virtual->parent = this;
    arp->parent = this;
    backup->parent = this;
    cemoudp->parent = this;
    cws_tunnel->parent = this;
    encapsulation->parent = this;
    fair_queue_conf->parent = this;
    fair_queue->parent = this;
    flowcontrol->parent = this;
    isis->parent = this;
    keepalive_settings->parent = this;
    bfd->parent = this;
    bandwidth->parent = this;
    dampening->parent = this;
    domain->parent = this;
    mpls->parent = this;
    ip_vrf->parent = this;
    vrf->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    mdix->parent = this;
    mop->parent = this;
    interface_qos->parent = this;
    source->parent = this;
    standby->parent = this;
    access_session->parent = this;
    storm_control->parent = this;
    trust->parent = this;
    priority_queue->parent = this;
    rcv_queue->parent = this;
    peer->parent = this;
    pm_path->parent = this;
    carrier_delay->parent = this;
    channel_group->parent = this;
    ethernet->parent = this;
    eapol->parent = this;
    synchronous->parent = this;
    speed->parent = this;
    negotiation->parent = this;
    plim->parent = this;
    pppoe->parent = this;
    service->parent = this;
    lacp->parent = this;
    cisco_ios_xe_ethernet_macsec_option->parent = this;
    xconnect->parent = this;
    evpn->parent = this;
    snmp->parent = this;
    ospfv3->parent = this;
    cdp->parent = this;
    crypto->parent = this;
    cts->parent = this;
    dot1x->parent = this;
    et_analytics->parent = this;
    performance->parent = this;
    service_policy->parent = this;
    fabric_domain->parent = this;
    lisp->parent = this;
    lldp->parent = this;
    mka->parent = this;
    analysis_module->parent = this;
    ntp->parent = this;
    power->parent = this;
    authentication->parent = this;
    spanning_tree->parent = this;
    auto_->parent = this;
    datalink->parent = this;
    location->parent = this;
    mac->parent = this;
    macro->parent = this;
    dual_active->parent = this;
    load_balancing->parent = this;
    switch_->parent = this;
    srr_queue->parent = this;
    cisco_ios_xe_switch_macsec_option->parent = this;
    device_tracking->parent = this;
    udld->parent = this;
    umbrella->parent = this;
    utd->parent = this;
    zone_member->parent = this;

    yang_name = "TwoGigabitEthernet"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Interface::TwoGigabitEthernet::~TwoGigabitEthernet()
{
}

bool Native::Interface::TwoGigabitEthernet::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hold_queue.len(); index++)
    {
        if(hold_queue[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return name.is_set
	|| media_type.is_set
	|| port_type.is_set
	|| description.is_set
	|| mac_address.is_set
	|| shutdown.is_set
	|| keepalive.is_set
	|| if_state.is_set
	|| delay.is_set
	|| load_interval.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| service_insertion.is_set
	|| channel_protocol.is_set
	|| duplex.is_set
	|| cisco_ios_xe_ethernet_macsec.is_set
	|| nat66.is_set
	|| cisco_ios_xe_switch_macsec.is_set
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (access_session !=  nullptr && access_session->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (carrier_delay !=  nullptr && carrier_delay->has_data())
	|| (channel_group !=  nullptr && channel_group->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (eapol !=  nullptr && eapol->has_data())
	|| (synchronous !=  nullptr && synchronous->has_data())
	|| (speed !=  nullptr && speed->has_data())
	|| (negotiation !=  nullptr && negotiation->has_data())
	|| (plim !=  nullptr && plim->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (lacp !=  nullptr && lacp->has_data())
	|| (cisco_ios_xe_ethernet_macsec_option !=  nullptr && cisco_ios_xe_ethernet_macsec_option->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (evpn !=  nullptr && evpn->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (et_analytics !=  nullptr && et_analytics->has_data())
	|| (performance !=  nullptr && performance->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (fabric_domain !=  nullptr && fabric_domain->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (lldp !=  nullptr && lldp->has_data())
	|| (mka !=  nullptr && mka->has_data())
	|| (mvrp !=  nullptr && mvrp->has_data())
	|| (analysis_module !=  nullptr && analysis_module->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (power !=  nullptr && power->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (datalink !=  nullptr && datalink->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (location !=  nullptr && location->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (macro !=  nullptr && macro->has_data())
	|| (dual_active !=  nullptr && dual_active->has_data())
	|| (load_balancing !=  nullptr && load_balancing->has_data())
	|| (switch_ !=  nullptr && switch_->has_data())
	|| (srr_queue !=  nullptr && srr_queue->has_data())
	|| (cisco_ios_xe_switch_macsec_option !=  nullptr && cisco_ios_xe_switch_macsec_option->has_data())
	|| (device_tracking !=  nullptr && device_tracking->has_data())
	|| (udld !=  nullptr && udld->has_data())
	|| (umbrella !=  nullptr && umbrella->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (zone_member !=  nullptr && zone_member->has_data());
}

bool Native::Interface::TwoGigabitEthernet::has_operation() const
{
    for (std::size_t index=0; index<hold_queue.len(); index++)
    {
        if(hold_queue[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(if_state.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(max_reserved_bandwidth.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(service_insertion.yfilter)
	|| ydk::is_set(channel_protocol.yfilter)
	|| ydk::is_set(duplex.yfilter)
	|| ydk::is_set(cisco_ios_xe_ethernet_macsec.yfilter)
	|| ydk::is_set(nat66.yfilter)
	|| ydk::is_set(cisco_ios_xe_switch_macsec.yfilter)
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (carrier_delay !=  nullptr && carrier_delay->has_operation())
	|| (channel_group !=  nullptr && channel_group->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (eapol !=  nullptr && eapol->has_operation())
	|| (synchronous !=  nullptr && synchronous->has_operation())
	|| (speed !=  nullptr && speed->has_operation())
	|| (negotiation !=  nullptr && negotiation->has_operation())
	|| (plim !=  nullptr && plim->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (lacp !=  nullptr && lacp->has_operation())
	|| (cisco_ios_xe_ethernet_macsec_option !=  nullptr && cisco_ios_xe_ethernet_macsec_option->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (evpn !=  nullptr && evpn->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (et_analytics !=  nullptr && et_analytics->has_operation())
	|| (performance !=  nullptr && performance->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (fabric_domain !=  nullptr && fabric_domain->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (mka !=  nullptr && mka->has_operation())
	|| (mvrp !=  nullptr && mvrp->has_operation())
	|| (analysis_module !=  nullptr && analysis_module->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (power !=  nullptr && power->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (datalink !=  nullptr && datalink->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (location !=  nullptr && location->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (macro !=  nullptr && macro->has_operation())
	|| (dual_active !=  nullptr && dual_active->has_operation())
	|| (load_balancing !=  nullptr && load_balancing->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation())
	|| (srr_queue !=  nullptr && srr_queue->has_operation())
	|| (cisco_ios_xe_switch_macsec_option !=  nullptr && cisco_ios_xe_switch_macsec_option->has_operation())
	|| (device_tracking !=  nullptr && device_tracking->has_operation())
	|| (udld !=  nullptr && udld->has_operation())
	|| (umbrella !=  nullptr && umbrella->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (zone_member !=  nullptr && zone_member->has_operation());
}

std::string Native::Interface::TwoGigabitEthernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::TwoGigabitEthernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TwoGigabitEthernet";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::TwoGigabitEthernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.yfilter)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.yfilter)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.yfilter)) leaf_name_data.push_back(service_insertion.get_name_leafdata());
    if (channel_protocol.is_set || is_set(channel_protocol.yfilter)) leaf_name_data.push_back(channel_protocol.get_name_leafdata());
    if (duplex.is_set || is_set(duplex.yfilter)) leaf_name_data.push_back(duplex.get_name_leafdata());
    if (cisco_ios_xe_ethernet_macsec.is_set || is_set(cisco_ios_xe_ethernet_macsec.yfilter)) leaf_name_data.push_back(cisco_ios_xe_ethernet_macsec.get_name_leafdata());
    if (nat66.is_set || is_set(nat66.yfilter)) leaf_name_data.push_back(nat66.get_name_leafdata());
    if (cisco_ios_xe_switch_macsec.is_set || is_set(cisco_ios_xe_switch_macsec.yfilter)) leaf_name_data.push_back(cisco_ios_xe_switch_macsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::TwoGigabitEthernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::TwoGigabitEthernet::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::TwoGigabitEthernet::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "stackwise-virtual")
    {
        if(stackwise_virtual == nullptr)
        {
            stackwise_virtual = std::make_shared<Native::Interface::TwoGigabitEthernet::StackwiseVirtual>();
        }
        return stackwise_virtual;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::TwoGigabitEthernet::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::TwoGigabitEthernet::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::TwoGigabitEthernet::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::TwoGigabitEthernet::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::TwoGigabitEthernet::L2protocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::TwoGigabitEthernet::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::TwoGigabitEthernet::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::TwoGigabitEthernet::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::TwoGigabitEthernet::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::TwoGigabitEthernet::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::TwoGigabitEthernet::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::TwoGigabitEthernet::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::TwoGigabitEthernet::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::TwoGigabitEthernet::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::TwoGigabitEthernet::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "hold-queue")
    {
        auto ent_ = std::make_shared<Native::Interface::TwoGigabitEthernet::HoldQueue>();
        ent_->parent = this;
        hold_queue.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::TwoGigabitEthernet::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::TwoGigabitEthernet::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::TwoGigabitEthernet::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::TwoGigabitEthernet::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::TwoGigabitEthernet::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::TwoGigabitEthernet::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::TwoGigabitEthernet::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::TwoGigabitEthernet::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::TwoGigabitEthernet::InterfaceQos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::TwoGigabitEthernet::Source>();
        }
        return source;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::TwoGigabitEthernet::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::TwoGigabitEthernet::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::TwoGigabitEthernet::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::TwoGigabitEthernet::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::TwoGigabitEthernet::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::TwoGigabitEthernet::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::TwoGigabitEthernet::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::TwoGigabitEthernet::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:carrier-delay")
    {
        if(carrier_delay == nullptr)
        {
            carrier_delay = std::make_shared<Native::Interface::TwoGigabitEthernet::CarrierDelay>();
        }
        return carrier_delay;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:channel-group")
    {
        if(channel_group == nullptr)
        {
            channel_group = std::make_shared<Native::Interface::TwoGigabitEthernet::ChannelGroup>();
        }
        return channel_group;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Interface::TwoGigabitEthernet::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:eapol")
    {
        if(eapol == nullptr)
        {
            eapol = std::make_shared<Native::Interface::TwoGigabitEthernet::Eapol>();
        }
        return eapol;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:synchronous")
    {
        if(synchronous == nullptr)
        {
            synchronous = std::make_shared<Native::Interface::TwoGigabitEthernet::Synchronous>();
        }
        return synchronous;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:speed")
    {
        if(speed == nullptr)
        {
            speed = std::make_shared<Native::Interface::TwoGigabitEthernet::Speed>();
        }
        return speed;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:negotiation")
    {
        if(negotiation == nullptr)
        {
            negotiation = std::make_shared<Native::Interface::TwoGigabitEthernet::Negotiation>();
        }
        return negotiation;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:plim")
    {
        if(plim == nullptr)
        {
            plim = std::make_shared<Native::Interface::TwoGigabitEthernet::Plim>();
        }
        return plim;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Native::Interface::TwoGigabitEthernet::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Interface::TwoGigabitEthernet::Service>();
        }
        return service;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:lacp")
    {
        if(lacp == nullptr)
        {
            lacp = std::make_shared<Native::Interface::TwoGigabitEthernet::Lacp>();
        }
        return lacp;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:macsec-option")
    {
        if(cisco_ios_xe_ethernet_macsec_option == nullptr)
        {
            cisco_ios_xe_ethernet_macsec_option = std::make_shared<Native::Interface::TwoGigabitEthernet::CiscoIOSXEEthernetMacsecOption>();
        }
        return cisco_ios_xe_ethernet_macsec_option;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::TwoGigabitEthernet::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:evpn")
    {
        if(evpn == nullptr)
        {
            evpn = std::make_shared<Native::Interface::TwoGigabitEthernet::Evpn>();
        }
        return evpn;
    }

    if(child_yang_name == "Cisco-IOS-XE-snmp:snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Interface::TwoGigabitEthernet::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "Cisco-IOS-XE-ospfv3:ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Interface::TwoGigabitEthernet::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "Cisco-IOS-XE-cdp:cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<Native::Interface::TwoGigabitEthernet::Cdp>();
        }
        return cdp;
    }

    if(child_yang_name == "Cisco-IOS-XE-crypto:crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::TwoGigabitEthernet::Crypto>();
        }
        return crypto;
    }

    if(child_yang_name == "Cisco-IOS-XE-cts:cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Interface::TwoGigabitEthernet::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "Cisco-IOS-XE-dot1x:dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Interface::TwoGigabitEthernet::Dot1x>();
        }
        return dot1x;
    }

    if(child_yang_name == "Cisco-IOS-XE-eta:et-analytics")
    {
        if(et_analytics == nullptr)
        {
            et_analytics = std::make_shared<Native::Interface::TwoGigabitEthernet::EtAnalytics>();
        }
        return et_analytics;
    }

    if(child_yang_name == "Cisco-IOS-XE-ezpm:performance")
    {
        if(performance == nullptr)
        {
            performance = std::make_shared<Native::Interface::TwoGigabitEthernet::Performance>();
        }
        return performance;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::TwoGigabitEthernet::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "Cisco-IOS-XE-iwanfabric:fabric-domain")
    {
        if(fabric_domain == nullptr)
        {
            fabric_domain = std::make_shared<Native::Interface::TwoGigabitEthernet::FabricDomain>();
        }
        return fabric_domain;
    }

    if(child_yang_name == "Cisco-IOS-XE-lisp:lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Interface::TwoGigabitEthernet::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "Cisco-IOS-XE-lldp:lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Interface::TwoGigabitEthernet::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "Cisco-IOS-XE-mka:mka")
    {
        if(mka == nullptr)
        {
            mka = std::make_shared<Native::Interface::TwoGigabitEthernet::Mka>();
        }
        return mka;
    }

    if(child_yang_name == "Cisco-IOS-XE-mvrp:mvrp")
    {
        if(mvrp == nullptr)
        {
            mvrp = std::make_shared<Native::Interface::TwoGigabitEthernet::Mvrp>();
        }
        return mvrp;
    }

    if(child_yang_name == "Cisco-IOS-XE-nam:analysis-module")
    {
        if(analysis_module == nullptr)
        {
            analysis_module = std::make_shared<Native::Interface::TwoGigabitEthernet::AnalysisModule>();
        }
        return analysis_module;
    }

    if(child_yang_name == "Cisco-IOS-XE-ntp:ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Native::Interface::TwoGigabitEthernet::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "Cisco-IOS-XE-power:power")
    {
        if(power == nullptr)
        {
            power = std::make_shared<Native::Interface::TwoGigabitEthernet::Power>();
        }
        return power;
    }

    if(child_yang_name == "Cisco-IOS-XE-sanet:authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::TwoGigabitEthernet::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "Cisco-IOS-XE-sanet:mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Interface::TwoGigabitEthernet::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "Cisco-IOS-XE-spanning-tree:spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::TwoGigabitEthernet::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Interface::TwoGigabitEthernet::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:datalink")
    {
        if(datalink == nullptr)
        {
            datalink = std::make_shared<Native::Interface::TwoGigabitEthernet::Datalink>();
        }
        return datalink;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::Interface::TwoGigabitEthernet::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::Interface::TwoGigabitEthernet::Location>();
        }
        return location;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Interface::TwoGigabitEthernet::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:macro")
    {
        if(macro == nullptr)
        {
            macro = std::make_shared<Native::Interface::TwoGigabitEthernet::Macro>();
        }
        return macro;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::Interface::TwoGigabitEthernet::DualActive>();
        }
        return dual_active;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:load-balancing")
    {
        if(load_balancing == nullptr)
        {
            load_balancing = std::make_shared<Native::Interface::TwoGigabitEthernet::LoadBalancing>();
        }
        return load_balancing;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:vlan-range")
    {
        auto ent_ = std::make_shared<Native::Interface::TwoGigabitEthernet::VlanRange>();
        ent_->parent = this;
        vlan_range.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::Interface::TwoGigabitEthernet::Switch>();
        }
        return switch_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:srr-queue")
    {
        if(srr_queue == nullptr)
        {
            srr_queue = std::make_shared<Native::Interface::TwoGigabitEthernet::SrrQueue>();
        }
        return srr_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:macsec-option")
    {
        if(cisco_ios_xe_switch_macsec_option == nullptr)
        {
            cisco_ios_xe_switch_macsec_option = std::make_shared<Native::Interface::TwoGigabitEthernet::CiscoIOSXESwitchMacsecOption>();
        }
        return cisco_ios_xe_switch_macsec_option;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:device-tracking")
    {
        if(device_tracking == nullptr)
        {
            device_tracking = std::make_shared<Native::Interface::TwoGigabitEthernet::DeviceTracking>();
        }
        return device_tracking;
    }

    if(child_yang_name == "Cisco-IOS-XE-udld:udld")
    {
        if(udld == nullptr)
        {
            udld = std::make_shared<Native::Interface::TwoGigabitEthernet::Udld>();
        }
        return udld;
    }

    if(child_yang_name == "Cisco-IOS-XE-umbrella:umbrella")
    {
        if(umbrella == nullptr)
        {
            umbrella = std::make_shared<Native::Interface::TwoGigabitEthernet::Umbrella>();
        }
        return umbrella;
    }

    if(child_yang_name == "Cisco-IOS-XE-utd:utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::TwoGigabitEthernet::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "Cisco-IOS-XE-zone:zone-member")
    {
        if(zone_member == nullptr)
        {
            zone_member = std::make_shared<Native::Interface::TwoGigabitEthernet::ZoneMember>();
        }
        return zone_member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::TwoGigabitEthernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switchport_conf != nullptr)
    {
        _children["switchport-conf"] = switchport_conf;
    }

    if(switchport != nullptr)
    {
        _children["switchport"] = switchport;
    }

    if(stackwise_virtual != nullptr)
    {
        _children["stackwise-virtual"] = stackwise_virtual;
    }

    if(arp != nullptr)
    {
        _children["arp"] = arp;
    }

    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    if(cemoudp != nullptr)
    {
        _children["cemoudp"] = cemoudp;
    }

    if(cws_tunnel != nullptr)
    {
        _children["cws-tunnel"] = cws_tunnel;
    }

    if(l2protocol_tunnel != nullptr)
    {
        _children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(fair_queue_conf != nullptr)
    {
        _children["fair-queue-conf"] = fair_queue_conf;
    }

    if(fair_queue != nullptr)
    {
        _children["fair-queue"] = fair_queue;
    }

    if(flowcontrol != nullptr)
    {
        _children["flowcontrol"] = flowcontrol;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        _children["keepalive-settings"] = keepalive_settings;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(dampening != nullptr)
    {
        _children["dampening"] = dampening;
    }

    if(domain != nullptr)
    {
        _children["domain"] = domain;
    }

    count_ = 0;
    for (auto ent_ : hold_queue.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(ip_vrf != nullptr)
    {
        _children["ip-vrf"] = ip_vrf;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
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

    if(mdix != nullptr)
    {
        _children["mdix"] = mdix;
    }

    if(mop != nullptr)
    {
        _children["mop"] = mop;
    }

    if(interface_qos != nullptr)
    {
        _children["interface_qos"] = interface_qos;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(standby != nullptr)
    {
        _children["standby"] = standby;
    }

    if(access_session != nullptr)
    {
        _children["access-session"] = access_session;
    }

    if(storm_control != nullptr)
    {
        _children["storm-control"] = storm_control;
    }

    if(trust != nullptr)
    {
        _children["trust"] = trust;
    }

    if(priority_queue != nullptr)
    {
        _children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        _children["rcv-queue"] = rcv_queue;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(pm_path != nullptr)
    {
        _children["pm-path"] = pm_path;
    }

    if(carrier_delay != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:carrier-delay"] = carrier_delay;
    }

    if(channel_group != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:channel-group"] = channel_group;
    }

    if(ethernet != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:ethernet"] = ethernet;
    }

    if(eapol != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:eapol"] = eapol;
    }

    if(synchronous != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:synchronous"] = synchronous;
    }

    if(speed != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:speed"] = speed;
    }

    if(negotiation != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:negotiation"] = negotiation;
    }

    if(plim != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:plim"] = plim;
    }

    if(pppoe != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:pppoe"] = pppoe;
    }

    if(service != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:service"] = service;
    }

    if(lacp != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:lacp"] = lacp;
    }

    if(cisco_ios_xe_ethernet_macsec_option != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:macsec-option"] = cisco_ios_xe_ethernet_macsec_option;
    }

    if(xconnect != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:xconnect"] = xconnect;
    }

    if(evpn != nullptr)
    {
        _children["Cisco-IOS-XE-l2vpn:evpn"] = evpn;
    }

    if(snmp != nullptr)
    {
        _children["Cisco-IOS-XE-snmp:snmp"] = snmp;
    }

    if(ospfv3 != nullptr)
    {
        _children["Cisco-IOS-XE-ospfv3:ospfv3"] = ospfv3;
    }

    if(cdp != nullptr)
    {
        _children["Cisco-IOS-XE-cdp:cdp"] = cdp;
    }

    if(crypto != nullptr)
    {
        _children["Cisco-IOS-XE-crypto:crypto"] = crypto;
    }

    if(cts != nullptr)
    {
        _children["Cisco-IOS-XE-cts:cts"] = cts;
    }

    if(dot1x != nullptr)
    {
        _children["Cisco-IOS-XE-dot1x:dot1x"] = dot1x;
    }

    if(et_analytics != nullptr)
    {
        _children["Cisco-IOS-XE-eta:et-analytics"] = et_analytics;
    }

    if(performance != nullptr)
    {
        _children["Cisco-IOS-XE-ezpm:performance"] = performance;
    }

    if(service_policy != nullptr)
    {
        _children["Cisco-IOS-XE-policy:service-policy"] = service_policy;
    }

    if(fabric_domain != nullptr)
    {
        _children["Cisco-IOS-XE-iwanfabric:fabric-domain"] = fabric_domain;
    }

    if(lisp != nullptr)
    {
        _children["Cisco-IOS-XE-lisp:lisp"] = lisp;
    }

    if(lldp != nullptr)
    {
        _children["Cisco-IOS-XE-lldp:lldp"] = lldp;
    }

    if(mka != nullptr)
    {
        _children["Cisco-IOS-XE-mka:mka"] = mka;
    }

    if(mvrp != nullptr)
    {
        _children["Cisco-IOS-XE-mvrp:mvrp"] = mvrp;
    }

    if(analysis_module != nullptr)
    {
        _children["Cisco-IOS-XE-nam:analysis-module"] = analysis_module;
    }

    if(ntp != nullptr)
    {
        _children["Cisco-IOS-XE-ntp:ntp"] = ntp;
    }

    if(power != nullptr)
    {
        _children["Cisco-IOS-XE-power:power"] = power;
    }

    if(authentication != nullptr)
    {
        _children["Cisco-IOS-XE-sanet:authentication"] = authentication;
    }

    if(mab != nullptr)
    {
        _children["Cisco-IOS-XE-sanet:mab"] = mab;
    }

    if(spanning_tree != nullptr)
    {
        _children["Cisco-IOS-XE-spanning-tree:spanning-tree"] = spanning_tree;
    }

    if(auto_ != nullptr)
    {
        _children["Cisco-IOS-XE-switch:auto"] = auto_;
    }

    if(datalink != nullptr)
    {
        _children["Cisco-IOS-XE-switch:datalink"] = datalink;
    }

    if(energywise != nullptr)
    {
        _children["Cisco-IOS-XE-switch:energywise"] = energywise;
    }

    if(location != nullptr)
    {
        _children["Cisco-IOS-XE-switch:location"] = location;
    }

    if(mac != nullptr)
    {
        _children["Cisco-IOS-XE-switch:mac"] = mac;
    }

    if(macro != nullptr)
    {
        _children["Cisco-IOS-XE-switch:macro"] = macro;
    }

    if(dual_active != nullptr)
    {
        _children["Cisco-IOS-XE-switch:dual-active"] = dual_active;
    }

    if(load_balancing != nullptr)
    {
        _children["Cisco-IOS-XE-switch:load-balancing"] = load_balancing;
    }

    count_ = 0;
    for (auto ent_ : vlan_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(switch_ != nullptr)
    {
        _children["Cisco-IOS-XE-switch:switch"] = switch_;
    }

    if(srr_queue != nullptr)
    {
        _children["Cisco-IOS-XE-switch:srr-queue"] = srr_queue;
    }

    if(cisco_ios_xe_switch_macsec_option != nullptr)
    {
        _children["Cisco-IOS-XE-switch:macsec-option"] = cisco_ios_xe_switch_macsec_option;
    }

    if(device_tracking != nullptr)
    {
        _children["Cisco-IOS-XE-switch:device-tracking"] = device_tracking;
    }

    if(udld != nullptr)
    {
        _children["Cisco-IOS-XE-udld:udld"] = udld;
    }

    if(umbrella != nullptr)
    {
        _children["Cisco-IOS-XE-umbrella:umbrella"] = umbrella;
    }

    if(utd != nullptr)
    {
        _children["Cisco-IOS-XE-utd:utd"] = utd;
    }

    if(zone_member != nullptr)
    {
        _children["Cisco-IOS-XE-zone:zone-member"] = zone_member;
    }

    return _children;
}

void Native::Interface::TwoGigabitEthernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-state")
    {
        if_state = value;
        if_state.value_namespace = name_space;
        if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth = value;
        max_reserved_bandwidth.value_namespace = name_space;
        max_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-insertion")
    {
        service_insertion = value;
        service_insertion.value_namespace = name_space;
        service_insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ethernet:channel-protocol")
    {
        channel_protocol = value;
        channel_protocol.value_namespace = name_space;
        channel_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ethernet:duplex")
    {
        duplex = value;
        duplex.value_namespace = name_space;
        duplex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ethernet:macsec")
    {
        cisco_ios_xe_ethernet_macsec = value;
        cisco_ios_xe_ethernet_macsec.value_namespace = name_space;
        cisco_ios_xe_ethernet_macsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-nat:nat66")
    {
        nat66 = value;
        nat66.value_namespace = name_space;
        nat66.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-switch:macsec")
    {
        cisco_ios_xe_switch_macsec = value;
        cisco_ios_xe_switch_macsec.value_namespace = name_space;
        cisco_ios_xe_switch_macsec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::TwoGigabitEthernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "if-state")
    {
        if_state.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "service-insertion")
    {
        service_insertion.yfilter = yfilter;
    }
    if(value_path == "channel-protocol")
    {
        channel_protocol.yfilter = yfilter;
    }
    if(value_path == "duplex")
    {
        duplex.yfilter = yfilter;
    }
    if(value_path == "macsec")
    {
        cisco_ios_xe_ethernet_macsec.yfilter = yfilter;
    }
    if(value_path == "nat66")
    {
        nat66.yfilter = yfilter;
    }
    if(value_path == "macsec")
    {
        cisco_ios_xe_switch_macsec.yfilter = yfilter;
    }
}

bool Native::Interface::TwoGigabitEthernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport-conf" || name == "switchport" || name == "stackwise-virtual" || name == "arp" || name == "backup" || name == "cemoudp" || name == "cws-tunnel" || name == "l2protocol-tunnel" || name == "encapsulation" || name == "fair-queue-conf" || name == "fair-queue" || name == "flowcontrol" || name == "isis" || name == "keepalive-settings" || name == "bfd" || name == "bandwidth" || name == "dampening" || name == "domain" || name == "hold-queue" || name == "mpls" || name == "ip-vrf" || name == "vrf" || name == "ip" || name == "ipv6" || name == "logging" || name == "mdix" || name == "mop" || name == "interface_qos" || name == "source" || name == "standby" || name == "access-session" || name == "storm-control" || name == "trust" || name == "priority-queue" || name == "rcv-queue" || name == "peer" || name == "pm-path" || name == "carrier-delay" || name == "channel-group" || name == "ethernet" || name == "eapol" || name == "synchronous" || name == "speed" || name == "negotiation" || name == "plim" || name == "pppoe" || name == "service" || name == "lacp" || name == "macsec-option" || name == "xconnect" || name == "evpn" || name == "snmp" || name == "ospfv3" || name == "cdp" || name == "crypto" || name == "cts" || name == "dot1x" || name == "et-analytics" || name == "performance" || name == "service-policy" || name == "fabric-domain" || name == "lisp" || name == "lldp" || name == "mka" || name == "mvrp" || name == "analysis-module" || name == "ntp" || name == "power" || name == "authentication" || name == "mab" || name == "spanning-tree" || name == "auto" || name == "datalink" || name == "energywise" || name == "location" || name == "mac" || name == "macro" || name == "dual-active" || name == "load-balancing" || name == "vlan-range" || name == "switch" || name == "srr-queue" || name == "macsec-option" || name == "device-tracking" || name == "udld" || name == "umbrella" || name == "utd" || name == "zone-member" || name == "name" || name == "media-type" || name == "port-type" || name == "description" || name == "mac-address" || name == "shutdown" || name == "keepalive" || name == "if-state" || name == "delay" || name == "load-interval" || name == "max-reserved-bandwidth" || name == "mtu" || name == "service-insertion" || name == "channel-protocol" || name == "duplex" || name == "macsec" || name == "nat66" || name == "macsec")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::GigabitEthernet::ServicePolicy::Type::PerformanceMonitor::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::ControlDirection::both {0, "both"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::ControlDirection::in {1, "in"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::PortControl::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::PortControl::force_authorized {1, "force-authorized"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::PortControl::force_unauthorized {2, "force-unauthorized"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::Violation::protect {0, "protect"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::Violation::replace {1, "replace"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::Violation::restrict {2, "restrict"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Authentication::Violation::shutdown {3, "shutdown"};

const Enum::YLeaf Native::Interface::GigabitEthernet::SpanningTree::Bpdufilter::disable {0, "disable"};
const Enum::YLeaf Native::Interface::GigabitEthernet::SpanningTree::Bpdufilter::enable {1, "enable"};

const Enum::YLeaf Native::Interface::GigabitEthernet::SpanningTree::Guard::loop {0, "loop"};
const Enum::YLeaf Native::Interface::GigabitEthernet::SpanningTree::Guard::none {1, "none"};
const Enum::YLeaf Native::Interface::GigabitEthernet::SpanningTree::Guard::root {2, "root"};

const Enum::YLeaf Native::Interface::GigabitEthernet::SpanningTree::LinkType::point_to_point {0, "point-to-point"};
const Enum::YLeaf Native::Interface::GigabitEthernet::SpanningTree::LinkType::shared {1, "shared"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::InputOutput::input {0, "input"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Datalink::Flow::Monitor::InputOutput::output {1, "output"};

const Enum::YLeaf Native::Interface::GigabitEthernet::Mac::AccessGroup::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::GigabitEthernet::Mac::AccessGroup::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::TwoGigabitEthernet::MediaType::auto_select {0, "auto-select"};
const Enum::YLeaf Native::Interface::TwoGigabitEthernet::MediaType::rj45 {1, "rj45"};
const Enum::YLeaf Native::Interface::TwoGigabitEthernet::MediaType::sfp {2, "sfp"};

const Enum::YLeaf Native::Interface::TwoGigabitEthernet::PortType::nni {0, "nni"};

const Enum::YLeaf Native::Interface::TwoGigabitEthernet::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::TwoGigabitEthernet::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::TwoGigabitEthernet::ChannelProtocol::lacp {0, "lacp"};
const Enum::YLeaf Native::Interface::TwoGigabitEthernet::ChannelProtocol::pagp {1, "pagp"};

const Enum::YLeaf Native::Interface::TwoGigabitEthernet::Duplex::auto_ {0, "auto"};
const Enum::YLeaf Native::Interface::TwoGigabitEthernet::Duplex::full {1, "full"};
const Enum::YLeaf Native::Interface::TwoGigabitEthernet::Duplex::half {2, "half"};

const Enum::YLeaf Native::Interface::TwoGigabitEthernet::Nat66::inside {0, "inside"};
const Enum::YLeaf Native::Interface::TwoGigabitEthernet::Nat66::outside {1, "outside"};


}
}

