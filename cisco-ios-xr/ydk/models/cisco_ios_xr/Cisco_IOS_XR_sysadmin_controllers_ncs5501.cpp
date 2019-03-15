
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5501.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs5501 {

Controller::Controller()
    :
    fabric(std::make_shared<Controller::Fabric>())
    , card_mgr(std::make_shared<Controller::CardMgr>())
{
    fabric->parent = this;
    card_mgr->parent = this;

    yang_name = "controller"; yang_parent_name = "Cisco-IOS-XR-sysadmin-controllers-ncs5501"; is_top_level_class = true; has_list_ancestor = false; 
}

Controller::~Controller()
{
}

bool Controller::has_data() const
{
    if (is_presence_container) return true;
    return (fabric !=  nullptr && fabric->has_data())
	|| (card_mgr !=  nullptr && card_mgr->has_data());
}

bool Controller::has_operation() const
{
    return is_set(yfilter)
	|| (fabric !=  nullptr && fabric->has_operation())
	|| (card_mgr !=  nullptr && card_mgr->has_operation());
}

std::string Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Controller::Fabric>();
        }
        return fabric;
    }

    if(child_yang_name == "card_mgr")
    {
        if(card_mgr == nullptr)
        {
            card_mgr = std::make_shared<Controller::CardMgr>();
        }
        return card_mgr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fabric != nullptr)
    {
        _children["fabric"] = fabric;
    }

    if(card_mgr != nullptr)
    {
        _children["card_mgr"] = card_mgr;
    }

    return _children;
}

void Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Controller::clone_ptr() const
{
    return std::make_shared<Controller>();
}

std::string Controller::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Controller::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Controller::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Controller::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabric" || name == "card_mgr")
        return true;
    return false;
}

Controller::Fabric::Fabric()
    :
    oper(std::make_shared<Controller::Fabric::Oper>())
{
    oper->parent = this;

    yang_name = "fabric"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::~Fabric()
{
}

bool Controller::Fabric::has_data() const
{
    if (is_presence_container) return true;
    return (oper !=  nullptr && oper->has_data());
}

bool Controller::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (oper !=  nullptr && oper->has_operation());
}

std::string Controller::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<Controller::Fabric::Oper>();
        }
        return oper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oper != nullptr)
    {
        _children["oper"] = oper;
    }

    return _children;
}

void Controller::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oper")
        return true;
    return false;
}

Controller::Fabric::Oper::Oper()
    :
    fgid(std::make_shared<Controller::Fabric::Oper::Fgid>())
{
    fgid->parent = this;

    yang_name = "oper"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::~Oper()
{
}

bool Controller::Fabric::Oper::has_data() const
{
    if (is_presence_container) return true;
    return (fgid !=  nullptr && fgid->has_data());
}

bool Controller::Fabric::Oper::has_operation() const
{
    return is_set(yfilter)
	|| (fgid !=  nullptr && fgid->has_operation());
}

std::string Controller::Fabric::Oper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fgid")
    {
        if(fgid == nullptr)
        {
            fgid = std::make_shared<Controller::Fabric::Oper::Fgid>();
        }
        return fgid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fgid != nullptr)
    {
        _children["fgid"] = fgid;
    }

    return _children;
}

void Controller::Fabric::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fgid")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Fgid()
    :
    information(std::make_shared<Controller::Fabric::Oper::Fgid::Information>())
    , resource(std::make_shared<Controller::Fabric::Oper::Fgid::Resource>())
    , statistics(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics>())
    , fgid_mgr(std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr>())
    , program_error(this, {"start", "end"})
{
    information->parent = this;
    resource->parent = this;
    statistics->parent = this;
    fgid_mgr->parent = this;

    yang_name = "fgid"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::~Fgid()
{
}

bool Controller::Fabric::Oper::Fgid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<program_error.len(); index++)
    {
        if(program_error[index]->has_data())
            return true;
    }
    return (information !=  nullptr && information->has_data())
	|| (resource !=  nullptr && resource->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (fgid_mgr !=  nullptr && fgid_mgr->has_data());
}

