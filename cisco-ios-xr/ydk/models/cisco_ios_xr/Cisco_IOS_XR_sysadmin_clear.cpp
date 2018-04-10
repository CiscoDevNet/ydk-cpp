
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_clear.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_clear {

Clear::Clear()
    :
    controller(std::make_shared<Clear::Controller>())
	,clear_asic_errors_grp(std::make_shared<Clear::ClearAsicErrorsGrp>())
	,logging(std::make_shared<Clear::Logging>())
	,configuration(std::make_shared<Clear::Configuration>())
{
    controller->parent = this;
    clear_asic_errors_grp->parent = this;
    logging->parent = this;
    configuration->parent = this;

    yang_name = "clear"; yang_parent_name = "Cisco-IOS-XR-sysadmin-clear"; is_top_level_class = true; has_list_ancestor = false;
}

Clear::~Clear()
{
}

bool Clear::has_data() const
{
    return (controller !=  nullptr && controller->has_data())
	|| (clear_asic_errors_grp !=  nullptr && clear_asic_errors_grp->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Clear::has_operation() const
{
    return is_set(yfilter)
	|| (controller !=  nullptr && controller->has_operation())
	|| (clear_asic_errors_grp !=  nullptr && clear_asic_errors_grp->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Clear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        if(controller == nullptr)
        {
            controller = std::make_shared<Clear::Controller>();
        }
        return controller;
    }

    if(child_yang_name == "clear-asic-errors-grp")
    {
        if(clear_asic_errors_grp == nullptr)
        {
            clear_asic_errors_grp = std::make_shared<Clear::ClearAsicErrorsGrp>();
        }
        return clear_asic_errors_grp;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Clear::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Clear::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controller != nullptr)
    {
        children["controller"] = controller;
    }

    if(clear_asic_errors_grp != nullptr)
    {
        children["clear-asic-errors-grp"] = clear_asic_errors_grp;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    return children;
}

void Clear::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Clear::clone_ptr() const
{
    return std::make_shared<Clear>();
}

std::string Clear::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Clear::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Clear::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Clear::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Clear::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller" || name == "clear-asic-errors-grp" || name == "logging" || name == "configuration")
        return true;
    return false;
}

Clear::Controller::Controller()
    :
    switch_(std::make_shared<Clear::Controller::Switch>())
	,fabric(std::make_shared<Clear::Controller::Fabric>())
{
    switch_->parent = this;
    fabric->parent = this;

    yang_name = "controller"; yang_parent_name = "clear"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::~Controller()
{
}

bool Clear::Controller::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data())
	|| (fabric !=  nullptr && fabric->has_data());
}

bool Clear::Controller::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation())
	|| (fabric !=  nullptr && fabric->has_operation());
}

std::string Clear::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Clear::Controller::Switch>();
        }
        return switch_;
    }

    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Clear::Controller::Fabric>();
        }
        return fabric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    if(fabric != nullptr)
    {
        children["fabric"] = fabric;
    }

    return children;
}

void Clear::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch" || name == "fabric")
        return true;
    return false;
}

Clear::Controller::Switch::Switch()
    :
    oper(std::make_shared<Clear::Controller::Switch::Oper>())
{
    oper->parent = this;

    yang_name = "switch"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Switch::~Switch()
{
}

bool Clear::Controller::Switch::has_data() const
{
    return (oper !=  nullptr && oper->has_data());
}

bool Clear::Controller::Switch::has_operation() const
{
    return is_set(yfilter)
	|| (oper !=  nullptr && oper->has_operation());
}

std::string Clear::Controller::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oper")
    {
        if(oper == nullptr)
        {
            oper = std::make_shared<Clear::Controller::Switch::Oper>();
        }
        return oper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oper != nullptr)
    {
        children["oper"] = oper;
    }

    return children;
}

