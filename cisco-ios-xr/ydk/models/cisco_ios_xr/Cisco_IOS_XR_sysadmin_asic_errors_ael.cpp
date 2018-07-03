
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_asic_errors_ael.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_asic_errors_ael {

AsicErrors::AsicErrors()
    :
    device_name{YType::str, "device-name"}
        ,
    instance(this, {"instance_num"})
    , show_all_instances(std::make_shared<AsicErrors::ShowAllInstances>())
{
    show_all_instances->parent = this;

    yang_name = "asic-errors"; yang_parent_name = "Cisco-IOS-XR-sysadmin-asic-errors-ael"; is_top_level_class = true; has_list_ancestor = false; 
}

AsicErrors::~AsicErrors()
{
}

bool AsicErrors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return device_name.is_set
	|| (show_all_instances !=  nullptr && show_all_instances->has_data());
}

bool AsicErrors::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| (show_all_instances !=  nullptr && show_all_instances->has_operation());
}

std::string AsicErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-asic-errors-ael:asic-errors";
    ADD_KEY_TOKEN(device_name, "device-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto c = std::make_shared<AsicErrors::Instance>();
        c->parent = this;
        instance.append(c);
        return c;
    }

    if(child_yang_name == "show-all-instances")
    {
        if(show_all_instances == nullptr)
        {
            show_all_instances = std::make_shared<AsicErrors::ShowAllInstances>();
        }
        return show_all_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(show_all_instances != nullptr)
    {
        children["show-all-instances"] = show_all_instances;
    }

    return children;
}

void AsicErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> AsicErrors::clone_ptr() const
{
    return std::make_shared<AsicErrors>();
}

std::string AsicErrors::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string AsicErrors::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function AsicErrors::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AsicErrors::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool AsicErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "show-all-instances" || name == "device-name")
        return true;
    return false;
}

AsicErrors::Instance::Instance()
    :
    instance_num{YType::uint32, "instance-num"}
        ,
    sbe(std::make_shared<AsicErrors::Instance::Sbe>())
    , mbe(std::make_shared<AsicErrors::Instance::Mbe>())
    , parity(std::make_shared<AsicErrors::Instance::Parity>())
    , generic(std::make_shared<AsicErrors::Instance::Generic>())
    , crc(std::make_shared<AsicErrors::Instance::Crc>())
    , reset(std::make_shared<AsicErrors::Instance::Reset>())
    , barrier(std::make_shared<AsicErrors::Instance::Barrier>())
    , unexpected(std::make_shared<AsicErrors::Instance::Unexpected>())
    , link(std::make_shared<AsicErrors::Instance::Link>())
    , oor_thresh(std::make_shared<AsicErrors::Instance::OorThresh>())
    , bp(std::make_shared<AsicErrors::Instance::Bp>())
    , io(std::make_shared<AsicErrors::Instance::Io>())
    , ucode(std::make_shared<AsicErrors::Instance::Ucode>())
    , config(std::make_shared<AsicErrors::Instance::Config>())
    , indirect(std::make_shared<AsicErrors::Instance::Indirect>())
    , nonerr(std::make_shared<AsicErrors::Instance::Nonerr>())
    , summary(std::make_shared<AsicErrors::Instance::Summary>())
    , all(std::make_shared<AsicErrors::Instance::All>())
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

    yang_name = "instance"; yang_parent_name = "asic-errors"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::~Instance()
{
}