bool Controller::Fabric::Oper::Fgid::has_operation() const
{
    for (std::size_t index=0; index<program_error.len(); index++)
    {
        if(program_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation())
	|| (resource !=  nullptr && resource->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (fgid_mgr !=  nullptr && fgid_mgr->has_operation());
}

std::string Controller::Fabric::Oper::Fgid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Controller::Fabric::Oper::Fgid::Information>();
        }
        return information;
    }

    if(child_yang_name == "resource")
    {
        if(resource == nullptr)
        {
            resource = std::make_shared<Controller::Fabric::Oper::Fgid::Resource>();
        }
        return resource;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "fgid_mgr")
    {
        if(fgid_mgr == nullptr)
        {
            fgid_mgr = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr>();
        }
        return fgid_mgr;
    }

    if(child_yang_name == "program_error")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::ProgramError>();
        ent_->parent = this;
        program_error.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    if(resource != nullptr)
    {
        _children["resource"] = resource;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(fgid_mgr != nullptr)
    {
        _children["fgid_mgr"] = fgid_mgr;
    }

    count_ = 0;
    for (auto ent_ : program_error.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "resource" || name == "statistics" || name == "fgid_mgr" || name == "program_error")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Information()
    :
    id(this, {"fgid_id"})
{

    yang_name = "information"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Information::~Information()
{
}

bool Controller::Fabric::Oper::Fgid::Information::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<id.len(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Information::has_operation() const
{
    for (std::size_t index=0; index<id.len(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id>();
        ent_->parent = this;
        id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::Id()
    :
    fgid_id{YType::int32, "fgid_id"},
    total_asso_fabricq_ids{YType::int32, "total_asso_fabricq_ids"},
    asso_client_info{YType::str, "asso_client_info"}
        ,
    hex_bitmaps(this, {"rack_number"})
    , binary_bitmaps(this, {"rack_number"})
    , asso_fabricq_ids(this, {"fabricq_id"})
    , drivers(this, {"rack_number"})
{

    yang_name = "id"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Information::Id::~Id()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hex_bitmaps.len(); index++)
    {
        if(hex_bitmaps[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<binary_bitmaps.len(); index++)
    {
        if(binary_bitmaps[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<asso_fabricq_ids.len(); index++)
    {
        if(asso_fabricq_ids[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<drivers.len(); index++)
    {
        if(drivers[index]->has_data())
            return true;
    }
    return fgid_id.is_set
	|| total_asso_fabricq_ids.is_set
	|| asso_client_info.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::has_operation() const
{
    for (std::size_t index=0; index<hex_bitmaps.len(); index++)
    {
        if(hex_bitmaps[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<binary_bitmaps.len(); index++)
    {
        if(binary_bitmaps[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<asso_fabricq_ids.len(); index++)
    {
        if(asso_fabricq_ids[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<drivers.len(); index++)
    {
        if(drivers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fgid_id.yfilter)
	|| ydk::is_set(total_asso_fabricq_ids.yfilter)
	|| ydk::is_set(asso_client_info.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    ADD_KEY_TOKEN(fgid_id, "fgid_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgid_id.is_set || is_set(fgid_id.yfilter)) leaf_name_data.push_back(fgid_id.get_name_leafdata());
    if (total_asso_fabricq_ids.is_set || is_set(total_asso_fabricq_ids.yfilter)) leaf_name_data.push_back(total_asso_fabricq_ids.get_name_leafdata());
    if (asso_client_info.is_set || is_set(asso_client_info.yfilter)) leaf_name_data.push_back(asso_client_info.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hex_bitmaps")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps>();
        ent_->parent = this;
        hex_bitmaps.append(ent_);
        return ent_;
    }

    if(child_yang_name == "binary_bitmaps")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps>();
        ent_->parent = this;
        binary_bitmaps.append(ent_);
        return ent_;
    }

    if(child_yang_name == "asso_fabricq_ids")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds>();
        ent_->parent = this;
        asso_fabricq_ids.append(ent_);
        return ent_;
    }

    if(child_yang_name == "drivers")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::Drivers>();
        ent_->parent = this;
        drivers.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hex_bitmaps.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : binary_bitmaps.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : asso_fabricq_ids.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : drivers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fgid_id")
    {
        fgid_id = value;
        fgid_id.value_namespace = name_space;
        fgid_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_asso_fabricq_ids")
    {
        total_asso_fabricq_ids = value;
        total_asso_fabricq_ids.value_namespace = name_space;
        total_asso_fabricq_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asso_client_info")
    {
        asso_client_info = value;
        asso_client_info.value_namespace = name_space;
        asso_client_info.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fgid_id")
    {
        fgid_id.yfilter = yfilter;
    }
    if(value_path == "total_asso_fabricq_ids")
    {
        total_asso_fabricq_ids.yfilter = yfilter;
    }
    if(value_path == "asso_client_info")
    {
        asso_client_info.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex_bitmaps" || name == "binary_bitmaps" || name == "asso_fabricq_ids" || name == "drivers" || name == "fgid_id" || name == "total_asso_fabricq_ids" || name == "asso_client_info")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::HexBitmaps()
    :
    rack_number{YType::int32, "rack_number"},
    bitmap{YType::str, "bitmap"}
{

    yang_name = "hex_bitmaps"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::~HexBitmaps()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::has_data() const
{
    if (is_presence_container) return true;
    return rack_number.is_set
	|| bitmap.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter)
	|| ydk::is_set(bitmap.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hex_bitmaps";
    ADD_KEY_TOKEN(rack_number, "rack_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());
    if (bitmap.is_set || is_set(bitmap.yfilter)) leaf_name_data.push_back(bitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitmap")
    {
        bitmap = value;
        bitmap.value_namespace = name_space;
        bitmap.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
    if(value_path == "bitmap")
    {
        bitmap.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_number" || name == "bitmap")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::BinaryBitmaps()
    :
    rack_number{YType::int32, "rack_number"},
    bitmap{YType::str, "bitmap"}
{

    yang_name = "binary_bitmaps"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::~BinaryBitmaps()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::has_data() const
{
    if (is_presence_container) return true;
    return rack_number.is_set
	|| bitmap.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter)
	|| ydk::is_set(bitmap.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binary_bitmaps";
    ADD_KEY_TOKEN(rack_number, "rack_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());
    if (bitmap.is_set || is_set(bitmap.yfilter)) leaf_name_data.push_back(bitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitmap")
    {
        bitmap = value;
        bitmap.value_namespace = name_space;
        bitmap.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
    if(value_path == "bitmap")
    {
        bitmap.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_number" || name == "bitmap")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::AssoFabricqIds()
    :
    fabricq_id{YType::str, "fabricq_id"}
{

    yang_name = "asso_fabricq_ids"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::~AssoFabricqIds()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::has_data() const
{
    if (is_presence_container) return true;
    return fabricq_id.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabricq_id.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asso_fabricq_ids";
    ADD_KEY_TOKEN(fabricq_id, "fabricq_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabricq_id.is_set || is_set(fabricq_id.yfilter)) leaf_name_data.push_back(fabricq_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabricq_id")
    {
        fabricq_id = value;
        fabricq_id.value_namespace = name_space;
        fabricq_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabricq_id")
    {
        fabricq_id.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabricq_id")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Drivers()
    :
    rack_number{YType::int32, "rack_number"}
        ,
    clients(this, {"client_idx"})
{

    yang_name = "drivers"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::Drivers::~Drivers()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clients.len(); index++)
    {
        if(clients[index]->has_data())
            return true;
    }
    return rack_number.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::has_operation() const
{
    for (std::size_t index=0; index<clients.len(); index++)
    {
        if(clients[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::Drivers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drivers";
    ADD_KEY_TOKEN(rack_number, "rack_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::Drivers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::Id::Drivers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clients")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients>();
        ent_->parent = this;
        clients.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::Id::Drivers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clients.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::Drivers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::Drivers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clients" || name == "rack_number")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::Clients()
    :
    client_idx{YType::int32, "client_idx"},
    show_asic_0{YType::boolean, "show_asic_0"},
    asic_0_bitmap{YType::str, "asic_0_bitmap"},
    show_asic_1{YType::boolean, "show_asic_1"},
    asic_1_bitmap{YType::str, "asic_1_bitmap"},
    show_asic_2{YType::boolean, "show_asic_2"},
    asic_2_bitmap{YType::str, "asic_2_bitmap"},
    show_asic_3{YType::boolean, "show_asic_3"},
    asic_3_bitmap{YType::str, "asic_3_bitmap"},
    show_asic_4{YType::boolean, "show_asic_4"},
    asic_4_bitmap{YType::str, "asic_4_bitmap"},
    show_asic_5{YType::boolean, "show_asic_5"},
    asic_5_bitmap{YType::str, "asic_5_bitmap"},
    show_asic_6{YType::boolean, "show_asic_6"},
    asic_6_bitmap{YType::str, "asic_6_bitmap"},
    show_asic_7{YType::boolean, "show_asic_7"},
    asic_7_bitmap{YType::str, "asic_7_bitmap"},
    show_asic_8{YType::boolean, "show_asic_8"},
    asic_8_bitmap{YType::str, "asic_8_bitmap"},
    show_asic_9{YType::boolean, "show_asic_9"},
    asic_9_bitmap{YType::str, "asic_9_bitmap"},
    show_asic_10{YType::boolean, "show_asic_10"},
    asic_10_bitmap{YType::str, "asic_10_bitmap"},
    show_asic_11{YType::boolean, "show_asic_11"},
    asic_11_bitmap{YType::str, "asic_11_bitmap"},
    show_asic_12{YType::boolean, "show_asic_12"},
    asic_12_bitmap{YType::str, "asic_12_bitmap"},
    show_asic_13{YType::boolean, "show_asic_13"},
    asic_13_bitmap{YType::str, "asic_13_bitmap"},
    show_asic_14{YType::boolean, "show_asic_14"},
    asic_14_bitmap{YType::str, "asic_14_bitmap"},
    show_asic_15{YType::boolean, "show_asic_15"},
    asic_15_bitmap{YType::str, "asic_15_bitmap"},
    show_asic_16{YType::boolean, "show_asic_16"},
    asic_16_bitmap{YType::str, "asic_16_bitmap"},
    show_asic_17{YType::boolean, "show_asic_17"},
    asic_17_bitmap{YType::str, "asic_17_bitmap"},
    show_asic_18{YType::boolean, "show_asic_18"},
    asic_18_bitmap{YType::str, "asic_18_bitmap"},
    show_asic_19{YType::boolean, "show_asic_19"},
    asic_19_bitmap{YType::str, "asic_19_bitmap"},
    show_asic_20{YType::boolean, "show_asic_20"},
    asic_20_bitmap{YType::str, "asic_20_bitmap"},
    show_asic_21{YType::boolean, "show_asic_21"},
    asic_21_bitmap{YType::str, "asic_21_bitmap"},
    show_asic_22{YType::boolean, "show_asic_22"},
    asic_22_bitmap{YType::str, "asic_22_bitmap"},
    show_asic_23{YType::boolean, "show_asic_23"},
    asic_23_bitmap{YType::str, "asic_23_bitmap"},
    show_asic_24{YType::boolean, "show_asic_24"},
    asic_24_bitmap{YType::str, "asic_24_bitmap"},
    show_asic_25{YType::boolean, "show_asic_25"},
    asic_25_bitmap{YType::str, "asic_25_bitmap"},
    show_asic_26{YType::boolean, "show_asic_26"},
    asic_26_bitmap{YType::str, "asic_26_bitmap"},
    show_asic_27{YType::boolean, "show_asic_27"},
    asic_27_bitmap{YType::str, "asic_27_bitmap"},
    show_asic_28{YType::boolean, "show_asic_28"},
    asic_28_bitmap{YType::str, "asic_28_bitmap"},
    show_asic_29{YType::boolean, "show_asic_29"},
    asic_29_bitmap{YType::str, "asic_29_bitmap"},
    show_asic_30{YType::boolean, "show_asic_30"},
    asic_30_bitmap{YType::str, "asic_30_bitmap"},
    show_asic_31{YType::boolean, "show_asic_31"},
    asic_31_bitmap{YType::str, "asic_31_bitmap"},
    show_asic_32{YType::boolean, "show_asic_32"},
    asic_32_bitmap{YType::str, "asic_32_bitmap"},
    show_asic_33{YType::boolean, "show_asic_33"},
    asic_33_bitmap{YType::str, "asic_33_bitmap"},
    show_asic_34{YType::boolean, "show_asic_34"},
    asic_34_bitmap{YType::str, "asic_34_bitmap"},
    show_asic_35{YType::boolean, "show_asic_35"},
    asic_35_bitmap{YType::str, "asic_35_bitmap"}
{

    yang_name = "clients"; yang_parent_name = "drivers"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::~Clients()
{
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::has_data() const
{
    if (is_presence_container) return true;
    return client_idx.is_set
	|| show_asic_0.is_set
	|| asic_0_bitmap.is_set
	|| show_asic_1.is_set
	|| asic_1_bitmap.is_set
	|| show_asic_2.is_set
	|| asic_2_bitmap.is_set
	|| show_asic_3.is_set
	|| asic_3_bitmap.is_set
	|| show_asic_4.is_set
	|| asic_4_bitmap.is_set
	|| show_asic_5.is_set
	|| asic_5_bitmap.is_set
	|| show_asic_6.is_set
	|| asic_6_bitmap.is_set
	|| show_asic_7.is_set
	|| asic_7_bitmap.is_set
	|| show_asic_8.is_set
	|| asic_8_bitmap.is_set
	|| show_asic_9.is_set
	|| asic_9_bitmap.is_set
	|| show_asic_10.is_set
	|| asic_10_bitmap.is_set
	|| show_asic_11.is_set
	|| asic_11_bitmap.is_set
	|| show_asic_12.is_set
	|| asic_12_bitmap.is_set
	|| show_asic_13.is_set
	|| asic_13_bitmap.is_set
	|| show_asic_14.is_set
	|| asic_14_bitmap.is_set
	|| show_asic_15.is_set
	|| asic_15_bitmap.is_set
	|| show_asic_16.is_set
	|| asic_16_bitmap.is_set
	|| show_asic_17.is_set
	|| asic_17_bitmap.is_set
	|| show_asic_18.is_set
	|| asic_18_bitmap.is_set
	|| show_asic_19.is_set
	|| asic_19_bitmap.is_set
	|| show_asic_20.is_set
	|| asic_20_bitmap.is_set
	|| show_asic_21.is_set
	|| asic_21_bitmap.is_set
	|| show_asic_22.is_set
	|| asic_22_bitmap.is_set
	|| show_asic_23.is_set
	|| asic_23_bitmap.is_set
	|| show_asic_24.is_set
	|| asic_24_bitmap.is_set
	|| show_asic_25.is_set
	|| asic_25_bitmap.is_set
	|| show_asic_26.is_set
	|| asic_26_bitmap.is_set
	|| show_asic_27.is_set
	|| asic_27_bitmap.is_set
	|| show_asic_28.is_set
	|| asic_28_bitmap.is_set
	|| show_asic_29.is_set
	|| asic_29_bitmap.is_set
	|| show_asic_30.is_set
	|| asic_30_bitmap.is_set
	|| show_asic_31.is_set
	|| asic_31_bitmap.is_set
	|| show_asic_32.is_set
	|| asic_32_bitmap.is_set
	|| show_asic_33.is_set
	|| asic_33_bitmap.is_set
	|| show_asic_34.is_set
	|| asic_34_bitmap.is_set
	|| show_asic_35.is_set
	|| asic_35_bitmap.is_set;
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_idx.yfilter)
	|| ydk::is_set(show_asic_0.yfilter)
	|| ydk::is_set(asic_0_bitmap.yfilter)
	|| ydk::is_set(show_asic_1.yfilter)
	|| ydk::is_set(asic_1_bitmap.yfilter)
	|| ydk::is_set(show_asic_2.yfilter)
	|| ydk::is_set(asic_2_bitmap.yfilter)
	|| ydk::is_set(show_asic_3.yfilter)
	|| ydk::is_set(asic_3_bitmap.yfilter)
	|| ydk::is_set(show_asic_4.yfilter)
	|| ydk::is_set(asic_4_bitmap.yfilter)
	|| ydk::is_set(show_asic_5.yfilter)
	|| ydk::is_set(asic_5_bitmap.yfilter)
	|| ydk::is_set(show_asic_6.yfilter)
	|| ydk::is_set(asic_6_bitmap.yfilter)
	|| ydk::is_set(show_asic_7.yfilter)
	|| ydk::is_set(asic_7_bitmap.yfilter)
	|| ydk::is_set(show_asic_8.yfilter)
	|| ydk::is_set(asic_8_bitmap.yfilter)
	|| ydk::is_set(show_asic_9.yfilter)
	|| ydk::is_set(asic_9_bitmap.yfilter)
	|| ydk::is_set(show_asic_10.yfilter)
	|| ydk::is_set(asic_10_bitmap.yfilter)
	|| ydk::is_set(show_asic_11.yfilter)
	|| ydk::is_set(asic_11_bitmap.yfilter)
	|| ydk::is_set(show_asic_12.yfilter)
	|| ydk::is_set(asic_12_bitmap.yfilter)
	|| ydk::is_set(show_asic_13.yfilter)
	|| ydk::is_set(asic_13_bitmap.yfilter)
	|| ydk::is_set(show_asic_14.yfilter)
	|| ydk::is_set(asic_14_bitmap.yfilter)
	|| ydk::is_set(show_asic_15.yfilter)
	|| ydk::is_set(asic_15_bitmap.yfilter)
	|| ydk::is_set(show_asic_16.yfilter)
	|| ydk::is_set(asic_16_bitmap.yfilter)
	|| ydk::is_set(show_asic_17.yfilter)
	|| ydk::is_set(asic_17_bitmap.yfilter)
	|| ydk::is_set(show_asic_18.yfilter)
	|| ydk::is_set(asic_18_bitmap.yfilter)
	|| ydk::is_set(show_asic_19.yfilter)
	|| ydk::is_set(asic_19_bitmap.yfilter)
	|| ydk::is_set(show_asic_20.yfilter)
	|| ydk::is_set(asic_20_bitmap.yfilter)
	|| ydk::is_set(show_asic_21.yfilter)
	|| ydk::is_set(asic_21_bitmap.yfilter)
	|| ydk::is_set(show_asic_22.yfilter)
	|| ydk::is_set(asic_22_bitmap.yfilter)
	|| ydk::is_set(show_asic_23.yfilter)
	|| ydk::is_set(asic_23_bitmap.yfilter)
	|| ydk::is_set(show_asic_24.yfilter)
	|| ydk::is_set(asic_24_bitmap.yfilter)
	|| ydk::is_set(show_asic_25.yfilter)
	|| ydk::is_set(asic_25_bitmap.yfilter)
	|| ydk::is_set(show_asic_26.yfilter)
	|| ydk::is_set(asic_26_bitmap.yfilter)
	|| ydk::is_set(show_asic_27.yfilter)
	|| ydk::is_set(asic_27_bitmap.yfilter)
	|| ydk::is_set(show_asic_28.yfilter)
	|| ydk::is_set(asic_28_bitmap.yfilter)
	|| ydk::is_set(show_asic_29.yfilter)
	|| ydk::is_set(asic_29_bitmap.yfilter)
	|| ydk::is_set(show_asic_30.yfilter)
	|| ydk::is_set(asic_30_bitmap.yfilter)
	|| ydk::is_set(show_asic_31.yfilter)
	|| ydk::is_set(asic_31_bitmap.yfilter)
	|| ydk::is_set(show_asic_32.yfilter)
	|| ydk::is_set(asic_32_bitmap.yfilter)
	|| ydk::is_set(show_asic_33.yfilter)
	|| ydk::is_set(asic_33_bitmap.yfilter)
	|| ydk::is_set(show_asic_34.yfilter)
	|| ydk::is_set(asic_34_bitmap.yfilter)
	|| ydk::is_set(show_asic_35.yfilter)
	|| ydk::is_set(asic_35_bitmap.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";
    ADD_KEY_TOKEN(client_idx, "client_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_idx.is_set || is_set(client_idx.yfilter)) leaf_name_data.push_back(client_idx.get_name_leafdata());
    if (show_asic_0.is_set || is_set(show_asic_0.yfilter)) leaf_name_data.push_back(show_asic_0.get_name_leafdata());
    if (asic_0_bitmap.is_set || is_set(asic_0_bitmap.yfilter)) leaf_name_data.push_back(asic_0_bitmap.get_name_leafdata());
    if (show_asic_1.is_set || is_set(show_asic_1.yfilter)) leaf_name_data.push_back(show_asic_1.get_name_leafdata());
    if (asic_1_bitmap.is_set || is_set(asic_1_bitmap.yfilter)) leaf_name_data.push_back(asic_1_bitmap.get_name_leafdata());
    if (show_asic_2.is_set || is_set(show_asic_2.yfilter)) leaf_name_data.push_back(show_asic_2.get_name_leafdata());
    if (asic_2_bitmap.is_set || is_set(asic_2_bitmap.yfilter)) leaf_name_data.push_back(asic_2_bitmap.get_name_leafdata());
    if (show_asic_3.is_set || is_set(show_asic_3.yfilter)) leaf_name_data.push_back(show_asic_3.get_name_leafdata());
    if (asic_3_bitmap.is_set || is_set(asic_3_bitmap.yfilter)) leaf_name_data.push_back(asic_3_bitmap.get_name_leafdata());
    if (show_asic_4.is_set || is_set(show_asic_4.yfilter)) leaf_name_data.push_back(show_asic_4.get_name_leafdata());
    if (asic_4_bitmap.is_set || is_set(asic_4_bitmap.yfilter)) leaf_name_data.push_back(asic_4_bitmap.get_name_leafdata());
    if (show_asic_5.is_set || is_set(show_asic_5.yfilter)) leaf_name_data.push_back(show_asic_5.get_name_leafdata());
    if (asic_5_bitmap.is_set || is_set(asic_5_bitmap.yfilter)) leaf_name_data.push_back(asic_5_bitmap.get_name_leafdata());
    if (show_asic_6.is_set || is_set(show_asic_6.yfilter)) leaf_name_data.push_back(show_asic_6.get_name_leafdata());
    if (asic_6_bitmap.is_set || is_set(asic_6_bitmap.yfilter)) leaf_name_data.push_back(asic_6_bitmap.get_name_leafdata());
    if (show_asic_7.is_set || is_set(show_asic_7.yfilter)) leaf_name_data.push_back(show_asic_7.get_name_leafdata());
    if (asic_7_bitmap.is_set || is_set(asic_7_bitmap.yfilter)) leaf_name_data.push_back(asic_7_bitmap.get_name_leafdata());
    if (show_asic_8.is_set || is_set(show_asic_8.yfilter)) leaf_name_data.push_back(show_asic_8.get_name_leafdata());
    if (asic_8_bitmap.is_set || is_set(asic_8_bitmap.yfilter)) leaf_name_data.push_back(asic_8_bitmap.get_name_leafdata());
    if (show_asic_9.is_set || is_set(show_asic_9.yfilter)) leaf_name_data.push_back(show_asic_9.get_name_leafdata());
    if (asic_9_bitmap.is_set || is_set(asic_9_bitmap.yfilter)) leaf_name_data.push_back(asic_9_bitmap.get_name_leafdata());
    if (show_asic_10.is_set || is_set(show_asic_10.yfilter)) leaf_name_data.push_back(show_asic_10.get_name_leafdata());
    if (asic_10_bitmap.is_set || is_set(asic_10_bitmap.yfilter)) leaf_name_data.push_back(asic_10_bitmap.get_name_leafdata());
    if (show_asic_11.is_set || is_set(show_asic_11.yfilter)) leaf_name_data.push_back(show_asic_11.get_name_leafdata());
    if (asic_11_bitmap.is_set || is_set(asic_11_bitmap.yfilter)) leaf_name_data.push_back(asic_11_bitmap.get_name_leafdata());
    if (show_asic_12.is_set || is_set(show_asic_12.yfilter)) leaf_name_data.push_back(show_asic_12.get_name_leafdata());
    if (asic_12_bitmap.is_set || is_set(asic_12_bitmap.yfilter)) leaf_name_data.push_back(asic_12_bitmap.get_name_leafdata());
    if (show_asic_13.is_set || is_set(show_asic_13.yfilter)) leaf_name_data.push_back(show_asic_13.get_name_leafdata());
    if (asic_13_bitmap.is_set || is_set(asic_13_bitmap.yfilter)) leaf_name_data.push_back(asic_13_bitmap.get_name_leafdata());
    if (show_asic_14.is_set || is_set(show_asic_14.yfilter)) leaf_name_data.push_back(show_asic_14.get_name_leafdata());
    if (asic_14_bitmap.is_set || is_set(asic_14_bitmap.yfilter)) leaf_name_data.push_back(asic_14_bitmap.get_name_leafdata());
    if (show_asic_15.is_set || is_set(show_asic_15.yfilter)) leaf_name_data.push_back(show_asic_15.get_name_leafdata());
    if (asic_15_bitmap.is_set || is_set(asic_15_bitmap.yfilter)) leaf_name_data.push_back(asic_15_bitmap.get_name_leafdata());
    if (show_asic_16.is_set || is_set(show_asic_16.yfilter)) leaf_name_data.push_back(show_asic_16.get_name_leafdata());
    if (asic_16_bitmap.is_set || is_set(asic_16_bitmap.yfilter)) leaf_name_data.push_back(asic_16_bitmap.get_name_leafdata());
    if (show_asic_17.is_set || is_set(show_asic_17.yfilter)) leaf_name_data.push_back(show_asic_17.get_name_leafdata());
    if (asic_17_bitmap.is_set || is_set(asic_17_bitmap.yfilter)) leaf_name_data.push_back(asic_17_bitmap.get_name_leafdata());
    if (show_asic_18.is_set || is_set(show_asic_18.yfilter)) leaf_name_data.push_back(show_asic_18.get_name_leafdata());
    if (asic_18_bitmap.is_set || is_set(asic_18_bitmap.yfilter)) leaf_name_data.push_back(asic_18_bitmap.get_name_leafdata());
    if (show_asic_19.is_set || is_set(show_asic_19.yfilter)) leaf_name_data.push_back(show_asic_19.get_name_leafdata());
    if (asic_19_bitmap.is_set || is_set(asic_19_bitmap.yfilter)) leaf_name_data.push_back(asic_19_bitmap.get_name_leafdata());
    if (show_asic_20.is_set || is_set(show_asic_20.yfilter)) leaf_name_data.push_back(show_asic_20.get_name_leafdata());
    if (asic_20_bitmap.is_set || is_set(asic_20_bitmap.yfilter)) leaf_name_data.push_back(asic_20_bitmap.get_name_leafdata());
    if (show_asic_21.is_set || is_set(show_asic_21.yfilter)) leaf_name_data.push_back(show_asic_21.get_name_leafdata());
    if (asic_21_bitmap.is_set || is_set(asic_21_bitmap.yfilter)) leaf_name_data.push_back(asic_21_bitmap.get_name_leafdata());
    if (show_asic_22.is_set || is_set(show_asic_22.yfilter)) leaf_name_data.push_back(show_asic_22.get_name_leafdata());
    if (asic_22_bitmap.is_set || is_set(asic_22_bitmap.yfilter)) leaf_name_data.push_back(asic_22_bitmap.get_name_leafdata());
    if (show_asic_23.is_set || is_set(show_asic_23.yfilter)) leaf_name_data.push_back(show_asic_23.get_name_leafdata());
    if (asic_23_bitmap.is_set || is_set(asic_23_bitmap.yfilter)) leaf_name_data.push_back(asic_23_bitmap.get_name_leafdata());
    if (show_asic_24.is_set || is_set(show_asic_24.yfilter)) leaf_name_data.push_back(show_asic_24.get_name_leafdata());
    if (asic_24_bitmap.is_set || is_set(asic_24_bitmap.yfilter)) leaf_name_data.push_back(asic_24_bitmap.get_name_leafdata());
    if (show_asic_25.is_set || is_set(show_asic_25.yfilter)) leaf_name_data.push_back(show_asic_25.get_name_leafdata());
    if (asic_25_bitmap.is_set || is_set(asic_25_bitmap.yfilter)) leaf_name_data.push_back(asic_25_bitmap.get_name_leafdata());
    if (show_asic_26.is_set || is_set(show_asic_26.yfilter)) leaf_name_data.push_back(show_asic_26.get_name_leafdata());
    if (asic_26_bitmap.is_set || is_set(asic_26_bitmap.yfilter)) leaf_name_data.push_back(asic_26_bitmap.get_name_leafdata());
    if (show_asic_27.is_set || is_set(show_asic_27.yfilter)) leaf_name_data.push_back(show_asic_27.get_name_leafdata());
    if (asic_27_bitmap.is_set || is_set(asic_27_bitmap.yfilter)) leaf_name_data.push_back(asic_27_bitmap.get_name_leafdata());
    if (show_asic_28.is_set || is_set(show_asic_28.yfilter)) leaf_name_data.push_back(show_asic_28.get_name_leafdata());
    if (asic_28_bitmap.is_set || is_set(asic_28_bitmap.yfilter)) leaf_name_data.push_back(asic_28_bitmap.get_name_leafdata());
    if (show_asic_29.is_set || is_set(show_asic_29.yfilter)) leaf_name_data.push_back(show_asic_29.get_name_leafdata());
    if (asic_29_bitmap.is_set || is_set(asic_29_bitmap.yfilter)) leaf_name_data.push_back(asic_29_bitmap.get_name_leafdata());
    if (show_asic_30.is_set || is_set(show_asic_30.yfilter)) leaf_name_data.push_back(show_asic_30.get_name_leafdata());
    if (asic_30_bitmap.is_set || is_set(asic_30_bitmap.yfilter)) leaf_name_data.push_back(asic_30_bitmap.get_name_leafdata());
    if (show_asic_31.is_set || is_set(show_asic_31.yfilter)) leaf_name_data.push_back(show_asic_31.get_name_leafdata());
    if (asic_31_bitmap.is_set || is_set(asic_31_bitmap.yfilter)) leaf_name_data.push_back(asic_31_bitmap.get_name_leafdata());
    if (show_asic_32.is_set || is_set(show_asic_32.yfilter)) leaf_name_data.push_back(show_asic_32.get_name_leafdata());
    if (asic_32_bitmap.is_set || is_set(asic_32_bitmap.yfilter)) leaf_name_data.push_back(asic_32_bitmap.get_name_leafdata());
    if (show_asic_33.is_set || is_set(show_asic_33.yfilter)) leaf_name_data.push_back(show_asic_33.get_name_leafdata());
    if (asic_33_bitmap.is_set || is_set(asic_33_bitmap.yfilter)) leaf_name_data.push_back(asic_33_bitmap.get_name_leafdata());
    if (show_asic_34.is_set || is_set(show_asic_34.yfilter)) leaf_name_data.push_back(show_asic_34.get_name_leafdata());
    if (asic_34_bitmap.is_set || is_set(asic_34_bitmap.yfilter)) leaf_name_data.push_back(asic_34_bitmap.get_name_leafdata());
    if (show_asic_35.is_set || is_set(show_asic_35.yfilter)) leaf_name_data.push_back(show_asic_35.get_name_leafdata());
    if (asic_35_bitmap.is_set || is_set(asic_35_bitmap.yfilter)) leaf_name_data.push_back(asic_35_bitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client_idx")
    {
        client_idx = value;
        client_idx.value_namespace = name_space;
        client_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_0")
    {
        show_asic_0 = value;
        show_asic_0.value_namespace = name_space;
        show_asic_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_0_bitmap")
    {
        asic_0_bitmap = value;
        asic_0_bitmap.value_namespace = name_space;
        asic_0_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_1")
    {
        show_asic_1 = value;
        show_asic_1.value_namespace = name_space;
        show_asic_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_1_bitmap")
    {
        asic_1_bitmap = value;
        asic_1_bitmap.value_namespace = name_space;
        asic_1_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_2")
    {
        show_asic_2 = value;
        show_asic_2.value_namespace = name_space;
        show_asic_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_2_bitmap")
    {
        asic_2_bitmap = value;
        asic_2_bitmap.value_namespace = name_space;
        asic_2_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_3")
    {
        show_asic_3 = value;
        show_asic_3.value_namespace = name_space;
        show_asic_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_3_bitmap")
    {
        asic_3_bitmap = value;
        asic_3_bitmap.value_namespace = name_space;
        asic_3_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_4")
    {
        show_asic_4 = value;
        show_asic_4.value_namespace = name_space;
        show_asic_4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_4_bitmap")
    {
        asic_4_bitmap = value;
        asic_4_bitmap.value_namespace = name_space;
        asic_4_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_5")
    {
        show_asic_5 = value;
        show_asic_5.value_namespace = name_space;
        show_asic_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_5_bitmap")
    {
        asic_5_bitmap = value;
        asic_5_bitmap.value_namespace = name_space;
        asic_5_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_6")
    {
        show_asic_6 = value;
        show_asic_6.value_namespace = name_space;
        show_asic_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_6_bitmap")
    {
        asic_6_bitmap = value;
        asic_6_bitmap.value_namespace = name_space;
        asic_6_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_7")
    {
        show_asic_7 = value;
        show_asic_7.value_namespace = name_space;
        show_asic_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_7_bitmap")
    {
        asic_7_bitmap = value;
        asic_7_bitmap.value_namespace = name_space;
        asic_7_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_8")
    {
        show_asic_8 = value;
        show_asic_8.value_namespace = name_space;
        show_asic_8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_8_bitmap")
    {
        asic_8_bitmap = value;
        asic_8_bitmap.value_namespace = name_space;
        asic_8_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_9")
    {
        show_asic_9 = value;
        show_asic_9.value_namespace = name_space;
        show_asic_9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_9_bitmap")
    {
        asic_9_bitmap = value;
        asic_9_bitmap.value_namespace = name_space;
        asic_9_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_10")
    {
        show_asic_10 = value;
        show_asic_10.value_namespace = name_space;
        show_asic_10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_10_bitmap")
    {
        asic_10_bitmap = value;
        asic_10_bitmap.value_namespace = name_space;
        asic_10_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_11")
    {
        show_asic_11 = value;
        show_asic_11.value_namespace = name_space;
        show_asic_11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_11_bitmap")
    {
        asic_11_bitmap = value;
        asic_11_bitmap.value_namespace = name_space;
        asic_11_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_12")
    {
        show_asic_12 = value;
        show_asic_12.value_namespace = name_space;
        show_asic_12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_12_bitmap")
    {
        asic_12_bitmap = value;
        asic_12_bitmap.value_namespace = name_space;
        asic_12_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_13")
    {
        show_asic_13 = value;
        show_asic_13.value_namespace = name_space;
        show_asic_13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_13_bitmap")
    {
        asic_13_bitmap = value;
        asic_13_bitmap.value_namespace = name_space;
        asic_13_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_14")
    {
        show_asic_14 = value;
        show_asic_14.value_namespace = name_space;
        show_asic_14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_14_bitmap")
    {
        asic_14_bitmap = value;
        asic_14_bitmap.value_namespace = name_space;
        asic_14_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_15")
    {
        show_asic_15 = value;
        show_asic_15.value_namespace = name_space;
        show_asic_15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_15_bitmap")
    {
        asic_15_bitmap = value;
        asic_15_bitmap.value_namespace = name_space;
        asic_15_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_16")
    {
        show_asic_16 = value;
        show_asic_16.value_namespace = name_space;
        show_asic_16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_16_bitmap")
    {
        asic_16_bitmap = value;
        asic_16_bitmap.value_namespace = name_space;
        asic_16_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_17")
    {
        show_asic_17 = value;
        show_asic_17.value_namespace = name_space;
        show_asic_17.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_17_bitmap")
    {
        asic_17_bitmap = value;
        asic_17_bitmap.value_namespace = name_space;
        asic_17_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_18")
    {
        show_asic_18 = value;
        show_asic_18.value_namespace = name_space;
        show_asic_18.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_18_bitmap")
    {
        asic_18_bitmap = value;
        asic_18_bitmap.value_namespace = name_space;
        asic_18_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_19")
    {
        show_asic_19 = value;
        show_asic_19.value_namespace = name_space;
        show_asic_19.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_19_bitmap")
    {
        asic_19_bitmap = value;
        asic_19_bitmap.value_namespace = name_space;
        asic_19_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_20")
    {
        show_asic_20 = value;
        show_asic_20.value_namespace = name_space;
        show_asic_20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_20_bitmap")
    {
        asic_20_bitmap = value;
        asic_20_bitmap.value_namespace = name_space;
        asic_20_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_21")
    {
        show_asic_21 = value;
        show_asic_21.value_namespace = name_space;
        show_asic_21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_21_bitmap")
    {
        asic_21_bitmap = value;
        asic_21_bitmap.value_namespace = name_space;
        asic_21_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_22")
    {
        show_asic_22 = value;
        show_asic_22.value_namespace = name_space;
        show_asic_22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_22_bitmap")
    {
        asic_22_bitmap = value;
        asic_22_bitmap.value_namespace = name_space;
        asic_22_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_23")
    {
        show_asic_23 = value;
        show_asic_23.value_namespace = name_space;
        show_asic_23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_23_bitmap")
    {
        asic_23_bitmap = value;
        asic_23_bitmap.value_namespace = name_space;
        asic_23_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_24")
    {
        show_asic_24 = value;
        show_asic_24.value_namespace = name_space;
        show_asic_24.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_24_bitmap")
    {
        asic_24_bitmap = value;
        asic_24_bitmap.value_namespace = name_space;
        asic_24_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_25")
    {
        show_asic_25 = value;
        show_asic_25.value_namespace = name_space;
        show_asic_25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_25_bitmap")
    {
        asic_25_bitmap = value;
        asic_25_bitmap.value_namespace = name_space;
        asic_25_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_26")
    {
        show_asic_26 = value;
        show_asic_26.value_namespace = name_space;
        show_asic_26.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_26_bitmap")
    {
        asic_26_bitmap = value;
        asic_26_bitmap.value_namespace = name_space;
        asic_26_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_27")
    {
        show_asic_27 = value;
        show_asic_27.value_namespace = name_space;
        show_asic_27.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_27_bitmap")
    {
        asic_27_bitmap = value;
        asic_27_bitmap.value_namespace = name_space;
        asic_27_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_28")
    {
        show_asic_28 = value;
        show_asic_28.value_namespace = name_space;
        show_asic_28.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_28_bitmap")
    {
        asic_28_bitmap = value;
        asic_28_bitmap.value_namespace = name_space;
        asic_28_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_29")
    {
        show_asic_29 = value;
        show_asic_29.value_namespace = name_space;
        show_asic_29.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_29_bitmap")
    {
        asic_29_bitmap = value;
        asic_29_bitmap.value_namespace = name_space;
        asic_29_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_30")
    {
        show_asic_30 = value;
        show_asic_30.value_namespace = name_space;
        show_asic_30.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_30_bitmap")
    {
        asic_30_bitmap = value;
        asic_30_bitmap.value_namespace = name_space;
        asic_30_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_31")
    {
        show_asic_31 = value;
        show_asic_31.value_namespace = name_space;
        show_asic_31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_31_bitmap")
    {
        asic_31_bitmap = value;
        asic_31_bitmap.value_namespace = name_space;
        asic_31_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_32")
    {
        show_asic_32 = value;
        show_asic_32.value_namespace = name_space;
        show_asic_32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_32_bitmap")
    {
        asic_32_bitmap = value;
        asic_32_bitmap.value_namespace = name_space;
        asic_32_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_33")
    {
        show_asic_33 = value;
        show_asic_33.value_namespace = name_space;
        show_asic_33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_33_bitmap")
    {
        asic_33_bitmap = value;
        asic_33_bitmap.value_namespace = name_space;
        asic_33_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_34")
    {
        show_asic_34 = value;
        show_asic_34.value_namespace = name_space;
        show_asic_34.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_34_bitmap")
    {
        asic_34_bitmap = value;
        asic_34_bitmap.value_namespace = name_space;
        asic_34_bitmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_asic_35")
    {
        show_asic_35 = value;
        show_asic_35.value_namespace = name_space;
        show_asic_35.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_35_bitmap")
    {
        asic_35_bitmap = value;
        asic_35_bitmap.value_namespace = name_space;
        asic_35_bitmap.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client_idx")
    {
        client_idx.yfilter = yfilter;
    }
    if(value_path == "show_asic_0")
    {
        show_asic_0.yfilter = yfilter;
    }
    if(value_path == "asic_0_bitmap")
    {
        asic_0_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_1")
    {
        show_asic_1.yfilter = yfilter;
    }
    if(value_path == "asic_1_bitmap")
    {
        asic_1_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_2")
    {
        show_asic_2.yfilter = yfilter;
    }
    if(value_path == "asic_2_bitmap")
    {
        asic_2_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_3")
    {
        show_asic_3.yfilter = yfilter;
    }
    if(value_path == "asic_3_bitmap")
    {
        asic_3_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_4")
    {
        show_asic_4.yfilter = yfilter;
    }
    if(value_path == "asic_4_bitmap")
    {
        asic_4_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_5")
    {
        show_asic_5.yfilter = yfilter;
    }
    if(value_path == "asic_5_bitmap")
    {
        asic_5_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_6")
    {
        show_asic_6.yfilter = yfilter;
    }
    if(value_path == "asic_6_bitmap")
    {
        asic_6_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_7")
    {
        show_asic_7.yfilter = yfilter;
    }
    if(value_path == "asic_7_bitmap")
    {
        asic_7_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_8")
    {
        show_asic_8.yfilter = yfilter;
    }
    if(value_path == "asic_8_bitmap")
    {
        asic_8_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_9")
    {
        show_asic_9.yfilter = yfilter;
    }
    if(value_path == "asic_9_bitmap")
    {
        asic_9_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_10")
    {
        show_asic_10.yfilter = yfilter;
    }
    if(value_path == "asic_10_bitmap")
    {
        asic_10_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_11")
    {
        show_asic_11.yfilter = yfilter;
    }
    if(value_path == "asic_11_bitmap")
    {
        asic_11_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_12")
    {
        show_asic_12.yfilter = yfilter;
    }
    if(value_path == "asic_12_bitmap")
    {
        asic_12_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_13")
    {
        show_asic_13.yfilter = yfilter;
    }
    if(value_path == "asic_13_bitmap")
    {
        asic_13_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_14")
    {
        show_asic_14.yfilter = yfilter;
    }
    if(value_path == "asic_14_bitmap")
    {
        asic_14_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_15")
    {
        show_asic_15.yfilter = yfilter;
    }
    if(value_path == "asic_15_bitmap")
    {
        asic_15_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_16")
    {
        show_asic_16.yfilter = yfilter;
    }
    if(value_path == "asic_16_bitmap")
    {
        asic_16_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_17")
    {
        show_asic_17.yfilter = yfilter;
    }
    if(value_path == "asic_17_bitmap")
    {
        asic_17_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_18")
    {
        show_asic_18.yfilter = yfilter;
    }
    if(value_path == "asic_18_bitmap")
    {
        asic_18_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_19")
    {
        show_asic_19.yfilter = yfilter;
    }
    if(value_path == "asic_19_bitmap")
    {
        asic_19_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_20")
    {
        show_asic_20.yfilter = yfilter;
    }
    if(value_path == "asic_20_bitmap")
    {
        asic_20_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_21")
    {
        show_asic_21.yfilter = yfilter;
    }
    if(value_path == "asic_21_bitmap")
    {
        asic_21_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_22")
    {
        show_asic_22.yfilter = yfilter;
    }
    if(value_path == "asic_22_bitmap")
    {
        asic_22_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_23")
    {
        show_asic_23.yfilter = yfilter;
    }
    if(value_path == "asic_23_bitmap")
    {
        asic_23_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_24")
    {
        show_asic_24.yfilter = yfilter;
    }
    if(value_path == "asic_24_bitmap")
    {
        asic_24_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_25")
    {
        show_asic_25.yfilter = yfilter;
    }
    if(value_path == "asic_25_bitmap")
    {
        asic_25_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_26")
    {
        show_asic_26.yfilter = yfilter;
    }
    if(value_path == "asic_26_bitmap")
    {
        asic_26_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_27")
    {
        show_asic_27.yfilter = yfilter;
    }
    if(value_path == "asic_27_bitmap")
    {
        asic_27_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_28")
    {
        show_asic_28.yfilter = yfilter;
    }
    if(value_path == "asic_28_bitmap")
    {
        asic_28_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_29")
    {
        show_asic_29.yfilter = yfilter;
    }
    if(value_path == "asic_29_bitmap")
    {
        asic_29_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_30")
    {
        show_asic_30.yfilter = yfilter;
    }
    if(value_path == "asic_30_bitmap")
    {
        asic_30_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_31")
    {
        show_asic_31.yfilter = yfilter;
    }
    if(value_path == "asic_31_bitmap")
    {
        asic_31_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_32")
    {
        show_asic_32.yfilter = yfilter;
    }
    if(value_path == "asic_32_bitmap")
    {
        asic_32_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_33")
    {
        show_asic_33.yfilter = yfilter;
    }
    if(value_path == "asic_33_bitmap")
    {
        asic_33_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_34")
    {
        show_asic_34.yfilter = yfilter;
    }
    if(value_path == "asic_34_bitmap")
    {
        asic_34_bitmap.yfilter = yfilter;
    }
    if(value_path == "show_asic_35")
    {
        show_asic_35.yfilter = yfilter;
    }
    if(value_path == "asic_35_bitmap")
    {
        asic_35_bitmap.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client_idx" || name == "show_asic_0" || name == "asic_0_bitmap" || name == "show_asic_1" || name == "asic_1_bitmap" || name == "show_asic_2" || name == "asic_2_bitmap" || name == "show_asic_3" || name == "asic_3_bitmap" || name == "show_asic_4" || name == "asic_4_bitmap" || name == "show_asic_5" || name == "asic_5_bitmap" || name == "show_asic_6" || name == "asic_6_bitmap" || name == "show_asic_7" || name == "asic_7_bitmap" || name == "show_asic_8" || name == "asic_8_bitmap" || name == "show_asic_9" || name == "asic_9_bitmap" || name == "show_asic_10" || name == "asic_10_bitmap" || name == "show_asic_11" || name == "asic_11_bitmap" || name == "show_asic_12" || name == "asic_12_bitmap" || name == "show_asic_13" || name == "asic_13_bitmap" || name == "show_asic_14" || name == "asic_14_bitmap" || name == "show_asic_15" || name == "asic_15_bitmap" || name == "show_asic_16" || name == "asic_16_bitmap" || name == "show_asic_17" || name == "asic_17_bitmap" || name == "show_asic_18" || name == "asic_18_bitmap" || name == "show_asic_19" || name == "asic_19_bitmap" || name == "show_asic_20" || name == "asic_20_bitmap" || name == "show_asic_21" || name == "asic_21_bitmap" || name == "show_asic_22" || name == "asic_22_bitmap" || name == "show_asic_23" || name == "asic_23_bitmap" || name == "show_asic_24" || name == "asic_24_bitmap" || name == "show_asic_25" || name == "asic_25_bitmap" || name == "show_asic_26" || name == "asic_26_bitmap" || name == "show_asic_27" || name == "asic_27_bitmap" || name == "show_asic_28" || name == "asic_28_bitmap" || name == "show_asic_29" || name == "asic_29_bitmap" || name == "show_asic_30" || name == "asic_30_bitmap" || name == "show_asic_31" || name == "asic_31_bitmap" || name == "show_asic_32" || name == "asic_32_bitmap" || name == "show_asic_33" || name == "asic_33_bitmap" || name == "show_asic_34" || name == "asic_34_bitmap" || name == "show_asic_35" || name == "asic_35_bitmap")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Resource()
    :
    sdr(this, {"sdr_name"})
{

    yang_name = "resource"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Resource::~Resource()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr.len(); index++)
    {
        if(sdr[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Resource::has_operation() const
{
    for (std::size_t index=0; index<sdr.len(); index++)
    {
        if(sdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Resource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Resource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Resource::Sdr>();
        ent_->parent = this;
        sdr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Resource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sdr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Resource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Resource::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Resource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Sdr()
    :
    sdr_name{YType::str, "sdr_name"},
    description{YType::str, "description"}
        ,
    application(this, {"app_name"})
{

    yang_name = "sdr"; yang_parent_name = "resource"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::~Sdr()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return sdr_name.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_name.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/resource/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    ADD_KEY_TOKEN(sdr_name, "sdr_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Resource::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Resource::Sdr::Application>();
        ent_->parent = this;
        application.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Resource::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr_name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr_name")
    {
        sdr_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "sdr_name" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::Application()
    :
    app_name{YType::str, "app_name"},
    description{YType::str, "description"}
        ,
    ids_range(this, {"id", "elements"})
{

    yang_name = "application"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::~Application()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ids_range.len(); index++)
    {
        if(ids_range[index]->has_data())
            return true;
    }
    return app_name.is_set
	|| description.is_set;
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::has_operation() const
{
    for (std::size_t index=0; index<ids_range.len(); index++)
    {
        if(ids_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(app_name.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(app_name, "app_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_name.is_set || is_set(app_name.yfilter)) leaf_name_data.push_back(app_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ids_range")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange>();
        ent_->parent = this;
        ids_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ids_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app_name")
    {
        app_name = value;
        app_name.value_namespace = name_space;
        app_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app_name")
    {
        app_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ids_range" || name == "app_name" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::IdsRange()
    :
    id{YType::int32, "id"},
    elements{YType::int32, "elements"}
        ,
    fgid_ids(this, {"fgid_id", "line_idx"})
{

    yang_name = "ids_range"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::~IdsRange()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fgid_ids.len(); index++)
    {
        if(fgid_ids[index]->has_data())
            return true;
    }
    return id.is_set
	|| elements.is_set;
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::has_operation() const
{
    for (std::size_t index=0; index<fgid_ids.len(); index++)
    {
        if(fgid_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(elements.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ids_range";
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(elements, "elements");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (elements.is_set || is_set(elements.yfilter)) leaf_name_data.push_back(elements.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fgid_ids")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds>();
        ent_->parent = this;
        fgid_ids.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fgid_ids.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elements")
    {
        elements = value;
        elements.value_namespace = name_space;
        elements.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "elements")
    {
        elements.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fgid_ids" || name == "id" || name == "elements")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::FgidIds()
    :
    fgid_id{YType::str, "fgid_id"},
    line_idx{YType::int32, "line_idx"},
    sdr_name_h{YType::str, "sdr_name_h"},
    app_name_h{YType::str, "app_name_h"}
{

    yang_name = "fgid_ids"; yang_parent_name = "ids_range"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::~FgidIds()
{
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::has_data() const
{
    if (is_presence_container) return true;
    return fgid_id.is_set
	|| line_idx.is_set
	|| sdr_name_h.is_set
	|| app_name_h.is_set;
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fgid_id.yfilter)
	|| ydk::is_set(line_idx.yfilter)
	|| ydk::is_set(sdr_name_h.yfilter)
	|| ydk::is_set(app_name_h.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgid_ids";
    ADD_KEY_TOKEN(fgid_id, "fgid_id");
    ADD_KEY_TOKEN(line_idx, "line_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgid_id.is_set || is_set(fgid_id.yfilter)) leaf_name_data.push_back(fgid_id.get_name_leafdata());
    if (line_idx.is_set || is_set(line_idx.yfilter)) leaf_name_data.push_back(line_idx.get_name_leafdata());
    if (sdr_name_h.is_set || is_set(sdr_name_h.yfilter)) leaf_name_data.push_back(sdr_name_h.get_name_leafdata());
    if (app_name_h.is_set || is_set(app_name_h.yfilter)) leaf_name_data.push_back(app_name_h.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fgid_id")
    {
        fgid_id = value;
        fgid_id.value_namespace = name_space;
        fgid_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line_idx")
    {
        line_idx = value;
        line_idx.value_namespace = name_space;
        line_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_name_h")
    {
        sdr_name_h = value;
        sdr_name_h.value_namespace = name_space;
        sdr_name_h.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app_name_h")
    {
        app_name_h = value;
        app_name_h.value_namespace = name_space;
        app_name_h.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fgid_id")
    {
        fgid_id.yfilter = yfilter;
    }
    if(value_path == "line_idx")
    {
        line_idx.yfilter = yfilter;
    }
    if(value_path == "sdr_name_h")
    {
        sdr_name_h.yfilter = yfilter;
    }
    if(value_path == "app_name_h")
    {
        app_name_h.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fgid_id" || name == "line_idx" || name == "sdr_name_h" || name == "app_name_h")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Statistics()
    :
    all(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All>())
    , sdr(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Sdr>())
    , pool(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Pool>())
    , system(std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::System>())
{
    all->parent = this;
    sdr->parent = this;
    pool->parent = this;
    system->parent = this;

    yang_name = "statistics"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (sdr !=  nullptr && sdr->has_data())
	|| (pool !=  nullptr && pool->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool Controller::Fabric::Oper::Fgid::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (sdr !=  nullptr && sdr->has_operation())
	|| (pool !=  nullptr && pool->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string Controller::Fabric::Oper::Fgid::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All>();
        }
        return all;
    }

    if(child_yang_name == "sdr")
    {
        if(sdr == nullptr)
        {
            sdr = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Sdr>();
        }
        return sdr;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Pool>();
        }
        return pool;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(sdr != nullptr)
    {
        _children["sdr"] = sdr;
    }

    if(pool != nullptr)
    {
        _children["pool"] = pool;
    }

    if(system != nullptr)
    {
        _children["system"] = system;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "sdr" || name == "pool" || name == "system")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::All()
    :
    stats_list(this, {"system_stats"})
    , sdr_list(this, {"sdr_name"})
    , pool_list(this, {"pool_id"})
{

    yang_name = "all"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::~All()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sdr_list.len(); index++)
    {
        if(sdr_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sdr_list.len(); index++)
    {
        if(sdr_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All::StatsList>();
        ent_->parent = this;
        stats_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "sdr_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All::SdrList>();
        ent_->parent = this;
        sdr_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pool_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All::PoolList>();
        ent_->parent = this;
        pool_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sdr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pool_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats_list" || name == "sdr_list" || name == "pool_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::StatsList()
    :
    system_stats{YType::int32, "system_stats"},
    system_total_fgids{YType::uint32, "system_total_fgids"},
    system_inuse_fgids{YType::uint32, "system_inuse_fgids"},
    system_hwm_fgids{YType::uint32, "system_hwm_fgids"}
{

    yang_name = "stats_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::~StatsList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return system_stats.is_set
	|| system_total_fgids.is_set
	|| system_inuse_fgids.is_set
	|| system_hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_stats.yfilter)
	|| ydk::is_set(system_total_fgids.yfilter)
	|| ydk::is_set(system_inuse_fgids.yfilter)
	|| ydk::is_set(system_hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/statistics/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats_list";
    ADD_KEY_TOKEN(system_stats, "system_stats");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_stats.is_set || is_set(system_stats.yfilter)) leaf_name_data.push_back(system_stats.get_name_leafdata());
    if (system_total_fgids.is_set || is_set(system_total_fgids.yfilter)) leaf_name_data.push_back(system_total_fgids.get_name_leafdata());
    if (system_inuse_fgids.is_set || is_set(system_inuse_fgids.yfilter)) leaf_name_data.push_back(system_inuse_fgids.get_name_leafdata());
    if (system_hwm_fgids.is_set || is_set(system_hwm_fgids.yfilter)) leaf_name_data.push_back(system_hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system_stats")
    {
        system_stats = value;
        system_stats.value_namespace = name_space;
        system_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_total_fgids")
    {
        system_total_fgids = value;
        system_total_fgids.value_namespace = name_space;
        system_total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_inuse_fgids")
    {
        system_inuse_fgids = value;
        system_inuse_fgids.value_namespace = name_space;
        system_inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_hwm_fgids")
    {
        system_hwm_fgids = value;
        system_hwm_fgids.value_namespace = name_space;
        system_hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system_stats")
    {
        system_stats.yfilter = yfilter;
    }
    if(value_path == "system_total_fgids")
    {
        system_total_fgids.yfilter = yfilter;
    }
    if(value_path == "system_inuse_fgids")
    {
        system_inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "system_hwm_fgids")
    {
        system_hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system_stats" || name == "system_total_fgids" || name == "system_inuse_fgids" || name == "system_hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::SdrList()
    :
    sdr_name{YType::str, "sdr_name"},
    description{YType::str, "description"},
    sdr_total_fgids{YType::uint32, "sdr_total_fgids"},
    sdr_inuse_fgids{YType::uint32, "sdr_inuse_fgids"},
    sdr_hwm_fgids{YType::uint32, "sdr_hwm_fgids"}
        ,
    application(this, {"app_name"})
{

    yang_name = "sdr_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::~SdrList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return sdr_name.is_set
	|| description.is_set
	|| sdr_total_fgids.is_set
	|| sdr_inuse_fgids.is_set
	|| sdr_hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(sdr_total_fgids.yfilter)
	|| ydk::is_set(sdr_inuse_fgids.yfilter)
	|| ydk::is_set(sdr_hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/statistics/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr_list";
    ADD_KEY_TOKEN(sdr_name, "sdr_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (sdr_total_fgids.is_set || is_set(sdr_total_fgids.yfilter)) leaf_name_data.push_back(sdr_total_fgids.get_name_leafdata());
    if (sdr_inuse_fgids.is_set || is_set(sdr_inuse_fgids.yfilter)) leaf_name_data.push_back(sdr_inuse_fgids.get_name_leafdata());
    if (sdr_hwm_fgids.is_set || is_set(sdr_hwm_fgids.yfilter)) leaf_name_data.push_back(sdr_hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application>();
        ent_->parent = this;
        application.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr_name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_total_fgids")
    {
        sdr_total_fgids = value;
        sdr_total_fgids.value_namespace = name_space;
        sdr_total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_inuse_fgids")
    {
        sdr_inuse_fgids = value;
        sdr_inuse_fgids.value_namespace = name_space;
        sdr_inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_hwm_fgids")
    {
        sdr_hwm_fgids = value;
        sdr_hwm_fgids.value_namespace = name_space;
        sdr_hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr_name")
    {
        sdr_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "sdr_total_fgids")
    {
        sdr_total_fgids.yfilter = yfilter;
    }
    if(value_path == "sdr_inuse_fgids")
    {
        sdr_inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "sdr_hwm_fgids")
    {
        sdr_hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "sdr_name" || name == "description" || name == "sdr_total_fgids" || name == "sdr_inuse_fgids" || name == "sdr_hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::Application()
    :
    app_name{YType::str, "app_name"},
    description{YType::str, "description"},
    app_id{YType::uint32, "app_id"},
    pool_id{YType::uint32, "pool_id"},
    inuse_fgids{YType::uint32, "inuse_fgids"},
    hwm_fgids{YType::uint32, "hwm_fgids"}
{

    yang_name = "application"; yang_parent_name = "sdr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::~Application()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::has_data() const
{
    if (is_presence_container) return true;
    return app_name.is_set
	|| description.is_set
	|| app_id.is_set
	|| pool_id.is_set
	|| inuse_fgids.is_set
	|| hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(app_id.yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(inuse_fgids.yfilter)
	|| ydk::is_set(hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(app_name, "app_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_name.is_set || is_set(app_name.yfilter)) leaf_name_data.push_back(app_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (app_id.is_set || is_set(app_id.yfilter)) leaf_name_data.push_back(app_id.get_name_leafdata());
    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (inuse_fgids.is_set || is_set(inuse_fgids.yfilter)) leaf_name_data.push_back(inuse_fgids.get_name_leafdata());
    if (hwm_fgids.is_set || is_set(hwm_fgids.yfilter)) leaf_name_data.push_back(hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app_name")
    {
        app_name = value;
        app_name.value_namespace = name_space;
        app_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app_id")
    {
        app_id = value;
        app_id.value_namespace = name_space;
        app_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inuse_fgids")
    {
        inuse_fgids = value;
        inuse_fgids.value_namespace = name_space;
        inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids = value;
        hwm_fgids.value_namespace = name_space;
        hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app_name")
    {
        app_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "app_id")
    {
        app_id.yfilter = yfilter;
    }
    if(value_path == "pool_id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "inuse_fgids")
    {
        inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app_name" || name == "description" || name == "app_id" || name == "pool_id" || name == "inuse_fgids" || name == "hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::PoolList()
    :
    pool_id{YType::uint32, "pool_id"},
    pool_name{YType::str, "pool_name"},
    pool_type{YType::str, "pool_type"},
    start_fgid{YType::str, "start_fgid"},
    total_fgids{YType::uint32, "total_fgids"},
    current_fgids{YType::uint32, "current_fgids"},
    hwm_fgids{YType::uint32, "hwm_fgids"}
{

    yang_name = "pool_list"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::~PoolList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::has_data() const
{
    if (is_presence_container) return true;
    return pool_id.is_set
	|| pool_name.is_set
	|| pool_type.is_set
	|| start_fgid.is_set
	|| total_fgids.is_set
	|| current_fgids.is_set
	|| hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(pool_type.yfilter)
	|| ydk::is_set(start_fgid.yfilter)
	|| ydk::is_set(total_fgids.yfilter)
	|| ydk::is_set(current_fgids.yfilter)
	|| ydk::is_set(hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/statistics/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool_list";
    ADD_KEY_TOKEN(pool_id, "pool_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (pool_type.is_set || is_set(pool_type.yfilter)) leaf_name_data.push_back(pool_type.get_name_leafdata());
    if (start_fgid.is_set || is_set(start_fgid.yfilter)) leaf_name_data.push_back(start_fgid.get_name_leafdata());
    if (total_fgids.is_set || is_set(total_fgids.yfilter)) leaf_name_data.push_back(total_fgids.get_name_leafdata());
    if (current_fgids.is_set || is_set(current_fgids.yfilter)) leaf_name_data.push_back(current_fgids.get_name_leafdata());
    if (hwm_fgids.is_set || is_set(hwm_fgids.yfilter)) leaf_name_data.push_back(hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool_id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_type")
    {
        pool_type = value;
        pool_type.value_namespace = name_space;
        pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start_fgid")
    {
        start_fgid = value;
        start_fgid.value_namespace = name_space;
        start_fgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_fgids")
    {
        total_fgids = value;
        total_fgids.value_namespace = name_space;
        total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current_fgids")
    {
        current_fgids = value;
        current_fgids.value_namespace = name_space;
        current_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids = value;
        hwm_fgids.value_namespace = name_space;
        hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool_id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "pool_name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "pool_type")
    {
        pool_type.yfilter = yfilter;
    }
    if(value_path == "start_fgid")
    {
        start_fgid.yfilter = yfilter;
    }
    if(value_path == "total_fgids")
    {
        total_fgids.yfilter = yfilter;
    }
    if(value_path == "current_fgids")
    {
        current_fgids.yfilter = yfilter;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::All::PoolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool_id" || name == "pool_name" || name == "pool_type" || name == "start_fgid" || name == "total_fgids" || name == "current_fgids" || name == "hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::Sdr()
    :
    sdr_list(this, {"sdr_name"})
{

    yang_name = "sdr"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::~Sdr()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_list.len(); index++)
    {
        if(sdr_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::has_operation() const
{
    for (std::size_t index=0; index<sdr_list.len(); index++)
    {
        if(sdr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList>();
        ent_->parent = this;
        sdr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sdr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::SdrList()
    :
    sdr_name{YType::str, "sdr_name"},
    description{YType::str, "description"},
    sdr_total_fgids{YType::uint32, "sdr_total_fgids"},
    sdr_inuse_fgids{YType::uint32, "sdr_inuse_fgids"},
    sdr_hwm_fgids{YType::uint32, "sdr_hwm_fgids"}
        ,
    application(this, {"app_name"})
{

    yang_name = "sdr_list"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::~SdrList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    return sdr_name.is_set
	|| description.is_set
	|| sdr_total_fgids.is_set
	|| sdr_inuse_fgids.is_set
	|| sdr_hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::has_operation() const
{
    for (std::size_t index=0; index<application.len(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sdr_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(sdr_total_fgids.yfilter)
	|| ydk::is_set(sdr_inuse_fgids.yfilter)
	|| ydk::is_set(sdr_hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/statistics/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr_list";
    ADD_KEY_TOKEN(sdr_name, "sdr_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sdr_name.is_set || is_set(sdr_name.yfilter)) leaf_name_data.push_back(sdr_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (sdr_total_fgids.is_set || is_set(sdr_total_fgids.yfilter)) leaf_name_data.push_back(sdr_total_fgids.get_name_leafdata());
    if (sdr_inuse_fgids.is_set || is_set(sdr_inuse_fgids.yfilter)) leaf_name_data.push_back(sdr_inuse_fgids.get_name_leafdata());
    if (sdr_hwm_fgids.is_set || is_set(sdr_hwm_fgids.yfilter)) leaf_name_data.push_back(sdr_hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application>();
        ent_->parent = this;
        application.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : application.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sdr_name")
    {
        sdr_name = value;
        sdr_name.value_namespace = name_space;
        sdr_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_total_fgids")
    {
        sdr_total_fgids = value;
        sdr_total_fgids.value_namespace = name_space;
        sdr_total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_inuse_fgids")
    {
        sdr_inuse_fgids = value;
        sdr_inuse_fgids.value_namespace = name_space;
        sdr_inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr_hwm_fgids")
    {
        sdr_hwm_fgids = value;
        sdr_hwm_fgids.value_namespace = name_space;
        sdr_hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sdr_name")
    {
        sdr_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "sdr_total_fgids")
    {
        sdr_total_fgids.yfilter = yfilter;
    }
    if(value_path == "sdr_inuse_fgids")
    {
        sdr_inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "sdr_hwm_fgids")
    {
        sdr_hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "sdr_name" || name == "description" || name == "sdr_total_fgids" || name == "sdr_inuse_fgids" || name == "sdr_hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::Application()
    :
    app_name{YType::str, "app_name"},
    description{YType::str, "description"},
    app_id{YType::uint32, "app_id"},
    pool_id{YType::uint32, "pool_id"},
    inuse_fgids{YType::uint32, "inuse_fgids"},
    hwm_fgids{YType::uint32, "hwm_fgids"}
{

    yang_name = "application"; yang_parent_name = "sdr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::~Application()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::has_data() const
{
    if (is_presence_container) return true;
    return app_name.is_set
	|| description.is_set
	|| app_id.is_set
	|| pool_id.is_set
	|| inuse_fgids.is_set
	|| hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(app_id.yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(inuse_fgids.yfilter)
	|| ydk::is_set(hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    ADD_KEY_TOKEN(app_name, "app_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_name.is_set || is_set(app_name.yfilter)) leaf_name_data.push_back(app_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (app_id.is_set || is_set(app_id.yfilter)) leaf_name_data.push_back(app_id.get_name_leafdata());
    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (inuse_fgids.is_set || is_set(inuse_fgids.yfilter)) leaf_name_data.push_back(inuse_fgids.get_name_leafdata());
    if (hwm_fgids.is_set || is_set(hwm_fgids.yfilter)) leaf_name_data.push_back(hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app_name")
    {
        app_name = value;
        app_name.value_namespace = name_space;
        app_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "app_id")
    {
        app_id = value;
        app_id.value_namespace = name_space;
        app_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inuse_fgids")
    {
        inuse_fgids = value;
        inuse_fgids.value_namespace = name_space;
        inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids = value;
        hwm_fgids.value_namespace = name_space;
        hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app_name")
    {
        app_name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "app_id")
    {
        app_id.yfilter = yfilter;
    }
    if(value_path == "pool_id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "inuse_fgids")
    {
        inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app_name" || name == "description" || name == "app_id" || name == "pool_id" || name == "inuse_fgids" || name == "hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Pool::Pool()
    :
    pool_list(this, {"pool_id"})
{

    yang_name = "pool"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::Pool::~Pool()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::has_operation() const
{
    for (std::size_t index=0; index<pool_list.len(); index++)
    {
        if(pool_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList>();
        ent_->parent = this;
        pool_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pool_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::PoolList()
    :
    pool_id{YType::uint32, "pool_id"},
    pool_name{YType::str, "pool_name"},
    pool_type{YType::str, "pool_type"},
    start_fgid{YType::str, "start_fgid"},
    total_fgids{YType::uint32, "total_fgids"},
    current_fgids{YType::uint32, "current_fgids"},
    hwm_fgids{YType::uint32, "hwm_fgids"}
{

    yang_name = "pool_list"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::~PoolList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::has_data() const
{
    if (is_presence_container) return true;
    return pool_id.is_set
	|| pool_name.is_set
	|| pool_type.is_set
	|| start_fgid.is_set
	|| total_fgids.is_set
	|| current_fgids.is_set
	|| hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(pool_type.yfilter)
	|| ydk::is_set(start_fgid.yfilter)
	|| ydk::is_set(total_fgids.yfilter)
	|| ydk::is_set(current_fgids.yfilter)
	|| ydk::is_set(hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/statistics/pool/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool_list";
    ADD_KEY_TOKEN(pool_id, "pool_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (pool_type.is_set || is_set(pool_type.yfilter)) leaf_name_data.push_back(pool_type.get_name_leafdata());
    if (start_fgid.is_set || is_set(start_fgid.yfilter)) leaf_name_data.push_back(start_fgid.get_name_leafdata());
    if (total_fgids.is_set || is_set(total_fgids.yfilter)) leaf_name_data.push_back(total_fgids.get_name_leafdata());
    if (current_fgids.is_set || is_set(current_fgids.yfilter)) leaf_name_data.push_back(current_fgids.get_name_leafdata());
    if (hwm_fgids.is_set || is_set(hwm_fgids.yfilter)) leaf_name_data.push_back(hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool_id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool_type")
    {
        pool_type = value;
        pool_type.value_namespace = name_space;
        pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start_fgid")
    {
        start_fgid = value;
        start_fgid.value_namespace = name_space;
        start_fgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_fgids")
    {
        total_fgids = value;
        total_fgids.value_namespace = name_space;
        total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current_fgids")
    {
        current_fgids = value;
        current_fgids.value_namespace = name_space;
        current_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids = value;
        hwm_fgids.value_namespace = name_space;
        hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool_id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "pool_name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "pool_type")
    {
        pool_type.yfilter = yfilter;
    }
    if(value_path == "start_fgid")
    {
        start_fgid.yfilter = yfilter;
    }
    if(value_path == "total_fgids")
    {
        total_fgids.yfilter = yfilter;
    }
    if(value_path == "current_fgids")
    {
        current_fgids.yfilter = yfilter;
    }
    if(value_path == "hwm_fgids")
    {
        hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool_id" || name == "pool_name" || name == "pool_type" || name == "start_fgid" || name == "total_fgids" || name == "current_fgids" || name == "hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::System::System()
    :
    stats_list(this, {"system_stats"})
{

    yang_name = "system"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::System::~System()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::Statistics::System::StatsList>();
        ent_->parent = this;
        stats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::System::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::Statistics::System::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::StatsList()
    :
    system_stats{YType::int32, "system_stats"},
    system_total_fgids{YType::uint32, "system_total_fgids"},
    system_inuse_fgids{YType::uint32, "system_inuse_fgids"},
    system_hwm_fgids{YType::uint32, "system_hwm_fgids"}
{

    yang_name = "stats_list"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::~StatsList()
{
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return system_stats.is_set
	|| system_total_fgids.is_set
	|| system_inuse_fgids.is_set
	|| system_hwm_fgids.is_set;
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_stats.yfilter)
	|| ydk::is_set(system_total_fgids.yfilter)
	|| ydk::is_set(system_inuse_fgids.yfilter)
	|| ydk::is_set(system_hwm_fgids.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/statistics/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats_list";
    ADD_KEY_TOKEN(system_stats, "system_stats");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_stats.is_set || is_set(system_stats.yfilter)) leaf_name_data.push_back(system_stats.get_name_leafdata());
    if (system_total_fgids.is_set || is_set(system_total_fgids.yfilter)) leaf_name_data.push_back(system_total_fgids.get_name_leafdata());
    if (system_inuse_fgids.is_set || is_set(system_inuse_fgids.yfilter)) leaf_name_data.push_back(system_inuse_fgids.get_name_leafdata());
    if (system_hwm_fgids.is_set || is_set(system_hwm_fgids.yfilter)) leaf_name_data.push_back(system_hwm_fgids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system_stats")
    {
        system_stats = value;
        system_stats.value_namespace = name_space;
        system_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_total_fgids")
    {
        system_total_fgids = value;
        system_total_fgids.value_namespace = name_space;
        system_total_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_inuse_fgids")
    {
        system_inuse_fgids = value;
        system_inuse_fgids.value_namespace = name_space;
        system_inuse_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system_hwm_fgids")
    {
        system_hwm_fgids = value;
        system_hwm_fgids.value_namespace = name_space;
        system_hwm_fgids.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system_stats")
    {
        system_stats.yfilter = yfilter;
    }
    if(value_path == "system_total_fgids")
    {
        system_total_fgids.yfilter = yfilter;
    }
    if(value_path == "system_inuse_fgids")
    {
        system_inuse_fgids.yfilter = yfilter;
    }
    if(value_path == "system_hwm_fgids")
    {
        system_hwm_fgids.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::Statistics::System::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system_stats" || name == "system_total_fgids" || name == "system_inuse_fgids" || name == "system_hwm_fgids")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::FgidMgr()
    :
    trace(this, {"buffer"})
{

    yang_name = "fgid_mgr"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::~FgidMgr()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgid_mgr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::FgidMgr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Fgid::FgidMgr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "fgid_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::~Trace()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/fgid_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::~Location()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_options.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_blocks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::ProgramError::ProgramError()
    :
    start{YType::int32, "start"},
    end{YType::int32, "end"}
        ,
    rack(this, {"rack_id"})
{

    yang_name = "program_error"; yang_parent_name = "fgid"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Fgid::ProgramError::~ProgramError()
{
}

bool Controller::Fabric::Oper::Fgid::ProgramError::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return start.is_set
	|| end.is_set;
}

bool Controller::Fabric::Oper::Fgid::ProgramError::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::ProgramError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/fabric/oper/fgid/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Fgid::ProgramError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "program_error";
    ADD_KEY_TOKEN(start, "start");
    ADD_KEY_TOKEN(end, "end");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::ProgramError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::ProgramError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Fgid::ProgramError::Rack>();
        ent_->parent = this;
        rack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::ProgramError::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Fgid::ProgramError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::ProgramError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::ProgramError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "start" || name == "end")
        return true;
    return false;
}

Controller::Fabric::Oper::Fgid::ProgramError::Rack::Rack()
    :
    rack_id{YType::int32, "rack_id"},
    rack_id_str{YType::str, "rack_id_str"},
    fgids_in_error{YType::str, "fgids_in_error"},
    found_fgids_in_error{YType::boolean, "found_fgids_in_error"},
    total_error_fgids{YType::int32, "total_error_fgids"},
    incorrect_fgids_range{YType::boolean, "incorrect_fgids_range"},
    cmd_not_supported{YType::boolean, "cmd_not_supported"}
{

    yang_name = "rack"; yang_parent_name = "program_error"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Fgid::ProgramError::Rack::~Rack()
{
}

bool Controller::Fabric::Oper::Fgid::ProgramError::Rack::has_data() const
{
    if (is_presence_container) return true;
    return rack_id.is_set
	|| rack_id_str.is_set
	|| fgids_in_error.is_set
	|| found_fgids_in_error.is_set
	|| total_error_fgids.is_set
	|| incorrect_fgids_range.is_set
	|| cmd_not_supported.is_set;
}

bool Controller::Fabric::Oper::Fgid::ProgramError::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack_id.yfilter)
	|| ydk::is_set(rack_id_str.yfilter)
	|| ydk::is_set(fgids_in_error.yfilter)
	|| ydk::is_set(found_fgids_in_error.yfilter)
	|| ydk::is_set(total_error_fgids.yfilter)
	|| ydk::is_set(incorrect_fgids_range.yfilter)
	|| ydk::is_set(cmd_not_supported.yfilter);
}

std::string Controller::Fabric::Oper::Fgid::ProgramError::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack_id, "rack_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Fgid::ProgramError::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_id.is_set || is_set(rack_id.yfilter)) leaf_name_data.push_back(rack_id.get_name_leafdata());
    if (rack_id_str.is_set || is_set(rack_id_str.yfilter)) leaf_name_data.push_back(rack_id_str.get_name_leafdata());
    if (fgids_in_error.is_set || is_set(fgids_in_error.yfilter)) leaf_name_data.push_back(fgids_in_error.get_name_leafdata());
    if (found_fgids_in_error.is_set || is_set(found_fgids_in_error.yfilter)) leaf_name_data.push_back(found_fgids_in_error.get_name_leafdata());
    if (total_error_fgids.is_set || is_set(total_error_fgids.yfilter)) leaf_name_data.push_back(total_error_fgids.get_name_leafdata());
    if (incorrect_fgids_range.is_set || is_set(incorrect_fgids_range.yfilter)) leaf_name_data.push_back(incorrect_fgids_range.get_name_leafdata());
    if (cmd_not_supported.is_set || is_set(cmd_not_supported.yfilter)) leaf_name_data.push_back(cmd_not_supported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Fgid::ProgramError::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Fgid::ProgramError::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Fgid::ProgramError::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_id")
    {
        rack_id = value;
        rack_id.value_namespace = name_space;
        rack_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_id_str")
    {
        rack_id_str = value;
        rack_id_str.value_namespace = name_space;
        rack_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgids_in_error")
    {
        fgids_in_error = value;
        fgids_in_error.value_namespace = name_space;
        fgids_in_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "found_fgids_in_error")
    {
        found_fgids_in_error = value;
        found_fgids_in_error.value_namespace = name_space;
        found_fgids_in_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_error_fgids")
    {
        total_error_fgids = value;
        total_error_fgids.value_namespace = name_space;
        total_error_fgids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incorrect_fgids_range")
    {
        incorrect_fgids_range = value;
        incorrect_fgids_range.value_namespace = name_space;
        incorrect_fgids_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmd_not_supported")
    {
        cmd_not_supported = value;
        cmd_not_supported.value_namespace = name_space;
        cmd_not_supported.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Fgid::ProgramError::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_id")
    {
        rack_id.yfilter = yfilter;
    }
    if(value_path == "rack_id_str")
    {
        rack_id_str.yfilter = yfilter;
    }
    if(value_path == "fgids_in_error")
    {
        fgids_in_error.yfilter = yfilter;
    }
    if(value_path == "found_fgids_in_error")
    {
        found_fgids_in_error.yfilter = yfilter;
    }
    if(value_path == "total_error_fgids")
    {
        total_error_fgids.yfilter = yfilter;
    }
    if(value_path == "incorrect_fgids_range")
    {
        incorrect_fgids_range.yfilter = yfilter;
    }
    if(value_path == "cmd_not_supported")
    {
        cmd_not_supported.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Fgid::ProgramError::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack_id" || name == "rack_id_str" || name == "fgids_in_error" || name == "found_fgids_in_error" || name == "total_error_fgids" || name == "incorrect_fgids_range" || name == "cmd_not_supported")
        return true;
    return false;
}

Controller::CardMgr::CardMgr()
    :
    trace(this, {"buffer"})
    , inventory(std::make_shared<Controller::CardMgr::Inventory>())
    , event_history(std::make_shared<Controller::CardMgr::EventHistory>())
    , notif_history(std::make_shared<Controller::CardMgr::NotifHistory>())
    , oir_history(std::make_shared<Controller::CardMgr::OirHistory>())
    , iofpga(std::make_shared<Controller::CardMgr::Iofpga>())
    , bootloader(std::make_shared<Controller::CardMgr::Bootloader>())
{
    inventory->parent = this;
    event_history->parent = this;
    notif_history->parent = this;
    oir_history->parent = this;
    iofpga->parent = this;
    bootloader->parent = this;

    yang_name = "card_mgr"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::~CardMgr()
{
}

bool Controller::CardMgr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return (inventory !=  nullptr && inventory->has_data())
	|| (event_history !=  nullptr && event_history->has_data())
	|| (notif_history !=  nullptr && notif_history->has_data())
	|| (oir_history !=  nullptr && oir_history->has_data())
	|| (iofpga !=  nullptr && iofpga->has_data())
	|| (bootloader !=  nullptr && bootloader->has_data());
}

bool Controller::CardMgr::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (inventory !=  nullptr && inventory->has_operation())
	|| (event_history !=  nullptr && event_history->has_operation())
	|| (notif_history !=  nullptr && notif_history->has_operation())
	|| (oir_history !=  nullptr && oir_history->has_operation())
	|| (iofpga !=  nullptr && iofpga->has_operation())
	|| (bootloader !=  nullptr && bootloader->has_operation());
}

std::string Controller::CardMgr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_mgr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    if(child_yang_name == "inventory")
    {
        if(inventory == nullptr)
        {
            inventory = std::make_shared<Controller::CardMgr::Inventory>();
        }
        return inventory;
    }

    if(child_yang_name == "event-history")
    {
        if(event_history == nullptr)
        {
            event_history = std::make_shared<Controller::CardMgr::EventHistory>();
        }
        return event_history;
    }

    if(child_yang_name == "notif-history")
    {
        if(notif_history == nullptr)
        {
            notif_history = std::make_shared<Controller::CardMgr::NotifHistory>();
        }
        return notif_history;
    }

    if(child_yang_name == "oir-history")
    {
        if(oir_history == nullptr)
        {
            oir_history = std::make_shared<Controller::CardMgr::OirHistory>();
        }
        return oir_history;
    }

    if(child_yang_name == "iofpga")
    {
        if(iofpga == nullptr)
        {
            iofpga = std::make_shared<Controller::CardMgr::Iofpga>();
        }
        return iofpga;
    }

    if(child_yang_name == "bootloader")
    {
        if(bootloader == nullptr)
        {
            bootloader = std::make_shared<Controller::CardMgr::Bootloader>();
        }
        return bootloader;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(inventory != nullptr)
    {
        _children["inventory"] = inventory;
    }

    if(event_history != nullptr)
    {
        _children["event-history"] = event_history;
    }

    if(notif_history != nullptr)
    {
        _children["notif-history"] = notif_history;
    }

    if(oir_history != nullptr)
    {
        _children["oir-history"] = oir_history;
    }

    if(iofpga != nullptr)
    {
        _children["iofpga"] = iofpga;
    }

    if(bootloader != nullptr)
    {
        _children["bootloader"] = bootloader;
    }

    return _children;
}

void Controller::CardMgr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace" || name == "inventory" || name == "event-history" || name == "notif-history" || name == "oir-history" || name == "iofpga" || name == "bootloader")
        return true;
    return false;
}

Controller::CardMgr::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Trace::~Trace()
{
}

bool Controller::CardMgr::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::CardMgr::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::CardMgr::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::CardMgr::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Trace::Location::~Location()
{
}

bool Controller::CardMgr::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::CardMgr::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::CardMgr::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Trace::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_options.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::CardMgr::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::CardMgr::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::CardMgr::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::CardMgr::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_blocks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::CardMgr::Inventory::Inventory()
    :
    summary(std::make_shared<Controller::CardMgr::Inventory::Summary>())
    , detail(std::make_shared<Controller::CardMgr::Inventory::Detail>())
{
    summary->parent = this;
    detail->parent = this;

    yang_name = "inventory"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Inventory::~Inventory()
{
}

bool Controller::CardMgr::Inventory::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CardMgr::Inventory::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CardMgr::Inventory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Controller::CardMgr::Inventory::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CardMgr::Inventory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Controller::CardMgr::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "detail")
        return true;
    return false;
}

Controller::CardMgr::Inventory::Summary::Summary()
    :
    card_mgr_inv_summary(this, {"location"})
{

    yang_name = "summary"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Inventory::Summary::~Summary()
{
}

bool Controller::CardMgr::Inventory::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<card_mgr_inv_summary.len(); index++)
    {
        if(card_mgr_inv_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Inventory::Summary::has_operation() const
{
    for (std::size_t index=0; index<card_mgr_inv_summary.len(); index++)
    {
        if(card_mgr_inv_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Inventory::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Inventory::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Inventory::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Inventory::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_mgr_inv_summary")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Inventory::Summary::CardMgrInvSummary>();
        ent_->parent = this;
        card_mgr_inv_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Inventory::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : card_mgr_inv_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Inventory::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Inventory::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Inventory::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_mgr_inv_summary")
        return true;
    return false;
}

Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::CardMgrInvSummary()
    :
    location{YType::str, "location"},
    card_mgr_inv_pid_string{YType::str, "card_mgr_inv_PID_string"},
    card_mgr_inv_slot_number{YType::uint32, "card_mgr_inv_slot_number"},
    card_mgr_inv_serial_number{YType::str, "card_mgr_inv_serial_number"},
    card_mgr_inv_hw_version{YType::str, "card_mgr_inv_hw_version"},
    card_mgr_inv_card_state{YType::str, "card_mgr_inv_card_state"}
{

    yang_name = "card_mgr_inv_summary"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::~CardMgrInvSummary()
{
}

bool Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| card_mgr_inv_pid_string.is_set
	|| card_mgr_inv_slot_number.is_set
	|| card_mgr_inv_serial_number.is_set
	|| card_mgr_inv_hw_version.is_set
	|| card_mgr_inv_card_state.is_set;
}

bool Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(card_mgr_inv_pid_string.yfilter)
	|| ydk::is_set(card_mgr_inv_slot_number.yfilter)
	|| ydk::is_set(card_mgr_inv_serial_number.yfilter)
	|| ydk::is_set(card_mgr_inv_hw_version.yfilter)
	|| ydk::is_set(card_mgr_inv_card_state.yfilter);
}

std::string Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/inventory/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_mgr_inv_summary";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (card_mgr_inv_pid_string.is_set || is_set(card_mgr_inv_pid_string.yfilter)) leaf_name_data.push_back(card_mgr_inv_pid_string.get_name_leafdata());
    if (card_mgr_inv_slot_number.is_set || is_set(card_mgr_inv_slot_number.yfilter)) leaf_name_data.push_back(card_mgr_inv_slot_number.get_name_leafdata());
    if (card_mgr_inv_serial_number.is_set || is_set(card_mgr_inv_serial_number.yfilter)) leaf_name_data.push_back(card_mgr_inv_serial_number.get_name_leafdata());
    if (card_mgr_inv_hw_version.is_set || is_set(card_mgr_inv_hw_version.yfilter)) leaf_name_data.push_back(card_mgr_inv_hw_version.get_name_leafdata());
    if (card_mgr_inv_card_state.is_set || is_set(card_mgr_inv_card_state.yfilter)) leaf_name_data.push_back(card_mgr_inv_card_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_mgr_inv_PID_string")
    {
        card_mgr_inv_pid_string = value;
        card_mgr_inv_pid_string.value_namespace = name_space;
        card_mgr_inv_pid_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_mgr_inv_slot_number")
    {
        card_mgr_inv_slot_number = value;
        card_mgr_inv_slot_number.value_namespace = name_space;
        card_mgr_inv_slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_mgr_inv_serial_number")
    {
        card_mgr_inv_serial_number = value;
        card_mgr_inv_serial_number.value_namespace = name_space;
        card_mgr_inv_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_mgr_inv_hw_version")
    {
        card_mgr_inv_hw_version = value;
        card_mgr_inv_hw_version.value_namespace = name_space;
        card_mgr_inv_hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_mgr_inv_card_state")
    {
        card_mgr_inv_card_state = value;
        card_mgr_inv_card_state.value_namespace = name_space;
        card_mgr_inv_card_state.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "card_mgr_inv_PID_string")
    {
        card_mgr_inv_pid_string.yfilter = yfilter;
    }
    if(value_path == "card_mgr_inv_slot_number")
    {
        card_mgr_inv_slot_number.yfilter = yfilter;
    }
    if(value_path == "card_mgr_inv_serial_number")
    {
        card_mgr_inv_serial_number.yfilter = yfilter;
    }
    if(value_path == "card_mgr_inv_hw_version")
    {
        card_mgr_inv_hw_version.yfilter = yfilter;
    }
    if(value_path == "card_mgr_inv_card_state")
    {
        card_mgr_inv_card_state.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Inventory::Summary::CardMgrInvSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "card_mgr_inv_PID_string" || name == "card_mgr_inv_slot_number" || name == "card_mgr_inv_serial_number" || name == "card_mgr_inv_hw_version" || name == "card_mgr_inv_card_state")
        return true;
    return false;
}

Controller::CardMgr::Inventory::Detail::Detail()
    :
    card_mgr_inv_detail(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Inventory::Detail::~Detail()
{
}

bool Controller::CardMgr::Inventory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<card_mgr_inv_detail.len(); index++)
    {
        if(card_mgr_inv_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Inventory::Detail::has_operation() const
{
    for (std::size_t index=0; index<card_mgr_inv_detail.len(); index++)
    {
        if(card_mgr_inv_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Inventory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Inventory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Inventory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Inventory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_mgr_inv_detail")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Inventory::Detail::CardMgrInvDetail>();
        ent_->parent = this;
        card_mgr_inv_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Inventory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : card_mgr_inv_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Inventory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Inventory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Inventory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_mgr_inv_detail")
        return true;
    return false;
}

Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetail()
    :
    location{YType::str, "location"}
        ,
    card_mgr_inv_detail_list(std::make_shared<Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList>())
{
    card_mgr_inv_detail_list->parent = this;

    yang_name = "card_mgr_inv_detail"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::~CardMgrInvDetail()
{
}

bool Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_mgr_inv_detail_list !=  nullptr && card_mgr_inv_detail_list->has_data());
}

bool Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_mgr_inv_detail_list !=  nullptr && card_mgr_inv_detail_list->has_operation());
}

std::string Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/inventory/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_mgr_inv_detail";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_mgr_inv_detail_list")
    {
        if(card_mgr_inv_detail_list == nullptr)
        {
            card_mgr_inv_detail_list = std::make_shared<Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList>();
        }
        return card_mgr_inv_detail_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_mgr_inv_detail_list != nullptr)
    {
        _children["card_mgr_inv_detail_list"] = card_mgr_inv_detail_list;
    }

    return _children;
}

void Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_mgr_inv_detail_list" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::CardMgrInvDetailList()
    :
    card_mgr_inv_detail_values{YType::str, "card_mgr_inv_detail_values"}
{

    yang_name = "card_mgr_inv_detail_list"; yang_parent_name = "card_mgr_inv_detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::~CardMgrInvDetailList()
{
}

bool Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_mgr_inv_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::has_operation() const
{
    for (auto const & leaf : card_mgr_inv_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_mgr_inv_detail_values.yfilter);
}

std::string Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_mgr_inv_detail_list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_mgr_inv_detail_values_name_datas = card_mgr_inv_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_mgr_inv_detail_values_name_datas.begin(), card_mgr_inv_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_mgr_inv_detail_values")
    {
        card_mgr_inv_detail_values.append(value);
    }
}

void Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_mgr_inv_detail_values")
    {
        card_mgr_inv_detail_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_mgr_inv_detail_values")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::EventHistory()
    :
    brief(std::make_shared<Controller::CardMgr::EventHistory::Brief>())
    , detail(std::make_shared<Controller::CardMgr::EventHistory::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "event-history"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::EventHistory::~EventHistory()
{
}

bool Controller::CardMgr::EventHistory::has_data() const
{
    if (is_presence_container) return true;
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CardMgr::EventHistory::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CardMgr::EventHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::CardMgr::EventHistory::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CardMgr::EventHistory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief != nullptr)
    {
        _children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Controller::CardMgr::EventHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::EventHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::EventHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Brief::Brief()
    :
    location(this, {"location"})
{

    yang_name = "brief"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::EventHistory::Brief::~Brief()
{
}

bool Controller::CardMgr::EventHistory::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::EventHistory::Brief::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::EventHistory::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/event-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::EventHistory::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::EventHistory::Brief::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::EventHistory::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::EventHistory::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::EventHistory::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Brief::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_event_hist_brief(std::make_shared<Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief>())
{
    card_event_hist_brief->parent = this;

    yang_name = "location"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::EventHistory::Brief::Location::~Location()
{
}

bool Controller::CardMgr::EventHistory::Brief::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_event_hist_brief !=  nullptr && card_event_hist_brief->has_data());
}

bool Controller::CardMgr::EventHistory::Brief::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_event_hist_brief !=  nullptr && card_event_hist_brief->has_operation());
}

std::string Controller::CardMgr::EventHistory::Brief::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/event-history/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::EventHistory::Brief::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Brief::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Brief::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_event_hist_brief")
    {
        if(card_event_hist_brief == nullptr)
        {
            card_event_hist_brief = std::make_shared<Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief>();
        }
        return card_event_hist_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Brief::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_event_hist_brief != nullptr)
    {
        _children["card_event_hist_brief"] = card_event_hist_brief;
    }

    return _children;
}

void Controller::CardMgr::EventHistory::Brief::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::EventHistory::Brief::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::EventHistory::Brief::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_brief" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::CardEventHistBrief()
    :
    card_event_hist_brief_values{YType::str, "card_event_hist_brief_values"}
{

    yang_name = "card_event_hist_brief"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::~CardEventHistBrief()
{
}

bool Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_event_hist_brief_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::has_operation() const
{
    for (auto const & leaf : card_event_hist_brief_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_event_hist_brief_values.yfilter);
}

std::string Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_event_hist_brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_event_hist_brief_values_name_datas = card_event_hist_brief_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_event_hist_brief_values_name_datas.begin(), card_event_hist_brief_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_event_hist_brief_values")
    {
        card_event_hist_brief_values.append(value);
    }
}

void Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_event_hist_brief_values")
    {
        card_event_hist_brief_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_brief_values")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Detail::Detail()
    :
    location(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "event-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::EventHistory::Detail::~Detail()
{
}

bool Controller::CardMgr::EventHistory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::EventHistory::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::EventHistory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/event-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::EventHistory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::EventHistory::Detail::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::EventHistory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::EventHistory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::EventHistory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Detail::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_event_hist_detail(std::make_shared<Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail>())
{
    card_event_hist_detail->parent = this;

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::EventHistory::Detail::Location::~Location()
{
}

bool Controller::CardMgr::EventHistory::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_event_hist_detail !=  nullptr && card_event_hist_detail->has_data());
}

bool Controller::CardMgr::EventHistory::Detail::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_event_hist_detail !=  nullptr && card_event_hist_detail->has_operation());
}

std::string Controller::CardMgr::EventHistory::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/event-history/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::EventHistory::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_event_hist_detail")
    {
        if(card_event_hist_detail == nullptr)
        {
            card_event_hist_detail = std::make_shared<Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail>();
        }
        return card_event_hist_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_event_hist_detail != nullptr)
    {
        _children["card_event_hist_detail"] = card_event_hist_detail;
    }

    return _children;
}

void Controller::CardMgr::EventHistory::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::EventHistory::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::EventHistory::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_detail" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::CardEventHistDetail()
    :
    card_event_hist_detail_values{YType::str, "card_event_hist_detail_values"}
{

    yang_name = "card_event_hist_detail"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::~CardEventHistDetail()
{
}

bool Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_event_hist_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::has_operation() const
{
    for (auto const & leaf : card_event_hist_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_event_hist_detail_values.yfilter);
}

std::string Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_event_hist_detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_event_hist_detail_values_name_datas = card_event_hist_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_event_hist_detail_values_name_datas.begin(), card_event_hist_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_event_hist_detail_values")
    {
        card_event_hist_detail_values.append(value);
    }
}

void Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_event_hist_detail_values")
    {
        card_event_hist_detail_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_event_hist_detail_values")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::NotifHistory()
    :
    brief(std::make_shared<Controller::CardMgr::NotifHistory::Brief>())
    , detail(std::make_shared<Controller::CardMgr::NotifHistory::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "notif-history"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::~NotifHistory()
{
}

bool Controller::CardMgr::NotifHistory::has_data() const
{
    if (is_presence_container) return true;
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::CardMgr::NotifHistory::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::CardMgr::NotifHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notif-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::CardMgr::NotifHistory::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::CardMgr::NotifHistory::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief != nullptr)
    {
        _children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::NotifHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::NotifHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Brief::Brief()
    :
    location(this, {"location"})
{

    yang_name = "brief"; yang_parent_name = "notif-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::Brief::~Brief()
{
}

bool Controller::CardMgr::NotifHistory::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::NotifHistory::Brief::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::NotifHistory::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/notif-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::NotifHistory::Brief::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::NotifHistory::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::NotifHistory::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Brief::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_notif_hist_brief(std::make_shared<Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief>())
{
    card_notif_hist_brief->parent = this;

    yang_name = "location"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::Brief::Location::~Location()
{
}

bool Controller::CardMgr::NotifHistory::Brief::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_notif_hist_brief !=  nullptr && card_notif_hist_brief->has_data());
}

bool Controller::CardMgr::NotifHistory::Brief::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_notif_hist_brief !=  nullptr && card_notif_hist_brief->has_operation());
}

std::string Controller::CardMgr::NotifHistory::Brief::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/notif-history/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::Brief::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Brief::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Brief::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_notif_hist_brief")
    {
        if(card_notif_hist_brief == nullptr)
        {
            card_notif_hist_brief = std::make_shared<Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief>();
        }
        return card_notif_hist_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Brief::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_notif_hist_brief != nullptr)
    {
        _children["card_notif_hist_brief"] = card_notif_hist_brief;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::Brief::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::NotifHistory::Brief::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::NotifHistory::Brief::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_brief" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::CardNotifHistBrief()
    :
    card_notif_hist_brief_values{YType::str, "card_notif_hist_brief_values"}
{

    yang_name = "card_notif_hist_brief"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::~CardNotifHistBrief()
{
}

bool Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_notif_hist_brief_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::has_operation() const
{
    for (auto const & leaf : card_notif_hist_brief_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_notif_hist_brief_values.yfilter);
}

std::string Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_notif_hist_brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_notif_hist_brief_values_name_datas = card_notif_hist_brief_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_notif_hist_brief_values_name_datas.begin(), card_notif_hist_brief_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_notif_hist_brief_values")
    {
        card_notif_hist_brief_values.append(value);
    }
}

void Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_notif_hist_brief_values")
    {
        card_notif_hist_brief_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_brief_values")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Detail::Detail()
    :
    location(this, {"location"})
{

    yang_name = "detail"; yang_parent_name = "notif-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::Detail::~Detail()
{
}

bool Controller::CardMgr::NotifHistory::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::NotifHistory::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::NotifHistory::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/notif-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::NotifHistory::Detail::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::NotifHistory::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::NotifHistory::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Detail::Location::Location()
    :
    location{YType::str, "location"}
        ,
    card_notif_hist_detail(std::make_shared<Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail>())
{
    card_notif_hist_detail->parent = this;

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::NotifHistory::Detail::Location::~Location()
{
}

bool Controller::CardMgr::NotifHistory::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    return location.is_set
	|| (card_notif_hist_detail !=  nullptr && card_notif_hist_detail->has_data());
}

bool Controller::CardMgr::NotifHistory::Detail::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| (card_notif_hist_detail !=  nullptr && card_notif_hist_detail->has_operation());
}

std::string Controller::CardMgr::NotifHistory::Detail::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/notif-history/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::NotifHistory::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location, "location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_notif_hist_detail")
    {
        if(card_notif_hist_detail == nullptr)
        {
            card_notif_hist_detail = std::make_shared<Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail>();
        }
        return card_notif_hist_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_notif_hist_detail != nullptr)
    {
        _children["card_notif_hist_detail"] = card_notif_hist_detail;
    }

    return _children;
}

void Controller::CardMgr::NotifHistory::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::NotifHistory::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::NotifHistory::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_detail" || name == "location")
        return true;
    return false;
}

Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::CardNotifHistDetail()
    :
    card_notif_hist_detail_values{YType::str, "card_notif_hist_detail_values"}
{

    yang_name = "card_notif_hist_detail"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::~CardNotifHistDetail()
{
}

bool Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_notif_hist_detail_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::has_operation() const
{
    for (auto const & leaf : card_notif_hist_detail_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_notif_hist_detail_values.yfilter);
}

std::string Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_notif_hist_detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_notif_hist_detail_values_name_datas = card_notif_hist_detail_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_notif_hist_detail_values_name_datas.begin(), card_notif_hist_detail_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_notif_hist_detail_values")
    {
        card_notif_hist_detail_values.append(value);
    }
}

void Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_notif_hist_detail_values")
    {
        card_notif_hist_detail_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_notif_hist_detail_values")
        return true;
    return false;
}

Controller::CardMgr::OirHistory::OirHistory()
    :
    rack(this, {"rack"})
{

    yang_name = "oir-history"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::OirHistory::~OirHistory()
{
}

bool Controller::CardMgr::OirHistory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::OirHistory::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::OirHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::OirHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oir-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::OirHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::OirHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::OirHistory::Rack>();
        ent_->parent = this;
        rack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::OirHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rack.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::OirHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::OirHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::OirHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Controller::CardMgr::OirHistory::Rack::Rack()
    :
    rack{YType::str, "rack"}
        ,
    card_oir_hist(std::make_shared<Controller::CardMgr::OirHistory::Rack::CardOirHist>())
{
    card_oir_hist->parent = this;

    yang_name = "rack"; yang_parent_name = "oir-history"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::OirHistory::Rack::~Rack()
{
}

bool Controller::CardMgr::OirHistory::Rack::has_data() const
{
    if (is_presence_container) return true;
    return rack.is_set
	|| (card_oir_hist !=  nullptr && card_oir_hist->has_data());
}

bool Controller::CardMgr::OirHistory::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| (card_oir_hist !=  nullptr && card_oir_hist->has_operation());
}

std::string Controller::CardMgr::OirHistory::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/oir-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::OirHistory::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack, "rack");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::OirHistory::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::OirHistory::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card_oir_hist")
    {
        if(card_oir_hist == nullptr)
        {
            card_oir_hist = std::make_shared<Controller::CardMgr::OirHistory::Rack::CardOirHist>();
        }
        return card_oir_hist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::OirHistory::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(card_oir_hist != nullptr)
    {
        _children["card_oir_hist"] = card_oir_hist;
    }

    return _children;
}

void Controller::CardMgr::OirHistory::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::OirHistory::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
}

bool Controller::CardMgr::OirHistory::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_oir_hist" || name == "rack")
        return true;
    return false;
}

Controller::CardMgr::OirHistory::Rack::CardOirHist::CardOirHist()
    :
    card_oir_events{YType::str, "card_oir_events"}
{

    yang_name = "card_oir_hist"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::OirHistory::Rack::CardOirHist::~CardOirHist()
{
}

bool Controller::CardMgr::OirHistory::Rack::CardOirHist::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : card_oir_events.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::OirHistory::Rack::CardOirHist::has_operation() const
{
    for (auto const & leaf : card_oir_events.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_oir_events.yfilter);
}

std::string Controller::CardMgr::OirHistory::Rack::CardOirHist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card_oir_hist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::OirHistory::Rack::CardOirHist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto card_oir_events_name_datas = card_oir_events.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), card_oir_events_name_datas.begin(), card_oir_events_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::OirHistory::Rack::CardOirHist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::OirHistory::Rack::CardOirHist::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::OirHistory::Rack::CardOirHist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_oir_events")
    {
        card_oir_events.append(value);
    }
}

void Controller::CardMgr::OirHistory::Rack::CardOirHist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_oir_events")
    {
        card_oir_events.yfilter = yfilter;
    }
}

bool Controller::CardMgr::OirHistory::Rack::CardOirHist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card_oir_events")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Iofpga()
    :
    register_(std::make_shared<Controller::CardMgr::Iofpga::Register>())
    , flash(std::make_shared<Controller::CardMgr::Iofpga::Flash>())
{
    register_->parent = this;
    flash->parent = this;

    yang_name = "iofpga"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::~Iofpga()
{
}

bool Controller::CardMgr::Iofpga::has_data() const
{
    if (is_presence_container) return true;
    return (register_ !=  nullptr && register_->has_data())
	|| (flash !=  nullptr && flash->has_data());
}

bool Controller::CardMgr::Iofpga::has_operation() const
{
    return is_set(yfilter)
	|| (register_ !=  nullptr && register_->has_operation())
	|| (flash !=  nullptr && flash->has_operation());
}

std::string Controller::CardMgr::Iofpga::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register")
    {
        if(register_ == nullptr)
        {
            register_ = std::make_shared<Controller::CardMgr::Iofpga::Register>();
        }
        return register_;
    }

    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Controller::CardMgr::Iofpga::Flash>();
        }
        return flash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(register_ != nullptr)
    {
        _children["register"] = register_;
    }

    if(flash != nullptr)
    {
        _children["flash"] = flash;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register" || name == "flash")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Register()
    :
    cpu(std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu>())
    , mb(std::make_shared<Controller::CardMgr::Iofpga::Register::Mb>())
    , dc(std::make_shared<Controller::CardMgr::Iofpga::Register::Dc>())
{
    cpu->parent = this;
    mb->parent = this;
    dc->parent = this;

    yang_name = "register"; yang_parent_name = "iofpga"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::~Register()
{
}

bool Controller::CardMgr::Iofpga::Register::has_data() const
{
    if (is_presence_container) return true;
    return (cpu !=  nullptr && cpu->has_data())
	|| (mb !=  nullptr && mb->has_data())
	|| (dc !=  nullptr && dc->has_data());
}

bool Controller::CardMgr::Iofpga::Register::has_operation() const
{
    return is_set(yfilter)
	|| (cpu !=  nullptr && cpu->has_operation())
	|| (mb !=  nullptr && mb->has_operation())
	|| (dc !=  nullptr && dc->has_operation());
}

std::string Controller::CardMgr::Iofpga::Register::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/iofpga/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu>();
        }
        return cpu;
    }

    if(child_yang_name == "mb")
    {
        if(mb == nullptr)
        {
            mb = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb>();
        }
        return mb;
    }

    if(child_yang_name == "dc")
    {
        if(dc == nullptr)
        {
            dc = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc>();
        }
        return dc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cpu != nullptr)
    {
        _children["cpu"] = cpu;
    }

    if(mb != nullptr)
    {
        _children["mb"] = mb;
    }

    if(dc != nullptr)
    {
        _children["dc"] = dc;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Register::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Register::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu" || name == "mb" || name == "dc")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::Cpu()
    :
    register_location(this, {"register_location"})
{

    yang_name = "cpu"; yang_parent_name = "register"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Cpu::~Cpu()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::has_operation() const
{
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/iofpga/register/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation>();
        ent_->parent = this;
        register_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : register_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Register::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::RegisterLocation()
    :
    register_location{YType::str, "register_location"}
        ,
    iofpga_block_number(this, {"iofpga_block_num"})
    , iofpga_offset(this, {"hex_offset"})
    , iofpga_address(this, {"start_hex_addr", "end_hex_addr"})
{

    yang_name = "register_location"; yang_parent_name = "cpu"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::~RegisterLocation()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_data())
            return true;
    }
    return register_location.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::has_operation() const
{
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_location.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/iofpga/register/cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register_location";
    ADD_KEY_TOKEN(register_location, "register_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_location.is_set || is_set(register_location.yfilter)) leaf_name_data.push_back(register_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_block_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber>();
        ent_->parent = this;
        iofpga_block_number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_offset")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset>();
        ent_->parent = this;
        iofpga_offset.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_address")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress>();
        ent_->parent = this;
        iofpga_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_block_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_offset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "register_location")
    {
        register_location = value;
        register_location.value_namespace = name_space;
        register_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register_location")
    {
        register_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_block_number" || name == "iofpga_offset" || name == "iofpga_address" || name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaBlockNumber()
    :
    iofpga_block_num{YType::uint32, "iofpga_block_num"},
    block_location{YType::str, "block_location"},
    iofpga_block_nm{YType::str, "iofpga_block_nm"}
        ,
    iofpga_register_number(this, {"index_"})
{

    yang_name = "iofpga_block_number"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::~IofpgaBlockNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_data())
            return true;
    }
    return iofpga_block_num.is_set
	|| block_location.is_set
	|| iofpga_block_nm.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_block_num.yfilter)
	|| ydk::is_set(block_location.yfilter)
	|| ydk::is_set(iofpga_block_nm.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_block_number";
    ADD_KEY_TOKEN(iofpga_block_num, "iofpga_block_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_block_num.is_set || is_set(iofpga_block_num.yfilter)) leaf_name_data.push_back(iofpga_block_num.get_name_leafdata());
    if (block_location.is_set || is_set(block_location.yfilter)) leaf_name_data.push_back(block_location.get_name_leafdata());
    if (iofpga_block_nm.is_set || is_set(iofpga_block_nm.yfilter)) leaf_name_data.push_back(iofpga_block_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_register_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber>();
        ent_->parent = this;
        iofpga_register_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_register_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num = value;
        iofpga_block_num.value_namespace = name_space;
        iofpga_block_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_location")
    {
        block_location = value;
        block_location.value_namespace = name_space;
        block_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm = value;
        iofpga_block_nm.value_namespace = name_space;
        iofpga_block_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num.yfilter = yfilter;
    }
    if(value_path == "block_location")
    {
        block_location.yfilter = yfilter;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_register_number" || name == "iofpga_block_num" || name == "block_location" || name == "iofpga_block_nm")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaRegisterNumber()
    :
    index_{YType::uint32, "index"},
    iofpga_register_name{YType::str, "iofpga_register_name"}
        ,
    iofpga_data(this, {})
{

    yang_name = "iofpga_register_number"; yang_parent_name = "iofpga_block_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::~IofpgaRegisterNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_data())
            return true;
    }
    return index_.is_set
	|| iofpga_register_name.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(iofpga_register_name.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_register_number";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (iofpga_register_name.is_set || is_set(iofpga_register_name.yfilter)) leaf_name_data.push_back(iofpga_register_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData>();
        ent_->parent = this;
        iofpga_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name = value;
        iofpga_register_name.value_namespace = name_space;
        iofpga_register_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_data" || name == "index" || name == "iofpga_register_name")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::IofpgaData()
    :
    name{YType::str, "name"},
    offset{YType::uint32, "offset"},
    value_{YType::uint32, "value"}
{

    yang_name = "iofpga_data"; yang_parent_name = "iofpga_register_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::~IofpgaData()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| offset.is_set
	|| value_.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "offset" || name == "value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaOffset()
    :
    hex_offset{YType::str, "hex_offset"}
        ,
    iofpga_reg_offset_data(this, {})
{

    yang_name = "iofpga_offset"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::~IofpgaOffset()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_data())
            return true;
    }
    return hex_offset.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hex_offset.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_offset";
    ADD_KEY_TOKEN(hex_offset, "hex_offset");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_offset.is_set || is_set(hex_offset.yfilter)) leaf_name_data.push_back(hex_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_offset_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData>();
        ent_->parent = this;
        iofpga_reg_offset_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_offset_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex_offset")
    {
        hex_offset = value;
        hex_offset.value_namespace = name_space;
        hex_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex_offset")
    {
        hex_offset.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_offset_data" || name == "hex_offset")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::IofpgaRegOffsetData()
    :
    iofpga_reg_off_addr{YType::uint32, "iofpga_reg_off_addr"},
    reg_off_value{YType::str, "reg_off_value"}
{

    yang_name = "iofpga_reg_offset_data"; yang_parent_name = "iofpga_offset"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::~IofpgaRegOffsetData()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_off_addr.is_set
	|| reg_off_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_off_addr.yfilter)
	|| ydk::is_set(reg_off_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_offset_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_off_addr.is_set || is_set(iofpga_reg_off_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_off_addr.get_name_leafdata());
    if (reg_off_value.is_set || is_set(reg_off_value.yfilter)) leaf_name_data.push_back(reg_off_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr = value;
        iofpga_reg_off_addr.value_namespace = name_space;
        iofpga_reg_off_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value = value;
        reg_off_value.value_namespace = name_space;
        reg_off_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr.yfilter = yfilter;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_off_addr" || name == "reg_off_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaAddress()
    :
    start_hex_addr{YType::str, "start_hex_addr"},
    end_hex_addr{YType::str, "end_hex_addr"}
        ,
    iofpga_reg_range_addr_list(this, {"iofpga_reg_range_addr"})
{

    yang_name = "iofpga_address"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::~IofpgaAddress()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_data())
            return true;
    }
    return start_hex_addr.is_set
	|| end_hex_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_hex_addr.yfilter)
	|| ydk::is_set(end_hex_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_address";
    ADD_KEY_TOKEN(start_hex_addr, "start_hex_addr");
    ADD_KEY_TOKEN(end_hex_addr, "end_hex_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_hex_addr.is_set || is_set(start_hex_addr.yfilter)) leaf_name_data.push_back(start_hex_addr.get_name_leafdata());
    if (end_hex_addr.is_set || is_set(end_hex_addr.yfilter)) leaf_name_data.push_back(end_hex_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_range_addr_list")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList>();
        ent_->parent = this;
        iofpga_reg_range_addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_range_addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr = value;
        start_hex_addr.value_namespace = name_space;
        start_hex_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr = value;
        end_hex_addr.value_namespace = name_space;
        end_hex_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr.yfilter = yfilter;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_range_addr_list" || name == "start_hex_addr" || name == "end_hex_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegRangeAddrList()
    :
    iofpga_reg_range_addr{YType::uint32, "iofpga_reg_range_addr"}
        ,
    iofpga_reg_data(this, {})
{

    yang_name = "iofpga_reg_range_addr_list"; yang_parent_name = "iofpga_address"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::~IofpgaRegRangeAddrList()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_data())
            return true;
    }
    return iofpga_reg_range_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_range_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_range_addr_list";
    ADD_KEY_TOKEN(iofpga_reg_range_addr, "iofpga_reg_range_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_range_addr.is_set || is_set(iofpga_reg_range_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_range_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData>();
        ent_->parent = this;
        iofpga_reg_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr = value;
        iofpga_reg_range_addr.value_namespace = name_space;
        iofpga_reg_range_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_data" || name == "iofpga_reg_range_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::IofpgaRegData()
    :
    iofpga_reg_addr{YType::uint32, "iofpga_reg_addr"},
    reg_value{YType::str, "reg_value"}
{

    yang_name = "iofpga_reg_data"; yang_parent_name = "iofpga_reg_range_addr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::~IofpgaRegData()
{
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_addr.is_set
	|| reg_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_addr.yfilter)
	|| ydk::is_set(reg_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_addr.is_set || is_set(iofpga_reg_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_addr.get_name_leafdata());
    if (reg_value.is_set || is_set(reg_value.yfilter)) leaf_name_data.push_back(reg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr = value;
        iofpga_reg_addr.value_namespace = name_space;
        iofpga_reg_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_value")
    {
        reg_value = value;
        reg_value.value_namespace = name_space;
        reg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr.yfilter = yfilter;
    }
    if(value_path == "reg_value")
    {
        reg_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_addr" || name == "reg_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::Mb()
    :
    register_location(this, {"register_location"})
{

    yang_name = "mb"; yang_parent_name = "register"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Mb::~Mb()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Register::Mb::has_operation() const
{
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/iofpga/register/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Mb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation>();
        ent_->parent = this;
        register_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : register_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Register::Mb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::RegisterLocation()
    :
    register_location{YType::str, "register_location"}
        ,
    iofpga_block_number(this, {"iofpga_block_num"})
    , iofpga_offset(this, {"hex_offset"})
    , iofpga_address(this, {"start_hex_addr", "end_hex_addr"})
{

    yang_name = "register_location"; yang_parent_name = "mb"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::~RegisterLocation()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_data())
            return true;
    }
    return register_location.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::has_operation() const
{
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_location.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/iofpga/register/mb/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register_location";
    ADD_KEY_TOKEN(register_location, "register_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_location.is_set || is_set(register_location.yfilter)) leaf_name_data.push_back(register_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_block_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber>();
        ent_->parent = this;
        iofpga_block_number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_offset")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset>();
        ent_->parent = this;
        iofpga_offset.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_address")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress>();
        ent_->parent = this;
        iofpga_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_block_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_offset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "register_location")
    {
        register_location = value;
        register_location.value_namespace = name_space;
        register_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register_location")
    {
        register_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_block_number" || name == "iofpga_offset" || name == "iofpga_address" || name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaBlockNumber()
    :
    iofpga_block_num{YType::uint32, "iofpga_block_num"},
    block_location{YType::str, "block_location"},
    iofpga_block_nm{YType::str, "iofpga_block_nm"}
        ,
    iofpga_register_number(this, {"index_"})
{

    yang_name = "iofpga_block_number"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::~IofpgaBlockNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_data())
            return true;
    }
    return iofpga_block_num.is_set
	|| block_location.is_set
	|| iofpga_block_nm.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_block_num.yfilter)
	|| ydk::is_set(block_location.yfilter)
	|| ydk::is_set(iofpga_block_nm.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_block_number";
    ADD_KEY_TOKEN(iofpga_block_num, "iofpga_block_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_block_num.is_set || is_set(iofpga_block_num.yfilter)) leaf_name_data.push_back(iofpga_block_num.get_name_leafdata());
    if (block_location.is_set || is_set(block_location.yfilter)) leaf_name_data.push_back(block_location.get_name_leafdata());
    if (iofpga_block_nm.is_set || is_set(iofpga_block_nm.yfilter)) leaf_name_data.push_back(iofpga_block_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_register_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber>();
        ent_->parent = this;
        iofpga_register_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_register_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num = value;
        iofpga_block_num.value_namespace = name_space;
        iofpga_block_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_location")
    {
        block_location = value;
        block_location.value_namespace = name_space;
        block_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm = value;
        iofpga_block_nm.value_namespace = name_space;
        iofpga_block_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num.yfilter = yfilter;
    }
    if(value_path == "block_location")
    {
        block_location.yfilter = yfilter;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_register_number" || name == "iofpga_block_num" || name == "block_location" || name == "iofpga_block_nm")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaRegisterNumber()
    :
    index_{YType::uint32, "index"},
    iofpga_register_name{YType::str, "iofpga_register_name"}
        ,
    iofpga_data(this, {})
{

    yang_name = "iofpga_register_number"; yang_parent_name = "iofpga_block_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::~IofpgaRegisterNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_data())
            return true;
    }
    return index_.is_set
	|| iofpga_register_name.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(iofpga_register_name.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_register_number";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (iofpga_register_name.is_set || is_set(iofpga_register_name.yfilter)) leaf_name_data.push_back(iofpga_register_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData>();
        ent_->parent = this;
        iofpga_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name = value;
        iofpga_register_name.value_namespace = name_space;
        iofpga_register_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_data" || name == "index" || name == "iofpga_register_name")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::IofpgaData()
    :
    name{YType::str, "name"},
    offset{YType::uint32, "offset"},
    value_{YType::uint32, "value"}
{

    yang_name = "iofpga_data"; yang_parent_name = "iofpga_register_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::~IofpgaData()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| offset.is_set
	|| value_.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "offset" || name == "value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaOffset()
    :
    hex_offset{YType::str, "hex_offset"}
        ,
    iofpga_reg_offset_data(this, {})
{

    yang_name = "iofpga_offset"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::~IofpgaOffset()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_data())
            return true;
    }
    return hex_offset.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hex_offset.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_offset";
    ADD_KEY_TOKEN(hex_offset, "hex_offset");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_offset.is_set || is_set(hex_offset.yfilter)) leaf_name_data.push_back(hex_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_offset_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData>();
        ent_->parent = this;
        iofpga_reg_offset_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_offset_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex_offset")
    {
        hex_offset = value;
        hex_offset.value_namespace = name_space;
        hex_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex_offset")
    {
        hex_offset.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_offset_data" || name == "hex_offset")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::IofpgaRegOffsetData()
    :
    iofpga_reg_off_addr{YType::uint32, "iofpga_reg_off_addr"},
    reg_off_value{YType::str, "reg_off_value"}
{

    yang_name = "iofpga_reg_offset_data"; yang_parent_name = "iofpga_offset"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::~IofpgaRegOffsetData()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_off_addr.is_set
	|| reg_off_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_off_addr.yfilter)
	|| ydk::is_set(reg_off_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_offset_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_off_addr.is_set || is_set(iofpga_reg_off_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_off_addr.get_name_leafdata());
    if (reg_off_value.is_set || is_set(reg_off_value.yfilter)) leaf_name_data.push_back(reg_off_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr = value;
        iofpga_reg_off_addr.value_namespace = name_space;
        iofpga_reg_off_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value = value;
        reg_off_value.value_namespace = name_space;
        reg_off_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr.yfilter = yfilter;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_off_addr" || name == "reg_off_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaAddress()
    :
    start_hex_addr{YType::str, "start_hex_addr"},
    end_hex_addr{YType::str, "end_hex_addr"}
        ,
    iofpga_reg_range_addr_list(this, {"iofpga_reg_range_addr"})
{

    yang_name = "iofpga_address"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::~IofpgaAddress()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_data())
            return true;
    }
    return start_hex_addr.is_set
	|| end_hex_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_hex_addr.yfilter)
	|| ydk::is_set(end_hex_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_address";
    ADD_KEY_TOKEN(start_hex_addr, "start_hex_addr");
    ADD_KEY_TOKEN(end_hex_addr, "end_hex_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_hex_addr.is_set || is_set(start_hex_addr.yfilter)) leaf_name_data.push_back(start_hex_addr.get_name_leafdata());
    if (end_hex_addr.is_set || is_set(end_hex_addr.yfilter)) leaf_name_data.push_back(end_hex_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_range_addr_list")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList>();
        ent_->parent = this;
        iofpga_reg_range_addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_range_addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr = value;
        start_hex_addr.value_namespace = name_space;
        start_hex_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr = value;
        end_hex_addr.value_namespace = name_space;
        end_hex_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr.yfilter = yfilter;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_range_addr_list" || name == "start_hex_addr" || name == "end_hex_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegRangeAddrList()
    :
    iofpga_reg_range_addr{YType::uint32, "iofpga_reg_range_addr"}
        ,
    iofpga_reg_data(this, {})
{

    yang_name = "iofpga_reg_range_addr_list"; yang_parent_name = "iofpga_address"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::~IofpgaRegRangeAddrList()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_data())
            return true;
    }
    return iofpga_reg_range_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_range_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_range_addr_list";
    ADD_KEY_TOKEN(iofpga_reg_range_addr, "iofpga_reg_range_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_range_addr.is_set || is_set(iofpga_reg_range_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_range_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData>();
        ent_->parent = this;
        iofpga_reg_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr = value;
        iofpga_reg_range_addr.value_namespace = name_space;
        iofpga_reg_range_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_data" || name == "iofpga_reg_range_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::IofpgaRegData()
    :
    iofpga_reg_addr{YType::uint32, "iofpga_reg_addr"},
    reg_value{YType::str, "reg_value"}
{

    yang_name = "iofpga_reg_data"; yang_parent_name = "iofpga_reg_range_addr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::~IofpgaRegData()
{
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_addr.is_set
	|| reg_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_addr.yfilter)
	|| ydk::is_set(reg_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_addr.is_set || is_set(iofpga_reg_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_addr.get_name_leafdata());
    if (reg_value.is_set || is_set(reg_value.yfilter)) leaf_name_data.push_back(reg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr = value;
        iofpga_reg_addr.value_namespace = name_space;
        iofpga_reg_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_value")
    {
        reg_value = value;
        reg_value.value_namespace = name_space;
        reg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr.yfilter = yfilter;
    }
    if(value_path == "reg_value")
    {
        reg_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_addr" || name == "reg_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::Dc()
    :
    register_location(this, {"register_location"})
{

    yang_name = "dc"; yang_parent_name = "register"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Dc::~Dc()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Register::Dc::has_operation() const
{
    for (std::size_t index=0; index<register_location.len(); index++)
    {
        if(register_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/iofpga/register/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Dc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "register_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation>();
        ent_->parent = this;
        register_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : register_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Register::Dc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::RegisterLocation()
    :
    register_location{YType::str, "register_location"}
        ,
    iofpga_block_number(this, {"iofpga_block_num"})
    , iofpga_offset(this, {"hex_offset"})
    , iofpga_address(this, {"start_hex_addr", "end_hex_addr"})
{

    yang_name = "register_location"; yang_parent_name = "dc"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::~RegisterLocation()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_data())
            return true;
    }
    return register_location.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::has_operation() const
{
    for (std::size_t index=0; index<iofpga_block_number.len(); index++)
    {
        if(iofpga_block_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_offset.len(); index++)
    {
        if(iofpga_offset[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<iofpga_address.len(); index++)
    {
        if(iofpga_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(register_location.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/iofpga/register/dc/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "register_location";
    ADD_KEY_TOKEN(register_location, "register_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (register_location.is_set || is_set(register_location.yfilter)) leaf_name_data.push_back(register_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_block_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber>();
        ent_->parent = this;
        iofpga_block_number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_offset")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset>();
        ent_->parent = this;
        iofpga_offset.append(ent_);
        return ent_;
    }

    if(child_yang_name == "iofpga_address")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress>();
        ent_->parent = this;
        iofpga_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_block_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_offset.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : iofpga_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "register_location")
    {
        register_location = value;
        register_location.value_namespace = name_space;
        register_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "register_location")
    {
        register_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_block_number" || name == "iofpga_offset" || name == "iofpga_address" || name == "register_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaBlockNumber()
    :
    iofpga_block_num{YType::uint32, "iofpga_block_num"},
    block_location{YType::str, "block_location"},
    iofpga_block_nm{YType::str, "iofpga_block_nm"}
        ,
    iofpga_register_number(this, {"index_"})
{

    yang_name = "iofpga_block_number"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::~IofpgaBlockNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_data())
            return true;
    }
    return iofpga_block_num.is_set
	|| block_location.is_set
	|| iofpga_block_nm.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_register_number.len(); index++)
    {
        if(iofpga_register_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_block_num.yfilter)
	|| ydk::is_set(block_location.yfilter)
	|| ydk::is_set(iofpga_block_nm.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_block_number";
    ADD_KEY_TOKEN(iofpga_block_num, "iofpga_block_num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_block_num.is_set || is_set(iofpga_block_num.yfilter)) leaf_name_data.push_back(iofpga_block_num.get_name_leafdata());
    if (block_location.is_set || is_set(block_location.yfilter)) leaf_name_data.push_back(block_location.get_name_leafdata());
    if (iofpga_block_nm.is_set || is_set(iofpga_block_nm.yfilter)) leaf_name_data.push_back(iofpga_block_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_register_number")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber>();
        ent_->parent = this;
        iofpga_register_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_register_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num = value;
        iofpga_block_num.value_namespace = name_space;
        iofpga_block_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block_location")
    {
        block_location = value;
        block_location.value_namespace = name_space;
        block_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm = value;
        iofpga_block_nm.value_namespace = name_space;
        iofpga_block_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_block_num")
    {
        iofpga_block_num.yfilter = yfilter;
    }
    if(value_path == "block_location")
    {
        block_location.yfilter = yfilter;
    }
    if(value_path == "iofpga_block_nm")
    {
        iofpga_block_nm.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_register_number" || name == "iofpga_block_num" || name == "block_location" || name == "iofpga_block_nm")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaRegisterNumber()
    :
    index_{YType::uint32, "index"},
    iofpga_register_name{YType::str, "iofpga_register_name"}
        ,
    iofpga_data(this, {})
{

    yang_name = "iofpga_register_number"; yang_parent_name = "iofpga_block_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::~IofpgaRegisterNumber()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_data())
            return true;
    }
    return index_.is_set
	|| iofpga_register_name.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_operation() const
{
    for (std::size_t index=0; index<iofpga_data.len(); index++)
    {
        if(iofpga_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(iofpga_register_name.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_register_number";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (iofpga_register_name.is_set || is_set(iofpga_register_name.yfilter)) leaf_name_data.push_back(iofpga_register_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData>();
        ent_->parent = this;
        iofpga_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name = value;
        iofpga_register_name.value_namespace = name_space;
        iofpga_register_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "iofpga_register_name")
    {
        iofpga_register_name.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_data" || name == "index" || name == "iofpga_register_name")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::IofpgaData()
    :
    name{YType::str, "name"},
    offset{YType::uint32, "offset"},
    value_{YType::uint32, "value"}
{

    yang_name = "iofpga_data"; yang_parent_name = "iofpga_register_number"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::~IofpgaData()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| offset.is_set
	|| value_.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "offset" || name == "value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaOffset()
    :
    hex_offset{YType::str, "hex_offset"}
        ,
    iofpga_reg_offset_data(this, {})
{

    yang_name = "iofpga_offset"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::~IofpgaOffset()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_data())
            return true;
    }
    return hex_offset.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_offset_data.len(); index++)
    {
        if(iofpga_reg_offset_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hex_offset.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_offset";
    ADD_KEY_TOKEN(hex_offset, "hex_offset");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_offset.is_set || is_set(hex_offset.yfilter)) leaf_name_data.push_back(hex_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_offset_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData>();
        ent_->parent = this;
        iofpga_reg_offset_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_offset_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex_offset")
    {
        hex_offset = value;
        hex_offset.value_namespace = name_space;
        hex_offset.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex_offset")
    {
        hex_offset.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_offset_data" || name == "hex_offset")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::IofpgaRegOffsetData()
    :
    iofpga_reg_off_addr{YType::uint32, "iofpga_reg_off_addr"},
    reg_off_value{YType::str, "reg_off_value"}
{

    yang_name = "iofpga_reg_offset_data"; yang_parent_name = "iofpga_offset"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::~IofpgaRegOffsetData()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_off_addr.is_set
	|| reg_off_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_off_addr.yfilter)
	|| ydk::is_set(reg_off_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_offset_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_off_addr.is_set || is_set(iofpga_reg_off_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_off_addr.get_name_leafdata());
    if (reg_off_value.is_set || is_set(reg_off_value.yfilter)) leaf_name_data.push_back(reg_off_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr = value;
        iofpga_reg_off_addr.value_namespace = name_space;
        iofpga_reg_off_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value = value;
        reg_off_value.value_namespace = name_space;
        reg_off_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_off_addr")
    {
        iofpga_reg_off_addr.yfilter = yfilter;
    }
    if(value_path == "reg_off_value")
    {
        reg_off_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_off_addr" || name == "reg_off_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaAddress()
    :
    start_hex_addr{YType::str, "start_hex_addr"},
    end_hex_addr{YType::str, "end_hex_addr"}
        ,
    iofpga_reg_range_addr_list(this, {"iofpga_reg_range_addr"})
{

    yang_name = "iofpga_address"; yang_parent_name = "register_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::~IofpgaAddress()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_data())
            return true;
    }
    return start_hex_addr.is_set
	|| end_hex_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_range_addr_list.len(); index++)
    {
        if(iofpga_reg_range_addr_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start_hex_addr.yfilter)
	|| ydk::is_set(end_hex_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_address";
    ADD_KEY_TOKEN(start_hex_addr, "start_hex_addr");
    ADD_KEY_TOKEN(end_hex_addr, "end_hex_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_hex_addr.is_set || is_set(start_hex_addr.yfilter)) leaf_name_data.push_back(start_hex_addr.get_name_leafdata());
    if (end_hex_addr.is_set || is_set(end_hex_addr.yfilter)) leaf_name_data.push_back(end_hex_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_range_addr_list")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList>();
        ent_->parent = this;
        iofpga_reg_range_addr_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_range_addr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr = value;
        start_hex_addr.value_namespace = name_space;
        start_hex_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr = value;
        end_hex_addr.value_namespace = name_space;
        end_hex_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_hex_addr")
    {
        start_hex_addr.yfilter = yfilter;
    }
    if(value_path == "end_hex_addr")
    {
        end_hex_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_range_addr_list" || name == "start_hex_addr" || name == "end_hex_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegRangeAddrList()
    :
    iofpga_reg_range_addr{YType::uint32, "iofpga_reg_range_addr"}
        ,
    iofpga_reg_data(this, {})
{

    yang_name = "iofpga_reg_range_addr_list"; yang_parent_name = "iofpga_address"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::~IofpgaRegRangeAddrList()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_data())
            return true;
    }
    return iofpga_reg_range_addr.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_operation() const
{
    for (std::size_t index=0; index<iofpga_reg_data.len(); index++)
    {
        if(iofpga_reg_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_range_addr.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_range_addr_list";
    ADD_KEY_TOKEN(iofpga_reg_range_addr, "iofpga_reg_range_addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_range_addr.is_set || is_set(iofpga_reg_range_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_range_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_reg_data")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData>();
        ent_->parent = this;
        iofpga_reg_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iofpga_reg_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr = value;
        iofpga_reg_range_addr.value_namespace = name_space;
        iofpga_reg_range_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_range_addr")
    {
        iofpga_reg_range_addr.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_data" || name == "iofpga_reg_range_addr")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::IofpgaRegData()
    :
    iofpga_reg_addr{YType::uint32, "iofpga_reg_addr"},
    reg_value{YType::str, "reg_value"}
{

    yang_name = "iofpga_reg_data"; yang_parent_name = "iofpga_reg_range_addr_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::~IofpgaRegData()
{
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_data() const
{
    if (is_presence_container) return true;
    return iofpga_reg_addr.is_set
	|| reg_value.is_set;
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iofpga_reg_addr.yfilter)
	|| ydk::is_set(reg_value.yfilter);
}

std::string Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_reg_data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iofpga_reg_addr.is_set || is_set(iofpga_reg_addr.yfilter)) leaf_name_data.push_back(iofpga_reg_addr.get_name_leafdata());
    if (reg_value.is_set || is_set(reg_value.yfilter)) leaf_name_data.push_back(reg_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr = value;
        iofpga_reg_addr.value_namespace = name_space;
        iofpga_reg_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reg_value")
    {
        reg_value = value;
        reg_value.value_namespace = name_space;
        reg_value.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_reg_addr")
    {
        iofpga_reg_addr.yfilter = yfilter;
    }
    if(value_path == "reg_value")
    {
        reg_value.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_reg_addr" || name == "reg_value")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Flash()
    :
    info(std::make_shared<Controller::CardMgr::Iofpga::Flash::Info>())
    , status(std::make_shared<Controller::CardMgr::Iofpga::Flash::Status>())
{
    info->parent = this;
    status->parent = this;

    yang_name = "flash"; yang_parent_name = "iofpga"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::~Flash()
{
}

bool Controller::CardMgr::Iofpga::Flash::has_data() const
{
    if (is_presence_container) return true;
    return (info !=  nullptr && info->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Controller::CardMgr::Iofpga::Flash::has_operation() const
{
    return is_set(yfilter)
	|| (info !=  nullptr && info->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Controller::CardMgr::Iofpga::Flash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/iofpga/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Controller::CardMgr::Iofpga::Flash::Info>();
        }
        return info;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Controller::CardMgr::Iofpga::Flash::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(info != nullptr)
    {
        _children["info"] = info;
    }

    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "status")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Info::Info()
    :
    flash_location(this, {"flash_location"})
{

    yang_name = "info"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::Info::~Info()
{
}

bool Controller::CardMgr::Iofpga::Flash::Info::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Flash::Info::has_operation() const
{
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Flash::Info::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/iofpga/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Flash::Info::FlashLocation>();
        ent_->parent = this;
        flash_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Flash::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Flash::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::FlashLocation()
    :
    flash_location{YType::str, "flash_location"}
        ,
    iofpga_flash_info(std::make_shared<Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo>())
{
    iofpga_flash_info->parent = this;

    yang_name = "flash_location"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::~FlashLocation()
{
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::has_data() const
{
    if (is_presence_container) return true;
    return flash_location.is_set
	|| (iofpga_flash_info !=  nullptr && iofpga_flash_info->has_data());
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_location.yfilter)
	|| (iofpga_flash_info !=  nullptr && iofpga_flash_info->has_operation());
}

std::string Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/iofpga/flash/info/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash_location";
    ADD_KEY_TOKEN(flash_location, "flash_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_location.is_set || is_set(flash_location.yfilter)) leaf_name_data.push_back(flash_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_flash_info")
    {
        if(iofpga_flash_info == nullptr)
        {
            iofpga_flash_info = std::make_shared<Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo>();
        }
        return iofpga_flash_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iofpga_flash_info != nullptr)
    {
        _children["iofpga_flash_info"] = iofpga_flash_info;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash_location")
    {
        flash_location = value;
        flash_location.value_namespace = name_space;
        flash_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash_location")
    {
        flash_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_flash_info" || name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::IofpgaFlashInfo()
    :
    iofpga_flash_info_values{YType::str, "iofpga_flash_info_values"}
{

    yang_name = "iofpga_flash_info"; yang_parent_name = "flash_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::~IofpgaFlashInfo()
{
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : iofpga_flash_info_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::has_operation() const
{
    for (auto const & leaf : iofpga_flash_info_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_flash_info_values.yfilter);
}

std::string Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_flash_info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto iofpga_flash_info_values_name_datas = iofpga_flash_info_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), iofpga_flash_info_values_name_datas.begin(), iofpga_flash_info_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_flash_info_values")
    {
        iofpga_flash_info_values.append(value);
    }
}

void Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_flash_info_values")
    {
        iofpga_flash_info_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_flash_info_values")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Status::Status()
    :
    flash_location(this, {"flash_location"})
{

    yang_name = "status"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::Status::~Status()
{
}

bool Controller::CardMgr::Iofpga::Flash::Status::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Flash::Status::has_operation() const
{
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Iofpga::Flash::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/iofpga/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Iofpga::Flash::Status::FlashLocation>();
        ent_->parent = this;
        flash_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Iofpga::Flash::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Iofpga::Flash::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::FlashLocation()
    :
    flash_location{YType::str, "flash_location"}
        ,
    iofpga_flash_status(std::make_shared<Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus>())
{
    iofpga_flash_status->parent = this;

    yang_name = "flash_location"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::~FlashLocation()
{
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::has_data() const
{
    if (is_presence_container) return true;
    return flash_location.is_set
	|| (iofpga_flash_status !=  nullptr && iofpga_flash_status->has_data());
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_location.yfilter)
	|| (iofpga_flash_status !=  nullptr && iofpga_flash_status->has_operation());
}

std::string Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/iofpga/flash/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash_location";
    ADD_KEY_TOKEN(flash_location, "flash_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_location.is_set || is_set(flash_location.yfilter)) leaf_name_data.push_back(flash_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iofpga_flash_status")
    {
        if(iofpga_flash_status == nullptr)
        {
            iofpga_flash_status = std::make_shared<Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus>();
        }
        return iofpga_flash_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iofpga_flash_status != nullptr)
    {
        _children["iofpga_flash_status"] = iofpga_flash_status;
    }

    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash_location")
    {
        flash_location = value;
        flash_location.value_namespace = name_space;
        flash_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash_location")
    {
        flash_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_flash_status" || name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::IofpgaFlashStatus()
    :
    iofpga_flash_status_values{YType::str, "iofpga_flash_status_values"}
{

    yang_name = "iofpga_flash_status"; yang_parent_name = "flash_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::~IofpgaFlashStatus()
{
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : iofpga_flash_status_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::has_operation() const
{
    for (auto const & leaf : iofpga_flash_status_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iofpga_flash_status_values.yfilter);
}

std::string Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iofpga_flash_status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto iofpga_flash_status_values_name_datas = iofpga_flash_status_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), iofpga_flash_status_values_name_datas.begin(), iofpga_flash_status_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iofpga_flash_status_values")
    {
        iofpga_flash_status_values.append(value);
    }
}

void Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iofpga_flash_status_values")
    {
        iofpga_flash_status_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iofpga_flash_status_values")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Bootloader()
    :
    flash(std::make_shared<Controller::CardMgr::Bootloader::Flash>())
{
    flash->parent = this;

    yang_name = "bootloader"; yang_parent_name = "card_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::~Bootloader()
{
}

bool Controller::CardMgr::Bootloader::has_data() const
{
    if (is_presence_container) return true;
    return (flash !=  nullptr && flash->has_data());
}

bool Controller::CardMgr::Bootloader::has_operation() const
{
    return is_set(yfilter)
	|| (flash !=  nullptr && flash->has_operation());
}

std::string Controller::CardMgr::Bootloader::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootloader";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Controller::CardMgr::Bootloader::Flash>();
        }
        return flash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flash != nullptr)
    {
        _children["flash"] = flash;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Bootloader::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Bootloader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Flash()
    :
    info(std::make_shared<Controller::CardMgr::Bootloader::Flash::Info>())
    , status(std::make_shared<Controller::CardMgr::Bootloader::Flash::Status>())
{
    info->parent = this;
    status->parent = this;

    yang_name = "flash"; yang_parent_name = "bootloader"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::~Flash()
{
}

bool Controller::CardMgr::Bootloader::Flash::has_data() const
{
    if (is_presence_container) return true;
    return (info !=  nullptr && info->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Controller::CardMgr::Bootloader::Flash::has_operation() const
{
    return is_set(yfilter)
	|| (info !=  nullptr && info->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Controller::CardMgr::Bootloader::Flash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/bootloader/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<Controller::CardMgr::Bootloader::Flash::Info>();
        }
        return info;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Controller::CardMgr::Bootloader::Flash::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(info != nullptr)
    {
        _children["info"] = info;
    }

    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Bootloader::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Bootloader::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "info" || name == "status")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Info::Info()
    :
    flash_location(this, {"flash_location"})
{

    yang_name = "info"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::Info::~Info()
{
}

bool Controller::CardMgr::Bootloader::Flash::Info::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Bootloader::Flash::Info::has_operation() const
{
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Bootloader::Flash::Info::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/bootloader/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Bootloader::Flash::Info::FlashLocation>();
        ent_->parent = this;
        flash_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Bootloader::Flash::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Bootloader::Flash::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::FlashLocation()
    :
    flash_location{YType::str, "flash_location"}
        ,
    bootldr_flash_info(std::make_shared<Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo>())
{
    bootldr_flash_info->parent = this;

    yang_name = "flash_location"; yang_parent_name = "info"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::~FlashLocation()
{
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::has_data() const
{
    if (is_presence_container) return true;
    return flash_location.is_set
	|| (bootldr_flash_info !=  nullptr && bootldr_flash_info->has_data());
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_location.yfilter)
	|| (bootldr_flash_info !=  nullptr && bootldr_flash_info->has_operation());
}

std::string Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/bootloader/flash/info/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash_location";
    ADD_KEY_TOKEN(flash_location, "flash_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_location.is_set || is_set(flash_location.yfilter)) leaf_name_data.push_back(flash_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootldr_flash_info")
    {
        if(bootldr_flash_info == nullptr)
        {
            bootldr_flash_info = std::make_shared<Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo>();
        }
        return bootldr_flash_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bootldr_flash_info != nullptr)
    {
        _children["bootldr_flash_info"] = bootldr_flash_info;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash_location")
    {
        flash_location = value;
        flash_location.value_namespace = name_space;
        flash_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash_location")
    {
        flash_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootldr_flash_info" || name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::BootldrFlashInfo()
    :
    bootldr_flash_info_values{YType::str, "bootldr_flash_info_values"}
{

    yang_name = "bootldr_flash_info"; yang_parent_name = "flash_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::~BootldrFlashInfo()
{
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : bootldr_flash_info_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::has_operation() const
{
    for (auto const & leaf : bootldr_flash_info_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bootldr_flash_info_values.yfilter);
}

std::string Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootldr_flash_info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bootldr_flash_info_values_name_datas = bootldr_flash_info_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bootldr_flash_info_values_name_datas.begin(), bootldr_flash_info_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bootldr_flash_info_values")
    {
        bootldr_flash_info_values.append(value);
    }
}

void Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bootldr_flash_info_values")
    {
        bootldr_flash_info_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootldr_flash_info_values")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Status::Status()
    :
    flash_location(this, {"flash_location"})
{

    yang_name = "status"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::Status::~Status()
{
}

bool Controller::CardMgr::Bootloader::Flash::Status::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::CardMgr::Bootloader::Flash::Status::has_operation() const
{
    for (std::size_t index=0; index<flash_location.len(); index++)
    {
        if(flash_location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::CardMgr::Bootloader::Flash::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/bootloader/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash_location")
    {
        auto ent_ = std::make_shared<Controller::CardMgr::Bootloader::Flash::Status::FlashLocation>();
        ent_->parent = this;
        flash_location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::CardMgr::Bootloader::Flash::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::CardMgr::Bootloader::Flash::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::FlashLocation()
    :
    flash_location{YType::str, "flash_location"}
        ,
    bootldr_flash_status(std::make_shared<Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus>())
{
    bootldr_flash_status->parent = this;

    yang_name = "flash_location"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::~FlashLocation()
{
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::has_data() const
{
    if (is_presence_container) return true;
    return flash_location.is_set
	|| (bootldr_flash_status !=  nullptr && bootldr_flash_status->has_data());
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_location.yfilter)
	|| (bootldr_flash_status !=  nullptr && bootldr_flash_status->has_operation());
}

std::string Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5501:controller/card_mgr/bootloader/flash/status/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash_location";
    ADD_KEY_TOKEN(flash_location, "flash_location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_location.is_set || is_set(flash_location.yfilter)) leaf_name_data.push_back(flash_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootldr_flash_status")
    {
        if(bootldr_flash_status == nullptr)
        {
            bootldr_flash_status = std::make_shared<Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus>();
        }
        return bootldr_flash_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bootldr_flash_status != nullptr)
    {
        _children["bootldr_flash_status"] = bootldr_flash_status;
    }

    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash_location")
    {
        flash_location = value;
        flash_location.value_namespace = name_space;
        flash_location.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash_location")
    {
        flash_location.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootldr_flash_status" || name == "flash_location")
        return true;
    return false;
}

Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::BootldrFlashStatus()
    :
    bootldr_flash_status_values{YType::str, "bootldr_flash_status_values"}
{

    yang_name = "bootldr_flash_status"; yang_parent_name = "flash_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::~BootldrFlashStatus()
{
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : bootldr_flash_status_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::has_operation() const
{
    for (auto const & leaf : bootldr_flash_status_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bootldr_flash_status_values.yfilter);
}

std::string Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootldr_flash_status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto bootldr_flash_status_values_name_datas = bootldr_flash_status_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), bootldr_flash_status_values_name_datas.begin(), bootldr_flash_status_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bootldr_flash_status_values")
    {
        bootldr_flash_status_values.append(value);
    }
}

void Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bootldr_flash_status_values")
    {
        bootldr_flash_status_values.yfilter = yfilter;
    }
}

bool Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootldr_flash_status_values")
        return true;
    return false;
}


}
}