void Clear::Controller::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oper")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Oper()
    :
    fdb(std::make_shared<Clear::Controller::Switch::Oper::Fdb>())
	,mlap(std::make_shared<Clear::Controller::Switch::Oper::Mlap>())
	,sdr(std::make_shared<Clear::Controller::Switch::Oper::Sdr>())
	,statistics(std::make_shared<Clear::Controller::Switch::Oper::Statistics>())
{
    fdb->parent = this;
    mlap->parent = this;
    sdr->parent = this;
    statistics->parent = this;

    yang_name = "oper"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Switch::Oper::~Oper()
{
}

bool Clear::Controller::Switch::Oper::has_data() const
{
    return (fdb !=  nullptr && fdb->has_data())
	|| (mlap !=  nullptr && mlap->has_data())
	|| (sdr !=  nullptr && sdr->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Clear::Controller::Switch::Oper::has_operation() const
{
    return is_set(yfilter)
	|| (fdb !=  nullptr && fdb->has_operation())
	|| (mlap !=  nullptr && mlap->has_operation())
	|| (sdr !=  nullptr && sdr->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Clear::Controller::Switch::Oper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Switch::Oper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fdb")
    {
        if(fdb == nullptr)
        {
            fdb = std::make_shared<Clear::Controller::Switch::Oper::Fdb>();
        }
        return fdb;
    }

    if(child_yang_name == "mlap")
    {
        if(mlap == nullptr)
        {
            mlap = std::make_shared<Clear::Controller::Switch::Oper::Mlap>();
        }
        return mlap;
    }

    if(child_yang_name == "sdr")
    {
        if(sdr == nullptr)
        {
            sdr = std::make_shared<Clear::Controller::Switch::Oper::Sdr>();
        }
        return sdr;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Clear::Controller::Switch::Oper::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Switch::Oper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fdb != nullptr)
    {
        children["fdb"] = fdb;
    }

    if(mlap != nullptr)
    {
        children["mlap"] = mlap;
    }

    if(sdr != nullptr)
    {
        children["sdr"] = sdr;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Clear::Controller::Switch::Oper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Switch::Oper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Switch::Oper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fdb" || name == "mlap" || name == "sdr" || name == "statistics")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Fdb::Fdb()
{

    yang_name = "fdb"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Switch::Oper::Fdb::~Fdb()
{
}

bool Clear::Controller::Switch::Oper::Fdb::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Controller::Switch::Oper::Fdb::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Controller::Switch::Oper::Fdb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Fdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Fdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Switch::Oper::Fdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::Controller::Switch::Oper::Fdb::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Switch::Oper::Fdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::Controller::Switch::Oper::Fdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Switch::Oper::Fdb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Switch::Oper::Fdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Fdb::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "fdb"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Switch::Oper::Fdb::Location::~Location()
{
}

bool Clear::Controller::Switch::Oper::Fdb::Location::has_data() const
{
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Clear::Controller::Switch::Oper::Fdb::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Clear::Controller::Switch::Oper::Fdb::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/switch/oper/fdb/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Fdb::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Fdb::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Switch::Oper::Fdb::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Switch::Oper::Fdb::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::Controller::Switch::Oper::Fdb::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Switch::Oper::Fdb::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Clear::Controller::Switch::Oper::Fdb::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Mlap::Mlap()
    :
    statistics(std::make_shared<Clear::Controller::Switch::Oper::Mlap::Statistics>())
{
    statistics->parent = this;

    yang_name = "mlap"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Switch::Oper::Mlap::~Mlap()
{
}

bool Clear::Controller::Switch::Oper::Mlap::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data());
}

bool Clear::Controller::Switch::Oper::Mlap::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Clear::Controller::Switch::Oper::Mlap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Mlap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Mlap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Switch::Oper::Mlap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Clear::Controller::Switch::Oper::Mlap::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Switch::Oper::Mlap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Clear::Controller::Switch::Oper::Mlap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Switch::Oper::Mlap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Switch::Oper::Mlap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Mlap::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "mlap"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Switch::Oper::Mlap::Statistics::~Statistics()
{
}

bool Clear::Controller::Switch::Oper::Mlap::Statistics::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Controller::Switch::Oper::Mlap::Statistics::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Controller::Switch::Oper::Mlap::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/switch/oper/mlap/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Mlap::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Mlap::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Switch::Oper::Mlap::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::Controller::Switch::Oper::Mlap::Statistics::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Switch::Oper::Mlap::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::Controller::Switch::Oper::Mlap::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Switch::Oper::Mlap::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Switch::Oper::Mlap::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Mlap::Statistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Switch::Oper::Mlap::Statistics::Location::~Location()
{
}

bool Clear::Controller::Switch::Oper::Mlap::Statistics::Location::has_data() const
{
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Clear::Controller::Switch::Oper::Mlap::Statistics::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Clear::Controller::Switch::Oper::Mlap::Statistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/switch/oper/mlap/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Mlap::Statistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Mlap::Statistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Switch::Oper::Mlap::Statistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Switch::Oper::Mlap::Statistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::Controller::Switch::Oper::Mlap::Statistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Switch::Oper::Mlap::Statistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Clear::Controller::Switch::Oper::Mlap::Statistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Sdr::Sdr()
    :
    statistics(std::make_shared<Clear::Controller::Switch::Oper::Sdr::Statistics>())
{
    statistics->parent = this;

    yang_name = "sdr"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Switch::Oper::Sdr::~Sdr()
{
}

bool Clear::Controller::Switch::Oper::Sdr::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data());
}

bool Clear::Controller::Switch::Oper::Sdr::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Clear::Controller::Switch::Oper::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Switch::Oper::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Clear::Controller::Switch::Oper::Sdr::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Switch::Oper::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Clear::Controller::Switch::Oper::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Switch::Oper::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Switch::Oper::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Sdr::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Switch::Oper::Sdr::Statistics::~Statistics()
{
}

bool Clear::Controller::Switch::Oper::Sdr::Statistics::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Controller::Switch::Oper::Sdr::Statistics::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Controller::Switch::Oper::Sdr::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/switch/oper/sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Sdr::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Sdr::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Switch::Oper::Sdr::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::Controller::Switch::Oper::Sdr::Statistics::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Switch::Oper::Sdr::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::Controller::Switch::Oper::Sdr::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Switch::Oper::Sdr::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Switch::Oper::Sdr::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Sdr::Statistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Switch::Oper::Sdr::Statistics::Location::~Location()
{
}

bool Clear::Controller::Switch::Oper::Sdr::Statistics::Location::has_data() const
{
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Clear::Controller::Switch::Oper::Sdr::Statistics::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Clear::Controller::Switch::Oper::Sdr::Statistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/switch/oper/sdr/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Sdr::Statistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Sdr::Statistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Switch::Oper::Sdr::Statistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Switch::Oper::Sdr::Statistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::Controller::Switch::Oper::Sdr::Statistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Switch::Oper::Sdr::Statistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Clear::Controller::Switch::Oper::Sdr::Statistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Switch::Oper::Statistics::~Statistics()
{
}

bool Clear::Controller::Switch::Oper::Statistics::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Controller::Switch::Oper::Statistics::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Controller::Switch::Oper::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/switch/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Switch::Oper::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::Controller::Switch::Oper::Statistics::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Switch::Oper::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::Controller::Switch::Oper::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Switch::Oper::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Switch::Oper::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::Controller::Switch::Oper::Statistics::Location::Location()
    :
    rack{YType::enumeration, "rack"},
    card{YType::enumeration, "card"},
    switch_id{YType::enumeration, "switch-id"}
{

    yang_name = "location"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Switch::Oper::Statistics::Location::~Location()
{
}

bool Clear::Controller::Switch::Oper::Statistics::Location::has_data() const
{
    return rack.is_set
	|| card.is_set
	|| switch_id.is_set;
}

bool Clear::Controller::Switch::Oper::Statistics::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rack.yfilter)
	|| ydk::is_set(card.yfilter)
	|| ydk::is_set(switch_id.yfilter);
}

std::string Clear::Controller::Switch::Oper::Statistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/switch/oper/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Switch::Oper::Statistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[rack='" <<rack <<"']" <<"[card='" <<card <<"']" <<"[switch-id='" <<switch_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Switch::Oper::Statistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack.is_set || is_set(rack.yfilter)) leaf_name_data.push_back(rack.get_name_leafdata());
    if (card.is_set || is_set(card.yfilter)) leaf_name_data.push_back(card.get_name_leafdata());
    if (switch_id.is_set || is_set(switch_id.yfilter)) leaf_name_data.push_back(switch_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Switch::Oper::Statistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Switch::Oper::Statistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::Controller::Switch::Oper::Statistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack")
    {
        rack = value;
        rack.value_namespace = name_space;
        rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card")
    {
        card = value;
        card.value_namespace = name_space;
        card.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-id")
    {
        switch_id = value;
        switch_id.value_namespace = name_space;
        switch_id.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Switch::Oper::Statistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack")
    {
        rack.yfilter = yfilter;
    }
    if(value_path == "card")
    {
        card.yfilter = yfilter;
    }
    if(value_path == "switch-id")
    {
        switch_id.yfilter = yfilter;
    }
}

bool Clear::Controller::Switch::Oper::Statistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack" || name == "card" || name == "switch-id")
        return true;
    return false;
}

Clear::Controller::Fabric::Fabric()
    :
    counter(std::make_shared<Clear::Controller::Fabric::Counter>())
	,clear_statistics(std::make_shared<Clear::Controller::Fabric::ClearStatistics>())
	,link(std::make_shared<Clear::Controller::Fabric::Link>())
{
    counter->parent = this;
    clear_statistics->parent = this;
    link->parent = this;

    yang_name = "fabric"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Fabric::~Fabric()
{
}

bool Clear::Controller::Fabric::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (clear_statistics !=  nullptr && clear_statistics->has_data())
	|| (link !=  nullptr && link->has_data());
}

bool Clear::Controller::Fabric::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (clear_statistics !=  nullptr && clear_statistics->has_operation())
	|| (link !=  nullptr && link->has_operation());
}

std::string Clear::Controller::Fabric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Fabric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Fabric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Clear::Controller::Fabric::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "clear_statistics")
    {
        if(clear_statistics == nullptr)
        {
            clear_statistics = std::make_shared<Clear::Controller::Fabric::ClearStatistics>();
        }
        return clear_statistics;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Clear::Controller::Fabric::Link>();
        }
        return link;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Fabric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(clear_statistics != nullptr)
    {
        children["clear_statistics"] = clear_statistics;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    return children;
}

void Clear::Controller::Fabric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Fabric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Fabric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "clear_statistics" || name == "link")
        return true;
    return false;
}

Clear::Controller::Fabric::Counter::Counter()
{

    yang_name = "counter"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Fabric::Counter::~Counter()
{
}

bool Clear::Controller::Fabric::Counter::has_data() const
{
    for (std::size_t index=0; index<plane.size(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Controller::Fabric::Counter::has_operation() const
{
    for (std::size_t index=0; index<plane.size(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Controller::Fabric::Counter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Fabric::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Fabric::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto c = std::make_shared<Clear::Controller::Fabric::Counter::Plane>();
        c->parent = this;
        plane.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Fabric::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : plane)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::Controller::Fabric::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Fabric::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Fabric::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane")
        return true;
    return false;
}

Clear::Controller::Fabric::Counter::Plane::Plane()
    :
    planeid{YType::str, "planeid"}
{

    yang_name = "plane"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Fabric::Counter::Plane::~Plane()
{
}

bool Clear::Controller::Fabric::Counter::Plane::has_data() const
{
    return planeid.is_set;
}

bool Clear::Controller::Fabric::Counter::Plane::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(planeid.yfilter);
}

std::string Clear::Controller::Fabric::Counter::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/fabric/counter/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Fabric::Counter::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane" <<"[planeid='" <<planeid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::Counter::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (planeid.is_set || is_set(planeid.yfilter)) leaf_name_data.push_back(planeid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Fabric::Counter::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Fabric::Counter::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::Controller::Fabric::Counter::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "planeid")
    {
        planeid = value;
        planeid.value_namespace = name_space;
        planeid.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Fabric::Counter::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "planeid")
    {
        planeid.yfilter = yfilter;
    }
}

bool Clear::Controller::Fabric::Counter::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "planeid")
        return true;
    return false;
}

Clear::Controller::Fabric::ClearStatistics::ClearStatistics()
{

    yang_name = "clear_statistics"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Fabric::ClearStatistics::~ClearStatistics()
{
}

bool Clear::Controller::Fabric::ClearStatistics::has_data() const
{
    for (std::size_t index=0; index<plane.size(); index++)
    {
        if(plane[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Controller::Fabric::ClearStatistics::has_operation() const
{
    for (std::size_t index=0; index<plane.size(); index++)
    {
        if(plane[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Controller::Fabric::ClearStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Fabric::ClearStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clear_statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::ClearStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Fabric::ClearStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "plane")
    {
        auto c = std::make_shared<Clear::Controller::Fabric::ClearStatistics::Plane>();
        c->parent = this;
        plane.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Fabric::ClearStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : plane)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::Controller::Fabric::ClearStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Fabric::ClearStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Fabric::ClearStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plane")
        return true;
    return false;
}

Clear::Controller::Fabric::ClearStatistics::Plane::Plane()
    :
    planeid{YType::str, "planeid"}
{

    yang_name = "plane"; yang_parent_name = "clear_statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Fabric::ClearStatistics::Plane::~Plane()
{
}

bool Clear::Controller::Fabric::ClearStatistics::Plane::has_data() const
{
    return planeid.is_set;
}

bool Clear::Controller::Fabric::ClearStatistics::Plane::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(planeid.yfilter);
}

std::string Clear::Controller::Fabric::ClearStatistics::Plane::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/fabric/clear_statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Fabric::ClearStatistics::Plane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plane" <<"[planeid='" <<planeid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::ClearStatistics::Plane::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (planeid.is_set || is_set(planeid.yfilter)) leaf_name_data.push_back(planeid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Fabric::ClearStatistics::Plane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Fabric::ClearStatistics::Plane::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::Controller::Fabric::ClearStatistics::Plane::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "planeid")
    {
        planeid = value;
        planeid.value_namespace = name_space;
        planeid.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Fabric::ClearStatistics::Plane::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "planeid")
    {
        planeid.yfilter = yfilter;
    }
}

bool Clear::Controller::Fabric::ClearStatistics::Plane::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "planeid")
        return true;
    return false;
}

Clear::Controller::Fabric::Link::Link()
{

    yang_name = "link"; yang_parent_name = "fabric"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Fabric::Link::~Link()
{
}

bool Clear::Controller::Fabric::Link::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Controller::Fabric::Link::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Controller::Fabric::Link::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/fabric/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Fabric::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Fabric::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto c = std::make_shared<Clear::Controller::Fabric::Link::Rack>();
        c->parent = this;
        rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Fabric::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::Controller::Fabric::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Fabric::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Fabric::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Clear::Controller::Fabric::Link::Rack::Rack()
    :
    rack_number{YType::int32, "rack_number"}
{

    yang_name = "rack"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Controller::Fabric::Link::Rack::~Rack()
{
}

bool Clear::Controller::Fabric::Link::Rack::has_data() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return rack_number.is_set;
}

bool Clear::Controller::Fabric::Link::Rack::has_operation() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter);
}

std::string Clear::Controller::Fabric::Link::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/controller/fabric/link/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Controller::Fabric::Link::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[rack_number='" <<rack_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::Link::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Fabric::Link::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        auto c = std::make_shared<Clear::Controller::Fabric::Link::Rack::Port>();
        c->parent = this;
        port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Fabric::Link::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::Controller::Fabric::Link::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Fabric::Link::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
}

bool Clear::Controller::Fabric::Link::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "rack_number")
        return true;
    return false;
}

Clear::Controller::Fabric::Link::Rack::Port::Port()
    :
    portname{YType::str, "portname"},
    description{YType::str, "description"}
    	,
    statistics(std::make_shared<Clear::Controller::Fabric::Link::Rack::Port::Statistics>())
{
    statistics->parent = this;

    yang_name = "port"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::Controller::Fabric::Link::Rack::Port::~Port()
{
}

bool Clear::Controller::Fabric::Link::Rack::Port::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return portname.is_set
	|| description.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Clear::Controller::Fabric::Link::Rack::Port::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(portname.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Clear::Controller::Fabric::Link::Rack::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port" <<"[portname='" <<portname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::Link::Rack::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (portname.is_set || is_set(portname.yfilter)) leaf_name_data.push_back(portname.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Fabric::Link::Rack::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::Controller::Fabric::Link::Rack::Port::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Clear::Controller::Fabric::Link::Rack::Port::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Fabric::Link::Rack::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Clear::Controller::Fabric::Link::Rack::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "portname")
    {
        portname = value;
        portname.value_namespace = name_space;
        portname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Fabric::Link::Rack::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "portname")
    {
        portname.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Clear::Controller::Fabric::Link::Rack::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "statistics" || name == "portname" || name == "description")
        return true;
    return false;
}

Clear::Controller::Fabric::Link::Rack::Port::Location::Location()
    :
    loc_str{YType::str, "loc_str"}
    	,
    statistics(std::make_shared<Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics>())
{
    statistics->parent = this;

    yang_name = "location"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::Controller::Fabric::Link::Rack::Port::Location::~Location()
{
}

bool Clear::Controller::Fabric::Link::Rack::Port::Location::has_data() const
{
    return loc_str.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Clear::Controller::Fabric::Link::Rack::Port::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Clear::Controller::Fabric::Link::Rack::Port::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[loc_str='" <<loc_str <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::Link::Rack::Port::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Fabric::Link::Rack::Port::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Fabric::Link::Rack::Port::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Clear::Controller::Fabric::Link::Rack::Port::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Controller::Fabric::Link::Rack::Port::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
}

bool Clear::Controller::Fabric::Link::Rack::Port::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "loc_str")
        return true;
    return false;
}

Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics::~Statistics()
{
}

bool Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics::has_data() const
{
    return false;
}

bool Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics::has_operation() const
{
    return is_set(yfilter);
}

std::string Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Fabric::Link::Rack::Port::Location::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Clear::Controller::Fabric::Link::Rack::Port::Statistics::Statistics()
{

    yang_name = "statistics"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::Controller::Fabric::Link::Rack::Port::Statistics::~Statistics()
{
}

bool Clear::Controller::Fabric::Link::Rack::Port::Statistics::has_data() const
{
    return false;
}

bool Clear::Controller::Fabric::Link::Rack::Port::Statistics::has_operation() const
{
    return is_set(yfilter);
}

std::string Clear::Controller::Fabric::Link::Rack::Port::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Controller::Fabric::Link::Rack::Port::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Controller::Fabric::Link::Rack::Port::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Controller::Fabric::Link::Rack::Port::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::Controller::Fabric::Link::Rack::Port::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Controller::Fabric::Link::Rack::Port::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Controller::Fabric::Link::Rack::Port::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Clear::ClearAsicErrorsGrp::ClearAsicErrorsGrp()
{

    yang_name = "clear-asic-errors-grp"; yang_parent_name = "clear"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::ClearAsicErrorsGrp::~ClearAsicErrorsGrp()
{
}

bool Clear::ClearAsicErrorsGrp::has_data() const
{
    for (std::size_t index=0; index<clear_device.size(); index++)
    {
        if(clear_device[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::has_operation() const
{
    for (std::size_t index=0; index<clear_device.size(); index++)
    {
        if(clear_device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::ClearAsicErrorsGrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clear-asic-errors-grp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clear-device")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice>();
        c->parent = this;
        clear_device.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : clear_device)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear-device")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::ClearDevice()
    :
    device_name{YType::str, "device-name"}
    	,
    all_instances(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances>())
{
    all_instances->parent = this;

    yang_name = "clear-device"; yang_parent_name = "clear-asic-errors-grp"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::~ClearDevice()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return device_name.is_set
	|| (all_instances !=  nullptr && all_instances->has_data());
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| (all_instances !=  nullptr && all_instances->has_operation());
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/clear-asic-errors-grp/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clear-device" <<"[device-name='" <<device_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    if(child_yang_name == "all-instances")
    {
        if(all_instances == nullptr)
        {
            all_instances = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances>();
        }
        return all_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(all_instances != nullptr)
    {
        children["all-instances"] = all_instances;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "all-instances" || name == "device-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Instance()
    :
    instance_num{YType::uint32, "instance-num"}
    	,
    sbe(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe>())
	,mbe(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe>())
	,parity(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity>())
	,generic(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic>())
	,crc(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc>())
	,reset(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset>())
	,barrier(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier>())
	,unexpected(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected>())
	,link(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link>())
	,oor_thresh(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh>())
	,bp(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp>())
	,io(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io>())
	,ucode(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode>())
	,config(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config>())
	,indirect(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect>())
	,nonerr(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr>())
	,summary(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary>())
	,all(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All>())
{
    sbe->parent = this;
    mbe->parent = this;
    parity->parent = this;
    generic->parent = this;
    crc->parent = this;
    reset->parent = this;
    barrier->parent = this;
    unexpected->parent = this;
    link->parent = this;
    oor_thresh->parent = this;
    bp->parent = this;
    io->parent = this;
    ucode->parent = this;
    config->parent = this;
    indirect->parent = this;
    nonerr->parent = this;
    summary->parent = this;
    all->parent = this;

    yang_name = "instance"; yang_parent_name = "clear-device"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::~Instance()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::has_data() const
{
    return instance_num.is_set
	|| (sbe !=  nullptr && sbe->has_data())
	|| (mbe !=  nullptr && mbe->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (generic !=  nullptr && generic->has_data())
	|| (crc !=  nullptr && crc->has_data())
	|| (reset !=  nullptr && reset->has_data())
	|| (barrier !=  nullptr && barrier->has_data())
	|| (unexpected !=  nullptr && unexpected->has_data())
	|| (link !=  nullptr && link->has_data())
	|| (oor_thresh !=  nullptr && oor_thresh->has_data())
	|| (bp !=  nullptr && bp->has_data())
	|| (io !=  nullptr && io->has_data())
	|| (ucode !=  nullptr && ucode->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (indirect !=  nullptr && indirect->has_data())
	|| (nonerr !=  nullptr && nonerr->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_num.yfilter)
	|| (sbe !=  nullptr && sbe->has_operation())
	|| (mbe !=  nullptr && mbe->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (generic !=  nullptr && generic->has_operation())
	|| (crc !=  nullptr && crc->has_operation())
	|| (reset !=  nullptr && reset->has_operation())
	|| (barrier !=  nullptr && barrier->has_operation())
	|| (unexpected !=  nullptr && unexpected->has_operation())
	|| (link !=  nullptr && link->has_operation())
	|| (oor_thresh !=  nullptr && oor_thresh->has_operation())
	|| (bp !=  nullptr && bp->has_operation())
	|| (io !=  nullptr && io->has_operation())
	|| (ucode !=  nullptr && ucode->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (indirect !=  nullptr && indirect->has_operation())
	|| (nonerr !=  nullptr && nonerr->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[instance-num='" <<instance_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_num.is_set || is_set(instance_num.yfilter)) leaf_name_data.push_back(instance_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sbe")
    {
        if(sbe == nullptr)
        {
            sbe = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe>();
        }
        return sbe;
    }

    if(child_yang_name == "mbe")
    {
        if(mbe == nullptr)
        {
            mbe = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe>();
        }
        return mbe;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "generic")
    {
        if(generic == nullptr)
        {
            generic = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic>();
        }
        return generic;
    }

    if(child_yang_name == "crc")
    {
        if(crc == nullptr)
        {
            crc = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc>();
        }
        return crc;
    }

    if(child_yang_name == "reset")
    {
        if(reset == nullptr)
        {
            reset = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset>();
        }
        return reset;
    }

    if(child_yang_name == "barrier")
    {
        if(barrier == nullptr)
        {
            barrier = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier>();
        }
        return barrier;
    }

    if(child_yang_name == "unexpected")
    {
        if(unexpected == nullptr)
        {
            unexpected = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected>();
        }
        return unexpected;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link>();
        }
        return link;
    }

    if(child_yang_name == "oor-thresh")
    {
        if(oor_thresh == nullptr)
        {
            oor_thresh = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh>();
        }
        return oor_thresh;
    }

    if(child_yang_name == "bp")
    {
        if(bp == nullptr)
        {
            bp = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp>();
        }
        return bp;
    }

    if(child_yang_name == "io")
    {
        if(io == nullptr)
        {
            io = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io>();
        }
        return io;
    }

    if(child_yang_name == "ucode")
    {
        if(ucode == nullptr)
        {
            ucode = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode>();
        }
        return ucode;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config>();
        }
        return config;
    }

    if(child_yang_name == "indirect")
    {
        if(indirect == nullptr)
        {
            indirect = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect>();
        }
        return indirect;
    }

    if(child_yang_name == "nonerr")
    {
        if(nonerr == nullptr)
        {
            nonerr = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr>();
        }
        return nonerr;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sbe != nullptr)
    {
        children["sbe"] = sbe;
    }

    if(mbe != nullptr)
    {
        children["mbe"] = mbe;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(generic != nullptr)
    {
        children["generic"] = generic;
    }

    if(crc != nullptr)
    {
        children["crc"] = crc;
    }

    if(reset != nullptr)
    {
        children["reset"] = reset;
    }

    if(barrier != nullptr)
    {
        children["barrier"] = barrier;
    }

    if(unexpected != nullptr)
    {
        children["unexpected"] = unexpected;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    if(oor_thresh != nullptr)
    {
        children["oor-thresh"] = oor_thresh;
    }

    if(bp != nullptr)
    {
        children["bp"] = bp;
    }

    if(io != nullptr)
    {
        children["io"] = io;
    }

    if(ucode != nullptr)
    {
        children["ucode"] = ucode;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(indirect != nullptr)
    {
        children["indirect"] = indirect;
    }

    if(nonerr != nullptr)
    {
        children["nonerr"] = nonerr;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-num")
    {
        instance_num = value;
        instance_num.value_namespace = name_space;
        instance_num.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-num")
    {
        instance_num.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sbe" || name == "mbe" || name == "parity" || name == "generic" || name == "crc" || name == "reset" || name == "barrier" || name == "unexpected" || name == "link" || name == "oor-thresh" || name == "bp" || name == "io" || name == "ucode" || name == "config" || name == "indirect" || name == "nonerr" || name == "summary" || name == "all" || name == "instance-num")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Sbe()
{

    yang_name = "sbe"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::~Sbe()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "sbe"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Sbe::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Mbe()
{

    yang_name = "mbe"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::~Mbe()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "mbe"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Mbe::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Parity()
{

    yang_name = "parity"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::~Parity()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "parity"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Parity::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Generic()
{

    yang_name = "generic"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::~Generic()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "generic"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Generic::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Crc()
{

    yang_name = "crc"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::~Crc()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "crc"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Crc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Reset()
{

    yang_name = "reset"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::~Reset()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "reset"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Reset::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Barrier()
{

    yang_name = "barrier"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::~Barrier()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "barrier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "barrier"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Barrier::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Unexpected()
{

    yang_name = "unexpected"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::~Unexpected()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unexpected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "unexpected"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Unexpected::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Link()
{

    yang_name = "link"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::~Link()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Link::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::OorThresh()
{

    yang_name = "oor-thresh"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::~OorThresh()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-thresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "oor-thresh"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::OorThresh::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Bp()
{

    yang_name = "bp"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::~Bp()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Bp::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Io()
{

    yang_name = "io"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::~Io()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "io";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "io"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Io::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Ucode()
{

    yang_name = "ucode"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::~Ucode()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "ucode"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Ucode::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Config()
{

    yang_name = "config"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::~Config()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Config::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Indirect()
{

    yang_name = "indirect"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::~Indirect()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "indirect"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Indirect::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Nonerr()
{

    yang_name = "nonerr"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::~Nonerr()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nonerr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "nonerr"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Nonerr::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Summary()
{

    yang_name = "summary"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::~Summary()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::Summary::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::All()
    :
    history(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History>())
{
    history->parent = this;

    yang_name = "all"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::~All()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (history !=  nullptr && history->has_data());
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History>();
        }
        return history;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(history != nullptr)
    {
        children["history"] = history;
    }

    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::History()
{

    yang_name = "history"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::~History()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::History::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::Instance::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::AllInstances()
    :
    sbe(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe>())
	,mbe(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe>())
	,parity(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity>())
	,generic(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic>())
	,crc(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc>())
	,reset(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset>())
	,barrier(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier>())
	,unexpected(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected>())
	,link(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link>())
	,oor_thresh(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh>())
	,bp(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp>())
	,io(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io>())
	,ucode(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode>())
	,config(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config>())
	,indirect(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect>())
	,nonerr(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr>())
	,summary(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary>())
	,all(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All>())
{
    sbe->parent = this;
    mbe->parent = this;
    parity->parent = this;
    generic->parent = this;
    crc->parent = this;
    reset->parent = this;
    barrier->parent = this;
    unexpected->parent = this;
    link->parent = this;
    oor_thresh->parent = this;
    bp->parent = this;
    io->parent = this;
    ucode->parent = this;
    config->parent = this;
    indirect->parent = this;
    nonerr->parent = this;
    summary->parent = this;
    all->parent = this;

    yang_name = "all-instances"; yang_parent_name = "clear-device"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::~AllInstances()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::has_data() const
{
    return (sbe !=  nullptr && sbe->has_data())
	|| (mbe !=  nullptr && mbe->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (generic !=  nullptr && generic->has_data())
	|| (crc !=  nullptr && crc->has_data())
	|| (reset !=  nullptr && reset->has_data())
	|| (barrier !=  nullptr && barrier->has_data())
	|| (unexpected !=  nullptr && unexpected->has_data())
	|| (link !=  nullptr && link->has_data())
	|| (oor_thresh !=  nullptr && oor_thresh->has_data())
	|| (bp !=  nullptr && bp->has_data())
	|| (io !=  nullptr && io->has_data())
	|| (ucode !=  nullptr && ucode->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (indirect !=  nullptr && indirect->has_data())
	|| (nonerr !=  nullptr && nonerr->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::has_operation() const
{
    return is_set(yfilter)
	|| (sbe !=  nullptr && sbe->has_operation())
	|| (mbe !=  nullptr && mbe->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (generic !=  nullptr && generic->has_operation())
	|| (crc !=  nullptr && crc->has_operation())
	|| (reset !=  nullptr && reset->has_operation())
	|| (barrier !=  nullptr && barrier->has_operation())
	|| (unexpected !=  nullptr && unexpected->has_operation())
	|| (link !=  nullptr && link->has_operation())
	|| (oor_thresh !=  nullptr && oor_thresh->has_operation())
	|| (bp !=  nullptr && bp->has_operation())
	|| (io !=  nullptr && io->has_operation())
	|| (ucode !=  nullptr && ucode->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (indirect !=  nullptr && indirect->has_operation())
	|| (nonerr !=  nullptr && nonerr->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sbe")
    {
        if(sbe == nullptr)
        {
            sbe = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe>();
        }
        return sbe;
    }

    if(child_yang_name == "mbe")
    {
        if(mbe == nullptr)
        {
            mbe = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe>();
        }
        return mbe;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "generic")
    {
        if(generic == nullptr)
        {
            generic = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic>();
        }
        return generic;
    }

    if(child_yang_name == "crc")
    {
        if(crc == nullptr)
        {
            crc = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc>();
        }
        return crc;
    }

    if(child_yang_name == "reset")
    {
        if(reset == nullptr)
        {
            reset = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset>();
        }
        return reset;
    }

    if(child_yang_name == "barrier")
    {
        if(barrier == nullptr)
        {
            barrier = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier>();
        }
        return barrier;
    }

    if(child_yang_name == "unexpected")
    {
        if(unexpected == nullptr)
        {
            unexpected = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected>();
        }
        return unexpected;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link>();
        }
        return link;
    }

    if(child_yang_name == "oor-thresh")
    {
        if(oor_thresh == nullptr)
        {
            oor_thresh = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh>();
        }
        return oor_thresh;
    }

    if(child_yang_name == "bp")
    {
        if(bp == nullptr)
        {
            bp = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp>();
        }
        return bp;
    }

    if(child_yang_name == "io")
    {
        if(io == nullptr)
        {
            io = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io>();
        }
        return io;
    }

    if(child_yang_name == "ucode")
    {
        if(ucode == nullptr)
        {
            ucode = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode>();
        }
        return ucode;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config>();
        }
        return config;
    }

    if(child_yang_name == "indirect")
    {
        if(indirect == nullptr)
        {
            indirect = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect>();
        }
        return indirect;
    }

    if(child_yang_name == "nonerr")
    {
        if(nonerr == nullptr)
        {
            nonerr = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr>();
        }
        return nonerr;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sbe != nullptr)
    {
        children["sbe"] = sbe;
    }

    if(mbe != nullptr)
    {
        children["mbe"] = mbe;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(generic != nullptr)
    {
        children["generic"] = generic;
    }

    if(crc != nullptr)
    {
        children["crc"] = crc;
    }

    if(reset != nullptr)
    {
        children["reset"] = reset;
    }

    if(barrier != nullptr)
    {
        children["barrier"] = barrier;
    }

    if(unexpected != nullptr)
    {
        children["unexpected"] = unexpected;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    if(oor_thresh != nullptr)
    {
        children["oor-thresh"] = oor_thresh;
    }

    if(bp != nullptr)
    {
        children["bp"] = bp;
    }

    if(io != nullptr)
    {
        children["io"] = io;
    }

    if(ucode != nullptr)
    {
        children["ucode"] = ucode;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(indirect != nullptr)
    {
        children["indirect"] = indirect;
    }

    if(nonerr != nullptr)
    {
        children["nonerr"] = nonerr;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sbe" || name == "mbe" || name == "parity" || name == "generic" || name == "crc" || name == "reset" || name == "barrier" || name == "unexpected" || name == "link" || name == "oor-thresh" || name == "bp" || name == "io" || name == "ucode" || name == "config" || name == "indirect" || name == "nonerr" || name == "summary" || name == "all")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Sbe()
{

    yang_name = "sbe"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::~Sbe()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "sbe"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Sbe::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Mbe()
{

    yang_name = "mbe"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::~Mbe()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "mbe"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Mbe::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Parity()
{

    yang_name = "parity"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::~Parity()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "parity"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Parity::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Generic()
{

    yang_name = "generic"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::~Generic()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "generic"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Generic::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Crc()
{

    yang_name = "crc"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::~Crc()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "crc"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Crc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Reset()
{

    yang_name = "reset"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::~Reset()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "reset"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Reset::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Barrier()
{

    yang_name = "barrier"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::~Barrier()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "barrier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "barrier"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Barrier::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Unexpected()
{

    yang_name = "unexpected"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::~Unexpected()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unexpected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "unexpected"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Unexpected::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Link()
{

    yang_name = "link"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::~Link()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Link::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::OorThresh()
{

    yang_name = "oor-thresh"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::~OorThresh()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-thresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "oor-thresh"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::OorThresh::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Bp()
{

    yang_name = "bp"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::~Bp()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Bp::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Io()
{

    yang_name = "io"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::~Io()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "io";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "io"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Io::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Ucode()
{

    yang_name = "ucode"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::~Ucode()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "ucode"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Ucode::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Config()
{

    yang_name = "config"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::~Config()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Config::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Indirect()
{

    yang_name = "indirect"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::~Indirect()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "indirect"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Indirect::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Nonerr()
{

    yang_name = "nonerr"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::~Nonerr()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nonerr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "nonerr"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Nonerr::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Summary()
{

    yang_name = "summary"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::~Summary()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::Summary::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::All()
    :
    history(std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History>())
{
    history->parent = this;

    yang_name = "all"; yang_parent_name = "all-instances"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::~All()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (history !=  nullptr && history->has_data());
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History>();
        }
        return history;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(history != nullptr)
    {
        children["history"] = history;
    }

    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::History()
{

    yang_name = "history"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::~History()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::History::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::Location()
    :
    location_name{YType::str, "location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::~Location()
{
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::has_data() const
{
    return location_name.is_set;
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location-name='" <<location_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Clear::ClearAsicErrorsGrp::ClearDevice::AllInstances::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location-name")
        return true;
    return false;
}

Clear::Logging::Logging()
    :
    onboard(std::make_shared<Clear::Logging::Onboard>())
{
    onboard->parent = this;

    yang_name = "logging"; yang_parent_name = "clear"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Logging::~Logging()
{
}

bool Clear::Logging::has_data() const
{
    return (onboard !=  nullptr && onboard->has_data());
}

bool Clear::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (onboard !=  nullptr && onboard->has_operation());
}

std::string Clear::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "onboard")
    {
        if(onboard == nullptr)
        {
            onboard = std::make_shared<Clear::Logging::Onboard>();
        }
        return onboard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(onboard != nullptr)
    {
        children["onboard"] = onboard;
    }

    return children;
}

void Clear::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "onboard")
        return true;
    return false;
}

Clear::Logging::Onboard::Onboard()
{

    yang_name = "onboard"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Logging::Onboard::~Onboard()
{
}

bool Clear::Logging::Onboard::has_data() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Clear::Logging::Onboard::has_operation() const
{
    for (std::size_t index=0; index<location.size(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Clear::Logging::Onboard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Logging::Onboard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onboard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Logging::Onboard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Logging::Onboard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<Clear::Logging::Onboard::Location>();
        c->parent = this;
        location.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Logging::Onboard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : location)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Clear::Logging::Onboard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Logging::Onboard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Logging::Onboard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::Logging::Onboard::Location::Location()
    :
    location{YType::str, "location"}
{

    yang_name = "location"; yang_parent_name = "onboard"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Logging::Onboard::Location::~Location()
{
}

bool Clear::Logging::Onboard::Location::has_data() const
{
    return location.is_set;
}

bool Clear::Logging::Onboard::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter);
}

std::string Clear::Logging::Onboard::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/logging/onboard/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Logging::Onboard::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Logging::Onboard::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Logging::Onboard::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Logging::Onboard::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::Logging::Onboard::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
}

void Clear::Logging::Onboard::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
}

bool Clear::Logging::Onboard::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Clear::Configuration::Configuration()
{

    yang_name = "configuration"; yang_parent_name = "clear"; is_top_level_class = false; has_list_ancestor = false;
}

Clear::Configuration::~Configuration()
{
}

bool Clear::Configuration::has_data() const
{
    return false;
}

bool Clear::Configuration::has_operation() const
{
    return is_set(yfilter);
}

std::string Clear::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-clear:clear/" << get_segment_path();
    return path_buffer.str();
}

std::string Clear::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Clear::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Clear::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Clear::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Clear::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Clear::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Clear::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