bool AsicErrors::Instance::has_data() const
{
    if (is_presence_container) return true;
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

bool AsicErrors::Instance::has_operation() const
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

std::string AsicErrors::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_num, "instance-num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_num.is_set || is_set(instance_num.yfilter)) leaf_name_data.push_back(instance_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sbe")
    {
        if(sbe == nullptr)
        {
            sbe = std::make_shared<AsicErrors::Instance::Sbe>();
        }
        return sbe;
    }

    if(child_yang_name == "mbe")
    {
        if(mbe == nullptr)
        {
            mbe = std::make_shared<AsicErrors::Instance::Mbe>();
        }
        return mbe;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<AsicErrors::Instance::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "generic")
    {
        if(generic == nullptr)
        {
            generic = std::make_shared<AsicErrors::Instance::Generic>();
        }
        return generic;
    }

    if(child_yang_name == "crc")
    {
        if(crc == nullptr)
        {
            crc = std::make_shared<AsicErrors::Instance::Crc>();
        }
        return crc;
    }

    if(child_yang_name == "reset")
    {
        if(reset == nullptr)
        {
            reset = std::make_shared<AsicErrors::Instance::Reset>();
        }
        return reset;
    }

    if(child_yang_name == "barrier")
    {
        if(barrier == nullptr)
        {
            barrier = std::make_shared<AsicErrors::Instance::Barrier>();
        }
        return barrier;
    }

    if(child_yang_name == "unexpected")
    {
        if(unexpected == nullptr)
        {
            unexpected = std::make_shared<AsicErrors::Instance::Unexpected>();
        }
        return unexpected;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<AsicErrors::Instance::Link>();
        }
        return link;
    }

    if(child_yang_name == "oor-thresh")
    {
        if(oor_thresh == nullptr)
        {
            oor_thresh = std::make_shared<AsicErrors::Instance::OorThresh>();
        }
        return oor_thresh;
    }

    if(child_yang_name == "bp")
    {
        if(bp == nullptr)
        {
            bp = std::make_shared<AsicErrors::Instance::Bp>();
        }
        return bp;
    }

    if(child_yang_name == "io")
    {
        if(io == nullptr)
        {
            io = std::make_shared<AsicErrors::Instance::Io>();
        }
        return io;
    }

    if(child_yang_name == "ucode")
    {
        if(ucode == nullptr)
        {
            ucode = std::make_shared<AsicErrors::Instance::Ucode>();
        }
        return ucode;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<AsicErrors::Instance::Config>();
        }
        return config;
    }

    if(child_yang_name == "indirect")
    {
        if(indirect == nullptr)
        {
            indirect = std::make_shared<AsicErrors::Instance::Indirect>();
        }
        return indirect;
    }

    if(child_yang_name == "nonerr")
    {
        if(nonerr == nullptr)
        {
            nonerr = std::make_shared<AsicErrors::Instance::Nonerr>();
        }
        return nonerr;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<AsicErrors::Instance::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<AsicErrors::Instance::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::get_children() const
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

void AsicErrors::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-num")
    {
        instance_num = value;
        instance_num.value_namespace = name_space;
        instance_num.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-num")
    {
        instance_num.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sbe" || name == "mbe" || name == "parity" || name == "generic" || name == "crc" || name == "reset" || name == "barrier" || name == "unexpected" || name == "link" || name == "oor-thresh" || name == "bp" || name == "io" || name == "ucode" || name == "config" || name == "indirect" || name == "nonerr" || name == "summary" || name == "all" || name == "instance-num")
        return true;
    return false;
}

AsicErrors::Instance::Sbe::Sbe()
    :
    location(this, {"location_name"})
{

    yang_name = "sbe"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Sbe::~Sbe()
{
}

bool AsicErrors::Instance::Sbe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Sbe::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Sbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Sbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Sbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Sbe::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Sbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Sbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Sbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Sbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Sbe::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "sbe"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Sbe::Location::~Location()
{
}

bool AsicErrors::Instance::Sbe::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Sbe::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Sbe::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Sbe::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Sbe::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Sbe::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Sbe::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Sbe::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Sbe::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Sbe::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Sbe::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Sbe::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Sbe::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Sbe::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Sbe::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Sbe::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Sbe::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Sbe::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Sbe::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Sbe::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Sbe::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Mbe::Mbe()
    :
    location(this, {"location_name"})
{

    yang_name = "mbe"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Mbe::~Mbe()
{
}

bool AsicErrors::Instance::Mbe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Mbe::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Mbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Mbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Mbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Mbe::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Mbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Mbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Mbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Mbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Mbe::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "mbe"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Mbe::Location::~Location()
{
}

bool AsicErrors::Instance::Mbe::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Mbe::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Mbe::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Mbe::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Mbe::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Mbe::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Mbe::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Mbe::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Mbe::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Mbe::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Mbe::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Mbe::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Mbe::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Mbe::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Mbe::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Mbe::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Mbe::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Mbe::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Mbe::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Mbe::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Mbe::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Parity::Parity()
    :
    location(this, {"location_name"})
{

    yang_name = "parity"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Parity::~Parity()
{
}

bool AsicErrors::Instance::Parity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Parity::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Parity::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Parity::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "parity"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Parity::Location::~Location()
{
}

bool AsicErrors::Instance::Parity::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Parity::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Parity::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Parity::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Parity::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Parity::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Parity::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Parity::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Parity::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Parity::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Parity::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Parity::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Parity::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Parity::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Parity::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Parity::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Parity::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Parity::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Parity::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Parity::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Parity::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Generic::Generic()
    :
    location(this, {"location_name"})
{

    yang_name = "generic"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Generic::~Generic()
{
}

bool AsicErrors::Instance::Generic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Generic::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Generic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Generic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Generic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Generic::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Generic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Generic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Generic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Generic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Generic::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "generic"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Generic::Location::~Location()
{
}

bool AsicErrors::Instance::Generic::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Generic::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Generic::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Generic::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Generic::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Generic::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Generic::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Generic::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Generic::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Generic::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Generic::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Generic::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Generic::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Generic::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Generic::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Generic::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Generic::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Generic::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Generic::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Generic::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Generic::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Crc::Crc()
    :
    location(this, {"location_name"})
{

    yang_name = "crc"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Crc::~Crc()
{
}

bool AsicErrors::Instance::Crc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Crc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Crc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Crc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Crc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Crc::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Crc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Crc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Crc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Crc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Crc::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "crc"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Crc::Location::~Location()
{
}

bool AsicErrors::Instance::Crc::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Crc::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Crc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Crc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Crc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Crc::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Crc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Crc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Crc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Crc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Crc::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Crc::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Crc::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Crc::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Crc::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Crc::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Crc::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Crc::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Crc::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Crc::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Crc::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Reset::Reset()
    :
    location(this, {"location_name"})
{

    yang_name = "reset"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Reset::~Reset()
{
}

bool AsicErrors::Instance::Reset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Reset::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Reset::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Reset::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "reset"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Reset::Location::~Location()
{
}

bool AsicErrors::Instance::Reset::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Reset::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Reset::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Reset::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Reset::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Reset::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Reset::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Reset::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Reset::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Reset::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Reset::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Reset::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Reset::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Reset::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Reset::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Reset::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Reset::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Reset::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Reset::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Reset::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Reset::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Barrier::Barrier()
    :
    location(this, {"location_name"})
{

    yang_name = "barrier"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Barrier::~Barrier()
{
}

bool AsicErrors::Instance::Barrier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Barrier::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Barrier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "barrier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Barrier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Barrier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Barrier::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Barrier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Barrier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Barrier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Barrier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Barrier::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "barrier"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Barrier::Location::~Location()
{
}

bool AsicErrors::Instance::Barrier::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Barrier::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Barrier::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Barrier::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Barrier::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Barrier::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Barrier::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Barrier::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Barrier::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Barrier::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Barrier::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Barrier::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Barrier::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Barrier::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Barrier::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Barrier::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Barrier::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Barrier::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Barrier::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Barrier::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Barrier::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Unexpected::Unexpected()
    :
    location(this, {"location_name"})
{

    yang_name = "unexpected"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Unexpected::~Unexpected()
{
}

bool AsicErrors::Instance::Unexpected::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Unexpected::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Unexpected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unexpected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Unexpected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Unexpected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Unexpected::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Unexpected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Unexpected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Unexpected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Unexpected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Unexpected::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "unexpected"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Unexpected::Location::~Location()
{
}

bool AsicErrors::Instance::Unexpected::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Unexpected::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Unexpected::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Unexpected::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Unexpected::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Unexpected::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Unexpected::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Unexpected::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Unexpected::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Unexpected::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Unexpected::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Unexpected::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Unexpected::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Unexpected::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Unexpected::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Unexpected::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Unexpected::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Unexpected::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Unexpected::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Unexpected::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Unexpected::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Link::Link()
    :
    location(this, {"location_name"})
{

    yang_name = "link"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Link::~Link()
{
}

bool AsicErrors::Instance::Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Link::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Link::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Link::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Link::Location::~Location()
{
}

bool AsicErrors::Instance::Link::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Link::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Link::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Link::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Link::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Link::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Link::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Link::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Link::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Link::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Link::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Link::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Link::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Link::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Link::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Link::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Link::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Link::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Link::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Link::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Link::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::OorThresh::OorThresh()
    :
    location(this, {"location_name"})
{

    yang_name = "oor-thresh"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::OorThresh::~OorThresh()
{
}

bool AsicErrors::Instance::OorThresh::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::OorThresh::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::OorThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-thresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::OorThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::OorThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::OorThresh::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::OorThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::OorThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::OorThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::OorThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::OorThresh::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "oor-thresh"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::OorThresh::Location::~Location()
{
}

bool AsicErrors::Instance::OorThresh::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::OorThresh::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::OorThresh::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::OorThresh::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::OorThresh::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::OorThresh::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::OorThresh::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::OorThresh::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::OorThresh::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::OorThresh::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::OorThresh::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::OorThresh::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::OorThresh::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::OorThresh::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::OorThresh::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::OorThresh::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::OorThresh::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::OorThresh::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::OorThresh::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::OorThresh::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::OorThresh::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Bp::Bp()
    :
    location(this, {"location_name"})
{

    yang_name = "bp"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Bp::~Bp()
{
}

bool AsicErrors::Instance::Bp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Bp::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Bp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Bp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Bp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Bp::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Bp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Bp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Bp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Bp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Bp::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Bp::Location::~Location()
{
}

bool AsicErrors::Instance::Bp::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Bp::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Bp::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Bp::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Bp::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Bp::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Bp::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Bp::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Bp::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Bp::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Bp::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Bp::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Bp::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Bp::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Bp::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Bp::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Bp::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Bp::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Bp::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Bp::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Bp::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Io::Io()
    :
    location(this, {"location_name"})
{

    yang_name = "io"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Io::~Io()
{
}

bool AsicErrors::Instance::Io::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Io::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Io::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "io";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Io::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Io::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Io::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Io::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Io::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Io::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Io::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Io::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "io"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Io::Location::~Location()
{
}

bool AsicErrors::Instance::Io::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Io::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Io::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Io::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Io::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Io::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Io::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Io::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Io::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Io::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Io::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Io::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Io::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Io::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Io::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Io::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Io::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Io::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Io::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Io::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Io::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Ucode::Ucode()
    :
    location(this, {"location_name"})
{

    yang_name = "ucode"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Ucode::~Ucode()
{
}

bool AsicErrors::Instance::Ucode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Ucode::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Ucode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Ucode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Ucode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Ucode::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Ucode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Ucode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Ucode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Ucode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Ucode::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "ucode"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Ucode::Location::~Location()
{
}

bool AsicErrors::Instance::Ucode::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Ucode::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Ucode::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Ucode::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Ucode::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Ucode::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Ucode::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Ucode::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Ucode::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Ucode::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Ucode::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Ucode::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Ucode::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Ucode::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Ucode::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Ucode::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Ucode::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Ucode::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Ucode::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Ucode::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Ucode::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Config::Config()
    :
    location(this, {"location_name"})
{

    yang_name = "config"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Config::~Config()
{
}

bool AsicErrors::Instance::Config::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Config::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Config::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Config::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Config::Location::~Location()
{
}

bool AsicErrors::Instance::Config::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Config::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Config::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Config::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Config::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Config::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Config::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Config::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Config::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Config::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Config::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Config::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Config::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Config::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Config::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Config::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Config::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Config::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Config::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Config::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Config::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Indirect::Indirect()
    :
    location(this, {"location_name"})
{

    yang_name = "indirect"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Indirect::~Indirect()
{
}

bool AsicErrors::Instance::Indirect::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Indirect::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Indirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Indirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Indirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Indirect::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Indirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Indirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Indirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Indirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Indirect::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "indirect"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Indirect::Location::~Location()
{
}

bool AsicErrors::Instance::Indirect::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Indirect::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Indirect::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Indirect::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Indirect::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Indirect::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Indirect::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Indirect::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Indirect::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Indirect::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Indirect::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Indirect::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Indirect::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Indirect::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Indirect::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Indirect::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Indirect::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Indirect::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Indirect::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Indirect::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Indirect::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Nonerr::Nonerr()
    :
    location(this, {"location_name"})
{

    yang_name = "nonerr"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Nonerr::~Nonerr()
{
}

bool AsicErrors::Instance::Nonerr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Nonerr::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Nonerr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nonerr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Nonerr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Nonerr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Nonerr::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Nonerr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Nonerr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Nonerr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Nonerr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Nonerr::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "nonerr"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Nonerr::Location::~Location()
{
}

bool AsicErrors::Instance::Nonerr::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Nonerr::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Nonerr::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Nonerr::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Nonerr::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Nonerr::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Nonerr::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Nonerr::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Nonerr::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Nonerr::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Nonerr::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Nonerr::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Nonerr::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Nonerr::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Nonerr::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Nonerr::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Nonerr::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Nonerr::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Nonerr::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Nonerr::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Nonerr::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::Summary::Summary()
    :
    location(this, {"location_name"})
{

    yang_name = "summary"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Summary::~Summary()
{
}

bool AsicErrors::Instance::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::Summary::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::Summary::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::Summary::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Summary::Location::~Location()
{
}

bool AsicErrors::Instance::Summary::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::Summary::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::Summary::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Summary::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Summary::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::Summary::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Summary::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::Summary::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Summary::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Summary::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::Summary::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::Summary::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::Summary::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::Summary::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::Summary::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::Summary::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::Summary::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::Summary::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::Summary::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::Summary::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::Summary::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::All::All()
    :
    history(std::make_shared<AsicErrors::Instance::All::History>())
    , location(this, {"location_name"})
{
    history->parent = this;

    yang_name = "all"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::All::~All()
{
}

bool AsicErrors::Instance::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (history !=  nullptr && history->has_data());
}

bool AsicErrors::Instance::All::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string AsicErrors::Instance::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<AsicErrors::Instance::All::History>();
        }
        return history;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::All::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(history != nullptr)
    {
        children["history"] = history;
    }

    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "location")
        return true;
    return false;
}

AsicErrors::Instance::All::History::History()
    :
    location(this, {"location_name"})
{

    yang_name = "history"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::All::History::~History()
{
}

bool AsicErrors::Instance::All::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::Instance::All::History::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::Instance::All::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::All::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::All::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::Instance::All::History::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::All::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::All::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::Instance::All::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::Instance::All::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::Instance::All::History::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::All::History::Location::~Location()
{
}

bool AsicErrors::Instance::All::History::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::All::History::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::All::History::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::All::History::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::All::History::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::All::History::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::All::History::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::All::History::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::All::History::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::All::History::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::All::History::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::All::History::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::All::History::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::All::History::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::All::History::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::All::History::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::All::History::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::All::History::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::All::History::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::All::History::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::All::History::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::Instance::All::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::All::Location::~Location()
{
}

bool AsicErrors::Instance::All::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::Instance::All::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::Instance::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::Instance::All::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::Instance::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::Instance::All::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::Instance::All::Location::LogLst::~LogLst()
{
}

bool AsicErrors::Instance::All::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::Instance::All::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::Instance::All::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::Instance::All::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::Instance::All::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::Instance::All::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::Instance::All::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::Instance::All::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::Instance::All::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::ShowAllInstances()
    :
    sbe(std::make_shared<AsicErrors::ShowAllInstances::Sbe>())
    , mbe(std::make_shared<AsicErrors::ShowAllInstances::Mbe>())
    , parity(std::make_shared<AsicErrors::ShowAllInstances::Parity>())
    , generic(std::make_shared<AsicErrors::ShowAllInstances::Generic>())
    , crc(std::make_shared<AsicErrors::ShowAllInstances::Crc>())
    , reset(std::make_shared<AsicErrors::ShowAllInstances::Reset>())
    , barrier(std::make_shared<AsicErrors::ShowAllInstances::Barrier>())
    , unexpected(std::make_shared<AsicErrors::ShowAllInstances::Unexpected>())
    , link(std::make_shared<AsicErrors::ShowAllInstances::Link>())
    , oor_thresh(std::make_shared<AsicErrors::ShowAllInstances::OorThresh>())
    , bp(std::make_shared<AsicErrors::ShowAllInstances::Bp>())
    , io(std::make_shared<AsicErrors::ShowAllInstances::Io>())
    , ucode(std::make_shared<AsicErrors::ShowAllInstances::Ucode>())
    , config(std::make_shared<AsicErrors::ShowAllInstances::Config>())
    , indirect(std::make_shared<AsicErrors::ShowAllInstances::Indirect>())
    , nonerr(std::make_shared<AsicErrors::ShowAllInstances::Nonerr>())
    , summary(std::make_shared<AsicErrors::ShowAllInstances::Summary>())
    , all(std::make_shared<AsicErrors::ShowAllInstances::All>())
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

    yang_name = "show-all-instances"; yang_parent_name = "asic-errors"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::~ShowAllInstances()
{
}

bool AsicErrors::ShowAllInstances::has_data() const
{
    if (is_presence_container) return true;
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

bool AsicErrors::ShowAllInstances::has_operation() const
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

std::string AsicErrors::ShowAllInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-all-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sbe")
    {
        if(sbe == nullptr)
        {
            sbe = std::make_shared<AsicErrors::ShowAllInstances::Sbe>();
        }
        return sbe;
    }

    if(child_yang_name == "mbe")
    {
        if(mbe == nullptr)
        {
            mbe = std::make_shared<AsicErrors::ShowAllInstances::Mbe>();
        }
        return mbe;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<AsicErrors::ShowAllInstances::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "generic")
    {
        if(generic == nullptr)
        {
            generic = std::make_shared<AsicErrors::ShowAllInstances::Generic>();
        }
        return generic;
    }

    if(child_yang_name == "crc")
    {
        if(crc == nullptr)
        {
            crc = std::make_shared<AsicErrors::ShowAllInstances::Crc>();
        }
        return crc;
    }

    if(child_yang_name == "reset")
    {
        if(reset == nullptr)
        {
            reset = std::make_shared<AsicErrors::ShowAllInstances::Reset>();
        }
        return reset;
    }

    if(child_yang_name == "barrier")
    {
        if(barrier == nullptr)
        {
            barrier = std::make_shared<AsicErrors::ShowAllInstances::Barrier>();
        }
        return barrier;
    }

    if(child_yang_name == "unexpected")
    {
        if(unexpected == nullptr)
        {
            unexpected = std::make_shared<AsicErrors::ShowAllInstances::Unexpected>();
        }
        return unexpected;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<AsicErrors::ShowAllInstances::Link>();
        }
        return link;
    }

    if(child_yang_name == "oor-thresh")
    {
        if(oor_thresh == nullptr)
        {
            oor_thresh = std::make_shared<AsicErrors::ShowAllInstances::OorThresh>();
        }
        return oor_thresh;
    }

    if(child_yang_name == "bp")
    {
        if(bp == nullptr)
        {
            bp = std::make_shared<AsicErrors::ShowAllInstances::Bp>();
        }
        return bp;
    }

    if(child_yang_name == "io")
    {
        if(io == nullptr)
        {
            io = std::make_shared<AsicErrors::ShowAllInstances::Io>();
        }
        return io;
    }

    if(child_yang_name == "ucode")
    {
        if(ucode == nullptr)
        {
            ucode = std::make_shared<AsicErrors::ShowAllInstances::Ucode>();
        }
        return ucode;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<AsicErrors::ShowAllInstances::Config>();
        }
        return config;
    }

    if(child_yang_name == "indirect")
    {
        if(indirect == nullptr)
        {
            indirect = std::make_shared<AsicErrors::ShowAllInstances::Indirect>();
        }
        return indirect;
    }

    if(child_yang_name == "nonerr")
    {
        if(nonerr == nullptr)
        {
            nonerr = std::make_shared<AsicErrors::ShowAllInstances::Nonerr>();
        }
        return nonerr;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<AsicErrors::ShowAllInstances::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<AsicErrors::ShowAllInstances::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::get_children() const
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

void AsicErrors::ShowAllInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sbe" || name == "mbe" || name == "parity" || name == "generic" || name == "crc" || name == "reset" || name == "barrier" || name == "unexpected" || name == "link" || name == "oor-thresh" || name == "bp" || name == "io" || name == "ucode" || name == "config" || name == "indirect" || name == "nonerr" || name == "summary" || name == "all")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Sbe::Sbe()
    :
    location(this, {"location_name"})
{

    yang_name = "sbe"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Sbe::~Sbe()
{
}

bool AsicErrors::ShowAllInstances::Sbe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Sbe::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Sbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Sbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Sbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Sbe::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Sbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Sbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Sbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Sbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Sbe::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "sbe"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Sbe::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Sbe::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Sbe::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Sbe::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Sbe::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Sbe::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Sbe::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Sbe::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Sbe::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Sbe::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Sbe::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Sbe::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Sbe::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Sbe::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Sbe::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Sbe::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Sbe::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Sbe::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Sbe::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Sbe::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Sbe::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Sbe::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Mbe::Mbe()
    :
    location(this, {"location_name"})
{

    yang_name = "mbe"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Mbe::~Mbe()
{
}

bool AsicErrors::ShowAllInstances::Mbe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Mbe::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Mbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mbe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Mbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Mbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Mbe::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Mbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Mbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Mbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Mbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Mbe::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "mbe"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Mbe::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Mbe::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Mbe::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Mbe::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Mbe::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Mbe::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Mbe::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Mbe::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Mbe::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Mbe::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Mbe::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Mbe::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Mbe::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Mbe::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Mbe::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Mbe::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Mbe::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Mbe::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Mbe::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Mbe::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Mbe::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Mbe::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Parity::Parity()
    :
    location(this, {"location_name"})
{

    yang_name = "parity"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Parity::~Parity()
{
}

bool AsicErrors::ShowAllInstances::Parity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Parity::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Parity::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Parity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Parity::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "parity"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Parity::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Parity::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Parity::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Parity::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Parity::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Parity::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Parity::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Parity::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Parity::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Parity::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Parity::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Parity::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Parity::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Parity::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Parity::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Parity::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Parity::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Parity::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Parity::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Parity::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Parity::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Parity::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Generic::Generic()
    :
    location(this, {"location_name"})
{

    yang_name = "generic"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Generic::~Generic()
{
}

bool AsicErrors::ShowAllInstances::Generic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Generic::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Generic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Generic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Generic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Generic::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Generic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Generic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Generic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Generic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Generic::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "generic"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Generic::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Generic::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Generic::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Generic::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Generic::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Generic::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Generic::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Generic::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Generic::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Generic::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Generic::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Generic::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Generic::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Generic::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Generic::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Generic::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Generic::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Generic::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Generic::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Generic::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Generic::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Generic::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Crc::Crc()
    :
    location(this, {"location_name"})
{

    yang_name = "crc"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Crc::~Crc()
{
}

bool AsicErrors::ShowAllInstances::Crc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Crc::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Crc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Crc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Crc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Crc::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Crc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Crc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Crc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Crc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Crc::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "crc"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Crc::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Crc::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Crc::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Crc::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Crc::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Crc::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Crc::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Crc::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Crc::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Crc::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Crc::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Crc::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Crc::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Crc::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Crc::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Crc::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Crc::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Crc::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Crc::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Crc::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Crc::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Crc::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Reset::Reset()
    :
    location(this, {"location_name"})
{

    yang_name = "reset"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Reset::~Reset()
{
}

bool AsicErrors::ShowAllInstances::Reset::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Reset::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Reset::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reset";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Reset::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Reset::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Reset::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Reset::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Reset::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Reset::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Reset::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Reset::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "reset"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Reset::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Reset::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Reset::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Reset::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Reset::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Reset::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Reset::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Reset::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Reset::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Reset::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Reset::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Reset::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Reset::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Reset::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Reset::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Reset::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Reset::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Reset::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Reset::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Reset::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Reset::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Reset::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Barrier::Barrier()
    :
    location(this, {"location_name"})
{

    yang_name = "barrier"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Barrier::~Barrier()
{
}

bool AsicErrors::ShowAllInstances::Barrier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Barrier::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Barrier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "barrier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Barrier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Barrier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Barrier::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Barrier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Barrier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Barrier::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Barrier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Barrier::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "barrier"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Barrier::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Barrier::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Barrier::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Barrier::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Barrier::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Barrier::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Barrier::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Barrier::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Barrier::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Barrier::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Barrier::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Barrier::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Barrier::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Barrier::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Barrier::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Barrier::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Barrier::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Barrier::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Barrier::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Barrier::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Barrier::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Barrier::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Unexpected::Unexpected()
    :
    location(this, {"location_name"})
{

    yang_name = "unexpected"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Unexpected::~Unexpected()
{
}

bool AsicErrors::ShowAllInstances::Unexpected::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Unexpected::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Unexpected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unexpected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Unexpected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Unexpected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Unexpected::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Unexpected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Unexpected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Unexpected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Unexpected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Unexpected::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "unexpected"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Unexpected::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Unexpected::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Unexpected::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Unexpected::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Unexpected::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Unexpected::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Unexpected::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Unexpected::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Unexpected::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Unexpected::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Unexpected::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Unexpected::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Unexpected::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Unexpected::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Unexpected::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Unexpected::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Unexpected::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Unexpected::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Unexpected::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Unexpected::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Unexpected::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Unexpected::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Link::Link()
    :
    location(this, {"location_name"})
{

    yang_name = "link"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Link::~Link()
{
}

bool AsicErrors::ShowAllInstances::Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Link::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Link::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Link::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Link::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Link::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Link::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Link::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Link::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Link::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Link::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Link::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Link::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Link::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Link::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Link::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Link::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Link::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Link::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Link::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Link::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Link::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Link::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Link::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Link::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Link::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::OorThresh::OorThresh()
    :
    location(this, {"location_name"})
{

    yang_name = "oor-thresh"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::OorThresh::~OorThresh()
{
}

bool AsicErrors::ShowAllInstances::OorThresh::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::OorThresh::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::OorThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oor-thresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::OorThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::OorThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::OorThresh::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::OorThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::OorThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::OorThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::OorThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::OorThresh::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "oor-thresh"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::OorThresh::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::OorThresh::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::OorThresh::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::OorThresh::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::OorThresh::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::OorThresh::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::OorThresh::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::OorThresh::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::OorThresh::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::OorThresh::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::OorThresh::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::OorThresh::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::OorThresh::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::OorThresh::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::OorThresh::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::OorThresh::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::OorThresh::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::OorThresh::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::OorThresh::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::OorThresh::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::OorThresh::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::OorThresh::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Bp::Bp()
    :
    location(this, {"location_name"})
{

    yang_name = "bp"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Bp::~Bp()
{
}

bool AsicErrors::ShowAllInstances::Bp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Bp::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Bp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Bp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Bp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Bp::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Bp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Bp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Bp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Bp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Bp::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "bp"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Bp::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Bp::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Bp::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Bp::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Bp::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Bp::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Bp::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Bp::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Bp::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Bp::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Bp::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Bp::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Bp::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Bp::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Bp::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Bp::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Bp::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Bp::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Bp::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Bp::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Bp::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Bp::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Io::Io()
    :
    location(this, {"location_name"})
{

    yang_name = "io"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Io::~Io()
{
}

bool AsicErrors::ShowAllInstances::Io::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Io::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Io::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "io";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Io::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Io::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Io::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Io::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Io::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Io::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Io::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Io::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "io"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Io::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Io::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Io::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Io::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Io::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Io::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Io::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Io::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Io::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Io::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Io::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Io::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Io::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Io::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Io::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Io::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Io::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Io::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Io::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Io::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Io::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Io::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Ucode::Ucode()
    :
    location(this, {"location_name"})
{

    yang_name = "ucode"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Ucode::~Ucode()
{
}

bool AsicErrors::ShowAllInstances::Ucode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Ucode::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Ucode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Ucode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Ucode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Ucode::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Ucode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Ucode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Ucode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Ucode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Ucode::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "ucode"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Ucode::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Ucode::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Ucode::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Ucode::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Ucode::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Ucode::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Ucode::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Ucode::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Ucode::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Ucode::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Ucode::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Ucode::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Ucode::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Ucode::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Ucode::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Ucode::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Ucode::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Ucode::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Ucode::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Ucode::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Ucode::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Ucode::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Config::Config()
    :
    location(this, {"location_name"})
{

    yang_name = "config"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Config::~Config()
{
}

bool AsicErrors::ShowAllInstances::Config::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Config::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Config::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Config::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Config::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Config::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Config::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Config::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Config::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Config::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Config::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Config::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Config::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Config::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Config::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Config::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Config::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Config::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Config::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Config::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Config::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Config::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Config::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Config::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Config::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Config::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Indirect::Indirect()
    :
    location(this, {"location_name"})
{

    yang_name = "indirect"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Indirect::~Indirect()
{
}

bool AsicErrors::ShowAllInstances::Indirect::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Indirect::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Indirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Indirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Indirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Indirect::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Indirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Indirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Indirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Indirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Indirect::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "indirect"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Indirect::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Indirect::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Indirect::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Indirect::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Indirect::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Indirect::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Indirect::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Indirect::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Indirect::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Indirect::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Indirect::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Indirect::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Indirect::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Indirect::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Indirect::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Indirect::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Indirect::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Indirect::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Indirect::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Indirect::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Indirect::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Indirect::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Nonerr::Nonerr()
    :
    location(this, {"location_name"})
{

    yang_name = "nonerr"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Nonerr::~Nonerr()
{
}

bool AsicErrors::ShowAllInstances::Nonerr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Nonerr::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Nonerr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nonerr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Nonerr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Nonerr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Nonerr::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Nonerr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Nonerr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Nonerr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Nonerr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Nonerr::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "nonerr"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Nonerr::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Nonerr::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Nonerr::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Nonerr::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Nonerr::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Nonerr::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Nonerr::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Nonerr::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Nonerr::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Nonerr::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Nonerr::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Nonerr::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Nonerr::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Nonerr::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Nonerr::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Nonerr::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Nonerr::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Nonerr::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Nonerr::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Nonerr::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Nonerr::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Nonerr::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Summary::Summary()
    :
    location(this, {"location_name"})
{

    yang_name = "summary"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Summary::~Summary()
{
}

bool AsicErrors::ShowAllInstances::Summary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::Summary::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Summary::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Summary::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Summary::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::Summary::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::Summary::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::Summary::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Summary::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Summary::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::Summary::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Summary::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::Summary::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Summary::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Summary::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::Summary::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::Summary::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::Summary::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::Summary::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::Summary::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::Summary::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::Summary::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::Summary::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::Summary::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::Summary::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::Summary::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::All::All()
    :
    location(this, {"location_name"})
{

    yang_name = "all"; yang_parent_name = "show-all-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::All::~All()
{
}

bool AsicErrors::ShowAllInstances::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool AsicErrors::ShowAllInstances::All::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AsicErrors::ShowAllInstances::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::All::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AsicErrors::ShowAllInstances::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AsicErrors::ShowAllInstances::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::All::Location::Location()
    :
    location_name{YType::str, "location-name"}
        ,
    log_lst(this, {})
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::All::Location::~Location()
{
}

bool AsicErrors::ShowAllInstances::All::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool AsicErrors::ShowAllInstances::All::Location::has_operation() const
{
    for (std::size_t index=0; index<log_lst.len(); index++)
    {
        if(log_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string AsicErrors::ShowAllInstances::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-lst")
    {
        auto c = std::make_shared<AsicErrors::ShowAllInstances::All::Location::LogLst>();
        c->parent = this;
        log_lst.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : log_lst.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AsicErrors::ShowAllInstances::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location-name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location-name")
    {
        location_name.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-lst" || name == "location-name")
        return true;
    return false;
}

AsicErrors::ShowAllInstances::All::Location::LogLst::LogLst()
    :
    log_line{YType::str, "log-line"}
{

    yang_name = "log-lst"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

AsicErrors::ShowAllInstances::All::Location::LogLst::~LogLst()
{
}

bool AsicErrors::ShowAllInstances::All::Location::LogLst::has_data() const
{
    if (is_presence_container) return true;
    return log_line.is_set;
}

bool AsicErrors::ShowAllInstances::All::Location::LogLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_line.yfilter);
}

std::string AsicErrors::ShowAllInstances::All::Location::LogLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-lst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AsicErrors::ShowAllInstances::All::Location::LogLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_line.is_set || is_set(log_line.yfilter)) leaf_name_data.push_back(log_line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AsicErrors::ShowAllInstances::All::Location::LogLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AsicErrors::ShowAllInstances::All::Location::LogLst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AsicErrors::ShowAllInstances::All::Location::LogLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-line")
    {
        log_line = value;
        log_line.value_namespace = name_space;
        log_line.value_namespace_prefix = name_space_prefix;
    }
}

void AsicErrors::ShowAllInstances::All::Location::LogLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-line")
    {
        log_line.yfilter = yfilter;
    }
}

bool AsicErrors::ShowAllInstances::All::Location::LogLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-line")
        return true;
    return false;
}


}
}

