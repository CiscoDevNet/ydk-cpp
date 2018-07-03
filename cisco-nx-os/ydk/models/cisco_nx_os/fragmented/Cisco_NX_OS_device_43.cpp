
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_43.hpp"
#include "Cisco_NX_OS_device_44.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    lsa_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems>())
    , rt_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems>())
{
    lsa_items->parent = this;
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (lsa_items !=  nullptr && lsa_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (lsa_items !=  nullptr && lsa_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-items")
    {
        if(lsa_items == nullptr)
        {
            lsa_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems>();
        }
        return lsa_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_items != nullptr)
    {
        children["lsa-items"] = lsa_items;
    }

    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-items" || name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaItems()
    :
    lsarec_list(this, {"type", "id", "advrtr"})
{

    yang_name = "lsa-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::~LsaItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::has_operation() const
{
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LsaRec-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList>();
        c->parent = this;
        lsarec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lsarec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LsaRec-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::LsaRecList()
    :
    type{YType::enumeration, "type"},
    id{YType::str, "id"},
    advrtr{YType::str, "advRtr"},
    name{YType::str, "name"},
    seq{YType::uint32, "seq"},
    age{YType::uint32, "age"},
    arrivalts{YType::str, "arrivalTs"},
    cksum{YType::uint32, "cksum"},
    advert{YType::str, "advert"}
{

    yang_name = "LsaRec-list"; yang_parent_name = "lsa-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::~LsaRecList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| advrtr.is_set
	|| name.is_set
	|| seq.is_set
	|| age.is_set
	|| arrivalts.is_set
	|| cksum.is_set
	|| advert.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(advrtr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(arrivalts.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| ydk::is_set(advert.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LsaRec-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(advrtr, "advRtr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (advrtr.is_set || is_set(advrtr.yfilter)) leaf_name_data.push_back(advrtr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (arrivalts.is_set || is_set(arrivalts.yfilter)) leaf_name_data.push_back(arrivalts.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());
    if (advert.is_set || is_set(advert.yfilter)) leaf_name_data.push_back(advert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advRtr")
    {
        advrtr = value;
        advrtr.value_namespace = name_space;
        advrtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts = value;
        arrivalts.value_namespace = name_space;
        arrivalts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert")
    {
        advert = value;
        advert.value_namespace = name_space;
        advert.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "advRtr")
    {
        advrtr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
    if(value_path == "advert")
    {
        advert.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::LsaItems::LsaRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "id" || name == "advRtr" || name == "name" || name == "seq" || name == "age" || name == "arrivalTs" || name == "cksum" || name == "advert")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"},
    patht{YType::enumeration, "pathT"},
    area{YType::str, "area"},
    flags{YType::str, "flags"},
    ucastcost{YType::uint16, "ucastCost"},
    mcastcost{YType::uint16, "mcastCost"},
    tag{YType::uint32, "tag"},
    dist{YType::uint8, "dist"}
        ,
    ucnh_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems>())
    , mcnh_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems>())
{
    ucnh_items->parent = this;
    mcnh_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| patht.is_set
	|| area.is_set
	|| flags.is_set
	|| ucastcost.is_set
	|| mcastcost.is_set
	|| tag.is_set
	|| dist.is_set
	|| (ucnh_items !=  nullptr && ucnh_items->has_data())
	|| (mcnh_items !=  nullptr && mcnh_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(patht.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ucastcost.yfilter)
	|| ydk::is_set(mcastcost.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| (ucnh_items !=  nullptr && ucnh_items->has_operation())
	|| (mcnh_items !=  nullptr && mcnh_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (patht.is_set || is_set(patht.yfilter)) leaf_name_data.push_back(patht.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (ucastcost.is_set || is_set(ucastcost.yfilter)) leaf_name_data.push_back(ucastcost.get_name_leafdata());
    if (mcastcost.is_set || is_set(mcastcost.yfilter)) leaf_name_data.push_back(mcastcost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ucnh-items")
    {
        if(ucnh_items == nullptr)
        {
            ucnh_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems>();
        }
        return ucnh_items;
    }

    if(child_yang_name == "mcnh-items")
    {
        if(mcnh_items == nullptr)
        {
            mcnh_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems>();
        }
        return mcnh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ucnh_items != nullptr)
    {
        children["ucnh-items"] = ucnh_items;
    }

    if(mcnh_items != nullptr)
    {
        children["mcnh-items"] = mcnh_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathT")
    {
        patht = value;
        patht.value_namespace = name_space;
        patht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastCost")
    {
        ucastcost = value;
        ucastcost.value_namespace = name_space;
        ucastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastCost")
    {
        mcastcost = value;
        mcastcost.value_namespace = name_space;
        mcastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pathT")
    {
        patht.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ucastCost")
    {
        ucastcost.yfilter = yfilter;
    }
    if(value_path == "mcastCost")
    {
        mcastcost.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ucnh-items" || name == "mcnh-items" || name == "pfx" || name == "name" || name == "pathT" || name == "area" || name == "flags" || name == "ucastCost" || name == "mcastCost" || name == "tag" || name == "dist")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcnhItems()
    :
    ucnexthop_list(this, {"if_", "addr"})
{

    yang_name = "ucnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::~UcnhItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_operation() const
{
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UcNexthop-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList>();
        c->parent = this;
        ucnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ucnexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UcNexthop-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::UcNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "UcNexthop-list"; yang_parent_name = "ucnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::~UcNexthopList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UcNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McnhItems()
    :
    mcnexthop_list(this, {"if_", "addr"})
{

    yang_name = "mcnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::~McnhItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::has_operation() const
{
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McNexthop-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList>();
        c->parent = this;
        mcnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mcnexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McNexthop-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::McNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "McNexthop-list"; yang_parent_name = "mcnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::~McNexthopList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomafItems()
    :
    domaf_list(this, {"type"})
{

    yang_name = "domaf-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::~DomafItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::has_operation() const
{
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domaf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomAf-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList>();
        c->parent = this;
        domaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : domaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomAf-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DomAfList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    defrtleak_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems>())
    , interleak_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems>())
    , leakctrl_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems>())
    , extrtsum_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems>())
{
    defrtleak_items->parent = this;
    interleak_items->parent = this;
    leakctrl_items->parent = this;
    extrtsum_items->parent = this;

    yang_name = "DomAf-list"; yang_parent_name = "domaf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::~DomAfList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_data())
	|| (interleak_items !=  nullptr && interleak_items->has_data())
	|| (leakctrl_items !=  nullptr && leakctrl_items->has_data())
	|| (extrtsum_items !=  nullptr && extrtsum_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (defrtleak_items !=  nullptr && defrtleak_items->has_operation())
	|| (interleak_items !=  nullptr && interleak_items->has_operation())
	|| (leakctrl_items !=  nullptr && leakctrl_items->has_operation())
	|| (extrtsum_items !=  nullptr && extrtsum_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomAf-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "defrtleak-items")
    {
        if(defrtleak_items == nullptr)
        {
            defrtleak_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems>();
        }
        return defrtleak_items;
    }

    if(child_yang_name == "interleak-items")
    {
        if(interleak_items == nullptr)
        {
            interleak_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems>();
        }
        return interleak_items;
    }

    if(child_yang_name == "leakctrl-items")
    {
        if(leakctrl_items == nullptr)
        {
            leakctrl_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems>();
        }
        return leakctrl_items;
    }

    if(child_yang_name == "extrtsum-items")
    {
        if(extrtsum_items == nullptr)
        {
            extrtsum_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems>();
        }
        return extrtsum_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(defrtleak_items != nullptr)
    {
        children["defrtleak-items"] = defrtleak_items;
    }

    if(interleak_items != nullptr)
    {
        children["interleak-items"] = interleak_items;
    }

    if(leakctrl_items != nullptr)
    {
        children["leakctrl-items"] = leakctrl_items;
    }

    if(extrtsum_items != nullptr)
    {
        children["extrtsum-items"] = extrtsum_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defrtleak-items" || name == "interleak-items" || name == "leakctrl-items" || name == "extrtsum-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems::DefrtleakItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    always{YType::enumeration, "always"}
{

    yang_name = "defrtleak-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems::~DefrtleakItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| always.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defrtleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::DefrtleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "always")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterleakItems()
    :
    interleakp_list(this, {"proto", "inst", "asn"})
{

    yang_name = "interleak-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::~InterleakItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::has_operation() const
{
    for (std::size_t index=0; index<interleakp_list.len(); index++)
    {
        if(interleakp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interleak-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InterLeakP-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList>();
        c->parent = this;
        interleakp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interleakp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InterLeakP-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList::InterLeakPList()
    :
    proto{YType::enumeration, "proto"},
    inst{YType::str, "inst"},
    asn{YType::str, "asn"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    scope{YType::enumeration, "scope"},
    rtmap{YType::str, "rtMap"},
    always{YType::enumeration, "always"}
{

    yang_name = "InterLeakP-list"; yang_parent_name = "interleak-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList::~InterLeakPList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| inst.is_set
	|| asn.is_set
	|| name.is_set
	|| descr.is_set
	|| scope.is_set
	|| rtmap.is_set
	|| always.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(inst.yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InterLeakP-list";
    ADD_KEY_TOKEN(proto, "proto");
    ADD_KEY_TOKEN(inst, "inst");
    ADD_KEY_TOKEN(asn, "asn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (inst.is_set || is_set(inst.yfilter)) leaf_name_data.push_back(inst.get_name_leafdata());
    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inst")
    {
        inst = value;
        inst.value_namespace = name_space;
        inst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "inst")
    {
        inst.yfilter = yfilter;
    }
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::InterleakItems::InterLeakPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "inst" || name == "asn" || name == "name" || name == "descr" || name == "scope" || name == "rtMap" || name == "always")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems::LeakctrlItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::enumeration, "ctrl"},
    max{YType::uint16, "max"},
    thresh{YType::uint8, "thresh"},
    retries{YType::uint16, "retries"},
    duration{YType::uint16, "duration"}
{

    yang_name = "leakctrl-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems::~LeakctrlItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| max.is_set
	|| thresh.is_set
	|| retries.is_set
	|| duration.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(thresh.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leakctrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (thresh.is_set || is_set(thresh.yfilter)) leaf_name_data.push_back(thresh.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thresh")
    {
        thresh = value;
        thresh.value_namespace = name_space;
        thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "thresh")
    {
        thresh.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::LeakctrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ctrl" || name == "max" || name == "thresh" || name == "retries" || name == "duration")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtrtsumItems()
    :
    extrtsum_list(this, {"addr"})
{

    yang_name = "extrtsum-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::~ExtrtsumItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extrtsum_list.len(); index++)
    {
        if(extrtsum_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::has_operation() const
{
    for (std::size_t index=0; index<extrtsum_list.len(); index++)
    {
        if(extrtsum_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extrtsum-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtRtSum-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList>();
        c->parent = this;
        extrtsum_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extrtsum_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtRtSum-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList::ExtRtSumList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"},
    comprtcnt{YType::uint32, "compRtCnt"},
    opercost{YType::uint32, "operCost"},
    tag{YType::uint32, "tag"}
{

    yang_name = "ExtRtSum-list"; yang_parent_name = "extrtsum-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList::~ExtRtSumList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| comprtcnt.is_set
	|| opercost.is_set
	|| tag.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(comprtcnt.yfilter)
	|| ydk::is_set(opercost.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtRtSum-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (comprtcnt.is_set || is_set(comprtcnt.yfilter)) leaf_name_data.push_back(comprtcnt.get_name_leafdata());
    if (opercost.is_set || is_set(opercost.yfilter)) leaf_name_data.push_back(opercost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compRtCnt")
    {
        comprtcnt = value;
        comprtcnt.value_namespace = name_space;
        comprtcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCost")
    {
        opercost = value;
        opercost.value_namespace = name_space;
        opercost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "compRtCnt")
    {
        comprtcnt.yfilter = yfilter;
    }
    if(value_path == "operCost")
    {
        opercost.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomafItems::DomAfList::ExtrtsumItems::ExtRtSumList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "descr" || name == "ctrl" || name == "compRtCnt" || name == "operCost" || name == "tag")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems::SpfcompItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    initintvl{YType::uint32, "initIntvl"},
    holdintvl{YType::uint32, "holdIntvl"},
    maxintvl{YType::uint32, "maxIntvl"}
{

    yang_name = "spfcomp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems::~SpfcompItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| initintvl.is_set
	|| holdintvl.is_set
	|| maxintvl.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(initintvl.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(maxintvl.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfcomp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (initintvl.is_set || is_set(initintvl.yfilter)) leaf_name_data.push_back(initintvl.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (maxintvl.is_set || is_set(maxintvl.yfilter)) leaf_name_data.push_back(maxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initIntvl")
    {
        initintvl = value;
        initintvl.value_namespace = name_space;
        initintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl = value;
        maxintvl.value_namespace = name_space;
        maxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "initIntvl")
    {
        initintvl.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::SpfcompItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "initIntvl" || name == "holdIntvl" || name == "maxIntvl")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems::LsactrlItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    gppacingintvl{YType::uint16, "gpPacingIntvl"},
    arrivalintvl{YType::uint32, "arrivalIntvl"},
    startintvl{YType::uint32, "startIntvl"},
    holdintvl{YType::uint32, "holdIntvl"},
    maxintvl{YType::uint32, "maxIntvl"}
{

    yang_name = "lsactrl-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems::~LsactrlItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| gppacingintvl.is_set
	|| arrivalintvl.is_set
	|| startintvl.is_set
	|| holdintvl.is_set
	|| maxintvl.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(gppacingintvl.yfilter)
	|| ydk::is_set(arrivalintvl.yfilter)
	|| ydk::is_set(startintvl.yfilter)
	|| ydk::is_set(holdintvl.yfilter)
	|| ydk::is_set(maxintvl.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsactrl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (gppacingintvl.is_set || is_set(gppacingintvl.yfilter)) leaf_name_data.push_back(gppacingintvl.get_name_leafdata());
    if (arrivalintvl.is_set || is_set(arrivalintvl.yfilter)) leaf_name_data.push_back(arrivalintvl.get_name_leafdata());
    if (startintvl.is_set || is_set(startintvl.yfilter)) leaf_name_data.push_back(startintvl.get_name_leafdata());
    if (holdintvl.is_set || is_set(holdintvl.yfilter)) leaf_name_data.push_back(holdintvl.get_name_leafdata());
    if (maxintvl.is_set || is_set(maxintvl.yfilter)) leaf_name_data.push_back(maxintvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gpPacingIntvl")
    {
        gppacingintvl = value;
        gppacingintvl.value_namespace = name_space;
        gppacingintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arrivalIntvl")
    {
        arrivalintvl = value;
        arrivalintvl.value_namespace = name_space;
        arrivalintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startIntvl")
    {
        startintvl = value;
        startintvl.value_namespace = name_space;
        startintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl = value;
        holdintvl.value_namespace = name_space;
        holdintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl = value;
        maxintvl.value_namespace = name_space;
        maxintvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "gpPacingIntvl")
    {
        gppacingintvl.yfilter = yfilter;
    }
    if(value_path == "arrivalIntvl")
    {
        arrivalintvl.yfilter = yfilter;
    }
    if(value_path == "startIntvl")
    {
        startintvl.yfilter = yfilter;
    }
    if(value_path == "holdIntvl")
    {
        holdintvl.yfilter = yfilter;
    }
    if(value_path == "maxIntvl")
    {
        maxintvl.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::LsactrlItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "gpPacingIntvl" || name == "arrivalIntvl" || name == "startIntvl" || name == "holdIntvl" || name == "maxIntvl")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems::DomstatsItems()
    :
    ifcnt{YType::uint32, "ifCnt"},
    areacnt{YType::uint32, "areaCnt"},
    stubareacnt{YType::uint32, "stubAreaCnt"},
    nssaareacnt{YType::uint32, "nssaAreaCnt"},
    extareacnt{YType::uint32, "extAreaCnt"},
    activestubareacnt{YType::uint32, "activeStubAreaCnt"},
    activenssaareacnt{YType::uint32, "activeNssaAreaCnt"},
    activeextareacnt{YType::uint32, "activeExtAreaCnt"},
    activeareacnt{YType::uint32, "activeAreaCnt"},
    laststatsclearts{YType::str, "lastStatsClearTs"},
    peercnt{YType::uint32, "peerCnt"},
    extlsacnt{YType::uint32, "extLsaCnt"},
    opaqueaslsacnt{YType::uint32, "opaqueAsLsaCnt"},
    totalaslsacnt{YType::uint32, "totalAsLsaCnt"},
    newlsarxcnt{YType::uint32, "newLsaRxCnt"},
    newlsatxcnt{YType::uint32, "newLsaTxCnt"},
    areabdrrtr{YType::uint8, "areaBdrRtr"},
    asbdrrtr{YType::uint8, "asBdrRtr"}
{

    yang_name = "domstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems::~DomstatsItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return ifcnt.is_set
	|| areacnt.is_set
	|| stubareacnt.is_set
	|| nssaareacnt.is_set
	|| extareacnt.is_set
	|| activestubareacnt.is_set
	|| activenssaareacnt.is_set
	|| activeextareacnt.is_set
	|| activeareacnt.is_set
	|| laststatsclearts.is_set
	|| peercnt.is_set
	|| extlsacnt.is_set
	|| opaqueaslsacnt.is_set
	|| totalaslsacnt.is_set
	|| newlsarxcnt.is_set
	|| newlsatxcnt.is_set
	|| areabdrrtr.is_set
	|| asbdrrtr.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifcnt.yfilter)
	|| ydk::is_set(areacnt.yfilter)
	|| ydk::is_set(stubareacnt.yfilter)
	|| ydk::is_set(nssaareacnt.yfilter)
	|| ydk::is_set(extareacnt.yfilter)
	|| ydk::is_set(activestubareacnt.yfilter)
	|| ydk::is_set(activenssaareacnt.yfilter)
	|| ydk::is_set(activeextareacnt.yfilter)
	|| ydk::is_set(activeareacnt.yfilter)
	|| ydk::is_set(laststatsclearts.yfilter)
	|| ydk::is_set(peercnt.yfilter)
	|| ydk::is_set(extlsacnt.yfilter)
	|| ydk::is_set(opaqueaslsacnt.yfilter)
	|| ydk::is_set(totalaslsacnt.yfilter)
	|| ydk::is_set(newlsarxcnt.yfilter)
	|| ydk::is_set(newlsatxcnt.yfilter)
	|| ydk::is_set(areabdrrtr.yfilter)
	|| ydk::is_set(asbdrrtr.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifcnt.is_set || is_set(ifcnt.yfilter)) leaf_name_data.push_back(ifcnt.get_name_leafdata());
    if (areacnt.is_set || is_set(areacnt.yfilter)) leaf_name_data.push_back(areacnt.get_name_leafdata());
    if (stubareacnt.is_set || is_set(stubareacnt.yfilter)) leaf_name_data.push_back(stubareacnt.get_name_leafdata());
    if (nssaareacnt.is_set || is_set(nssaareacnt.yfilter)) leaf_name_data.push_back(nssaareacnt.get_name_leafdata());
    if (extareacnt.is_set || is_set(extareacnt.yfilter)) leaf_name_data.push_back(extareacnt.get_name_leafdata());
    if (activestubareacnt.is_set || is_set(activestubareacnt.yfilter)) leaf_name_data.push_back(activestubareacnt.get_name_leafdata());
    if (activenssaareacnt.is_set || is_set(activenssaareacnt.yfilter)) leaf_name_data.push_back(activenssaareacnt.get_name_leafdata());
    if (activeextareacnt.is_set || is_set(activeextareacnt.yfilter)) leaf_name_data.push_back(activeextareacnt.get_name_leafdata());
    if (activeareacnt.is_set || is_set(activeareacnt.yfilter)) leaf_name_data.push_back(activeareacnt.get_name_leafdata());
    if (laststatsclearts.is_set || is_set(laststatsclearts.yfilter)) leaf_name_data.push_back(laststatsclearts.get_name_leafdata());
    if (peercnt.is_set || is_set(peercnt.yfilter)) leaf_name_data.push_back(peercnt.get_name_leafdata());
    if (extlsacnt.is_set || is_set(extlsacnt.yfilter)) leaf_name_data.push_back(extlsacnt.get_name_leafdata());
    if (opaqueaslsacnt.is_set || is_set(opaqueaslsacnt.yfilter)) leaf_name_data.push_back(opaqueaslsacnt.get_name_leafdata());
    if (totalaslsacnt.is_set || is_set(totalaslsacnt.yfilter)) leaf_name_data.push_back(totalaslsacnt.get_name_leafdata());
    if (newlsarxcnt.is_set || is_set(newlsarxcnt.yfilter)) leaf_name_data.push_back(newlsarxcnt.get_name_leafdata());
    if (newlsatxcnt.is_set || is_set(newlsatxcnt.yfilter)) leaf_name_data.push_back(newlsatxcnt.get_name_leafdata());
    if (areabdrrtr.is_set || is_set(areabdrrtr.yfilter)) leaf_name_data.push_back(areabdrrtr.get_name_leafdata());
    if (asbdrrtr.is_set || is_set(asbdrrtr.yfilter)) leaf_name_data.push_back(asbdrrtr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifCnt")
    {
        ifcnt = value;
        ifcnt.value_namespace = name_space;
        ifcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "areaCnt")
    {
        areacnt = value;
        areacnt.value_namespace = name_space;
        areacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stubAreaCnt")
    {
        stubareacnt = value;
        stubareacnt.value_namespace = name_space;
        stubareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssaAreaCnt")
    {
        nssaareacnt = value;
        nssaareacnt.value_namespace = name_space;
        nssaareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extAreaCnt")
    {
        extareacnt = value;
        extareacnt.value_namespace = name_space;
        extareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeStubAreaCnt")
    {
        activestubareacnt = value;
        activestubareacnt.value_namespace = name_space;
        activestubareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeNssaAreaCnt")
    {
        activenssaareacnt = value;
        activenssaareacnt.value_namespace = name_space;
        activenssaareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeExtAreaCnt")
    {
        activeextareacnt = value;
        activeextareacnt.value_namespace = name_space;
        activeextareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activeAreaCnt")
    {
        activeareacnt = value;
        activeareacnt.value_namespace = name_space;
        activeareacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts = value;
        laststatsclearts.value_namespace = name_space;
        laststatsclearts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerCnt")
    {
        peercnt = value;
        peercnt.value_namespace = name_space;
        peercnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extLsaCnt")
    {
        extlsacnt = value;
        extlsacnt.value_namespace = name_space;
        extlsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaqueAsLsaCnt")
    {
        opaqueaslsacnt = value;
        opaqueaslsacnt.value_namespace = name_space;
        opaqueaslsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalAsLsaCnt")
    {
        totalaslsacnt = value;
        totalaslsacnt.value_namespace = name_space;
        totalaslsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "newLsaRxCnt")
    {
        newlsarxcnt = value;
        newlsarxcnt.value_namespace = name_space;
        newlsarxcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "newLsaTxCnt")
    {
        newlsatxcnt = value;
        newlsatxcnt.value_namespace = name_space;
        newlsatxcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "areaBdrRtr")
    {
        areabdrrtr = value;
        areabdrrtr.value_namespace = name_space;
        areabdrrtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asBdrRtr")
    {
        asbdrrtr = value;
        asbdrrtr.value_namespace = name_space;
        asbdrrtr.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifCnt")
    {
        ifcnt.yfilter = yfilter;
    }
    if(value_path == "areaCnt")
    {
        areacnt.yfilter = yfilter;
    }
    if(value_path == "stubAreaCnt")
    {
        stubareacnt.yfilter = yfilter;
    }
    if(value_path == "nssaAreaCnt")
    {
        nssaareacnt.yfilter = yfilter;
    }
    if(value_path == "extAreaCnt")
    {
        extareacnt.yfilter = yfilter;
    }
    if(value_path == "activeStubAreaCnt")
    {
        activestubareacnt.yfilter = yfilter;
    }
    if(value_path == "activeNssaAreaCnt")
    {
        activenssaareacnt.yfilter = yfilter;
    }
    if(value_path == "activeExtAreaCnt")
    {
        activeextareacnt.yfilter = yfilter;
    }
    if(value_path == "activeAreaCnt")
    {
        activeareacnt.yfilter = yfilter;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts.yfilter = yfilter;
    }
    if(value_path == "peerCnt")
    {
        peercnt.yfilter = yfilter;
    }
    if(value_path == "extLsaCnt")
    {
        extlsacnt.yfilter = yfilter;
    }
    if(value_path == "opaqueAsLsaCnt")
    {
        opaqueaslsacnt.yfilter = yfilter;
    }
    if(value_path == "totalAsLsaCnt")
    {
        totalaslsacnt.yfilter = yfilter;
    }
    if(value_path == "newLsaRxCnt")
    {
        newlsarxcnt.yfilter = yfilter;
    }
    if(value_path == "newLsaTxCnt")
    {
        newlsatxcnt.yfilter = yfilter;
    }
    if(value_path == "areaBdrRtr")
    {
        areabdrrtr.yfilter = yfilter;
    }
    if(value_path == "asBdrRtr")
    {
        asbdrrtr.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::DomstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifCnt" || name == "areaCnt" || name == "stubAreaCnt" || name == "nssaAreaCnt" || name == "extAreaCnt" || name == "activeStubAreaCnt" || name == "activeNssaAreaCnt" || name == "activeExtAreaCnt" || name == "activeAreaCnt" || name == "lastStatsClearTs" || name == "peerCnt" || name == "extLsaCnt" || name == "opaqueAsLsaCnt" || name == "totalAsLsaCnt" || name == "newLsaRxCnt" || name == "newLsaTxCnt" || name == "areaBdrRtr" || name == "asBdrRtr")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems::GrItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::enumeration, "ctrl"},
    helper{YType::boolean, "helper"},
    graceperiod{YType::uint32, "gracePeriod"},
    restartstatus{YType::enumeration, "restartStatus"},
    restartage{YType::uint32, "restartAge"},
    restartexitreason{YType::enumeration, "restartExitReason"}
{

    yang_name = "gr-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems::~GrItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| helper.is_set
	|| graceperiod.is_set
	|| restartstatus.is_set
	|| restartage.is_set
	|| restartexitreason.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(helper.yfilter)
	|| ydk::is_set(graceperiod.yfilter)
	|| ydk::is_set(restartstatus.yfilter)
	|| ydk::is_set(restartage.yfilter)
	|| ydk::is_set(restartexitreason.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (helper.is_set || is_set(helper.yfilter)) leaf_name_data.push_back(helper.get_name_leafdata());
    if (graceperiod.is_set || is_set(graceperiod.yfilter)) leaf_name_data.push_back(graceperiod.get_name_leafdata());
    if (restartstatus.is_set || is_set(restartstatus.yfilter)) leaf_name_data.push_back(restartstatus.get_name_leafdata());
    if (restartage.is_set || is_set(restartage.yfilter)) leaf_name_data.push_back(restartage.get_name_leafdata());
    if (restartexitreason.is_set || is_set(restartexitreason.yfilter)) leaf_name_data.push_back(restartexitreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper")
    {
        helper = value;
        helper.value_namespace = name_space;
        helper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gracePeriod")
    {
        graceperiod = value;
        graceperiod.value_namespace = name_space;
        graceperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartStatus")
    {
        restartstatus = value;
        restartstatus.value_namespace = name_space;
        restartstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartAge")
    {
        restartage = value;
        restartage.value_namespace = name_space;
        restartage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restartExitReason")
    {
        restartexitreason = value;
        restartexitreason.value_namespace = name_space;
        restartexitreason.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "helper")
    {
        helper.yfilter = yfilter;
    }
    if(value_path == "gracePeriod")
    {
        graceperiod.yfilter = yfilter;
    }
    if(value_path == "restartStatus")
    {
        restartstatus.yfilter = yfilter;
    }
    if(value_path == "restartAge")
    {
        restartage.yfilter = yfilter;
    }
    if(value_path == "restartExitReason")
    {
        restartexitreason.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "ctrl" || name == "helper" || name == "gracePeriod" || name == "restartStatus" || name == "restartAge" || name == "restartExitReason")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    passivectrl{YType::enumeration, "passiveCtrl"},
    bfdctrl{YType::enumeration, "bfdCtrl"},
    nwt{YType::enumeration, "nwT"},
    prio{YType::uint8, "prio"},
    area{YType::str, "area"},
    advertisesecondaries{YType::boolean, "advertiseSecondaries"},
    operst{YType::enumeration, "operSt"},
    failstqual{YType::str, "failStQual"},
    type{YType::enumeration, "type"},
    flags{YType::str, "flags"},
    addr{YType::str, "addr"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    drid{YType::str, "drId"},
    bdrid{YType::str, "bdrId"},
    lsacksumsum{YType::uint32, "lsaCksumSum"},
    opercost{YType::uint16, "operCost"},
    operdeadintvl{YType::uint16, "operDeadIntvl"},
    hellointvl{YType::uint16, "helloIntvl"},
    deadintvl{YType::uint16, "deadIntvl"},
    rexmitintvl{YType::uint16, "rexmitIntvl"},
    xmitdelay{YType::uint16, "xmitDelay"},
    cost{YType::uint16, "cost"}
        ,
    adj_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems>())
    , db_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems>())
    , ifstats_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems>())
    , trstats_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems>())
    , rtospfifdeftoospfv3if_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems>())
    , rtvrfmbr_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    adj_items->parent = this;
    db_items->parent = this;
    ifstats_items->parent = this;
    trstats_items->parent = this;
    rtospfifdeftoospfv3if_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| passivectrl.is_set
	|| bfdctrl.is_set
	|| nwt.is_set
	|| prio.is_set
	|| area.is_set
	|| advertisesecondaries.is_set
	|| operst.is_set
	|| failstqual.is_set
	|| type.is_set
	|| flags.is_set
	|| addr.is_set
	|| dr.is_set
	|| bdr.is_set
	|| drid.is_set
	|| bdrid.is_set
	|| lsacksumsum.is_set
	|| opercost.is_set
	|| operdeadintvl.is_set
	|| hellointvl.is_set
	|| deadintvl.is_set
	|| rexmitintvl.is_set
	|| xmitdelay.is_set
	|| cost.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data())
	|| (rtospfifdeftoospfv3if_items !=  nullptr && rtospfifdeftoospfv3if_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(passivectrl.yfilter)
	|| ydk::is_set(bfdctrl.yfilter)
	|| ydk::is_set(nwt.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(advertisesecondaries.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(failstqual.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(drid.yfilter)
	|| ydk::is_set(bdrid.yfilter)
	|| ydk::is_set(lsacksumsum.yfilter)
	|| ydk::is_set(opercost.yfilter)
	|| ydk::is_set(operdeadintvl.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(deadintvl.yfilter)
	|| ydk::is_set(rexmitintvl.yfilter)
	|| ydk::is_set(xmitdelay.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation())
	|| (rtospfifdeftoospfv3if_items !=  nullptr && rtospfifdeftoospfv3if_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (passivectrl.is_set || is_set(passivectrl.yfilter)) leaf_name_data.push_back(passivectrl.get_name_leafdata());
    if (bfdctrl.is_set || is_set(bfdctrl.yfilter)) leaf_name_data.push_back(bfdctrl.get_name_leafdata());
    if (nwt.is_set || is_set(nwt.yfilter)) leaf_name_data.push_back(nwt.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (advertisesecondaries.is_set || is_set(advertisesecondaries.yfilter)) leaf_name_data.push_back(advertisesecondaries.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (failstqual.is_set || is_set(failstqual.yfilter)) leaf_name_data.push_back(failstqual.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (drid.is_set || is_set(drid.yfilter)) leaf_name_data.push_back(drid.get_name_leafdata());
    if (bdrid.is_set || is_set(bdrid.yfilter)) leaf_name_data.push_back(bdrid.get_name_leafdata());
    if (lsacksumsum.is_set || is_set(lsacksumsum.yfilter)) leaf_name_data.push_back(lsacksumsum.get_name_leafdata());
    if (opercost.is_set || is_set(opercost.yfilter)) leaf_name_data.push_back(opercost.get_name_leafdata());
    if (operdeadintvl.is_set || is_set(operdeadintvl.yfilter)) leaf_name_data.push_back(operdeadintvl.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (deadintvl.is_set || is_set(deadintvl.yfilter)) leaf_name_data.push_back(deadintvl.get_name_leafdata());
    if (rexmitintvl.is_set || is_set(rexmitintvl.yfilter)) leaf_name_data.push_back(rexmitintvl.get_name_leafdata());
    if (xmitdelay.is_set || is_set(xmitdelay.yfilter)) leaf_name_data.push_back(xmitdelay.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems>();
        }
        return trstats_items;
    }

    if(child_yang_name == "rtospfIfDefToOspfv3If-items")
    {
        if(rtospfifdeftoospfv3if_items == nullptr)
        {
            rtospfifdeftoospfv3if_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems>();
        }
        return rtospfifdeftoospfv3if_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(ifstats_items != nullptr)
    {
        children["ifstats-items"] = ifstats_items;
    }

    if(trstats_items != nullptr)
    {
        children["trstats-items"] = trstats_items;
    }

    if(rtospfifdeftoospfv3if_items != nullptr)
    {
        children["rtospfIfDefToOspfv3If-items"] = rtospfifdeftoospfv3if_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveCtrl")
    {
        passivectrl = value;
        passivectrl.value_namespace = name_space;
        passivectrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdCtrl")
    {
        bfdctrl = value;
        bfdctrl.value_namespace = name_space;
        bfdctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nwT")
    {
        nwt = value;
        nwt.value_namespace = name_space;
        nwt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertiseSecondaries")
    {
        advertisesecondaries = value;
        advertisesecondaries.value_namespace = name_space;
        advertisesecondaries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failStQual")
    {
        failstqual = value;
        failstqual.value_namespace = name_space;
        failstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drId")
    {
        drid = value;
        drid.value_namespace = name_space;
        drid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdrId")
    {
        bdrid = value;
        bdrid.value_namespace = name_space;
        bdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum = value;
        lsacksumsum.value_namespace = name_space;
        lsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCost")
    {
        opercost = value;
        opercost.value_namespace = name_space;
        opercost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDeadIntvl")
    {
        operdeadintvl = value;
        operdeadintvl.value_namespace = name_space;
        operdeadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl = value;
        deadintvl.value_namespace = name_space;
        deadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl = value;
        rexmitintvl.value_namespace = name_space;
        rexmitintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay = value;
        xmitdelay.value_namespace = name_space;
        xmitdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "passiveCtrl")
    {
        passivectrl.yfilter = yfilter;
    }
    if(value_path == "bfdCtrl")
    {
        bfdctrl.yfilter = yfilter;
    }
    if(value_path == "nwT")
    {
        nwt.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "advertiseSecondaries")
    {
        advertisesecondaries.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "failStQual")
    {
        failstqual.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "drId")
    {
        drid.yfilter = yfilter;
    }
    if(value_path == "bdrId")
    {
        bdrid.yfilter = yfilter;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum.yfilter = yfilter;
    }
    if(value_path == "operCost")
    {
        opercost.yfilter = yfilter;
    }
    if(value_path == "operDeadIntvl")
    {
        operdeadintvl.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl.yfilter = yfilter;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl.yfilter = yfilter;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "db-items" || name == "ifstats-items" || name == "trstats-items" || name == "rtospfIfDefToOspfv3If-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl" || name == "passiveCtrl" || name == "bfdCtrl" || name == "nwT" || name == "prio" || name == "area" || name == "advertiseSecondaries" || name == "operSt" || name == "failStQual" || name == "type" || name == "flags" || name == "addr" || name == "dr" || name == "bdr" || name == "drId" || name == "bdrId" || name == "lsaCksumSum" || name == "operCost" || name == "operDeadIntvl" || name == "helloIntvl" || name == "deadIntvl" || name == "rexmitIntvl" || name == "xmitDelay" || name == "cost")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjItems()
    :
    adjep_list(this, {"id"})
{

    yang_name = "adj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::~AdjItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList>();
        c->parent = this;
        adjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjEpList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    ifid{YType::uint32, "ifId"},
    operst{YType::enumeration, "operSt"},
    bfdst{YType::enumeration, "bfdSt"},
    area{YType::str, "area"},
    prio{YType::uint8, "prio"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    peerip{YType::str, "peerIp"},
    hellooptions{YType::uint32, "helloOptions"},
    dbdoptions{YType::uint32, "dbdOptions"},
    flags{YType::str, "flags"},
    peername{YType::str, "peerName"}
        ,
    adjstats_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>())
    , gr_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems>())
{
    adjstats_items->parent = this;
    gr_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| ifid.is_set
	|| operst.is_set
	|| bfdst.is_set
	|| area.is_set
	|| prio.is_set
	|| dr.is_set
	|| bdr.is_set
	|| peerip.is_set
	|| hellooptions.is_set
	|| dbdoptions.is_set
	|| flags.is_set
	|| peername.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data())
	|| (gr_items !=  nullptr && gr_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(peerip.yfilter)
	|| ydk::is_set(hellooptions.yfilter)
	|| ydk::is_set(dbdoptions.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(peername.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation())
	|| (gr_items !=  nullptr && gr_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (peerip.is_set || is_set(peerip.yfilter)) leaf_name_data.push_back(peerip.get_name_leafdata());
    if (hellooptions.is_set || is_set(hellooptions.yfilter)) leaf_name_data.push_back(hellooptions.get_name_leafdata());
    if (dbdoptions.is_set || is_set(dbdoptions.yfilter)) leaf_name_data.push_back(dbdoptions.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (peername.is_set || is_set(peername.yfilter)) leaf_name_data.push_back(peername.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    if(child_yang_name == "gr-items")
    {
        if(gr_items == nullptr)
        {
            gr_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems>();
        }
        return gr_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjstats_items != nullptr)
    {
        children["adjstats-items"] = adjstats_items;
    }

    if(gr_items != nullptr)
    {
        children["gr-items"] = gr_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerIp")
    {
        peerip = value;
        peerip.value_namespace = name_space;
        peerip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloOptions")
    {
        hellooptions = value;
        hellooptions.value_namespace = name_space;
        hellooptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdOptions")
    {
        dbdoptions = value;
        dbdoptions.value_namespace = name_space;
        dbdoptions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerName")
    {
        peername = value;
        peername.value_namespace = name_space;
        peername.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "peerIp")
    {
        peerip.yfilter = yfilter;
    }
    if(value_path == "helloOptions")
    {
        hellooptions.yfilter = yfilter;
    }
    if(value_path == "dbdOptions")
    {
        dbdoptions.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "peerName")
    {
        peername.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjstats-items" || name == "gr-items" || name == "id" || name == "name" || name == "ifId" || name == "operSt" || name == "bfdSt" || name == "area" || name == "prio" || name == "dr" || name == "bdr" || name == "peerIp" || name == "helloOptions" || name == "dbdOptions" || name == "flags" || name == "peerName")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::AdjstatsItems()
    :
    stchgcnt{YType::uint32, "stChgCnt"},
    laststchgts{YType::str, "lastStChgTs"},
    lastnonhellopktts{YType::str, "lastNonHelloPktTs"},
    dbdseqnum{YType::uint32, "dbdSeqNum"},
    reqlsacnt{YType::uint32, "reqLsaCnt"},
    outstandinglsacnt{YType::uint32, "outstandingLsaCnt"},
    lsareqrexmitcnt{YType::uint32, "lsaReqRexmitCnt"},
    deadtimerexpts{YType::str, "deadTimerExpTs"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return stchgcnt.is_set
	|| laststchgts.is_set
	|| lastnonhellopktts.is_set
	|| dbdseqnum.is_set
	|| reqlsacnt.is_set
	|| outstandinglsacnt.is_set
	|| lsareqrexmitcnt.is_set
	|| deadtimerexpts.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stchgcnt.yfilter)
	|| ydk::is_set(laststchgts.yfilter)
	|| ydk::is_set(lastnonhellopktts.yfilter)
	|| ydk::is_set(dbdseqnum.yfilter)
	|| ydk::is_set(reqlsacnt.yfilter)
	|| ydk::is_set(outstandinglsacnt.yfilter)
	|| ydk::is_set(lsareqrexmitcnt.yfilter)
	|| ydk::is_set(deadtimerexpts.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stchgcnt.is_set || is_set(stchgcnt.yfilter)) leaf_name_data.push_back(stchgcnt.get_name_leafdata());
    if (laststchgts.is_set || is_set(laststchgts.yfilter)) leaf_name_data.push_back(laststchgts.get_name_leafdata());
    if (lastnonhellopktts.is_set || is_set(lastnonhellopktts.yfilter)) leaf_name_data.push_back(lastnonhellopktts.get_name_leafdata());
    if (dbdseqnum.is_set || is_set(dbdseqnum.yfilter)) leaf_name_data.push_back(dbdseqnum.get_name_leafdata());
    if (reqlsacnt.is_set || is_set(reqlsacnt.yfilter)) leaf_name_data.push_back(reqlsacnt.get_name_leafdata());
    if (outstandinglsacnt.is_set || is_set(outstandinglsacnt.yfilter)) leaf_name_data.push_back(outstandinglsacnt.get_name_leafdata());
    if (lsareqrexmitcnt.is_set || is_set(lsareqrexmitcnt.yfilter)) leaf_name_data.push_back(lsareqrexmitcnt.get_name_leafdata());
    if (deadtimerexpts.is_set || is_set(deadtimerexpts.yfilter)) leaf_name_data.push_back(deadtimerexpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stChgCnt")
    {
        stchgcnt = value;
        stchgcnt.value_namespace = name_space;
        stchgcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStChgTs")
    {
        laststchgts = value;
        laststchgts.value_namespace = name_space;
        laststchgts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastNonHelloPktTs")
    {
        lastnonhellopktts = value;
        lastnonhellopktts.value_namespace = name_space;
        lastnonhellopktts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdSeqNum")
    {
        dbdseqnum = value;
        dbdseqnum.value_namespace = name_space;
        dbdseqnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reqLsaCnt")
    {
        reqlsacnt = value;
        reqlsacnt.value_namespace = name_space;
        reqlsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outstandingLsaCnt")
    {
        outstandinglsacnt = value;
        outstandinglsacnt.value_namespace = name_space;
        outstandinglsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaReqRexmitCnt")
    {
        lsareqrexmitcnt = value;
        lsareqrexmitcnt.value_namespace = name_space;
        lsareqrexmitcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadTimerExpTs")
    {
        deadtimerexpts = value;
        deadtimerexpts.value_namespace = name_space;
        deadtimerexpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stChgCnt")
    {
        stchgcnt.yfilter = yfilter;
    }
    if(value_path == "lastStChgTs")
    {
        laststchgts.yfilter = yfilter;
    }
    if(value_path == "lastNonHelloPktTs")
    {
        lastnonhellopktts.yfilter = yfilter;
    }
    if(value_path == "dbdSeqNum")
    {
        dbdseqnum.yfilter = yfilter;
    }
    if(value_path == "reqLsaCnt")
    {
        reqlsacnt.yfilter = yfilter;
    }
    if(value_path == "outstandingLsaCnt")
    {
        outstandinglsacnt.yfilter = yfilter;
    }
    if(value_path == "lsaReqRexmitCnt")
    {
        lsareqrexmitcnt.yfilter = yfilter;
    }
    if(value_path == "deadTimerExpTs")
    {
        deadtimerexpts.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stChgCnt" || name == "lastStChgTs" || name == "lastNonHelloPktTs" || name == "dbdSeqNum" || name == "reqLsaCnt" || name == "outstandingLsaCnt" || name == "lsaReqRexmitCnt" || name == "deadTimerExpTs")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::GrItems()
    :
    helperst{YType::enumeration, "helperSt"},
    helperage{YType::uint32, "helperAge"},
    helperexitqual{YType::enumeration, "helperExitQual"}
{

    yang_name = "gr-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::~GrItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::has_data() const
{
    if (is_presence_container) return true;
    return helperst.is_set
	|| helperage.is_set
	|| helperexitqual.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(helperst.yfilter)
	|| ydk::is_set(helperage.yfilter)
	|| ydk::is_set(helperexitqual.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (helperst.is_set || is_set(helperst.yfilter)) leaf_name_data.push_back(helperst.get_name_leafdata());
    if (helperage.is_set || is_set(helperage.yfilter)) leaf_name_data.push_back(helperage.get_name_leafdata());
    if (helperexitqual.is_set || is_set(helperexitqual.yfilter)) leaf_name_data.push_back(helperexitqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helperSt")
    {
        helperst = value;
        helperst.value_namespace = name_space;
        helperst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helperAge")
    {
        helperage = value;
        helperage.value_namespace = name_space;
        helperage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helperExitQual")
    {
        helperexitqual = value;
        helperexitqual.value_namespace = name_space;
        helperexitqual.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helperSt")
    {
        helperst.yfilter = yfilter;
    }
    if(value_path == "helperAge")
    {
        helperage.yfilter = yfilter;
    }
    if(value_path == "helperExitQual")
    {
        helperexitqual.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::GrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helperSt" || name == "helperAge" || name == "helperExitQual")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::~DbItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    lsa_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems>())
    , rt_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems>())
{
    lsa_items->parent = this;
    rt_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::~DbList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (lsa_items !=  nullptr && lsa_items->has_data())
	|| (rt_items !=  nullptr && rt_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (lsa_items !=  nullptr && lsa_items->has_operation())
	|| (rt_items !=  nullptr && rt_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-items")
    {
        if(lsa_items == nullptr)
        {
            lsa_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems>();
        }
        return lsa_items;
    }

    if(child_yang_name == "rt-items")
    {
        if(rt_items == nullptr)
        {
            rt_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems>();
        }
        return rt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_items != nullptr)
    {
        children["lsa-items"] = lsa_items;
    }

    if(rt_items != nullptr)
    {
        children["rt-items"] = rt_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-items" || name == "rt-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaItems()
    :
    lsarec_list(this, {"type", "id", "advrtr"})
{

    yang_name = "lsa-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::~LsaItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::has_operation() const
{
    for (std::size_t index=0; index<lsarec_list.len(); index++)
    {
        if(lsarec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LsaRec-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList>();
        c->parent = this;
        lsarec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lsarec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LsaRec-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::LsaRecList()
    :
    type{YType::enumeration, "type"},
    id{YType::str, "id"},
    advrtr{YType::str, "advRtr"},
    name{YType::str, "name"},
    seq{YType::uint32, "seq"},
    age{YType::uint32, "age"},
    arrivalts{YType::str, "arrivalTs"},
    cksum{YType::uint32, "cksum"},
    advert{YType::str, "advert"}
{

    yang_name = "LsaRec-list"; yang_parent_name = "lsa-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::~LsaRecList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| advrtr.is_set
	|| name.is_set
	|| seq.is_set
	|| age.is_set
	|| arrivalts.is_set
	|| cksum.is_set
	|| advert.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(advrtr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(arrivalts.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| ydk::is_set(advert.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LsaRec-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(advrtr, "advRtr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (advrtr.is_set || is_set(advrtr.yfilter)) leaf_name_data.push_back(advrtr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (arrivalts.is_set || is_set(arrivalts.yfilter)) leaf_name_data.push_back(arrivalts.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());
    if (advert.is_set || is_set(advert.yfilter)) leaf_name_data.push_back(advert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advRtr")
    {
        advrtr = value;
        advrtr.value_namespace = name_space;
        advrtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts = value;
        arrivalts.value_namespace = name_space;
        arrivalts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert")
    {
        advert = value;
        advert.value_namespace = name_space;
        advert.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "advRtr")
    {
        advrtr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "arrivalTs")
    {
        arrivalts.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
    if(value_path == "advert")
    {
        advert.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::LsaItems::LsaRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "id" || name == "advRtr" || name == "name" || name == "seq" || name == "age" || name == "arrivalTs" || name == "cksum" || name == "advert")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RtItems()
    :
    route_list(this, {"pfx"})
{

    yang_name = "rt-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::~RtItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::RouteList()
    :
    pfx{YType::str, "pfx"},
    name{YType::str, "name"},
    patht{YType::enumeration, "pathT"},
    area{YType::str, "area"},
    flags{YType::str, "flags"},
    ucastcost{YType::uint16, "ucastCost"},
    mcastcost{YType::uint16, "mcastCost"},
    tag{YType::uint32, "tag"},
    dist{YType::uint8, "dist"}
        ,
    ucnh_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems>())
    , mcnh_items(std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems>())
{
    ucnh_items->parent = this;
    mcnh_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "rt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::~RouteList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| name.is_set
	|| patht.is_set
	|| area.is_set
	|| flags.is_set
	|| ucastcost.is_set
	|| mcastcost.is_set
	|| tag.is_set
	|| dist.is_set
	|| (ucnh_items !=  nullptr && ucnh_items->has_data())
	|| (mcnh_items !=  nullptr && mcnh_items->has_data());
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(patht.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(ucastcost.yfilter)
	|| ydk::is_set(mcastcost.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(dist.yfilter)
	|| (ucnh_items !=  nullptr && ucnh_items->has_operation())
	|| (mcnh_items !=  nullptr && mcnh_items->has_operation());
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (patht.is_set || is_set(patht.yfilter)) leaf_name_data.push_back(patht.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (ucastcost.is_set || is_set(ucastcost.yfilter)) leaf_name_data.push_back(ucastcost.get_name_leafdata());
    if (mcastcost.is_set || is_set(mcastcost.yfilter)) leaf_name_data.push_back(mcastcost.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (dist.is_set || is_set(dist.yfilter)) leaf_name_data.push_back(dist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ucnh-items")
    {
        if(ucnh_items == nullptr)
        {
            ucnh_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems>();
        }
        return ucnh_items;
    }

    if(child_yang_name == "mcnh-items")
    {
        if(mcnh_items == nullptr)
        {
            mcnh_items = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems>();
        }
        return mcnh_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ucnh_items != nullptr)
    {
        children["ucnh-items"] = ucnh_items;
    }

    if(mcnh_items != nullptr)
    {
        children["mcnh-items"] = mcnh_items;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathT")
    {
        patht = value;
        patht.value_namespace = name_space;
        patht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucastCost")
    {
        ucastcost = value;
        ucastcost.value_namespace = name_space;
        ucastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastCost")
    {
        mcastcost = value;
        mcastcost.value_namespace = name_space;
        mcastcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist")
    {
        dist = value;
        dist.value_namespace = name_space;
        dist.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pathT")
    {
        patht.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "ucastCost")
    {
        ucastcost.yfilter = yfilter;
    }
    if(value_path == "mcastCost")
    {
        mcastcost.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "dist")
    {
        dist.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ucnh-items" || name == "mcnh-items" || name == "pfx" || name == "name" || name == "pathT" || name == "area" || name == "flags" || name == "ucastCost" || name == "mcastCost" || name == "tag" || name == "dist")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcnhItems()
    :
    ucnexthop_list(this, {"if_", "addr"})
{

    yang_name = "ucnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::~UcnhItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_operation() const
{
    for (std::size_t index=0; index<ucnexthop_list.len(); index++)
    {
        if(ucnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ucnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UcNexthop-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList>();
        c->parent = this;
        ucnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ucnexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UcNexthop-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::UcNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "UcNexthop-list"; yang_parent_name = "ucnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::~UcNexthopList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UcNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::UcnhItems::UcNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McnhItems()
    :
    mcnexthop_list(this, {"if_", "addr"})
{

    yang_name = "mcnh-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::~McnhItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::has_operation() const
{
    for (std::size_t index=0; index<mcnexthop_list.len(); index++)
    {
        if(mcnexthop_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcnh-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "McNexthop-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList>();
        c->parent = this;
        mcnexthop_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mcnexthop_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "McNexthop-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::McNexthopList()
    :
    if_{YType::str, "if"},
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    flags{YType::str, "flags"}
{

    yang_name = "McNexthop-list"; yang_parent_name = "mcnh-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::~McNexthopList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_data() const
{
    if (is_presence_container) return true;
    return if_.is_set
	|| addr.is_set
	|| name.is_set
	|| flags.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "McNexthop-list";
    ADD_KEY_TOKEN(if_, "if");
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_.is_set || is_set(if_.yfilter)) leaf_name_data.push_back(if_.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if")
    {
        if_ = value;
        if_.value_namespace = name_space;
        if_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if")
    {
        if_.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::DbItems::DbList::RtItems::RouteList::McnhItems::McNexthopList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if" || name == "addr" || name == "name" || name == "flags")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    evcnt{YType::uint32, "evCnt"},
    lsacnt{YType::uint32, "lsaCnt"},
    peercnt{YType::uint32, "peerCnt"},
    floodtopeercnt{YType::uint32, "floodToPeerCnt"},
    adjcnt{YType::uint32, "adjCnt"},
    grhelperpeercnt{YType::uint32, "grHelperPeerCnt"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return evcnt.is_set
	|| lsacnt.is_set
	|| peercnt.is_set
	|| floodtopeercnt.is_set
	|| adjcnt.is_set
	|| grhelperpeercnt.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evcnt.yfilter)
	|| ydk::is_set(lsacnt.yfilter)
	|| ydk::is_set(peercnt.yfilter)
	|| ydk::is_set(floodtopeercnt.yfilter)
	|| ydk::is_set(adjcnt.yfilter)
	|| ydk::is_set(grhelperpeercnt.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evcnt.is_set || is_set(evcnt.yfilter)) leaf_name_data.push_back(evcnt.get_name_leafdata());
    if (lsacnt.is_set || is_set(lsacnt.yfilter)) leaf_name_data.push_back(lsacnt.get_name_leafdata());
    if (peercnt.is_set || is_set(peercnt.yfilter)) leaf_name_data.push_back(peercnt.get_name_leafdata());
    if (floodtopeercnt.is_set || is_set(floodtopeercnt.yfilter)) leaf_name_data.push_back(floodtopeercnt.get_name_leafdata());
    if (adjcnt.is_set || is_set(adjcnt.yfilter)) leaf_name_data.push_back(adjcnt.get_name_leafdata());
    if (grhelperpeercnt.is_set || is_set(grhelperpeercnt.yfilter)) leaf_name_data.push_back(grhelperpeercnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evCnt")
    {
        evcnt = value;
        evcnt.value_namespace = name_space;
        evcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt = value;
        lsacnt.value_namespace = name_space;
        lsacnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerCnt")
    {
        peercnt = value;
        peercnt.value_namespace = name_space;
        peercnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodToPeerCnt")
    {
        floodtopeercnt = value;
        floodtopeercnt.value_namespace = name_space;
        floodtopeercnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjCnt")
    {
        adjcnt = value;
        adjcnt.value_namespace = name_space;
        adjcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grHelperPeerCnt")
    {
        grhelperpeercnt = value;
        grhelperpeercnt.value_namespace = name_space;
        grhelperpeercnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evCnt")
    {
        evcnt.yfilter = yfilter;
    }
    if(value_path == "lsaCnt")
    {
        lsacnt.yfilter = yfilter;
    }
    if(value_path == "peerCnt")
    {
        peercnt.yfilter = yfilter;
    }
    if(value_path == "floodToPeerCnt")
    {
        floodtopeercnt.yfilter = yfilter;
    }
    if(value_path == "adjCnt")
    {
        adjcnt.yfilter = yfilter;
    }
    if(value_path == "grHelperPeerCnt")
    {
        grhelperpeercnt.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evCnt" || name == "lsaCnt" || name == "peerCnt" || name == "floodToPeerCnt" || name == "adjCnt" || name == "grHelperPeerCnt")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::TrstatsItems()
    :
    totalpktsrcvd{YType::uint32, "totalPktsRcvd"},
    hellopktsrcvd{YType::uint32, "helloPktsRcvd"},
    dbdpktsrcvd{YType::uint32, "dbdPktsRcvd"},
    lsreqpktsrcvd{YType::uint32, "lsReqPktsRcvd"},
    lsupdpktsrcvd{YType::uint32, "lsUpdPktsRcvd"},
    lsackpktsrcvd{YType::uint32, "lsAckPktsRcvd"},
    rcvdpktsdropped{YType::uint32, "rcvdPktsDropped"},
    errpktsrcvd{YType::uint32, "errPktsRcvd"},
    errhellopktsrcvd{YType::uint32, "errHelloPktsRcvd"},
    errdbdpktsrcvd{YType::uint32, "errDbdPktsRcvd"},
    errlsreqpktsrcvd{YType::uint32, "errLsReqPktsRcvd"},
    errlsupdpktsrcvd{YType::uint32, "errLsUpdPktsRcvd"},
    errlsackpktsrcvd{YType::uint32, "errLsAckPktsRcvd"},
    unknownpktsrcvd{YType::uint32, "unknownPktsRcvd"},
    duprtridpktsrcvd{YType::uint32, "dupRtrIdPktsRcvd"},
    dupsrcaddrpktsrcvd{YType::uint32, "dupSrcAddrPktsRcvd"},
    wrongareapktsrcvd{YType::uint32, "wrongAreaPktsRcvd"},
    invalidsrcaddrpktsrcvd{YType::uint32, "invalidSrcAddrPktsRcvd"},
    invaliddestaddrpktsrcvd{YType::uint32, "invalidDestAddrPktsRcvd"},
    badcrcpktsrcvd{YType::uint32, "badCRCPktsRcvd"},
    badversionpktsrcvd{YType::uint32, "badVersionPktsRcvd"},
    badresvfieldpktsrcvd{YType::uint32, "badResvFieldPktsRcvd"},
    peerrtridchgdpktsrcvd{YType::uint32, "peerRtrIdChgdPktsRcvd"},
    peernotfoundpktsrcvd{YType::uint32, "peerNotFoundPktsRcvd"},
    badauthpktsrcvd{YType::uint32, "badAuthPktsRcvd"},
    badlenpktsrcvd{YType::uint32, "badLenPktsRcvd"},
    passiveintfpktsrcvd{YType::uint32, "passiveIntfPktsRcvd"},
    noospfintfpktsrcvd{YType::uint32, "noOspfIntfPktsRcvd"},
    rcvdlsapktsignored{YType::uint32, "rcvdLsaPktsIgnored"},
    droppedlsapktswhilespf{YType::uint32, "droppedLsaPktsWhileSPF"},
    droppedlsapktswhilegr{YType::uint32, "droppedLsaPktsWhileGR"},
    totalpktssent{YType::uint32, "totalPktsSent"},
    hellopktssent{YType::uint32, "helloPktsSent"},
    dbdpktssent{YType::uint32, "dbdPktsSent"},
    lsreqpktssent{YType::uint32, "lsReqPktsSent"},
    lsupdpktssent{YType::uint32, "lsUpdPktsSent"},
    lsackpktssent{YType::uint32, "lsAckPktsSent"},
    droppedsendpkts{YType::uint32, "droppedSendPkts"},
    errsendpkts{YType::uint32, "errSendPkts"},
    unknownsendpkts{YType::uint32, "unknownSendPkts"},
    lsufirsttxpkts{YType::uint32, "lsuFirstTxPkts"},
    lsurexmitpkts{YType::uint32, "lsuRexmitPkts"},
    lsuforlsreqpkts{YType::uint32, "lsuForLsreqPkts"},
    lsupeertxpkts{YType::uint32, "lsuPeerTxPkts"},
    floodpktsendipthrottle{YType::uint32, "floodPktSendIpThrottle"},
    floodpktsendtokenthrottle{YType::uint32, "floodPktSendTokenThrottle"},
    laststatsclearts{YType::str, "lastStatsClearTs"}
{

    yang_name = "trstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::~TrstatsItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totalpktsrcvd.is_set
	|| hellopktsrcvd.is_set
	|| dbdpktsrcvd.is_set
	|| lsreqpktsrcvd.is_set
	|| lsupdpktsrcvd.is_set
	|| lsackpktsrcvd.is_set
	|| rcvdpktsdropped.is_set
	|| errpktsrcvd.is_set
	|| errhellopktsrcvd.is_set
	|| errdbdpktsrcvd.is_set
	|| errlsreqpktsrcvd.is_set
	|| errlsupdpktsrcvd.is_set
	|| errlsackpktsrcvd.is_set
	|| unknownpktsrcvd.is_set
	|| duprtridpktsrcvd.is_set
	|| dupsrcaddrpktsrcvd.is_set
	|| wrongareapktsrcvd.is_set
	|| invalidsrcaddrpktsrcvd.is_set
	|| invaliddestaddrpktsrcvd.is_set
	|| badcrcpktsrcvd.is_set
	|| badversionpktsrcvd.is_set
	|| badresvfieldpktsrcvd.is_set
	|| peerrtridchgdpktsrcvd.is_set
	|| peernotfoundpktsrcvd.is_set
	|| badauthpktsrcvd.is_set
	|| badlenpktsrcvd.is_set
	|| passiveintfpktsrcvd.is_set
	|| noospfintfpktsrcvd.is_set
	|| rcvdlsapktsignored.is_set
	|| droppedlsapktswhilespf.is_set
	|| droppedlsapktswhilegr.is_set
	|| totalpktssent.is_set
	|| hellopktssent.is_set
	|| dbdpktssent.is_set
	|| lsreqpktssent.is_set
	|| lsupdpktssent.is_set
	|| lsackpktssent.is_set
	|| droppedsendpkts.is_set
	|| errsendpkts.is_set
	|| unknownsendpkts.is_set
	|| lsufirsttxpkts.is_set
	|| lsurexmitpkts.is_set
	|| lsuforlsreqpkts.is_set
	|| lsupeertxpkts.is_set
	|| floodpktsendipthrottle.is_set
	|| floodpktsendtokenthrottle.is_set
	|| laststatsclearts.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totalpktsrcvd.yfilter)
	|| ydk::is_set(hellopktsrcvd.yfilter)
	|| ydk::is_set(dbdpktsrcvd.yfilter)
	|| ydk::is_set(lsreqpktsrcvd.yfilter)
	|| ydk::is_set(lsupdpktsrcvd.yfilter)
	|| ydk::is_set(lsackpktsrcvd.yfilter)
	|| ydk::is_set(rcvdpktsdropped.yfilter)
	|| ydk::is_set(errpktsrcvd.yfilter)
	|| ydk::is_set(errhellopktsrcvd.yfilter)
	|| ydk::is_set(errdbdpktsrcvd.yfilter)
	|| ydk::is_set(errlsreqpktsrcvd.yfilter)
	|| ydk::is_set(errlsupdpktsrcvd.yfilter)
	|| ydk::is_set(errlsackpktsrcvd.yfilter)
	|| ydk::is_set(unknownpktsrcvd.yfilter)
	|| ydk::is_set(duprtridpktsrcvd.yfilter)
	|| ydk::is_set(dupsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(wrongareapktsrcvd.yfilter)
	|| ydk::is_set(invalidsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(invaliddestaddrpktsrcvd.yfilter)
	|| ydk::is_set(badcrcpktsrcvd.yfilter)
	|| ydk::is_set(badversionpktsrcvd.yfilter)
	|| ydk::is_set(badresvfieldpktsrcvd.yfilter)
	|| ydk::is_set(peerrtridchgdpktsrcvd.yfilter)
	|| ydk::is_set(peernotfoundpktsrcvd.yfilter)
	|| ydk::is_set(badauthpktsrcvd.yfilter)
	|| ydk::is_set(badlenpktsrcvd.yfilter)
	|| ydk::is_set(passiveintfpktsrcvd.yfilter)
	|| ydk::is_set(noospfintfpktsrcvd.yfilter)
	|| ydk::is_set(rcvdlsapktsignored.yfilter)
	|| ydk::is_set(droppedlsapktswhilespf.yfilter)
	|| ydk::is_set(droppedlsapktswhilegr.yfilter)
	|| ydk::is_set(totalpktssent.yfilter)
	|| ydk::is_set(hellopktssent.yfilter)
	|| ydk::is_set(dbdpktssent.yfilter)
	|| ydk::is_set(lsreqpktssent.yfilter)
	|| ydk::is_set(lsupdpktssent.yfilter)
	|| ydk::is_set(lsackpktssent.yfilter)
	|| ydk::is_set(droppedsendpkts.yfilter)
	|| ydk::is_set(errsendpkts.yfilter)
	|| ydk::is_set(unknownsendpkts.yfilter)
	|| ydk::is_set(lsufirsttxpkts.yfilter)
	|| ydk::is_set(lsurexmitpkts.yfilter)
	|| ydk::is_set(lsuforlsreqpkts.yfilter)
	|| ydk::is_set(lsupeertxpkts.yfilter)
	|| ydk::is_set(floodpktsendipthrottle.yfilter)
	|| ydk::is_set(floodpktsendtokenthrottle.yfilter)
	|| ydk::is_set(laststatsclearts.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totalpktsrcvd.is_set || is_set(totalpktsrcvd.yfilter)) leaf_name_data.push_back(totalpktsrcvd.get_name_leafdata());
    if (hellopktsrcvd.is_set || is_set(hellopktsrcvd.yfilter)) leaf_name_data.push_back(hellopktsrcvd.get_name_leafdata());
    if (dbdpktsrcvd.is_set || is_set(dbdpktsrcvd.yfilter)) leaf_name_data.push_back(dbdpktsrcvd.get_name_leafdata());
    if (lsreqpktsrcvd.is_set || is_set(lsreqpktsrcvd.yfilter)) leaf_name_data.push_back(lsreqpktsrcvd.get_name_leafdata());
    if (lsupdpktsrcvd.is_set || is_set(lsupdpktsrcvd.yfilter)) leaf_name_data.push_back(lsupdpktsrcvd.get_name_leafdata());
    if (lsackpktsrcvd.is_set || is_set(lsackpktsrcvd.yfilter)) leaf_name_data.push_back(lsackpktsrcvd.get_name_leafdata());
    if (rcvdpktsdropped.is_set || is_set(rcvdpktsdropped.yfilter)) leaf_name_data.push_back(rcvdpktsdropped.get_name_leafdata());
    if (errpktsrcvd.is_set || is_set(errpktsrcvd.yfilter)) leaf_name_data.push_back(errpktsrcvd.get_name_leafdata());
    if (errhellopktsrcvd.is_set || is_set(errhellopktsrcvd.yfilter)) leaf_name_data.push_back(errhellopktsrcvd.get_name_leafdata());
    if (errdbdpktsrcvd.is_set || is_set(errdbdpktsrcvd.yfilter)) leaf_name_data.push_back(errdbdpktsrcvd.get_name_leafdata());
    if (errlsreqpktsrcvd.is_set || is_set(errlsreqpktsrcvd.yfilter)) leaf_name_data.push_back(errlsreqpktsrcvd.get_name_leafdata());
    if (errlsupdpktsrcvd.is_set || is_set(errlsupdpktsrcvd.yfilter)) leaf_name_data.push_back(errlsupdpktsrcvd.get_name_leafdata());
    if (errlsackpktsrcvd.is_set || is_set(errlsackpktsrcvd.yfilter)) leaf_name_data.push_back(errlsackpktsrcvd.get_name_leafdata());
    if (unknownpktsrcvd.is_set || is_set(unknownpktsrcvd.yfilter)) leaf_name_data.push_back(unknownpktsrcvd.get_name_leafdata());
    if (duprtridpktsrcvd.is_set || is_set(duprtridpktsrcvd.yfilter)) leaf_name_data.push_back(duprtridpktsrcvd.get_name_leafdata());
    if (dupsrcaddrpktsrcvd.is_set || is_set(dupsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(dupsrcaddrpktsrcvd.get_name_leafdata());
    if (wrongareapktsrcvd.is_set || is_set(wrongareapktsrcvd.yfilter)) leaf_name_data.push_back(wrongareapktsrcvd.get_name_leafdata());
    if (invalidsrcaddrpktsrcvd.is_set || is_set(invalidsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invalidsrcaddrpktsrcvd.get_name_leafdata());
    if (invaliddestaddrpktsrcvd.is_set || is_set(invaliddestaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invaliddestaddrpktsrcvd.get_name_leafdata());
    if (badcrcpktsrcvd.is_set || is_set(badcrcpktsrcvd.yfilter)) leaf_name_data.push_back(badcrcpktsrcvd.get_name_leafdata());
    if (badversionpktsrcvd.is_set || is_set(badversionpktsrcvd.yfilter)) leaf_name_data.push_back(badversionpktsrcvd.get_name_leafdata());
    if (badresvfieldpktsrcvd.is_set || is_set(badresvfieldpktsrcvd.yfilter)) leaf_name_data.push_back(badresvfieldpktsrcvd.get_name_leafdata());
    if (peerrtridchgdpktsrcvd.is_set || is_set(peerrtridchgdpktsrcvd.yfilter)) leaf_name_data.push_back(peerrtridchgdpktsrcvd.get_name_leafdata());
    if (peernotfoundpktsrcvd.is_set || is_set(peernotfoundpktsrcvd.yfilter)) leaf_name_data.push_back(peernotfoundpktsrcvd.get_name_leafdata());
    if (badauthpktsrcvd.is_set || is_set(badauthpktsrcvd.yfilter)) leaf_name_data.push_back(badauthpktsrcvd.get_name_leafdata());
    if (badlenpktsrcvd.is_set || is_set(badlenpktsrcvd.yfilter)) leaf_name_data.push_back(badlenpktsrcvd.get_name_leafdata());
    if (passiveintfpktsrcvd.is_set || is_set(passiveintfpktsrcvd.yfilter)) leaf_name_data.push_back(passiveintfpktsrcvd.get_name_leafdata());
    if (noospfintfpktsrcvd.is_set || is_set(noospfintfpktsrcvd.yfilter)) leaf_name_data.push_back(noospfintfpktsrcvd.get_name_leafdata());
    if (rcvdlsapktsignored.is_set || is_set(rcvdlsapktsignored.yfilter)) leaf_name_data.push_back(rcvdlsapktsignored.get_name_leafdata());
    if (droppedlsapktswhilespf.is_set || is_set(droppedlsapktswhilespf.yfilter)) leaf_name_data.push_back(droppedlsapktswhilespf.get_name_leafdata());
    if (droppedlsapktswhilegr.is_set || is_set(droppedlsapktswhilegr.yfilter)) leaf_name_data.push_back(droppedlsapktswhilegr.get_name_leafdata());
    if (totalpktssent.is_set || is_set(totalpktssent.yfilter)) leaf_name_data.push_back(totalpktssent.get_name_leafdata());
    if (hellopktssent.is_set || is_set(hellopktssent.yfilter)) leaf_name_data.push_back(hellopktssent.get_name_leafdata());
    if (dbdpktssent.is_set || is_set(dbdpktssent.yfilter)) leaf_name_data.push_back(dbdpktssent.get_name_leafdata());
    if (lsreqpktssent.is_set || is_set(lsreqpktssent.yfilter)) leaf_name_data.push_back(lsreqpktssent.get_name_leafdata());
    if (lsupdpktssent.is_set || is_set(lsupdpktssent.yfilter)) leaf_name_data.push_back(lsupdpktssent.get_name_leafdata());
    if (lsackpktssent.is_set || is_set(lsackpktssent.yfilter)) leaf_name_data.push_back(lsackpktssent.get_name_leafdata());
    if (droppedsendpkts.is_set || is_set(droppedsendpkts.yfilter)) leaf_name_data.push_back(droppedsendpkts.get_name_leafdata());
    if (errsendpkts.is_set || is_set(errsendpkts.yfilter)) leaf_name_data.push_back(errsendpkts.get_name_leafdata());
    if (unknownsendpkts.is_set || is_set(unknownsendpkts.yfilter)) leaf_name_data.push_back(unknownsendpkts.get_name_leafdata());
    if (lsufirsttxpkts.is_set || is_set(lsufirsttxpkts.yfilter)) leaf_name_data.push_back(lsufirsttxpkts.get_name_leafdata());
    if (lsurexmitpkts.is_set || is_set(lsurexmitpkts.yfilter)) leaf_name_data.push_back(lsurexmitpkts.get_name_leafdata());
    if (lsuforlsreqpkts.is_set || is_set(lsuforlsreqpkts.yfilter)) leaf_name_data.push_back(lsuforlsreqpkts.get_name_leafdata());
    if (lsupeertxpkts.is_set || is_set(lsupeertxpkts.yfilter)) leaf_name_data.push_back(lsupeertxpkts.get_name_leafdata());
    if (floodpktsendipthrottle.is_set || is_set(floodpktsendipthrottle.yfilter)) leaf_name_data.push_back(floodpktsendipthrottle.get_name_leafdata());
    if (floodpktsendtokenthrottle.is_set || is_set(floodpktsendtokenthrottle.yfilter)) leaf_name_data.push_back(floodpktsendtokenthrottle.get_name_leafdata());
    if (laststatsclearts.is_set || is_set(laststatsclearts.yfilter)) leaf_name_data.push_back(laststatsclearts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd = value;
        totalpktsrcvd.value_namespace = name_space;
        totalpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd = value;
        hellopktsrcvd.value_namespace = name_space;
        hellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd = value;
        dbdpktsrcvd.value_namespace = name_space;
        dbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd = value;
        lsreqpktsrcvd.value_namespace = name_space;
        lsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd = value;
        lsupdpktsrcvd.value_namespace = name_space;
        lsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd = value;
        lsackpktsrcvd.value_namespace = name_space;
        lsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped = value;
        rcvdpktsdropped.value_namespace = name_space;
        rcvdpktsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd = value;
        errpktsrcvd.value_namespace = name_space;
        errpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd = value;
        errhellopktsrcvd.value_namespace = name_space;
        errhellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd = value;
        errdbdpktsrcvd.value_namespace = name_space;
        errdbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd = value;
        errlsreqpktsrcvd.value_namespace = name_space;
        errlsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd = value;
        errlsupdpktsrcvd.value_namespace = name_space;
        errlsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd = value;
        errlsackpktsrcvd.value_namespace = name_space;
        errlsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd = value;
        unknownpktsrcvd.value_namespace = name_space;
        unknownpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd = value;
        duprtridpktsrcvd.value_namespace = name_space;
        duprtridpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd = value;
        dupsrcaddrpktsrcvd.value_namespace = name_space;
        dupsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd = value;
        wrongareapktsrcvd.value_namespace = name_space;
        wrongareapktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd = value;
        invalidsrcaddrpktsrcvd.value_namespace = name_space;
        invalidsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd = value;
        invaliddestaddrpktsrcvd.value_namespace = name_space;
        invaliddestaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd = value;
        badcrcpktsrcvd.value_namespace = name_space;
        badcrcpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd = value;
        badversionpktsrcvd.value_namespace = name_space;
        badversionpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd = value;
        badresvfieldpktsrcvd.value_namespace = name_space;
        badresvfieldpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd = value;
        peerrtridchgdpktsrcvd.value_namespace = name_space;
        peerrtridchgdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd = value;
        peernotfoundpktsrcvd.value_namespace = name_space;
        peernotfoundpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd = value;
        badauthpktsrcvd.value_namespace = name_space;
        badauthpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd = value;
        badlenpktsrcvd.value_namespace = name_space;
        badlenpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd = value;
        passiveintfpktsrcvd.value_namespace = name_space;
        passiveintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd = value;
        noospfintfpktsrcvd.value_namespace = name_space;
        noospfintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored = value;
        rcvdlsapktsignored.value_namespace = name_space;
        rcvdlsapktsignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf = value;
        droppedlsapktswhilespf.value_namespace = name_space;
        droppedlsapktswhilespf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr = value;
        droppedlsapktswhilegr.value_namespace = name_space;
        droppedlsapktswhilegr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent = value;
        totalpktssent.value_namespace = name_space;
        totalpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent = value;
        hellopktssent.value_namespace = name_space;
        hellopktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent = value;
        dbdpktssent.value_namespace = name_space;
        dbdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent = value;
        lsreqpktssent.value_namespace = name_space;
        lsreqpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent = value;
        lsupdpktssent.value_namespace = name_space;
        lsupdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent = value;
        lsackpktssent.value_namespace = name_space;
        lsackpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts = value;
        droppedsendpkts.value_namespace = name_space;
        droppedsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts = value;
        errsendpkts.value_namespace = name_space;
        errsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownSendPkts")
    {
        unknownsendpkts = value;
        unknownsendpkts.value_namespace = name_space;
        unknownsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts = value;
        lsufirsttxpkts.value_namespace = name_space;
        lsufirsttxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts = value;
        lsurexmitpkts.value_namespace = name_space;
        lsurexmitpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts = value;
        lsuforlsreqpkts.value_namespace = name_space;
        lsuforlsreqpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts = value;
        lsupeertxpkts.value_namespace = name_space;
        lsupeertxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle = value;
        floodpktsendipthrottle.value_namespace = name_space;
        floodpktsendipthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle = value;
        floodpktsendtokenthrottle.value_namespace = name_space;
        floodpktsendtokenthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts = value;
        laststatsclearts.value_namespace = name_space;
        laststatsclearts.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped.yfilter = yfilter;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr.yfilter = yfilter;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent.yfilter = yfilter;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent.yfilter = yfilter;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent.yfilter = yfilter;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts.yfilter = yfilter;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts.yfilter = yfilter;
    }
    if(value_path == "unknownSendPkts")
    {
        unknownsendpkts.yfilter = yfilter;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts.yfilter = yfilter;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts.yfilter = yfilter;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts.yfilter = yfilter;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts.yfilter = yfilter;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle.yfilter = yfilter;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle.yfilter = yfilter;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totalPktsRcvd" || name == "helloPktsRcvd" || name == "dbdPktsRcvd" || name == "lsReqPktsRcvd" || name == "lsUpdPktsRcvd" || name == "lsAckPktsRcvd" || name == "rcvdPktsDropped" || name == "errPktsRcvd" || name == "errHelloPktsRcvd" || name == "errDbdPktsRcvd" || name == "errLsReqPktsRcvd" || name == "errLsUpdPktsRcvd" || name == "errLsAckPktsRcvd" || name == "unknownPktsRcvd" || name == "dupRtrIdPktsRcvd" || name == "dupSrcAddrPktsRcvd" || name == "wrongAreaPktsRcvd" || name == "invalidSrcAddrPktsRcvd" || name == "invalidDestAddrPktsRcvd" || name == "badCRCPktsRcvd" || name == "badVersionPktsRcvd" || name == "badResvFieldPktsRcvd" || name == "peerRtrIdChgdPktsRcvd" || name == "peerNotFoundPktsRcvd" || name == "badAuthPktsRcvd" || name == "badLenPktsRcvd" || name == "passiveIntfPktsRcvd" || name == "noOspfIntfPktsRcvd" || name == "rcvdLsaPktsIgnored" || name == "droppedLsaPktsWhileSPF" || name == "droppedLsaPktsWhileGR" || name == "totalPktsSent" || name == "helloPktsSent" || name == "dbdPktsSent" || name == "lsReqPktsSent" || name == "lsUpdPktsSent" || name == "lsAckPktsSent" || name == "droppedSendPkts" || name == "errSendPkts" || name == "unknownSendPkts" || name == "lsuFirstTxPkts" || name == "lsuRexmitPkts" || name == "lsuForLsreqPkts" || name == "lsuPeerTxPkts" || name == "floodPktSendIpThrottle" || name == "floodPktSendTokenThrottle" || name == "lastStatsClearTs")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtospfIfDefToOspfv3IfItems()
    :
    rtospfifdeftoospfv3if_list(this, {"tdn"})
{

    yang_name = "rtospfIfDefToOspfv3If-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::~RtospfIfDefToOspfv3IfItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtospfifdeftoospfv3if_list.len(); index++)
    {
        if(rtospfifdeftoospfv3if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::has_operation() const
{
    for (std::size_t index=0; index<rtospfifdeftoospfv3if_list.len(); index++)
    {
        if(rtospfifdeftoospfv3if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtospfIfDefToOspfv3If-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtOspfIfDefToOspfv3If-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList>();
        c->parent = this;
        rtospfifdeftoospfv3if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtospfifdeftoospfv3if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtOspfIfDefToOspfv3If-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList::RtOspfIfDefToOspfv3IfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtOspfIfDefToOspfv3If-list"; yang_parent_name = "rtospfIfDefToOspfv3If-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList::~RtOspfIfDefToOspfv3IfList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtOspfIfDefToOspfv3If-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtospfIfDefToOspfv3IfItems::RtOspfIfDefToOspfv3IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::MaxmetriclsapItems()
    :
    ctrl{YType::str, "ctrl"},
    maxmetricextlsa{YType::uint32, "maxMetricExtLsa"},
    maxmetricsummlsa{YType::uint32, "maxMetricSummLsa"},
    startupintvl{YType::uint32, "startupIntvl"},
    awaitconvbgpasn{YType::str, "awaitConvBgpAsn"}
{

    yang_name = "maxmetriclsap-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::~MaxmetriclsapItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::has_data() const
{
    if (is_presence_container) return true;
    return ctrl.is_set
	|| maxmetricextlsa.is_set
	|| maxmetricsummlsa.is_set
	|| startupintvl.is_set
	|| awaitconvbgpasn.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(maxmetricextlsa.yfilter)
	|| ydk::is_set(maxmetricsummlsa.yfilter)
	|| ydk::is_set(startupintvl.yfilter)
	|| ydk::is_set(awaitconvbgpasn.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxmetriclsap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (maxmetricextlsa.is_set || is_set(maxmetricextlsa.yfilter)) leaf_name_data.push_back(maxmetricextlsa.get_name_leafdata());
    if (maxmetricsummlsa.is_set || is_set(maxmetricsummlsa.yfilter)) leaf_name_data.push_back(maxmetricsummlsa.get_name_leafdata());
    if (startupintvl.is_set || is_set(startupintvl.yfilter)) leaf_name_data.push_back(startupintvl.get_name_leafdata());
    if (awaitconvbgpasn.is_set || is_set(awaitconvbgpasn.yfilter)) leaf_name_data.push_back(awaitconvbgpasn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMetricExtLsa")
    {
        maxmetricextlsa = value;
        maxmetricextlsa.value_namespace = name_space;
        maxmetricextlsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxMetricSummLsa")
    {
        maxmetricsummlsa = value;
        maxmetricsummlsa.value_namespace = name_space;
        maxmetricsummlsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startupIntvl")
    {
        startupintvl = value;
        startupintvl.value_namespace = name_space;
        startupintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "awaitConvBgpAsn")
    {
        awaitconvbgpasn = value;
        awaitconvbgpasn.value_namespace = name_space;
        awaitconvbgpasn.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "maxMetricExtLsa")
    {
        maxmetricextlsa.yfilter = yfilter;
    }
    if(value_path == "maxMetricSummLsa")
    {
        maxmetricsummlsa.yfilter = yfilter;
    }
    if(value_path == "startupIntvl")
    {
        startupintvl.yfilter = yfilter;
    }
    if(value_path == "awaitConvBgpAsn")
    {
        awaitconvbgpasn.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::MaxmetriclsapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ctrl" || name == "maxMetricExtLsa" || name == "maxMetricSummLsa" || name == "startupIntvl" || name == "awaitConvBgpAsn")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems::TrstatsItems()
    :
    totalpktsrcvd{YType::uint32, "totalPktsRcvd"},
    hellopktsrcvd{YType::uint32, "helloPktsRcvd"},
    dbdpktsrcvd{YType::uint32, "dbdPktsRcvd"},
    lsreqpktsrcvd{YType::uint32, "lsReqPktsRcvd"},
    lsupdpktsrcvd{YType::uint32, "lsUpdPktsRcvd"},
    lsackpktsrcvd{YType::uint32, "lsAckPktsRcvd"},
    rcvdpktsdropped{YType::uint32, "rcvdPktsDropped"},
    errpktsrcvd{YType::uint32, "errPktsRcvd"},
    errhellopktsrcvd{YType::uint32, "errHelloPktsRcvd"},
    errdbdpktsrcvd{YType::uint32, "errDbdPktsRcvd"},
    errlsreqpktsrcvd{YType::uint32, "errLsReqPktsRcvd"},
    errlsupdpktsrcvd{YType::uint32, "errLsUpdPktsRcvd"},
    errlsackpktsrcvd{YType::uint32, "errLsAckPktsRcvd"},
    unknownpktsrcvd{YType::uint32, "unknownPktsRcvd"},
    duprtridpktsrcvd{YType::uint32, "dupRtrIdPktsRcvd"},
    dupsrcaddrpktsrcvd{YType::uint32, "dupSrcAddrPktsRcvd"},
    wrongareapktsrcvd{YType::uint32, "wrongAreaPktsRcvd"},
    invalidsrcaddrpktsrcvd{YType::uint32, "invalidSrcAddrPktsRcvd"},
    invaliddestaddrpktsrcvd{YType::uint32, "invalidDestAddrPktsRcvd"},
    badcrcpktsrcvd{YType::uint32, "badCRCPktsRcvd"},
    badversionpktsrcvd{YType::uint32, "badVersionPktsRcvd"},
    badresvfieldpktsrcvd{YType::uint32, "badResvFieldPktsRcvd"},
    peerrtridchgdpktsrcvd{YType::uint32, "peerRtrIdChgdPktsRcvd"},
    peernotfoundpktsrcvd{YType::uint32, "peerNotFoundPktsRcvd"},
    badauthpktsrcvd{YType::uint32, "badAuthPktsRcvd"},
    badlenpktsrcvd{YType::uint32, "badLenPktsRcvd"},
    passiveintfpktsrcvd{YType::uint32, "passiveIntfPktsRcvd"},
    noospfintfpktsrcvd{YType::uint32, "noOspfIntfPktsRcvd"},
    rcvdlsapktsignored{YType::uint32, "rcvdLsaPktsIgnored"},
    droppedlsapktswhilespf{YType::uint32, "droppedLsaPktsWhileSPF"},
    droppedlsapktswhilegr{YType::uint32, "droppedLsaPktsWhileGR"},
    totalpktssent{YType::uint32, "totalPktsSent"},
    hellopktssent{YType::uint32, "helloPktsSent"},
    dbdpktssent{YType::uint32, "dbdPktsSent"},
    lsreqpktssent{YType::uint32, "lsReqPktsSent"},
    lsupdpktssent{YType::uint32, "lsUpdPktsSent"},
    lsackpktssent{YType::uint32, "lsAckPktsSent"},
    droppedsendpkts{YType::uint32, "droppedSendPkts"},
    errsendpkts{YType::uint32, "errSendPkts"},
    unknownsendpkts{YType::uint32, "unknownSendPkts"},
    lsufirsttxpkts{YType::uint32, "lsuFirstTxPkts"},
    lsurexmitpkts{YType::uint32, "lsuRexmitPkts"},
    lsuforlsreqpkts{YType::uint32, "lsuForLsreqPkts"},
    lsupeertxpkts{YType::uint32, "lsuPeerTxPkts"},
    floodpktsendipthrottle{YType::uint32, "floodPktSendIpThrottle"},
    floodpktsendtokenthrottle{YType::uint32, "floodPktSendTokenThrottle"},
    laststatsclearts{YType::str, "lastStatsClearTs"}
{

    yang_name = "trstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems::~TrstatsItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totalpktsrcvd.is_set
	|| hellopktsrcvd.is_set
	|| dbdpktsrcvd.is_set
	|| lsreqpktsrcvd.is_set
	|| lsupdpktsrcvd.is_set
	|| lsackpktsrcvd.is_set
	|| rcvdpktsdropped.is_set
	|| errpktsrcvd.is_set
	|| errhellopktsrcvd.is_set
	|| errdbdpktsrcvd.is_set
	|| errlsreqpktsrcvd.is_set
	|| errlsupdpktsrcvd.is_set
	|| errlsackpktsrcvd.is_set
	|| unknownpktsrcvd.is_set
	|| duprtridpktsrcvd.is_set
	|| dupsrcaddrpktsrcvd.is_set
	|| wrongareapktsrcvd.is_set
	|| invalidsrcaddrpktsrcvd.is_set
	|| invaliddestaddrpktsrcvd.is_set
	|| badcrcpktsrcvd.is_set
	|| badversionpktsrcvd.is_set
	|| badresvfieldpktsrcvd.is_set
	|| peerrtridchgdpktsrcvd.is_set
	|| peernotfoundpktsrcvd.is_set
	|| badauthpktsrcvd.is_set
	|| badlenpktsrcvd.is_set
	|| passiveintfpktsrcvd.is_set
	|| noospfintfpktsrcvd.is_set
	|| rcvdlsapktsignored.is_set
	|| droppedlsapktswhilespf.is_set
	|| droppedlsapktswhilegr.is_set
	|| totalpktssent.is_set
	|| hellopktssent.is_set
	|| dbdpktssent.is_set
	|| lsreqpktssent.is_set
	|| lsupdpktssent.is_set
	|| lsackpktssent.is_set
	|| droppedsendpkts.is_set
	|| errsendpkts.is_set
	|| unknownsendpkts.is_set
	|| lsufirsttxpkts.is_set
	|| lsurexmitpkts.is_set
	|| lsuforlsreqpkts.is_set
	|| lsupeertxpkts.is_set
	|| floodpktsendipthrottle.is_set
	|| floodpktsendtokenthrottle.is_set
	|| laststatsclearts.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totalpktsrcvd.yfilter)
	|| ydk::is_set(hellopktsrcvd.yfilter)
	|| ydk::is_set(dbdpktsrcvd.yfilter)
	|| ydk::is_set(lsreqpktsrcvd.yfilter)
	|| ydk::is_set(lsupdpktsrcvd.yfilter)
	|| ydk::is_set(lsackpktsrcvd.yfilter)
	|| ydk::is_set(rcvdpktsdropped.yfilter)
	|| ydk::is_set(errpktsrcvd.yfilter)
	|| ydk::is_set(errhellopktsrcvd.yfilter)
	|| ydk::is_set(errdbdpktsrcvd.yfilter)
	|| ydk::is_set(errlsreqpktsrcvd.yfilter)
	|| ydk::is_set(errlsupdpktsrcvd.yfilter)
	|| ydk::is_set(errlsackpktsrcvd.yfilter)
	|| ydk::is_set(unknownpktsrcvd.yfilter)
	|| ydk::is_set(duprtridpktsrcvd.yfilter)
	|| ydk::is_set(dupsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(wrongareapktsrcvd.yfilter)
	|| ydk::is_set(invalidsrcaddrpktsrcvd.yfilter)
	|| ydk::is_set(invaliddestaddrpktsrcvd.yfilter)
	|| ydk::is_set(badcrcpktsrcvd.yfilter)
	|| ydk::is_set(badversionpktsrcvd.yfilter)
	|| ydk::is_set(badresvfieldpktsrcvd.yfilter)
	|| ydk::is_set(peerrtridchgdpktsrcvd.yfilter)
	|| ydk::is_set(peernotfoundpktsrcvd.yfilter)
	|| ydk::is_set(badauthpktsrcvd.yfilter)
	|| ydk::is_set(badlenpktsrcvd.yfilter)
	|| ydk::is_set(passiveintfpktsrcvd.yfilter)
	|| ydk::is_set(noospfintfpktsrcvd.yfilter)
	|| ydk::is_set(rcvdlsapktsignored.yfilter)
	|| ydk::is_set(droppedlsapktswhilespf.yfilter)
	|| ydk::is_set(droppedlsapktswhilegr.yfilter)
	|| ydk::is_set(totalpktssent.yfilter)
	|| ydk::is_set(hellopktssent.yfilter)
	|| ydk::is_set(dbdpktssent.yfilter)
	|| ydk::is_set(lsreqpktssent.yfilter)
	|| ydk::is_set(lsupdpktssent.yfilter)
	|| ydk::is_set(lsackpktssent.yfilter)
	|| ydk::is_set(droppedsendpkts.yfilter)
	|| ydk::is_set(errsendpkts.yfilter)
	|| ydk::is_set(unknownsendpkts.yfilter)
	|| ydk::is_set(lsufirsttxpkts.yfilter)
	|| ydk::is_set(lsurexmitpkts.yfilter)
	|| ydk::is_set(lsuforlsreqpkts.yfilter)
	|| ydk::is_set(lsupeertxpkts.yfilter)
	|| ydk::is_set(floodpktsendipthrottle.yfilter)
	|| ydk::is_set(floodpktsendtokenthrottle.yfilter)
	|| ydk::is_set(laststatsclearts.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totalpktsrcvd.is_set || is_set(totalpktsrcvd.yfilter)) leaf_name_data.push_back(totalpktsrcvd.get_name_leafdata());
    if (hellopktsrcvd.is_set || is_set(hellopktsrcvd.yfilter)) leaf_name_data.push_back(hellopktsrcvd.get_name_leafdata());
    if (dbdpktsrcvd.is_set || is_set(dbdpktsrcvd.yfilter)) leaf_name_data.push_back(dbdpktsrcvd.get_name_leafdata());
    if (lsreqpktsrcvd.is_set || is_set(lsreqpktsrcvd.yfilter)) leaf_name_data.push_back(lsreqpktsrcvd.get_name_leafdata());
    if (lsupdpktsrcvd.is_set || is_set(lsupdpktsrcvd.yfilter)) leaf_name_data.push_back(lsupdpktsrcvd.get_name_leafdata());
    if (lsackpktsrcvd.is_set || is_set(lsackpktsrcvd.yfilter)) leaf_name_data.push_back(lsackpktsrcvd.get_name_leafdata());
    if (rcvdpktsdropped.is_set || is_set(rcvdpktsdropped.yfilter)) leaf_name_data.push_back(rcvdpktsdropped.get_name_leafdata());
    if (errpktsrcvd.is_set || is_set(errpktsrcvd.yfilter)) leaf_name_data.push_back(errpktsrcvd.get_name_leafdata());
    if (errhellopktsrcvd.is_set || is_set(errhellopktsrcvd.yfilter)) leaf_name_data.push_back(errhellopktsrcvd.get_name_leafdata());
    if (errdbdpktsrcvd.is_set || is_set(errdbdpktsrcvd.yfilter)) leaf_name_data.push_back(errdbdpktsrcvd.get_name_leafdata());
    if (errlsreqpktsrcvd.is_set || is_set(errlsreqpktsrcvd.yfilter)) leaf_name_data.push_back(errlsreqpktsrcvd.get_name_leafdata());
    if (errlsupdpktsrcvd.is_set || is_set(errlsupdpktsrcvd.yfilter)) leaf_name_data.push_back(errlsupdpktsrcvd.get_name_leafdata());
    if (errlsackpktsrcvd.is_set || is_set(errlsackpktsrcvd.yfilter)) leaf_name_data.push_back(errlsackpktsrcvd.get_name_leafdata());
    if (unknownpktsrcvd.is_set || is_set(unknownpktsrcvd.yfilter)) leaf_name_data.push_back(unknownpktsrcvd.get_name_leafdata());
    if (duprtridpktsrcvd.is_set || is_set(duprtridpktsrcvd.yfilter)) leaf_name_data.push_back(duprtridpktsrcvd.get_name_leafdata());
    if (dupsrcaddrpktsrcvd.is_set || is_set(dupsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(dupsrcaddrpktsrcvd.get_name_leafdata());
    if (wrongareapktsrcvd.is_set || is_set(wrongareapktsrcvd.yfilter)) leaf_name_data.push_back(wrongareapktsrcvd.get_name_leafdata());
    if (invalidsrcaddrpktsrcvd.is_set || is_set(invalidsrcaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invalidsrcaddrpktsrcvd.get_name_leafdata());
    if (invaliddestaddrpktsrcvd.is_set || is_set(invaliddestaddrpktsrcvd.yfilter)) leaf_name_data.push_back(invaliddestaddrpktsrcvd.get_name_leafdata());
    if (badcrcpktsrcvd.is_set || is_set(badcrcpktsrcvd.yfilter)) leaf_name_data.push_back(badcrcpktsrcvd.get_name_leafdata());
    if (badversionpktsrcvd.is_set || is_set(badversionpktsrcvd.yfilter)) leaf_name_data.push_back(badversionpktsrcvd.get_name_leafdata());
    if (badresvfieldpktsrcvd.is_set || is_set(badresvfieldpktsrcvd.yfilter)) leaf_name_data.push_back(badresvfieldpktsrcvd.get_name_leafdata());
    if (peerrtridchgdpktsrcvd.is_set || is_set(peerrtridchgdpktsrcvd.yfilter)) leaf_name_data.push_back(peerrtridchgdpktsrcvd.get_name_leafdata());
    if (peernotfoundpktsrcvd.is_set || is_set(peernotfoundpktsrcvd.yfilter)) leaf_name_data.push_back(peernotfoundpktsrcvd.get_name_leafdata());
    if (badauthpktsrcvd.is_set || is_set(badauthpktsrcvd.yfilter)) leaf_name_data.push_back(badauthpktsrcvd.get_name_leafdata());
    if (badlenpktsrcvd.is_set || is_set(badlenpktsrcvd.yfilter)) leaf_name_data.push_back(badlenpktsrcvd.get_name_leafdata());
    if (passiveintfpktsrcvd.is_set || is_set(passiveintfpktsrcvd.yfilter)) leaf_name_data.push_back(passiveintfpktsrcvd.get_name_leafdata());
    if (noospfintfpktsrcvd.is_set || is_set(noospfintfpktsrcvd.yfilter)) leaf_name_data.push_back(noospfintfpktsrcvd.get_name_leafdata());
    if (rcvdlsapktsignored.is_set || is_set(rcvdlsapktsignored.yfilter)) leaf_name_data.push_back(rcvdlsapktsignored.get_name_leafdata());
    if (droppedlsapktswhilespf.is_set || is_set(droppedlsapktswhilespf.yfilter)) leaf_name_data.push_back(droppedlsapktswhilespf.get_name_leafdata());
    if (droppedlsapktswhilegr.is_set || is_set(droppedlsapktswhilegr.yfilter)) leaf_name_data.push_back(droppedlsapktswhilegr.get_name_leafdata());
    if (totalpktssent.is_set || is_set(totalpktssent.yfilter)) leaf_name_data.push_back(totalpktssent.get_name_leafdata());
    if (hellopktssent.is_set || is_set(hellopktssent.yfilter)) leaf_name_data.push_back(hellopktssent.get_name_leafdata());
    if (dbdpktssent.is_set || is_set(dbdpktssent.yfilter)) leaf_name_data.push_back(dbdpktssent.get_name_leafdata());
    if (lsreqpktssent.is_set || is_set(lsreqpktssent.yfilter)) leaf_name_data.push_back(lsreqpktssent.get_name_leafdata());
    if (lsupdpktssent.is_set || is_set(lsupdpktssent.yfilter)) leaf_name_data.push_back(lsupdpktssent.get_name_leafdata());
    if (lsackpktssent.is_set || is_set(lsackpktssent.yfilter)) leaf_name_data.push_back(lsackpktssent.get_name_leafdata());
    if (droppedsendpkts.is_set || is_set(droppedsendpkts.yfilter)) leaf_name_data.push_back(droppedsendpkts.get_name_leafdata());
    if (errsendpkts.is_set || is_set(errsendpkts.yfilter)) leaf_name_data.push_back(errsendpkts.get_name_leafdata());
    if (unknownsendpkts.is_set || is_set(unknownsendpkts.yfilter)) leaf_name_data.push_back(unknownsendpkts.get_name_leafdata());
    if (lsufirsttxpkts.is_set || is_set(lsufirsttxpkts.yfilter)) leaf_name_data.push_back(lsufirsttxpkts.get_name_leafdata());
    if (lsurexmitpkts.is_set || is_set(lsurexmitpkts.yfilter)) leaf_name_data.push_back(lsurexmitpkts.get_name_leafdata());
    if (lsuforlsreqpkts.is_set || is_set(lsuforlsreqpkts.yfilter)) leaf_name_data.push_back(lsuforlsreqpkts.get_name_leafdata());
    if (lsupeertxpkts.is_set || is_set(lsupeertxpkts.yfilter)) leaf_name_data.push_back(lsupeertxpkts.get_name_leafdata());
    if (floodpktsendipthrottle.is_set || is_set(floodpktsendipthrottle.yfilter)) leaf_name_data.push_back(floodpktsendipthrottle.get_name_leafdata());
    if (floodpktsendtokenthrottle.is_set || is_set(floodpktsendtokenthrottle.yfilter)) leaf_name_data.push_back(floodpktsendtokenthrottle.get_name_leafdata());
    if (laststatsclearts.is_set || is_set(laststatsclearts.yfilter)) leaf_name_data.push_back(laststatsclearts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd = value;
        totalpktsrcvd.value_namespace = name_space;
        totalpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd = value;
        hellopktsrcvd.value_namespace = name_space;
        hellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd = value;
        dbdpktsrcvd.value_namespace = name_space;
        dbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd = value;
        lsreqpktsrcvd.value_namespace = name_space;
        lsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd = value;
        lsupdpktsrcvd.value_namespace = name_space;
        lsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd = value;
        lsackpktsrcvd.value_namespace = name_space;
        lsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped = value;
        rcvdpktsdropped.value_namespace = name_space;
        rcvdpktsdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd = value;
        errpktsrcvd.value_namespace = name_space;
        errpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd = value;
        errhellopktsrcvd.value_namespace = name_space;
        errhellopktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd = value;
        errdbdpktsrcvd.value_namespace = name_space;
        errdbdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd = value;
        errlsreqpktsrcvd.value_namespace = name_space;
        errlsreqpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd = value;
        errlsupdpktsrcvd.value_namespace = name_space;
        errlsupdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd = value;
        errlsackpktsrcvd.value_namespace = name_space;
        errlsackpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd = value;
        unknownpktsrcvd.value_namespace = name_space;
        unknownpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd = value;
        duprtridpktsrcvd.value_namespace = name_space;
        duprtridpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd = value;
        dupsrcaddrpktsrcvd.value_namespace = name_space;
        dupsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd = value;
        wrongareapktsrcvd.value_namespace = name_space;
        wrongareapktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd = value;
        invalidsrcaddrpktsrcvd.value_namespace = name_space;
        invalidsrcaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd = value;
        invaliddestaddrpktsrcvd.value_namespace = name_space;
        invaliddestaddrpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd = value;
        badcrcpktsrcvd.value_namespace = name_space;
        badcrcpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd = value;
        badversionpktsrcvd.value_namespace = name_space;
        badversionpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd = value;
        badresvfieldpktsrcvd.value_namespace = name_space;
        badresvfieldpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd = value;
        peerrtridchgdpktsrcvd.value_namespace = name_space;
        peerrtridchgdpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd = value;
        peernotfoundpktsrcvd.value_namespace = name_space;
        peernotfoundpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd = value;
        badauthpktsrcvd.value_namespace = name_space;
        badauthpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd = value;
        badlenpktsrcvd.value_namespace = name_space;
        badlenpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd = value;
        passiveintfpktsrcvd.value_namespace = name_space;
        passiveintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd = value;
        noospfintfpktsrcvd.value_namespace = name_space;
        noospfintfpktsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored = value;
        rcvdlsapktsignored.value_namespace = name_space;
        rcvdlsapktsignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf = value;
        droppedlsapktswhilespf.value_namespace = name_space;
        droppedlsapktswhilespf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr = value;
        droppedlsapktswhilegr.value_namespace = name_space;
        droppedlsapktswhilegr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent = value;
        totalpktssent.value_namespace = name_space;
        totalpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent = value;
        hellopktssent.value_namespace = name_space;
        hellopktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent = value;
        dbdpktssent.value_namespace = name_space;
        dbdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent = value;
        lsreqpktssent.value_namespace = name_space;
        lsreqpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent = value;
        lsupdpktssent.value_namespace = name_space;
        lsupdpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent = value;
        lsackpktssent.value_namespace = name_space;
        lsackpktssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts = value;
        droppedsendpkts.value_namespace = name_space;
        droppedsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts = value;
        errsendpkts.value_namespace = name_space;
        errsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownSendPkts")
    {
        unknownsendpkts = value;
        unknownsendpkts.value_namespace = name_space;
        unknownsendpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts = value;
        lsufirsttxpkts.value_namespace = name_space;
        lsufirsttxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts = value;
        lsurexmitpkts.value_namespace = name_space;
        lsurexmitpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts = value;
        lsuforlsreqpkts.value_namespace = name_space;
        lsuforlsreqpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts = value;
        lsupeertxpkts.value_namespace = name_space;
        lsupeertxpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle = value;
        floodpktsendipthrottle.value_namespace = name_space;
        floodpktsendipthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle = value;
        floodpktsendtokenthrottle.value_namespace = name_space;
        floodpktsendtokenthrottle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts = value;
        laststatsclearts.value_namespace = name_space;
        laststatsclearts.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totalPktsRcvd")
    {
        totalpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "helloPktsRcvd")
    {
        hellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dbdPktsRcvd")
    {
        dbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsRcvd")
    {
        lsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsRcvd")
    {
        lsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsRcvd")
    {
        lsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdPktsDropped")
    {
        rcvdpktsdropped.yfilter = yfilter;
    }
    if(value_path == "errPktsRcvd")
    {
        errpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errHelloPktsRcvd")
    {
        errhellopktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errDbdPktsRcvd")
    {
        errdbdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsReqPktsRcvd")
    {
        errlsreqpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsUpdPktsRcvd")
    {
        errlsupdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "errLsAckPktsRcvd")
    {
        errlsackpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "unknownPktsRcvd")
    {
        unknownpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupRtrIdPktsRcvd")
    {
        duprtridpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "dupSrcAddrPktsRcvd")
    {
        dupsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "wrongAreaPktsRcvd")
    {
        wrongareapktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidSrcAddrPktsRcvd")
    {
        invalidsrcaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "invalidDestAddrPktsRcvd")
    {
        invaliddestaddrpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badCRCPktsRcvd")
    {
        badcrcpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badVersionPktsRcvd")
    {
        badversionpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badResvFieldPktsRcvd")
    {
        badresvfieldpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerRtrIdChgdPktsRcvd")
    {
        peerrtridchgdpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "peerNotFoundPktsRcvd")
    {
        peernotfoundpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badAuthPktsRcvd")
    {
        badauthpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "badLenPktsRcvd")
    {
        badlenpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "passiveIntfPktsRcvd")
    {
        passiveintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "noOspfIntfPktsRcvd")
    {
        noospfintfpktsrcvd.yfilter = yfilter;
    }
    if(value_path == "rcvdLsaPktsIgnored")
    {
        rcvdlsapktsignored.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileSPF")
    {
        droppedlsapktswhilespf.yfilter = yfilter;
    }
    if(value_path == "droppedLsaPktsWhileGR")
    {
        droppedlsapktswhilegr.yfilter = yfilter;
    }
    if(value_path == "totalPktsSent")
    {
        totalpktssent.yfilter = yfilter;
    }
    if(value_path == "helloPktsSent")
    {
        hellopktssent.yfilter = yfilter;
    }
    if(value_path == "dbdPktsSent")
    {
        dbdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsReqPktsSent")
    {
        lsreqpktssent.yfilter = yfilter;
    }
    if(value_path == "lsUpdPktsSent")
    {
        lsupdpktssent.yfilter = yfilter;
    }
    if(value_path == "lsAckPktsSent")
    {
        lsackpktssent.yfilter = yfilter;
    }
    if(value_path == "droppedSendPkts")
    {
        droppedsendpkts.yfilter = yfilter;
    }
    if(value_path == "errSendPkts")
    {
        errsendpkts.yfilter = yfilter;
    }
    if(value_path == "unknownSendPkts")
    {
        unknownsendpkts.yfilter = yfilter;
    }
    if(value_path == "lsuFirstTxPkts")
    {
        lsufirsttxpkts.yfilter = yfilter;
    }
    if(value_path == "lsuRexmitPkts")
    {
        lsurexmitpkts.yfilter = yfilter;
    }
    if(value_path == "lsuForLsreqPkts")
    {
        lsuforlsreqpkts.yfilter = yfilter;
    }
    if(value_path == "lsuPeerTxPkts")
    {
        lsupeertxpkts.yfilter = yfilter;
    }
    if(value_path == "floodPktSendIpThrottle")
    {
        floodpktsendipthrottle.yfilter = yfilter;
    }
    if(value_path == "floodPktSendTokenThrottle")
    {
        floodpktsendtokenthrottle.yfilter = yfilter;
    }
    if(value_path == "lastStatsClearTs")
    {
        laststatsclearts.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::DomItems::DomList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totalPktsRcvd" || name == "helloPktsRcvd" || name == "dbdPktsRcvd" || name == "lsReqPktsRcvd" || name == "lsUpdPktsRcvd" || name == "lsAckPktsRcvd" || name == "rcvdPktsDropped" || name == "errPktsRcvd" || name == "errHelloPktsRcvd" || name == "errDbdPktsRcvd" || name == "errLsReqPktsRcvd" || name == "errLsUpdPktsRcvd" || name == "errLsAckPktsRcvd" || name == "unknownPktsRcvd" || name == "dupRtrIdPktsRcvd" || name == "dupSrcAddrPktsRcvd" || name == "wrongAreaPktsRcvd" || name == "invalidSrcAddrPktsRcvd" || name == "invalidDestAddrPktsRcvd" || name == "badCRCPktsRcvd" || name == "badVersionPktsRcvd" || name == "badResvFieldPktsRcvd" || name == "peerRtrIdChgdPktsRcvd" || name == "peerNotFoundPktsRcvd" || name == "badAuthPktsRcvd" || name == "badLenPktsRcvd" || name == "passiveIntfPktsRcvd" || name == "noOspfIntfPktsRcvd" || name == "rcvdLsaPktsIgnored" || name == "droppedLsaPktsWhileSPF" || name == "droppedLsaPktsWhileGR" || name == "totalPktsSent" || name == "helloPktsSent" || name == "dbdPktsSent" || name == "lsReqPktsSent" || name == "lsUpdPktsSent" || name == "lsAckPktsSent" || name == "droppedSendPkts" || name == "errSendPkts" || name == "unknownSendPkts" || name == "lsuFirstTxPkts" || name == "lsuRexmitPkts" || name == "lsuForLsreqPkts" || name == "lsuPeerTxPkts" || name == "floodPktSendIpThrottle" || name == "floodPktSendTokenThrottle" || name == "lastStatsClearTs")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EvtLogsItems()
    :
    eventlogs_list(this, {"eventtype"})
{

    yang_name = "evtLogs-items"; yang_parent_name = "Inst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::EvtLogsItems::~EvtLogsItems()
{
}

bool System::Ospfv3Items::InstItems::InstList::EvtLogsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventlogs_list.len(); index++)
    {
        if(eventlogs_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::InstItems::InstList::EvtLogsItems::has_operation() const
{
    for (std::size_t index=0; index<eventlogs_list.len(); index++)
    {
        if(eventlogs_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::EvtLogsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evtLogs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::EvtLogsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::EvtLogsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventLogs-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList>();
        c->parent = this;
        eventlogs_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::EvtLogsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eventlogs_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::InstItems::InstList::EvtLogsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::InstItems::InstList::EvtLogsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::InstItems::InstList::EvtLogsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventLogs-list")
        return true;
    return false;
}

System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList::EventLogsList()
    :
    eventtype{YType::enumeration, "eventType"},
    logsize{YType::enumeration, "logSize"},
    logsizekbytes{YType::uint16, "logSizeKBytes"}
{

    yang_name = "EventLogs-list"; yang_parent_name = "evtLogs-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList::~EventLogsList()
{
}

bool System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList::has_data() const
{
    if (is_presence_container) return true;
    return eventtype.is_set
	|| logsize.is_set
	|| logsizekbytes.is_set;
}

bool System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eventtype.yfilter)
	|| ydk::is_set(logsize.yfilter)
	|| ydk::is_set(logsizekbytes.yfilter);
}

std::string System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventLogs-list";
    ADD_KEY_TOKEN(eventtype, "eventType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eventtype.is_set || is_set(eventtype.yfilter)) leaf_name_data.push_back(eventtype.get_name_leafdata());
    if (logsize.is_set || is_set(logsize.yfilter)) leaf_name_data.push_back(logsize.get_name_leafdata());
    if (logsizekbytes.is_set || is_set(logsizekbytes.yfilter)) leaf_name_data.push_back(logsizekbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eventType")
    {
        eventtype = value;
        eventtype.value_namespace = name_space;
        eventtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logSize")
    {
        logsize = value;
        logsize.value_namespace = name_space;
        logsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logSizeKBytes")
    {
        logsizekbytes = value;
        logsizekbytes.value_namespace = name_space;
        logsizekbytes.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eventType")
    {
        eventtype.yfilter = yfilter;
    }
    if(value_path == "logSize")
    {
        logsize.yfilter = yfilter;
    }
    if(value_path == "logSizeKBytes")
    {
        logsizekbytes.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::InstItems::InstList::EvtLogsItems::EventLogsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventType" || name == "logSize" || name == "logSizeKBytes")
        return true;
    return false;
}

System::Ospfv3Items::IfItems::IfItems()
    :
    internalif_list(this, {"id", "instanceid"})
{

    yang_name = "if-items"; yang_parent_name = "ospfv3-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ospfv3Items::IfItems::~IfItems()
{
}

bool System::Ospfv3Items::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<internalif_list.len(); index++)
    {
        if(internalif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::IfItems::has_operation() const
{
    for (std::size_t index=0; index<internalif_list.len(); index++)
    {
        if(internalif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ospfv3-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ospfv3Items::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InternalIf-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::IfItems::InternalIfList>();
        c->parent = this;
        internalif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : internalif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InternalIf-list")
        return true;
    return false;
}

System::Ospfv3Items::IfItems::InternalIfList::InternalIfList()
    :
    id{YType::str, "id"},
    instanceid{YType::uint8, "instanceid"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    passivectrl{YType::enumeration, "passiveCtrl"},
    bfdctrl{YType::enumeration, "bfdCtrl"},
    nwt{YType::enumeration, "nwT"},
    prio{YType::uint8, "prio"},
    area{YType::str, "area"},
    advertisesecondaries{YType::boolean, "advertiseSecondaries"},
    operst{YType::enumeration, "operSt"},
    failstqual{YType::str, "failStQual"},
    type{YType::enumeration, "type"},
    flags{YType::str, "flags"},
    addr{YType::str, "addr"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    drid{YType::str, "drId"},
    bdrid{YType::str, "bdrId"},
    lsacksumsum{YType::uint32, "lsaCksumSum"},
    opercost{YType::uint16, "operCost"},
    operdeadintvl{YType::uint16, "operDeadIntvl"},
    hellointvl{YType::uint16, "helloIntvl"},
    deadintvl{YType::uint16, "deadIntvl"},
    rexmitintvl{YType::uint16, "rexmitIntvl"},
    xmitdelay{YType::uint16, "xmitDelay"},
    cost{YType::uint16, "cost"},
    instance{YType::str, "instance"},
    dom{YType::str, "dom"},
    instancedeletedviacli{YType::str, "instanceDeletedViaCLI"}
        ,
    rtvrfmbr_items(std::make_shared<System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems>())
{
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "InternalIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::Ospfv3Items::IfItems::InternalIfList::~InternalIfList()
{
}

bool System::Ospfv3Items::IfItems::InternalIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| instanceid.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| passivectrl.is_set
	|| bfdctrl.is_set
	|| nwt.is_set
	|| prio.is_set
	|| area.is_set
	|| advertisesecondaries.is_set
	|| operst.is_set
	|| failstqual.is_set
	|| type.is_set
	|| flags.is_set
	|| addr.is_set
	|| dr.is_set
	|| bdr.is_set
	|| drid.is_set
	|| bdrid.is_set
	|| lsacksumsum.is_set
	|| opercost.is_set
	|| operdeadintvl.is_set
	|| hellointvl.is_set
	|| deadintvl.is_set
	|| rexmitintvl.is_set
	|| xmitdelay.is_set
	|| cost.is_set
	|| instance.is_set
	|| dom.is_set
	|| instancedeletedviacli.is_set
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::Ospfv3Items::IfItems::InternalIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(instanceid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(passivectrl.yfilter)
	|| ydk::is_set(bfdctrl.yfilter)
	|| ydk::is_set(nwt.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(advertisesecondaries.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(failstqual.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(drid.yfilter)
	|| ydk::is_set(bdrid.yfilter)
	|| ydk::is_set(lsacksumsum.yfilter)
	|| ydk::is_set(opercost.yfilter)
	|| ydk::is_set(operdeadintvl.yfilter)
	|| ydk::is_set(hellointvl.yfilter)
	|| ydk::is_set(deadintvl.yfilter)
	|| ydk::is_set(rexmitintvl.yfilter)
	|| ydk::is_set(xmitdelay.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(dom.yfilter)
	|| ydk::is_set(instancedeletedviacli.yfilter)
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::Ospfv3Items::IfItems::InternalIfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ospfv3-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::Ospfv3Items::IfItems::InternalIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InternalIf-list";
    ADD_KEY_TOKEN(id, "id");
    ADD_KEY_TOKEN(instanceid, "instanceid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::IfItems::InternalIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (instanceid.is_set || is_set(instanceid.yfilter)) leaf_name_data.push_back(instanceid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (passivectrl.is_set || is_set(passivectrl.yfilter)) leaf_name_data.push_back(passivectrl.get_name_leafdata());
    if (bfdctrl.is_set || is_set(bfdctrl.yfilter)) leaf_name_data.push_back(bfdctrl.get_name_leafdata());
    if (nwt.is_set || is_set(nwt.yfilter)) leaf_name_data.push_back(nwt.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (advertisesecondaries.is_set || is_set(advertisesecondaries.yfilter)) leaf_name_data.push_back(advertisesecondaries.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (failstqual.is_set || is_set(failstqual.yfilter)) leaf_name_data.push_back(failstqual.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (drid.is_set || is_set(drid.yfilter)) leaf_name_data.push_back(drid.get_name_leafdata());
    if (bdrid.is_set || is_set(bdrid.yfilter)) leaf_name_data.push_back(bdrid.get_name_leafdata());
    if (lsacksumsum.is_set || is_set(lsacksumsum.yfilter)) leaf_name_data.push_back(lsacksumsum.get_name_leafdata());
    if (opercost.is_set || is_set(opercost.yfilter)) leaf_name_data.push_back(opercost.get_name_leafdata());
    if (operdeadintvl.is_set || is_set(operdeadintvl.yfilter)) leaf_name_data.push_back(operdeadintvl.get_name_leafdata());
    if (hellointvl.is_set || is_set(hellointvl.yfilter)) leaf_name_data.push_back(hellointvl.get_name_leafdata());
    if (deadintvl.is_set || is_set(deadintvl.yfilter)) leaf_name_data.push_back(deadintvl.get_name_leafdata());
    if (rexmitintvl.is_set || is_set(rexmitintvl.yfilter)) leaf_name_data.push_back(rexmitintvl.get_name_leafdata());
    if (xmitdelay.is_set || is_set(xmitdelay.yfilter)) leaf_name_data.push_back(xmitdelay.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (dom.is_set || is_set(dom.yfilter)) leaf_name_data.push_back(dom.get_name_leafdata());
    if (instancedeletedviacli.is_set || is_set(instancedeletedviacli.yfilter)) leaf_name_data.push_back(instancedeletedviacli.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::IfItems::InternalIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::IfItems::InternalIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::Ospfv3Items::IfItems::InternalIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instanceid")
    {
        instanceid = value;
        instanceid.value_namespace = name_space;
        instanceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passiveCtrl")
    {
        passivectrl = value;
        passivectrl.value_namespace = name_space;
        passivectrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdCtrl")
    {
        bfdctrl = value;
        bfdctrl.value_namespace = name_space;
        bfdctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nwT")
    {
        nwt = value;
        nwt.value_namespace = name_space;
        nwt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertiseSecondaries")
    {
        advertisesecondaries = value;
        advertisesecondaries.value_namespace = name_space;
        advertisesecondaries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failStQual")
    {
        failstqual = value;
        failstqual.value_namespace = name_space;
        failstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drId")
    {
        drid = value;
        drid.value_namespace = name_space;
        drid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdrId")
    {
        bdrid = value;
        bdrid.value_namespace = name_space;
        bdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum = value;
        lsacksumsum.value_namespace = name_space;
        lsacksumsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operCost")
    {
        opercost = value;
        opercost.value_namespace = name_space;
        opercost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operDeadIntvl")
    {
        operdeadintvl = value;
        operdeadintvl.value_namespace = name_space;
        operdeadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl = value;
        hellointvl.value_namespace = name_space;
        hellointvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl = value;
        deadintvl.value_namespace = name_space;
        deadintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl = value;
        rexmitintvl.value_namespace = name_space;
        rexmitintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay = value;
        xmitdelay.value_namespace = name_space;
        xmitdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dom")
    {
        dom = value;
        dom.value_namespace = name_space;
        dom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instanceDeletedViaCLI")
    {
        instancedeletedviacli = value;
        instancedeletedviacli.value_namespace = name_space;
        instancedeletedviacli.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::IfItems::InternalIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "instanceid")
    {
        instanceid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "passiveCtrl")
    {
        passivectrl.yfilter = yfilter;
    }
    if(value_path == "bfdCtrl")
    {
        bfdctrl.yfilter = yfilter;
    }
    if(value_path == "nwT")
    {
        nwt.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "advertiseSecondaries")
    {
        advertisesecondaries.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "failStQual")
    {
        failstqual.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "drId")
    {
        drid.yfilter = yfilter;
    }
    if(value_path == "bdrId")
    {
        bdrid.yfilter = yfilter;
    }
    if(value_path == "lsaCksumSum")
    {
        lsacksumsum.yfilter = yfilter;
    }
    if(value_path == "operCost")
    {
        opercost.yfilter = yfilter;
    }
    if(value_path == "operDeadIntvl")
    {
        operdeadintvl.yfilter = yfilter;
    }
    if(value_path == "helloIntvl")
    {
        hellointvl.yfilter = yfilter;
    }
    if(value_path == "deadIntvl")
    {
        deadintvl.yfilter = yfilter;
    }
    if(value_path == "rexmitIntvl")
    {
        rexmitintvl.yfilter = yfilter;
    }
    if(value_path == "xmitDelay")
    {
        xmitdelay.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "dom")
    {
        dom.yfilter = yfilter;
    }
    if(value_path == "instanceDeletedViaCLI")
    {
        instancedeletedviacli.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::IfItems::InternalIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "instanceid" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl" || name == "passiveCtrl" || name == "bfdCtrl" || name == "nwT" || name == "prio" || name == "area" || name == "advertiseSecondaries" || name == "operSt" || name == "failStQual" || name == "type" || name == "flags" || name == "addr" || name == "dr" || name == "bdr" || name == "drId" || name == "bdrId" || name == "lsaCksumSum" || name == "operCost" || name == "operDeadIntvl" || name == "helloIntvl" || name == "deadIntvl" || name == "rexmitIntvl" || name == "xmitDelay" || name == "cost" || name == "instance" || name == "dom" || name == "instanceDeletedViaCLI")
        return true;
    return false;
}

System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::IfItems::InternalIfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "InternalIf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::Ospfv3Items::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PimItems::PimItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::PimItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "pim-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PimItems::~PimItems()
{
}

bool System::PimItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::PimItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::PimItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PimItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::PimItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::PimItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::PimItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::PimItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"},
    jpdelay{YType::uint32, "jpDelay"},
    nrdelay{YType::uint16, "nrDelay"},
    nrnumrt{YType::uint16, "nrNumRt"},
    regstop{YType::boolean, "regStop"}
        ,
    dom_items(std::make_shared<System::PimItems::InstItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "pim-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PimItems::InstItems::~InstItems()
{
}

bool System::PimItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| jpdelay.is_set
	|| nrdelay.is_set
	|| nrnumrt.is_set
	|| regstop.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::PimItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| ydk::is_set(jpdelay.yfilter)
	|| ydk::is_set(nrdelay.yfilter)
	|| ydk::is_set(nrnumrt.yfilter)
	|| ydk::is_set(regstop.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::PimItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PimItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());
    if (jpdelay.is_set || is_set(jpdelay.yfilter)) leaf_name_data.push_back(jpdelay.get_name_leafdata());
    if (nrdelay.is_set || is_set(nrdelay.yfilter)) leaf_name_data.push_back(nrdelay.get_name_leafdata());
    if (nrnumrt.is_set || is_set(nrnumrt.yfilter)) leaf_name_data.push_back(nrnumrt.get_name_leafdata());
    if (regstop.is_set || is_set(regstop.yfilter)) leaf_name_data.push_back(regstop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::PimItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    return children;
}

void System::PimItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpDelay")
    {
        jpdelay = value;
        jpdelay.value_namespace = name_space;
        jpdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nrDelay")
    {
        nrdelay = value;
        nrdelay.value_namespace = name_space;
        nrdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nrNumRt")
    {
        nrnumrt = value;
        nrnumrt.value_namespace = name_space;
        nrnumrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStop")
    {
        regstop = value;
        regstop.value_namespace = name_space;
        regstop.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
    if(value_path == "jpDelay")
    {
        jpdelay.yfilter = yfilter;
    }
    if(value_path == "nrDelay")
    {
        nrdelay.yfilter = yfilter;
    }
    if(value_path == "nrNumRt")
    {
        nrnumrt.yfilter = yfilter;
    }
    if(value_path == "regStop")
    {
        regstop.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr" || name == "jpDelay" || name == "nrDelay" || name == "nrNumRt" || name == "regStop")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PimItems::InstItems::DomItems::~DomItems()
{
}

bool System::PimItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PimItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    mtu{YType::uint32, "mtu"},
    autoenable{YType::boolean, "autoEnable"},
    lognbhchng{YType::boolean, "logNbhChng"},
    flushroutes{YType::boolean, "flushRoutes"},
    bfd{YType::boolean, "bfd"}
        ,
    acastrpfunc_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems>())
    , autorp_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems>())
    , bsr_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems>())
    , db_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems>())
    , domstats_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::DomstatsItems>())
    , eventhist_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::EventHistItems>())
    , if_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems>())
    , limit_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::LimitItems>())
    , asm_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems>())
    , ssm_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::SsmItems>())
    , bidir_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::BidirItems>())
    , staticrp_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems>())
    , trstats_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::TrstatsItems>())
{
    acastrpfunc_items->parent = this;
    autorp_items->parent = this;
    bsr_items->parent = this;
    db_items->parent = this;
    domstats_items->parent = this;
    eventhist_items->parent = this;
    if_items->parent = this;
    limit_items->parent = this;
    asm_items->parent = this;
    ssm_items->parent = this;
    bidir_items->parent = this;
    staticrp_items->parent = this;
    trstats_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PimItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| mtu.is_set
	|| autoenable.is_set
	|| lognbhchng.is_set
	|| flushroutes.is_set
	|| bfd.is_set
	|| (acastrpfunc_items !=  nullptr && acastrpfunc_items->has_data())
	|| (autorp_items !=  nullptr && autorp_items->has_data())
	|| (bsr_items !=  nullptr && bsr_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (domstats_items !=  nullptr && domstats_items->has_data())
	|| (eventhist_items !=  nullptr && eventhist_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data())
	|| (limit_items !=  nullptr && limit_items->has_data())
	|| (asm_items !=  nullptr && asm_items->has_data())
	|| (ssm_items !=  nullptr && ssm_items->has_data())
	|| (bidir_items !=  nullptr && bidir_items->has_data())
	|| (staticrp_items !=  nullptr && staticrp_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(autoenable.yfilter)
	|| ydk::is_set(lognbhchng.yfilter)
	|| ydk::is_set(flushroutes.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| (acastrpfunc_items !=  nullptr && acastrpfunc_items->has_operation())
	|| (autorp_items !=  nullptr && autorp_items->has_operation())
	|| (bsr_items !=  nullptr && bsr_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (domstats_items !=  nullptr && domstats_items->has_operation())
	|| (eventhist_items !=  nullptr && eventhist_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (limit_items !=  nullptr && limit_items->has_operation())
	|| (asm_items !=  nullptr && asm_items->has_operation())
	|| (ssm_items !=  nullptr && ssm_items->has_operation())
	|| (bidir_items !=  nullptr && bidir_items->has_operation())
	|| (staticrp_items !=  nullptr && staticrp_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pim-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PimItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (autoenable.is_set || is_set(autoenable.yfilter)) leaf_name_data.push_back(autoenable.get_name_leafdata());
    if (lognbhchng.is_set || is_set(lognbhchng.yfilter)) leaf_name_data.push_back(lognbhchng.get_name_leafdata());
    if (flushroutes.is_set || is_set(flushroutes.yfilter)) leaf_name_data.push_back(flushroutes.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acastrpfunc-items")
    {
        if(acastrpfunc_items == nullptr)
        {
            acastrpfunc_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems>();
        }
        return acastrpfunc_items;
    }

    if(child_yang_name == "autorp-items")
    {
        if(autorp_items == nullptr)
        {
            autorp_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems>();
        }
        return autorp_items;
    }

    if(child_yang_name == "bsr-items")
    {
        if(bsr_items == nullptr)
        {
            bsr_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems>();
        }
        return bsr_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "domstats-items")
    {
        if(domstats_items == nullptr)
        {
            domstats_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DomstatsItems>();
        }
        return domstats_items;
    }

    if(child_yang_name == "eventHist-items")
    {
        if(eventhist_items == nullptr)
        {
            eventhist_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::EventHistItems>();
        }
        return eventhist_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "limit-items")
    {
        if(limit_items == nullptr)
        {
            limit_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::LimitItems>();
        }
        return limit_items;
    }

    if(child_yang_name == "asm-items")
    {
        if(asm_items == nullptr)
        {
            asm_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems>();
        }
        return asm_items;
    }

    if(child_yang_name == "ssm-items")
    {
        if(ssm_items == nullptr)
        {
            ssm_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::SsmItems>();
        }
        return ssm_items;
    }

    if(child_yang_name == "bidir-items")
    {
        if(bidir_items == nullptr)
        {
            bidir_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::BidirItems>();
        }
        return bidir_items;
    }

    if(child_yang_name == "staticrp-items")
    {
        if(staticrp_items == nullptr)
        {
            staticrp_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems>();
        }
        return staticrp_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::TrstatsItems>();
        }
        return trstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acastrpfunc_items != nullptr)
    {
        children["acastrpfunc-items"] = acastrpfunc_items;
    }

    if(autorp_items != nullptr)
    {
        children["autorp-items"] = autorp_items;
    }

    if(bsr_items != nullptr)
    {
        children["bsr-items"] = bsr_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(domstats_items != nullptr)
    {
        children["domstats-items"] = domstats_items;
    }

    if(eventhist_items != nullptr)
    {
        children["eventHist-items"] = eventhist_items;
    }

    if(if_items != nullptr)
    {
        children["if-items"] = if_items;
    }

    if(limit_items != nullptr)
    {
        children["limit-items"] = limit_items;
    }

    if(asm_items != nullptr)
    {
        children["asm-items"] = asm_items;
    }

    if(ssm_items != nullptr)
    {
        children["ssm-items"] = ssm_items;
    }

    if(bidir_items != nullptr)
    {
        children["bidir-items"] = bidir_items;
    }

    if(staticrp_items != nullptr)
    {
        children["staticrp-items"] = staticrp_items;
    }

    if(trstats_items != nullptr)
    {
        children["trstats-items"] = trstats_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoEnable")
    {
        autoenable = value;
        autoenable.value_namespace = name_space;
        autoenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng = value;
        lognbhchng.value_namespace = name_space;
        lognbhchng.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes = value;
        flushroutes.value_namespace = name_space;
        flushroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "autoEnable")
    {
        autoenable.yfilter = yfilter;
    }
    if(value_path == "logNbhChng")
    {
        lognbhchng.yfilter = yfilter;
    }
    if(value_path == "flushRoutes")
    {
        flushroutes.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acastrpfunc-items" || name == "autorp-items" || name == "bsr-items" || name == "db-items" || name == "domstats-items" || name == "eventHist-items" || name == "if-items" || name == "limit-items" || name == "asm-items" || name == "ssm-items" || name == "bidir-items" || name == "staticrp-items" || name == "trstats-items" || name == "name" || name == "adminSt" || name == "ctrl" || name == "mtu" || name == "autoEnable" || name == "logNbhChng" || name == "flushRoutes" || name == "bfd")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::AcastrpfuncItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    srcif{YType::str, "srcIf"},
    localif{YType::str, "localIf"}
        ,
    peer_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems>())
{
    peer_items->parent = this;

    yang_name = "acastrpfunc-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::~AcastrpfuncItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| srcif.is_set
	|| localif.is_set
	|| (peer_items !=  nullptr && peer_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(localif.yfilter)
	|| (peer_items !=  nullptr && peer_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acastrpfunc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (localif.is_set || is_set(localif.yfilter)) leaf_name_data.push_back(localif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-items")
    {
        if(peer_items == nullptr)
        {
            peer_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems>();
        }
        return peer_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer_items != nullptr)
    {
        children["peer-items"] = peer_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localIf")
    {
        localif = value;
        localif.value_namespace = name_space;
        localif.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "localIf")
    {
        localif.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-items" || name == "name" || name == "descr" || name == "srcIf" || name == "localIf")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::PeerItems()
    :
    acastrppeer_list(this, {"addr", "rpsetaddr"})
{

    yang_name = "peer-items"; yang_parent_name = "acastrpfunc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::~PeerItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<acastrppeer_list.len(); index++)
    {
        if(acastrppeer_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::has_operation() const
{
    for (std::size_t index=0; index<acastrppeer_list.len(); index++)
    {
        if(acastrppeer_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AcastRPPeer-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList>();
        c->parent = this;
        acastrppeer_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : acastrppeer_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AcastRPPeer-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList::AcastRPPeerList()
    :
    addr{YType::str, "addr"},
    rpsetaddr{YType::str, "rpSetAddr"}
{

    yang_name = "AcastRPPeer-list"; yang_parent_name = "peer-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList::~AcastRPPeerList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| rpsetaddr.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(rpsetaddr.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AcastRPPeer-list";
    ADD_KEY_TOKEN(addr, "addr");
    ADD_KEY_TOKEN(rpsetaddr, "rpSetAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (rpsetaddr.is_set || is_set(rpsetaddr.yfilter)) leaf_name_data.push_back(rpsetaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpSetAddr")
    {
        rpsetaddr = value;
        rpsetaddr.value_namespace = name_space;
        rpsetaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "rpSetAddr")
    {
        rpsetaddr.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AcastrpfuncItems::PeerItems::AcastRPPeerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "rpSetAddr")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::AutorpItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"}
        ,
    rpfilter_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems>())
    , mafilter_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems>())
    , rpfunc_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems>())
    , mafunc_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems>())
{
    rpfilter_items->parent = this;
    mafilter_items->parent = this;
    rpfunc_items->parent = this;
    mafunc_items->parent = this;

    yang_name = "autorp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::~AutorpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| (rpfilter_items !=  nullptr && rpfilter_items->has_data())
	|| (mafilter_items !=  nullptr && mafilter_items->has_data())
	|| (rpfunc_items !=  nullptr && rpfunc_items->has_data())
	|| (mafunc_items !=  nullptr && mafunc_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (rpfilter_items !=  nullptr && rpfilter_items->has_operation())
	|| (mafilter_items !=  nullptr && mafilter_items->has_operation())
	|| (rpfunc_items !=  nullptr && rpfunc_items->has_operation())
	|| (mafunc_items !=  nullptr && mafunc_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::AutorpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autorp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AutorpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AutorpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpfilter-items")
    {
        if(rpfilter_items == nullptr)
        {
            rpfilter_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems>();
        }
        return rpfilter_items;
    }

    if(child_yang_name == "mafilter-items")
    {
        if(mafilter_items == nullptr)
        {
            mafilter_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems>();
        }
        return mafilter_items;
    }

    if(child_yang_name == "rpfunc-items")
    {
        if(rpfunc_items == nullptr)
        {
            rpfunc_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems>();
        }
        return rpfunc_items;
    }

    if(child_yang_name == "mafunc-items")
    {
        if(mafunc_items == nullptr)
        {
            mafunc_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems>();
        }
        return mafunc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AutorpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpfilter_items != nullptr)
    {
        children["rpfilter-items"] = rpfilter_items;
    }

    if(mafilter_items != nullptr)
    {
        children["mafilter-items"] = mafilter_items;
    }

    if(rpfunc_items != nullptr)
    {
        children["rpfunc-items"] = rpfunc_items;
    }

    if(mafunc_items != nullptr)
    {
        children["mafunc-items"] = mafunc_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpfilter-items" || name == "mafilter-items" || name == "rpfunc-items" || name == "mafunc-items" || name == "name" || name == "descr" || name == "ctrl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::RpfilterItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rpfilter-items"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::~RpfilterItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfilter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfilterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems::MafilterItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "mafilter-items"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems::~MafilterItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mafilter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafilterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RpfuncItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    srcif{YType::str, "srcIf"},
    prio{YType::uint16, "prio"},
    interval{YType::uint16, "interval"},
    scope{YType::uint16, "scope"},
    addr{YType::str, "addr"},
    usesendrpanncommand{YType::boolean, "useSendRPAnnCommand"}
        ,
    range_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems>())
{
    range_items->parent = this;

    yang_name = "rpfunc-items"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::~RpfuncItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| srcif.is_set
	|| prio.is_set
	|| interval.is_set
	|| scope.is_set
	|| addr.is_set
	|| usesendrpanncommand.is_set
	|| (range_items !=  nullptr && range_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(usesendrpanncommand.yfilter)
	|| (range_items !=  nullptr && range_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfunc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (usesendrpanncommand.is_set || is_set(usesendrpanncommand.yfilter)) leaf_name_data.push_back(usesendrpanncommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range-items")
    {
        if(range_items == nullptr)
        {
            range_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems>();
        }
        return range_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range_items != nullptr)
    {
        children["range-items"] = range_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useSendRPAnnCommand")
    {
        usesendrpanncommand = value;
        usesendrpanncommand.value_namespace = name_space;
        usesendrpanncommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "useSendRPAnnCommand")
    {
        usesendrpanncommand.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-items" || name == "name" || name == "descr" || name == "srcIf" || name == "prio" || name == "interval" || name == "scope" || name == "addr" || name == "useSendRPAnnCommand")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RangeItems()
    :
    rpgrprange_list(this, {"bidir"})
{

    yang_name = "range-items"; yang_parent_name = "rpfunc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::~RangeItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPGrpRange-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList>();
        c->parent = this;
        rpgrprange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrprange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPGrpRange-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList::RPGrpRangeList()
    :
    bidir{YType::boolean, "bidir"},
    override{YType::boolean, "override"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"}
{

    yang_name = "RPGrpRange-list"; yang_parent_name = "range-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList::~RPGrpRangeList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList::has_data() const
{
    if (is_presence_container) return true;
    return bidir.is_set
	|| override.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| ydk::is_set(override.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPGrpRange-list";
    ADD_KEY_TOKEN(bidir, "bidir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::RpfuncItems::RangeItems::RPGrpRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir" || name == "override" || name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems::MafuncItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    srcif{YType::str, "srcIf"},
    scope{YType::uint16, "scope"},
    usesendrpdiscommand{YType::boolean, "useSendRPDisCommand"}
{

    yang_name = "mafunc-items"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems::~MafuncItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| srcif.is_set
	|| scope.is_set
	|| usesendrpdiscommand.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(usesendrpdiscommand.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mafunc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (usesendrpdiscommand.is_set || is_set(usesendrpdiscommand.yfilter)) leaf_name_data.push_back(usesendrpdiscommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useSendRPDisCommand")
    {
        usesendrpdiscommand = value;
        usesendrpdiscommand.value_namespace = name_space;
        usesendrpdiscommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "useSendRPDisCommand")
    {
        usesendrpdiscommand.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AutorpItems::MafuncItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "srcIf" || name == "scope" || name == "useSendRPDisCommand")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"}
        ,
    rpfilter_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems>())
    , bsrfilter_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems>())
    , rpfunc_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems>())
    , bsrfunc_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems>())
{
    rpfilter_items->parent = this;
    bsrfilter_items->parent = this;
    rpfunc_items->parent = this;
    bsrfunc_items->parent = this;

    yang_name = "bsr-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::~BsrItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| (rpfilter_items !=  nullptr && rpfilter_items->has_data())
	|| (bsrfilter_items !=  nullptr && bsrfilter_items->has_data())
	|| (rpfunc_items !=  nullptr && rpfunc_items->has_data())
	|| (bsrfunc_items !=  nullptr && bsrfunc_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (rpfilter_items !=  nullptr && rpfilter_items->has_operation())
	|| (bsrfilter_items !=  nullptr && bsrfilter_items->has_operation())
	|| (rpfunc_items !=  nullptr && rpfunc_items->has_operation())
	|| (bsrfunc_items !=  nullptr && bsrfunc_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::BsrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::BsrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::BsrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpfilter-items")
    {
        if(rpfilter_items == nullptr)
        {
            rpfilter_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems>();
        }
        return rpfilter_items;
    }

    if(child_yang_name == "bsrfilter-items")
    {
        if(bsrfilter_items == nullptr)
        {
            bsrfilter_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems>();
        }
        return bsrfilter_items;
    }

    if(child_yang_name == "rpfunc-items")
    {
        if(rpfunc_items == nullptr)
        {
            rpfunc_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems>();
        }
        return rpfunc_items;
    }

    if(child_yang_name == "bsrfunc-items")
    {
        if(bsrfunc_items == nullptr)
        {
            bsrfunc_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems>();
        }
        return bsrfunc_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::BsrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpfilter_items != nullptr)
    {
        children["rpfilter-items"] = rpfilter_items;
    }

    if(bsrfilter_items != nullptr)
    {
        children["bsrfilter-items"] = bsrfilter_items;
    }

    if(rpfunc_items != nullptr)
    {
        children["rpfunc-items"] = rpfunc_items;
    }

    if(bsrfunc_items != nullptr)
    {
        children["bsrfunc-items"] = bsrfunc_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpfilter-items" || name == "bsrfilter-items" || name == "rpfunc-items" || name == "bsrfunc-items" || name == "name" || name == "descr" || name == "ctrl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems::RpfilterItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "rpfilter-items"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems::~RpfilterItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfilter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfilterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::BsrfilterItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "bsrfilter-items"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::~BsrfilterItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| rtmap.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsrfilter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfilterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "rtMap")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RpfuncItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    srcif{YType::str, "srcIf"},
    prio{YType::uint16, "prio"},
    interval{YType::uint16, "interval"},
    scope{YType::uint16, "scope"},
    addr{YType::str, "addr"},
    usesendrpanncommand{YType::boolean, "useSendRPAnnCommand"}
        ,
    range_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems>())
{
    range_items->parent = this;

    yang_name = "rpfunc-items"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::~RpfuncItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| srcif.is_set
	|| prio.is_set
	|| interval.is_set
	|| scope.is_set
	|| addr.is_set
	|| usesendrpanncommand.is_set
	|| (range_items !=  nullptr && range_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(usesendrpanncommand.yfilter)
	|| (range_items !=  nullptr && range_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfunc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (usesendrpanncommand.is_set || is_set(usesendrpanncommand.yfilter)) leaf_name_data.push_back(usesendrpanncommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range-items")
    {
        if(range_items == nullptr)
        {
            range_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems>();
        }
        return range_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range_items != nullptr)
    {
        children["range-items"] = range_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useSendRPAnnCommand")
    {
        usesendrpanncommand = value;
        usesendrpanncommand.value_namespace = name_space;
        usesendrpanncommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "useSendRPAnnCommand")
    {
        usesendrpanncommand.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-items" || name == "name" || name == "descr" || name == "srcIf" || name == "prio" || name == "interval" || name == "scope" || name == "addr" || name == "useSendRPAnnCommand")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RangeItems()
    :
    rpgrprange_list(this, {"bidir"})
{

    yang_name = "range-items"; yang_parent_name = "rpfunc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::~RangeItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPGrpRange-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList>();
        c->parent = this;
        rpgrprange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrprange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPGrpRange-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList::RPGrpRangeList()
    :
    bidir{YType::boolean, "bidir"},
    override{YType::boolean, "override"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"}
{

    yang_name = "RPGrpRange-list"; yang_parent_name = "range-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList::~RPGrpRangeList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList::has_data() const
{
    if (is_presence_container) return true;
    return bidir.is_set
	|| override.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| ydk::is_set(override.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPGrpRange-list";
    ADD_KEY_TOKEN(bidir, "bidir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::RpfuncItems::RangeItems::RPGrpRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir" || name == "override" || name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::BsrfuncItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    srcif{YType::str, "srcIf"},
    hashlen{YType::uint16, "hashLen"},
    prio{YType::uint16, "prio"},
    interval{YType::uint16, "interval"}
{

    yang_name = "bsrfunc-items"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::~BsrfuncItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| srcif.is_set
	|| hashlen.is_set
	|| prio.is_set
	|| interval.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(hashlen.yfilter)
	|| ydk::is_set(prio.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsrfunc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (hashlen.is_set || is_set(hashlen.yfilter)) leaf_name_data.push_back(hashlen.get_name_leafdata());
    if (prio.is_set || is_set(prio.yfilter)) leaf_name_data.push_back(prio.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashLen")
    {
        hashlen = value;
        hashlen.value_namespace = name_space;
        hashlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prio")
    {
        prio = value;
        prio.value_namespace = name_space;
        prio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "hashLen")
    {
        hashlen.yfilter = yfilter;
    }
    if(value_path == "prio")
    {
        prio.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::BsrItems::BsrfuncItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "srcIf" || name == "hashLen" || name == "prio" || name == "interval")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    autorp_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems>())
    , bsr_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems>())
    , grange_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems>())
    , src_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems>())
    , rp_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems>())
{
    autorp_items->parent = this;
    bsr_items->parent = this;
    grange_items->parent = this;
    src_items->parent = this;
    rp_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (autorp_items !=  nullptr && autorp_items->has_data())
	|| (bsr_items !=  nullptr && bsr_items->has_data())
	|| (grange_items !=  nullptr && grange_items->has_data())
	|| (src_items !=  nullptr && src_items->has_data())
	|| (rp_items !=  nullptr && rp_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (autorp_items !=  nullptr && autorp_items->has_operation())
	|| (bsr_items !=  nullptr && bsr_items->has_operation())
	|| (grange_items !=  nullptr && grange_items->has_operation())
	|| (src_items !=  nullptr && src_items->has_operation())
	|| (rp_items !=  nullptr && rp_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autorp-items")
    {
        if(autorp_items == nullptr)
        {
            autorp_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems>();
        }
        return autorp_items;
    }

    if(child_yang_name == "bsr-items")
    {
        if(bsr_items == nullptr)
        {
            bsr_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems>();
        }
        return bsr_items;
    }

    if(child_yang_name == "grange-items")
    {
        if(grange_items == nullptr)
        {
            grange_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems>();
        }
        return grange_items;
    }

    if(child_yang_name == "src-items")
    {
        if(src_items == nullptr)
        {
            src_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems>();
        }
        return src_items;
    }

    if(child_yang_name == "rp-items")
    {
        if(rp_items == nullptr)
        {
            rp_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems>();
        }
        return rp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(autorp_items != nullptr)
    {
        children["autorp-items"] = autorp_items;
    }

    if(bsr_items != nullptr)
    {
        children["bsr-items"] = bsr_items;
    }

    if(grange_items != nullptr)
    {
        children["grange-items"] = grange_items;
    }

    if(src_items != nullptr)
    {
        children["src-items"] = src_items;
    }

    if(rp_items != nullptr)
    {
        children["rp-items"] = rp_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autorp-items" || name == "bsr-items" || name == "grange-items" || name == "src-items" || name == "rp-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutorpItems()
    :
    autorppinfo_list(this, {"addr"})
{

    yang_name = "autorp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::~AutorpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<autorppinfo_list.len(); index++)
    {
        if(autorppinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::has_operation() const
{
    for (std::size_t index=0; index<autorppinfo_list.len(); index++)
    {
        if(autorppinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autorp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AutoRPPInfo-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList>();
        c->parent = this;
        autorppinfo_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : autorppinfo_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AutoRPPInfo-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList::AutoRPPInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    expiry{YType::str, "expiry"},
    uptime{YType::str, "uptime"},
    priority{YType::uint32, "priority"},
    hashmasklen{YType::uint32, "hashMaskLen"}
{

    yang_name = "AutoRPPInfo-list"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList::~AutoRPPInfoList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| expiry.is_set
	|| uptime.is_set
	|| priority.is_set
	|| hashmasklen.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hashmasklen.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AutoRPPInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::AutorpItems::AutoRPPInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "expiry" || name == "uptime" || name == "priority" || name == "hashMaskLen")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BsrItems()
    :
    bsrinfo_list(this, {"addr"})
{

    yang_name = "bsr-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::~BsrItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bsrinfo_list.len(); index++)
    {
        if(bsrinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::has_operation() const
{
    for (std::size_t index=0; index<bsrinfo_list.len(); index++)
    {
        if(bsrinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BSRInfo-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList>();
        c->parent = this;
        bsrinfo_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bsrinfo_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BSRInfo-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList::BSRInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    expiry{YType::str, "expiry"},
    uptime{YType::str, "uptime"},
    priority{YType::uint32, "priority"},
    hashmasklen{YType::uint32, "hashMaskLen"}
{

    yang_name = "BSRInfo-list"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList::~BSRInfoList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| expiry.is_set
	|| uptime.is_set
	|| priority.is_set
	|| hashmasklen.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hashmasklen.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BSRInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::BsrItems::BSRInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "expiry" || name == "uptime" || name == "priority" || name == "hashMaskLen")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::GrangeItems()
    :
    rpgrange_list(this, {"addr"})
{

    yang_name = "grange-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::~GrangeItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPGrange-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList>();
        c->parent = this;
        rpgrange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPGrange-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList::RPGrangeList()
    :
    addr{YType::str, "addr"},
    flags{YType::str, "flags"},
    rpaddr{YType::str, "rpAddr"}
{

    yang_name = "RPGrange-list"; yang_parent_name = "grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList::~RPGrangeList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| flags.is_set
	|| rpaddr.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(rpaddr.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPGrange-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::GrangeItems::RPGrangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "flags" || name == "rpAddr")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::SrcItems()
    :
    route_list(this, {"src", "grp"})
{

    yang_name = "src-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::~SrcItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::RouteList()
    :
    src{YType::str, "src"},
    grp{YType::str, "grp"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rpaddrroute{YType::str, "rpAddrRoute"},
    iif{YType::str, "iif"},
    expiryts{YType::str, "expiryTs"},
    rpfnbr{YType::str, "rpfNbr"},
    rpfsrc{YType::str, "rpfSrc"},
    createts{YType::str, "createTs"},
    asserttime{YType::str, "assertTime"},
    rttype{YType::str, "rtType"},
    swpktcnt{YType::uint32, "swPktCnt"},
    swbytecnt{YType::uint32, "swByteCnt"},
    hwpktcnt{YType::uint32, "hwPktCnt"},
    hwbytecnt{YType::uint32, "hwByteCnt"},
    assertmetric{YType::uint32, "assertMetric"},
    assertmetricpref{YType::uint32, "assertMetricPref"},
    routebits{YType::str, "routeBits"},
    rttimeoutinvtl{YType::uint32, "rtTimeOutInvtl"},
    jpholdtime{YType::uint32, "jpHoldTime"}
        ,
    oif_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "src-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::~RouteList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return src.is_set
	|| grp.is_set
	|| name.is_set
	|| ver.is_set
	|| rpaddrroute.is_set
	|| iif.is_set
	|| expiryts.is_set
	|| rpfnbr.is_set
	|| rpfsrc.is_set
	|| createts.is_set
	|| asserttime.is_set
	|| rttype.is_set
	|| swpktcnt.is_set
	|| swbytecnt.is_set
	|| hwpktcnt.is_set
	|| hwbytecnt.is_set
	|| assertmetric.is_set
	|| assertmetricpref.is_set
	|| routebits.is_set
	|| rttimeoutinvtl.is_set
	|| jpholdtime.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(grp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rpaddrroute.yfilter)
	|| ydk::is_set(iif.yfilter)
	|| ydk::is_set(expiryts.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(rpfsrc.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(asserttime.yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| ydk::is_set(swpktcnt.yfilter)
	|| ydk::is_set(swbytecnt.yfilter)
	|| ydk::is_set(hwpktcnt.yfilter)
	|| ydk::is_set(hwbytecnt.yfilter)
	|| ydk::is_set(assertmetric.yfilter)
	|| ydk::is_set(assertmetricpref.yfilter)
	|| ydk::is_set(routebits.yfilter)
	|| ydk::is_set(rttimeoutinvtl.yfilter)
	|| ydk::is_set(jpholdtime.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(src, "src");
    ADD_KEY_TOKEN(grp, "grp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (grp.is_set || is_set(grp.yfilter)) leaf_name_data.push_back(grp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rpaddrroute.is_set || is_set(rpaddrroute.yfilter)) leaf_name_data.push_back(rpaddrroute.get_name_leafdata());
    if (iif.is_set || is_set(iif.yfilter)) leaf_name_data.push_back(iif.get_name_leafdata());
    if (expiryts.is_set || is_set(expiryts.yfilter)) leaf_name_data.push_back(expiryts.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (rpfsrc.is_set || is_set(rpfsrc.yfilter)) leaf_name_data.push_back(rpfsrc.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (asserttime.is_set || is_set(asserttime.yfilter)) leaf_name_data.push_back(asserttime.get_name_leafdata());
    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());
    if (swpktcnt.is_set || is_set(swpktcnt.yfilter)) leaf_name_data.push_back(swpktcnt.get_name_leafdata());
    if (swbytecnt.is_set || is_set(swbytecnt.yfilter)) leaf_name_data.push_back(swbytecnt.get_name_leafdata());
    if (hwpktcnt.is_set || is_set(hwpktcnt.yfilter)) leaf_name_data.push_back(hwpktcnt.get_name_leafdata());
    if (hwbytecnt.is_set || is_set(hwbytecnt.yfilter)) leaf_name_data.push_back(hwbytecnt.get_name_leafdata());
    if (assertmetric.is_set || is_set(assertmetric.yfilter)) leaf_name_data.push_back(assertmetric.get_name_leafdata());
    if (assertmetricpref.is_set || is_set(assertmetricpref.yfilter)) leaf_name_data.push_back(assertmetricpref.get_name_leafdata());
    if (routebits.is_set || is_set(routebits.yfilter)) leaf_name_data.push_back(routebits.get_name_leafdata());
    if (rttimeoutinvtl.is_set || is_set(rttimeoutinvtl.yfilter)) leaf_name_data.push_back(rttimeoutinvtl.get_name_leafdata());
    if (jpholdtime.is_set || is_set(jpholdtime.yfilter)) leaf_name_data.push_back(jpholdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grp")
    {
        grp = value;
        grp.value_namespace = name_space;
        grp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddrRoute")
    {
        rpaddrroute = value;
        rpaddrroute.value_namespace = name_space;
        rpaddrroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iif")
    {
        iif = value;
        iif.value_namespace = name_space;
        iif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTs")
    {
        expiryts = value;
        expiryts.value_namespace = name_space;
        expiryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfSrc")
    {
        rpfsrc = value;
        rpfsrc.value_namespace = name_space;
        rpfsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertTime")
    {
        asserttime = value;
        asserttime.value_namespace = name_space;
        asserttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swPktCnt")
    {
        swpktcnt = value;
        swpktcnt.value_namespace = name_space;
        swpktcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swByteCnt")
    {
        swbytecnt = value;
        swbytecnt.value_namespace = name_space;
        swbytecnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwPktCnt")
    {
        hwpktcnt = value;
        hwpktcnt.value_namespace = name_space;
        hwpktcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwByteCnt")
    {
        hwbytecnt = value;
        hwbytecnt.value_namespace = name_space;
        hwbytecnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetric")
    {
        assertmetric = value;
        assertmetric.value_namespace = name_space;
        assertmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetricPref")
    {
        assertmetricpref = value;
        assertmetricpref.value_namespace = name_space;
        assertmetricpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeBits")
    {
        routebits = value;
        routebits.value_namespace = name_space;
        routebits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl = value;
        rttimeoutinvtl.value_namespace = name_space;
        rttimeoutinvtl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime = value;
        jpholdtime.value_namespace = name_space;
        jpholdtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "grp")
    {
        grp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rpAddrRoute")
    {
        rpaddrroute.yfilter = yfilter;
    }
    if(value_path == "iif")
    {
        iif.yfilter = yfilter;
    }
    if(value_path == "expiryTs")
    {
        expiryts.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "rpfSrc")
    {
        rpfsrc.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "assertTime")
    {
        asserttime.yfilter = yfilter;
    }
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
    if(value_path == "swPktCnt")
    {
        swpktcnt.yfilter = yfilter;
    }
    if(value_path == "swByteCnt")
    {
        swbytecnt.yfilter = yfilter;
    }
    if(value_path == "hwPktCnt")
    {
        hwpktcnt.yfilter = yfilter;
    }
    if(value_path == "hwByteCnt")
    {
        hwbytecnt.yfilter = yfilter;
    }
    if(value_path == "assertMetric")
    {
        assertmetric.yfilter = yfilter;
    }
    if(value_path == "assertMetricPref")
    {
        assertmetricpref.yfilter = yfilter;
    }
    if(value_path == "routeBits")
    {
        routebits.yfilter = yfilter;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl.yfilter = yfilter;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "src" || name == "grp" || name == "name" || name == "ver" || name == "rpAddrRoute" || name == "iif" || name == "expiryTs" || name == "rpfNbr" || name == "rpfSrc" || name == "createTs" || name == "assertTime" || name == "rtType" || name == "swPktCnt" || name == "swByteCnt" || name == "hwPktCnt" || name == "hwByteCnt" || name == "assertMetric" || name == "assertMetricPref" || name == "routeBits" || name == "rtTimeOutInvtl" || name == "jpHoldTime")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifItems()
    :
    oif_list(this, {"oif"})
{

    yang_name = "oif-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::~OifItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList>();
        c->parent = this;
        oif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::OifList()
    :
    oif{YType::str, "oIf"},
    flags{YType::str, "flags"}
{

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::~OifList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oif.is_set
	|| flags.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oif.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oif, "oIf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oif.is_set || is_set(oif.yfilter)) leaf_name_data.push_back(oif.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oIf")
    {
        oif = value;
        oif.value_namespace = name_space;
        oif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oIf")
    {
        oif.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oIf" || name == "flags")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RpItems()
    :
    rpinfo_list(this, {"addr"})
{

    yang_name = "rp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::~RpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpinfo_list.len(); index++)
    {
        if(rpinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::has_operation() const
{
    for (std::size_t index=0; index<rpinfo_list.len(); index++)
    {
        if(rpinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPInfo-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList>();
        c->parent = this;
        rpinfo_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpinfo_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPInfo-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RPInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    local{YType::boolean, "local"},
    uptime{YType::str, "uptime"},
    arpexp{YType::str, "arpExp"},
    bsrexp{YType::str, "bsrExp"},
    bsraddr{YType::str, "bsrAddr"},
    priority{YType::uint32, "priority"},
    disctype{YType::str, "discType"},
    dfordinal{YType::uint32, "dfOrdinal"}
        ,
    rsrp2grange_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems>())
{
    rsrp2grange_items->parent = this;

    yang_name = "RPInfo-list"; yang_parent_name = "rp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::~RPInfoList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| local.is_set
	|| uptime.is_set
	|| arpexp.is_set
	|| bsrexp.is_set
	|| bsraddr.is_set
	|| priority.is_set
	|| disctype.is_set
	|| dfordinal.is_set
	|| (rsrp2grange_items !=  nullptr && rsrp2grange_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(arpexp.yfilter)
	|| ydk::is_set(bsrexp.yfilter)
	|| ydk::is_set(bsraddr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(disctype.yfilter)
	|| ydk::is_set(dfordinal.yfilter)
	|| (rsrp2grange_items !=  nullptr && rsrp2grange_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (arpexp.is_set || is_set(arpexp.yfilter)) leaf_name_data.push_back(arpexp.get_name_leafdata());
    if (bsrexp.is_set || is_set(bsrexp.yfilter)) leaf_name_data.push_back(bsrexp.get_name_leafdata());
    if (bsraddr.is_set || is_set(bsraddr.yfilter)) leaf_name_data.push_back(bsraddr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (disctype.is_set || is_set(disctype.yfilter)) leaf_name_data.push_back(disctype.get_name_leafdata());
    if (dfordinal.is_set || is_set(dfordinal.yfilter)) leaf_name_data.push_back(dfordinal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrP2Grange-items")
    {
        if(rsrp2grange_items == nullptr)
        {
            rsrp2grange_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems>();
        }
        return rsrp2grange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsrp2grange_items != nullptr)
    {
        children["rsrP2Grange-items"] = rsrp2grange_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arpExp")
    {
        arpexp = value;
        arpexp.value_namespace = name_space;
        arpexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrExp")
    {
        bsrexp = value;
        bsrexp.value_namespace = name_space;
        bsrexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrAddr")
    {
        bsraddr = value;
        bsraddr.value_namespace = name_space;
        bsraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discType")
    {
        disctype = value;
        disctype.value_namespace = name_space;
        disctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOrdinal")
    {
        dfordinal = value;
        dfordinal.value_namespace = name_space;
        dfordinal.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "arpExp")
    {
        arpexp.yfilter = yfilter;
    }
    if(value_path == "bsrExp")
    {
        bsrexp.yfilter = yfilter;
    }
    if(value_path == "bsrAddr")
    {
        bsraddr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "discType")
    {
        disctype.yfilter = yfilter;
    }
    if(value_path == "dfOrdinal")
    {
        dfordinal.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrP2Grange-items" || name == "addr" || name == "name" || name == "local" || name == "uptime" || name == "arpExp" || name == "bsrExp" || name == "bsrAddr" || name == "priority" || name == "discType" || name == "dfOrdinal")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsrP2GrangeItems()
    :
    rsrp2grange_list(this, {"tdn"})
{

    yang_name = "rsrP2Grange-items"; yang_parent_name = "RPInfo-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::~RsrP2GrangeItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrp2grange_list.len(); index++)
    {
        if(rsrp2grange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<rsrp2grange_list.len(); index++)
    {
        if(rsrp2grange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrP2Grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRP2Grange-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList>();
        c->parent = this;
        rsrp2grange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsrp2grange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRP2Grange-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::RsRP2GrangeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsRP2Grange-list"; yang_parent_name = "rsrP2Grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::~RsRP2GrangeList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRP2Grange-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::DomstatsItems::DomstatsItems()
    :
    regsent{YType::uint32, "regSent"},
    regrcvd{YType::uint32, "regRcvd"},
    nullregsent{YType::uint32, "nullRegSent"},
    nullregrcvd{YType::uint32, "nullRegRcvd"},
    regstopsent{YType::uint32, "regStopSent"},
    regstoprcvd{YType::uint32, "regStopRcvd"},
    regrcvdssm{YType::uint32, "regRcvdSSM"},
    regrcvdbidir{YType::uint32, "regRcvdBiDir"},
    regrcvdandnotrp{YType::uint32, "regRcvdAndNotRP"},
    bsrbssent{YType::uint32, "bsrBsSent"},
    bsrbsrcvd{YType::uint32, "bsrBsRcvd"},
    bsrcrpsent{YType::uint32, "bsrCRPSent"},
    bsrcrprcvd{YType::uint32, "bsrCRPRcvd"},
    bsrbsfromnonnbr{YType::uint32, "bsrBsFromNonNbr"},
    bsrbsfromborderif{YType::uint32, "bsrBsFromBorderIF"},
    bsrbslenerr{YType::uint32, "bsrBsLenErr"},
    bsrbsrpffail{YType::uint32, "bsrBsRPFFail"},
    bsrbsrcvdlisnotconf{YType::uint32, "bsrBsRcvdLisNotConf"},
    bsrcrpfromborderif{YType::uint32, "bsrCRPFromBorderIF"},
    bsrcrprcvdlisnotconf{YType::uint32, "bsrCRPRcvdLisNotConf"},
    autorpannouncessent{YType::uint32, "autoRPAnnouncesSent"},
    autorpannouncesrcvd{YType::uint32, "autoRPAnnouncesRcvd"},
    autorpdiscoveriessent{YType::uint32, "autoRPDiscoveriesSent"},
    autorpdiscoveriesrcvd{YType::uint32, "autoRPDiscoveriesRcvd"},
    autorprpffailed{YType::uint32, "autoRPRPFFailed"},
    autorpfromborderif{YType::uint32, "autoRPFromBorderIF"},
    autorpinvalidtype{YType::uint32, "autoRPInvalidType"},
    autorpttlexp{YType::uint32, "autoRPTTLExp"},
    autorprcvdlisnotconf{YType::uint32, "autoRPRcvdLisNotConf"},
    cprpffailnoroute{YType::uint32, "cpRPFFailNoRoute"},
    dprpffailnoroute{YType::uint32, "dpRPFFailNoRoute"},
    dpnomcaststate{YType::uint32, "dpNoMcastState"},
    dpcrtroutestatecnt{YType::uint32, "dpCrtRouteStateCnt"}
{

    yang_name = "domstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::DomstatsItems::~DomstatsItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::DomstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return regsent.is_set
	|| regrcvd.is_set
	|| nullregsent.is_set
	|| nullregrcvd.is_set
	|| regstopsent.is_set
	|| regstoprcvd.is_set
	|| regrcvdssm.is_set
	|| regrcvdbidir.is_set
	|| regrcvdandnotrp.is_set
	|| bsrbssent.is_set
	|| bsrbsrcvd.is_set
	|| bsrcrpsent.is_set
	|| bsrcrprcvd.is_set
	|| bsrbsfromnonnbr.is_set
	|| bsrbsfromborderif.is_set
	|| bsrbslenerr.is_set
	|| bsrbsrpffail.is_set
	|| bsrbsrcvdlisnotconf.is_set
	|| bsrcrpfromborderif.is_set
	|| bsrcrprcvdlisnotconf.is_set
	|| autorpannouncessent.is_set
	|| autorpannouncesrcvd.is_set
	|| autorpdiscoveriessent.is_set
	|| autorpdiscoveriesrcvd.is_set
	|| autorprpffailed.is_set
	|| autorpfromborderif.is_set
	|| autorpinvalidtype.is_set
	|| autorpttlexp.is_set
	|| autorprcvdlisnotconf.is_set
	|| cprpffailnoroute.is_set
	|| dprpffailnoroute.is_set
	|| dpnomcaststate.is_set
	|| dpcrtroutestatecnt.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::DomstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regsent.yfilter)
	|| ydk::is_set(regrcvd.yfilter)
	|| ydk::is_set(nullregsent.yfilter)
	|| ydk::is_set(nullregrcvd.yfilter)
	|| ydk::is_set(regstopsent.yfilter)
	|| ydk::is_set(regstoprcvd.yfilter)
	|| ydk::is_set(regrcvdssm.yfilter)
	|| ydk::is_set(regrcvdbidir.yfilter)
	|| ydk::is_set(regrcvdandnotrp.yfilter)
	|| ydk::is_set(bsrbssent.yfilter)
	|| ydk::is_set(bsrbsrcvd.yfilter)
	|| ydk::is_set(bsrcrpsent.yfilter)
	|| ydk::is_set(bsrcrprcvd.yfilter)
	|| ydk::is_set(bsrbsfromnonnbr.yfilter)
	|| ydk::is_set(bsrbsfromborderif.yfilter)
	|| ydk::is_set(bsrbslenerr.yfilter)
	|| ydk::is_set(bsrbsrpffail.yfilter)
	|| ydk::is_set(bsrbsrcvdlisnotconf.yfilter)
	|| ydk::is_set(bsrcrpfromborderif.yfilter)
	|| ydk::is_set(bsrcrprcvdlisnotconf.yfilter)
	|| ydk::is_set(autorpannouncessent.yfilter)
	|| ydk::is_set(autorpannouncesrcvd.yfilter)
	|| ydk::is_set(autorpdiscoveriessent.yfilter)
	|| ydk::is_set(autorpdiscoveriesrcvd.yfilter)
	|| ydk::is_set(autorprpffailed.yfilter)
	|| ydk::is_set(autorpfromborderif.yfilter)
	|| ydk::is_set(autorpinvalidtype.yfilter)
	|| ydk::is_set(autorpttlexp.yfilter)
	|| ydk::is_set(autorprcvdlisnotconf.yfilter)
	|| ydk::is_set(cprpffailnoroute.yfilter)
	|| ydk::is_set(dprpffailnoroute.yfilter)
	|| ydk::is_set(dpnomcaststate.yfilter)
	|| ydk::is_set(dpcrtroutestatecnt.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::DomstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::DomstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regsent.is_set || is_set(regsent.yfilter)) leaf_name_data.push_back(regsent.get_name_leafdata());
    if (regrcvd.is_set || is_set(regrcvd.yfilter)) leaf_name_data.push_back(regrcvd.get_name_leafdata());
    if (nullregsent.is_set || is_set(nullregsent.yfilter)) leaf_name_data.push_back(nullregsent.get_name_leafdata());
    if (nullregrcvd.is_set || is_set(nullregrcvd.yfilter)) leaf_name_data.push_back(nullregrcvd.get_name_leafdata());
    if (regstopsent.is_set || is_set(regstopsent.yfilter)) leaf_name_data.push_back(regstopsent.get_name_leafdata());
    if (regstoprcvd.is_set || is_set(regstoprcvd.yfilter)) leaf_name_data.push_back(regstoprcvd.get_name_leafdata());
    if (regrcvdssm.is_set || is_set(regrcvdssm.yfilter)) leaf_name_data.push_back(regrcvdssm.get_name_leafdata());
    if (regrcvdbidir.is_set || is_set(regrcvdbidir.yfilter)) leaf_name_data.push_back(regrcvdbidir.get_name_leafdata());
    if (regrcvdandnotrp.is_set || is_set(regrcvdandnotrp.yfilter)) leaf_name_data.push_back(regrcvdandnotrp.get_name_leafdata());
    if (bsrbssent.is_set || is_set(bsrbssent.yfilter)) leaf_name_data.push_back(bsrbssent.get_name_leafdata());
    if (bsrbsrcvd.is_set || is_set(bsrbsrcvd.yfilter)) leaf_name_data.push_back(bsrbsrcvd.get_name_leafdata());
    if (bsrcrpsent.is_set || is_set(bsrcrpsent.yfilter)) leaf_name_data.push_back(bsrcrpsent.get_name_leafdata());
    if (bsrcrprcvd.is_set || is_set(bsrcrprcvd.yfilter)) leaf_name_data.push_back(bsrcrprcvd.get_name_leafdata());
    if (bsrbsfromnonnbr.is_set || is_set(bsrbsfromnonnbr.yfilter)) leaf_name_data.push_back(bsrbsfromnonnbr.get_name_leafdata());
    if (bsrbsfromborderif.is_set || is_set(bsrbsfromborderif.yfilter)) leaf_name_data.push_back(bsrbsfromborderif.get_name_leafdata());
    if (bsrbslenerr.is_set || is_set(bsrbslenerr.yfilter)) leaf_name_data.push_back(bsrbslenerr.get_name_leafdata());
    if (bsrbsrpffail.is_set || is_set(bsrbsrpffail.yfilter)) leaf_name_data.push_back(bsrbsrpffail.get_name_leafdata());
    if (bsrbsrcvdlisnotconf.is_set || is_set(bsrbsrcvdlisnotconf.yfilter)) leaf_name_data.push_back(bsrbsrcvdlisnotconf.get_name_leafdata());
    if (bsrcrpfromborderif.is_set || is_set(bsrcrpfromborderif.yfilter)) leaf_name_data.push_back(bsrcrpfromborderif.get_name_leafdata());
    if (bsrcrprcvdlisnotconf.is_set || is_set(bsrcrprcvdlisnotconf.yfilter)) leaf_name_data.push_back(bsrcrprcvdlisnotconf.get_name_leafdata());
    if (autorpannouncessent.is_set || is_set(autorpannouncessent.yfilter)) leaf_name_data.push_back(autorpannouncessent.get_name_leafdata());
    if (autorpannouncesrcvd.is_set || is_set(autorpannouncesrcvd.yfilter)) leaf_name_data.push_back(autorpannouncesrcvd.get_name_leafdata());
    if (autorpdiscoveriessent.is_set || is_set(autorpdiscoveriessent.yfilter)) leaf_name_data.push_back(autorpdiscoveriessent.get_name_leafdata());
    if (autorpdiscoveriesrcvd.is_set || is_set(autorpdiscoveriesrcvd.yfilter)) leaf_name_data.push_back(autorpdiscoveriesrcvd.get_name_leafdata());
    if (autorprpffailed.is_set || is_set(autorprpffailed.yfilter)) leaf_name_data.push_back(autorprpffailed.get_name_leafdata());
    if (autorpfromborderif.is_set || is_set(autorpfromborderif.yfilter)) leaf_name_data.push_back(autorpfromborderif.get_name_leafdata());
    if (autorpinvalidtype.is_set || is_set(autorpinvalidtype.yfilter)) leaf_name_data.push_back(autorpinvalidtype.get_name_leafdata());
    if (autorpttlexp.is_set || is_set(autorpttlexp.yfilter)) leaf_name_data.push_back(autorpttlexp.get_name_leafdata());
    if (autorprcvdlisnotconf.is_set || is_set(autorprcvdlisnotconf.yfilter)) leaf_name_data.push_back(autorprcvdlisnotconf.get_name_leafdata());
    if (cprpffailnoroute.is_set || is_set(cprpffailnoroute.yfilter)) leaf_name_data.push_back(cprpffailnoroute.get_name_leafdata());
    if (dprpffailnoroute.is_set || is_set(dprpffailnoroute.yfilter)) leaf_name_data.push_back(dprpffailnoroute.get_name_leafdata());
    if (dpnomcaststate.is_set || is_set(dpnomcaststate.yfilter)) leaf_name_data.push_back(dpnomcaststate.get_name_leafdata());
    if (dpcrtroutestatecnt.is_set || is_set(dpcrtroutestatecnt.yfilter)) leaf_name_data.push_back(dpcrtroutestatecnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::DomstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::DomstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::DomstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regSent")
    {
        regsent = value;
        regsent.value_namespace = name_space;
        regsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvd")
    {
        regrcvd = value;
        regrcvd.value_namespace = name_space;
        regrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent = value;
        nullregsent.value_namespace = name_space;
        nullregsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd = value;
        nullregrcvd.value_namespace = name_space;
        nullregrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopSent")
    {
        regstopsent = value;
        regstopsent.value_namespace = name_space;
        regstopsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd = value;
        regstoprcvd.value_namespace = name_space;
        regstoprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdSSM")
    {
        regrcvdssm = value;
        regrcvdssm.value_namespace = name_space;
        regrcvdssm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdBiDir")
    {
        regrcvdbidir = value;
        regrcvdbidir.value_namespace = name_space;
        regrcvdbidir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regRcvdAndNotRP")
    {
        regrcvdandnotrp = value;
        regrcvdandnotrp.value_namespace = name_space;
        regrcvdandnotrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrBsSent")
    {
        bsrbssent = value;
        bsrbssent.value_namespace = name_space;
        bsrbssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrBsRcvd")
    {
        bsrbsrcvd = value;
        bsrbsrcvd.value_namespace = name_space;
        bsrbsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrCRPSent")
    {
        bsrcrpsent = value;
        bsrcrpsent.value_namespace = name_space;
        bsrcrpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrCRPRcvd")
    {
        bsrcrprcvd = value;
        bsrcrprcvd.value_namespace = name_space;
        bsrcrprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrBsFromNonNbr")
    {
        bsrbsfromnonnbr = value;
        bsrbsfromnonnbr.value_namespace = name_space;
        bsrbsfromnonnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrBsFromBorderIF")
    {
        bsrbsfromborderif = value;
        bsrbsfromborderif.value_namespace = name_space;
        bsrbsfromborderif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrBsLenErr")
    {
        bsrbslenerr = value;
        bsrbslenerr.value_namespace = name_space;
        bsrbslenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrBsRPFFail")
    {
        bsrbsrpffail = value;
        bsrbsrpffail.value_namespace = name_space;
        bsrbsrpffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrBsRcvdLisNotConf")
    {
        bsrbsrcvdlisnotconf = value;
        bsrbsrcvdlisnotconf.value_namespace = name_space;
        bsrbsrcvdlisnotconf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrCRPFromBorderIF")
    {
        bsrcrpfromborderif = value;
        bsrcrpfromborderif.value_namespace = name_space;
        bsrcrpfromborderif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrCRPRcvdLisNotConf")
    {
        bsrcrprcvdlisnotconf = value;
        bsrcrprcvdlisnotconf.value_namespace = name_space;
        bsrcrprcvdlisnotconf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoRPAnnouncesSent")
    {
        autorpannouncessent = value;
        autorpannouncessent.value_namespace = name_space;
        autorpannouncessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoRPAnnouncesRcvd")
    {
        autorpannouncesrcvd = value;
        autorpannouncesrcvd.value_namespace = name_space;
        autorpannouncesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoRPDiscoveriesSent")
    {
        autorpdiscoveriessent = value;
        autorpdiscoveriessent.value_namespace = name_space;
        autorpdiscoveriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoRPDiscoveriesRcvd")
    {
        autorpdiscoveriesrcvd = value;
        autorpdiscoveriesrcvd.value_namespace = name_space;
        autorpdiscoveriesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoRPRPFFailed")
    {
        autorprpffailed = value;
        autorprpffailed.value_namespace = name_space;
        autorprpffailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoRPFromBorderIF")
    {
        autorpfromborderif = value;
        autorpfromborderif.value_namespace = name_space;
        autorpfromborderif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoRPInvalidType")
    {
        autorpinvalidtype = value;
        autorpinvalidtype.value_namespace = name_space;
        autorpinvalidtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoRPTTLExp")
    {
        autorpttlexp = value;
        autorpttlexp.value_namespace = name_space;
        autorpttlexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autoRPRcvdLisNotConf")
    {
        autorprcvdlisnotconf = value;
        autorprcvdlisnotconf.value_namespace = name_space;
        autorprcvdlisnotconf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpRPFFailNoRoute")
    {
        cprpffailnoroute = value;
        cprpffailnoroute.value_namespace = name_space;
        cprpffailnoroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpRPFFailNoRoute")
    {
        dprpffailnoroute = value;
        dprpffailnoroute.value_namespace = name_space;
        dprpffailnoroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpNoMcastState")
    {
        dpnomcaststate = value;
        dpnomcaststate.value_namespace = name_space;
        dpnomcaststate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpCrtRouteStateCnt")
    {
        dpcrtroutestatecnt = value;
        dpcrtroutestatecnt.value_namespace = name_space;
        dpcrtroutestatecnt.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::DomstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regSent")
    {
        regsent.yfilter = yfilter;
    }
    if(value_path == "regRcvd")
    {
        regrcvd.yfilter = yfilter;
    }
    if(value_path == "nullRegSent")
    {
        nullregsent.yfilter = yfilter;
    }
    if(value_path == "nullRegRcvd")
    {
        nullregrcvd.yfilter = yfilter;
    }
    if(value_path == "regStopSent")
    {
        regstopsent.yfilter = yfilter;
    }
    if(value_path == "regStopRcvd")
    {
        regstoprcvd.yfilter = yfilter;
    }
    if(value_path == "regRcvdSSM")
    {
        regrcvdssm.yfilter = yfilter;
    }
    if(value_path == "regRcvdBiDir")
    {
        regrcvdbidir.yfilter = yfilter;
    }
    if(value_path == "regRcvdAndNotRP")
    {
        regrcvdandnotrp.yfilter = yfilter;
    }
    if(value_path == "bsrBsSent")
    {
        bsrbssent.yfilter = yfilter;
    }
    if(value_path == "bsrBsRcvd")
    {
        bsrbsrcvd.yfilter = yfilter;
    }
    if(value_path == "bsrCRPSent")
    {
        bsrcrpsent.yfilter = yfilter;
    }
    if(value_path == "bsrCRPRcvd")
    {
        bsrcrprcvd.yfilter = yfilter;
    }
    if(value_path == "bsrBsFromNonNbr")
    {
        bsrbsfromnonnbr.yfilter = yfilter;
    }
    if(value_path == "bsrBsFromBorderIF")
    {
        bsrbsfromborderif.yfilter = yfilter;
    }
    if(value_path == "bsrBsLenErr")
    {
        bsrbslenerr.yfilter = yfilter;
    }
    if(value_path == "bsrBsRPFFail")
    {
        bsrbsrpffail.yfilter = yfilter;
    }
    if(value_path == "bsrBsRcvdLisNotConf")
    {
        bsrbsrcvdlisnotconf.yfilter = yfilter;
    }
    if(value_path == "bsrCRPFromBorderIF")
    {
        bsrcrpfromborderif.yfilter = yfilter;
    }
    if(value_path == "bsrCRPRcvdLisNotConf")
    {
        bsrcrprcvdlisnotconf.yfilter = yfilter;
    }
    if(value_path == "autoRPAnnouncesSent")
    {
        autorpannouncessent.yfilter = yfilter;
    }
    if(value_path == "autoRPAnnouncesRcvd")
    {
        autorpannouncesrcvd.yfilter = yfilter;
    }
    if(value_path == "autoRPDiscoveriesSent")
    {
        autorpdiscoveriessent.yfilter = yfilter;
    }
    if(value_path == "autoRPDiscoveriesRcvd")
    {
        autorpdiscoveriesrcvd.yfilter = yfilter;
    }
    if(value_path == "autoRPRPFFailed")
    {
        autorprpffailed.yfilter = yfilter;
    }
    if(value_path == "autoRPFromBorderIF")
    {
        autorpfromborderif.yfilter = yfilter;
    }
    if(value_path == "autoRPInvalidType")
    {
        autorpinvalidtype.yfilter = yfilter;
    }
    if(value_path == "autoRPTTLExp")
    {
        autorpttlexp.yfilter = yfilter;
    }
    if(value_path == "autoRPRcvdLisNotConf")
    {
        autorprcvdlisnotconf.yfilter = yfilter;
    }
    if(value_path == "cpRPFFailNoRoute")
    {
        cprpffailnoroute.yfilter = yfilter;
    }
    if(value_path == "dpRPFFailNoRoute")
    {
        dprpffailnoroute.yfilter = yfilter;
    }
    if(value_path == "dpNoMcastState")
    {
        dpnomcaststate.yfilter = yfilter;
    }
    if(value_path == "dpCrtRouteStateCnt")
    {
        dpcrtroutestatecnt.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::DomstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regSent" || name == "regRcvd" || name == "nullRegSent" || name == "nullRegRcvd" || name == "regStopSent" || name == "regStopRcvd" || name == "regRcvdSSM" || name == "regRcvdBiDir" || name == "regRcvdAndNotRP" || name == "bsrBsSent" || name == "bsrBsRcvd" || name == "bsrCRPSent" || name == "bsrCRPRcvd" || name == "bsrBsFromNonNbr" || name == "bsrBsFromBorderIF" || name == "bsrBsLenErr" || name == "bsrBsRPFFail" || name == "bsrBsRcvdLisNotConf" || name == "bsrCRPFromBorderIF" || name == "bsrCRPRcvdLisNotConf" || name == "autoRPAnnouncesSent" || name == "autoRPAnnouncesRcvd" || name == "autoRPDiscoveriesSent" || name == "autoRPDiscoveriesRcvd" || name == "autoRPRPFFailed" || name == "autoRPFromBorderIF" || name == "autoRPInvalidType" || name == "autoRPTTLExp" || name == "autoRPRcvdLisNotConf" || name == "cpRPFFailNoRoute" || name == "dpRPFFailNoRoute" || name == "dpNoMcastState" || name == "dpCrtRouteStateCnt")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistItems()
    :
    eventhistory_list(this, {"type"})
{

    yang_name = "eventHist-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::EventHistItems::~EventHistItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::EventHistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::EventHistItems::has_operation() const
{
    for (std::size_t index=0; index<eventhistory_list.len(); index++)
    {
        if(eventhistory_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::EventHistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventHist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::EventHistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::EventHistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EventHistory-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList>();
        c->parent = this;
        eventhistory_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::EventHistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eventhistory_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::EventHistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::EventHistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::EventHistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EventHistory-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::EventHistoryList()
    :
    type{YType::enumeration, "type"},
    size{YType::uint32, "size"}
{

    yang_name = "EventHistory-list"; yang_parent_name = "eventHist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::~EventHistoryList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| size.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EventHistory-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "size")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList>();
        c->parent = this;
        if_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : if_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    drprio{YType::uint32, "drPrio"},
    drdelay{YType::uint16, "drDelay"},
    jprtmap{YType::str, "jpRtMap"},
    neighrtmap{YType::str, "neighRtMap"},
    neighpfxlist{YType::str, "neighpfxList"},
    border{YType::boolean, "border"},
    dr{YType::str, "dr"},
    rteppdn{YType::str, "rtEpPDn"},
    nbrholdtime{YType::uint32, "nbrHoldTime"},
    genid{YType::uint32, "genID"},
    nexthello{YType::str, "nextHello"},
    ipaddr{YType::str, "ipAddr"},
    bfdinst{YType::enumeration, "bfdInst"},
    pimsparsemode{YType::boolean, "pimSparseMode"}
        ,
    adj_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems>())
    , db_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems>())
    , ifstats_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems>())
    , jp_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems>())
    , hello_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems>())
    , trstats_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems>())
    , rtvrfmbr_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    adj_items->parent = this;
    db_items->parent = this;
    ifstats_items->parent = this;
    jp_items->parent = this;
    hello_items->parent = this;
    trstats_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| drprio.is_set
	|| drdelay.is_set
	|| jprtmap.is_set
	|| neighrtmap.is_set
	|| neighpfxlist.is_set
	|| border.is_set
	|| dr.is_set
	|| rteppdn.is_set
	|| nbrholdtime.is_set
	|| genid.is_set
	|| nexthello.is_set
	|| ipaddr.is_set
	|| bfdinst.is_set
	|| pimsparsemode.is_set
	|| (adj_items !=  nullptr && adj_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data())
	|| (ifstats_items !=  nullptr && ifstats_items->has_data())
	|| (jp_items !=  nullptr && jp_items->has_data())
	|| (hello_items !=  nullptr && hello_items->has_data())
	|| (trstats_items !=  nullptr && trstats_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(drprio.yfilter)
	|| ydk::is_set(drdelay.yfilter)
	|| ydk::is_set(jprtmap.yfilter)
	|| ydk::is_set(neighrtmap.yfilter)
	|| ydk::is_set(neighpfxlist.yfilter)
	|| ydk::is_set(border.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(rteppdn.yfilter)
	|| ydk::is_set(nbrholdtime.yfilter)
	|| ydk::is_set(genid.yfilter)
	|| ydk::is_set(nexthello.yfilter)
	|| ydk::is_set(ipaddr.yfilter)
	|| ydk::is_set(bfdinst.yfilter)
	|| ydk::is_set(pimsparsemode.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (ifstats_items !=  nullptr && ifstats_items->has_operation())
	|| (jp_items !=  nullptr && jp_items->has_operation())
	|| (hello_items !=  nullptr && hello_items->has_operation())
	|| (trstats_items !=  nullptr && trstats_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (drprio.is_set || is_set(drprio.yfilter)) leaf_name_data.push_back(drprio.get_name_leafdata());
    if (drdelay.is_set || is_set(drdelay.yfilter)) leaf_name_data.push_back(drdelay.get_name_leafdata());
    if (jprtmap.is_set || is_set(jprtmap.yfilter)) leaf_name_data.push_back(jprtmap.get_name_leafdata());
    if (neighrtmap.is_set || is_set(neighrtmap.yfilter)) leaf_name_data.push_back(neighrtmap.get_name_leafdata());
    if (neighpfxlist.is_set || is_set(neighpfxlist.yfilter)) leaf_name_data.push_back(neighpfxlist.get_name_leafdata());
    if (border.is_set || is_set(border.yfilter)) leaf_name_data.push_back(border.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (rteppdn.is_set || is_set(rteppdn.yfilter)) leaf_name_data.push_back(rteppdn.get_name_leafdata());
    if (nbrholdtime.is_set || is_set(nbrholdtime.yfilter)) leaf_name_data.push_back(nbrholdtime.get_name_leafdata());
    if (genid.is_set || is_set(genid.yfilter)) leaf_name_data.push_back(genid.get_name_leafdata());
    if (nexthello.is_set || is_set(nexthello.yfilter)) leaf_name_data.push_back(nexthello.get_name_leafdata());
    if (ipaddr.is_set || is_set(ipaddr.yfilter)) leaf_name_data.push_back(ipaddr.get_name_leafdata());
    if (bfdinst.is_set || is_set(bfdinst.yfilter)) leaf_name_data.push_back(bfdinst.get_name_leafdata());
    if (pimsparsemode.is_set || is_set(pimsparsemode.yfilter)) leaf_name_data.push_back(pimsparsemode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems>();
        }
        return adj_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "ifstats-items")
    {
        if(ifstats_items == nullptr)
        {
            ifstats_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems>();
        }
        return ifstats_items;
    }

    if(child_yang_name == "jp-items")
    {
        if(jp_items == nullptr)
        {
            jp_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems>();
        }
        return jp_items;
    }

    if(child_yang_name == "hello-items")
    {
        if(hello_items == nullptr)
        {
            hello_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems>();
        }
        return hello_items;
    }

    if(child_yang_name == "trstats-items")
    {
        if(trstats_items == nullptr)
        {
            trstats_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems>();
        }
        return trstats_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adj_items != nullptr)
    {
        children["adj-items"] = adj_items;
    }

    if(db_items != nullptr)
    {
        children["db-items"] = db_items;
    }

    if(ifstats_items != nullptr)
    {
        children["ifstats-items"] = ifstats_items;
    }

    if(jp_items != nullptr)
    {
        children["jp-items"] = jp_items;
    }

    if(hello_items != nullptr)
    {
        children["hello-items"] = hello_items;
    }

    if(trstats_items != nullptr)
    {
        children["trstats-items"] = trstats_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drPrio")
    {
        drprio = value;
        drprio.value_namespace = name_space;
        drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drDelay")
    {
        drdelay = value;
        drdelay.value_namespace = name_space;
        drdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRtMap")
    {
        jprtmap = value;
        jprtmap.value_namespace = name_space;
        jprtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighRtMap")
    {
        neighrtmap = value;
        neighrtmap.value_namespace = name_space;
        neighrtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighpfxList")
    {
        neighpfxlist = value;
        neighpfxlist.value_namespace = name_space;
        neighpfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "border")
    {
        border = value;
        border.value_namespace = name_space;
        border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtEpPDn")
    {
        rteppdn = value;
        rteppdn.value_namespace = name_space;
        rteppdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbrHoldTime")
    {
        nbrholdtime = value;
        nbrholdtime.value_namespace = name_space;
        nbrholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genID")
    {
        genid = value;
        genid.value_namespace = name_space;
        genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nextHello")
    {
        nexthello = value;
        nexthello.value_namespace = name_space;
        nexthello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAddr")
    {
        ipaddr = value;
        ipaddr.value_namespace = name_space;
        ipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdInst")
    {
        bfdinst = value;
        bfdinst.value_namespace = name_space;
        bfdinst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimSparseMode")
    {
        pimsparsemode = value;
        pimsparsemode.value_namespace = name_space;
        pimsparsemode.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "drPrio")
    {
        drprio.yfilter = yfilter;
    }
    if(value_path == "drDelay")
    {
        drdelay.yfilter = yfilter;
    }
    if(value_path == "jpRtMap")
    {
        jprtmap.yfilter = yfilter;
    }
    if(value_path == "neighRtMap")
    {
        neighrtmap.yfilter = yfilter;
    }
    if(value_path == "neighpfxList")
    {
        neighpfxlist.yfilter = yfilter;
    }
    if(value_path == "border")
    {
        border.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "rtEpPDn")
    {
        rteppdn.yfilter = yfilter;
    }
    if(value_path == "nbrHoldTime")
    {
        nbrholdtime.yfilter = yfilter;
    }
    if(value_path == "genID")
    {
        genid.yfilter = yfilter;
    }
    if(value_path == "nextHello")
    {
        nexthello.yfilter = yfilter;
    }
    if(value_path == "ipAddr")
    {
        ipaddr.yfilter = yfilter;
    }
    if(value_path == "bfdInst")
    {
        bfdinst.yfilter = yfilter;
    }
    if(value_path == "pimSparseMode")
    {
        pimsparsemode.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "db-items" || name == "ifstats-items" || name == "jp-items" || name == "hello-items" || name == "trstats-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr" || name == "adminSt" || name == "ctrl" || name == "drPrio" || name == "drDelay" || name == "jpRtMap" || name == "neighRtMap" || name == "neighpfxList" || name == "border" || name == "dr" || name == "rtEpPDn" || name == "nbrHoldTime" || name == "genID" || name == "nextHello" || name == "ipAddr" || name == "bfdInst" || name == "pimSparseMode")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjItems()
    :
    adjep_list(this, {"addr"})
{

    yang_name = "adj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::~AdjItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList>();
        c->parent = this;
        adjep_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : adjep_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjEpList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    drprio{YType::uint32, "drPrio"},
    learntime{YType::str, "learnTime"},
    expirytime{YType::str, "expiryTime"},
    genid{YType::uint32, "genId"},
    bfdst{YType::enumeration, "bfdSt"},
    operst{YType::enumeration, "operSt"},
    flags{YType::str, "flags"}
        ,
    adjstats_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>())
{
    adjstats_items->parent = this;

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| drprio.is_set
	|| learntime.is_set
	|| expirytime.is_set
	|| genid.is_set
	|| bfdst.is_set
	|| operst.is_set
	|| flags.is_set
	|| (adjstats_items !=  nullptr && adjstats_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(drprio.yfilter)
	|| ydk::is_set(learntime.yfilter)
	|| ydk::is_set(expirytime.yfilter)
	|| ydk::is_set(genid.yfilter)
	|| ydk::is_set(bfdst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (adjstats_items !=  nullptr && adjstats_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (drprio.is_set || is_set(drprio.yfilter)) leaf_name_data.push_back(drprio.get_name_leafdata());
    if (learntime.is_set || is_set(learntime.yfilter)) leaf_name_data.push_back(learntime.get_name_leafdata());
    if (expirytime.is_set || is_set(expirytime.yfilter)) leaf_name_data.push_back(expirytime.get_name_leafdata());
    if (genid.is_set || is_set(genid.yfilter)) leaf_name_data.push_back(genid.get_name_leafdata());
    if (bfdst.is_set || is_set(bfdst.yfilter)) leaf_name_data.push_back(bfdst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjstats-items")
    {
        if(adjstats_items == nullptr)
        {
            adjstats_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems>();
        }
        return adjstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(adjstats_items != nullptr)
    {
        children["adjstats-items"] = adjstats_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drPrio")
    {
        drprio = value;
        drprio.value_namespace = name_space;
        drprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learnTime")
    {
        learntime = value;
        learntime.value_namespace = name_space;
        learntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTime")
    {
        expirytime = value;
        expirytime.value_namespace = name_space;
        expirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "genId")
    {
        genid = value;
        genid.value_namespace = name_space;
        genid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfdSt")
    {
        bfdst = value;
        bfdst.value_namespace = name_space;
        bfdst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "drPrio")
    {
        drprio.yfilter = yfilter;
    }
    if(value_path == "learnTime")
    {
        learntime.yfilter = yfilter;
    }
    if(value_path == "expiryTime")
    {
        expirytime.yfilter = yfilter;
    }
    if(value_path == "genId")
    {
        genid.yfilter = yfilter;
    }
    if(value_path == "bfdSt")
    {
        bfdst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjstats-items" || name == "addr" || name == "name" || name == "drPrio" || name == "learnTime" || name == "expiryTime" || name == "genId" || name == "bfdSt" || name == "operSt" || name == "flags")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::AdjstatsItems()
    :
    lasthellorcvd{YType::str, "lastHelloRcvd"},
    longhelloitvl{YType::uint32, "longHelloItvl"},
    lastholdtime{YType::uint16, "lastHoldTime"},
    nonhelloexpresets{YType::uint32, "nonHelloExpResets"}
{

    yang_name = "adjstats-items"; yang_parent_name = "AdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::~AdjstatsItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return lasthellorcvd.is_set
	|| longhelloitvl.is_set
	|| lastholdtime.is_set
	|| nonhelloexpresets.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lasthellorcvd.yfilter)
	|| ydk::is_set(longhelloitvl.yfilter)
	|| ydk::is_set(lastholdtime.yfilter)
	|| ydk::is_set(nonhelloexpresets.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lasthellorcvd.is_set || is_set(lasthellorcvd.yfilter)) leaf_name_data.push_back(lasthellorcvd.get_name_leafdata());
    if (longhelloitvl.is_set || is_set(longhelloitvl.yfilter)) leaf_name_data.push_back(longhelloitvl.get_name_leafdata());
    if (lastholdtime.is_set || is_set(lastholdtime.yfilter)) leaf_name_data.push_back(lastholdtime.get_name_leafdata());
    if (nonhelloexpresets.is_set || is_set(nonhelloexpresets.yfilter)) leaf_name_data.push_back(nonhelloexpresets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lastHelloRcvd")
    {
        lasthellorcvd = value;
        lasthellorcvd.value_namespace = name_space;
        lasthellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "longHelloItvl")
    {
        longhelloitvl = value;
        longhelloitvl.value_namespace = name_space;
        longhelloitvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastHoldTime")
    {
        lastholdtime = value;
        lastholdtime.value_namespace = name_space;
        lastholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonHelloExpResets")
    {
        nonhelloexpresets = value;
        nonhelloexpresets.value_namespace = name_space;
        nonhelloexpresets.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lastHelloRcvd")
    {
        lasthellorcvd.yfilter = yfilter;
    }
    if(value_path == "longHelloItvl")
    {
        longhelloitvl.yfilter = yfilter;
    }
    if(value_path == "lastHoldTime")
    {
        lastholdtime.yfilter = yfilter;
    }
    if(value_path == "nonHelloExpResets")
    {
        nonhelloexpresets.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lastHelloRcvd" || name == "longHelloItvl" || name == "lastHoldTime" || name == "nonHelloExpResets")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::~DbItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList>();
        c->parent = this;
        db_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : db_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    autorp_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems>())
    , bsr_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems>())
    , grange_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems>())
    , src_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems>())
    , rp_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems>())
{
    autorp_items->parent = this;
    bsr_items->parent = this;
    grange_items->parent = this;
    src_items->parent = this;
    rp_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::~DbList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (autorp_items !=  nullptr && autorp_items->has_data())
	|| (bsr_items !=  nullptr && bsr_items->has_data())
	|| (grange_items !=  nullptr && grange_items->has_data())
	|| (src_items !=  nullptr && src_items->has_data())
	|| (rp_items !=  nullptr && rp_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (autorp_items !=  nullptr && autorp_items->has_operation())
	|| (bsr_items !=  nullptr && bsr_items->has_operation())
	|| (grange_items !=  nullptr && grange_items->has_operation())
	|| (src_items !=  nullptr && src_items->has_operation())
	|| (rp_items !=  nullptr && rp_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autorp-items")
    {
        if(autorp_items == nullptr)
        {
            autorp_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems>();
        }
        return autorp_items;
    }

    if(child_yang_name == "bsr-items")
    {
        if(bsr_items == nullptr)
        {
            bsr_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems>();
        }
        return bsr_items;
    }

    if(child_yang_name == "grange-items")
    {
        if(grange_items == nullptr)
        {
            grange_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems>();
        }
        return grange_items;
    }

    if(child_yang_name == "src-items")
    {
        if(src_items == nullptr)
        {
            src_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems>();
        }
        return src_items;
    }

    if(child_yang_name == "rp-items")
    {
        if(rp_items == nullptr)
        {
            rp_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems>();
        }
        return rp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(autorp_items != nullptr)
    {
        children["autorp-items"] = autorp_items;
    }

    if(bsr_items != nullptr)
    {
        children["bsr-items"] = bsr_items;
    }

    if(grange_items != nullptr)
    {
        children["grange-items"] = grange_items;
    }

    if(src_items != nullptr)
    {
        children["src-items"] = src_items;
    }

    if(rp_items != nullptr)
    {
        children["rp-items"] = rp_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autorp-items" || name == "bsr-items" || name == "grange-items" || name == "src-items" || name == "rp-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutorpItems()
    :
    autorppinfo_list(this, {"addr"})
{

    yang_name = "autorp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::~AutorpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<autorppinfo_list.len(); index++)
    {
        if(autorppinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::has_operation() const
{
    for (std::size_t index=0; index<autorppinfo_list.len(); index++)
    {
        if(autorppinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autorp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AutoRPPInfo-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList>();
        c->parent = this;
        autorppinfo_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : autorppinfo_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AutoRPPInfo-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList::AutoRPPInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    expiry{YType::str, "expiry"},
    uptime{YType::str, "uptime"},
    priority{YType::uint32, "priority"},
    hashmasklen{YType::uint32, "hashMaskLen"}
{

    yang_name = "AutoRPPInfo-list"; yang_parent_name = "autorp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList::~AutoRPPInfoList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| expiry.is_set
	|| uptime.is_set
	|| priority.is_set
	|| hashmasklen.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hashmasklen.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AutoRPPInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::AutorpItems::AutoRPPInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "expiry" || name == "uptime" || name == "priority" || name == "hashMaskLen")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BsrItems()
    :
    bsrinfo_list(this, {"addr"})
{

    yang_name = "bsr-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::~BsrItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bsrinfo_list.len(); index++)
    {
        if(bsrinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::has_operation() const
{
    for (std::size_t index=0; index<bsrinfo_list.len(); index++)
    {
        if(bsrinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BSRInfo-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList>();
        c->parent = this;
        bsrinfo_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bsrinfo_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BSRInfo-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::BSRInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    expiry{YType::str, "expiry"},
    uptime{YType::str, "uptime"},
    priority{YType::uint32, "priority"},
    hashmasklen{YType::uint32, "hashMaskLen"}
{

    yang_name = "BSRInfo-list"; yang_parent_name = "bsr-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::~BSRInfoList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| expiry.is_set
	|| uptime.is_set
	|| priority.is_set
	|| hashmasklen.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(hashmasklen.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BSRInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (hashmasklen.is_set || is_set(hashmasklen.yfilter)) leaf_name_data.push_back(hashmasklen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen = value;
        hashmasklen.value_namespace = name_space;
        hashmasklen.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "hashMaskLen")
    {
        hashmasklen.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BsrItems::BSRInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "name" || name == "expiry" || name == "uptime" || name == "priority" || name == "hashMaskLen")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::GrangeItems()
    :
    rpgrange_list(this, {"addr"})
{

    yang_name = "grange-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::~GrangeItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrange_list.len(); index++)
    {
        if(rpgrange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPGrange-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList>();
        c->parent = this;
        rpgrange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPGrange-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::RPGrangeList()
    :
    addr{YType::str, "addr"},
    flags{YType::str, "flags"},
    rpaddr{YType::str, "rpAddr"}
{

    yang_name = "RPGrange-list"; yang_parent_name = "grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::~RPGrangeList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| flags.is_set
	|| rpaddr.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(rpaddr.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPGrange-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (rpaddr.is_set || is_set(rpaddr.yfilter)) leaf_name_data.push_back(rpaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddr")
    {
        rpaddr = value;
        rpaddr.value_namespace = name_space;
        rpaddr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "rpAddr")
    {
        rpaddr.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::GrangeItems::RPGrangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "flags" || name == "rpAddr")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::SrcItems()
    :
    route_list(this, {"src", "grp"})
{

    yang_name = "src-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::~SrcItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::has_operation() const
{
    for (std::size_t index=0; index<route_list.len(); index++)
    {
        if(route_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Route-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList>();
        c->parent = this;
        route_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Route-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::RouteList()
    :
    src{YType::str, "src"},
    grp{YType::str, "grp"},
    name{YType::str, "name"},
    ver{YType::uint32, "ver"},
    rpaddrroute{YType::str, "rpAddrRoute"},
    iif{YType::str, "iif"},
    expiryts{YType::str, "expiryTs"},
    rpfnbr{YType::str, "rpfNbr"},
    rpfsrc{YType::str, "rpfSrc"},
    createts{YType::str, "createTs"},
    asserttime{YType::str, "assertTime"},
    rttype{YType::str, "rtType"},
    swpktcnt{YType::uint32, "swPktCnt"},
    swbytecnt{YType::uint32, "swByteCnt"},
    hwpktcnt{YType::uint32, "hwPktCnt"},
    hwbytecnt{YType::uint32, "hwByteCnt"},
    assertmetric{YType::uint32, "assertMetric"},
    assertmetricpref{YType::uint32, "assertMetricPref"},
    routebits{YType::str, "routeBits"},
    rttimeoutinvtl{YType::uint32, "rtTimeOutInvtl"},
    jpholdtime{YType::uint32, "jpHoldTime"}
        ,
    oif_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems>())
{
    oif_items->parent = this;

    yang_name = "Route-list"; yang_parent_name = "src-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::~RouteList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::has_data() const
{
    if (is_presence_container) return true;
    return src.is_set
	|| grp.is_set
	|| name.is_set
	|| ver.is_set
	|| rpaddrroute.is_set
	|| iif.is_set
	|| expiryts.is_set
	|| rpfnbr.is_set
	|| rpfsrc.is_set
	|| createts.is_set
	|| asserttime.is_set
	|| rttype.is_set
	|| swpktcnt.is_set
	|| swbytecnt.is_set
	|| hwpktcnt.is_set
	|| hwbytecnt.is_set
	|| assertmetric.is_set
	|| assertmetricpref.is_set
	|| routebits.is_set
	|| rttimeoutinvtl.is_set
	|| jpholdtime.is_set
	|| (oif_items !=  nullptr && oif_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(grp.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(rpaddrroute.yfilter)
	|| ydk::is_set(iif.yfilter)
	|| ydk::is_set(expiryts.yfilter)
	|| ydk::is_set(rpfnbr.yfilter)
	|| ydk::is_set(rpfsrc.yfilter)
	|| ydk::is_set(createts.yfilter)
	|| ydk::is_set(asserttime.yfilter)
	|| ydk::is_set(rttype.yfilter)
	|| ydk::is_set(swpktcnt.yfilter)
	|| ydk::is_set(swbytecnt.yfilter)
	|| ydk::is_set(hwpktcnt.yfilter)
	|| ydk::is_set(hwbytecnt.yfilter)
	|| ydk::is_set(assertmetric.yfilter)
	|| ydk::is_set(assertmetricpref.yfilter)
	|| ydk::is_set(routebits.yfilter)
	|| ydk::is_set(rttimeoutinvtl.yfilter)
	|| ydk::is_set(jpholdtime.yfilter)
	|| (oif_items !=  nullptr && oif_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Route-list";
    ADD_KEY_TOKEN(src, "src");
    ADD_KEY_TOKEN(grp, "grp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (grp.is_set || is_set(grp.yfilter)) leaf_name_data.push_back(grp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (rpaddrroute.is_set || is_set(rpaddrroute.yfilter)) leaf_name_data.push_back(rpaddrroute.get_name_leafdata());
    if (iif.is_set || is_set(iif.yfilter)) leaf_name_data.push_back(iif.get_name_leafdata());
    if (expiryts.is_set || is_set(expiryts.yfilter)) leaf_name_data.push_back(expiryts.get_name_leafdata());
    if (rpfnbr.is_set || is_set(rpfnbr.yfilter)) leaf_name_data.push_back(rpfnbr.get_name_leafdata());
    if (rpfsrc.is_set || is_set(rpfsrc.yfilter)) leaf_name_data.push_back(rpfsrc.get_name_leafdata());
    if (createts.is_set || is_set(createts.yfilter)) leaf_name_data.push_back(createts.get_name_leafdata());
    if (asserttime.is_set || is_set(asserttime.yfilter)) leaf_name_data.push_back(asserttime.get_name_leafdata());
    if (rttype.is_set || is_set(rttype.yfilter)) leaf_name_data.push_back(rttype.get_name_leafdata());
    if (swpktcnt.is_set || is_set(swpktcnt.yfilter)) leaf_name_data.push_back(swpktcnt.get_name_leafdata());
    if (swbytecnt.is_set || is_set(swbytecnt.yfilter)) leaf_name_data.push_back(swbytecnt.get_name_leafdata());
    if (hwpktcnt.is_set || is_set(hwpktcnt.yfilter)) leaf_name_data.push_back(hwpktcnt.get_name_leafdata());
    if (hwbytecnt.is_set || is_set(hwbytecnt.yfilter)) leaf_name_data.push_back(hwbytecnt.get_name_leafdata());
    if (assertmetric.is_set || is_set(assertmetric.yfilter)) leaf_name_data.push_back(assertmetric.get_name_leafdata());
    if (assertmetricpref.is_set || is_set(assertmetricpref.yfilter)) leaf_name_data.push_back(assertmetricpref.get_name_leafdata());
    if (routebits.is_set || is_set(routebits.yfilter)) leaf_name_data.push_back(routebits.get_name_leafdata());
    if (rttimeoutinvtl.is_set || is_set(rttimeoutinvtl.yfilter)) leaf_name_data.push_back(rttimeoutinvtl.get_name_leafdata());
    if (jpholdtime.is_set || is_set(jpholdtime.yfilter)) leaf_name_data.push_back(jpholdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oif-items")
    {
        if(oif_items == nullptr)
        {
            oif_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems>();
        }
        return oif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(oif_items != nullptr)
    {
        children["oif-items"] = oif_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grp")
    {
        grp = value;
        grp.value_namespace = name_space;
        grp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpAddrRoute")
    {
        rpaddrroute = value;
        rpaddrroute.value_namespace = name_space;
        rpaddrroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iif")
    {
        iif = value;
        iif.value_namespace = name_space;
        iif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiryTs")
    {
        expiryts = value;
        expiryts.value_namespace = name_space;
        expiryts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr = value;
        rpfnbr.value_namespace = name_space;
        rpfnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpfSrc")
    {
        rpfsrc = value;
        rpfsrc.value_namespace = name_space;
        rpfsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "createTs")
    {
        createts = value;
        createts.value_namespace = name_space;
        createts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertTime")
    {
        asserttime = value;
        asserttime.value_namespace = name_space;
        asserttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtType")
    {
        rttype = value;
        rttype.value_namespace = name_space;
        rttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swPktCnt")
    {
        swpktcnt = value;
        swpktcnt.value_namespace = name_space;
        swpktcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swByteCnt")
    {
        swbytecnt = value;
        swbytecnt.value_namespace = name_space;
        swbytecnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwPktCnt")
    {
        hwpktcnt = value;
        hwpktcnt.value_namespace = name_space;
        hwpktcnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwByteCnt")
    {
        hwbytecnt = value;
        hwbytecnt.value_namespace = name_space;
        hwbytecnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetric")
    {
        assertmetric = value;
        assertmetric.value_namespace = name_space;
        assertmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertMetricPref")
    {
        assertmetricpref = value;
        assertmetricpref.value_namespace = name_space;
        assertmetricpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routeBits")
    {
        routebits = value;
        routebits.value_namespace = name_space;
        routebits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl = value;
        rttimeoutinvtl.value_namespace = name_space;
        rttimeoutinvtl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime = value;
        jpholdtime.value_namespace = name_space;
        jpholdtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "grp")
    {
        grp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "rpAddrRoute")
    {
        rpaddrroute.yfilter = yfilter;
    }
    if(value_path == "iif")
    {
        iif.yfilter = yfilter;
    }
    if(value_path == "expiryTs")
    {
        expiryts.yfilter = yfilter;
    }
    if(value_path == "rpfNbr")
    {
        rpfnbr.yfilter = yfilter;
    }
    if(value_path == "rpfSrc")
    {
        rpfsrc.yfilter = yfilter;
    }
    if(value_path == "createTs")
    {
        createts.yfilter = yfilter;
    }
    if(value_path == "assertTime")
    {
        asserttime.yfilter = yfilter;
    }
    if(value_path == "rtType")
    {
        rttype.yfilter = yfilter;
    }
    if(value_path == "swPktCnt")
    {
        swpktcnt.yfilter = yfilter;
    }
    if(value_path == "swByteCnt")
    {
        swbytecnt.yfilter = yfilter;
    }
    if(value_path == "hwPktCnt")
    {
        hwpktcnt.yfilter = yfilter;
    }
    if(value_path == "hwByteCnt")
    {
        hwbytecnt.yfilter = yfilter;
    }
    if(value_path == "assertMetric")
    {
        assertmetric.yfilter = yfilter;
    }
    if(value_path == "assertMetricPref")
    {
        assertmetricpref.yfilter = yfilter;
    }
    if(value_path == "routeBits")
    {
        routebits.yfilter = yfilter;
    }
    if(value_path == "rtTimeOutInvtl")
    {
        rttimeoutinvtl.yfilter = yfilter;
    }
    if(value_path == "jpHoldTime")
    {
        jpholdtime.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oif-items" || name == "src" || name == "grp" || name == "name" || name == "ver" || name == "rpAddrRoute" || name == "iif" || name == "expiryTs" || name == "rpfNbr" || name == "rpfSrc" || name == "createTs" || name == "assertTime" || name == "rtType" || name == "swPktCnt" || name == "swByteCnt" || name == "hwPktCnt" || name == "hwByteCnt" || name == "assertMetric" || name == "assertMetricPref" || name == "routeBits" || name == "rtTimeOutInvtl" || name == "jpHoldTime")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifItems()
    :
    oif_list(this, {"oif"})
{

    yang_name = "oif-items"; yang_parent_name = "Route-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::~OifItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::has_operation() const
{
    for (std::size_t index=0; index<oif_list.len(); index++)
    {
        if(oif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Oif-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList>();
        c->parent = this;
        oif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : oif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Oif-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::OifList()
    :
    oif{YType::str, "oIf"},
    flags{YType::str, "flags"}
{

    yang_name = "Oif-list"; yang_parent_name = "oif-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::~OifList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::has_data() const
{
    if (is_presence_container) return true;
    return oif.is_set
	|| flags.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oif.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Oif-list";
    ADD_KEY_TOKEN(oif, "oIf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oif.is_set || is_set(oif.yfilter)) leaf_name_data.push_back(oif.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oIf")
    {
        oif = value;
        oif.value_namespace = name_space;
        oif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oIf")
    {
        oif.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oIf" || name == "flags")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RpItems()
    :
    rpinfo_list(this, {"addr"})
{

    yang_name = "rp-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::~RpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpinfo_list.len(); index++)
    {
        if(rpinfo_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::has_operation() const
{
    for (std::size_t index=0; index<rpinfo_list.len(); index++)
    {
        if(rpinfo_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPInfo-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList>();
        c->parent = this;
        rpinfo_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpinfo_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPInfo-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RPInfoList()
    :
    addr{YType::str, "addr"},
    name{YType::str, "name"},
    local{YType::boolean, "local"},
    uptime{YType::str, "uptime"},
    arpexp{YType::str, "arpExp"},
    bsrexp{YType::str, "bsrExp"},
    bsraddr{YType::str, "bsrAddr"},
    priority{YType::uint32, "priority"},
    disctype{YType::str, "discType"},
    dfordinal{YType::uint32, "dfOrdinal"}
        ,
    rsrp2grange_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems>())
{
    rsrp2grange_items->parent = this;

    yang_name = "RPInfo-list"; yang_parent_name = "rp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::~RPInfoList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| name.is_set
	|| local.is_set
	|| uptime.is_set
	|| arpexp.is_set
	|| bsrexp.is_set
	|| bsraddr.is_set
	|| priority.is_set
	|| disctype.is_set
	|| dfordinal.is_set
	|| (rsrp2grange_items !=  nullptr && rsrp2grange_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(arpexp.yfilter)
	|| ydk::is_set(bsrexp.yfilter)
	|| ydk::is_set(bsraddr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(disctype.yfilter)
	|| ydk::is_set(dfordinal.yfilter)
	|| (rsrp2grange_items !=  nullptr && rsrp2grange_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPInfo-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (arpexp.is_set || is_set(arpexp.yfilter)) leaf_name_data.push_back(arpexp.get_name_leafdata());
    if (bsrexp.is_set || is_set(bsrexp.yfilter)) leaf_name_data.push_back(bsrexp.get_name_leafdata());
    if (bsraddr.is_set || is_set(bsraddr.yfilter)) leaf_name_data.push_back(bsraddr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (disctype.is_set || is_set(disctype.yfilter)) leaf_name_data.push_back(disctype.get_name_leafdata());
    if (dfordinal.is_set || is_set(dfordinal.yfilter)) leaf_name_data.push_back(dfordinal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsrP2Grange-items")
    {
        if(rsrp2grange_items == nullptr)
        {
            rsrp2grange_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems>();
        }
        return rsrp2grange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rsrp2grange_items != nullptr)
    {
        children["rsrP2Grange-items"] = rsrp2grange_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arpExp")
    {
        arpexp = value;
        arpexp.value_namespace = name_space;
        arpexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrExp")
    {
        bsrexp = value;
        bsrexp.value_namespace = name_space;
        bsrexp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsrAddr")
    {
        bsraddr = value;
        bsraddr.value_namespace = name_space;
        bsraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discType")
    {
        disctype = value;
        disctype.value_namespace = name_space;
        disctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOrdinal")
    {
        dfordinal = value;
        dfordinal.value_namespace = name_space;
        dfordinal.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "arpExp")
    {
        arpexp.yfilter = yfilter;
    }
    if(value_path == "bsrExp")
    {
        bsrexp.yfilter = yfilter;
    }
    if(value_path == "bsrAddr")
    {
        bsraddr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "discType")
    {
        disctype.yfilter = yfilter;
    }
    if(value_path == "dfOrdinal")
    {
        dfordinal.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsrP2Grange-items" || name == "addr" || name == "name" || name == "local" || name == "uptime" || name == "arpExp" || name == "bsrExp" || name == "bsrAddr" || name == "priority" || name == "discType" || name == "dfOrdinal")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsrP2GrangeItems()
    :
    rsrp2grange_list(this, {"tdn"})
{

    yang_name = "rsrP2Grange-items"; yang_parent_name = "RPInfo-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::~RsrP2GrangeItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsrp2grange_list.len(); index++)
    {
        if(rsrp2grange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::has_operation() const
{
    for (std::size_t index=0; index<rsrp2grange_list.len(); index++)
    {
        if(rsrp2grange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsrP2Grange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsRP2Grange-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList>();
        c->parent = this;
        rsrp2grange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rsrp2grange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsRP2Grange-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::RsRP2GrangeList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsRP2Grange-list"; yang_parent_name = "rsrP2Grange-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::~RsRP2GrangeList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsRP2Grange-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::RpItems::RPInfoList::RsrP2GrangeItems::RsRP2GrangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::IfstatsItems()
    :
    hellosent{YType::uint32, "helloSent"},
    hellorcvd{YType::uint32, "helloRcvd"},
    jpsent{YType::uint32, "jpSent"},
    jprcvd{YType::uint32, "jpRcvd"},
    assertsent{YType::uint32, "assertSent"},
    assertrcvd{YType::uint32, "assertRcvd"},
    graftssent{YType::uint32, "graftsSent"},
    graftsrcvd{YType::uint32, "graftsRcvd"},
    grftacksent{YType::uint32, "grftAckSent"},
    grftackrcvd{YType::uint32, "grftAckRcvd"},
    dfoffersent{YType::uint32, "dfOfferSent"},
    dfofferrcvd{YType::uint32, "dfOfferRcvd"},
    dfwinnersent{YType::uint32, "dfWinnerSent"},
    dfwinnerrcvd{YType::uint32, "dfWinnerRcvd"},
    dfbackoffsent{YType::uint32, "dfBackoffSent"},
    dfbackoffrcvd{YType::uint32, "dfBackoffRcvd"},
    dfpassessent{YType::uint32, "dfPassesSent"},
    dfpassesrcvd{YType::uint32, "dfPassesRcvd"},
    chksumerr{YType::uint32, "chksumErr"},
    invalidpktsent{YType::uint32, "invalidPktSent"},
    invalidpktrcvd{YType::uint32, "invalidPktRcvd"},
    authfail{YType::uint32, "authFail"},
    pktlenerr{YType::uint32, "pktLenErr"},
    badverpkt{YType::uint32, "badVerPkt"},
    pktfrmself{YType::uint32, "pktFrmSelf"},
    pktfrmnonnbr{YType::uint32, "pktFrmNonNbr"},
    pktonpassiveif{YType::uint32, "pktOnPassiveIf"},
    jprcvdonrpf{YType::uint32, "jpRcvdOnRPF"},
    joinnorp{YType::uint32, "joinNoRP"},
    joinwrongrp{YType::uint32, "joinWrongRp"},
    jpssmrcvd{YType::uint32, "jpSSMRcvd"},
    jpbidirrcvd{YType::uint32, "jpBidirRcvd"},
    jpfilterin{YType::uint32, "jpFilterIn"},
    jpfilterout{YType::uint32, "jpFilterOut"}
{

    yang_name = "ifstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::~IfstatsItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return hellosent.is_set
	|| hellorcvd.is_set
	|| jpsent.is_set
	|| jprcvd.is_set
	|| assertsent.is_set
	|| assertrcvd.is_set
	|| graftssent.is_set
	|| graftsrcvd.is_set
	|| grftacksent.is_set
	|| grftackrcvd.is_set
	|| dfoffersent.is_set
	|| dfofferrcvd.is_set
	|| dfwinnersent.is_set
	|| dfwinnerrcvd.is_set
	|| dfbackoffsent.is_set
	|| dfbackoffrcvd.is_set
	|| dfpassessent.is_set
	|| dfpassesrcvd.is_set
	|| chksumerr.is_set
	|| invalidpktsent.is_set
	|| invalidpktrcvd.is_set
	|| authfail.is_set
	|| pktlenerr.is_set
	|| badverpkt.is_set
	|| pktfrmself.is_set
	|| pktfrmnonnbr.is_set
	|| pktonpassiveif.is_set
	|| jprcvdonrpf.is_set
	|| joinnorp.is_set
	|| joinwrongrp.is_set
	|| jpssmrcvd.is_set
	|| jpbidirrcvd.is_set
	|| jpfilterin.is_set
	|| jpfilterout.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hellosent.yfilter)
	|| ydk::is_set(hellorcvd.yfilter)
	|| ydk::is_set(jpsent.yfilter)
	|| ydk::is_set(jprcvd.yfilter)
	|| ydk::is_set(assertsent.yfilter)
	|| ydk::is_set(assertrcvd.yfilter)
	|| ydk::is_set(graftssent.yfilter)
	|| ydk::is_set(graftsrcvd.yfilter)
	|| ydk::is_set(grftacksent.yfilter)
	|| ydk::is_set(grftackrcvd.yfilter)
	|| ydk::is_set(dfoffersent.yfilter)
	|| ydk::is_set(dfofferrcvd.yfilter)
	|| ydk::is_set(dfwinnersent.yfilter)
	|| ydk::is_set(dfwinnerrcvd.yfilter)
	|| ydk::is_set(dfbackoffsent.yfilter)
	|| ydk::is_set(dfbackoffrcvd.yfilter)
	|| ydk::is_set(dfpassessent.yfilter)
	|| ydk::is_set(dfpassesrcvd.yfilter)
	|| ydk::is_set(chksumerr.yfilter)
	|| ydk::is_set(invalidpktsent.yfilter)
	|| ydk::is_set(invalidpktrcvd.yfilter)
	|| ydk::is_set(authfail.yfilter)
	|| ydk::is_set(pktlenerr.yfilter)
	|| ydk::is_set(badverpkt.yfilter)
	|| ydk::is_set(pktfrmself.yfilter)
	|| ydk::is_set(pktfrmnonnbr.yfilter)
	|| ydk::is_set(pktonpassiveif.yfilter)
	|| ydk::is_set(jprcvdonrpf.yfilter)
	|| ydk::is_set(joinnorp.yfilter)
	|| ydk::is_set(joinwrongrp.yfilter)
	|| ydk::is_set(jpssmrcvd.yfilter)
	|| ydk::is_set(jpbidirrcvd.yfilter)
	|| ydk::is_set(jpfilterin.yfilter)
	|| ydk::is_set(jpfilterout.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hellosent.is_set || is_set(hellosent.yfilter)) leaf_name_data.push_back(hellosent.get_name_leafdata());
    if (hellorcvd.is_set || is_set(hellorcvd.yfilter)) leaf_name_data.push_back(hellorcvd.get_name_leafdata());
    if (jpsent.is_set || is_set(jpsent.yfilter)) leaf_name_data.push_back(jpsent.get_name_leafdata());
    if (jprcvd.is_set || is_set(jprcvd.yfilter)) leaf_name_data.push_back(jprcvd.get_name_leafdata());
    if (assertsent.is_set || is_set(assertsent.yfilter)) leaf_name_data.push_back(assertsent.get_name_leafdata());
    if (assertrcvd.is_set || is_set(assertrcvd.yfilter)) leaf_name_data.push_back(assertrcvd.get_name_leafdata());
    if (graftssent.is_set || is_set(graftssent.yfilter)) leaf_name_data.push_back(graftssent.get_name_leafdata());
    if (graftsrcvd.is_set || is_set(graftsrcvd.yfilter)) leaf_name_data.push_back(graftsrcvd.get_name_leafdata());
    if (grftacksent.is_set || is_set(grftacksent.yfilter)) leaf_name_data.push_back(grftacksent.get_name_leafdata());
    if (grftackrcvd.is_set || is_set(grftackrcvd.yfilter)) leaf_name_data.push_back(grftackrcvd.get_name_leafdata());
    if (dfoffersent.is_set || is_set(dfoffersent.yfilter)) leaf_name_data.push_back(dfoffersent.get_name_leafdata());
    if (dfofferrcvd.is_set || is_set(dfofferrcvd.yfilter)) leaf_name_data.push_back(dfofferrcvd.get_name_leafdata());
    if (dfwinnersent.is_set || is_set(dfwinnersent.yfilter)) leaf_name_data.push_back(dfwinnersent.get_name_leafdata());
    if (dfwinnerrcvd.is_set || is_set(dfwinnerrcvd.yfilter)) leaf_name_data.push_back(dfwinnerrcvd.get_name_leafdata());
    if (dfbackoffsent.is_set || is_set(dfbackoffsent.yfilter)) leaf_name_data.push_back(dfbackoffsent.get_name_leafdata());
    if (dfbackoffrcvd.is_set || is_set(dfbackoffrcvd.yfilter)) leaf_name_data.push_back(dfbackoffrcvd.get_name_leafdata());
    if (dfpassessent.is_set || is_set(dfpassessent.yfilter)) leaf_name_data.push_back(dfpassessent.get_name_leafdata());
    if (dfpassesrcvd.is_set || is_set(dfpassesrcvd.yfilter)) leaf_name_data.push_back(dfpassesrcvd.get_name_leafdata());
    if (chksumerr.is_set || is_set(chksumerr.yfilter)) leaf_name_data.push_back(chksumerr.get_name_leafdata());
    if (invalidpktsent.is_set || is_set(invalidpktsent.yfilter)) leaf_name_data.push_back(invalidpktsent.get_name_leafdata());
    if (invalidpktrcvd.is_set || is_set(invalidpktrcvd.yfilter)) leaf_name_data.push_back(invalidpktrcvd.get_name_leafdata());
    if (authfail.is_set || is_set(authfail.yfilter)) leaf_name_data.push_back(authfail.get_name_leafdata());
    if (pktlenerr.is_set || is_set(pktlenerr.yfilter)) leaf_name_data.push_back(pktlenerr.get_name_leafdata());
    if (badverpkt.is_set || is_set(badverpkt.yfilter)) leaf_name_data.push_back(badverpkt.get_name_leafdata());
    if (pktfrmself.is_set || is_set(pktfrmself.yfilter)) leaf_name_data.push_back(pktfrmself.get_name_leafdata());
    if (pktfrmnonnbr.is_set || is_set(pktfrmnonnbr.yfilter)) leaf_name_data.push_back(pktfrmnonnbr.get_name_leafdata());
    if (pktonpassiveif.is_set || is_set(pktonpassiveif.yfilter)) leaf_name_data.push_back(pktonpassiveif.get_name_leafdata());
    if (jprcvdonrpf.is_set || is_set(jprcvdonrpf.yfilter)) leaf_name_data.push_back(jprcvdonrpf.get_name_leafdata());
    if (joinnorp.is_set || is_set(joinnorp.yfilter)) leaf_name_data.push_back(joinnorp.get_name_leafdata());
    if (joinwrongrp.is_set || is_set(joinwrongrp.yfilter)) leaf_name_data.push_back(joinwrongrp.get_name_leafdata());
    if (jpssmrcvd.is_set || is_set(jpssmrcvd.yfilter)) leaf_name_data.push_back(jpssmrcvd.get_name_leafdata());
    if (jpbidirrcvd.is_set || is_set(jpbidirrcvd.yfilter)) leaf_name_data.push_back(jpbidirrcvd.get_name_leafdata());
    if (jpfilterin.is_set || is_set(jpfilterin.yfilter)) leaf_name_data.push_back(jpfilterin.get_name_leafdata());
    if (jpfilterout.is_set || is_set(jpfilterout.yfilter)) leaf_name_data.push_back(jpfilterout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "helloSent")
    {
        hellosent = value;
        hellosent.value_namespace = name_space;
        hellosent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd = value;
        hellorcvd.value_namespace = name_space;
        hellorcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpSent")
    {
        jpsent = value;
        jpsent.value_namespace = name_space;
        jpsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRcvd")
    {
        jprcvd = value;
        jprcvd.value_namespace = name_space;
        jprcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertSent")
    {
        assertsent = value;
        assertsent.value_namespace = name_space;
        assertsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assertRcvd")
    {
        assertrcvd = value;
        assertrcvd.value_namespace = name_space;
        assertrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graftsSent")
    {
        graftssent = value;
        graftssent.value_namespace = name_space;
        graftssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graftsRcvd")
    {
        graftsrcvd = value;
        graftsrcvd.value_namespace = name_space;
        graftsrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grftAckSent")
    {
        grftacksent = value;
        grftacksent.value_namespace = name_space;
        grftacksent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grftAckRcvd")
    {
        grftackrcvd = value;
        grftackrcvd.value_namespace = name_space;
        grftackrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOfferSent")
    {
        dfoffersent = value;
        dfoffersent.value_namespace = name_space;
        dfoffersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfOfferRcvd")
    {
        dfofferrcvd = value;
        dfofferrcvd.value_namespace = name_space;
        dfofferrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinnerSent")
    {
        dfwinnersent = value;
        dfwinnersent.value_namespace = name_space;
        dfwinnersent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfWinnerRcvd")
    {
        dfwinnerrcvd = value;
        dfwinnerrcvd.value_namespace = name_space;
        dfwinnerrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfBackoffSent")
    {
        dfbackoffsent = value;
        dfbackoffsent.value_namespace = name_space;
        dfbackoffsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfBackoffRcvd")
    {
        dfbackoffrcvd = value;
        dfbackoffrcvd.value_namespace = name_space;
        dfbackoffrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfPassesSent")
    {
        dfpassessent = value;
        dfpassessent.value_namespace = name_space;
        dfpassessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfPassesRcvd")
    {
        dfpassesrcvd = value;
        dfpassesrcvd.value_namespace = name_space;
        dfpassesrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chksumErr")
    {
        chksumerr = value;
        chksumerr.value_namespace = name_space;
        chksumerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidPktSent")
    {
        invalidpktsent = value;
        invalidpktsent.value_namespace = name_space;
        invalidpktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidPktRcvd")
    {
        invalidpktrcvd = value;
        invalidpktrcvd.value_namespace = name_space;
        invalidpktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authFail")
    {
        authfail = value;
        authfail.value_namespace = name_space;
        authfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktLenErr")
    {
        pktlenerr = value;
        pktlenerr.value_namespace = name_space;
        pktlenerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "badVerPkt")
    {
        badverpkt = value;
        badverpkt.value_namespace = name_space;
        badverpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktFrmSelf")
    {
        pktfrmself = value;
        pktfrmself.value_namespace = name_space;
        pktfrmself.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktFrmNonNbr")
    {
        pktfrmnonnbr = value;
        pktfrmnonnbr.value_namespace = name_space;
        pktfrmnonnbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktOnPassiveIf")
    {
        pktonpassiveif = value;
        pktonpassiveif.value_namespace = name_space;
        pktonpassiveif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpRcvdOnRPF")
    {
        jprcvdonrpf = value;
        jprcvdonrpf.value_namespace = name_space;
        jprcvdonrpf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "joinNoRP")
    {
        joinnorp = value;
        joinnorp.value_namespace = name_space;
        joinnorp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "joinWrongRp")
    {
        joinwrongrp = value;
        joinwrongrp.value_namespace = name_space;
        joinwrongrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpSSMRcvd")
    {
        jpssmrcvd = value;
        jpssmrcvd.value_namespace = name_space;
        jpssmrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpBidirRcvd")
    {
        jpbidirrcvd = value;
        jpbidirrcvd.value_namespace = name_space;
        jpbidirrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpFilterIn")
    {
        jpfilterin = value;
        jpfilterin.value_namespace = name_space;
        jpfilterin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jpFilterOut")
    {
        jpfilterout = value;
        jpfilterout.value_namespace = name_space;
        jpfilterout.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "helloSent")
    {
        hellosent.yfilter = yfilter;
    }
    if(value_path == "helloRcvd")
    {
        hellorcvd.yfilter = yfilter;
    }
    if(value_path == "jpSent")
    {
        jpsent.yfilter = yfilter;
    }
    if(value_path == "jpRcvd")
    {
        jprcvd.yfilter = yfilter;
    }
    if(value_path == "assertSent")
    {
        assertsent.yfilter = yfilter;
    }
    if(value_path == "assertRcvd")
    {
        assertrcvd.yfilter = yfilter;
    }
    if(value_path == "graftsSent")
    {
        graftssent.yfilter = yfilter;
    }
    if(value_path == "graftsRcvd")
    {
        graftsrcvd.yfilter = yfilter;
    }
    if(value_path == "grftAckSent")
    {
        grftacksent.yfilter = yfilter;
    }
    if(value_path == "grftAckRcvd")
    {
        grftackrcvd.yfilter = yfilter;
    }
    if(value_path == "dfOfferSent")
    {
        dfoffersent.yfilter = yfilter;
    }
    if(value_path == "dfOfferRcvd")
    {
        dfofferrcvd.yfilter = yfilter;
    }
    if(value_path == "dfWinnerSent")
    {
        dfwinnersent.yfilter = yfilter;
    }
    if(value_path == "dfWinnerRcvd")
    {
        dfwinnerrcvd.yfilter = yfilter;
    }
    if(value_path == "dfBackoffSent")
    {
        dfbackoffsent.yfilter = yfilter;
    }
    if(value_path == "dfBackoffRcvd")
    {
        dfbackoffrcvd.yfilter = yfilter;
    }
    if(value_path == "dfPassesSent")
    {
        dfpassessent.yfilter = yfilter;
    }
    if(value_path == "dfPassesRcvd")
    {
        dfpassesrcvd.yfilter = yfilter;
    }
    if(value_path == "chksumErr")
    {
        chksumerr.yfilter = yfilter;
    }
    if(value_path == "invalidPktSent")
    {
        invalidpktsent.yfilter = yfilter;
    }
    if(value_path == "invalidPktRcvd")
    {
        invalidpktrcvd.yfilter = yfilter;
    }
    if(value_path == "authFail")
    {
        authfail.yfilter = yfilter;
    }
    if(value_path == "pktLenErr")
    {
        pktlenerr.yfilter = yfilter;
    }
    if(value_path == "badVerPkt")
    {
        badverpkt.yfilter = yfilter;
    }
    if(value_path == "pktFrmSelf")
    {
        pktfrmself.yfilter = yfilter;
    }
    if(value_path == "pktFrmNonNbr")
    {
        pktfrmnonnbr.yfilter = yfilter;
    }
    if(value_path == "pktOnPassiveIf")
    {
        pktonpassiveif.yfilter = yfilter;
    }
    if(value_path == "jpRcvdOnRPF")
    {
        jprcvdonrpf.yfilter = yfilter;
    }
    if(value_path == "joinNoRP")
    {
        joinnorp.yfilter = yfilter;
    }
    if(value_path == "joinWrongRp")
    {
        joinwrongrp.yfilter = yfilter;
    }
    if(value_path == "jpSSMRcvd")
    {
        jpssmrcvd.yfilter = yfilter;
    }
    if(value_path == "jpBidirRcvd")
    {
        jpbidirrcvd.yfilter = yfilter;
    }
    if(value_path == "jpFilterIn")
    {
        jpfilterin.yfilter = yfilter;
    }
    if(value_path == "jpFilterOut")
    {
        jpfilterout.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helloSent" || name == "helloRcvd" || name == "jpSent" || name == "jpRcvd" || name == "assertSent" || name == "assertRcvd" || name == "graftsSent" || name == "graftsRcvd" || name == "grftAckSent" || name == "grftAckRcvd" || name == "dfOfferSent" || name == "dfOfferRcvd" || name == "dfWinnerSent" || name == "dfWinnerRcvd" || name == "dfBackoffSent" || name == "dfBackoffRcvd" || name == "dfPassesSent" || name == "dfPassesRcvd" || name == "chksumErr" || name == "invalidPktSent" || name == "invalidPktRcvd" || name == "authFail" || name == "pktLenErr" || name == "badVerPkt" || name == "pktFrmSelf" || name == "pktFrmNonNbr" || name == "pktOnPassiveIf" || name == "jpRcvdOnRPF" || name == "joinNoRP" || name == "joinWrongRp" || name == "jpSSMRcvd" || name == "jpBidirRcvd" || name == "jpFilterIn" || name == "jpFilterOut")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpItems()
    :
    jptrp_list(this, {"policydir"})
{

    yang_name = "jp-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::~JpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<jptrp_list.len(); index++)
    {
        if(jptrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::has_operation() const
{
    for (std::size_t index=0; index<jptrp_list.len(); index++)
    {
        if(jptrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "JPTrP-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList>();
        c->parent = this;
        jptrp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : jptrp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "JPTrP-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::JPTrPList()
    :
    policydir{YType::enumeration, "policyDir"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    rtmap{YType::str, "RtMap"},
    pfxlist{YType::str, "pfxList"},
    itvl{YType::uint16, "itvl"}
{

    yang_name = "JPTrP-list"; yang_parent_name = "jp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::~JPTrPList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::has_data() const
{
    if (is_presence_container) return true;
    return policydir.is_set
	|| name.is_set
	|| descr.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| itvl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policydir.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(itvl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "JPTrP-list";
    ADD_KEY_TOKEN(policydir, "policyDir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policydir.is_set || is_set(policydir.yfilter)) leaf_name_data.push_back(policydir.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (itvl.is_set || is_set(itvl.yfilter)) leaf_name_data.push_back(itvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policyDir")
    {
        policydir = value;
        policydir.value_namespace = name_space;
        policydir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "itvl")
    {
        itvl = value;
        itvl.value_namespace = name_space;
        itvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policyDir")
    {
        policydir.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "RtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "itvl")
    {
        itvl.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JPTrPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policyDir" || name == "name" || name == "descr" || name == "RtMap" || name == "pfxList" || name == "itvl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::HelloItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    helloitvl{YType::uint32, "helloItvl"},
    autht{YType::enumeration, "authT"},
    authkey{YType::str, "authKey"}
{

    yang_name = "hello-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::~HelloItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| helloitvl.is_set
	|| autht.is_set
	|| authkey.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(helloitvl.yfilter)
	|| ydk::is_set(autht.yfilter)
	|| ydk::is_set(authkey.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (helloitvl.is_set || is_set(helloitvl.yfilter)) leaf_name_data.push_back(helloitvl.get_name_leafdata());
    if (autht.is_set || is_set(autht.yfilter)) leaf_name_data.push_back(autht.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloItvl")
    {
        helloitvl = value;
        helloitvl.value_namespace = name_space;
        helloitvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authT")
    {
        autht = value;
        autht.value_namespace = name_space;
        autht.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "helloItvl")
    {
        helloitvl.yfilter = yfilter;
    }
    if(value_path == "authT")
    {
        autht.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::HelloItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "helloItvl" || name == "authT" || name == "authKey")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::TrstatsItems()
{

    yang_name = "trstats-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::~TrstatsItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::has_operation() const
{
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        c->parent = this;
        rtnwpathtoif_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rtnwpathtoif_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::LimitItems::LimitItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    max{YType::uint32, "max"},
    rsvd{YType::uint32, "rsvd"},
    rtmap{YType::str, "rtMap"}
{

    yang_name = "limit-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::LimitItems::~LimitItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::LimitItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| max.is_set
	|| rsvd.is_set
	|| rtmap.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::LimitItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(rsvd.yfilter)
	|| ydk::is_set(rtmap.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::LimitItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::LimitItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (rsvd.is_set || is_set(rsvd.yfilter)) leaf_name_data.push_back(rsvd.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::LimitItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::LimitItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::LimitItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvd")
    {
        rsvd = value;
        rsvd.value_namespace = name_space;
        rsvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::LimitItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "rsvd")
    {
        rsvd.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::LimitItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "max" || name == "rsvd" || name == "rtMap")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::AsmItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    ctrl{YType::str, "ctrl"},
    prebuildspt{YType::boolean, "preBuildSpt"},
    force{YType::boolean, "force"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"}
        ,
    sgexp_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems>())
    , shared_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems>())
    , reg_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems>())
{
    sgexp_items->parent = this;
    shared_items->parent = this;
    reg_items->parent = this;

    yang_name = "asm-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::~AsmItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| ctrl.is_set
	|| prebuildspt.is_set
	|| force.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| (sgexp_items !=  nullptr && sgexp_items->has_data())
	|| (shared_items !=  nullptr && shared_items->has_data())
	|| (reg_items !=  nullptr && reg_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(prebuildspt.yfilter)
	|| ydk::is_set(force.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| (sgexp_items !=  nullptr && sgexp_items->has_operation())
	|| (shared_items !=  nullptr && shared_items->has_operation())
	|| (reg_items !=  nullptr && reg_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::AsmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AsmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (prebuildspt.is_set || is_set(prebuildspt.yfilter)) leaf_name_data.push_back(prebuildspt.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AsmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sgexp-items")
    {
        if(sgexp_items == nullptr)
        {
            sgexp_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems>();
        }
        return sgexp_items;
    }

    if(child_yang_name == "shared-items")
    {
        if(shared_items == nullptr)
        {
            shared_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems>();
        }
        return shared_items;
    }

    if(child_yang_name == "reg-items")
    {
        if(reg_items == nullptr)
        {
            reg_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems>();
        }
        return reg_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AsmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sgexp_items != nullptr)
    {
        children["sgexp-items"] = sgexp_items;
    }

    if(shared_items != nullptr)
    {
        children["shared-items"] = shared_items;
    }

    if(reg_items != nullptr)
    {
        children["reg-items"] = reg_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preBuildSpt")
    {
        prebuildspt = value;
        prebuildspt.value_namespace = name_space;
        prebuildspt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "preBuildSpt")
    {
        prebuildspt.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgexp-items" || name == "shared-items" || name == "reg-items" || name == "name" || name == "descr" || name == "ctrl" || name == "preBuildSpt" || name == "force" || name == "rtMap" || name == "pfxList")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::SgexpItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"},
    sgexpitvl{YType::uint32, "sgExpItvl"}
{

    yang_name = "sgexp-items"; yang_parent_name = "asm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::~SgexpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set
	|| sgexpitvl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter)
	|| ydk::is_set(sgexpitvl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sgexp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());
    if (sgexpitvl.is_set || is_set(sgexpitvl.yfilter)) leaf_name_data.push_back(sgexpitvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgExpItvl")
    {
        sgexpitvl = value;
        sgexpitvl.value_namespace = name_space;
        sgexpitvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
    if(value_path == "sgExpItvl")
    {
        sgexpitvl.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::SgexpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone" || name == "sgExpItvl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::SharedItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"},
    usesptcommand{YType::boolean, "useSPTCommand"}
{

    yang_name = "shared-items"; yang_parent_name = "asm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::~SharedItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set
	|| usesptcommand.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter)
	|| ydk::is_set(usesptcommand.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());
    if (usesptcommand.is_set || is_set(usesptcommand.yfilter)) leaf_name_data.push_back(usesptcommand.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useSPTCommand")
    {
        usesptcommand = value;
        usesptcommand.value_namespace = name_space;
        usesptcommand.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
    if(value_path == "useSPTCommand")
    {
        usesptcommand.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::SharedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone" || name == "useSPTCommand")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::RegItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    addr{YType::str, "addr"},
    srcif{YType::str, "srcIf"},
    maxrate{YType::uint16, "maxRate"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"}
{

    yang_name = "reg-items"; yang_parent_name = "asm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::~RegItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| addr.is_set
	|| srcif.is_set
	|| maxrate.is_set
	|| rtmap.is_set
	|| pfxlist.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(maxrate.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (maxrate.is_set || is_set(maxrate.yfilter)) leaf_name_data.push_back(maxrate.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRate")
    {
        maxrate = value;
        maxrate.value_namespace = name_space;
        maxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "maxRate")
    {
        maxrate.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::AsmItems::RegItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "addr" || name == "srcIf" || name == "maxRate" || name == "rtMap" || name == "pfxList")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::SsmItems::SsmItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    range_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems>())
{
    range_items->parent = this;

    yang_name = "ssm-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::SsmItems::~SsmItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::SsmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (range_items !=  nullptr && range_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::SsmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (range_items !=  nullptr && range_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::SsmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::SsmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::SsmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range-items")
    {
        if(range_items == nullptr)
        {
            range_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems>();
        }
        return range_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::SsmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range_items != nullptr)
    {
        children["range-items"] = range_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::SsmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::SsmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::SsmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::RangeItems()
    :
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"}
{

    yang_name = "range-items"; yang_parent_name = "ssm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::~RangeItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::has_data() const
{
    if (is_presence_container) return true;
    return rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::SsmItems::RangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::BidirItems::BidirItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    maxrp{YType::uint16, "maxRP"},
    dfobitvl{YType::uint16, "dfobItvl"}
{

    yang_name = "bidir-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::BidirItems::~BidirItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::BidirItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| maxrp.is_set
	|| dfobitvl.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::BidirItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(maxrp.yfilter)
	|| ydk::is_set(dfobitvl.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::BidirItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::BidirItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (maxrp.is_set || is_set(maxrp.yfilter)) leaf_name_data.push_back(maxrp.get_name_leafdata());
    if (dfobitvl.is_set || is_set(dfobitvl.yfilter)) leaf_name_data.push_back(dfobitvl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::BidirItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::BidirItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::BidirItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxRP")
    {
        maxrp = value;
        maxrp.value_namespace = name_space;
        maxrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dfobItvl")
    {
        dfobitvl = value;
        dfobitvl.value_namespace = name_space;
        dfobitvl.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::BidirItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "maxRP")
    {
        maxrp.yfilter = yfilter;
    }
    if(value_path == "dfobItvl")
    {
        dfobitvl.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::BidirItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "descr" || name == "maxRP" || name == "dfobItvl")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::StaticrpItems()
    :
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rp_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems>())
{
    rp_items->parent = this;

    yang_name = "staticrp-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::~StaticrpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| descr.is_set
	|| (rp_items !=  nullptr && rp_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rp_items !=  nullptr && rp_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "staticrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-items")
    {
        if(rp_items == nullptr)
        {
            rp_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems>();
        }
        return rp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_items != nullptr)
    {
        children["rp-items"] = rp_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-items" || name == "name" || name == "descr")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::RpItems()
    :
    staticrp_list(this, {"addr"})
{

    yang_name = "rp-items"; yang_parent_name = "staticrp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::~RpItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<staticrp_list.len(); index++)
    {
        if(staticrp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::has_operation() const
{
    for (std::size_t index=0; index<staticrp_list.len(); index++)
    {
        if(staticrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StaticRP-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList>();
        c->parent = this;
        staticrp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : staticrp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StaticRP-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::StaticRPList()
    :
    addr{YType::str, "addr"}
        ,
    range_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems>())
    , rpgrplist_items(std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems>())
{
    range_items->parent = this;
    rpgrplist_items->parent = this;

    yang_name = "StaticRP-list"; yang_parent_name = "rp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::~StaticRPList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::has_data() const
{
    if (is_presence_container) return true;
    return addr.is_set
	|| (range_items !=  nullptr && range_items->has_data())
	|| (rpgrplist_items !=  nullptr && rpgrplist_items->has_data());
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| (range_items !=  nullptr && range_items->has_operation())
	|| (rpgrplist_items !=  nullptr && rpgrplist_items->has_operation());
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StaticRP-list";
    ADD_KEY_TOKEN(addr, "addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range-items")
    {
        if(range_items == nullptr)
        {
            range_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems>();
        }
        return range_items;
    }

    if(child_yang_name == "rpgrplist-items")
    {
        if(rpgrplist_items == nullptr)
        {
            rpgrplist_items = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems>();
        }
        return rpgrplist_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range_items != nullptr)
    {
        children["range-items"] = range_items;
    }

    if(rpgrplist_items != nullptr)
    {
        children["rpgrplist-items"] = rpgrplist_items;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-items" || name == "rpgrplist-items" || name == "addr")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RangeItems()
    :
    rpgrprange_list(this, {"bidir"})
{

    yang_name = "range-items"; yang_parent_name = "StaticRP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::~RangeItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrprange_list.len(); index++)
    {
        if(rpgrprange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPGrpRange-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList>();
        c->parent = this;
        rpgrprange_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrprange_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPGrpRange-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::RPGrpRangeList()
    :
    bidir{YType::boolean, "bidir"},
    override{YType::boolean, "override"},
    rtmap{YType::str, "rtMap"},
    pfxlist{YType::str, "pfxList"},
    grplist{YType::str, "grpList"},
    grplist1{YType::str, "grpList1"},
    grplist2{YType::str, "grpList2"},
    grplist3{YType::str, "grpList3"},
    ssmnone{YType::boolean, "ssmNone"}
{

    yang_name = "RPGrpRange-list"; yang_parent_name = "range-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::~RPGrpRangeList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::has_data() const
{
    if (is_presence_container) return true;
    return bidir.is_set
	|| override.is_set
	|| rtmap.is_set
	|| pfxlist.is_set
	|| grplist.is_set
	|| grplist1.is_set
	|| grplist2.is_set
	|| grplist3.is_set
	|| ssmnone.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| ydk::is_set(override.yfilter)
	|| ydk::is_set(rtmap.yfilter)
	|| ydk::is_set(pfxlist.yfilter)
	|| ydk::is_set(grplist.yfilter)
	|| ydk::is_set(grplist1.yfilter)
	|| ydk::is_set(grplist2.yfilter)
	|| ydk::is_set(grplist3.yfilter)
	|| ydk::is_set(ssmnone.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPGrpRange-list";
    ADD_KEY_TOKEN(bidir, "bidir");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());
    if (rtmap.is_set || is_set(rtmap.yfilter)) leaf_name_data.push_back(rtmap.get_name_leafdata());
    if (pfxlist.is_set || is_set(pfxlist.yfilter)) leaf_name_data.push_back(pfxlist.get_name_leafdata());
    if (grplist.is_set || is_set(grplist.yfilter)) leaf_name_data.push_back(grplist.get_name_leafdata());
    if (grplist1.is_set || is_set(grplist1.yfilter)) leaf_name_data.push_back(grplist1.get_name_leafdata());
    if (grplist2.is_set || is_set(grplist2.yfilter)) leaf_name_data.push_back(grplist2.get_name_leafdata());
    if (grplist3.is_set || is_set(grplist3.yfilter)) leaf_name_data.push_back(grplist3.get_name_leafdata());
    if (ssmnone.is_set || is_set(ssmnone.yfilter)) leaf_name_data.push_back(ssmnone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtMap")
    {
        rtmap = value;
        rtmap.value_namespace = name_space;
        rtmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfxList")
    {
        pfxlist = value;
        pfxlist.value_namespace = name_space;
        pfxlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList")
    {
        grplist = value;
        grplist.value_namespace = name_space;
        grplist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList1")
    {
        grplist1 = value;
        grplist1.value_namespace = name_space;
        grplist1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList2")
    {
        grplist2 = value;
        grplist2.value_namespace = name_space;
        grplist2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpList3")
    {
        grplist3 = value;
        grplist3.value_namespace = name_space;
        grplist3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssmNone")
    {
        ssmnone = value;
        ssmnone.value_namespace = name_space;
        ssmnone.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
    if(value_path == "rtMap")
    {
        rtmap.yfilter = yfilter;
    }
    if(value_path == "pfxList")
    {
        pfxlist.yfilter = yfilter;
    }
    if(value_path == "grpList")
    {
        grplist.yfilter = yfilter;
    }
    if(value_path == "grpList1")
    {
        grplist1.yfilter = yfilter;
    }
    if(value_path == "grpList2")
    {
        grplist2.yfilter = yfilter;
    }
    if(value_path == "grpList3")
    {
        grplist3.yfilter = yfilter;
    }
    if(value_path == "ssmNone")
    {
        ssmnone.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RPGrpRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir" || name == "override" || name == "rtMap" || name == "pfxList" || name == "grpList" || name == "grpList1" || name == "grpList2" || name == "grpList3" || name == "ssmNone")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpgrplistItems()
    :
    rpgrplist_list(this, {"grplistname"})
{

    yang_name = "rpgrplist-items"; yang_parent_name = "StaticRP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::~RpgrplistItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpgrplist_list.len(); index++)
    {
        if(rpgrplist_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::has_operation() const
{
    for (std::size_t index=0; index<rpgrplist_list.len(); index++)
    {
        if(rpgrplist_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpgrplist-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RPGrpList-list")
    {
        auto c = std::make_shared<System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList>();
        c->parent = this;
        rpgrplist_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpgrplist_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RPGrpList-list")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::RPGrpListList()
    :
    grplistname{YType::str, "grpListName"},
    bidir{YType::boolean, "bidir"},
    override{YType::boolean, "override"}
{

    yang_name = "RPGrpList-list"; yang_parent_name = "rpgrplist-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::~RPGrpListList()
{
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::has_data() const
{
    if (is_presence_container) return true;
    return grplistname.is_set
	|| bidir.is_set
	|| override.is_set;
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(grplistname.yfilter)
	|| ydk::is_set(bidir.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RPGrpList-list";
    ADD_KEY_TOKEN(grplistname, "grpListName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grplistname.is_set || is_set(grplistname.yfilter)) leaf_name_data.push_back(grplistname.get_name_leafdata());
    if (bidir.is_set || is_set(bidir.yfilter)) leaf_name_data.push_back(bidir.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "grpListName")
    {
        grplistname = value;
        grplistname.value_namespace = name_space;
        grplistname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidir")
    {
        bidir = value;
        bidir.value_namespace = name_space;
        bidir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "grpListName")
    {
        grplistname.yfilter = yfilter;
    }
    if(value_path == "bidir")
    {
        bidir.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool System::PimItems::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RPGrpListList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grpListName" || name == "bidir" || name == "override")
        return true;
    return false;
}

System::PimItems::InstItems::DomItems::DomList::TrstatsItems::TrstatsItems()
{

    yang_name = "trstats-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PimItems::InstItems::DomItems::DomList::TrstatsItems::~TrstatsItems()
{
}

bool System::PimItems::InstItems::DomItems::DomList::TrstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool System::PimItems::InstItems::DomItems::DomList::TrstatsItems::has_operation() const
{
    return is_set(yfilter);
}

std::string System::PimItems::InstItems::DomItems::DomList::TrstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PimItems::InstItems::DomItems::DomList::TrstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::PimItems::InstItems::DomItems::DomList::TrstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::PimItems::InstItems::DomItems::DomList::TrstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::PimItems::InstItems::DomItems::DomList::TrstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PimItems::InstItems::DomItems::DomList::TrstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PimItems::InstItems::DomItems::DomList::TrstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

System::SegrtItems::SegrtItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"},
    opererr{YType::str, "operErr"}
        ,
    inst_items(std::make_shared<System::SegrtItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "segrt-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::~SegrtItems()
{
}

bool System::SegrtItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| opererr.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::SegrtItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::SegrtItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segrt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SegrtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::SegrtItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SegrtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inst_items != nullptr)
    {
        children["inst-items"] = inst_items;
    }

    return children;
}

void System::SegrtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::SegrtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt" || name == "operErr")
        return true;
    return false;
}

System::SegrtItems::InstItems::InstItems()
    :
    srgbcleanupintvl{YType::uint16, "srgbCleanupIntvl"},
    srgballocretryintvl{YType::uint16, "srgbAllocRetryIntvl"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    dom_items(std::make_shared<System::SegrtItems::InstItems::DomItems>())
    , srgb_items(std::make_shared<System::SegrtItems::InstItems::SrgbItems>())
{
    dom_items->parent = this;
    srgb_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "segrt-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::~InstItems()
{
}

bool System::SegrtItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return srgbcleanupintvl.is_set
	|| srgballocretryintvl.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (srgb_items !=  nullptr && srgb_items->has_data());
}

bool System::SegrtItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srgbcleanupintvl.yfilter)
	|| ydk::is_set(srgballocretryintvl.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (srgb_items !=  nullptr && srgb_items->has_operation());
}

std::string System::SegrtItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srgbcleanupintvl.is_set || is_set(srgbcleanupintvl.yfilter)) leaf_name_data.push_back(srgbcleanupintvl.get_name_leafdata());
    if (srgballocretryintvl.is_set || is_set(srgballocretryintvl.yfilter)) leaf_name_data.push_back(srgballocretryintvl.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SegrtItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::SegrtItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "srgb-items")
    {
        if(srgb_items == nullptr)
        {
            srgb_items = std::make_shared<System::SegrtItems::InstItems::SrgbItems>();
        }
        return srgb_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SegrtItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dom_items != nullptr)
    {
        children["dom-items"] = dom_items;
    }

    if(srgb_items != nullptr)
    {
        children["srgb-items"] = srgb_items;
    }

    return children;
}

void System::SegrtItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srgbCleanupIntvl")
    {
        srgbcleanupintvl = value;
        srgbcleanupintvl.value_namespace = name_space;
        srgbcleanupintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgbAllocRetryIntvl")
    {
        srgballocretryintvl = value;
        srgballocretryintvl.value_namespace = name_space;
        srgballocretryintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srgbCleanupIntvl")
    {
        srgbcleanupintvl.yfilter = yfilter;
    }
    if(value_path == "srgbAllocRetryIntvl")
    {
        srgballocretryintvl.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "srgb-items" || name == "srgbCleanupIntvl" || name == "srgbAllocRetryIntvl" || name == "operSt" || name == "operStQual" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::DomItems::~DomItems()
{
}

bool System::SegrtItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SegrtItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto c = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList>();
        c->parent = this;
        dom_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SegrtItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dom_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SegrtItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"}
        ,
    af_items(std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems>())
{
    af_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (af_items !=  nullptr && af_items->has_data());
}

bool System::SegrtItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (af_items !=  nullptr && af_items->has_operation());
}

std::string System::SegrtItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SegrtItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems>();
        }
        return af_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SegrtItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(af_items != nullptr)
    {
        children["af-items"] = af_items;
    }

    return children;
}

void System::SegrtItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-items" || name == "name")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::AfItems()
    :
    domaf_list(this, {"aftype"})
{

    yang_name = "af-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::~AfItems()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::has_operation() const
{
    for (std::size_t index=0; index<domaf_list.len(); index++)
    {
        if(domaf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::InstItems::DomItems::DomList::AfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::AfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SegrtItems::InstItems::DomItems::DomList::AfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DomAf-list")
    {
        auto c = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList>();
        c->parent = this;
        domaf_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SegrtItems::InstItems::DomItems::DomList::AfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : domaf_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DomAf-list")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::DomAfList()
    :
    aftype{YType::enumeration, "afType"},
    name{YType::str, "name"}
        ,
    pfxsid_items(std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems>())
{
    pfxsid_items->parent = this;

    yang_name = "DomAf-list"; yang_parent_name = "af-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::~DomAfList()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::has_data() const
{
    if (is_presence_container) return true;
    return aftype.is_set
	|| name.is_set
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_data());
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aftype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (pfxsid_items !=  nullptr && pfxsid_items->has_operation());
}

std::string System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DomAf-list";
    ADD_KEY_TOKEN(aftype, "afType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aftype.is_set || is_set(aftype.yfilter)) leaf_name_data.push_back(aftype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfxsid-items")
    {
        if(pfxsid_items == nullptr)
        {
            pfxsid_items = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems>();
        }
        return pfxsid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pfxsid_items != nullptr)
    {
        children["pfxsid-items"] = pfxsid_items;
    }

    return children;
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afType")
    {
        aftype = value;
        aftype.value_namespace = name_space;
        aftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afType")
    {
        aftype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfxsid-items" || name == "afType" || name == "name")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PfxsidItems()
    :
    prefixsid_list(this, {"type"})
{

    yang_name = "pfxsid-items"; yang_parent_name = "DomAf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::~PfxsidItems()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixsid_list.len(); index++)
    {
        if(prefixsid_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::has_operation() const
{
    for (std::size_t index=0; index<prefixsid_list.len(); index++)
    {
        if(prefixsid_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PrefixSid-list")
    {
        auto c = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList>();
        c->parent = this;
        prefixsid_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prefixsid_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PrefixSid-list")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::PrefixSidList()
    :
    type{YType::enumeration, "type"}
        ,
    mplspfxsid_items(std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems>())
{
    mplspfxsid_items->parent = this;

    yang_name = "PrefixSid-list"; yang_parent_name = "pfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::~PrefixSidList()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (mplspfxsid_items !=  nullptr && mplspfxsid_items->has_data());
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (mplspfxsid_items !=  nullptr && mplspfxsid_items->has_operation());
}

std::string System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PrefixSid-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplspfxsid-items")
    {
        if(mplspfxsid_items == nullptr)
        {
            mplspfxsid_items = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems>();
        }
        return mplspfxsid_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mplspfxsid_items != nullptr)
    {
        children["mplspfxsid-items"] = mplspfxsid_items;
    }

    return children;
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplspfxsid-items" || name == "type")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplspfxsidItems()
    :
    mplsprefixsid_list(this, {"pfx"})
{

    yang_name = "mplspfxsid-items"; yang_parent_name = "PrefixSid-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::~MplspfxsidItems()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsprefixsid_list.len(); index++)
    {
        if(mplsprefixsid_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::has_operation() const
{
    for (std::size_t index=0; index<mplsprefixsid_list.len(); index++)
    {
        if(mplsprefixsid_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplspfxsid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MplsPrefixSid-list")
    {
        auto c = std::make_shared<System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList>();
        c->parent = this;
        mplsprefixsid_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplsprefixsid_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MplsPrefixSid-list")
        return true;
    return false;
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::MplsPrefixSidList()
    :
    pfx{YType::str, "pfx"},
    sidvaluetype{YType::enumeration, "sidValueType"},
    sidvalue{YType::uint32, "sidValue"}
{

    yang_name = "MplsPrefixSid-list"; yang_parent_name = "mplspfxsid-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::~MplsPrefixSidList()
{
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::has_data() const
{
    if (is_presence_container) return true;
    return pfx.is_set
	|| sidvaluetype.is_set
	|| sidvalue.is_set;
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfx.yfilter)
	|| ydk::is_set(sidvaluetype.yfilter)
	|| ydk::is_set(sidvalue.yfilter);
}

std::string System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MplsPrefixSid-list";
    ADD_KEY_TOKEN(pfx, "pfx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.yfilter)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (sidvaluetype.is_set || is_set(sidvaluetype.yfilter)) leaf_name_data.push_back(sidvaluetype.get_name_leafdata());
    if (sidvalue.is_set || is_set(sidvalue.yfilter)) leaf_name_data.push_back(sidvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfx")
    {
        pfx = value;
        pfx.value_namespace = name_space;
        pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sidValueType")
    {
        sidvaluetype = value;
        sidvaluetype.value_namespace = name_space;
        sidvaluetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sidValue")
    {
        sidvalue = value;
        sidvalue.value_namespace = name_space;
        sidvalue.value_namespace_prefix = name_space_prefix;
    }
}

void System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfx")
    {
        pfx.yfilter = yfilter;
    }
    if(value_path == "sidValueType")
    {
        sidvaluetype.yfilter = yfilter;
    }
    if(value_path == "sidValue")
    {
        sidvalue.yfilter = yfilter;
    }
}

bool System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfx" || name == "sidValueType" || name == "sidValue")
        return true;
    return false;
}

System::SegrtItems::InstItems::SrgbItems::SrgbItems()
    :
    cfgsrgb_items(std::make_shared<System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems>())
    , opersrgb_items(std::make_shared<System::SegrtItems::InstItems::SrgbItems::OpersrgbItems>())
{
    cfgsrgb_items->parent = this;
    opersrgb_items->parent = this;

    yang_name = "srgb-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::SrgbItems::~SrgbItems()
{
}

bool System::SegrtItems::InstItems::SrgbItems::has_data() const
{
    if (is_presence_container) return true;
    return (cfgsrgb_items !=  nullptr && cfgsrgb_items->has_data())
	|| (opersrgb_items !=  nullptr && opersrgb_items->has_data());
}

bool System::SegrtItems::InstItems::SrgbItems::has_operation() const
{
    return is_set(yfilter)
	|| (cfgsrgb_items !=  nullptr && cfgsrgb_items->has_operation())
	|| (opersrgb_items !=  nullptr && opersrgb_items->has_operation());
}

std::string System::SegrtItems::InstItems::SrgbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::SrgbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::SrgbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SegrtItems::InstItems::SrgbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfgsrgb-items")
    {
        if(cfgsrgb_items == nullptr)
        {
            cfgsrgb_items = std::make_shared<System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems>();
        }
        return cfgsrgb_items;
    }

    if(child_yang_name == "opersrgb-items")
    {
        if(opersrgb_items == nullptr)
        {
            opersrgb_items = std::make_shared<System::SegrtItems::InstItems::SrgbItems::OpersrgbItems>();
        }
        return opersrgb_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SegrtItems::InstItems::SrgbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cfgsrgb_items != nullptr)
    {
        children["cfgsrgb-items"] = cfgsrgb_items;
    }

    if(opersrgb_items != nullptr)
    {
        children["opersrgb-items"] = opersrgb_items;
    }

    return children;
}

void System::SegrtItems::InstItems::SrgbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::SrgbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::SrgbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfgsrgb-items" || name == "opersrgb-items")
        return true;
    return false;
}

System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::CfgsrgbItems()
    :
    configsrgb_list(this, {"type"})
{

    yang_name = "cfgsrgb-items"; yang_parent_name = "srgb-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::~CfgsrgbItems()
{
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<configsrgb_list.len(); index++)
    {
        if(configsrgb_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::has_operation() const
{
    for (std::size_t index=0; index<configsrgb_list.len(); index++)
    {
        if(configsrgb_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/segrt-items/inst-items/srgb-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfgsrgb-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ConfigSrgb-list")
    {
        auto c = std::make_shared<System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList>();
        c->parent = this;
        configsrgb_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : configsrgb_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ConfigSrgb-list")
        return true;
    return false;
}


}
}

