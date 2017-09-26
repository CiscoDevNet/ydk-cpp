
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_cfg {

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrTypes()
{

    yang_name = "frr-types"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::~FrrTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::has_data() const
{
    for (std::size_t index=0; index<frr_type.size(); index++)
    {
        if(frr_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::has_operation() const
{
    for (std::size_t index=0; index<frr_type.size(); index++)
    {
        if(frr_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-type")
    {
        for(auto const & c : frr_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType>();
        c->parent = this;
        frr_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::FrrType()
    :
    level{YType::enumeration, "level"},
    type{YType::enumeration, "type"}
{

    yang_name = "frr-type"; yang_parent_name = "frr-types"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::~FrrType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::has_data() const
{
    return level.is_set
	|| type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-type" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrTypes::FrrType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterfaces()
{

    yang_name = "frrlfa-candidate-interfaces"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::~FrrlfaCandidateInterfaces()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<frrlfa_candidate_interface.size(); index++)
    {
        if(frrlfa_candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frrlfa_candidate_interface.size(); index++)
    {
        if(frrlfa_candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrlfa-candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrlfa-candidate-interface")
    {
        for(auto const & c : frrlfa_candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface>();
        c->parent = this;
        frrlfa_candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frrlfa_candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrlfa-candidate-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::FrrlfaCandidateInterface()
    :
    interface_name{YType::str, "interface-name"},
    frr_type{YType::enumeration, "frr-type"},
    level{YType::uint32, "level"}
{

    yang_name = "frrlfa-candidate-interface"; yang_parent_name = "frrlfa-candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::~FrrlfaCandidateInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_data() const
{
    return interface_name.is_set
	|| frr_type.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrlfa-candidate-interface" <<"[interface-name='" <<interface_name <<"']" <<"[frr-type='" <<frr_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "frr-type" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaTypes()
{

    yang_name = "frrtilfa-types"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::~FrrtilfaTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::has_data() const
{
    for (std::size_t index=0; index<frrtilfa_type.size(); index++)
    {
        if(frrtilfa_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::has_operation() const
{
    for (std::size_t index=0; index<frrtilfa_type.size(); index++)
    {
        if(frrtilfa_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrtilfa-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrtilfa-type")
    {
        for(auto const & c : frrtilfa_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType>();
        c->parent = this;
        frrtilfa_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frrtilfa_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrtilfa-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::FrrtilfaType()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "frrtilfa-type"; yang_parent_name = "frrtilfa-types"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::~FrrtilfaType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_data() const
{
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrtilfa-type" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefaults()
{

    yang_name = "interface-frr-tiebreaker-defaults"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::~InterfaceFrrTiebreakerDefaults()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_data() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker_default.size(); index++)
    {
        if(interface_frr_tiebreaker_default[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_operation() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker_default.size(); index++)
    {
        if(interface_frr_tiebreaker_default[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker-defaults";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-frr-tiebreaker-default")
    {
        for(auto const & c : interface_frr_tiebreaker_default)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault>();
        c->parent = this;
        interface_frr_tiebreaker_default.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_frr_tiebreaker_default)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-frr-tiebreaker-default")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::InterfaceFrrTiebreakerDefault()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "interface-frr-tiebreaker-default"; yang_parent_name = "interface-frr-tiebreaker-defaults"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::~InterfaceFrrTiebreakerDefault()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_data() const
{
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker-default" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreakers()
{

    yang_name = "interface-frr-tiebreakers"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::~InterfaceFrrTiebreakers()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::has_data() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker.size(); index++)
    {
        if(interface_frr_tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::has_operation() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker.size(); index++)
    {
        if(interface_frr_tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-frr-tiebreaker")
    {
        for(auto const & c : interface_frr_tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker>();
        c->parent = this;
        interface_frr_tiebreaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_frr_tiebreaker)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-frr-tiebreaker")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::InterfaceFrrTiebreaker()
    :
    level{YType::enumeration, "level"},
    tiebreaker{YType::enumeration, "tiebreaker"},
    index_{YType::uint32, "index"}
{

    yang_name = "interface-frr-tiebreaker"; yang_parent_name = "interface-frr-tiebreakers"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::~InterfaceFrrTiebreaker()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_data() const
{
    return level.is_set
	|| tiebreaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker" <<"[level='" <<level <<"']" <<"[tiebreaker='" <<tiebreaker <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "tiebreaker" || name == "index")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::InterfaceLinkGroup()
    :
    level{YType::uint32, "level"},
    link_group{YType::str, "link-group"}
{

    yang_name = "interface-link-group"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::~InterfaceLinkGroup()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::has_data() const
{
    return level.is_set
	|| link_group.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(link_group.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (link_group.is_set || is_set(link_group.yfilter)) leaf_name_data.push_back(link_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-group")
    {
        link_group = value;
        link_group.value_namespace = name_space;
        link_group.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "link-group")
    {
        link_group.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::InterfaceLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "link-group")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSids()
{

    yang_name = "manual-adj-sids"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::~ManualAdjSids()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::has_data() const
{
    for (std::size_t index=0; index<manual_adj_sid.size(); index++)
    {
        if(manual_adj_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::has_operation() const
{
    for (std::size_t index=0; index<manual_adj_sid.size(); index++)
    {
        if(manual_adj_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual-adj-sid")
    {
        for(auto const & c : manual_adj_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid>();
        c->parent = this;
        manual_adj_sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : manual_adj_sid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual-adj-sid")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::ManualAdjSid()
    :
    level{YType::enumeration, "level"},
    sid_type{YType::enumeration, "sid-type"},
    sid{YType::uint32, "sid"},
    protected_{YType::enumeration, "protected"}
{

    yang_name = "manual-adj-sid"; yang_parent_name = "manual-adj-sids"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::~ManualAdjSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::has_data() const
{
    return level.is_set
	|| sid_type.is_set
	|| sid.is_set
	|| protected_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sid" <<"[level='" <<level <<"']" <<"[sid-type='" <<sid_type <<"']" <<"[sid='" <<sid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::ManualAdjSids::ManualAdjSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "sid-type" || name == "sid" || name == "protected")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metrics()
{

    yang_name = "metrics"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::~Metrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric>();
        c->parent = this;
        metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::Metric()
    :
    level{YType::enumeration, "level"},
    metric{YType::str, "metric"}
{

    yang_name = "metric"; yang_parent_name = "metrics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::~Metric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::has_data() const
{
    return level.is_set
	|| metric.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::MplsLdp()
    :
    sync_level{YType::uint32, "sync-level"}
{

    yang_name = "mpls-ldp"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::~MplsLdp()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::has_data() const
{
    return sync_level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_level.is_set || is_set(sync_level.yfilter)) leaf_name_data.push_back(sync_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-level")
    {
        sync_level = value;
        sync_level.value_namespace = name_space;
        sync_level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-level")
    {
        sync_level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::PrefixSid()
    :
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"},
    php{YType::enumeration, "php"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{

    yang_name = "prefix-sid"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::~PrefixSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::has_data() const
{
    return explicit_null.is_set
	|| nflag_clear.is_set
	|| php.is_set
	|| type.is_set
	|| value_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(nflag_clear.yfilter)
	|| ydk::is_set(php.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.yfilter)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());
    if (php.is_set || is_set(php.yfilter)) leaf_name_data.push_back(php.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
        nflag_clear.value_namespace = name_space;
        nflag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "php")
    {
        php = value;
        php.value_namespace = name_space;
        php.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear.yfilter = yfilter;
    }
    if(value_path == "php")
    {
        php.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "nflag-clear" || name == "php" || name == "type" || name == "value")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::PrefixSspfsid()
    :
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"},
    php{YType::enumeration, "php"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{

    yang_name = "prefix-sspfsid"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::~PrefixSspfsid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::has_data() const
{
    return explicit_null.is_set
	|| nflag_clear.is_set
	|| php.is_set
	|| type.is_set
	|| value_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(nflag_clear.yfilter)
	|| ydk::is_set(php.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sspfsid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.yfilter)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());
    if (php.is_set || is_set(php.yfilter)) leaf_name_data.push_back(php.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
        nflag_clear.value_namespace = name_space;
        nflag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "php")
    {
        php = value;
        php.value_namespace = name_space;
        php.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear.yfilter = yfilter;
    }
    if(value_path == "php")
    {
        php.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::PrefixSspfsid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "nflag-clear" || name == "php" || name == "type" || name == "value")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weights()
{

    yang_name = "weights"; yang_parent_name = "interface-af-data"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::~Weights()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::has_data() const
{
    for (std::size_t index=0; index<weight.size(); index++)
    {
        if(weight[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::has_operation() const
{
    for (std::size_t index=0; index<weight.size(); index++)
    {
        if(weight[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weights";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "weight")
    {
        for(auto const & c : weight)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight>();
        c->parent = this;
        weight.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : weight)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::Weight()
    :
    level{YType::enumeration, "level"},
    weight{YType::uint32, "weight"}
{

    yang_name = "weight"; yang_parent_name = "weights"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::~Weight()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::has_data() const
{
    return level.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Weights::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::TopologyName()
    :
    topology_name{YType::str, "topology-name"},
    interface_af_state{YType::enumeration, "interface-af-state"},
    running{YType::empty, "running"}
    	,
    admin_tags(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags>())
	,auto_metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics>())
	,interface_frr_table(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable>())
	,interface_link_group(nullptr) // presence node
	,manual_adj_sids(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids>())
	,metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics>())
	,mpls_ldp(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp>())
	,prefix_sid(nullptr) // presence node
	,prefix_sspfsid(nullptr) // presence node
	,weights(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights>())
{
    admin_tags->parent = this;
    auto_metrics->parent = this;
    interface_frr_table->parent = this;
    manual_adj_sids->parent = this;
    metrics->parent = this;
    mpls_ldp->parent = this;
    weights->parent = this;

    yang_name = "topology-name"; yang_parent_name = "interface-af"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::~TopologyName()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::has_data() const
{
    return topology_name.is_set
	|| interface_af_state.is_set
	|| running.is_set
	|| (admin_tags !=  nullptr && admin_tags->has_data())
	|| (auto_metrics !=  nullptr && auto_metrics->has_data())
	|| (interface_frr_table !=  nullptr && interface_frr_table->has_data())
	|| (interface_link_group !=  nullptr && interface_link_group->has_data())
	|| (manual_adj_sids !=  nullptr && manual_adj_sids->has_data())
	|| (metrics !=  nullptr && metrics->has_data())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_data())
	|| (prefix_sid !=  nullptr && prefix_sid->has_data())
	|| (prefix_sspfsid !=  nullptr && prefix_sspfsid->has_data())
	|| (weights !=  nullptr && weights->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(interface_af_state.yfilter)
	|| ydk::is_set(running.yfilter)
	|| (admin_tags !=  nullptr && admin_tags->has_operation())
	|| (auto_metrics !=  nullptr && auto_metrics->has_operation())
	|| (interface_frr_table !=  nullptr && interface_frr_table->has_operation())
	|| (interface_link_group !=  nullptr && interface_link_group->has_operation())
	|| (manual_adj_sids !=  nullptr && manual_adj_sids->has_operation())
	|| (metrics !=  nullptr && metrics->has_operation())
	|| (mpls_ldp !=  nullptr && mpls_ldp->has_operation())
	|| (prefix_sid !=  nullptr && prefix_sid->has_operation())
	|| (prefix_sspfsid !=  nullptr && prefix_sspfsid->has_operation())
	|| (weights !=  nullptr && weights->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-name" <<"[topology-name='" <<topology_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (interface_af_state.is_set || is_set(interface_af_state.yfilter)) leaf_name_data.push_back(interface_af_state.get_name_leafdata());
    if (running.is_set || is_set(running.yfilter)) leaf_name_data.push_back(running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-tags")
    {
        if(admin_tags == nullptr)
        {
            admin_tags = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags>();
        }
        return admin_tags;
    }

    if(child_yang_name == "auto-metrics")
    {
        if(auto_metrics == nullptr)
        {
            auto_metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics>();
        }
        return auto_metrics;
    }

    if(child_yang_name == "interface-frr-table")
    {
        if(interface_frr_table == nullptr)
        {
            interface_frr_table = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable>();
        }
        return interface_frr_table;
    }

    if(child_yang_name == "interface-link-group")
    {
        if(interface_link_group == nullptr)
        {
            interface_link_group = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup>();
        }
        return interface_link_group;
    }

    if(child_yang_name == "manual-adj-sids")
    {
        if(manual_adj_sids == nullptr)
        {
            manual_adj_sids = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids>();
        }
        return manual_adj_sids;
    }

    if(child_yang_name == "metrics")
    {
        if(metrics == nullptr)
        {
            metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics>();
        }
        return metrics;
    }

    if(child_yang_name == "mpls-ldp")
    {
        if(mpls_ldp == nullptr)
        {
            mpls_ldp = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp>();
        }
        return mpls_ldp;
    }

    if(child_yang_name == "prefix-sid")
    {
        if(prefix_sid == nullptr)
        {
            prefix_sid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid>();
        }
        return prefix_sid;
    }

    if(child_yang_name == "prefix-sspfsid")
    {
        if(prefix_sspfsid == nullptr)
        {
            prefix_sspfsid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid>();
        }
        return prefix_sspfsid;
    }

    if(child_yang_name == "weights")
    {
        if(weights == nullptr)
        {
            weights = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights>();
        }
        return weights;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admin_tags != nullptr)
    {
        children["admin-tags"] = admin_tags;
    }

    if(auto_metrics != nullptr)
    {
        children["auto-metrics"] = auto_metrics;
    }

    if(interface_frr_table != nullptr)
    {
        children["interface-frr-table"] = interface_frr_table;
    }

    if(interface_link_group != nullptr)
    {
        children["interface-link-group"] = interface_link_group;
    }

    if(manual_adj_sids != nullptr)
    {
        children["manual-adj-sids"] = manual_adj_sids;
    }

    if(metrics != nullptr)
    {
        children["metrics"] = metrics;
    }

    if(mpls_ldp != nullptr)
    {
        children["mpls-ldp"] = mpls_ldp;
    }

    if(prefix_sid != nullptr)
    {
        children["prefix-sid"] = prefix_sid;
    }

    if(prefix_sspfsid != nullptr)
    {
        children["prefix-sspfsid"] = prefix_sspfsid;
    }

    if(weights != nullptr)
    {
        children["weights"] = weights;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-af-state")
    {
        interface_af_state = value;
        interface_af_state.value_namespace = name_space;
        interface_af_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running")
    {
        running = value;
        running.value_namespace = name_space;
        running.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "interface-af-state")
    {
        interface_af_state.yfilter = yfilter;
    }
    if(value_path == "running")
    {
        running.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-tags" || name == "auto-metrics" || name == "interface-frr-table" || name == "interface-link-group" || name == "manual-adj-sids" || name == "metrics" || name == "mpls-ldp" || name == "prefix-sid" || name == "prefix-sspfsid" || name == "weights" || name == "topology-name" || name == "interface-af-state" || name == "running")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTags()
{

    yang_name = "admin-tags"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::~AdminTags()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::has_data() const
{
    for (std::size_t index=0; index<admin_tag.size(); index++)
    {
        if(admin_tag[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::has_operation() const
{
    for (std::size_t index=0; index<admin_tag.size(); index++)
    {
        if(admin_tag[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-tags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admin-tag")
    {
        for(auto const & c : admin_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag>();
        c->parent = this;
        admin_tag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : admin_tag)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-tag")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::AdminTag()
    :
    level{YType::enumeration, "level"},
    admin_tag{YType::uint32, "admin-tag"}
{

    yang_name = "admin-tag"; yang_parent_name = "admin-tags"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::~AdminTag()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::has_data() const
{
    return level.is_set
	|| admin_tag.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(admin_tag.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-tag" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (admin_tag.is_set || is_set(admin_tag.yfilter)) leaf_name_data.push_back(admin_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-tag")
    {
        admin_tag = value;
        admin_tag.value_namespace = name_space;
        admin_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "admin-tag")
    {
        admin_tag.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AdminTags::AdminTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "admin-tag")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetrics()
{

    yang_name = "auto-metrics"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::~AutoMetrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::has_data() const
{
    for (std::size_t index=0; index<auto_metric.size(); index++)
    {
        if(auto_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::has_operation() const
{
    for (std::size_t index=0; index<auto_metric.size(); index++)
    {
        if(auto_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-metric")
    {
        for(auto const & c : auto_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric>();
        c->parent = this;
        auto_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : auto_metric)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::AutoMetric()
    :
    level{YType::enumeration, "level"},
    proactive_protect{YType::uint32, "proactive-protect"}
{

    yang_name = "auto-metric"; yang_parent_name = "auto-metrics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::~AutoMetric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::has_data() const
{
    return level.is_set
	|| proactive_protect.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(proactive_protect.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-metric" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (proactive_protect.is_set || is_set(proactive_protect.yfilter)) leaf_name_data.push_back(proactive_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proactive-protect")
    {
        proactive_protect = value;
        proactive_protect.value_namespace = name_space;
        proactive_protect.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "proactive-protect")
    {
        proactive_protect.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::AutoMetrics::AutoMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "proactive-protect")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTable()
    :
    frr_exclude_interfaces(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces>())
	,frr_remote_lfa_max_metrics(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics>())
	,frr_remote_lfa_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes>())
	,frr_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes>())
	,frrlfa_candidate_interfaces(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces>())
	,frrtilfa_types(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes>())
	,interface_frr_tiebreaker_defaults(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults>())
	,interface_frr_tiebreakers(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers>())
{
    frr_exclude_interfaces->parent = this;
    frr_remote_lfa_max_metrics->parent = this;
    frr_remote_lfa_types->parent = this;
    frr_types->parent = this;
    frrlfa_candidate_interfaces->parent = this;
    frrtilfa_types->parent = this;
    interface_frr_tiebreaker_defaults->parent = this;
    interface_frr_tiebreakers->parent = this;

    yang_name = "interface-frr-table"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::~InterfaceFrrTable()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::has_data() const
{
    return (frr_exclude_interfaces !=  nullptr && frr_exclude_interfaces->has_data())
	|| (frr_remote_lfa_max_metrics !=  nullptr && frr_remote_lfa_max_metrics->has_data())
	|| (frr_remote_lfa_types !=  nullptr && frr_remote_lfa_types->has_data())
	|| (frr_types !=  nullptr && frr_types->has_data())
	|| (frrlfa_candidate_interfaces !=  nullptr && frrlfa_candidate_interfaces->has_data())
	|| (frrtilfa_types !=  nullptr && frrtilfa_types->has_data())
	|| (interface_frr_tiebreaker_defaults !=  nullptr && interface_frr_tiebreaker_defaults->has_data())
	|| (interface_frr_tiebreakers !=  nullptr && interface_frr_tiebreakers->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::has_operation() const
{
    return is_set(yfilter)
	|| (frr_exclude_interfaces !=  nullptr && frr_exclude_interfaces->has_operation())
	|| (frr_remote_lfa_max_metrics !=  nullptr && frr_remote_lfa_max_metrics->has_operation())
	|| (frr_remote_lfa_types !=  nullptr && frr_remote_lfa_types->has_operation())
	|| (frr_types !=  nullptr && frr_types->has_operation())
	|| (frrlfa_candidate_interfaces !=  nullptr && frrlfa_candidate_interfaces->has_operation())
	|| (frrtilfa_types !=  nullptr && frrtilfa_types->has_operation())
	|| (interface_frr_tiebreaker_defaults !=  nullptr && interface_frr_tiebreaker_defaults->has_operation())
	|| (interface_frr_tiebreakers !=  nullptr && interface_frr_tiebreakers->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-exclude-interfaces")
    {
        if(frr_exclude_interfaces == nullptr)
        {
            frr_exclude_interfaces = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces>();
        }
        return frr_exclude_interfaces;
    }

    if(child_yang_name == "frr-remote-lfa-max-metrics")
    {
        if(frr_remote_lfa_max_metrics == nullptr)
        {
            frr_remote_lfa_max_metrics = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics>();
        }
        return frr_remote_lfa_max_metrics;
    }

    if(child_yang_name == "frr-remote-lfa-types")
    {
        if(frr_remote_lfa_types == nullptr)
        {
            frr_remote_lfa_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes>();
        }
        return frr_remote_lfa_types;
    }

    if(child_yang_name == "frr-types")
    {
        if(frr_types == nullptr)
        {
            frr_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes>();
        }
        return frr_types;
    }

    if(child_yang_name == "frrlfa-candidate-interfaces")
    {
        if(frrlfa_candidate_interfaces == nullptr)
        {
            frrlfa_candidate_interfaces = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces>();
        }
        return frrlfa_candidate_interfaces;
    }

    if(child_yang_name == "frrtilfa-types")
    {
        if(frrtilfa_types == nullptr)
        {
            frrtilfa_types = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes>();
        }
        return frrtilfa_types;
    }

    if(child_yang_name == "interface-frr-tiebreaker-defaults")
    {
        if(interface_frr_tiebreaker_defaults == nullptr)
        {
            interface_frr_tiebreaker_defaults = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults>();
        }
        return interface_frr_tiebreaker_defaults;
    }

    if(child_yang_name == "interface-frr-tiebreakers")
    {
        if(interface_frr_tiebreakers == nullptr)
        {
            interface_frr_tiebreakers = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers>();
        }
        return interface_frr_tiebreakers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(frr_exclude_interfaces != nullptr)
    {
        children["frr-exclude-interfaces"] = frr_exclude_interfaces;
    }

    if(frr_remote_lfa_max_metrics != nullptr)
    {
        children["frr-remote-lfa-max-metrics"] = frr_remote_lfa_max_metrics;
    }

    if(frr_remote_lfa_types != nullptr)
    {
        children["frr-remote-lfa-types"] = frr_remote_lfa_types;
    }

    if(frr_types != nullptr)
    {
        children["frr-types"] = frr_types;
    }

    if(frrlfa_candidate_interfaces != nullptr)
    {
        children["frrlfa-candidate-interfaces"] = frrlfa_candidate_interfaces;
    }

    if(frrtilfa_types != nullptr)
    {
        children["frrtilfa-types"] = frrtilfa_types;
    }

    if(interface_frr_tiebreaker_defaults != nullptr)
    {
        children["interface-frr-tiebreaker-defaults"] = interface_frr_tiebreaker_defaults;
    }

    if(interface_frr_tiebreakers != nullptr)
    {
        children["interface-frr-tiebreakers"] = interface_frr_tiebreakers;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-exclude-interfaces" || name == "frr-remote-lfa-max-metrics" || name == "frr-remote-lfa-types" || name == "frr-types" || name == "frrlfa-candidate-interfaces" || name == "frrtilfa-types" || name == "interface-frr-tiebreaker-defaults" || name == "interface-frr-tiebreakers")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterfaces()
{

    yang_name = "frr-exclude-interfaces"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::~FrrExcludeInterfaces()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<frr_exclude_interface.size(); index++)
    {
        if(frr_exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frr_exclude_interface.size(); index++)
    {
        if(frr_exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-exclude-interface")
    {
        for(auto const & c : frr_exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface>();
        c->parent = this;
        frr_exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-exclude-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::FrrExcludeInterface()
    :
    interface_name{YType::str, "interface-name"},
    frr_type{YType::enumeration, "frr-type"},
    level{YType::uint32, "level"}
{

    yang_name = "frr-exclude-interface"; yang_parent_name = "frr-exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::~FrrExcludeInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_data() const
{
    return interface_name.is_set
	|| frr_type.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-exclude-interface" <<"[interface-name='" <<interface_name <<"']" <<"[frr-type='" <<frr_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrExcludeInterfaces::FrrExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "frr-type" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetrics()
{

    yang_name = "frr-remote-lfa-max-metrics"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::~FrrRemoteLfaMaxMetrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_data() const
{
    for (std::size_t index=0; index<frr_remote_lfa_max_metric.size(); index++)
    {
        if(frr_remote_lfa_max_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_max_metric.size(); index++)
    {
        if(frr_remote_lfa_max_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-max-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-remote-lfa-max-metric")
    {
        for(auto const & c : frr_remote_lfa_max_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric>();
        c->parent = this;
        frr_remote_lfa_max_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_remote_lfa_max_metric)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-remote-lfa-max-metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::FrrRemoteLfaMaxMetric()
    :
    level{YType::enumeration, "level"},
    max_metric{YType::uint32, "max-metric"}
{

    yang_name = "frr-remote-lfa-max-metric"; yang_parent_name = "frr-remote-lfa-max-metrics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::~FrrRemoteLfaMaxMetric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_data() const
{
    return level.is_set
	|| max_metric.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(max_metric.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-max-metric" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (max_metric.is_set || is_set(max_metric.yfilter)) leaf_name_data.push_back(max_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-metric")
    {
        max_metric = value;
        max_metric.value_namespace = name_space;
        max_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "max-metric")
    {
        max_metric.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaMaxMetrics::FrrRemoteLfaMaxMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "max-metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaTypes()
{

    yang_name = "frr-remote-lfa-types"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::~FrrRemoteLfaTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::has_data() const
{
    for (std::size_t index=0; index<frr_remote_lfa_type.size(); index++)
    {
        if(frr_remote_lfa_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::has_operation() const
{
    for (std::size_t index=0; index<frr_remote_lfa_type.size(); index++)
    {
        if(frr_remote_lfa_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-remote-lfa-type")
    {
        for(auto const & c : frr_remote_lfa_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType>();
        c->parent = this;
        frr_remote_lfa_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_remote_lfa_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-remote-lfa-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::FrrRemoteLfaType()
    :
    level{YType::enumeration, "level"},
    type{YType::enumeration, "type"}
{

    yang_name = "frr-remote-lfa-type"; yang_parent_name = "frr-remote-lfa-types"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::~FrrRemoteLfaType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_data() const
{
    return level.is_set
	|| type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-remote-lfa-type" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrRemoteLfaTypes::FrrRemoteLfaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrTypes()
{

    yang_name = "frr-types"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::~FrrTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::has_data() const
{
    for (std::size_t index=0; index<frr_type.size(); index++)
    {
        if(frr_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::has_operation() const
{
    for (std::size_t index=0; index<frr_type.size(); index++)
    {
        if(frr_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-type")
    {
        for(auto const & c : frr_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType>();
        c->parent = this;
        frr_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::FrrType()
    :
    level{YType::enumeration, "level"},
    type{YType::enumeration, "type"}
{

    yang_name = "frr-type"; yang_parent_name = "frr-types"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::~FrrType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::has_data() const
{
    return level.is_set
	|| type.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-type" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrTypes::FrrType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterfaces()
{

    yang_name = "frrlfa-candidate-interfaces"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::~FrrlfaCandidateInterfaces()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<frrlfa_candidate_interface.size(); index++)
    {
        if(frrlfa_candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frrlfa_candidate_interface.size(); index++)
    {
        if(frrlfa_candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrlfa-candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrlfa-candidate-interface")
    {
        for(auto const & c : frrlfa_candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface>();
        c->parent = this;
        frrlfa_candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frrlfa_candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrlfa-candidate-interface")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::FrrlfaCandidateInterface()
    :
    interface_name{YType::str, "interface-name"},
    frr_type{YType::enumeration, "frr-type"},
    level{YType::uint32, "level"}
{

    yang_name = "frrlfa-candidate-interface"; yang_parent_name = "frrlfa-candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::~FrrlfaCandidateInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_data() const
{
    return interface_name.is_set
	|| frr_type.is_set
	|| level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrlfa-candidate-interface" <<"[interface-name='" <<interface_name <<"']" <<"[frr-type='" <<frr_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrlfaCandidateInterfaces::FrrlfaCandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "frr-type" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaTypes()
{

    yang_name = "frrtilfa-types"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::~FrrtilfaTypes()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::has_data() const
{
    for (std::size_t index=0; index<frrtilfa_type.size(); index++)
    {
        if(frrtilfa_type[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::has_operation() const
{
    for (std::size_t index=0; index<frrtilfa_type.size(); index++)
    {
        if(frrtilfa_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrtilfa-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frrtilfa-type")
    {
        for(auto const & c : frrtilfa_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType>();
        c->parent = this;
        frrtilfa_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frrtilfa_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frrtilfa-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::FrrtilfaType()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "frrtilfa-type"; yang_parent_name = "frrtilfa-types"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::~FrrtilfaType()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_data() const
{
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frrtilfa-type" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::FrrtilfaTypes::FrrtilfaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefaults()
{

    yang_name = "interface-frr-tiebreaker-defaults"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::~InterfaceFrrTiebreakerDefaults()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_data() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker_default.size(); index++)
    {
        if(interface_frr_tiebreaker_default[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_operation() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker_default.size(); index++)
    {
        if(interface_frr_tiebreaker_default[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker-defaults";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-frr-tiebreaker-default")
    {
        for(auto const & c : interface_frr_tiebreaker_default)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault>();
        c->parent = this;
        interface_frr_tiebreaker_default.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_frr_tiebreaker_default)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-frr-tiebreaker-default")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::InterfaceFrrTiebreakerDefault()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "interface-frr-tiebreaker-default"; yang_parent_name = "interface-frr-tiebreaker-defaults"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::~InterfaceFrrTiebreakerDefault()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_data() const
{
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker-default" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakerDefaults::InterfaceFrrTiebreakerDefault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreakers()
{

    yang_name = "interface-frr-tiebreakers"; yang_parent_name = "interface-frr-table"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::~InterfaceFrrTiebreakers()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::has_data() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker.size(); index++)
    {
        if(interface_frr_tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::has_operation() const
{
    for (std::size_t index=0; index<interface_frr_tiebreaker.size(); index++)
    {
        if(interface_frr_tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreakers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-frr-tiebreaker")
    {
        for(auto const & c : interface_frr_tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker>();
        c->parent = this;
        interface_frr_tiebreaker.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_frr_tiebreaker)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-frr-tiebreaker")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::InterfaceFrrTiebreaker()
    :
    level{YType::enumeration, "level"},
    tiebreaker{YType::enumeration, "tiebreaker"},
    index_{YType::uint32, "index"}
{

    yang_name = "interface-frr-tiebreaker"; yang_parent_name = "interface-frr-tiebreakers"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::~InterfaceFrrTiebreaker()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_data() const
{
    return level.is_set
	|| tiebreaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-frr-tiebreaker" <<"[level='" <<level <<"']" <<"[tiebreaker='" <<tiebreaker <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceFrrTable::InterfaceFrrTiebreakers::InterfaceFrrTiebreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "tiebreaker" || name == "index")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::InterfaceLinkGroup()
    :
    level{YType::uint32, "level"},
    link_group{YType::str, "link-group"}
{

    yang_name = "interface-link-group"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::~InterfaceLinkGroup()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::has_data() const
{
    return level.is_set
	|| link_group.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(link_group.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (link_group.is_set || is_set(link_group.yfilter)) leaf_name_data.push_back(link_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-group")
    {
        link_group = value;
        link_group.value_namespace = name_space;
        link_group.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "link-group")
    {
        link_group.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::InterfaceLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "link-group")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSids()
{

    yang_name = "manual-adj-sids"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::~ManualAdjSids()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::has_data() const
{
    for (std::size_t index=0; index<manual_adj_sid.size(); index++)
    {
        if(manual_adj_sid[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::has_operation() const
{
    for (std::size_t index=0; index<manual_adj_sid.size(); index++)
    {
        if(manual_adj_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual-adj-sid")
    {
        for(auto const & c : manual_adj_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid>();
        c->parent = this;
        manual_adj_sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : manual_adj_sid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual-adj-sid")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::ManualAdjSid()
    :
    level{YType::enumeration, "level"},
    sid_type{YType::enumeration, "sid-type"},
    sid{YType::uint32, "sid"},
    protected_{YType::enumeration, "protected"}
{

    yang_name = "manual-adj-sid"; yang_parent_name = "manual-adj-sids"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::~ManualAdjSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::has_data() const
{
    return level.is_set
	|| sid_type.is_set
	|| sid.is_set
	|| protected_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sid" <<"[level='" <<level <<"']" <<"[sid-type='" <<sid_type <<"']" <<"[sid='" <<sid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::ManualAdjSids::ManualAdjSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "sid-type" || name == "sid" || name == "protected")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metrics()
{

    yang_name = "metrics"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::~Metrics()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::has_data() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::has_operation() const
{
    for (std::size_t index=0; index<metric.size(); index++)
    {
        if(metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        for(auto const & c : metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric>();
        c->parent = this;
        metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::Metric()
    :
    level{YType::enumeration, "level"},
    metric{YType::str, "metric"}
{

    yang_name = "metric"; yang_parent_name = "metrics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::~Metric()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::has_data() const
{
    return level.is_set
	|| metric.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "metric")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::MplsLdp()
    :
    sync_level{YType::uint32, "sync-level"}
{

    yang_name = "mpls-ldp"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::~MplsLdp()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::has_data() const
{
    return sync_level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_level.is_set || is_set(sync_level.yfilter)) leaf_name_data.push_back(sync_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-level")
    {
        sync_level = value;
        sync_level.value_namespace = name_space;
        sync_level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-level")
    {
        sync_level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::MplsLdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::PrefixSid()
    :
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"},
    php{YType::enumeration, "php"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{

    yang_name = "prefix-sid"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::~PrefixSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::has_data() const
{
    return explicit_null.is_set
	|| nflag_clear.is_set
	|| php.is_set
	|| type.is_set
	|| value_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(nflag_clear.yfilter)
	|| ydk::is_set(php.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.yfilter)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());
    if (php.is_set || is_set(php.yfilter)) leaf_name_data.push_back(php.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
        nflag_clear.value_namespace = name_space;
        nflag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "php")
    {
        php = value;
        php.value_namespace = name_space;
        php.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear.yfilter = yfilter;
    }
    if(value_path == "php")
    {
        php.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "nflag-clear" || name == "php" || name == "type" || name == "value")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::PrefixSspfsid()
    :
    explicit_null{YType::enumeration, "explicit-null"},
    nflag_clear{YType::enumeration, "nflag-clear"},
    php{YType::enumeration, "php"},
    type{YType::enumeration, "type"},
    value_{YType::uint32, "value"}
{

    yang_name = "prefix-sspfsid"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::~PrefixSspfsid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::has_data() const
{
    return explicit_null.is_set
	|| nflag_clear.is_set
	|| php.is_set
	|| type.is_set
	|| value_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(nflag_clear.yfilter)
	|| ydk::is_set(php.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sspfsid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (nflag_clear.is_set || is_set(nflag_clear.yfilter)) leaf_name_data.push_back(nflag_clear.get_name_leafdata());
    if (php.is_set || is_set(php.yfilter)) leaf_name_data.push_back(php.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear = value;
        nflag_clear.value_namespace = name_space;
        nflag_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "php")
    {
        php = value;
        php.value_namespace = name_space;
        php.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "nflag-clear")
    {
        nflag_clear.yfilter = yfilter;
    }
    if(value_path == "php")
    {
        php.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::PrefixSspfsid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "nflag-clear" || name == "php" || name == "type" || name == "value")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weights()
{

    yang_name = "weights"; yang_parent_name = "topology-name"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::~Weights()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::has_data() const
{
    for (std::size_t index=0; index<weight.size(); index++)
    {
        if(weight[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::has_operation() const
{
    for (std::size_t index=0; index<weight.size(); index++)
    {
        if(weight[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weights";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "weight")
    {
        for(auto const & c : weight)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight>();
        c->parent = this;
        weight.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : weight)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::Weight()
    :
    level{YType::enumeration, "level"},
    weight{YType::uint32, "weight"}
{

    yang_name = "weight"; yang_parent_name = "weights"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::~Weight()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::has_data() const
{
    return level.is_set
	|| weight.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Weights::Weight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "weight")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThresholds()
{

    yang_name = "lsp-fast-flood-thresholds"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::~LspFastFloodThresholds()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::has_data() const
{
    for (std::size_t index=0; index<lsp_fast_flood_threshold.size(); index++)
    {
        if(lsp_fast_flood_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::has_operation() const
{
    for (std::size_t index=0; index<lsp_fast_flood_threshold.size(); index++)
    {
        if(lsp_fast_flood_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fast-flood-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fast-flood-threshold")
    {
        for(auto const & c : lsp_fast_flood_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold>();
        c->parent = this;
        lsp_fast_flood_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_fast_flood_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fast-flood-threshold")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::LspFastFloodThreshold()
    :
    level{YType::enumeration, "level"},
    count{YType::uint32, "count"}
{

    yang_name = "lsp-fast-flood-threshold"; yang_parent_name = "lsp-fast-flood-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::~LspFastFloodThreshold()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::has_data() const
{
    return level.is_set
	|| count.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fast-flood-threshold" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::LspFastFloodThresholds::LspFastFloodThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "count")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspIntervals()
{

    yang_name = "lsp-intervals"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::LspIntervals::~LspIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::has_data() const
{
    for (std::size_t index=0; index<lsp_interval.size(); index++)
    {
        if(lsp_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_interval.size(); index++)
    {
        if(lsp_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-interval")
    {
        for(auto const & c : lsp_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval>();
        c->parent = this;
        lsp_interval.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::LspIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_interval)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::LspIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::LspInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{

    yang_name = "lsp-interval"; yang_parent_name = "lsp-intervals"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::~LspInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::has_data() const
{
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-interval" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::LspIntervals::LspInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitIntervals()
{

    yang_name = "lsp-retransmit-intervals"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::~LspRetransmitIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::has_data() const
{
    for (std::size_t index=0; index<lsp_retransmit_interval.size(); index++)
    {
        if(lsp_retransmit_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_retransmit_interval.size(); index++)
    {
        if(lsp_retransmit_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-retransmit-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-retransmit-interval")
    {
        for(auto const & c : lsp_retransmit_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval>();
        c->parent = this;
        lsp_retransmit_interval.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_retransmit_interval)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-retransmit-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::LspRetransmitInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{

    yang_name = "lsp-retransmit-interval"; yang_parent_name = "lsp-retransmit-intervals"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::~LspRetransmitInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::has_data() const
{
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-retransmit-interval" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitIntervals::LspRetransmitInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleIntervals()
{

    yang_name = "lsp-retransmit-throttle-intervals"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::~LspRetransmitThrottleIntervals()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::has_data() const
{
    for (std::size_t index=0; index<lsp_retransmit_throttle_interval.size(); index++)
    {
        if(lsp_retransmit_throttle_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_retransmit_throttle_interval.size(); index++)
    {
        if(lsp_retransmit_throttle_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-retransmit-throttle-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-retransmit-throttle-interval")
    {
        for(auto const & c : lsp_retransmit_throttle_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval>();
        c->parent = this;
        lsp_retransmit_throttle_interval.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_retransmit_throttle_interval)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-retransmit-throttle-interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::LspRetransmitThrottleInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{

    yang_name = "lsp-retransmit-throttle-interval"; yang_parent_name = "lsp-retransmit-throttle-intervals"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::~LspRetransmitThrottleInterval()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::has_data() const
{
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-retransmit-throttle-interval" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::LspRetransmitThrottleIntervals::LspRetransmitThrottleInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClears()
{

    yang_name = "prefix-attribute-n-flag-clears"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::~PrefixAttributeNFlagClears()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::has_data() const
{
    for (std::size_t index=0; index<prefix_attribute_n_flag_clear.size(); index++)
    {
        if(prefix_attribute_n_flag_clear[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::has_operation() const
{
    for (std::size_t index=0; index<prefix_attribute_n_flag_clear.size(); index++)
    {
        if(prefix_attribute_n_flag_clear[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-attribute-n-flag-clears";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-attribute-n-flag-clear")
    {
        for(auto const & c : prefix_attribute_n_flag_clear)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear>();
        c->parent = this;
        prefix_attribute_n_flag_clear.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_attribute_n_flag_clear)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-attribute-n-flag-clear")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::PrefixAttributeNFlagClear()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "prefix-attribute-n-flag-clear"; yang_parent_name = "prefix-attribute-n-flag-clears"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::~PrefixAttributeNFlagClear()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::has_data() const
{
    return level.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-attribute-n-flag-clear" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::PrefixAttributeNFlagClears::PrefixAttributeNFlagClear::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::Priorities::Priorities()
{

    yang_name = "priorities"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::Priorities::~Priorities()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::has_data() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::has_operation() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::Priorities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priorities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::Priorities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::Priorities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        for(auto const & c : priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority>();
        c->parent = this;
        priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::Priorities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::Priorities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::Priorities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::Priority()
    :
    level{YType::enumeration, "level"},
    priority_value{YType::uint32, "priority-value"}
{

    yang_name = "priority"; yang_parent_name = "priorities"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::~Priority()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::has_data() const
{
    return level.is_set
	|| priority_value.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(priority_value.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-value")
    {
        priority_value = value;
        priority_value.value_namespace = name_space;
        priority_value.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "priority-value")
    {
        priority_value.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::Priorities::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "priority-value")
        return true;
    return false;
}

Isis::Instances::Instance::LinkGroups::LinkGroups()
{

    yang_name = "link-groups"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LinkGroups::~LinkGroups()
{
}

bool Isis::Instances::Instance::LinkGroups::has_data() const
{
    for (std::size_t index=0; index<link_group.size(); index++)
    {
        if(link_group[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LinkGroups::has_operation() const
{
    for (std::size_t index=0; index<link_group.size(); index++)
    {
        if(link_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LinkGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LinkGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LinkGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-group")
    {
        for(auto const & c : link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LinkGroups::LinkGroup>();
        c->parent = this;
        link_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LinkGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::LinkGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LinkGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LinkGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-group")
        return true;
    return false;
}

Isis::Instances::Instance::LinkGroups::LinkGroup::LinkGroup()
    :
    link_group_name{YType::str, "link-group-name"},
    enable{YType::empty, "enable"},
    metric_offset{YType::uint32, "metric-offset"},
    minimum_members{YType::uint32, "minimum-members"},
    revert_members{YType::uint32, "revert-members"}
{

    yang_name = "link-group"; yang_parent_name = "link-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LinkGroups::LinkGroup::~LinkGroup()
{
}

bool Isis::Instances::Instance::LinkGroups::LinkGroup::has_data() const
{
    return link_group_name.is_set
	|| enable.is_set
	|| metric_offset.is_set
	|| minimum_members.is_set
	|| revert_members.is_set;
}

bool Isis::Instances::Instance::LinkGroups::LinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_group_name.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(metric_offset.yfilter)
	|| ydk::is_set(minimum_members.yfilter)
	|| ydk::is_set(revert_members.yfilter);
}

std::string Isis::Instances::Instance::LinkGroups::LinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-group" <<"[link-group-name='" <<link_group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LinkGroups::LinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_group_name.is_set || is_set(link_group_name.yfilter)) leaf_name_data.push_back(link_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (metric_offset.is_set || is_set(metric_offset.yfilter)) leaf_name_data.push_back(metric_offset.get_name_leafdata());
    if (minimum_members.is_set || is_set(minimum_members.yfilter)) leaf_name_data.push_back(minimum_members.get_name_leafdata());
    if (revert_members.is_set || is_set(revert_members.yfilter)) leaf_name_data.push_back(revert_members.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LinkGroups::LinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LinkGroups::LinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::LinkGroups::LinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-group-name")
    {
        link_group_name = value;
        link_group_name.value_namespace = name_space;
        link_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-offset")
    {
        metric_offset = value;
        metric_offset.value_namespace = name_space;
        metric_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-members")
    {
        minimum_members = value;
        minimum_members.value_namespace = name_space;
        minimum_members.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revert-members")
    {
        revert_members = value;
        revert_members.value_namespace = name_space;
        revert_members.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LinkGroups::LinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-group-name")
    {
        link_group_name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "metric-offset")
    {
        metric_offset.yfilter = yfilter;
    }
    if(value_path == "minimum-members")
    {
        minimum_members.yfilter = yfilter;
    }
    if(value_path == "revert-members")
    {
        revert_members.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LinkGroups::LinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-group-name" || name == "enable" || name == "metric-offset" || name == "minimum-members" || name == "revert-members")
        return true;
    return false;
}

Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPasswords()
{

    yang_name = "lsp-accept-passwords"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspAcceptPasswords::~LspAcceptPasswords()
{
}

bool Isis::Instances::Instance::LspAcceptPasswords::has_data() const
{
    for (std::size_t index=0; index<lsp_accept_password.size(); index++)
    {
        if(lsp_accept_password[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspAcceptPasswords::has_operation() const
{
    for (std::size_t index=0; index<lsp_accept_password.size(); index++)
    {
        if(lsp_accept_password[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspAcceptPasswords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-accept-passwords";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspAcceptPasswords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspAcceptPasswords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-accept-password")
    {
        for(auto const & c : lsp_accept_password)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword>();
        c->parent = this;
        lsp_accept_password.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspAcceptPasswords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_accept_password)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::LspAcceptPasswords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspAcceptPasswords::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspAcceptPasswords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-accept-password")
        return true;
    return false;
}

Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::LspAcceptPassword()
    :
    level{YType::enumeration, "level"},
    password{YType::str, "password"}
{

    yang_name = "lsp-accept-password"; yang_parent_name = "lsp-accept-passwords"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::~LspAcceptPassword()
{
}

bool Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::has_data() const
{
    return level.is_set
	|| password.is_set;
}

bool Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-accept-password" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspAcceptPasswords::LspAcceptPassword::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "password")
        return true;
    return false;
}

Isis::Instances::Instance::LspArrivalTimes::LspArrivalTimes()
{

    yang_name = "lsp-arrival-times"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspArrivalTimes::~LspArrivalTimes()
{
}

bool Isis::Instances::Instance::LspArrivalTimes::has_data() const
{
    for (std::size_t index=0; index<lsp_arrival_time.size(); index++)
    {
        if(lsp_arrival_time[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspArrivalTimes::has_operation() const
{
    for (std::size_t index=0; index<lsp_arrival_time.size(); index++)
    {
        if(lsp_arrival_time[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspArrivalTimes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-arrival-times";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspArrivalTimes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspArrivalTimes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-arrival-time")
    {
        for(auto const & c : lsp_arrival_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime>();
        c->parent = this;
        lsp_arrival_time.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspArrivalTimes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_arrival_time)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::LspArrivalTimes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspArrivalTimes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspArrivalTimes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-arrival-time")
        return true;
    return false;
}

Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::LspArrivalTime()
    :
    level{YType::enumeration, "level"},
    initial_wait{YType::uint32, "initial-wait"},
    maximum_wait{YType::uint32, "maximum-wait"},
    secondary_wait{YType::uint32, "secondary-wait"}
{

    yang_name = "lsp-arrival-time"; yang_parent_name = "lsp-arrival-times"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::~LspArrivalTime()
{
}

bool Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::has_data() const
{
    return level.is_set
	|| initial_wait.is_set
	|| maximum_wait.is_set
	|| secondary_wait.is_set;
}

bool Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(maximum_wait.yfilter)
	|| ydk::is_set(secondary_wait.yfilter);
}

std::string Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-arrival-time" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (maximum_wait.is_set || is_set(maximum_wait.yfilter)) leaf_name_data.push_back(maximum_wait.get_name_leafdata());
    if (secondary_wait.is_set || is_set(secondary_wait.yfilter)) leaf_name_data.push_back(secondary_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait = value;
        maximum_wait.value_namespace = name_space;
        maximum_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait = value;
        secondary_wait.value_namespace = name_space;
        secondary_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait.yfilter = yfilter;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspArrivalTimes::LspArrivalTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "initial-wait" || name == "maximum-wait" || name == "secondary-wait")
        return true;
    return false;
}

Isis::Instances::Instance::LspCheckIntervals::LspCheckIntervals()
{

    yang_name = "lsp-check-intervals"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspCheckIntervals::~LspCheckIntervals()
{
}

bool Isis::Instances::Instance::LspCheckIntervals::has_data() const
{
    for (std::size_t index=0; index<lsp_check_interval.size(); index++)
    {
        if(lsp_check_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspCheckIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_check_interval.size(); index++)
    {
        if(lsp_check_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspCheckIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-check-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspCheckIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspCheckIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-check-interval")
    {
        for(auto const & c : lsp_check_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval>();
        c->parent = this;
        lsp_check_interval.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspCheckIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_check_interval)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::LspCheckIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspCheckIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspCheckIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-check-interval")
        return true;
    return false;
}

Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::LspCheckInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{

    yang_name = "lsp-check-interval"; yang_parent_name = "lsp-check-intervals"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::~LspCheckInterval()
{
}

bool Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::has_data() const
{
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-check-interval" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspCheckIntervals::LspCheckInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval")
        return true;
    return false;
}

Isis::Instances::Instance::LspGenerationIntervals::LspGenerationIntervals()
{

    yang_name = "lsp-generation-intervals"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspGenerationIntervals::~LspGenerationIntervals()
{
}

bool Isis::Instances::Instance::LspGenerationIntervals::has_data() const
{
    for (std::size_t index=0; index<lsp_generation_interval.size(); index++)
    {
        if(lsp_generation_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspGenerationIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_generation_interval.size(); index++)
    {
        if(lsp_generation_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspGenerationIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-generation-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspGenerationIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspGenerationIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-generation-interval")
    {
        for(auto const & c : lsp_generation_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval>();
        c->parent = this;
        lsp_generation_interval.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspGenerationIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_generation_interval)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::LspGenerationIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspGenerationIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspGenerationIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-generation-interval")
        return true;
    return false;
}

Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::LspGenerationInterval()
    :
    level{YType::enumeration, "level"},
    initial_wait{YType::uint32, "initial-wait"},
    maximum_wait{YType::uint32, "maximum-wait"},
    secondary_wait{YType::uint32, "secondary-wait"}
{

    yang_name = "lsp-generation-interval"; yang_parent_name = "lsp-generation-intervals"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::~LspGenerationInterval()
{
}

bool Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::has_data() const
{
    return level.is_set
	|| initial_wait.is_set
	|| maximum_wait.is_set
	|| secondary_wait.is_set;
}

bool Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(maximum_wait.yfilter)
	|| ydk::is_set(secondary_wait.yfilter);
}

std::string Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-generation-interval" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (maximum_wait.is_set || is_set(maximum_wait.yfilter)) leaf_name_data.push_back(maximum_wait.get_name_leafdata());
    if (secondary_wait.is_set || is_set(secondary_wait.yfilter)) leaf_name_data.push_back(secondary_wait.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait = value;
        maximum_wait.value_namespace = name_space;
        maximum_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait = value;
        secondary_wait.value_namespace = name_space;
        secondary_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "maximum-wait")
    {
        maximum_wait.yfilter = yfilter;
    }
    if(value_path == "secondary-wait")
    {
        secondary_wait.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspGenerationIntervals::LspGenerationInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "initial-wait" || name == "maximum-wait" || name == "secondary-wait")
        return true;
    return false;
}

Isis::Instances::Instance::LspLifetimes::LspLifetimes()
{

    yang_name = "lsp-lifetimes"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspLifetimes::~LspLifetimes()
{
}

bool Isis::Instances::Instance::LspLifetimes::has_data() const
{
    for (std::size_t index=0; index<lsp_lifetime.size(); index++)
    {
        if(lsp_lifetime[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspLifetimes::has_operation() const
{
    for (std::size_t index=0; index<lsp_lifetime.size(); index++)
    {
        if(lsp_lifetime[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspLifetimes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-lifetimes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspLifetimes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspLifetimes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-lifetime")
    {
        for(auto const & c : lsp_lifetime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspLifetimes::LspLifetime>();
        c->parent = this;
        lsp_lifetime.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspLifetimes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_lifetime)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::LspLifetimes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspLifetimes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspLifetimes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-lifetime")
        return true;
    return false;
}

Isis::Instances::Instance::LspLifetimes::LspLifetime::LspLifetime()
    :
    level{YType::enumeration, "level"},
    lifetime{YType::uint32, "lifetime"}
{

    yang_name = "lsp-lifetime"; yang_parent_name = "lsp-lifetimes"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspLifetimes::LspLifetime::~LspLifetime()
{
}

bool Isis::Instances::Instance::LspLifetimes::LspLifetime::has_data() const
{
    return level.is_set
	|| lifetime.is_set;
}

bool Isis::Instances::Instance::LspLifetimes::LspLifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string Isis::Instances::Instance::LspLifetimes::LspLifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-lifetime" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspLifetimes::LspLifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspLifetimes::LspLifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspLifetimes::LspLifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::LspLifetimes::LspLifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspLifetimes::LspLifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspLifetimes::LspLifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "lifetime")
        return true;
    return false;
}

Isis::Instances::Instance::LspMtus::LspMtus()
{

    yang_name = "lsp-mtus"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspMtus::~LspMtus()
{
}

bool Isis::Instances::Instance::LspMtus::has_data() const
{
    for (std::size_t index=0; index<lsp_mtu.size(); index++)
    {
        if(lsp_mtu[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspMtus::has_operation() const
{
    for (std::size_t index=0; index<lsp_mtu.size(); index++)
    {
        if(lsp_mtu[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspMtus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-mtus";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspMtus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspMtus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-mtu")
    {
        for(auto const & c : lsp_mtu)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspMtus::LspMtu>();
        c->parent = this;
        lsp_mtu.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspMtus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_mtu)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::LspMtus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspMtus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspMtus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-mtu")
        return true;
    return false;
}

Isis::Instances::Instance::LspMtus::LspMtu::LspMtu()
    :
    level{YType::enumeration, "level"},
    mtu{YType::uint32, "mtu"}
{

    yang_name = "lsp-mtu"; yang_parent_name = "lsp-mtus"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspMtus::LspMtu::~LspMtu()
{
}

bool Isis::Instances::Instance::LspMtus::LspMtu::has_data() const
{
    return level.is_set
	|| mtu.is_set;
}

bool Isis::Instances::Instance::LspMtus::LspMtu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Isis::Instances::Instance::LspMtus::LspMtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-mtu" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspMtus::LspMtu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspMtus::LspMtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspMtus::LspMtu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::LspMtus::LspMtu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspMtus::LspMtu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspMtus::LspMtu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "mtu")
        return true;
    return false;
}

Isis::Instances::Instance::LspPasswords::LspPasswords()
{

    yang_name = "lsp-passwords"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspPasswords::~LspPasswords()
{
}

bool Isis::Instances::Instance::LspPasswords::has_data() const
{
    for (std::size_t index=0; index<lsp_password.size(); index++)
    {
        if(lsp_password[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspPasswords::has_operation() const
{
    for (std::size_t index=0; index<lsp_password.size(); index++)
    {
        if(lsp_password[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspPasswords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-passwords";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspPasswords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspPasswords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-password")
    {
        for(auto const & c : lsp_password)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspPasswords::LspPassword>();
        c->parent = this;
        lsp_password.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspPasswords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_password)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::LspPasswords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspPasswords::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspPasswords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-password")
        return true;
    return false;
}

Isis::Instances::Instance::LspPasswords::LspPassword::LspPassword()
    :
    level{YType::enumeration, "level"},
    algorithm{YType::enumeration, "algorithm"},
    authentication_type{YType::enumeration, "authentication-type"},
    failure_mode{YType::enumeration, "failure-mode"},
    password{YType::str, "password"}
{

    yang_name = "lsp-password"; yang_parent_name = "lsp-passwords"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspPasswords::LspPassword::~LspPassword()
{
}

bool Isis::Instances::Instance::LspPasswords::LspPassword::has_data() const
{
    return level.is_set
	|| algorithm.is_set
	|| authentication_type.is_set
	|| failure_mode.is_set
	|| password.is_set;
}

bool Isis::Instances::Instance::LspPasswords::LspPassword::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(authentication_type.yfilter)
	|| ydk::is_set(failure_mode.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Isis::Instances::Instance::LspPasswords::LspPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-password" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspPasswords::LspPassword::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.yfilter)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (failure_mode.is_set || is_set(failure_mode.yfilter)) leaf_name_data.push_back(failure_mode.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspPasswords::LspPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspPasswords::LspPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::LspPasswords::LspPassword::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
        authentication_type.value_namespace = name_space;
        authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-mode")
    {
        failure_mode = value;
        failure_mode.value_namespace = name_space;
        failure_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspPasswords::LspPassword::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-type")
    {
        authentication_type.yfilter = yfilter;
    }
    if(value_path == "failure-mode")
    {
        failure_mode.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspPasswords::LspPassword::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "algorithm" || name == "authentication-type" || name == "failure-mode" || name == "password")
        return true;
    return false;
}

Isis::Instances::Instance::LspRefreshIntervals::LspRefreshIntervals()
{

    yang_name = "lsp-refresh-intervals"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspRefreshIntervals::~LspRefreshIntervals()
{
}

bool Isis::Instances::Instance::LspRefreshIntervals::has_data() const
{
    for (std::size_t index=0; index<lsp_refresh_interval.size(); index++)
    {
        if(lsp_refresh_interval[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::LspRefreshIntervals::has_operation() const
{
    for (std::size_t index=0; index<lsp_refresh_interval.size(); index++)
    {
        if(lsp_refresh_interval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::LspRefreshIntervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-refresh-intervals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspRefreshIntervals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspRefreshIntervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-refresh-interval")
    {
        for(auto const & c : lsp_refresh_interval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval>();
        c->parent = this;
        lsp_refresh_interval.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspRefreshIntervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_refresh_interval)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::LspRefreshIntervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::LspRefreshIntervals::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::LspRefreshIntervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-refresh-interval")
        return true;
    return false;
}

Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::LspRefreshInterval()
    :
    level{YType::enumeration, "level"},
    interval{YType::uint32, "interval"}
{

    yang_name = "lsp-refresh-interval"; yang_parent_name = "lsp-refresh-intervals"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::~LspRefreshInterval()
{
}

bool Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::has_data() const
{
    return level.is_set
	|| interval.is_set;
}

bool Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-refresh-interval" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::LspRefreshIntervals::LspRefreshInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interval")
        return true;
    return false;
}

Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetrics()
{

    yang_name = "max-link-metrics"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::MaxLinkMetrics::~MaxLinkMetrics()
{
}

bool Isis::Instances::Instance::MaxLinkMetrics::has_data() const
{
    for (std::size_t index=0; index<max_link_metric.size(); index++)
    {
        if(max_link_metric[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::MaxLinkMetrics::has_operation() const
{
    for (std::size_t index=0; index<max_link_metric.size(); index++)
    {
        if(max_link_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::MaxLinkMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-link-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MaxLinkMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MaxLinkMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-link-metric")
    {
        for(auto const & c : max_link_metric)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric>();
        c->parent = this;
        max_link_metric.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MaxLinkMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : max_link_metric)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::MaxLinkMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::MaxLinkMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::MaxLinkMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-link-metric")
        return true;
    return false;
}

Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::MaxLinkMetric()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "max-link-metric"; yang_parent_name = "max-link-metrics"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::~MaxLinkMetric()
{
}

bool Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::has_data() const
{
    return level.is_set;
}

bool Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-link-metric" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::MaxLinkMetrics::MaxLinkMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Nets::Nets()
{

    yang_name = "nets"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Nets::~Nets()
{
}

bool Isis::Instances::Instance::Nets::has_data() const
{
    for (std::size_t index=0; index<net.size(); index++)
    {
        if(net[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Nets::has_operation() const
{
    for (std::size_t index=0; index<net.size(); index++)
    {
        if(net[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Nets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Nets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Nets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "net")
    {
        for(auto const & c : net)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::Nets::Net>();
        c->parent = this;
        net.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Nets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : net)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::Nets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Nets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Nets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "net")
        return true;
    return false;
}

Isis::Instances::Instance::Nets::Net::Net()
    :
    net_name{YType::str, "net-name"}
{

    yang_name = "net"; yang_parent_name = "nets"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Nets::Net::~Net()
{
}

bool Isis::Instances::Instance::Nets::Net::has_data() const
{
    return net_name.is_set;
}

bool Isis::Instances::Instance::Nets::Net::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(net_name.yfilter);
}

std::string Isis::Instances::Instance::Nets::Net::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net" <<"[net-name='" <<net_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Nets::Net::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (net_name.is_set || is_set(net_name.yfilter)) leaf_name_data.push_back(net_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Nets::Net::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Nets::Net::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Nets::Net::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "net-name")
    {
        net_name = value;
        net_name.value_namespace = name_space;
        net_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Nets::Net::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "net-name")
    {
        net_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Nets::Net::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "net-name")
        return true;
    return false;
}

Isis::Instances::Instance::Nsf::Nsf()
    :
    flavor{YType::enumeration, "flavor"},
    interface_timer{YType::uint32, "interface-timer"},
    lifetime{YType::uint32, "lifetime"},
    max_interface_timer_expiry{YType::uint32, "max-interface-timer-expiry"}
{

    yang_name = "nsf"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Nsf::~Nsf()
{
}

bool Isis::Instances::Instance::Nsf::has_data() const
{
    return flavor.is_set
	|| interface_timer.is_set
	|| lifetime.is_set
	|| max_interface_timer_expiry.is_set;
}

bool Isis::Instances::Instance::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flavor.yfilter)
	|| ydk::is_set(interface_timer.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(max_interface_timer_expiry.yfilter);
}

std::string Isis::Instances::Instance::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flavor.is_set || is_set(flavor.yfilter)) leaf_name_data.push_back(flavor.get_name_leafdata());
    if (interface_timer.is_set || is_set(interface_timer.yfilter)) leaf_name_data.push_back(interface_timer.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (max_interface_timer_expiry.is_set || is_set(max_interface_timer_expiry.yfilter)) leaf_name_data.push_back(max_interface_timer_expiry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flavor")
    {
        flavor = value;
        flavor.value_namespace = name_space;
        flavor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-timer")
    {
        interface_timer = value;
        interface_timer.value_namespace = name_space;
        interface_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-interface-timer-expiry")
    {
        max_interface_timer_expiry = value;
        max_interface_timer_expiry.value_namespace = name_space;
        max_interface_timer_expiry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flavor")
    {
        flavor.yfilter = yfilter;
    }
    if(value_path == "interface-timer")
    {
        interface_timer.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "max-interface-timer-expiry")
    {
        max_interface_timer_expiry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flavor" || name == "interface-timer" || name == "lifetime" || name == "max-interface-timer-expiry")
        return true;
    return false;
}

Isis::Instances::Instance::OverloadBits::OverloadBits()
{

    yang_name = "overload-bits"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::OverloadBits::~OverloadBits()
{
}

bool Isis::Instances::Instance::OverloadBits::has_data() const
{
    for (std::size_t index=0; index<overload_bit.size(); index++)
    {
        if(overload_bit[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::OverloadBits::has_operation() const
{
    for (std::size_t index=0; index<overload_bit.size(); index++)
    {
        if(overload_bit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::OverloadBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::OverloadBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::OverloadBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overload-bit")
    {
        for(auto const & c : overload_bit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Isis::Instances::Instance::OverloadBits::OverloadBit>();
        c->parent = this;
        overload_bit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::OverloadBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : overload_bit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Isis::Instances::Instance::OverloadBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::OverloadBits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::OverloadBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overload-bit")
        return true;
    return false;
}

Isis::Instances::Instance::OverloadBits::OverloadBit::OverloadBit()
    :
    level{YType::enumeration, "level"},
    external_adv_type{YType::enumeration, "external-adv-type"},
    hippity_period{YType::uint32, "hippity-period"},
    inter_level_adv_type{YType::enumeration, "inter-level-adv-type"},
    overload_bit_mode{YType::enumeration, "overload-bit-mode"}
{

    yang_name = "overload-bit"; yang_parent_name = "overload-bits"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::OverloadBits::OverloadBit::~OverloadBit()
{
}

bool Isis::Instances::Instance::OverloadBits::OverloadBit::has_data() const
{
    return level.is_set
	|| external_adv_type.is_set
	|| hippity_period.is_set
	|| inter_level_adv_type.is_set
	|| overload_bit_mode.is_set;
}

bool Isis::Instances::Instance::OverloadBits::OverloadBit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(external_adv_type.yfilter)
	|| ydk::is_set(hippity_period.yfilter)
	|| ydk::is_set(inter_level_adv_type.yfilter)
	|| ydk::is_set(overload_bit_mode.yfilter);
}

std::string Isis::Instances::Instance::OverloadBits::OverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload-bit" <<"[level='" <<level <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::OverloadBits::OverloadBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (external_adv_type.is_set || is_set(external_adv_type.yfilter)) leaf_name_data.push_back(external_adv_type.get_name_leafdata());
    if (hippity_period.is_set || is_set(hippity_period.yfilter)) leaf_name_data.push_back(hippity_period.get_name_leafdata());
    if (inter_level_adv_type.is_set || is_set(inter_level_adv_type.yfilter)) leaf_name_data.push_back(inter_level_adv_type.get_name_leafdata());
    if (overload_bit_mode.is_set || is_set(overload_bit_mode.yfilter)) leaf_name_data.push_back(overload_bit_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::OverloadBits::OverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::OverloadBits::OverloadBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::OverloadBits::OverloadBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-adv-type")
    {
        external_adv_type = value;
        external_adv_type.value_namespace = name_space;
        external_adv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hippity-period")
    {
        hippity_period = value;
        hippity_period.value_namespace = name_space;
        hippity_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-level-adv-type")
    {
        inter_level_adv_type = value;
        inter_level_adv_type.value_namespace = name_space;
        inter_level_adv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload-bit-mode")
    {
        overload_bit_mode = value;
        overload_bit_mode.value_namespace = name_space;
        overload_bit_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::OverloadBits::OverloadBit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "external-adv-type")
    {
        external_adv_type.yfilter = yfilter;
    }
    if(value_path == "hippity-period")
    {
        hippity_period.yfilter = yfilter;
    }
    if(value_path == "inter-level-adv-type")
    {
        inter_level_adv_type.yfilter = yfilter;
    }
    if(value_path == "overload-bit-mode")
    {
        overload_bit_mode.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::OverloadBits::OverloadBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "external-adv-type" || name == "hippity-period" || name == "inter-level-adv-type" || name == "overload-bit-mode")
        return true;
    return false;
}

Isis::Instances::Instance::Srgb::Srgb()
    :
    lower_bound{YType::uint32, "lower-bound"},
    upper_bound{YType::uint32, "upper-bound"}
{

    yang_name = "srgb"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::Srgb::~Srgb()
{
}

bool Isis::Instances::Instance::Srgb::has_data() const
{
    return lower_bound.is_set
	|| upper_bound.is_set;
}

bool Isis::Instances::Instance::Srgb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower_bound.yfilter)
	|| ydk::is_set(upper_bound.yfilter);
}

std::string Isis::Instances::Instance::Srgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower_bound.is_set || is_set(lower_bound.yfilter)) leaf_name_data.push_back(lower_bound.get_name_leafdata());
    if (upper_bound.is_set || is_set(upper_bound.yfilter)) leaf_name_data.push_back(upper_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Srgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Srgb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::Srgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower-bound")
    {
        lower_bound = value;
        lower_bound.value_namespace = name_space;
        lower_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-bound")
    {
        upper_bound = value;
        upper_bound.value_namespace = name_space;
        upper_bound.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower-bound")
    {
        lower_bound.yfilter = yfilter;
    }
    if(value_path == "upper-bound")
    {
        upper_bound.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower-bound" || name == "upper-bound")
        return true;
    return false;
}

Isis::Instances::Instance::TraceBufferSize::TraceBufferSize()
    :
    detailed{YType::uint32, "detailed"},
    hello{YType::uint32, "hello"},
    severe{YType::uint32, "severe"},
    standard{YType::uint32, "standard"}
{

    yang_name = "trace-buffer-size"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Isis::Instances::Instance::TraceBufferSize::~TraceBufferSize()
{
}

bool Isis::Instances::Instance::TraceBufferSize::has_data() const
{
    return detailed.is_set
	|| hello.is_set
	|| severe.is_set
	|| standard.is_set;
}

bool Isis::Instances::Instance::TraceBufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detailed.yfilter)
	|| ydk::is_set(hello.yfilter)
	|| ydk::is_set(severe.yfilter)
	|| ydk::is_set(standard.yfilter);
}

std::string Isis::Instances::Instance::TraceBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-buffer-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::TraceBufferSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detailed.is_set || is_set(detailed.yfilter)) leaf_name_data.push_back(detailed.get_name_leafdata());
    if (hello.is_set || is_set(hello.yfilter)) leaf_name_data.push_back(hello.get_name_leafdata());
    if (severe.is_set || is_set(severe.yfilter)) leaf_name_data.push_back(severe.get_name_leafdata());
    if (standard.is_set || is_set(standard.yfilter)) leaf_name_data.push_back(standard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::TraceBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::TraceBufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Isis::Instances::Instance::TraceBufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detailed")
    {
        detailed = value;
        detailed.value_namespace = name_space;
        detailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello")
    {
        hello = value;
        hello.value_namespace = name_space;
        hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severe")
    {
        severe = value;
        severe.value_namespace = name_space;
        severe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard")
    {
        standard = value;
        standard.value_namespace = name_space;
        standard.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::TraceBufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detailed")
    {
        detailed.yfilter = yfilter;
    }
    if(value_path == "hello")
    {
        hello.yfilter = yfilter;
    }
    if(value_path == "severe")
    {
        severe.yfilter = yfilter;
    }
    if(value_path == "standard")
    {
        standard.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::TraceBufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detailed" || name == "hello" || name == "severe" || name == "standard")
        return true;
    return false;
}

const Enum::YLeaf Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::InterfaceAfData::Metrics::Metric::Metric_::maximum {16777215, "maximum"};

const Enum::YLeaf Isis::Instances::Instance::Interfaces::Interface::InterfaceAfs::InterfaceAf::TopologyName::Metrics::Metric::Metric_::maximum {16777215, "maximum"};


}
}

