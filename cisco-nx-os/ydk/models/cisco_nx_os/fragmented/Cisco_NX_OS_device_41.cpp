
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_41.hpp"
#include "Cisco_NX_OS_device_42.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocledItems()
    :
    locled_list(this, {"id"})
{

    yang_name = "locled-items"; yang_parent_name = "ft-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::~LocledItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::has_operation() const
{
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locled-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LocLed-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList>();
        ent_->parent = this;
        locled_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locled_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LocLed-list")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::LocLedList()
    :
    id{YType::uint32, "id"},
    model{YType::str, "model"},
    descr{YType::str, "descr"},
    color{YType::enumeration, "color"},
    operst{YType::enumeration, "operSt"},
    adminst{YType::enumeration, "adminSt"}
{

    yang_name = "LocLed-list"; yang_parent_name = "locled-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::~LocLedList()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| model.is_set
	|| descr.is_set
	|| color.is_set
	|| operst.is_set
	|| adminst.is_set;
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(adminst.yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LocLed-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "model" || name == "descr" || name == "color" || name == "operSt" || name == "adminSt")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems>())
    , spfanblk_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems>())
    , spfansn_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems>())
{
    spcmn_items->parent = this;
    spfanblk_items->parent = this;
    spfansn_items->parent = this;

    yang_name = "spfan-items"; yang_parent_name = "ft-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::~SpfanItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (spfanblk_items !=  nullptr && spfanblk_items->has_data())
	|| (spfansn_items !=  nullptr && spfansn_items->has_data());
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (spfanblk_items !=  nullptr && spfanblk_items->has_operation())
	|| (spfansn_items !=  nullptr && spfansn_items->has_operation());
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numblk.is_set || is_set(numblk.yfilter)) leaf_name_data.push_back(numblk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "spfanblk-items")
    {
        if(spfanblk_items == nullptr)
        {
            spfanblk_items = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems>();
        }
        return spfanblk_items;
    }

    if(child_yang_name == "spfansn-items")
    {
        if(spfansn_items == nullptr)
        {
            spfansn_items = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems>();
        }
        return spfansn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spcmn_items != nullptr)
    {
        _children["spcmn-items"] = spcmn_items;
    }

    if(spfanblk_items != nullptr)
    {
        _children["spfanblk-items"] = spfanblk_items;
    }

    if(spfansn_items != nullptr)
    {
        _children["spfansn-items"] = spfansn_items;
    }

    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numBlk")
    {
        numblk = value;
        numblk.value_namespace = name_space;
        numblk.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numBlk")
    {
        numblk.yfilter = yfilter;
    }
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "spfanblk-items" || name == "spfansn-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::SpcmnItems()
    :
    size{YType::uint16, "size"},
    count{YType::uint16, "count"},
    major_{YType::uint16, "major"},
    minor{YType::uint16, "minor"},
    oem{YType::str, "oem"},
    pdnum{YType::str, "pdNum"},
    sernum{YType::str, "serNum"},
    prtnum{YType::str, "prtNum"},
    prev{YType::str, "pRev"},
    mfgdev{YType::str, "mfgDev"},
    hwver{YType::str, "hwVer"},
    mfgbits{YType::uint16, "mfgBits"},
    engbits{YType::uint16, "engBits"},
    pwrcon{YType::int16, "pwrCon"},
    rmafl{YType::str, "rmaFl"},
    clei{YType::str, "clei"},
    vdrid{YType::str, "vdrId"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spcmn-items"; yang_parent_name = "spfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| count.is_set
	|| major_.is_set
	|| minor.is_set
	|| oem.is_set
	|| pdnum.is_set
	|| sernum.is_set
	|| prtnum.is_set
	|| prev.is_set
	|| mfgdev.is_set
	|| hwver.is_set
	|| mfgbits.is_set
	|| engbits.is_set
	|| pwrcon.is_set
	|| rmafl.is_set
	|| clei.is_set
	|| vdrid.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(oem.yfilter)
	|| ydk::is_set(pdnum.yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(prtnum.yfilter)
	|| ydk::is_set(prev.yfilter)
	|| ydk::is_set(mfgdev.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(mfgbits.yfilter)
	|| ydk::is_set(engbits.yfilter)
	|| ydk::is_set(pwrcon.yfilter)
	|| ydk::is_set(rmafl.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (oem.is_set || is_set(oem.yfilter)) leaf_name_data.push_back(oem.get_name_leafdata());
    if (pdnum.is_set || is_set(pdnum.yfilter)) leaf_name_data.push_back(pdnum.get_name_leafdata());
    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (prtnum.is_set || is_set(prtnum.yfilter)) leaf_name_data.push_back(prtnum.get_name_leafdata());
    if (prev.is_set || is_set(prev.yfilter)) leaf_name_data.push_back(prev.get_name_leafdata());
    if (mfgdev.is_set || is_set(mfgdev.yfilter)) leaf_name_data.push_back(mfgdev.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (mfgbits.is_set || is_set(mfgbits.yfilter)) leaf_name_data.push_back(mfgbits.get_name_leafdata());
    if (engbits.is_set || is_set(engbits.yfilter)) leaf_name_data.push_back(engbits.get_name_leafdata());
    if (pwrcon.is_set || is_set(pwrcon.yfilter)) leaf_name_data.push_back(pwrcon.get_name_leafdata());
    if (rmafl.is_set || is_set(rmafl.yfilter)) leaf_name_data.push_back(rmafl.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem")
    {
        oem = value;
        oem.value_namespace = name_space;
        oem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdNum")
    {
        pdnum = value;
        pdnum.value_namespace = name_space;
        pdnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtNum")
    {
        prtnum = value;
        prtnum.value_namespace = name_space;
        prtnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pRev")
    {
        prev = value;
        prev.value_namespace = name_space;
        prev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgDev")
    {
        mfgdev = value;
        mfgdev.value_namespace = name_space;
        mfgdev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgBits")
    {
        mfgbits = value;
        mfgbits.value_namespace = name_space;
        mfgbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engBits")
    {
        engbits = value;
        engbits.value_namespace = name_space;
        engbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrCon")
    {
        pwrcon = value;
        pwrcon.value_namespace = name_space;
        pwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmaFl")
    {
        rmafl = value;
        rmafl.value_namespace = name_space;
        rmafl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "oem")
    {
        oem.yfilter = yfilter;
    }
    if(value_path == "pdNum")
    {
        pdnum.yfilter = yfilter;
    }
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "prtNum")
    {
        prtnum.yfilter = yfilter;
    }
    if(value_path == "pRev")
    {
        prev.yfilter = yfilter;
    }
    if(value_path == "mfgDev")
    {
        mfgdev.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "mfgBits")
    {
        mfgbits.yfilter = yfilter;
    }
    if(value_path == "engBits")
    {
        engbits.yfilter = yfilter;
    }
    if(value_path == "pwrCon")
    {
        pwrcon.yfilter = yfilter;
    }
    if(value_path == "rmaFl")
    {
        rmafl.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::SpfanblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    stackmib{YType::uint16, "stackMIB"},
    coolcap{YType::uint16, "coolCap"},
    ambtemp{YType::uint16, "ambTemp"},
    hppwrcon{YType::uint16, "hpPwrCon"},
    hpcoolcon{YType::uint16, "hpCoolCon"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spfanblk-items"; yang_parent_name = "spfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::~SpfanblkItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| stackmib.is_set
	|| coolcap.is_set
	|| ambtemp.is_set
	|| hppwrcon.is_set
	|| hpcoolcon.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(stackmib.yfilter)
	|| ydk::is_set(coolcap.yfilter)
	|| ydk::is_set(ambtemp.yfilter)
	|| ydk::is_set(hppwrcon.yfilter)
	|| ydk::is_set(hpcoolcon.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfanblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (stackmib.is_set || is_set(stackmib.yfilter)) leaf_name_data.push_back(stackmib.get_name_leafdata());
    if (coolcap.is_set || is_set(coolcap.yfilter)) leaf_name_data.push_back(coolcap.get_name_leafdata());
    if (ambtemp.is_set || is_set(ambtemp.yfilter)) leaf_name_data.push_back(ambtemp.get_name_leafdata());
    if (hppwrcon.is_set || is_set(hppwrcon.yfilter)) leaf_name_data.push_back(hppwrcon.get_name_leafdata());
    if (hpcoolcon.is_set || is_set(hpcoolcon.yfilter)) leaf_name_data.push_back(hpcoolcon.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fbits")
    {
        fbits = value;
        fbits.value_namespace = name_space;
        fbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwCBits")
    {
        hwcbits = value;
        hwcbits.value_namespace = name_space;
        hwcbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stackMIB")
    {
        stackmib = value;
        stackmib.value_namespace = name_space;
        stackmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coolCap")
    {
        coolcap = value;
        coolcap.value_namespace = name_space;
        coolcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ambTemp")
    {
        ambtemp = value;
        ambtemp.value_namespace = name_space;
        ambtemp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hpPwrCon")
    {
        hppwrcon = value;
        hppwrcon.value_namespace = name_space;
        hppwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hpCoolCon")
    {
        hpcoolcon = value;
        hpcoolcon.value_namespace = name_space;
        hpcoolcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "stackMIB")
    {
        stackmib.yfilter = yfilter;
    }
    if(value_path == "coolCap")
    {
        coolcap.yfilter = yfilter;
    }
    if(value_path == "ambTemp")
    {
        ambtemp.yfilter = yfilter;
    }
    if(value_path == "hpPwrCon")
    {
        hppwrcon.yfilter = yfilter;
    }
    if(value_path == "hpCoolCon")
    {
        hpcoolcon.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fbits" || name == "hwCBits" || name == "stackMIB" || name == "coolCap" || name == "ambTemp" || name == "hpPwrCon" || name == "hpCoolCon" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::SpfansnItems()
    :
    sernum{YType::str, "serNum"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spfansn-items"; yang_parent_name = "spfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::~SpfansnItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::has_data() const
{
    if (is_presence_container) return true;
    return sernum.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfansn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serNum" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "FtSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ChItems::SpbpItems::SpbpItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ChItems::SpbpItems::SpcmnItems>())
    , spbpblk_items(std::make_shared<System::ChItems::SpbpItems::SpbpblkItems>())
{
    spcmn_items->parent = this;
    spbpblk_items->parent = this;

    yang_name = "spbp-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::SpbpItems::~SpbpItems()
{
}

bool System::ChItems::SpbpItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (spbpblk_items !=  nullptr && spbpblk_items->has_data());
}

bool System::ChItems::SpbpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (spbpblk_items !=  nullptr && spbpblk_items->has_operation());
}

std::string System::ChItems::SpbpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::SpbpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spbp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SpbpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numblk.is_set || is_set(numblk.yfilter)) leaf_name_data.push_back(numblk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SpbpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ChItems::SpbpItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "spbpblk-items")
    {
        if(spbpblk_items == nullptr)
        {
            spbpblk_items = std::make_shared<System::ChItems::SpbpItems::SpbpblkItems>();
        }
        return spbpblk_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SpbpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spcmn_items != nullptr)
    {
        _children["spcmn-items"] = spcmn_items;
    }

    if(spbpblk_items != nullptr)
    {
        _children["spbpblk-items"] = spbpblk_items;
    }

    return _children;
}

void System::ChItems::SpbpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numBlk")
    {
        numblk = value;
        numblk.value_namespace = name_space;
        numblk.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SpbpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numBlk")
    {
        numblk.yfilter = yfilter;
    }
}

bool System::ChItems::SpbpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "spbpblk-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ChItems::SpbpItems::SpcmnItems::SpcmnItems()
    :
    size{YType::uint16, "size"},
    count{YType::uint16, "count"},
    major_{YType::uint16, "major"},
    minor{YType::uint16, "minor"},
    oem{YType::str, "oem"},
    pdnum{YType::str, "pdNum"},
    sernum{YType::str, "serNum"},
    prtnum{YType::str, "prtNum"},
    prev{YType::str, "pRev"},
    mfgdev{YType::str, "mfgDev"},
    hwver{YType::str, "hwVer"},
    mfgbits{YType::uint16, "mfgBits"},
    engbits{YType::uint16, "engBits"},
    pwrcon{YType::int16, "pwrCon"},
    rmafl{YType::str, "rmaFl"},
    clei{YType::str, "clei"},
    vdrid{YType::str, "vdrId"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spcmn-items"; yang_parent_name = "spbp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::SpbpItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ChItems::SpbpItems::SpcmnItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| count.is_set
	|| major_.is_set
	|| minor.is_set
	|| oem.is_set
	|| pdnum.is_set
	|| sernum.is_set
	|| prtnum.is_set
	|| prev.is_set
	|| mfgdev.is_set
	|| hwver.is_set
	|| mfgbits.is_set
	|| engbits.is_set
	|| pwrcon.is_set
	|| rmafl.is_set
	|| clei.is_set
	|| vdrid.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::SpbpItems::SpcmnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(oem.yfilter)
	|| ydk::is_set(pdnum.yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(prtnum.yfilter)
	|| ydk::is_set(prev.yfilter)
	|| ydk::is_set(mfgdev.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(mfgbits.yfilter)
	|| ydk::is_set(engbits.yfilter)
	|| ydk::is_set(pwrcon.yfilter)
	|| ydk::is_set(rmafl.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::SpbpItems::SpcmnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/spbp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::SpbpItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SpbpItems::SpcmnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (oem.is_set || is_set(oem.yfilter)) leaf_name_data.push_back(oem.get_name_leafdata());
    if (pdnum.is_set || is_set(pdnum.yfilter)) leaf_name_data.push_back(pdnum.get_name_leafdata());
    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (prtnum.is_set || is_set(prtnum.yfilter)) leaf_name_data.push_back(prtnum.get_name_leafdata());
    if (prev.is_set || is_set(prev.yfilter)) leaf_name_data.push_back(prev.get_name_leafdata());
    if (mfgdev.is_set || is_set(mfgdev.yfilter)) leaf_name_data.push_back(mfgdev.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (mfgbits.is_set || is_set(mfgbits.yfilter)) leaf_name_data.push_back(mfgbits.get_name_leafdata());
    if (engbits.is_set || is_set(engbits.yfilter)) leaf_name_data.push_back(engbits.get_name_leafdata());
    if (pwrcon.is_set || is_set(pwrcon.yfilter)) leaf_name_data.push_back(pwrcon.get_name_leafdata());
    if (rmafl.is_set || is_set(rmafl.yfilter)) leaf_name_data.push_back(rmafl.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SpbpItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SpbpItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::SpbpItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem")
    {
        oem = value;
        oem.value_namespace = name_space;
        oem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdNum")
    {
        pdnum = value;
        pdnum.value_namespace = name_space;
        pdnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtNum")
    {
        prtnum = value;
        prtnum.value_namespace = name_space;
        prtnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pRev")
    {
        prev = value;
        prev.value_namespace = name_space;
        prev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgDev")
    {
        mfgdev = value;
        mfgdev.value_namespace = name_space;
        mfgdev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgBits")
    {
        mfgbits = value;
        mfgbits.value_namespace = name_space;
        mfgbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engBits")
    {
        engbits = value;
        engbits.value_namespace = name_space;
        engbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrCon")
    {
        pwrcon = value;
        pwrcon.value_namespace = name_space;
        pwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmaFl")
    {
        rmafl = value;
        rmafl.value_namespace = name_space;
        rmafl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SpbpItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "oem")
    {
        oem.yfilter = yfilter;
    }
    if(value_path == "pdNum")
    {
        pdnum.yfilter = yfilter;
    }
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "prtNum")
    {
        prtnum.yfilter = yfilter;
    }
    if(value_path == "pRev")
    {
        prev.yfilter = yfilter;
    }
    if(value_path == "mfgDev")
    {
        mfgdev.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "mfgBits")
    {
        mfgbits.yfilter = yfilter;
    }
    if(value_path == "engBits")
    {
        engbits.yfilter = yfilter;
    }
    if(value_path == "pwrCon")
    {
        pwrcon.yfilter = yfilter;
    }
    if(value_path == "rmaFl")
    {
        rmafl.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::SpbpItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::SpbpItems::SpbpblkItems::SpbpblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    macb{YType::str, "macB"},
    macl{YType::uint16, "macL"},
    stackmib{YType::uint16, "stackMIB"},
    oemeprise{YType::uint16, "oemEprise"},
    oemmib{YType::uint16, "oemMIB"},
    maxcpwr{YType::uint16, "maxCPwr"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spbpblk-items"; yang_parent_name = "spbp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::SpbpItems::SpbpblkItems::~SpbpblkItems()
{
}

bool System::ChItems::SpbpItems::SpbpblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| macb.is_set
	|| macl.is_set
	|| stackmib.is_set
	|| oemeprise.is_set
	|| oemmib.is_set
	|| maxcpwr.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::SpbpItems::SpbpblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(macl.yfilter)
	|| ydk::is_set(stackmib.yfilter)
	|| ydk::is_set(oemeprise.yfilter)
	|| ydk::is_set(oemmib.yfilter)
	|| ydk::is_set(maxcpwr.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::SpbpItems::SpbpblkItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/spbp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::SpbpItems::SpbpblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spbpblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SpbpItems::SpbpblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (macl.is_set || is_set(macl.yfilter)) leaf_name_data.push_back(macl.get_name_leafdata());
    if (stackmib.is_set || is_set(stackmib.yfilter)) leaf_name_data.push_back(stackmib.get_name_leafdata());
    if (oemeprise.is_set || is_set(oemeprise.yfilter)) leaf_name_data.push_back(oemeprise.get_name_leafdata());
    if (oemmib.is_set || is_set(oemmib.yfilter)) leaf_name_data.push_back(oemmib.get_name_leafdata());
    if (maxcpwr.is_set || is_set(maxcpwr.yfilter)) leaf_name_data.push_back(maxcpwr.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SpbpItems::SpbpblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SpbpItems::SpbpblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::SpbpItems::SpbpblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fbits")
    {
        fbits = value;
        fbits.value_namespace = name_space;
        fbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwCBits")
    {
        hwcbits = value;
        hwcbits.value_namespace = name_space;
        hwcbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macL")
    {
        macl = value;
        macl.value_namespace = name_space;
        macl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stackMIB")
    {
        stackmib = value;
        stackmib.value_namespace = name_space;
        stackmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oemEprise")
    {
        oemeprise = value;
        oemeprise.value_namespace = name_space;
        oemeprise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oemMIB")
    {
        oemmib = value;
        oemmib.value_namespace = name_space;
        oemmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr = value;
        maxcpwr.value_namespace = name_space;
        maxcpwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SpbpItems::SpbpblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macL")
    {
        macl.yfilter = yfilter;
    }
    if(value_path == "stackMIB")
    {
        stackmib.yfilter = yfilter;
    }
    if(value_path == "oemEprise")
    {
        oemeprise.yfilter = yfilter;
    }
    if(value_path == "oemMIB")
    {
        oemmib.yfilter = yfilter;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::SpbpItems::SpbpblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fbits" || name == "hwCBits" || name == "macB" || name == "macL" || name == "stackMIB" || name == "oemEprise" || name == "oemMIB" || name == "maxCPwr" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::BslotItems::BslotItems()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    board_items(std::make_shared<System::ChItems::BslotItems::BoardItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::BslotItems::RtoosSlotItems>())
{
    board_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "bslot-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::~BslotItems()
{
}

bool System::ChItems::BslotItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (board_items !=  nullptr && board_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::BslotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (board_items !=  nullptr && board_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ChItems::BslotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "board-items")
    {
        if(board_items == nullptr)
        {
            board_items = std::make_shared<System::ChItems::BslotItems::BoardItems>();
        }
        return board_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ChItems::BslotItems::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(board_items != nullptr)
    {
        _children["board-items"] = board_items;
    }

    if(rtoosslot_items != nullptr)
    {
        _children["rtoosSlot-items"] = rtoosslot_items;
    }

    return _children;
}

void System::ChItems::BslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::BslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ChItems::BslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "board-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::BoardItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    swcid{YType::uint32, "swCId"},
    nump{YType::uint16, "numP"},
    mace{YType::str, "macE"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    fwver{YType::str, "fwVer"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"},
    vdrid{YType::str, "vdrId"},
    poweractualdraw{YType::uint32, "powerActualDraw"},
    powerallocated{YType::uint32, "powerAllocated"}
        ,
    sensor_items(std::make_shared<System::ChItems::BslotItems::BoardItems::SensorItems>())
    , asic_items(std::make_shared<System::ChItems::BslotItems::BoardItems::AsicItems>())
    , cpu_items(std::make_shared<System::ChItems::BslotItems::BoardItems::CpuItems>())
    , dimm_items(std::make_shared<System::ChItems::BslotItems::BoardItems::DimmItems>())
    , flash_items(std::make_shared<System::ChItems::BslotItems::BoardItems::FlashItems>())
    , obfl_items(std::make_shared<System::ChItems::BslotItems::BoardItems::ObflItems>())
{
    sensor_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    dimm_items->parent = this;
    flash_items->parent = this;
    obfl_items->parent = this;

    yang_name = "board-items"; yang_parent_name = "bslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::~BoardItems()
{
}

bool System::ChItems::BslotItems::BoardItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| operst.is_set
	|| swcid.is_set
	|| nump.is_set
	|| mace.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| fwver.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| vdrid.is_set
	|| poweractualdraw.is_set
	|| powerallocated.is_set
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (dimm_items !=  nullptr && dimm_items->has_data())
	|| (flash_items !=  nullptr && flash_items->has_data())
	|| (obfl_items !=  nullptr && obfl_items->has_data());
}

bool System::ChItems::BslotItems::BoardItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(swcid.yfilter)
	|| ydk::is_set(nump.yfilter)
	|| ydk::is_set(mace.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(fwver.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(poweractualdraw.yfilter)
	|| ydk::is_set(powerallocated.yfilter)
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (dimm_items !=  nullptr && dimm_items->has_operation())
	|| (flash_items !=  nullptr && flash_items->has_operation())
	|| (obfl_items !=  nullptr && obfl_items->has_operation());
}

std::string System::ChItems::BslotItems::BoardItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "board-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (swcid.is_set || is_set(swcid.yfilter)) leaf_name_data.push_back(swcid.get_name_leafdata());
    if (nump.is_set || is_set(nump.yfilter)) leaf_name_data.push_back(nump.get_name_leafdata());
    if (mace.is_set || is_set(mace.yfilter)) leaf_name_data.push_back(mace.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (fwver.is_set || is_set(fwver.yfilter)) leaf_name_data.push_back(fwver.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (poweractualdraw.is_set || is_set(poweractualdraw.yfilter)) leaf_name_data.push_back(poweractualdraw.get_name_leafdata());
    if (powerallocated.is_set || is_set(powerallocated.yfilter)) leaf_name_data.push_back(powerallocated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::ChItems::BslotItems::BoardItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "asic-items")
    {
        if(asic_items == nullptr)
        {
            asic_items = std::make_shared<System::ChItems::BslotItems::BoardItems::AsicItems>();
        }
        return asic_items;
    }

    if(child_yang_name == "cpu-items")
    {
        if(cpu_items == nullptr)
        {
            cpu_items = std::make_shared<System::ChItems::BslotItems::BoardItems::CpuItems>();
        }
        return cpu_items;
    }

    if(child_yang_name == "dimm-items")
    {
        if(dimm_items == nullptr)
        {
            dimm_items = std::make_shared<System::ChItems::BslotItems::BoardItems::DimmItems>();
        }
        return dimm_items;
    }

    if(child_yang_name == "flash-items")
    {
        if(flash_items == nullptr)
        {
            flash_items = std::make_shared<System::ChItems::BslotItems::BoardItems::FlashItems>();
        }
        return flash_items;
    }

    if(child_yang_name == "obfl-items")
    {
        if(obfl_items == nullptr)
        {
            obfl_items = std::make_shared<System::ChItems::BslotItems::BoardItems::ObflItems>();
        }
        return obfl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sensor_items != nullptr)
    {
        _children["sensor-items"] = sensor_items;
    }

    if(asic_items != nullptr)
    {
        _children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        _children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        _children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        _children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        _children["obfl-items"] = obfl_items;
    }

    return _children;
}

void System::ChItems::BslotItems::BoardItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swCId")
    {
        swcid = value;
        swcid.value_namespace = name_space;
        swcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numP")
    {
        nump = value;
        nump.value_namespace = name_space;
        nump.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macE")
    {
        mace = value;
        mace.value_namespace = name_space;
        mace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrSt")
    {
        pwrst = value;
        pwrst.value_namespace = name_space;
        pwrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwVer")
    {
        fwver = value;
        fwver.value_namespace = name_space;
        fwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swVer")
    {
        swver = value;
        swver.value_namespace = name_space;
        swver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw = value;
        poweractualdraw.value_namespace = name_space;
        poweractualdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated = value;
        powerallocated.value_namespace = name_space;
        powerallocated.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::BslotItems::BoardItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "swCId")
    {
        swcid.yfilter = yfilter;
    }
    if(value_path == "numP")
    {
        nump.yfilter = yfilter;
    }
    if(value_path == "macE")
    {
        mace.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "pwrSt")
    {
        pwrst.yfilter = yfilter;
    }
    if(value_path == "fwVer")
    {
        fwver.yfilter = yfilter;
    }
    if(value_path == "swVer")
    {
        swver.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw.yfilter = yfilter;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated.yfilter = yfilter;
    }
}

bool System::ChItems::BslotItems::BoardItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "operSt" || name == "swCId" || name == "numP" || name == "macE" || name == "upTs" || name == "pwrSt" || name == "fwVer" || name == "swVer" || name == "partNumber" || name == "vdrId" || name == "powerActualDraw" || name == "powerAllocated")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::SensorItems::SensorItems()
    :
    sensor_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "board-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::SensorItems::~SensorItems()
{
}

bool System::ChItems::BslotItems::BoardItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::BslotItems::BoardItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::SensorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto ent_ = std::make_shared<System::ChItems::BslotItems::BoardItems::SensorItems::SensorList>();
        ent_->parent = this;
        sensor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::BslotItems::BoardItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::BslotItems::BoardItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::BslotItems::BoardItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sensor-list")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::SensorList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    majorthresh{YType::int16, "majorThresh"},
    minorthresh{YType::int16, "minorThresh"},
    operst{YType::enumeration, "operSt"},
    tempvalue{YType::uint16, "tempValue"},
    unit{YType::str, "unit"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    descr{YType::str, "descr"}
{

    yang_name = "Sensor-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::~SensorList()
{
}

bool System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| majorthresh.is_set
	|| minorthresh.is_set
	|| operst.is_set
	|| tempvalue.is_set
	|| unit.is_set
	|| vendor.is_set
	|| model.is_set
	|| descr.is_set;
}

bool System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(majorthresh.yfilter)
	|| ydk::is_set(minorthresh.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(tempvalue.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/sensor-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sensor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (majorthresh.is_set || is_set(majorthresh.yfilter)) leaf_name_data.push_back(majorthresh.get_name_leafdata());
    if (minorthresh.is_set || is_set(minorthresh.yfilter)) leaf_name_data.push_back(minorthresh.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (tempvalue.is_set || is_set(tempvalue.yfilter)) leaf_name_data.push_back(tempvalue.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majorThresh")
    {
        majorthresh = value;
        majorthresh.value_namespace = name_space;
        majorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minorThresh")
    {
        minorthresh = value;
        minorthresh.value_namespace = name_space;
        minorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tempValue")
    {
        tempvalue = value;
        tempvalue.value_namespace = name_space;
        tempvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "majorThresh")
    {
        majorthresh.yfilter = yfilter;
    }
    if(value_path == "minorThresh")
    {
        minorthresh.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "tempValue")
    {
        tempvalue.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "majorThresh" || name == "minorThresh" || name == "operSt" || name == "tempValue" || name == "unit" || name == "vendor" || name == "model" || name == "descr")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::AsicItems::AsicItems()
    :
    asic_list(this, {"id"})
{

    yang_name = "asic-items"; yang_parent_name = "board-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::AsicItems::~AsicItems()
{
}

bool System::ChItems::BslotItems::BoardItems::AsicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::BslotItems::BoardItems::AsicItems::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::AsicItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::AsicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::AsicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto ent_ = std::make_shared<System::ChItems::BslotItems::BoardItems::AsicItems::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::BslotItems::BoardItems::AsicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::BslotItems::BoardItems::AsicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::BslotItems::BoardItems::AsicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Asic-list")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::AsicList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    numslices{YType::uint8, "numSlices"},
    capabilities{YType::str, "capabilities"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Asic-list"; yang_parent_name = "asic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::~AsicList()
{
}

bool System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| operst.is_set
	|| numslices.is_set
	|| capabilities.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numslices.yfilter)
	|| ydk::is_set(capabilities.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/asic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Asic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numslices.is_set || is_set(numslices.yfilter)) leaf_name_data.push_back(numslices.get_name_leafdata());
    if (capabilities.is_set || is_set(capabilities.yfilter)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numSlices")
    {
        numslices = value;
        numslices.value_namespace = name_space;
        numslices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities")
    {
        capabilities = value;
        capabilities.value_namespace = name_space;
        capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numSlices")
    {
        numslices.yfilter = yfilter;
    }
    if(value_path == "capabilities")
    {
        capabilities.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "operSt" || name == "numSlices" || name == "capabilities" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::CpuItems::CpuItems()
    :
    cpu_list(this, {"id"})
{

    yang_name = "cpu-items"; yang_parent_name = "board-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::CpuItems::~CpuItems()
{
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::has_operation() const
{
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::CpuItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::CpuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::CpuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto ent_ = std::make_shared<System::ChItems::BslotItems::BoardItems::CpuItems::CPUList>();
        ent_->parent = this;
        cpu_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::BslotItems::BoardItems::CpuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::BslotItems::BoardItems::CpuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPU-list")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CPUList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    sock{YType::enumeration, "sock"},
    arch{YType::enumeration, "arch"},
    speed{YType::str, "speed"},
    cores{YType::uint16, "cores"},
    coresen{YType::uint16, "coresEn"},
    thrds{YType::uint16, "thrds"}
        ,
    core_items(std::make_shared<System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems>())
{
    core_items->parent = this;

    yang_name = "CPU-list"; yang_parent_name = "cpu-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::~CPUList()
{
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| sock.is_set
	|| arch.is_set
	|| speed.is_set
	|| cores.is_set
	|| coresen.is_set
	|| thrds.is_set
	|| (core_items !=  nullptr && core_items->has_data());
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sock.yfilter)
	|| ydk::is_set(arch.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(cores.yfilter)
	|| ydk::is_set(coresen.yfilter)
	|| ydk::is_set(thrds.yfilter)
	|| (core_items !=  nullptr && core_items->has_operation());
}

std::string System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/cpu-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPU-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sock.is_set || is_set(sock.yfilter)) leaf_name_data.push_back(sock.get_name_leafdata());
    if (arch.is_set || is_set(arch.yfilter)) leaf_name_data.push_back(arch.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (cores.is_set || is_set(cores.yfilter)) leaf_name_data.push_back(cores.get_name_leafdata());
    if (coresen.is_set || is_set(coresen.yfilter)) leaf_name_data.push_back(coresen.get_name_leafdata());
    if (thrds.is_set || is_set(thrds.yfilter)) leaf_name_data.push_back(thrds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(core_items != nullptr)
    {
        _children["core-items"] = core_items;
    }

    return _children;
}

void System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sock")
    {
        sock = value;
        sock.value_namespace = name_space;
        sock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch")
    {
        arch = value;
        arch.value_namespace = name_space;
        arch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cores")
    {
        cores = value;
        cores.value_namespace = name_space;
        cores.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coresEn")
    {
        coresen = value;
        coresen.value_namespace = name_space;
        coresen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thrds")
    {
        thrds = value;
        thrds.value_namespace = name_space;
        thrds.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sock")
    {
        sock.yfilter = yfilter;
    }
    if(value_path == "arch")
    {
        arch.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "cores")
    {
        cores.yfilter = yfilter;
    }
    if(value_path == "coresEn")
    {
        coresen.yfilter = yfilter;
    }
    if(value_path == "thrds")
    {
        thrds.yfilter = yfilter;
    }
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "sock" || name == "arch" || name == "speed" || name == "cores" || name == "coresEn" || name == "thrds")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreItems()
    :
    core_list(this, {"id"})
{

    yang_name = "core-items"; yang_parent_name = "CPU-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::~CoreItems()
{
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto ent_ = std::make_shared<System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList>();
        ent_->parent = this;
        core_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : core_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::CoreList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Core-list"; yang_parent_name = "core-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::~CoreList()
{
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::DimmItems::DimmItems()
    :
    dimm_list(this, {"id"})
{

    yang_name = "dimm-items"; yang_parent_name = "board-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::DimmItems::~DimmItems()
{
}

bool System::ChItems::BslotItems::BoardItems::DimmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::BslotItems::BoardItems::DimmItems::has_operation() const
{
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::DimmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::DimmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::DimmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto ent_ = std::make_shared<System::ChItems::BslotItems::BoardItems::DimmItems::DimmList>();
        ent_->parent = this;
        dimm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dimm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::BslotItems::BoardItems::DimmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::BslotItems::BoardItems::DimmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::BslotItems::BoardItems::DimmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dimm-list")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::DimmList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Dimm-list"; yang_parent_name = "dimm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::~DimmList()
{
}

bool System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/dimm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dimm-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::FlashItems::FlashItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "flash-items"; yang_parent_name = "board-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::FlashItems::~FlashItems()
{
}

bool System::ChItems::BslotItems::BoardItems::FlashItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::BslotItems::BoardItems::FlashItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::FlashItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::FlashItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::FlashItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::BslotItems::BoardItems::FlashItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::BslotItems::BoardItems::FlashItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::BslotItems::BoardItems::FlashItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::ObflItems::ObflItems()
    :
    logt{YType::str, "logT"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "obfl-items"; yang_parent_name = "board-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::ObflItems::~ObflItems()
{
}

bool System::ChItems::BslotItems::BoardItems::ObflItems::has_data() const
{
    if (is_presence_container) return true;
    return logt.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::BslotItems::BoardItems::ObflItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logt.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::ObflItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::ObflItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obfl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::ObflItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logt.is_set || is_set(logt.yfilter)) leaf_name_data.push_back(logt.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::BoardItems::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::BoardItems::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::BslotItems::BoardItems::ObflItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logT")
    {
        logt = value;
        logt.value_namespace = name_space;
        logt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::BslotItems::BoardItems::ObflItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logT")
    {
        logt.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::BslotItems::BoardItems::ObflItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logT" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::BslotItems::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "bslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::BslotItems::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ChItems::BslotItems::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ChItems::BslotItems::RtoosSlotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::BslotItems::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::BslotItems::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::BslotItems::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::BslotItems::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ChItems::BslotItems::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ChItems::NslotItems::NslotItems()
    :
    nslot_list(this, {"id"})
{

    yang_name = "nslot-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::NslotItems::~NslotItems()
{
}

bool System::ChItems::NslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nslot_list.len(); index++)
    {
        if(nslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::has_operation() const
{
    for (std::size_t index=0; index<nslot_list.len(); index++)
    {
        if(nslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::NslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NSlot-list")
    {
        auto ent_ = std::make_shared<System::ChItems::NslotItems::NSlotList>();
        ent_->parent = this;
        nslot_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nslot_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::NslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NSlot-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NSlotList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    nic_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::NslotItems::NSlotList::RtoosSlotItems>())
{
    nic_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "NSlot-list"; yang_parent_name = "nslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::NslotItems::NSlotList::~NSlotList()
{
}

bool System::ChItems::NslotItems::NSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (nic_items !=  nullptr && nic_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::NslotItems::NSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (nic_items !=  nullptr && nic_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ChItems::NslotItems::NSlotList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/nslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::NslotItems::NSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nic-items")
    {
        if(nic_items == nullptr)
        {
            nic_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems>();
        }
        return nic_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ChItems::NslotItems::NSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nic_items != nullptr)
    {
        _children["nic-items"] = nic_items;
    }

    if(rtoosslot_items != nullptr)
    {
        _children["rtoosSlot-items"] = rtoosslot_items;
    }

    return _children;
}

void System::ChItems::NslotItems::NSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::NslotItems::NSlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ChItems::NslotItems::NSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nic-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicItems()
    :
    nic_list(this, {"id"})
{

    yang_name = "nic-items"; yang_parent_name = "NSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::~NicItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nic_list.len(); index++)
    {
        if(nic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::has_operation() const
{
    for (std::size_t index=0; index<nic_list.len(); index++)
    {
        if(nic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nic-list")
    {
        auto ent_ = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList>();
        ent_->parent = this;
        nic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nic-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::NicList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    swcid{YType::uint32, "swCId"},
    nump{YType::uint16, "numP"},
    mace{YType::str, "macE"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    fwver{YType::str, "fwVer"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"},
    vdrid{YType::str, "vdrId"},
    poweractualdraw{YType::uint32, "powerActualDraw"},
    powerallocated{YType::uint32, "powerAllocated"}
        ,
    eaport_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems>())
    , sensor_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems>())
    , asic_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems>())
    , cpu_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems>())
    , dimm_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems>())
    , flash_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems>())
    , obfl_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems>())
{
    eaport_items->parent = this;
    sensor_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    dimm_items->parent = this;
    flash_items->parent = this;
    obfl_items->parent = this;

    yang_name = "Nic-list"; yang_parent_name = "nic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::~NicList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| operst.is_set
	|| swcid.is_set
	|| nump.is_set
	|| mace.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| fwver.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| vdrid.is_set
	|| poweractualdraw.is_set
	|| powerallocated.is_set
	|| (eaport_items !=  nullptr && eaport_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (dimm_items !=  nullptr && dimm_items->has_data())
	|| (flash_items !=  nullptr && flash_items->has_data())
	|| (obfl_items !=  nullptr && obfl_items->has_data());
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(swcid.yfilter)
	|| ydk::is_set(nump.yfilter)
	|| ydk::is_set(mace.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(fwver.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(poweractualdraw.yfilter)
	|| ydk::is_set(powerallocated.yfilter)
	|| (eaport_items !=  nullptr && eaport_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (dimm_items !=  nullptr && dimm_items->has_operation())
	|| (flash_items !=  nullptr && flash_items->has_operation())
	|| (obfl_items !=  nullptr && obfl_items->has_operation());
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (swcid.is_set || is_set(swcid.yfilter)) leaf_name_data.push_back(swcid.get_name_leafdata());
    if (nump.is_set || is_set(nump.yfilter)) leaf_name_data.push_back(nump.get_name_leafdata());
    if (mace.is_set || is_set(mace.yfilter)) leaf_name_data.push_back(mace.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (fwver.is_set || is_set(fwver.yfilter)) leaf_name_data.push_back(fwver.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (poweractualdraw.is_set || is_set(poweractualdraw.yfilter)) leaf_name_data.push_back(poweractualdraw.get_name_leafdata());
    if (powerallocated.is_set || is_set(powerallocated.yfilter)) leaf_name_data.push_back(powerallocated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eaport-items")
    {
        if(eaport_items == nullptr)
        {
            eaport_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems>();
        }
        return eaport_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "asic-items")
    {
        if(asic_items == nullptr)
        {
            asic_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems>();
        }
        return asic_items;
    }

    if(child_yang_name == "cpu-items")
    {
        if(cpu_items == nullptr)
        {
            cpu_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems>();
        }
        return cpu_items;
    }

    if(child_yang_name == "dimm-items")
    {
        if(dimm_items == nullptr)
        {
            dimm_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems>();
        }
        return dimm_items;
    }

    if(child_yang_name == "flash-items")
    {
        if(flash_items == nullptr)
        {
            flash_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems>();
        }
        return flash_items;
    }

    if(child_yang_name == "obfl-items")
    {
        if(obfl_items == nullptr)
        {
            obfl_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems>();
        }
        return obfl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eaport_items != nullptr)
    {
        _children["eaport-items"] = eaport_items;
    }

    if(sensor_items != nullptr)
    {
        _children["sensor-items"] = sensor_items;
    }

    if(asic_items != nullptr)
    {
        _children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        _children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        _children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        _children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        _children["obfl-items"] = obfl_items;
    }

    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swCId")
    {
        swcid = value;
        swcid.value_namespace = name_space;
        swcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numP")
    {
        nump = value;
        nump.value_namespace = name_space;
        nump.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macE")
    {
        mace = value;
        mace.value_namespace = name_space;
        mace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrSt")
    {
        pwrst = value;
        pwrst.value_namespace = name_space;
        pwrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwVer")
    {
        fwver = value;
        fwver.value_namespace = name_space;
        fwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swVer")
    {
        swver = value;
        swver.value_namespace = name_space;
        swver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw = value;
        poweractualdraw.value_namespace = name_space;
        poweractualdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated = value;
        powerallocated.value_namespace = name_space;
        powerallocated.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "swCId")
    {
        swcid.yfilter = yfilter;
    }
    if(value_path == "numP")
    {
        nump.yfilter = yfilter;
    }
    if(value_path == "macE")
    {
        mace.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "pwrSt")
    {
        pwrst.yfilter = yfilter;
    }
    if(value_path == "fwVer")
    {
        fwver.yfilter = yfilter;
    }
    if(value_path == "swVer")
    {
        swver.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw.yfilter = yfilter;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated.yfilter = yfilter;
    }
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eaport-items" || name == "sensor-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "operSt" || name == "swCId" || name == "numP" || name == "macE" || name == "upTs" || name == "pwrSt" || name == "fwVer" || name == "swVer" || name == "partNumber" || name == "vdrId" || name == "powerActualDraw" || name == "powerAllocated")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::EaportItems()
    :
    extap_list(this, {"id"})
{

    yang_name = "eaport-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::~EaportItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extap_list.len(); index++)
    {
        if(extap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::has_operation() const
{
    for (std::size_t index=0; index<extap_list.len(); index++)
    {
        if(extap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eaport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtAP-list")
    {
        auto ent_ = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList>();
        ent_->parent = this;
        extap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtAP-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::ExtAPList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "ExtAP-list"; yang_parent_name = "eaport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::~ExtAPList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtAP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorItems()
    :
    sensor_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::~SensorItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto ent_ = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList>();
        ent_->parent = this;
        sensor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sensor-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::SensorList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    majorthresh{YType::int16, "majorThresh"},
    minorthresh{YType::int16, "minorThresh"},
    operst{YType::enumeration, "operSt"},
    tempvalue{YType::uint16, "tempValue"},
    unit{YType::str, "unit"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    descr{YType::str, "descr"}
{

    yang_name = "Sensor-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::~SensorList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| majorthresh.is_set
	|| minorthresh.is_set
	|| operst.is_set
	|| tempvalue.is_set
	|| unit.is_set
	|| vendor.is_set
	|| model.is_set
	|| descr.is_set;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(majorthresh.yfilter)
	|| ydk::is_set(minorthresh.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(tempvalue.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sensor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (majorthresh.is_set || is_set(majorthresh.yfilter)) leaf_name_data.push_back(majorthresh.get_name_leafdata());
    if (minorthresh.is_set || is_set(minorthresh.yfilter)) leaf_name_data.push_back(minorthresh.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (tempvalue.is_set || is_set(tempvalue.yfilter)) leaf_name_data.push_back(tempvalue.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majorThresh")
    {
        majorthresh = value;
        majorthresh.value_namespace = name_space;
        majorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minorThresh")
    {
        minorthresh = value;
        minorthresh.value_namespace = name_space;
        minorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tempValue")
    {
        tempvalue = value;
        tempvalue.value_namespace = name_space;
        tempvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "majorThresh")
    {
        majorthresh.yfilter = yfilter;
    }
    if(value_path == "minorThresh")
    {
        minorthresh.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "tempValue")
    {
        tempvalue.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "majorThresh" || name == "minorThresh" || name == "operSt" || name == "tempValue" || name == "unit" || name == "vendor" || name == "model" || name == "descr")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicItems()
    :
    asic_list(this, {"id"})
{

    yang_name = "asic-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::~AsicItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto ent_ = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Asic-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::AsicList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    numslices{YType::uint8, "numSlices"},
    capabilities{YType::str, "capabilities"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Asic-list"; yang_parent_name = "asic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::~AsicList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| operst.is_set
	|| numslices.is_set
	|| capabilities.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numslices.yfilter)
	|| ydk::is_set(capabilities.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Asic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numslices.is_set || is_set(numslices.yfilter)) leaf_name_data.push_back(numslices.get_name_leafdata());
    if (capabilities.is_set || is_set(capabilities.yfilter)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numSlices")
    {
        numslices = value;
        numslices.value_namespace = name_space;
        numslices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities")
    {
        capabilities = value;
        capabilities.value_namespace = name_space;
        capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numSlices")
    {
        numslices.yfilter = yfilter;
    }
    if(value_path == "capabilities")
    {
        capabilities.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "operSt" || name == "numSlices" || name == "capabilities" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CpuItems()
    :
    cpu_list(this, {"id"})
{

    yang_name = "cpu-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::~CpuItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::has_operation() const
{
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto ent_ = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList>();
        ent_->parent = this;
        cpu_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPU-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CPUList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    sock{YType::enumeration, "sock"},
    arch{YType::enumeration, "arch"},
    speed{YType::str, "speed"},
    cores{YType::uint16, "cores"},
    coresen{YType::uint16, "coresEn"},
    thrds{YType::uint16, "thrds"}
        ,
    core_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems>())
{
    core_items->parent = this;

    yang_name = "CPU-list"; yang_parent_name = "cpu-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::~CPUList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| sock.is_set
	|| arch.is_set
	|| speed.is_set
	|| cores.is_set
	|| coresen.is_set
	|| thrds.is_set
	|| (core_items !=  nullptr && core_items->has_data());
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sock.yfilter)
	|| ydk::is_set(arch.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(cores.yfilter)
	|| ydk::is_set(coresen.yfilter)
	|| ydk::is_set(thrds.yfilter)
	|| (core_items !=  nullptr && core_items->has_operation());
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPU-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sock.is_set || is_set(sock.yfilter)) leaf_name_data.push_back(sock.get_name_leafdata());
    if (arch.is_set || is_set(arch.yfilter)) leaf_name_data.push_back(arch.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (cores.is_set || is_set(cores.yfilter)) leaf_name_data.push_back(cores.get_name_leafdata());
    if (coresen.is_set || is_set(coresen.yfilter)) leaf_name_data.push_back(coresen.get_name_leafdata());
    if (thrds.is_set || is_set(thrds.yfilter)) leaf_name_data.push_back(thrds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(core_items != nullptr)
    {
        _children["core-items"] = core_items;
    }

    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sock")
    {
        sock = value;
        sock.value_namespace = name_space;
        sock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch")
    {
        arch = value;
        arch.value_namespace = name_space;
        arch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cores")
    {
        cores = value;
        cores.value_namespace = name_space;
        cores.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coresEn")
    {
        coresen = value;
        coresen.value_namespace = name_space;
        coresen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thrds")
    {
        thrds = value;
        thrds.value_namespace = name_space;
        thrds.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sock")
    {
        sock.yfilter = yfilter;
    }
    if(value_path == "arch")
    {
        arch.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "cores")
    {
        cores.yfilter = yfilter;
    }
    if(value_path == "coresEn")
    {
        coresen.yfilter = yfilter;
    }
    if(value_path == "thrds")
    {
        thrds.yfilter = yfilter;
    }
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "sock" || name == "arch" || name == "speed" || name == "cores" || name == "coresEn" || name == "thrds")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreItems()
    :
    core_list(this, {"id"})
{

    yang_name = "core-items"; yang_parent_name = "CPU-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::~CoreItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto ent_ = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList>();
        ent_->parent = this;
        core_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : core_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::CoreList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Core-list"; yang_parent_name = "core-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::~CoreList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmItems()
    :
    dimm_list(this, {"id"})
{

    yang_name = "dimm-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::~DimmItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::has_operation() const
{
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto ent_ = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList>();
        ent_->parent = this;
        dimm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dimm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dimm-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::DimmList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Dimm-list"; yang_parent_name = "dimm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::~DimmList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dimm-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::FlashItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "flash-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::~FlashItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::ObflItems()
    :
    logt{YType::str, "logT"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "obfl-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::~ObflItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::has_data() const
{
    if (is_presence_container) return true;
    return logt.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logt.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obfl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logt.is_set || is_set(logt.yfilter)) leaf_name_data.push_back(logt.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logT")
    {
        logt = value;
        logt.value_namespace = name_space;
        logt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logT")
    {
        logt.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logT" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "NSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::NslotItems::NSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ChItems::NslotItems::NSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::NslotItems::NSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::NslotItems::NSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::NslotItems::NSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::NslotItems::NSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ChItems::NslotItems::NSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ChItems::PItems::PItems()
    :
    storage_list(this, {"mount", "filesystem"})
{

    yang_name = "p-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::PItems::~PItems()
{
}

bool System::ChItems::PItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<storage_list.len(); index++)
    {
        if(storage_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::PItems::has_operation() const
{
    for (std::size_t index=0; index<storage_list.len(); index++)
    {
        if(storage_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::PItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::PItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::PItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::PItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Storage-list")
    {
        auto ent_ = std::make_shared<System::ChItems::PItems::StorageList>();
        ent_->parent = this;
        storage_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::PItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : storage_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::PItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::PItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::PItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Storage-list")
        return true;
    return false;
}

System::ChItems::PItems::StorageList::StorageList()
    :
    mount{YType::str, "mount"},
    filesystem{YType::str, "fileSystem"},
    blocks{YType::uint32, "blocks"},
    used{YType::uint32, "used"},
    available{YType::uint32, "available"},
    caputilized{YType::uint8, "capUtilized"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"}
{

    yang_name = "Storage-list"; yang_parent_name = "p-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::PItems::StorageList::~StorageList()
{
}

bool System::ChItems::PItems::StorageList::has_data() const
{
    if (is_presence_container) return true;
    return mount.is_set
	|| filesystem.is_set
	|| blocks.is_set
	|| used.is_set
	|| available.is_set
	|| caputilized.is_set
	|| operst.is_set
	|| name.is_set;
}

bool System::ChItems::PItems::StorageList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mount.yfilter)
	|| ydk::is_set(filesystem.yfilter)
	|| ydk::is_set(blocks.yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(available.yfilter)
	|| ydk::is_set(caputilized.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ChItems::PItems::StorageList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/p-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::PItems::StorageList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Storage-list";
    ADD_KEY_TOKEN(mount, "mount");
    ADD_KEY_TOKEN(filesystem, "fileSystem");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::PItems::StorageList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mount.is_set || is_set(mount.yfilter)) leaf_name_data.push_back(mount.get_name_leafdata());
    if (filesystem.is_set || is_set(filesystem.yfilter)) leaf_name_data.push_back(filesystem.get_name_leafdata());
    if (blocks.is_set || is_set(blocks.yfilter)) leaf_name_data.push_back(blocks.get_name_leafdata());
    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (available.is_set || is_set(available.yfilter)) leaf_name_data.push_back(available.get_name_leafdata());
    if (caputilized.is_set || is_set(caputilized.yfilter)) leaf_name_data.push_back(caputilized.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::PItems::StorageList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::PItems::StorageList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::PItems::StorageList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mount")
    {
        mount = value;
        mount.value_namespace = name_space;
        mount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fileSystem")
    {
        filesystem = value;
        filesystem.value_namespace = name_space;
        filesystem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocks")
    {
        blocks = value;
        blocks.value_namespace = name_space;
        blocks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available")
    {
        available = value;
        available.value_namespace = name_space;
        available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capUtilized")
    {
        caputilized = value;
        caputilized.value_namespace = name_space;
        caputilized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::PItems::StorageList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mount")
    {
        mount.yfilter = yfilter;
    }
    if(value_path == "fileSystem")
    {
        filesystem.yfilter = yfilter;
    }
    if(value_path == "blocks")
    {
        blocks.yfilter = yfilter;
    }
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "available")
    {
        available.yfilter = yfilter;
    }
    if(value_path == "capUtilized")
    {
        caputilized.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ChItems::PItems::StorageList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mount" || name == "fileSystem" || name == "blocks" || name == "used" || name == "available" || name == "capUtilized" || name == "operSt" || name == "name")
        return true;
    return false;
}

System::ExtchItems::ExtchItems()
    :
    extch_list(this, {"id"})
{

    yang_name = "extch-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ExtchItems::~ExtchItems()
{
}

bool System::ExtchItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extch_list.len(); index++)
    {
        if(extch_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::has_operation() const
{
    for (std::size_t index=0; index<extch_list.len(); index++)
    {
        if(extch_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ExtchItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extch-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCh-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList>();
        ent_->parent = this;
        extch_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extch_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCh-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtChList()
    :
    id{YType::uint32, "id"},
    extchst{YType::enumeration, "extChSt"},
    partnum{YType::str, "partNum"},
    macaddr{YType::str, "macAddr"},
    nummacs{YType::uint16, "numMacs"},
    numuplinkp{YType::uint16, "numUplinkP"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
        ,
    running_items(std::make_shared<System::ExtchItems::ExtChList::RunningItems>())
    , locled_items(std::make_shared<System::ExtchItems::ExtChList::LocledItems>())
    , extchslot_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems>())
    , psuslot_items(std::make_shared<System::ExtchItems::ExtChList::PsuslotItems>())
    , ftslot_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems>())
    , spbp_items(std::make_shared<System::ExtchItems::ExtChList::SpbpItems>())
    , spsup_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems>())
{
    running_items->parent = this;
    locled_items->parent = this;
    extchslot_items->parent = this;
    psuslot_items->parent = this;
    ftslot_items->parent = this;
    spbp_items->parent = this;
    spsup_items->parent = this;

    yang_name = "ExtCh-list"; yang_parent_name = "extch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ExtchItems::ExtChList::~ExtChList()
{
}

bool System::ExtchItems::ExtChList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| extchst.is_set
	|| partnum.is_set
	|| macaddr.is_set
	|| nummacs.is_set
	|| numuplinkp.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| (running_items !=  nullptr && running_items->has_data())
	|| (locled_items !=  nullptr && locled_items->has_data())
	|| (extchslot_items !=  nullptr && extchslot_items->has_data())
	|| (psuslot_items !=  nullptr && psuslot_items->has_data())
	|| (ftslot_items !=  nullptr && ftslot_items->has_data())
	|| (spbp_items !=  nullptr && spbp_items->has_data())
	|| (spsup_items !=  nullptr && spsup_items->has_data());
}

bool System::ExtchItems::ExtChList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(extchst.yfilter)
	|| ydk::is_set(partnum.yfilter)
	|| ydk::is_set(macaddr.yfilter)
	|| ydk::is_set(nummacs.yfilter)
	|| ydk::is_set(numuplinkp.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (running_items !=  nullptr && running_items->has_operation())
	|| (locled_items !=  nullptr && locled_items->has_operation())
	|| (extchslot_items !=  nullptr && extchslot_items->has_operation())
	|| (psuslot_items !=  nullptr && psuslot_items->has_operation())
	|| (ftslot_items !=  nullptr && ftslot_items->has_operation())
	|| (spbp_items !=  nullptr && spbp_items->has_operation())
	|| (spsup_items !=  nullptr && spsup_items->has_operation());
}

std::string System::ExtchItems::ExtChList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/extch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ExtchItems::ExtChList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCh-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (extchst.is_set || is_set(extchst.yfilter)) leaf_name_data.push_back(extchst.get_name_leafdata());
    if (partnum.is_set || is_set(partnum.yfilter)) leaf_name_data.push_back(partnum.get_name_leafdata());
    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());
    if (nummacs.is_set || is_set(nummacs.yfilter)) leaf_name_data.push_back(nummacs.get_name_leafdata());
    if (numuplinkp.is_set || is_set(numuplinkp.yfilter)) leaf_name_data.push_back(numuplinkp.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "running-items")
    {
        if(running_items == nullptr)
        {
            running_items = std::make_shared<System::ExtchItems::ExtChList::RunningItems>();
        }
        return running_items;
    }

    if(child_yang_name == "locled-items")
    {
        if(locled_items == nullptr)
        {
            locled_items = std::make_shared<System::ExtchItems::ExtChList::LocledItems>();
        }
        return locled_items;
    }

    if(child_yang_name == "extchslot-items")
    {
        if(extchslot_items == nullptr)
        {
            extchslot_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems>();
        }
        return extchslot_items;
    }

    if(child_yang_name == "psuslot-items")
    {
        if(psuslot_items == nullptr)
        {
            psuslot_items = std::make_shared<System::ExtchItems::ExtChList::PsuslotItems>();
        }
        return psuslot_items;
    }

    if(child_yang_name == "ftslot-items")
    {
        if(ftslot_items == nullptr)
        {
            ftslot_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems>();
        }
        return ftslot_items;
    }

    if(child_yang_name == "spbp-items")
    {
        if(spbp_items == nullptr)
        {
            spbp_items = std::make_shared<System::ExtchItems::ExtChList::SpbpItems>();
        }
        return spbp_items;
    }

    if(child_yang_name == "spsup-items")
    {
        if(spsup_items == nullptr)
        {
            spsup_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems>();
        }
        return spsup_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(running_items != nullptr)
    {
        _children["running-items"] = running_items;
    }

    if(locled_items != nullptr)
    {
        _children["locled-items"] = locled_items;
    }

    if(extchslot_items != nullptr)
    {
        _children["extchslot-items"] = extchslot_items;
    }

    if(psuslot_items != nullptr)
    {
        _children["psuslot-items"] = psuslot_items;
    }

    if(ftslot_items != nullptr)
    {
        _children["ftslot-items"] = ftslot_items;
    }

    if(spbp_items != nullptr)
    {
        _children["spbp-items"] = spbp_items;
    }

    if(spsup_items != nullptr)
    {
        _children["spsup-items"] = spsup_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extChSt")
    {
        extchst = value;
        extchst.value_namespace = name_space;
        extchst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNum")
    {
        partnum = value;
        partnum.value_namespace = name_space;
        partnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macAddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numMacs")
    {
        nummacs = value;
        nummacs.value_namespace = name_space;
        nummacs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numUplinkP")
    {
        numuplinkp = value;
        numuplinkp.value_namespace = name_space;
        numuplinkp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "extChSt")
    {
        extchst.yfilter = yfilter;
    }
    if(value_path == "partNum")
    {
        partnum.yfilter = yfilter;
    }
    if(value_path == "macAddr")
    {
        macaddr.yfilter = yfilter;
    }
    if(value_path == "numMacs")
    {
        nummacs.yfilter = yfilter;
    }
    if(value_path == "numUplinkP")
    {
        numuplinkp.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-items" || name == "locled-items" || name == "extchslot-items" || name == "psuslot-items" || name == "ftslot-items" || name == "spbp-items" || name == "spsup-items" || name == "id" || name == "extChSt" || name == "partNum" || name == "macAddr" || name == "numMacs" || name == "numUplinkP" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::RunningItems::RunningItems()
    :
    loaderver{YType::str, "loaderVer"},
    version{YType::str, "version"},
    internallabel{YType::str, "internalLabel"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    ts{YType::str, "ts"},
    descr{YType::str, "descr"}
{

    yang_name = "running-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::RunningItems::~RunningItems()
{
}

bool System::ExtchItems::ExtChList::RunningItems::has_data() const
{
    if (is_presence_container) return true;
    return loaderver.is_set
	|| version.is_set
	|| internallabel.is_set
	|| type.is_set
	|| mode.is_set
	|| ts.is_set
	|| descr.is_set;
}

bool System::ExtchItems::ExtChList::RunningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loaderver.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(internallabel.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ExtchItems::ExtChList::RunningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::RunningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loaderver.is_set || is_set(loaderver.yfilter)) leaf_name_data.push_back(loaderver.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (internallabel.is_set || is_set(internallabel.yfilter)) leaf_name_data.push_back(internallabel.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::RunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::RunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::RunningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loaderVer")
    {
        loaderver = value;
        loaderver.value_namespace = name_space;
        loaderver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalLabel")
    {
        internallabel = value;
        internallabel.value_namespace = name_space;
        internallabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::RunningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loaderVer")
    {
        loaderver.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "internalLabel")
    {
        internallabel.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::RunningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loaderVer" || name == "version" || name == "internalLabel" || name == "type" || name == "mode" || name == "ts" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::LocledItems::LocledItems()
    :
    extchlocled_list(this, {"id"})
{

    yang_name = "locled-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::LocledItems::~LocledItems()
{
}

bool System::ExtchItems::ExtChList::LocledItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extchlocled_list.len(); index++)
    {
        if(extchlocled_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::LocledItems::has_operation() const
{
    for (std::size_t index=0; index<extchlocled_list.len(); index++)
    {
        if(extchlocled_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::LocledItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locled-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::LocledItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::LocledItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtChLocLed-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList>();
        ent_->parent = this;
        extchlocled_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::LocledItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extchlocled_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::LocledItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::LocledItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::LocledItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtChLocLed-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::ExtChLocLedList()
    :
    id{YType::uint32, "id"},
    model{YType::str, "model"},
    descr{YType::str, "descr"},
    color{YType::enumeration, "color"},
    operst{YType::enumeration, "operSt"},
    adminst{YType::enumeration, "adminSt"}
{

    yang_name = "ExtChLocLed-list"; yang_parent_name = "locled-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::~ExtChLocLedList()
{
}

bool System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| model.is_set
	|| descr.is_set
	|| color.is_set
	|| operst.is_set
	|| adminst.is_set;
}

bool System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(adminst.yfilter);
}

std::string System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtChLocLed-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "model" || name == "descr" || name == "color" || name == "operSt" || name == "adminSt")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtchslotItems()
    :
    extchcardslot_list(this, {"id"})
{

    yang_name = "extchslot-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::~ExtchslotItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extchcardslot_list.len(); index++)
    {
        if(extchcardslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::has_operation() const
{
    for (std::size_t index=0; index<extchcardslot_list.len(); index++)
    {
        if(extchcardslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extchslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtChCardSlot-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList>();
        ent_->parent = this;
        extchcardslot_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extchcardslot_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtChCardSlot-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtChCardSlotList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    extchc_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems>())
    , rtoosslot_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems>())
{
    extchc_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "ExtChCardSlot-list"; yang_parent_name = "extchslot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::~ExtChCardSlotList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (extchc_items !=  nullptr && extchc_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (extchc_items !=  nullptr && extchc_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtChCardSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extchc-items")
    {
        if(extchc_items == nullptr)
        {
            extchc_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems>();
        }
        return extchc_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(extchc_items != nullptr)
    {
        _children["extchc-items"] = extchc_items;
    }

    if(rtoosslot_items != nullptr)
    {
        _children["rtoosSlot-items"] = rtoosslot_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extchc-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ExtchcItems()
    :
    modserial{YType::str, "modSerial"},
    modvendor{YType::str, "modVendor"},
    modmodel{YType::str, "modModel"},
    partnum{YType::str, "partNum"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    id{YType::uint32, "id"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    rdst{YType::enumeration, "rdSt"},
    swcid{YType::uint32, "swCId"},
    nump{YType::uint16, "numP"},
    macb{YType::str, "macB"},
    mace{YType::str, "macE"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    fwver{YType::str, "fwVer"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"},
    vdrid{YType::str, "vdrId"},
    poweractualdraw{YType::uint32, "powerActualDraw"},
    powerallocated{YType::uint32, "powerAllocated"}
        ,
    hostextport_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems>())
    , leafextport_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems>())
    , sensor_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems>())
    , asic_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems>())
    , cpu_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems>())
    , dimm_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems>())
    , flash_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems>())
    , obfl_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems>())
{
    hostextport_items->parent = this;
    leafextport_items->parent = this;
    sensor_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    dimm_items->parent = this;
    flash_items->parent = this;
    obfl_items->parent = this;

    yang_name = "extchc-items"; yang_parent_name = "ExtChCardSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::~ExtchcItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::has_data() const
{
    if (is_presence_container) return true;
    return modserial.is_set
	|| modvendor.is_set
	|| modmodel.is_set
	|| partnum.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| id.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| operst.is_set
	|| rdst.is_set
	|| swcid.is_set
	|| nump.is_set
	|| macb.is_set
	|| mace.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| fwver.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| vdrid.is_set
	|| poweractualdraw.is_set
	|| powerallocated.is_set
	|| (hostextport_items !=  nullptr && hostextport_items->has_data())
	|| (leafextport_items !=  nullptr && leafextport_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (dimm_items !=  nullptr && dimm_items->has_data())
	|| (flash_items !=  nullptr && flash_items->has_data())
	|| (obfl_items !=  nullptr && obfl_items->has_data());
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(modserial.yfilter)
	|| ydk::is_set(modvendor.yfilter)
	|| ydk::is_set(modmodel.yfilter)
	|| ydk::is_set(partnum.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(rdst.yfilter)
	|| ydk::is_set(swcid.yfilter)
	|| ydk::is_set(nump.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(mace.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(fwver.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(poweractualdraw.yfilter)
	|| ydk::is_set(powerallocated.yfilter)
	|| (hostextport_items !=  nullptr && hostextport_items->has_operation())
	|| (leafextport_items !=  nullptr && leafextport_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (dimm_items !=  nullptr && dimm_items->has_operation())
	|| (flash_items !=  nullptr && flash_items->has_operation())
	|| (obfl_items !=  nullptr && obfl_items->has_operation());
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extchc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (modserial.is_set || is_set(modserial.yfilter)) leaf_name_data.push_back(modserial.get_name_leafdata());
    if (modvendor.is_set || is_set(modvendor.yfilter)) leaf_name_data.push_back(modvendor.get_name_leafdata());
    if (modmodel.is_set || is_set(modmodel.yfilter)) leaf_name_data.push_back(modmodel.get_name_leafdata());
    if (partnum.is_set || is_set(partnum.yfilter)) leaf_name_data.push_back(partnum.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (rdst.is_set || is_set(rdst.yfilter)) leaf_name_data.push_back(rdst.get_name_leafdata());
    if (swcid.is_set || is_set(swcid.yfilter)) leaf_name_data.push_back(swcid.get_name_leafdata());
    if (nump.is_set || is_set(nump.yfilter)) leaf_name_data.push_back(nump.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (mace.is_set || is_set(mace.yfilter)) leaf_name_data.push_back(mace.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (fwver.is_set || is_set(fwver.yfilter)) leaf_name_data.push_back(fwver.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (poweractualdraw.is_set || is_set(poweractualdraw.yfilter)) leaf_name_data.push_back(poweractualdraw.get_name_leafdata());
    if (powerallocated.is_set || is_set(powerallocated.yfilter)) leaf_name_data.push_back(powerallocated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostextport-items")
    {
        if(hostextport_items == nullptr)
        {
            hostextport_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems>();
        }
        return hostextport_items;
    }

    if(child_yang_name == "leafextport-items")
    {
        if(leafextport_items == nullptr)
        {
            leafextport_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems>();
        }
        return leafextport_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "asic-items")
    {
        if(asic_items == nullptr)
        {
            asic_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems>();
        }
        return asic_items;
    }

    if(child_yang_name == "cpu-items")
    {
        if(cpu_items == nullptr)
        {
            cpu_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems>();
        }
        return cpu_items;
    }

    if(child_yang_name == "dimm-items")
    {
        if(dimm_items == nullptr)
        {
            dimm_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems>();
        }
        return dimm_items;
    }

    if(child_yang_name == "flash-items")
    {
        if(flash_items == nullptr)
        {
            flash_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems>();
        }
        return flash_items;
    }

    if(child_yang_name == "obfl-items")
    {
        if(obfl_items == nullptr)
        {
            obfl_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems>();
        }
        return obfl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hostextport_items != nullptr)
    {
        _children["hostextport-items"] = hostextport_items;
    }

    if(leafextport_items != nullptr)
    {
        _children["leafextport-items"] = leafextport_items;
    }

    if(sensor_items != nullptr)
    {
        _children["sensor-items"] = sensor_items;
    }

    if(asic_items != nullptr)
    {
        _children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        _children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        _children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        _children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        _children["obfl-items"] = obfl_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "modSerial")
    {
        modserial = value;
        modserial.value_namespace = name_space;
        modserial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modVendor")
    {
        modvendor = value;
        modvendor.value_namespace = name_space;
        modvendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modModel")
    {
        modmodel = value;
        modmodel.value_namespace = name_space;
        modmodel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNum")
    {
        partnum = value;
        partnum.value_namespace = name_space;
        partnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rdSt")
    {
        rdst = value;
        rdst.value_namespace = name_space;
        rdst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swCId")
    {
        swcid = value;
        swcid.value_namespace = name_space;
        swcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numP")
    {
        nump = value;
        nump.value_namespace = name_space;
        nump.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macE")
    {
        mace = value;
        mace.value_namespace = name_space;
        mace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrSt")
    {
        pwrst = value;
        pwrst.value_namespace = name_space;
        pwrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwVer")
    {
        fwver = value;
        fwver.value_namespace = name_space;
        fwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swVer")
    {
        swver = value;
        swver.value_namespace = name_space;
        swver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw = value;
        poweractualdraw.value_namespace = name_space;
        poweractualdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated = value;
        powerallocated.value_namespace = name_space;
        powerallocated.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "modSerial")
    {
        modserial.yfilter = yfilter;
    }
    if(value_path == "modVendor")
    {
        modvendor.yfilter = yfilter;
    }
    if(value_path == "modModel")
    {
        modmodel.yfilter = yfilter;
    }
    if(value_path == "partNum")
    {
        partnum.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "rdSt")
    {
        rdst.yfilter = yfilter;
    }
    if(value_path == "swCId")
    {
        swcid.yfilter = yfilter;
    }
    if(value_path == "numP")
    {
        nump.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macE")
    {
        mace.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "pwrSt")
    {
        pwrst.yfilter = yfilter;
    }
    if(value_path == "fwVer")
    {
        fwver.yfilter = yfilter;
    }
    if(value_path == "swVer")
    {
        swver.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw.yfilter = yfilter;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostextport-items" || name == "leafextport-items" || name == "sensor-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "modSerial" || name == "modVendor" || name == "modModel" || name == "partNum" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "id" || name == "mfgTm" || name == "descr" || name == "type" || name == "operSt" || name == "rdSt" || name == "swCId" || name == "numP" || name == "macB" || name == "macE" || name == "upTs" || name == "pwrSt" || name == "fwVer" || name == "swVer" || name == "partNumber" || name == "vdrId" || name == "powerActualDraw" || name == "powerAllocated")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::HostextportItems()
    :
    extchhp_list(this, {"id"})
{

    yang_name = "hostextport-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::~HostextportItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extchhp_list.len(); index++)
    {
        if(extchhp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::has_operation() const
{
    for (std::size_t index=0; index<extchhp_list.len(); index++)
    {
        if(extchhp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostextport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtChHP-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList>();
        ent_->parent = this;
        extchhp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extchhp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtChHP-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::ExtChHPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    speed{YType::uint64, "speed"}
{

    yang_name = "ExtChHP-list"; yang_parent_name = "hostextport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::~ExtChHPList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set
	|| speed.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtChHP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type" || name == "speed")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::LeafextportItems()
    :
    extchfp_list(this, {"id"})
{

    yang_name = "leafextport-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::~LeafextportItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extchfp_list.len(); index++)
    {
        if(extchfp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::has_operation() const
{
    for (std::size_t index=0; index<extchfp_list.len(); index++)
    {
        if(extchfp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leafextport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtChFP-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList>();
        ent_->parent = this;
        extchfp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extchfp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtChFP-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::ExtChFPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    speed{YType::uint64, "speed"}
{

    yang_name = "ExtChFP-list"; yang_parent_name = "leafextport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::~ExtChFPList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set
	|| speed.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtChFP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type" || name == "speed")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorItems()
    :
    sensor_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::~SensorItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList>();
        ent_->parent = this;
        sensor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sensor-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::SensorList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    majorthresh{YType::int16, "majorThresh"},
    minorthresh{YType::int16, "minorThresh"},
    operst{YType::enumeration, "operSt"},
    tempvalue{YType::uint16, "tempValue"},
    unit{YType::str, "unit"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    descr{YType::str, "descr"}
{

    yang_name = "Sensor-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::~SensorList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| majorthresh.is_set
	|| minorthresh.is_set
	|| operst.is_set
	|| tempvalue.is_set
	|| unit.is_set
	|| vendor.is_set
	|| model.is_set
	|| descr.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(majorthresh.yfilter)
	|| ydk::is_set(minorthresh.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(tempvalue.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sensor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (majorthresh.is_set || is_set(majorthresh.yfilter)) leaf_name_data.push_back(majorthresh.get_name_leafdata());
    if (minorthresh.is_set || is_set(minorthresh.yfilter)) leaf_name_data.push_back(minorthresh.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (tempvalue.is_set || is_set(tempvalue.yfilter)) leaf_name_data.push_back(tempvalue.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majorThresh")
    {
        majorthresh = value;
        majorthresh.value_namespace = name_space;
        majorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minorThresh")
    {
        minorthresh = value;
        minorthresh.value_namespace = name_space;
        minorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tempValue")
    {
        tempvalue = value;
        tempvalue.value_namespace = name_space;
        tempvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "majorThresh")
    {
        majorthresh.yfilter = yfilter;
    }
    if(value_path == "minorThresh")
    {
        minorthresh.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "tempValue")
    {
        tempvalue.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "majorThresh" || name == "minorThresh" || name == "operSt" || name == "tempValue" || name == "unit" || name == "vendor" || name == "model" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicItems()
    :
    asic_list(this, {"id"})
{

    yang_name = "asic-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::~AsicItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Asic-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::AsicList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    numslices{YType::uint8, "numSlices"},
    capabilities{YType::str, "capabilities"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Asic-list"; yang_parent_name = "asic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::~AsicList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| operst.is_set
	|| numslices.is_set
	|| capabilities.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numslices.yfilter)
	|| ydk::is_set(capabilities.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Asic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numslices.is_set || is_set(numslices.yfilter)) leaf_name_data.push_back(numslices.get_name_leafdata());
    if (capabilities.is_set || is_set(capabilities.yfilter)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numSlices")
    {
        numslices = value;
        numslices.value_namespace = name_space;
        numslices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities")
    {
        capabilities = value;
        capabilities.value_namespace = name_space;
        capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numSlices")
    {
        numslices.yfilter = yfilter;
    }
    if(value_path == "capabilities")
    {
        capabilities.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "operSt" || name == "numSlices" || name == "capabilities" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CpuItems()
    :
    cpu_list(this, {"id"})
{

    yang_name = "cpu-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::~CpuItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::has_operation() const
{
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList>();
        ent_->parent = this;
        cpu_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPU-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CPUList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    sock{YType::enumeration, "sock"},
    arch{YType::enumeration, "arch"},
    speed{YType::str, "speed"},
    cores{YType::uint16, "cores"},
    coresen{YType::uint16, "coresEn"},
    thrds{YType::uint16, "thrds"}
        ,
    core_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems>())
{
    core_items->parent = this;

    yang_name = "CPU-list"; yang_parent_name = "cpu-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::~CPUList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| sock.is_set
	|| arch.is_set
	|| speed.is_set
	|| cores.is_set
	|| coresen.is_set
	|| thrds.is_set
	|| (core_items !=  nullptr && core_items->has_data());
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sock.yfilter)
	|| ydk::is_set(arch.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(cores.yfilter)
	|| ydk::is_set(coresen.yfilter)
	|| ydk::is_set(thrds.yfilter)
	|| (core_items !=  nullptr && core_items->has_operation());
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPU-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sock.is_set || is_set(sock.yfilter)) leaf_name_data.push_back(sock.get_name_leafdata());
    if (arch.is_set || is_set(arch.yfilter)) leaf_name_data.push_back(arch.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (cores.is_set || is_set(cores.yfilter)) leaf_name_data.push_back(cores.get_name_leafdata());
    if (coresen.is_set || is_set(coresen.yfilter)) leaf_name_data.push_back(coresen.get_name_leafdata());
    if (thrds.is_set || is_set(thrds.yfilter)) leaf_name_data.push_back(thrds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(core_items != nullptr)
    {
        _children["core-items"] = core_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sock")
    {
        sock = value;
        sock.value_namespace = name_space;
        sock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch")
    {
        arch = value;
        arch.value_namespace = name_space;
        arch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cores")
    {
        cores = value;
        cores.value_namespace = name_space;
        cores.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coresEn")
    {
        coresen = value;
        coresen.value_namespace = name_space;
        coresen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thrds")
    {
        thrds = value;
        thrds.value_namespace = name_space;
        thrds.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sock")
    {
        sock.yfilter = yfilter;
    }
    if(value_path == "arch")
    {
        arch.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "cores")
    {
        cores.yfilter = yfilter;
    }
    if(value_path == "coresEn")
    {
        coresen.yfilter = yfilter;
    }
    if(value_path == "thrds")
    {
        thrds.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "sock" || name == "arch" || name == "speed" || name == "cores" || name == "coresEn" || name == "thrds")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreItems()
    :
    core_list(this, {"id"})
{

    yang_name = "core-items"; yang_parent_name = "CPU-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::~CoreItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList>();
        ent_->parent = this;
        core_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : core_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::CoreList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Core-list"; yang_parent_name = "core-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::~CoreList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmItems()
    :
    dimm_list(this, {"id"})
{

    yang_name = "dimm-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::~DimmItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::has_operation() const
{
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList>();
        ent_->parent = this;
        dimm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dimm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dimm-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::DimmList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Dimm-list"; yang_parent_name = "dimm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::~DimmList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dimm-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::FlashItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "flash-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::~FlashItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::ObflItems()
    :
    logt{YType::str, "logT"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "obfl-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::~ObflItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::has_data() const
{
    if (is_presence_container) return true;
    return logt.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logt.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obfl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logt.is_set || is_set(logt.yfilter)) leaf_name_data.push_back(logt.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logT")
    {
        logt = value;
        logt.value_namespace = name_space;
        logt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logT")
    {
        logt.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logT" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "ExtChCardSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ExtchItems::ExtChList::PsuslotItems::PsuslotItems()
    :
    psuslot_list(this, {"id"})
{

    yang_name = "psuslot-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::PsuslotItems::~PsuslotItems()
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<psuslot_list.len(); index++)
    {
        if(psuslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::PsuslotItems::has_operation() const
{
    for (std::size_t index=0; index<psuslot_list.len(); index++)
    {
        if(psuslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::PsuslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psuslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::PsuslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::PsuslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PsuSlot-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList>();
        ent_->parent = this;
        psuslot_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::PsuslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : psuslot_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::PsuslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::PsuslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PsuSlot-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuSlotList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    psu_items(std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems>())
    , rtoosslot_items(std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems>())
{
    psu_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "PsuSlot-list"; yang_parent_name = "psuslot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::~PsuSlotList()
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (psu_items !=  nullptr && psu_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (psu_items !=  nullptr && psu_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PsuSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "psu-items")
    {
        if(psu_items == nullptr)
        {
            psu_items = std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems>();
        }
        return psu_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(psu_items != nullptr)
    {
        _children["psu-items"] = psu_items;
    }

    if(rtoosslot_items != nullptr)
    {
        _children["rtoosSlot-items"] = rtoosslot_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "psu-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsuItems()
    :
    operst{YType::enumeration, "operSt"},
    cap{YType::str, "cap"},
    drawncurr{YType::str, "drawnCurr"},
    vsrc{YType::enumeration, "vSrc"},
    volt{YType::str, "volt"},
    fanopst{YType::enumeration, "fanOpSt"},
    fandirection{YType::enumeration, "fanDirection"},
    inputcurr{YType::str, "inputCurr"},
    vdrid{YType::str, "vdrId"},
    vin{YType::str, "vIn"},
    vout{YType::str, "vOut"},
    pin{YType::uint32, "pIn"},
    pout{YType::uint32, "pOut"},
    iin{YType::str, "iIn"},
    iout{YType::str, "iOut"},
    softwarealarm{YType::boolean, "softwareAlarm"},
    hardwarealarm{YType::str, "hardwareAlarm"},
    typecordconnected{YType::str, "typeCordConnected"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"}
        ,
    psfan_items(std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems>())
{
    psfan_items->parent = this;

    yang_name = "psu-items"; yang_parent_name = "PsuSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::~PsuItems()
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::has_data() const
{
    if (is_presence_container) return true;
    return operst.is_set
	|| cap.is_set
	|| drawncurr.is_set
	|| vsrc.is_set
	|| volt.is_set
	|| fanopst.is_set
	|| fandirection.is_set
	|| inputcurr.is_set
	|| vdrid.is_set
	|| vin.is_set
	|| vout.is_set
	|| pin.is_set
	|| pout.is_set
	|| iin.is_set
	|| iout.is_set
	|| softwarealarm.is_set
	|| hardwarealarm.is_set
	|| typecordconnected.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set
	|| (psfan_items !=  nullptr && psfan_items->has_data());
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(drawncurr.yfilter)
	|| ydk::is_set(vsrc.yfilter)
	|| ydk::is_set(volt.yfilter)
	|| ydk::is_set(fanopst.yfilter)
	|| ydk::is_set(fandirection.yfilter)
	|| ydk::is_set(inputcurr.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(vin.yfilter)
	|| ydk::is_set(vout.yfilter)
	|| ydk::is_set(pin.yfilter)
	|| ydk::is_set(pout.yfilter)
	|| ydk::is_set(iin.yfilter)
	|| ydk::is_set(iout.yfilter)
	|| ydk::is_set(softwarealarm.yfilter)
	|| ydk::is_set(hardwarealarm.yfilter)
	|| ydk::is_set(typecordconnected.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| (psfan_items !=  nullptr && psfan_items->has_operation());
}

std::string System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (drawncurr.is_set || is_set(drawncurr.yfilter)) leaf_name_data.push_back(drawncurr.get_name_leafdata());
    if (vsrc.is_set || is_set(vsrc.yfilter)) leaf_name_data.push_back(vsrc.get_name_leafdata());
    if (volt.is_set || is_set(volt.yfilter)) leaf_name_data.push_back(volt.get_name_leafdata());
    if (fanopst.is_set || is_set(fanopst.yfilter)) leaf_name_data.push_back(fanopst.get_name_leafdata());
    if (fandirection.is_set || is_set(fandirection.yfilter)) leaf_name_data.push_back(fandirection.get_name_leafdata());
    if (inputcurr.is_set || is_set(inputcurr.yfilter)) leaf_name_data.push_back(inputcurr.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (vin.is_set || is_set(vin.yfilter)) leaf_name_data.push_back(vin.get_name_leafdata());
    if (vout.is_set || is_set(vout.yfilter)) leaf_name_data.push_back(vout.get_name_leafdata());
    if (pin.is_set || is_set(pin.yfilter)) leaf_name_data.push_back(pin.get_name_leafdata());
    if (pout.is_set || is_set(pout.yfilter)) leaf_name_data.push_back(pout.get_name_leafdata());
    if (iin.is_set || is_set(iin.yfilter)) leaf_name_data.push_back(iin.get_name_leafdata());
    if (iout.is_set || is_set(iout.yfilter)) leaf_name_data.push_back(iout.get_name_leafdata());
    if (softwarealarm.is_set || is_set(softwarealarm.yfilter)) leaf_name_data.push_back(softwarealarm.get_name_leafdata());
    if (hardwarealarm.is_set || is_set(hardwarealarm.yfilter)) leaf_name_data.push_back(hardwarealarm.get_name_leafdata());
    if (typecordconnected.is_set || is_set(typecordconnected.yfilter)) leaf_name_data.push_back(typecordconnected.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "psfan-items")
    {
        if(psfan_items == nullptr)
        {
            psfan_items = std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems>();
        }
        return psfan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(psfan_items != nullptr)
    {
        _children["psfan-items"] = psfan_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drawnCurr")
    {
        drawncurr = value;
        drawncurr.value_namespace = name_space;
        drawncurr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vSrc")
    {
        vsrc = value;
        vsrc.value_namespace = name_space;
        vsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volt")
    {
        volt = value;
        volt.value_namespace = name_space;
        volt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fanOpSt")
    {
        fanopst = value;
        fanopst.value_namespace = name_space;
        fanopst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fanDirection")
    {
        fandirection = value;
        fandirection.value_namespace = name_space;
        fandirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputCurr")
    {
        inputcurr = value;
        inputcurr.value_namespace = name_space;
        inputcurr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vIn")
    {
        vin = value;
        vin.value_namespace = name_space;
        vin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vOut")
    {
        vout = value;
        vout.value_namespace = name_space;
        vout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pIn")
    {
        pin = value;
        pin.value_namespace = name_space;
        pin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pOut")
    {
        pout = value;
        pout.value_namespace = name_space;
        pout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iIn")
    {
        iin = value;
        iin.value_namespace = name_space;
        iin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iOut")
    {
        iout = value;
        iout.value_namespace = name_space;
        iout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "softwareAlarm")
    {
        softwarealarm = value;
        softwarealarm.value_namespace = name_space;
        softwarealarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardwareAlarm")
    {
        hardwarealarm = value;
        hardwarealarm.value_namespace = name_space;
        hardwarealarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "typeCordConnected")
    {
        typecordconnected = value;
        typecordconnected.value_namespace = name_space;
        typecordconnected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "drawnCurr")
    {
        drawncurr.yfilter = yfilter;
    }
    if(value_path == "vSrc")
    {
        vsrc.yfilter = yfilter;
    }
    if(value_path == "volt")
    {
        volt.yfilter = yfilter;
    }
    if(value_path == "fanOpSt")
    {
        fanopst.yfilter = yfilter;
    }
    if(value_path == "fanDirection")
    {
        fandirection.yfilter = yfilter;
    }
    if(value_path == "inputCurr")
    {
        inputcurr.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "vIn")
    {
        vin.yfilter = yfilter;
    }
    if(value_path == "vOut")
    {
        vout.yfilter = yfilter;
    }
    if(value_path == "pIn")
    {
        pin.yfilter = yfilter;
    }
    if(value_path == "pOut")
    {
        pout.yfilter = yfilter;
    }
    if(value_path == "iIn")
    {
        iin.yfilter = yfilter;
    }
    if(value_path == "iOut")
    {
        iout.yfilter = yfilter;
    }
    if(value_path == "softwareAlarm")
    {
        softwarealarm.yfilter = yfilter;
    }
    if(value_path == "hardwareAlarm")
    {
        hardwarealarm.yfilter = yfilter;
    }
    if(value_path == "typeCordConnected")
    {
        typecordconnected.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "psfan-items" || name == "operSt" || name == "cap" || name == "drawnCurr" || name == "vSrc" || name == "volt" || name == "fanOpSt" || name == "fanDirection" || name == "inputCurr" || name == "vdrId" || name == "vIn" || name == "vOut" || name == "pIn" || name == "pOut" || name == "iIn" || name == "iOut" || name == "softwareAlarm" || name == "hardwareAlarm" || name == "typeCordConnected" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer")
        return true;
    return false;
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsfanItems()
    :
    psfan_list(this, {"id"})
{

    yang_name = "psfan-items"; yang_parent_name = "psu-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::~PsfanItems()
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<psfan_list.len(); index++)
    {
        if(psfan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::has_operation() const
{
    for (std::size_t index=0; index<psfan_list.len(); index++)
    {
        if(psfan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psfan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PsFan-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList>();
        ent_->parent = this;
        psfan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : psfan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PsFan-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::PsFanList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    dir{YType::enumeration, "dir"},
    speedinrpm{YType::uint32, "speedInRpm"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"}
{

    yang_name = "PsFan-list"; yang_parent_name = "psfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::~PsFanList()
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| dir.is_set
	|| speedinrpm.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set;
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(dir.yfilter)
	|| ydk::is_set(speedinrpm.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter);
}

std::string System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PsFan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());
    if (speedinrpm.is_set || is_set(speedinrpm.yfilter)) leaf_name_data.push_back(speedinrpm.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speedInRpm")
    {
        speedinrpm = value;
        speedinrpm.value_namespace = name_space;
        speedinrpm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
    if(value_path == "speedInRpm")
    {
        speedinrpm.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "dir" || name == "speedInRpm" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer")
        return true;
    return false;
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "PsuSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtslotItems()
    :
    ftslot_list(this, {"id"})
{

    yang_name = "ftslot-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::~FtslotItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ftslot_list.len(); index++)
    {
        if(ftslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::FtslotItems::has_operation() const
{
    for (std::size_t index=0; index<ftslot_list.len(); index++)
    {
        if(ftslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ftslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FtSlot-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList>();
        ent_->parent = this;
        ftslot_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ftslot_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::FtslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::FtslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FtSlot-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtSlotList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    ft_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems>())
    , rtoosslot_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems>())
{
    ft_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "FtSlot-list"; yang_parent_name = "ftslot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::~FtSlotList()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (ft_items !=  nullptr && ft_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (ft_items !=  nullptr && ft_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FtSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ft-items")
    {
        if(ft_items == nullptr)
        {
            ft_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems>();
        }
        return ft_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ft_items != nullptr)
    {
        _children["ft-items"] = ft_items;
    }

    if(rtoosslot_items != nullptr)
    {
        _children["rtoosSlot-items"] = rtoosslot_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ft-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FtItems()
    :
    operst{YType::enumeration, "operSt"},
    fanname{YType::str, "fanName"},
    vdrid{YType::str, "vdrId"},
    poweractualdraw{YType::uint32, "powerActualDraw"},
    powerallocated{YType::uint32, "powerAllocated"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"}
        ,
    ej_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems>())
    , fan_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems>())
    , locled_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems>())
    , spfan_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems>())
{
    ej_items->parent = this;
    fan_items->parent = this;
    locled_items->parent = this;
    spfan_items->parent = this;

    yang_name = "ft-items"; yang_parent_name = "FtSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::~FtItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::has_data() const
{
    if (is_presence_container) return true;
    return operst.is_set
	|| fanname.is_set
	|| vdrid.is_set
	|| poweractualdraw.is_set
	|| powerallocated.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set
	|| (ej_items !=  nullptr && ej_items->has_data())
	|| (fan_items !=  nullptr && fan_items->has_data())
	|| (locled_items !=  nullptr && locled_items->has_data())
	|| (spfan_items !=  nullptr && spfan_items->has_data());
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(fanname.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(poweractualdraw.yfilter)
	|| ydk::is_set(powerallocated.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| (ej_items !=  nullptr && ej_items->has_operation())
	|| (fan_items !=  nullptr && fan_items->has_operation())
	|| (locled_items !=  nullptr && locled_items->has_operation())
	|| (spfan_items !=  nullptr && spfan_items->has_operation());
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ft-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (fanname.is_set || is_set(fanname.yfilter)) leaf_name_data.push_back(fanname.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (poweractualdraw.is_set || is_set(poweractualdraw.yfilter)) leaf_name_data.push_back(poweractualdraw.get_name_leafdata());
    if (powerallocated.is_set || is_set(powerallocated.yfilter)) leaf_name_data.push_back(powerallocated.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ej-items")
    {
        if(ej_items == nullptr)
        {
            ej_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems>();
        }
        return ej_items;
    }

    if(child_yang_name == "fan-items")
    {
        if(fan_items == nullptr)
        {
            fan_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems>();
        }
        return fan_items;
    }

    if(child_yang_name == "locled-items")
    {
        if(locled_items == nullptr)
        {
            locled_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems>();
        }
        return locled_items;
    }

    if(child_yang_name == "spfan-items")
    {
        if(spfan_items == nullptr)
        {
            spfan_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems>();
        }
        return spfan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ej_items != nullptr)
    {
        _children["ej-items"] = ej_items;
    }

    if(fan_items != nullptr)
    {
        _children["fan-items"] = fan_items;
    }

    if(locled_items != nullptr)
    {
        _children["locled-items"] = locled_items;
    }

    if(spfan_items != nullptr)
    {
        _children["spfan-items"] = spfan_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fanName")
    {
        fanname = value;
        fanname.value_namespace = name_space;
        fanname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw = value;
        poweractualdraw.value_namespace = name_space;
        poweractualdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated = value;
        powerallocated.value_namespace = name_space;
        powerallocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "fanName")
    {
        fanname.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw.yfilter = yfilter;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ej-items" || name == "fan-items" || name == "locled-items" || name == "spfan-items" || name == "operSt" || name == "fanName" || name == "vdrId" || name == "powerActualDraw" || name == "powerAllocated" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjItems()
    :
    ejec_list(this, {"id"})
{

    yang_name = "ej-items"; yang_parent_name = "ft-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::~EjItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::has_operation() const
{
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ej-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ejec-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList>();
        ent_->parent = this;
        ejec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ejec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ejec-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::EjecList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Ejec-list"; yang_parent_name = "ej-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::~EjecList()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ejec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanItems()
    :
    fan_list(this, {"id"})
{

    yang_name = "fan-items"; yang_parent_name = "ft-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::~FanItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fan_list.len(); index++)
    {
        if(fan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::has_operation() const
{
    for (std::size_t index=0; index<fan_list.len(); index++)
    {
        if(fan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Fan-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList>();
        ent_->parent = this;
        fan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Fan-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::FanList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    dir{YType::enumeration, "dir"},
    speedinrpm{YType::uint32, "speedInRpm"},
    speedinpercent{YType::uint32, "speedInPercent"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Fan-list"; yang_parent_name = "fan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::~FanList()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| dir.is_set
	|| speedinrpm.is_set
	|| speedinpercent.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(dir.yfilter)
	|| ydk::is_set(speedinrpm.yfilter)
	|| ydk::is_set(speedinpercent.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Fan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());
    if (speedinrpm.is_set || is_set(speedinrpm.yfilter)) leaf_name_data.push_back(speedinrpm.get_name_leafdata());
    if (speedinpercent.is_set || is_set(speedinpercent.yfilter)) leaf_name_data.push_back(speedinpercent.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speedInRpm")
    {
        speedinrpm = value;
        speedinrpm.value_namespace = name_space;
        speedinrpm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speedInPercent")
    {
        speedinpercent = value;
        speedinpercent.value_namespace = name_space;
        speedinpercent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
    if(value_path == "speedInRpm")
    {
        speedinrpm.yfilter = yfilter;
    }
    if(value_path == "speedInPercent")
    {
        speedinpercent.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "dir" || name == "speedInRpm" || name == "speedInPercent" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocledItems()
    :
    locled_list(this, {"id"})
{

    yang_name = "locled-items"; yang_parent_name = "ft-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::~LocledItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::has_operation() const
{
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locled-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LocLed-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList>();
        ent_->parent = this;
        locled_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locled_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LocLed-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::LocLedList()
    :
    id{YType::uint32, "id"},
    model{YType::str, "model"},
    descr{YType::str, "descr"},
    color{YType::enumeration, "color"},
    operst{YType::enumeration, "operSt"},
    adminst{YType::enumeration, "adminSt"}
{

    yang_name = "LocLed-list"; yang_parent_name = "locled-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::~LocLedList()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| model.is_set
	|| descr.is_set
	|| color.is_set
	|| operst.is_set
	|| adminst.is_set;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(adminst.yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LocLed-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "model" || name == "descr" || name == "color" || name == "operSt" || name == "adminSt")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems>())
    , spfanblk_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems>())
    , spfansn_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems>())
{
    spcmn_items->parent = this;
    spfanblk_items->parent = this;
    spfansn_items->parent = this;

    yang_name = "spfan-items"; yang_parent_name = "ft-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::~SpfanItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (spfanblk_items !=  nullptr && spfanblk_items->has_data())
	|| (spfansn_items !=  nullptr && spfansn_items->has_data());
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (spfanblk_items !=  nullptr && spfanblk_items->has_operation())
	|| (spfansn_items !=  nullptr && spfansn_items->has_operation());
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numblk.is_set || is_set(numblk.yfilter)) leaf_name_data.push_back(numblk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "spfanblk-items")
    {
        if(spfanblk_items == nullptr)
        {
            spfanblk_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems>();
        }
        return spfanblk_items;
    }

    if(child_yang_name == "spfansn-items")
    {
        if(spfansn_items == nullptr)
        {
            spfansn_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems>();
        }
        return spfansn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spcmn_items != nullptr)
    {
        _children["spcmn-items"] = spcmn_items;
    }

    if(spfanblk_items != nullptr)
    {
        _children["spfanblk-items"] = spfanblk_items;
    }

    if(spfansn_items != nullptr)
    {
        _children["spfansn-items"] = spfansn_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numBlk")
    {
        numblk = value;
        numblk.value_namespace = name_space;
        numblk.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numBlk")
    {
        numblk.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "spfanblk-items" || name == "spfansn-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::SpcmnItems()
    :
    size{YType::uint16, "size"},
    count{YType::uint16, "count"},
    major_{YType::uint16, "major"},
    minor{YType::uint16, "minor"},
    oem{YType::str, "oem"},
    pdnum{YType::str, "pdNum"},
    sernum{YType::str, "serNum"},
    prtnum{YType::str, "prtNum"},
    prev{YType::str, "pRev"},
    mfgdev{YType::str, "mfgDev"},
    hwver{YType::str, "hwVer"},
    mfgbits{YType::uint16, "mfgBits"},
    engbits{YType::uint16, "engBits"},
    pwrcon{YType::int16, "pwrCon"},
    rmafl{YType::str, "rmaFl"},
    clei{YType::str, "clei"},
    vdrid{YType::str, "vdrId"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spcmn-items"; yang_parent_name = "spfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| count.is_set
	|| major_.is_set
	|| minor.is_set
	|| oem.is_set
	|| pdnum.is_set
	|| sernum.is_set
	|| prtnum.is_set
	|| prev.is_set
	|| mfgdev.is_set
	|| hwver.is_set
	|| mfgbits.is_set
	|| engbits.is_set
	|| pwrcon.is_set
	|| rmafl.is_set
	|| clei.is_set
	|| vdrid.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(oem.yfilter)
	|| ydk::is_set(pdnum.yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(prtnum.yfilter)
	|| ydk::is_set(prev.yfilter)
	|| ydk::is_set(mfgdev.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(mfgbits.yfilter)
	|| ydk::is_set(engbits.yfilter)
	|| ydk::is_set(pwrcon.yfilter)
	|| ydk::is_set(rmafl.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (oem.is_set || is_set(oem.yfilter)) leaf_name_data.push_back(oem.get_name_leafdata());
    if (pdnum.is_set || is_set(pdnum.yfilter)) leaf_name_data.push_back(pdnum.get_name_leafdata());
    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (prtnum.is_set || is_set(prtnum.yfilter)) leaf_name_data.push_back(prtnum.get_name_leafdata());
    if (prev.is_set || is_set(prev.yfilter)) leaf_name_data.push_back(prev.get_name_leafdata());
    if (mfgdev.is_set || is_set(mfgdev.yfilter)) leaf_name_data.push_back(mfgdev.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (mfgbits.is_set || is_set(mfgbits.yfilter)) leaf_name_data.push_back(mfgbits.get_name_leafdata());
    if (engbits.is_set || is_set(engbits.yfilter)) leaf_name_data.push_back(engbits.get_name_leafdata());
    if (pwrcon.is_set || is_set(pwrcon.yfilter)) leaf_name_data.push_back(pwrcon.get_name_leafdata());
    if (rmafl.is_set || is_set(rmafl.yfilter)) leaf_name_data.push_back(rmafl.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem")
    {
        oem = value;
        oem.value_namespace = name_space;
        oem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdNum")
    {
        pdnum = value;
        pdnum.value_namespace = name_space;
        pdnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtNum")
    {
        prtnum = value;
        prtnum.value_namespace = name_space;
        prtnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pRev")
    {
        prev = value;
        prev.value_namespace = name_space;
        prev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgDev")
    {
        mfgdev = value;
        mfgdev.value_namespace = name_space;
        mfgdev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgBits")
    {
        mfgbits = value;
        mfgbits.value_namespace = name_space;
        mfgbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engBits")
    {
        engbits = value;
        engbits.value_namespace = name_space;
        engbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrCon")
    {
        pwrcon = value;
        pwrcon.value_namespace = name_space;
        pwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmaFl")
    {
        rmafl = value;
        rmafl.value_namespace = name_space;
        rmafl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "oem")
    {
        oem.yfilter = yfilter;
    }
    if(value_path == "pdNum")
    {
        pdnum.yfilter = yfilter;
    }
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "prtNum")
    {
        prtnum.yfilter = yfilter;
    }
    if(value_path == "pRev")
    {
        prev.yfilter = yfilter;
    }
    if(value_path == "mfgDev")
    {
        mfgdev.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "mfgBits")
    {
        mfgbits.yfilter = yfilter;
    }
    if(value_path == "engBits")
    {
        engbits.yfilter = yfilter;
    }
    if(value_path == "pwrCon")
    {
        pwrcon.yfilter = yfilter;
    }
    if(value_path == "rmaFl")
    {
        rmafl.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::SpfanblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    stackmib{YType::uint16, "stackMIB"},
    coolcap{YType::uint16, "coolCap"},
    ambtemp{YType::uint16, "ambTemp"},
    hppwrcon{YType::uint16, "hpPwrCon"},
    hpcoolcon{YType::uint16, "hpCoolCon"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spfanblk-items"; yang_parent_name = "spfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::~SpfanblkItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| stackmib.is_set
	|| coolcap.is_set
	|| ambtemp.is_set
	|| hppwrcon.is_set
	|| hpcoolcon.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(stackmib.yfilter)
	|| ydk::is_set(coolcap.yfilter)
	|| ydk::is_set(ambtemp.yfilter)
	|| ydk::is_set(hppwrcon.yfilter)
	|| ydk::is_set(hpcoolcon.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfanblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (stackmib.is_set || is_set(stackmib.yfilter)) leaf_name_data.push_back(stackmib.get_name_leafdata());
    if (coolcap.is_set || is_set(coolcap.yfilter)) leaf_name_data.push_back(coolcap.get_name_leafdata());
    if (ambtemp.is_set || is_set(ambtemp.yfilter)) leaf_name_data.push_back(ambtemp.get_name_leafdata());
    if (hppwrcon.is_set || is_set(hppwrcon.yfilter)) leaf_name_data.push_back(hppwrcon.get_name_leafdata());
    if (hpcoolcon.is_set || is_set(hpcoolcon.yfilter)) leaf_name_data.push_back(hpcoolcon.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fbits")
    {
        fbits = value;
        fbits.value_namespace = name_space;
        fbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwCBits")
    {
        hwcbits = value;
        hwcbits.value_namespace = name_space;
        hwcbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stackMIB")
    {
        stackmib = value;
        stackmib.value_namespace = name_space;
        stackmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coolCap")
    {
        coolcap = value;
        coolcap.value_namespace = name_space;
        coolcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ambTemp")
    {
        ambtemp = value;
        ambtemp.value_namespace = name_space;
        ambtemp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hpPwrCon")
    {
        hppwrcon = value;
        hppwrcon.value_namespace = name_space;
        hppwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hpCoolCon")
    {
        hpcoolcon = value;
        hpcoolcon.value_namespace = name_space;
        hpcoolcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "stackMIB")
    {
        stackmib.yfilter = yfilter;
    }
    if(value_path == "coolCap")
    {
        coolcap.yfilter = yfilter;
    }
    if(value_path == "ambTemp")
    {
        ambtemp.yfilter = yfilter;
    }
    if(value_path == "hpPwrCon")
    {
        hppwrcon.yfilter = yfilter;
    }
    if(value_path == "hpCoolCon")
    {
        hpcoolcon.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fbits" || name == "hwCBits" || name == "stackMIB" || name == "coolCap" || name == "ambTemp" || name == "hpPwrCon" || name == "hpCoolCon" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::SpfansnItems()
    :
    sernum{YType::str, "serNum"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spfansn-items"; yang_parent_name = "spfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::~SpfansnItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::has_data() const
{
    if (is_presence_container) return true;
    return sernum.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfansn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serNum" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "FtSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpbpItems::SpbpItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ExtchItems::ExtChList::SpbpItems::SpcmnItems>())
    , spbpblk_items(std::make_shared<System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems>())
{
    spcmn_items->parent = this;
    spbpblk_items->parent = this;

    yang_name = "spbp-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpbpItems::~SpbpItems()
{
}

bool System::ExtchItems::ExtChList::SpbpItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (spbpblk_items !=  nullptr && spbpblk_items->has_data());
}

bool System::ExtchItems::ExtChList::SpbpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (spbpblk_items !=  nullptr && spbpblk_items->has_operation());
}

std::string System::ExtchItems::ExtChList::SpbpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spbp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpbpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numblk.is_set || is_set(numblk.yfilter)) leaf_name_data.push_back(numblk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpbpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ExtchItems::ExtChList::SpbpItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "spbpblk-items")
    {
        if(spbpblk_items == nullptr)
        {
            spbpblk_items = std::make_shared<System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems>();
        }
        return spbpblk_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpbpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spcmn_items != nullptr)
    {
        _children["spcmn-items"] = spcmn_items;
    }

    if(spbpblk_items != nullptr)
    {
        _children["spbpblk-items"] = spbpblk_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::SpbpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numBlk")
    {
        numblk = value;
        numblk.value_namespace = name_space;
        numblk.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::SpbpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numBlk")
    {
        numblk.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::SpbpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "spbpblk-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::SpcmnItems()
    :
    size{YType::uint16, "size"},
    count{YType::uint16, "count"},
    major_{YType::uint16, "major"},
    minor{YType::uint16, "minor"},
    oem{YType::str, "oem"},
    pdnum{YType::str, "pdNum"},
    sernum{YType::str, "serNum"},
    prtnum{YType::str, "prtNum"},
    prev{YType::str, "pRev"},
    mfgdev{YType::str, "mfgDev"},
    hwver{YType::str, "hwVer"},
    mfgbits{YType::uint16, "mfgBits"},
    engbits{YType::uint16, "engBits"},
    pwrcon{YType::int16, "pwrCon"},
    rmafl{YType::str, "rmaFl"},
    clei{YType::str, "clei"},
    vdrid{YType::str, "vdrId"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spcmn-items"; yang_parent_name = "spbp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| count.is_set
	|| major_.is_set
	|| minor.is_set
	|| oem.is_set
	|| pdnum.is_set
	|| sernum.is_set
	|| prtnum.is_set
	|| prev.is_set
	|| mfgdev.is_set
	|| hwver.is_set
	|| mfgbits.is_set
	|| engbits.is_set
	|| pwrcon.is_set
	|| rmafl.is_set
	|| clei.is_set
	|| vdrid.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(oem.yfilter)
	|| ydk::is_set(pdnum.yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(prtnum.yfilter)
	|| ydk::is_set(prev.yfilter)
	|| ydk::is_set(mfgdev.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(mfgbits.yfilter)
	|| ydk::is_set(engbits.yfilter)
	|| ydk::is_set(pwrcon.yfilter)
	|| ydk::is_set(rmafl.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (oem.is_set || is_set(oem.yfilter)) leaf_name_data.push_back(oem.get_name_leafdata());
    if (pdnum.is_set || is_set(pdnum.yfilter)) leaf_name_data.push_back(pdnum.get_name_leafdata());
    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (prtnum.is_set || is_set(prtnum.yfilter)) leaf_name_data.push_back(prtnum.get_name_leafdata());
    if (prev.is_set || is_set(prev.yfilter)) leaf_name_data.push_back(prev.get_name_leafdata());
    if (mfgdev.is_set || is_set(mfgdev.yfilter)) leaf_name_data.push_back(mfgdev.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (mfgbits.is_set || is_set(mfgbits.yfilter)) leaf_name_data.push_back(mfgbits.get_name_leafdata());
    if (engbits.is_set || is_set(engbits.yfilter)) leaf_name_data.push_back(engbits.get_name_leafdata());
    if (pwrcon.is_set || is_set(pwrcon.yfilter)) leaf_name_data.push_back(pwrcon.get_name_leafdata());
    if (rmafl.is_set || is_set(rmafl.yfilter)) leaf_name_data.push_back(rmafl.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem")
    {
        oem = value;
        oem.value_namespace = name_space;
        oem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdNum")
    {
        pdnum = value;
        pdnum.value_namespace = name_space;
        pdnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtNum")
    {
        prtnum = value;
        prtnum.value_namespace = name_space;
        prtnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pRev")
    {
        prev = value;
        prev.value_namespace = name_space;
        prev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgDev")
    {
        mfgdev = value;
        mfgdev.value_namespace = name_space;
        mfgdev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgBits")
    {
        mfgbits = value;
        mfgbits.value_namespace = name_space;
        mfgbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engBits")
    {
        engbits = value;
        engbits.value_namespace = name_space;
        engbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrCon")
    {
        pwrcon = value;
        pwrcon.value_namespace = name_space;
        pwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmaFl")
    {
        rmafl = value;
        rmafl.value_namespace = name_space;
        rmafl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "oem")
    {
        oem.yfilter = yfilter;
    }
    if(value_path == "pdNum")
    {
        pdnum.yfilter = yfilter;
    }
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "prtNum")
    {
        prtnum.yfilter = yfilter;
    }
    if(value_path == "pRev")
    {
        prev.yfilter = yfilter;
    }
    if(value_path == "mfgDev")
    {
        mfgdev.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "mfgBits")
    {
        mfgbits.yfilter = yfilter;
    }
    if(value_path == "engBits")
    {
        engbits.yfilter = yfilter;
    }
    if(value_path == "pwrCon")
    {
        pwrcon.yfilter = yfilter;
    }
    if(value_path == "rmaFl")
    {
        rmafl.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::SpbpblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    macb{YType::str, "macB"},
    macl{YType::uint16, "macL"},
    stackmib{YType::uint16, "stackMIB"},
    oemeprise{YType::uint16, "oemEprise"},
    oemmib{YType::uint16, "oemMIB"},
    maxcpwr{YType::uint16, "maxCPwr"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spbpblk-items"; yang_parent_name = "spbp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::~SpbpblkItems()
{
}

bool System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| macb.is_set
	|| macl.is_set
	|| stackmib.is_set
	|| oemeprise.is_set
	|| oemmib.is_set
	|| maxcpwr.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(macl.yfilter)
	|| ydk::is_set(stackmib.yfilter)
	|| ydk::is_set(oemeprise.yfilter)
	|| ydk::is_set(oemmib.yfilter)
	|| ydk::is_set(maxcpwr.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spbpblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (macl.is_set || is_set(macl.yfilter)) leaf_name_data.push_back(macl.get_name_leafdata());
    if (stackmib.is_set || is_set(stackmib.yfilter)) leaf_name_data.push_back(stackmib.get_name_leafdata());
    if (oemeprise.is_set || is_set(oemeprise.yfilter)) leaf_name_data.push_back(oemeprise.get_name_leafdata());
    if (oemmib.is_set || is_set(oemmib.yfilter)) leaf_name_data.push_back(oemmib.get_name_leafdata());
    if (maxcpwr.is_set || is_set(maxcpwr.yfilter)) leaf_name_data.push_back(maxcpwr.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fbits")
    {
        fbits = value;
        fbits.value_namespace = name_space;
        fbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwCBits")
    {
        hwcbits = value;
        hwcbits.value_namespace = name_space;
        hwcbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macL")
    {
        macl = value;
        macl.value_namespace = name_space;
        macl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stackMIB")
    {
        stackmib = value;
        stackmib.value_namespace = name_space;
        stackmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oemEprise")
    {
        oemeprise = value;
        oemeprise.value_namespace = name_space;
        oemeprise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oemMIB")
    {
        oemmib = value;
        oemmib.value_namespace = name_space;
        oemmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr = value;
        maxcpwr.value_namespace = name_space;
        maxcpwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macL")
    {
        macl.yfilter = yfilter;
    }
    if(value_path == "stackMIB")
    {
        stackmib.yfilter = yfilter;
    }
    if(value_path == "oemEprise")
    {
        oemeprise.yfilter = yfilter;
    }
    if(value_path == "oemMIB")
    {
        oemmib.yfilter = yfilter;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fbits" || name == "hwCBits" || name == "macB" || name == "macL" || name == "stackMIB" || name == "oemEprise" || name == "oemMIB" || name == "maxCPwr" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsupItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpcmnItems>())
    , spsupblk_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems>())
    , sppd_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SppdItems>())
    , spsd_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsdItems>())
    , spsensorblk_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems>())
{
    spcmn_items->parent = this;
    spsupblk_items->parent = this;
    sppd_items->parent = this;
    spsd_items->parent = this;
    spsensorblk_items->parent = this;

    yang_name = "spsup-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::~SpsupItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (spsupblk_items !=  nullptr && spsupblk_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data())
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_data());
}

bool System::ExtchItems::ExtChList::SpsupItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (spsupblk_items !=  nullptr && spsupblk_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation())
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_operation());
}

std::string System::ExtchItems::ExtChList::SpsupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numblk.is_set || is_set(numblk.yfilter)) leaf_name_data.push_back(numblk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpsupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "spsupblk-items")
    {
        if(spsupblk_items == nullptr)
        {
            spsupblk_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems>();
        }
        return spsupblk_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SppdItems>();
        }
        return sppd_items;
    }

    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "spsensorblk-items")
    {
        if(spsensorblk_items == nullptr)
        {
            spsensorblk_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems>();
        }
        return spsensorblk_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpsupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spcmn_items != nullptr)
    {
        _children["spcmn-items"] = spcmn_items;
    }

    if(spsupblk_items != nullptr)
    {
        _children["spsupblk-items"] = spsupblk_items;
    }

    if(sppd_items != nullptr)
    {
        _children["sppd-items"] = sppd_items;
    }

    if(spsd_items != nullptr)
    {
        _children["spsd-items"] = spsd_items;
    }

    if(spsensorblk_items != nullptr)
    {
        _children["spsensorblk-items"] = spsensorblk_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::SpsupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numBlk")
    {
        numblk = value;
        numblk.value_namespace = name_space;
        numblk.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::SpsupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numBlk")
    {
        numblk.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::SpsupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "spsupblk-items" || name == "sppd-items" || name == "spsd-items" || name == "spsensorblk-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::SpcmnItems()
    :
    size{YType::uint16, "size"},
    count{YType::uint16, "count"},
    major_{YType::uint16, "major"},
    minor{YType::uint16, "minor"},
    oem{YType::str, "oem"},
    pdnum{YType::str, "pdNum"},
    sernum{YType::str, "serNum"},
    prtnum{YType::str, "prtNum"},
    prev{YType::str, "pRev"},
    mfgdev{YType::str, "mfgDev"},
    hwver{YType::str, "hwVer"},
    mfgbits{YType::uint16, "mfgBits"},
    engbits{YType::uint16, "engBits"},
    pwrcon{YType::int16, "pwrCon"},
    rmafl{YType::str, "rmaFl"},
    clei{YType::str, "clei"},
    vdrid{YType::str, "vdrId"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spcmn-items"; yang_parent_name = "spsup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| count.is_set
	|| major_.is_set
	|| minor.is_set
	|| oem.is_set
	|| pdnum.is_set
	|| sernum.is_set
	|| prtnum.is_set
	|| prev.is_set
	|| mfgdev.is_set
	|| hwver.is_set
	|| mfgbits.is_set
	|| engbits.is_set
	|| pwrcon.is_set
	|| rmafl.is_set
	|| clei.is_set
	|| vdrid.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(oem.yfilter)
	|| ydk::is_set(pdnum.yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(prtnum.yfilter)
	|| ydk::is_set(prev.yfilter)
	|| ydk::is_set(mfgdev.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(mfgbits.yfilter)
	|| ydk::is_set(engbits.yfilter)
	|| ydk::is_set(pwrcon.yfilter)
	|| ydk::is_set(rmafl.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (oem.is_set || is_set(oem.yfilter)) leaf_name_data.push_back(oem.get_name_leafdata());
    if (pdnum.is_set || is_set(pdnum.yfilter)) leaf_name_data.push_back(pdnum.get_name_leafdata());
    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (prtnum.is_set || is_set(prtnum.yfilter)) leaf_name_data.push_back(prtnum.get_name_leafdata());
    if (prev.is_set || is_set(prev.yfilter)) leaf_name_data.push_back(prev.get_name_leafdata());
    if (mfgdev.is_set || is_set(mfgdev.yfilter)) leaf_name_data.push_back(mfgdev.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (mfgbits.is_set || is_set(mfgbits.yfilter)) leaf_name_data.push_back(mfgbits.get_name_leafdata());
    if (engbits.is_set || is_set(engbits.yfilter)) leaf_name_data.push_back(engbits.get_name_leafdata());
    if (pwrcon.is_set || is_set(pwrcon.yfilter)) leaf_name_data.push_back(pwrcon.get_name_leafdata());
    if (rmafl.is_set || is_set(rmafl.yfilter)) leaf_name_data.push_back(rmafl.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem")
    {
        oem = value;
        oem.value_namespace = name_space;
        oem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdNum")
    {
        pdnum = value;
        pdnum.value_namespace = name_space;
        pdnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtNum")
    {
        prtnum = value;
        prtnum.value_namespace = name_space;
        prtnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pRev")
    {
        prev = value;
        prev.value_namespace = name_space;
        prev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgDev")
    {
        mfgdev = value;
        mfgdev.value_namespace = name_space;
        mfgdev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgBits")
    {
        mfgbits = value;
        mfgbits.value_namespace = name_space;
        mfgbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engBits")
    {
        engbits = value;
        engbits.value_namespace = name_space;
        engbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrCon")
    {
        pwrcon = value;
        pwrcon.value_namespace = name_space;
        pwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmaFl")
    {
        rmafl = value;
        rmafl.value_namespace = name_space;
        rmafl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "oem")
    {
        oem.yfilter = yfilter;
    }
    if(value_path == "pdNum")
    {
        pdnum.yfilter = yfilter;
    }
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "prtNum")
    {
        prtnum.yfilter = yfilter;
    }
    if(value_path == "pRev")
    {
        prev.yfilter = yfilter;
    }
    if(value_path == "mfgDev")
    {
        mfgdev.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "mfgBits")
    {
        mfgbits.yfilter = yfilter;
    }
    if(value_path == "engBits")
    {
        engbits.yfilter = yfilter;
    }
    if(value_path == "pwrCon")
    {
        pwrcon.yfilter = yfilter;
    }
    if(value_path == "rmaFl")
    {
        rmafl.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsupblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    crdidx{YType::uint16, "crdIdx"},
    macb{YType::str, "macB"},
    macl{YType::uint16, "macL"},
    eobcn{YType::uint16, "eobcN"},
    epldn{YType::uint16, "epldN"},
    maxcpwr{YType::uint16, "maxCPwr"},
    coolrq{YType::uint16, "coolRq"},
    ambt{YType::uint16, "ambT"},
    sensor1{YType::str, "sensor1"},
    sensor2{YType::str, "sensor2"},
    sensor3{YType::str, "sensor3"},
    sensor4{YType::str, "sensor4"},
    sensor5{YType::str, "sensor5"},
    sensor6{YType::str, "sensor6"},
    sensor7{YType::str, "sensor7"},
    sensor8{YType::str, "sensor8"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems>())
    , sppd_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems>())
{
    spsd_items->parent = this;
    sppd_items->parent = this;

    yang_name = "spsupblk-items"; yang_parent_name = "spsup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::~SpsupblkItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| crdidx.is_set
	|| macb.is_set
	|| macl.is_set
	|| eobcn.is_set
	|| epldn.is_set
	|| maxcpwr.is_set
	|| coolrq.is_set
	|| ambt.is_set
	|| sensor1.is_set
	|| sensor2.is_set
	|| sensor3.is_set
	|| sensor4.is_set
	|| sensor5.is_set
	|| sensor6.is_set
	|| sensor7.is_set
	|| sensor8.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data());
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(crdidx.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(macl.yfilter)
	|| ydk::is_set(eobcn.yfilter)
	|| ydk::is_set(epldn.yfilter)
	|| ydk::is_set(maxcpwr.yfilter)
	|| ydk::is_set(coolrq.yfilter)
	|| ydk::is_set(ambt.yfilter)
	|| ydk::is_set(sensor1.yfilter)
	|| ydk::is_set(sensor2.yfilter)
	|| ydk::is_set(sensor3.yfilter)
	|| ydk::is_set(sensor4.yfilter)
	|| ydk::is_set(sensor5.yfilter)
	|| ydk::is_set(sensor6.yfilter)
	|| ydk::is_set(sensor7.yfilter)
	|| ydk::is_set(sensor8.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation());
}

std::string System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsupblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (crdidx.is_set || is_set(crdidx.yfilter)) leaf_name_data.push_back(crdidx.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (macl.is_set || is_set(macl.yfilter)) leaf_name_data.push_back(macl.get_name_leafdata());
    if (eobcn.is_set || is_set(eobcn.yfilter)) leaf_name_data.push_back(eobcn.get_name_leafdata());
    if (epldn.is_set || is_set(epldn.yfilter)) leaf_name_data.push_back(epldn.get_name_leafdata());
    if (maxcpwr.is_set || is_set(maxcpwr.yfilter)) leaf_name_data.push_back(maxcpwr.get_name_leafdata());
    if (coolrq.is_set || is_set(coolrq.yfilter)) leaf_name_data.push_back(coolrq.get_name_leafdata());
    if (ambt.is_set || is_set(ambt.yfilter)) leaf_name_data.push_back(ambt.get_name_leafdata());
    if (sensor1.is_set || is_set(sensor1.yfilter)) leaf_name_data.push_back(sensor1.get_name_leafdata());
    if (sensor2.is_set || is_set(sensor2.yfilter)) leaf_name_data.push_back(sensor2.get_name_leafdata());
    if (sensor3.is_set || is_set(sensor3.yfilter)) leaf_name_data.push_back(sensor3.get_name_leafdata());
    if (sensor4.is_set || is_set(sensor4.yfilter)) leaf_name_data.push_back(sensor4.get_name_leafdata());
    if (sensor5.is_set || is_set(sensor5.yfilter)) leaf_name_data.push_back(sensor5.get_name_leafdata());
    if (sensor6.is_set || is_set(sensor6.yfilter)) leaf_name_data.push_back(sensor6.get_name_leafdata());
    if (sensor7.is_set || is_set(sensor7.yfilter)) leaf_name_data.push_back(sensor7.get_name_leafdata());
    if (sensor8.is_set || is_set(sensor8.yfilter)) leaf_name_data.push_back(sensor8.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems>();
        }
        return sppd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spsd_items != nullptr)
    {
        _children["spsd-items"] = spsd_items;
    }

    if(sppd_items != nullptr)
    {
        _children["sppd-items"] = sppd_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fbits")
    {
        fbits = value;
        fbits.value_namespace = name_space;
        fbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwCBits")
    {
        hwcbits = value;
        hwcbits.value_namespace = name_space;
        hwcbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crdIdx")
    {
        crdidx = value;
        crdidx.value_namespace = name_space;
        crdidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macL")
    {
        macl = value;
        macl.value_namespace = name_space;
        macl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eobcN")
    {
        eobcn = value;
        eobcn.value_namespace = name_space;
        eobcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epldN")
    {
        epldn = value;
        epldn.value_namespace = name_space;
        epldn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr = value;
        maxcpwr.value_namespace = name_space;
        maxcpwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coolRq")
    {
        coolrq = value;
        coolrq.value_namespace = name_space;
        coolrq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ambT")
    {
        ambt = value;
        ambt.value_namespace = name_space;
        ambt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor1")
    {
        sensor1 = value;
        sensor1.value_namespace = name_space;
        sensor1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor2")
    {
        sensor2 = value;
        sensor2.value_namespace = name_space;
        sensor2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor3")
    {
        sensor3 = value;
        sensor3.value_namespace = name_space;
        sensor3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor4")
    {
        sensor4 = value;
        sensor4.value_namespace = name_space;
        sensor4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor5")
    {
        sensor5 = value;
        sensor5.value_namespace = name_space;
        sensor5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor6")
    {
        sensor6 = value;
        sensor6.value_namespace = name_space;
        sensor6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor7")
    {
        sensor7 = value;
        sensor7.value_namespace = name_space;
        sensor7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor8")
    {
        sensor8 = value;
        sensor8.value_namespace = name_space;
        sensor8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "crdIdx")
    {
        crdidx.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macL")
    {
        macl.yfilter = yfilter;
    }
    if(value_path == "eobcN")
    {
        eobcn.yfilter = yfilter;
    }
    if(value_path == "epldN")
    {
        epldn.yfilter = yfilter;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr.yfilter = yfilter;
    }
    if(value_path == "coolRq")
    {
        coolrq.yfilter = yfilter;
    }
    if(value_path == "ambT")
    {
        ambt.yfilter = yfilter;
    }
    if(value_path == "sensor1")
    {
        sensor1.yfilter = yfilter;
    }
    if(value_path == "sensor2")
    {
        sensor2.yfilter = yfilter;
    }
    if(value_path == "sensor3")
    {
        sensor3.yfilter = yfilter;
    }
    if(value_path == "sensor4")
    {
        sensor4.yfilter = yfilter;
    }
    if(value_path == "sensor5")
    {
        sensor5.yfilter = yfilter;
    }
    if(value_path == "sensor6")
    {
        sensor6.yfilter = yfilter;
    }
    if(value_path == "sensor7")
    {
        sensor7.yfilter = yfilter;
    }
    if(value_path == "sensor8")
    {
        sensor8.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sppd-items" || name == "fbits" || name == "hwCBits" || name == "crdIdx" || name == "macB" || name == "macL" || name == "eobcN" || name == "epldN" || name == "maxCPwr" || name == "coolRq" || name == "ambT" || name == "sensor1" || name == "sensor2" || name == "sensor3" || name == "sensor4" || name == "sensor5" || name == "sensor6" || name == "sensor7" || name == "sensor8" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "spsupblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList>();
        ent_->parent = this;
        spsd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spsd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "spsupblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems::~SppdItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "spsup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SppdItems::~SppdItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ExtchItems::ExtChList::SpsupItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ExtchItems::ExtChList::SpsupItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpsupItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpsupItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::SpsupItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::SpsupItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::SpsupItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "spsup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpsdItems::~SpsdItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::SpsupItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpsupItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList>();
        ent_->parent = this;
        spsd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpsupItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spsd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::SpsupItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsensorblkItems()
    :
    sensor9{YType::str, "sensor9"},
    sensor10{YType::str, "sensor10"},
    sensor11{YType::str, "sensor11"},
    sensor12{YType::str, "sensor12"},
    sensor13{YType::str, "sensor13"},
    sensor14{YType::str, "sensor14"},
    sensor15{YType::str, "sensor15"},
    sensor16{YType::str, "sensor16"},
    sensor17{YType::str, "sensor17"},
    sensor18{YType::str, "sensor18"},
    sensor19{YType::str, "sensor19"},
    sensor20{YType::str, "sensor20"},
    sensor21{YType::str, "sensor21"},
    sensor22{YType::str, "sensor22"},
    sensor23{YType::str, "sensor23"},
    sensor24{YType::str, "sensor24"},
    sensor25{YType::str, "sensor25"},
    sensor26{YType::str, "sensor26"},
    sensor27{YType::str, "sensor27"},
    sensor28{YType::str, "sensor28"},
    sensor29{YType::str, "sensor29"},
    sensor30{YType::str, "sensor30"},
    sensor31{YType::str, "sensor31"},
    sensor32{YType::str, "sensor32"},
    sensor33{YType::str, "sensor33"},
    sensor34{YType::str, "sensor34"},
    sensor35{YType::str, "sensor35"},
    sensor36{YType::str, "sensor36"},
    sensor37{YType::str, "sensor37"},
    sensor38{YType::str, "sensor38"},
    sensor39{YType::str, "sensor39"},
    sensor40{YType::str, "sensor40"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems>())
{
    spsd_items->parent = this;

    yang_name = "spsensorblk-items"; yang_parent_name = "spsup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::~SpsensorblkItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::has_data() const
{
    if (is_presence_container) return true;
    return sensor9.is_set
	|| sensor10.is_set
	|| sensor11.is_set
	|| sensor12.is_set
	|| sensor13.is_set
	|| sensor14.is_set
	|| sensor15.is_set
	|| sensor16.is_set
	|| sensor17.is_set
	|| sensor18.is_set
	|| sensor19.is_set
	|| sensor20.is_set
	|| sensor21.is_set
	|| sensor22.is_set
	|| sensor23.is_set
	|| sensor24.is_set
	|| sensor25.is_set
	|| sensor26.is_set
	|| sensor27.is_set
	|| sensor28.is_set
	|| sensor29.is_set
	|| sensor30.is_set
	|| sensor31.is_set
	|| sensor32.is_set
	|| sensor33.is_set
	|| sensor34.is_set
	|| sensor35.is_set
	|| sensor36.is_set
	|| sensor37.is_set
	|| sensor38.is_set
	|| sensor39.is_set
	|| sensor40.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data());
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor9.yfilter)
	|| ydk::is_set(sensor10.yfilter)
	|| ydk::is_set(sensor11.yfilter)
	|| ydk::is_set(sensor12.yfilter)
	|| ydk::is_set(sensor13.yfilter)
	|| ydk::is_set(sensor14.yfilter)
	|| ydk::is_set(sensor15.yfilter)
	|| ydk::is_set(sensor16.yfilter)
	|| ydk::is_set(sensor17.yfilter)
	|| ydk::is_set(sensor18.yfilter)
	|| ydk::is_set(sensor19.yfilter)
	|| ydk::is_set(sensor20.yfilter)
	|| ydk::is_set(sensor21.yfilter)
	|| ydk::is_set(sensor22.yfilter)
	|| ydk::is_set(sensor23.yfilter)
	|| ydk::is_set(sensor24.yfilter)
	|| ydk::is_set(sensor25.yfilter)
	|| ydk::is_set(sensor26.yfilter)
	|| ydk::is_set(sensor27.yfilter)
	|| ydk::is_set(sensor28.yfilter)
	|| ydk::is_set(sensor29.yfilter)
	|| ydk::is_set(sensor30.yfilter)
	|| ydk::is_set(sensor31.yfilter)
	|| ydk::is_set(sensor32.yfilter)
	|| ydk::is_set(sensor33.yfilter)
	|| ydk::is_set(sensor34.yfilter)
	|| ydk::is_set(sensor35.yfilter)
	|| ydk::is_set(sensor36.yfilter)
	|| ydk::is_set(sensor37.yfilter)
	|| ydk::is_set(sensor38.yfilter)
	|| ydk::is_set(sensor39.yfilter)
	|| ydk::is_set(sensor40.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation());
}

std::string System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsensorblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor9.is_set || is_set(sensor9.yfilter)) leaf_name_data.push_back(sensor9.get_name_leafdata());
    if (sensor10.is_set || is_set(sensor10.yfilter)) leaf_name_data.push_back(sensor10.get_name_leafdata());
    if (sensor11.is_set || is_set(sensor11.yfilter)) leaf_name_data.push_back(sensor11.get_name_leafdata());
    if (sensor12.is_set || is_set(sensor12.yfilter)) leaf_name_data.push_back(sensor12.get_name_leafdata());
    if (sensor13.is_set || is_set(sensor13.yfilter)) leaf_name_data.push_back(sensor13.get_name_leafdata());
    if (sensor14.is_set || is_set(sensor14.yfilter)) leaf_name_data.push_back(sensor14.get_name_leafdata());
    if (sensor15.is_set || is_set(sensor15.yfilter)) leaf_name_data.push_back(sensor15.get_name_leafdata());
    if (sensor16.is_set || is_set(sensor16.yfilter)) leaf_name_data.push_back(sensor16.get_name_leafdata());
    if (sensor17.is_set || is_set(sensor17.yfilter)) leaf_name_data.push_back(sensor17.get_name_leafdata());
    if (sensor18.is_set || is_set(sensor18.yfilter)) leaf_name_data.push_back(sensor18.get_name_leafdata());
    if (sensor19.is_set || is_set(sensor19.yfilter)) leaf_name_data.push_back(sensor19.get_name_leafdata());
    if (sensor20.is_set || is_set(sensor20.yfilter)) leaf_name_data.push_back(sensor20.get_name_leafdata());
    if (sensor21.is_set || is_set(sensor21.yfilter)) leaf_name_data.push_back(sensor21.get_name_leafdata());
    if (sensor22.is_set || is_set(sensor22.yfilter)) leaf_name_data.push_back(sensor22.get_name_leafdata());
    if (sensor23.is_set || is_set(sensor23.yfilter)) leaf_name_data.push_back(sensor23.get_name_leafdata());
    if (sensor24.is_set || is_set(sensor24.yfilter)) leaf_name_data.push_back(sensor24.get_name_leafdata());
    if (sensor25.is_set || is_set(sensor25.yfilter)) leaf_name_data.push_back(sensor25.get_name_leafdata());
    if (sensor26.is_set || is_set(sensor26.yfilter)) leaf_name_data.push_back(sensor26.get_name_leafdata());
    if (sensor27.is_set || is_set(sensor27.yfilter)) leaf_name_data.push_back(sensor27.get_name_leafdata());
    if (sensor28.is_set || is_set(sensor28.yfilter)) leaf_name_data.push_back(sensor28.get_name_leafdata());
    if (sensor29.is_set || is_set(sensor29.yfilter)) leaf_name_data.push_back(sensor29.get_name_leafdata());
    if (sensor30.is_set || is_set(sensor30.yfilter)) leaf_name_data.push_back(sensor30.get_name_leafdata());
    if (sensor31.is_set || is_set(sensor31.yfilter)) leaf_name_data.push_back(sensor31.get_name_leafdata());
    if (sensor32.is_set || is_set(sensor32.yfilter)) leaf_name_data.push_back(sensor32.get_name_leafdata());
    if (sensor33.is_set || is_set(sensor33.yfilter)) leaf_name_data.push_back(sensor33.get_name_leafdata());
    if (sensor34.is_set || is_set(sensor34.yfilter)) leaf_name_data.push_back(sensor34.get_name_leafdata());
    if (sensor35.is_set || is_set(sensor35.yfilter)) leaf_name_data.push_back(sensor35.get_name_leafdata());
    if (sensor36.is_set || is_set(sensor36.yfilter)) leaf_name_data.push_back(sensor36.get_name_leafdata());
    if (sensor37.is_set || is_set(sensor37.yfilter)) leaf_name_data.push_back(sensor37.get_name_leafdata());
    if (sensor38.is_set || is_set(sensor38.yfilter)) leaf_name_data.push_back(sensor38.get_name_leafdata());
    if (sensor39.is_set || is_set(sensor39.yfilter)) leaf_name_data.push_back(sensor39.get_name_leafdata());
    if (sensor40.is_set || is_set(sensor40.yfilter)) leaf_name_data.push_back(sensor40.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spsd_items != nullptr)
    {
        _children["spsd-items"] = spsd_items;
    }

    return _children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor9")
    {
        sensor9 = value;
        sensor9.value_namespace = name_space;
        sensor9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor10")
    {
        sensor10 = value;
        sensor10.value_namespace = name_space;
        sensor10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor11")
    {
        sensor11 = value;
        sensor11.value_namespace = name_space;
        sensor11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor12")
    {
        sensor12 = value;
        sensor12.value_namespace = name_space;
        sensor12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor13")
    {
        sensor13 = value;
        sensor13.value_namespace = name_space;
        sensor13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor14")
    {
        sensor14 = value;
        sensor14.value_namespace = name_space;
        sensor14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor15")
    {
        sensor15 = value;
        sensor15.value_namespace = name_space;
        sensor15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor16")
    {
        sensor16 = value;
        sensor16.value_namespace = name_space;
        sensor16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor17")
    {
        sensor17 = value;
        sensor17.value_namespace = name_space;
        sensor17.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor18")
    {
        sensor18 = value;
        sensor18.value_namespace = name_space;
        sensor18.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor19")
    {
        sensor19 = value;
        sensor19.value_namespace = name_space;
        sensor19.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor20")
    {
        sensor20 = value;
        sensor20.value_namespace = name_space;
        sensor20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor21")
    {
        sensor21 = value;
        sensor21.value_namespace = name_space;
        sensor21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor22")
    {
        sensor22 = value;
        sensor22.value_namespace = name_space;
        sensor22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor23")
    {
        sensor23 = value;
        sensor23.value_namespace = name_space;
        sensor23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor24")
    {
        sensor24 = value;
        sensor24.value_namespace = name_space;
        sensor24.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor25")
    {
        sensor25 = value;
        sensor25.value_namespace = name_space;
        sensor25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor26")
    {
        sensor26 = value;
        sensor26.value_namespace = name_space;
        sensor26.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor27")
    {
        sensor27 = value;
        sensor27.value_namespace = name_space;
        sensor27.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor28")
    {
        sensor28 = value;
        sensor28.value_namespace = name_space;
        sensor28.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor29")
    {
        sensor29 = value;
        sensor29.value_namespace = name_space;
        sensor29.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor30")
    {
        sensor30 = value;
        sensor30.value_namespace = name_space;
        sensor30.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor31")
    {
        sensor31 = value;
        sensor31.value_namespace = name_space;
        sensor31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor32")
    {
        sensor32 = value;
        sensor32.value_namespace = name_space;
        sensor32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor33")
    {
        sensor33 = value;
        sensor33.value_namespace = name_space;
        sensor33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor34")
    {
        sensor34 = value;
        sensor34.value_namespace = name_space;
        sensor34.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor35")
    {
        sensor35 = value;
        sensor35.value_namespace = name_space;
        sensor35.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor36")
    {
        sensor36 = value;
        sensor36.value_namespace = name_space;
        sensor36.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor37")
    {
        sensor37 = value;
        sensor37.value_namespace = name_space;
        sensor37.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor38")
    {
        sensor38 = value;
        sensor38.value_namespace = name_space;
        sensor38.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor39")
    {
        sensor39 = value;
        sensor39.value_namespace = name_space;
        sensor39.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor40")
    {
        sensor40 = value;
        sensor40.value_namespace = name_space;
        sensor40.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor9")
    {
        sensor9.yfilter = yfilter;
    }
    if(value_path == "sensor10")
    {
        sensor10.yfilter = yfilter;
    }
    if(value_path == "sensor11")
    {
        sensor11.yfilter = yfilter;
    }
    if(value_path == "sensor12")
    {
        sensor12.yfilter = yfilter;
    }
    if(value_path == "sensor13")
    {
        sensor13.yfilter = yfilter;
    }
    if(value_path == "sensor14")
    {
        sensor14.yfilter = yfilter;
    }
    if(value_path == "sensor15")
    {
        sensor15.yfilter = yfilter;
    }
    if(value_path == "sensor16")
    {
        sensor16.yfilter = yfilter;
    }
    if(value_path == "sensor17")
    {
        sensor17.yfilter = yfilter;
    }
    if(value_path == "sensor18")
    {
        sensor18.yfilter = yfilter;
    }
    if(value_path == "sensor19")
    {
        sensor19.yfilter = yfilter;
    }
    if(value_path == "sensor20")
    {
        sensor20.yfilter = yfilter;
    }
    if(value_path == "sensor21")
    {
        sensor21.yfilter = yfilter;
    }
    if(value_path == "sensor22")
    {
        sensor22.yfilter = yfilter;
    }
    if(value_path == "sensor23")
    {
        sensor23.yfilter = yfilter;
    }
    if(value_path == "sensor24")
    {
        sensor24.yfilter = yfilter;
    }
    if(value_path == "sensor25")
    {
        sensor25.yfilter = yfilter;
    }
    if(value_path == "sensor26")
    {
        sensor26.yfilter = yfilter;
    }
    if(value_path == "sensor27")
    {
        sensor27.yfilter = yfilter;
    }
    if(value_path == "sensor28")
    {
        sensor28.yfilter = yfilter;
    }
    if(value_path == "sensor29")
    {
        sensor29.yfilter = yfilter;
    }
    if(value_path == "sensor30")
    {
        sensor30.yfilter = yfilter;
    }
    if(value_path == "sensor31")
    {
        sensor31.yfilter = yfilter;
    }
    if(value_path == "sensor32")
    {
        sensor32.yfilter = yfilter;
    }
    if(value_path == "sensor33")
    {
        sensor33.yfilter = yfilter;
    }
    if(value_path == "sensor34")
    {
        sensor34.yfilter = yfilter;
    }
    if(value_path == "sensor35")
    {
        sensor35.yfilter = yfilter;
    }
    if(value_path == "sensor36")
    {
        sensor36.yfilter = yfilter;
    }
    if(value_path == "sensor37")
    {
        sensor37.yfilter = yfilter;
    }
    if(value_path == "sensor38")
    {
        sensor38.yfilter = yfilter;
    }
    if(value_path == "sensor39")
    {
        sensor39.yfilter = yfilter;
    }
    if(value_path == "sensor40")
    {
        sensor40.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sensor9" || name == "sensor10" || name == "sensor11" || name == "sensor12" || name == "sensor13" || name == "sensor14" || name == "sensor15" || name == "sensor16" || name == "sensor17" || name == "sensor18" || name == "sensor19" || name == "sensor20" || name == "sensor21" || name == "sensor22" || name == "sensor23" || name == "sensor24" || name == "sensor25" || name == "sensor26" || name == "sensor27" || name == "sensor28" || name == "sensor29" || name == "sensor30" || name == "sensor31" || name == "sensor32" || name == "sensor33" || name == "sensor34" || name == "sensor35" || name == "sensor36" || name == "sensor37" || name == "sensor38" || name == "sensor39" || name == "sensor40" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "spsensorblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto ent_ = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList>();
        ent_->parent = this;
        spsd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spsd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::OpsItems::OpsItems()
    :
    name{YType::str, "name"}
        ,
    consolep_items(std::make_shared<System::OpsItems::ConsolepItems>())
    , ejector_items(std::make_shared<System::OpsItems::EjectorItems>())
    , fanzone_items(std::make_shared<System::OpsItems::FanzoneItems>())
    , psgp_items(std::make_shared<System::OpsItems::PsgpItems>())
    , slot_items(std::make_shared<System::OpsItems::SlotItems>())
{
    consolep_items->parent = this;
    ejector_items->parent = this;
    fanzone_items->parent = this;
    psgp_items->parent = this;
    slot_items->parent = this;

    yang_name = "ops-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OpsItems::~OpsItems()
{
}

bool System::OpsItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (consolep_items !=  nullptr && consolep_items->has_data())
	|| (ejector_items !=  nullptr && ejector_items->has_data())
	|| (fanzone_items !=  nullptr && fanzone_items->has_data())
	|| (psgp_items !=  nullptr && psgp_items->has_data())
	|| (slot_items !=  nullptr && slot_items->has_data());
}

bool System::OpsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (consolep_items !=  nullptr && consolep_items->has_operation())
	|| (ejector_items !=  nullptr && ejector_items->has_operation())
	|| (fanzone_items !=  nullptr && fanzone_items->has_operation())
	|| (psgp_items !=  nullptr && psgp_items->has_operation())
	|| (slot_items !=  nullptr && slot_items->has_operation());
}

std::string System::OpsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OpsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ops-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OpsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OpsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "consolep-items")
    {
        if(consolep_items == nullptr)
        {
            consolep_items = std::make_shared<System::OpsItems::ConsolepItems>();
        }
        return consolep_items;
    }

    if(child_yang_name == "ejector-items")
    {
        if(ejector_items == nullptr)
        {
            ejector_items = std::make_shared<System::OpsItems::EjectorItems>();
        }
        return ejector_items;
    }

    if(child_yang_name == "fanzone-items")
    {
        if(fanzone_items == nullptr)
        {
            fanzone_items = std::make_shared<System::OpsItems::FanzoneItems>();
        }
        return fanzone_items;
    }

    if(child_yang_name == "psgp-items")
    {
        if(psgp_items == nullptr)
        {
            psgp_items = std::make_shared<System::OpsItems::PsgpItems>();
        }
        return psgp_items;
    }

    if(child_yang_name == "slot-items")
    {
        if(slot_items == nullptr)
        {
            slot_items = std::make_shared<System::OpsItems::SlotItems>();
        }
        return slot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OpsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(consolep_items != nullptr)
    {
        _children["consolep-items"] = consolep_items;
    }

    if(ejector_items != nullptr)
    {
        _children["ejector-items"] = ejector_items;
    }

    if(fanzone_items != nullptr)
    {
        _children["fanzone-items"] = fanzone_items;
    }

    if(psgp_items != nullptr)
    {
        _children["psgp-items"] = psgp_items;
    }

    if(slot_items != nullptr)
    {
        _children["slot-items"] = slot_items;
    }

    return _children;
}

void System::OpsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::OpsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::OpsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "consolep-items" || name == "ejector-items" || name == "fanzone-items" || name == "psgp-items" || name == "slot-items" || name == "name")
        return true;
    return false;
}

System::OpsItems::ConsolepItems::ConsolepItems()
    :
    databits{YType::uint16, "dataBits"},
    inactiveintvl{YType::uint32, "inactiveIntvl"},
    parity{YType::enumeration, "parity"},
    baudrate{YType::enumeration, "baudRate"},
    stopbits{YType::uint16, "stopBits"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "consolep-items"; yang_parent_name = "ops-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OpsItems::ConsolepItems::~ConsolepItems()
{
}

bool System::OpsItems::ConsolepItems::has_data() const
{
    if (is_presence_container) return true;
    return databits.is_set
	|| inactiveintvl.is_set
	|| parity.is_set
	|| baudrate.is_set
	|| stopbits.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::OpsItems::ConsolepItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(databits.yfilter)
	|| ydk::is_set(inactiveintvl.yfilter)
	|| ydk::is_set(parity.yfilter)
	|| ydk::is_set(baudrate.yfilter)
	|| ydk::is_set(stopbits.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::OpsItems::ConsolepItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ops-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OpsItems::ConsolepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consolep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OpsItems::ConsolepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (databits.is_set || is_set(databits.yfilter)) leaf_name_data.push_back(databits.get_name_leafdata());
    if (inactiveintvl.is_set || is_set(inactiveintvl.yfilter)) leaf_name_data.push_back(inactiveintvl.get_name_leafdata());
    if (parity.is_set || is_set(parity.yfilter)) leaf_name_data.push_back(parity.get_name_leafdata());
    if (baudrate.is_set || is_set(baudrate.yfilter)) leaf_name_data.push_back(baudrate.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.yfilter)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OpsItems::ConsolepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OpsItems::ConsolepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OpsItems::ConsolepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dataBits")
    {
        databits = value;
        databits.value_namespace = name_space;
        databits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactiveIntvl")
    {
        inactiveintvl = value;
        inactiveintvl.value_namespace = name_space;
        inactiveintvl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parity")
    {
        parity = value;
        parity.value_namespace = name_space;
        parity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baudRate")
    {
        baudrate = value;
        baudrate.value_namespace = name_space;
        baudrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopBits")
    {
        stopbits = value;
        stopbits.value_namespace = name_space;
        stopbits.value_namespace_prefix = name_space_prefix;
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
}

void System::OpsItems::ConsolepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dataBits")
    {
        databits.yfilter = yfilter;
    }
    if(value_path == "inactiveIntvl")
    {
        inactiveintvl.yfilter = yfilter;
    }
    if(value_path == "parity")
    {
        parity.yfilter = yfilter;
    }
    if(value_path == "baudRate")
    {
        baudrate.yfilter = yfilter;
    }
    if(value_path == "stopBits")
    {
        stopbits.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::OpsItems::ConsolepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dataBits" || name == "inactiveIntvl" || name == "parity" || name == "baudRate" || name == "stopBits" || name == "name" || name == "descr")
        return true;
    return false;
}

System::OpsItems::EjectorItems::EjectorItems()
    :
    autoshutdown{YType::enumeration, "autoShutdown"},
    name{YType::str, "name"}
{

    yang_name = "ejector-items"; yang_parent_name = "ops-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OpsItems::EjectorItems::~EjectorItems()
{
}

bool System::OpsItems::EjectorItems::has_data() const
{
    if (is_presence_container) return true;
    return autoshutdown.is_set
	|| name.is_set;
}

bool System::OpsItems::EjectorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autoshutdown.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::OpsItems::EjectorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ops-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OpsItems::EjectorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ejector-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OpsItems::EjectorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autoshutdown.is_set || is_set(autoshutdown.yfilter)) leaf_name_data.push_back(autoshutdown.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OpsItems::EjectorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OpsItems::EjectorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OpsItems::EjectorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autoShutdown")
    {
        autoshutdown = value;
        autoshutdown.value_namespace = name_space;
        autoshutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::OpsItems::EjectorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autoShutdown")
    {
        autoshutdown.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::OpsItems::EjectorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoShutdown" || name == "name")
        return true;
    return false;
}

System::OpsItems::FanzoneItems::FanzoneItems()
    :
    zonespeed{YType::uint32, "zoneSpeed"},
    airfilter{YType::enumeration, "airFilter"},
    name{YType::str, "name"}
{

    yang_name = "fanzone-items"; yang_parent_name = "ops-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OpsItems::FanzoneItems::~FanzoneItems()
{
}

bool System::OpsItems::FanzoneItems::has_data() const
{
    if (is_presence_container) return true;
    return zonespeed.is_set
	|| airfilter.is_set
	|| name.is_set;
}

bool System::OpsItems::FanzoneItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(zonespeed.yfilter)
	|| ydk::is_set(airfilter.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::OpsItems::FanzoneItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ops-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OpsItems::FanzoneItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fanzone-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OpsItems::FanzoneItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (zonespeed.is_set || is_set(zonespeed.yfilter)) leaf_name_data.push_back(zonespeed.get_name_leafdata());
    if (airfilter.is_set || is_set(airfilter.yfilter)) leaf_name_data.push_back(airfilter.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OpsItems::FanzoneItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OpsItems::FanzoneItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OpsItems::FanzoneItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "zoneSpeed")
    {
        zonespeed = value;
        zonespeed.value_namespace = name_space;
        zonespeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "airFilter")
    {
        airfilter = value;
        airfilter.value_namespace = name_space;
        airfilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::OpsItems::FanzoneItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "zoneSpeed")
    {
        zonespeed.yfilter = yfilter;
    }
    if(value_path == "airFilter")
    {
        airfilter.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::OpsItems::FanzoneItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zoneSpeed" || name == "airFilter" || name == "name")
        return true;
    return false;
}

System::OpsItems::PsgpItems::PsgpItems()
    :
    adminrdnm{YType::enumeration, "adminRdnM"},
    operrdnm{YType::enumeration, "operRdnM"},
    tc{YType::uint32, "tc"},
    rsdpwr{YType::uint32, "rsdPwr"},
    alpwr{YType::uint32, "alPwr"},
    avpwr{YType::uint32, "avPwr"},
    unit{YType::str, "unit"},
    nrdncap{YType::uint32, "nRdnCap"},
    psrdncap{YType::uint32, "psRdnCap"},
    acrdncap{YType::uint32, "acRdnCap"},
    grdrdncap{YType::uint32, "grdRdnCap"},
    flrdncap{YType::uint32, "flRdnCap"},
    grdacap{YType::uint32, "grdACap"},
    grdbcap{YType::uint32, "grdBCap"},
    inputdraw{YType::uint32, "inputDraw"},
    outputdraw{YType::uint32, "outputDraw"},
    cordsconnected{YType::boolean, "cordsConnected"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    rspsuinstpolcons_items(std::make_shared<System::OpsItems::PsgpItems::RspsuInstPolConsItems>())
{
    rspsuinstpolcons_items->parent = this;

    yang_name = "psgp-items"; yang_parent_name = "ops-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OpsItems::PsgpItems::~PsgpItems()
{
}

bool System::OpsItems::PsgpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminrdnm.is_set
	|| operrdnm.is_set
	|| tc.is_set
	|| rsdpwr.is_set
	|| alpwr.is_set
	|| avpwr.is_set
	|| unit.is_set
	|| nrdncap.is_set
	|| psrdncap.is_set
	|| acrdncap.is_set
	|| grdrdncap.is_set
	|| flrdncap.is_set
	|| grdacap.is_set
	|| grdbcap.is_set
	|| inputdraw.is_set
	|| outputdraw.is_set
	|| cordsconnected.is_set
	|| name.is_set
	|| descr.is_set
	|| (rspsuinstpolcons_items !=  nullptr && rspsuinstpolcons_items->has_data());
}

bool System::OpsItems::PsgpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminrdnm.yfilter)
	|| ydk::is_set(operrdnm.yfilter)
	|| ydk::is_set(tc.yfilter)
	|| ydk::is_set(rsdpwr.yfilter)
	|| ydk::is_set(alpwr.yfilter)
	|| ydk::is_set(avpwr.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(nrdncap.yfilter)
	|| ydk::is_set(psrdncap.yfilter)
	|| ydk::is_set(acrdncap.yfilter)
	|| ydk::is_set(grdrdncap.yfilter)
	|| ydk::is_set(flrdncap.yfilter)
	|| ydk::is_set(grdacap.yfilter)
	|| ydk::is_set(grdbcap.yfilter)
	|| ydk::is_set(inputdraw.yfilter)
	|| ydk::is_set(outputdraw.yfilter)
	|| ydk::is_set(cordsconnected.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rspsuinstpolcons_items !=  nullptr && rspsuinstpolcons_items->has_operation());
}

std::string System::OpsItems::PsgpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ops-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OpsItems::PsgpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psgp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OpsItems::PsgpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminrdnm.is_set || is_set(adminrdnm.yfilter)) leaf_name_data.push_back(adminrdnm.get_name_leafdata());
    if (operrdnm.is_set || is_set(operrdnm.yfilter)) leaf_name_data.push_back(operrdnm.get_name_leafdata());
    if (tc.is_set || is_set(tc.yfilter)) leaf_name_data.push_back(tc.get_name_leafdata());
    if (rsdpwr.is_set || is_set(rsdpwr.yfilter)) leaf_name_data.push_back(rsdpwr.get_name_leafdata());
    if (alpwr.is_set || is_set(alpwr.yfilter)) leaf_name_data.push_back(alpwr.get_name_leafdata());
    if (avpwr.is_set || is_set(avpwr.yfilter)) leaf_name_data.push_back(avpwr.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (nrdncap.is_set || is_set(nrdncap.yfilter)) leaf_name_data.push_back(nrdncap.get_name_leafdata());
    if (psrdncap.is_set || is_set(psrdncap.yfilter)) leaf_name_data.push_back(psrdncap.get_name_leafdata());
    if (acrdncap.is_set || is_set(acrdncap.yfilter)) leaf_name_data.push_back(acrdncap.get_name_leafdata());
    if (grdrdncap.is_set || is_set(grdrdncap.yfilter)) leaf_name_data.push_back(grdrdncap.get_name_leafdata());
    if (flrdncap.is_set || is_set(flrdncap.yfilter)) leaf_name_data.push_back(flrdncap.get_name_leafdata());
    if (grdacap.is_set || is_set(grdacap.yfilter)) leaf_name_data.push_back(grdacap.get_name_leafdata());
    if (grdbcap.is_set || is_set(grdbcap.yfilter)) leaf_name_data.push_back(grdbcap.get_name_leafdata());
    if (inputdraw.is_set || is_set(inputdraw.yfilter)) leaf_name_data.push_back(inputdraw.get_name_leafdata());
    if (outputdraw.is_set || is_set(outputdraw.yfilter)) leaf_name_data.push_back(outputdraw.get_name_leafdata());
    if (cordsconnected.is_set || is_set(cordsconnected.yfilter)) leaf_name_data.push_back(cordsconnected.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OpsItems::PsgpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rspsuInstPolCons-items")
    {
        if(rspsuinstpolcons_items == nullptr)
        {
            rspsuinstpolcons_items = std::make_shared<System::OpsItems::PsgpItems::RspsuInstPolConsItems>();
        }
        return rspsuinstpolcons_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OpsItems::PsgpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rspsuinstpolcons_items != nullptr)
    {
        _children["rspsuInstPolCons-items"] = rspsuinstpolcons_items;
    }

    return _children;
}

void System::OpsItems::PsgpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminRdnM")
    {
        adminrdnm = value;
        adminrdnm.value_namespace = name_space;
        adminrdnm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operRdnM")
    {
        operrdnm = value;
        operrdnm.value_namespace = name_space;
        operrdnm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tc")
    {
        tc = value;
        tc.value_namespace = name_space;
        tc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsdPwr")
    {
        rsdpwr = value;
        rsdpwr.value_namespace = name_space;
        rsdpwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alPwr")
    {
        alpwr = value;
        alpwr.value_namespace = name_space;
        alpwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avPwr")
    {
        avpwr = value;
        avpwr.value_namespace = name_space;
        avpwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nRdnCap")
    {
        nrdncap = value;
        nrdncap.value_namespace = name_space;
        nrdncap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psRdnCap")
    {
        psrdncap = value;
        psrdncap.value_namespace = name_space;
        psrdncap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acRdnCap")
    {
        acrdncap = value;
        acrdncap.value_namespace = name_space;
        acrdncap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grdRdnCap")
    {
        grdrdncap = value;
        grdrdncap.value_namespace = name_space;
        grdrdncap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flRdnCap")
    {
        flrdncap = value;
        flrdncap.value_namespace = name_space;
        flrdncap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grdACap")
    {
        grdacap = value;
        grdacap.value_namespace = name_space;
        grdacap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grdBCap")
    {
        grdbcap = value;
        grdbcap.value_namespace = name_space;
        grdbcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputDraw")
    {
        inputdraw = value;
        inputdraw.value_namespace = name_space;
        inputdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outputDraw")
    {
        outputdraw = value;
        outputdraw.value_namespace = name_space;
        outputdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cordsConnected")
    {
        cordsconnected = value;
        cordsconnected.value_namespace = name_space;
        cordsconnected.value_namespace_prefix = name_space_prefix;
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
}

void System::OpsItems::PsgpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminRdnM")
    {
        adminrdnm.yfilter = yfilter;
    }
    if(value_path == "operRdnM")
    {
        operrdnm.yfilter = yfilter;
    }
    if(value_path == "tc")
    {
        tc.yfilter = yfilter;
    }
    if(value_path == "rsdPwr")
    {
        rsdpwr.yfilter = yfilter;
    }
    if(value_path == "alPwr")
    {
        alpwr.yfilter = yfilter;
    }
    if(value_path == "avPwr")
    {
        avpwr.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "nRdnCap")
    {
        nrdncap.yfilter = yfilter;
    }
    if(value_path == "psRdnCap")
    {
        psrdncap.yfilter = yfilter;
    }
    if(value_path == "acRdnCap")
    {
        acrdncap.yfilter = yfilter;
    }
    if(value_path == "grdRdnCap")
    {
        grdrdncap.yfilter = yfilter;
    }
    if(value_path == "flRdnCap")
    {
        flrdncap.yfilter = yfilter;
    }
    if(value_path == "grdACap")
    {
        grdacap.yfilter = yfilter;
    }
    if(value_path == "grdBCap")
    {
        grdbcap.yfilter = yfilter;
    }
    if(value_path == "inputDraw")
    {
        inputdraw.yfilter = yfilter;
    }
    if(value_path == "outputDraw")
    {
        outputdraw.yfilter = yfilter;
    }
    if(value_path == "cordsConnected")
    {
        cordsconnected.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::OpsItems::PsgpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rspsuInstPolCons-items" || name == "adminRdnM" || name == "operRdnM" || name == "tc" || name == "rsdPwr" || name == "alPwr" || name == "avPwr" || name == "unit" || name == "nRdnCap" || name == "psRdnCap" || name == "acRdnCap" || name == "grdRdnCap" || name == "flRdnCap" || name == "grdACap" || name == "grdBCap" || name == "inputDraw" || name == "outputDraw" || name == "cordsConnected" || name == "name" || name == "descr")
        return true;
    return false;
}

System::OpsItems::PsgpItems::RspsuInstPolConsItems::RspsuInstPolConsItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rspsuInstPolCons-items"; yang_parent_name = "psgp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OpsItems::PsgpItems::RspsuInstPolConsItems::~RspsuInstPolConsItems()
{
}

bool System::OpsItems::PsgpItems::RspsuInstPolConsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::OpsItems::PsgpItems::RspsuInstPolConsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::OpsItems::PsgpItems::RspsuInstPolConsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ops-items/psgp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OpsItems::PsgpItems::RspsuInstPolConsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rspsuInstPolCons-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OpsItems::PsgpItems::RspsuInstPolConsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OpsItems::PsgpItems::RspsuInstPolConsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OpsItems::PsgpItems::RspsuInstPolConsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OpsItems::PsgpItems::RspsuInstPolConsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::OpsItems::PsgpItems::RspsuInstPolConsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::OpsItems::PsgpItems::RspsuInstPolConsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::OpsItems::SlotItems::SlotItems()
    :
    slotp_list(this, {"type", "id"})
{

    yang_name = "slot-items"; yang_parent_name = "ops-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OpsItems::SlotItems::~SlotItems()
{
}

bool System::OpsItems::SlotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slotp_list.len(); index++)
    {
        if(slotp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::OpsItems::SlotItems::has_operation() const
{
    for (std::size_t index=0; index<slotp_list.len(); index++)
    {
        if(slotp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::OpsItems::SlotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ops-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OpsItems::SlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OpsItems::SlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OpsItems::SlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SlotP-list")
    {
        auto ent_ = std::make_shared<System::OpsItems::SlotItems::SlotPList>();
        ent_->parent = this;
        slotp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OpsItems::SlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slotp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::OpsItems::SlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::OpsItems::SlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::OpsItems::SlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SlotP-list")
        return true;
    return false;
}

System::OpsItems::SlotItems::SlotPList::SlotPList()
    :
    type{YType::enumeration, "type"},
    id{YType::uint32, "id"},
    ctrl{YType::str, "ctrl"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "SlotP-list"; yang_parent_name = "slot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OpsItems::SlotItems::SlotPList::~SlotPList()
{
}

bool System::OpsItems::SlotItems::SlotPList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| id.is_set
	|| ctrl.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::OpsItems::SlotItems::SlotPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::OpsItems::SlotItems::SlotPList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ops-items/slot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::OpsItems::SlotItems::SlotPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SlotP-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::OpsItems::SlotItems::SlotPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::OpsItems::SlotItems::SlotPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::OpsItems::SlotItems::SlotPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::OpsItems::SlotItems::SlotPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
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
}

void System::OpsItems::SlotItems::SlotPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::OpsItems::SlotItems::SlotPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "id" || name == "ctrl" || name == "name" || name == "descr")
        return true;
    return false;
}

System::EqptcapacityItems::EqptcapacityItems()
    :
    name{YType::str, "name"}
{

    yang_name = "eqptcapacity-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::EqptcapacityItems::~EqptcapacityItems()
{
}

bool System::EqptcapacityItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool System::EqptcapacityItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::EqptcapacityItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::EqptcapacityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eqptcapacity-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::EqptcapacityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::EqptcapacityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::EqptcapacityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::EqptcapacityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::EqptcapacityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::EqptcapacityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

System::DiagItems::DiagItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    grptests_items(std::make_shared<System::DiagItems::GrptestsItems>())
    , rule_items(std::make_shared<System::DiagItems::RuleItems>())
{
    grptests_items->parent = this;
    rule_items->parent = this;

    yang_name = "diag-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DiagItems::~DiagItems()
{
}

bool System::DiagItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (grptests_items !=  nullptr && grptests_items->has_data())
	|| (rule_items !=  nullptr && rule_items->has_data());
}

bool System::DiagItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (grptests_items !=  nullptr && grptests_items->has_operation())
	|| (rule_items !=  nullptr && rule_items->has_operation());
}

std::string System::DiagItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DiagItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diag-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DiagItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DiagItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grptests-items")
    {
        if(grptests_items == nullptr)
        {
            grptests_items = std::make_shared<System::DiagItems::GrptestsItems>();
        }
        return grptests_items;
    }

    if(child_yang_name == "rule-items")
    {
        if(rule_items == nullptr)
        {
            rule_items = std::make_shared<System::DiagItems::RuleItems>();
        }
        return rule_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DiagItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(grptests_items != nullptr)
    {
        _children["grptests-items"] = grptests_items;
    }

    if(rule_items != nullptr)
    {
        _children["rule-items"] = rule_items;
    }

    return _children;
}

void System::DiagItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::DiagItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::DiagItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grptests-items" || name == "rule-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::DiagItems::GrptestsItems::GrptestsItems()
    :
    grptests_list(this, {"subjclass", "model", "grp"})
{

    yang_name = "grptests-items"; yang_parent_name = "diag-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DiagItems::GrptestsItems::~GrptestsItems()
{
}

bool System::DiagItems::GrptestsItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<grptests_list.len(); index++)
    {
        if(grptests_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DiagItems::GrptestsItems::has_operation() const
{
    for (std::size_t index=0; index<grptests_list.len(); index++)
    {
        if(grptests_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DiagItems::GrptestsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/diag-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DiagItems::GrptestsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grptests-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DiagItems::GrptestsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DiagItems::GrptestsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "GrpTests-list")
    {
        auto ent_ = std::make_shared<System::DiagItems::GrptestsItems::GrpTestsList>();
        ent_->parent = this;
        grptests_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DiagItems::GrptestsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : grptests_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DiagItems::GrptestsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DiagItems::GrptestsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DiagItems::GrptestsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "GrpTests-list")
        return true;
    return false;
}

System::DiagItems::GrptestsItems::GrpTestsList::GrpTestsList()
    :
    subjclass{YType::str, "subjClass"},
    model{YType::str, "model"},
    grp{YType::enumeration, "grp"},
    testbm{YType::str, "testBm"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "GrpTests-list"; yang_parent_name = "grptests-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DiagItems::GrptestsItems::GrpTestsList::~GrpTestsList()
{
}

bool System::DiagItems::GrptestsItems::GrpTestsList::has_data() const
{
    if (is_presence_container) return true;
    return subjclass.is_set
	|| model.is_set
	|| grp.is_set
	|| testbm.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::DiagItems::GrptestsItems::GrpTestsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subjclass.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(grp.yfilter)
	|| ydk::is_set(testbm.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::DiagItems::GrptestsItems::GrpTestsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/diag-items/grptests-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DiagItems::GrptestsItems::GrpTestsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "GrpTests-list";
    ADD_KEY_TOKEN(subjclass, "subjClass");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(grp, "grp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DiagItems::GrptestsItems::GrpTestsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subjclass.is_set || is_set(subjclass.yfilter)) leaf_name_data.push_back(subjclass.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (grp.is_set || is_set(grp.yfilter)) leaf_name_data.push_back(grp.get_name_leafdata());
    if (testbm.is_set || is_set(testbm.yfilter)) leaf_name_data.push_back(testbm.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DiagItems::GrptestsItems::GrpTestsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DiagItems::GrptestsItems::GrpTestsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DiagItems::GrptestsItems::GrpTestsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subjClass")
    {
        subjclass = value;
        subjclass.value_namespace = name_space;
        subjclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grp")
    {
        grp = value;
        grp.value_namespace = name_space;
        grp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "testBm")
    {
        testbm = value;
        testbm.value_namespace = name_space;
        testbm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::DiagItems::GrptestsItems::GrpTestsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subjClass")
    {
        subjclass.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "grp")
    {
        grp.yfilter = yfilter;
    }
    if(value_path == "testBm")
    {
        testbm.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::DiagItems::GrptestsItems::GrpTestsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subjClass" || name == "model" || name == "grp" || name == "testBm" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::DiagItems::RuleItems::RuleItems()
    :
    rule_list(this, {"type", "trig"})
{

    yang_name = "rule-items"; yang_parent_name = "diag-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DiagItems::RuleItems::~RuleItems()
{
}

bool System::DiagItems::RuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DiagItems::RuleItems::has_operation() const
{
    for (std::size_t index=0; index<rule_list.len(); index++)
    {
        if(rule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DiagItems::RuleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/diag-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DiagItems::RuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DiagItems::RuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DiagItems::RuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rule-list")
    {
        auto ent_ = std::make_shared<System::DiagItems::RuleItems::RuleList>();
        ent_->parent = this;
        rule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DiagItems::RuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DiagItems::RuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DiagItems::RuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DiagItems::RuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rule-list")
        return true;
    return false;
}

System::DiagItems::RuleItems::RuleList::RuleList()
    :
    type{YType::uint16, "type"},
    trig{YType::enumeration, "trig"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    freq{YType::str, "freq"}
        ,
    subj_items(std::make_shared<System::DiagItems::RuleItems::RuleList::SubjItems>())
{
    subj_items->parent = this;

    yang_name = "Rule-list"; yang_parent_name = "rule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::DiagItems::RuleItems::RuleList::~RuleList()
{
}

bool System::DiagItems::RuleItems::RuleList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| trig.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| freq.is_set
	|| (subj_items !=  nullptr && subj_items->has_data());
}

bool System::DiagItems::RuleItems::RuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(trig.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(freq.yfilter)
	|| (subj_items !=  nullptr && subj_items->has_operation());
}

std::string System::DiagItems::RuleItems::RuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/diag-items/rule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::DiagItems::RuleItems::RuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rule-list";
    ADD_KEY_TOKEN(type, "type");
    ADD_KEY_TOKEN(trig, "trig");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DiagItems::RuleItems::RuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (trig.is_set || is_set(trig.yfilter)) leaf_name_data.push_back(trig.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (freq.is_set || is_set(freq.yfilter)) leaf_name_data.push_back(freq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DiagItems::RuleItems::RuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subj-items")
    {
        if(subj_items == nullptr)
        {
            subj_items = std::make_shared<System::DiagItems::RuleItems::RuleList::SubjItems>();
        }
        return subj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DiagItems::RuleItems::RuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(subj_items != nullptr)
    {
        _children["subj-items"] = subj_items;
    }

    return _children;
}

void System::DiagItems::RuleItems::RuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig")
    {
        trig = value;
        trig.value_namespace = name_space;
        trig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq")
    {
        freq = value;
        freq.value_namespace = name_space;
        freq.value_namespace_prefix = name_space_prefix;
    }
}

void System::DiagItems::RuleItems::RuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "trig")
    {
        trig.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "freq")
    {
        freq.yfilter = yfilter;
    }
}

bool System::DiagItems::RuleItems::RuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subj-items" || name == "type" || name == "trig" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "freq")
        return true;
    return false;
}

System::DiagItems::RuleItems::RuleList::SubjItems::SubjItems()
    :
    subj_list(this, {"odn"})
{

    yang_name = "subj-items"; yang_parent_name = "Rule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DiagItems::RuleItems::RuleList::SubjItems::~SubjItems()
{
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subj_list.len(); index++)
    {
        if(subj_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::has_operation() const
{
    for (std::size_t index=0; index<subj_list.len(); index++)
    {
        if(subj_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DiagItems::RuleItems::RuleList::SubjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DiagItems::RuleItems::RuleList::SubjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DiagItems::RuleItems::RuleList::SubjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Subj-list")
    {
        auto ent_ = std::make_shared<System::DiagItems::RuleItems::RuleList::SubjItems::SubjList>();
        ent_->parent = this;
        subj_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DiagItems::RuleItems::RuleList::SubjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subj_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DiagItems::RuleItems::RuleList::SubjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DiagItems::RuleItems::RuleList::SubjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Subj-list")
        return true;
    return false;
}

System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::SubjList()
    :
    odn{YType::str, "oDn"},
    opk{YType::str, "oPk"},
    osk{YType::str, "oSk"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"}
        ,
    rslt_items(std::make_shared<System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems>())
    , portteststats_items(std::make_shared<System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems>())
{
    rslt_items->parent = this;
    portteststats_items->parent = this;

    yang_name = "Subj-list"; yang_parent_name = "subj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::~SubjList()
{
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::has_data() const
{
    if (is_presence_container) return true;
    return odn.is_set
	|| opk.is_set
	|| osk.is_set
	|| operst.is_set
	|| name.is_set
	|| (rslt_items !=  nullptr && rslt_items->has_data())
	|| (portteststats_items !=  nullptr && portteststats_items->has_data());
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(odn.yfilter)
	|| ydk::is_set(opk.yfilter)
	|| ydk::is_set(osk.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rslt_items !=  nullptr && rslt_items->has_operation())
	|| (portteststats_items !=  nullptr && portteststats_items->has_operation());
}

std::string System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Subj-list";
    ADD_KEY_TOKEN(odn, "oDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (odn.is_set || is_set(odn.yfilter)) leaf_name_data.push_back(odn.get_name_leafdata());
    if (opk.is_set || is_set(opk.yfilter)) leaf_name_data.push_back(opk.get_name_leafdata());
    if (osk.is_set || is_set(osk.yfilter)) leaf_name_data.push_back(osk.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rslt-items")
    {
        if(rslt_items == nullptr)
        {
            rslt_items = std::make_shared<System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems>();
        }
        return rslt_items;
    }

    if(child_yang_name == "portteststats-items")
    {
        if(portteststats_items == nullptr)
        {
            portteststats_items = std::make_shared<System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems>();
        }
        return portteststats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rslt_items != nullptr)
    {
        _children["rslt-items"] = rslt_items;
    }

    if(portteststats_items != nullptr)
    {
        _children["portteststats-items"] = portteststats_items;
    }

    return _children;
}

void System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oDn")
    {
        odn = value;
        odn.value_namespace = name_space;
        odn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oPk")
    {
        opk = value;
        opk.value_namespace = name_space;
        opk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oSk")
    {
        osk = value;
        osk.value_namespace = name_space;
        osk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oDn")
    {
        odn.yfilter = yfilter;
    }
    if(value_path == "oPk")
    {
        opk.yfilter = yfilter;
    }
    if(value_path == "oSk")
    {
        osk.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rslt-items" || name == "portteststats-items" || name == "oDn" || name == "oPk" || name == "oSk" || name == "operSt" || name == "name")
        return true;
    return false;
}

System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltItems()
    :
    rslt_list(this, {"ts"})
{

    yang_name = "rslt-items"; yang_parent_name = "Subj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::~RsltItems()
{
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslt_list.len(); index++)
    {
        if(rslt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::has_operation() const
{
    for (std::size_t index=0; index<rslt_list.len(); index++)
    {
        if(rslt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Rslt-list")
    {
        auto ent_ = std::make_shared<System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList>();
        ent_->parent = this;
        rslt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Rslt-list")
        return true;
    return false;
}

System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList::RsltList()
    :
    ts{YType::str, "ts"},
    trig{YType::enumeration, "trig"},
    operst{YType::enumeration, "operSt"},
    qual{YType::str, "qual"},
    name{YType::str, "name"}
{

    yang_name = "Rslt-list"; yang_parent_name = "rslt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList::~RsltList()
{
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList::has_data() const
{
    if (is_presence_container) return true;
    return ts.is_set
	|| trig.is_set
	|| operst.is_set
	|| qual.is_set
	|| name.is_set;
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(trig.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(qual.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Rslt-list";
    ADD_KEY_TOKEN(ts, "ts");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (trig.is_set || is_set(trig.yfilter)) leaf_name_data.push_back(trig.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (qual.is_set || is_set(qual.yfilter)) leaf_name_data.push_back(qual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig")
    {
        trig = value;
        trig.value_namespace = name_space;
        trig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qual")
    {
        qual = value;
        qual.value_namespace = name_space;
        qual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "trig")
    {
        trig.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "qual")
    {
        qual.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ts" || name == "trig" || name == "operSt" || name == "qual" || name == "name")
        return true;
    return false;
}

System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems::PortteststatsItems()
    :
    pktsent{YType::uint32, "pktSent"},
    pktrcvd{YType::uint32, "pktRcvd"},
    pktdrop{YType::uint32, "pktDrop"}
{

    yang_name = "portteststats-items"; yang_parent_name = "Subj-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems::~PortteststatsItems()
{
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems::has_data() const
{
    if (is_presence_container) return true;
    return pktsent.is_set
	|| pktrcvd.is_set
	|| pktdrop.is_set;
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pktsent.yfilter)
	|| ydk::is_set(pktrcvd.yfilter)
	|| ydk::is_set(pktdrop.yfilter);
}

std::string System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portteststats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pktsent.is_set || is_set(pktsent.yfilter)) leaf_name_data.push_back(pktsent.get_name_leafdata());
    if (pktrcvd.is_set || is_set(pktrcvd.yfilter)) leaf_name_data.push_back(pktrcvd.get_name_leafdata());
    if (pktdrop.is_set || is_set(pktdrop.yfilter)) leaf_name_data.push_back(pktdrop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pktSent")
    {
        pktsent = value;
        pktsent.value_namespace = name_space;
        pktsent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktRcvd")
    {
        pktrcvd = value;
        pktrcvd.value_namespace = name_space;
        pktrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktDrop")
    {
        pktdrop = value;
        pktdrop.value_namespace = name_space;
        pktdrop.value_namespace_prefix = name_space_prefix;
    }
}

void System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pktSent")
    {
        pktsent.yfilter = yfilter;
    }
    if(value_path == "pktRcvd")
    {
        pktrcvd.yfilter = yfilter;
    }
    if(value_path == "pktDrop")
    {
        pktdrop.yfilter = yfilter;
    }
}

bool System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pktSent" || name == "pktRcvd" || name == "pktDrop")
        return true;
    return false;
}

System::LcmItems::LcmItems()
    :
    sysmod_items(std::make_shared<System::LcmItems::SysmodItems>())
    , ecmptemplate_items(std::make_shared<System::LcmItems::EcmptemplateItems>())
    , modloglevel_items(std::make_shared<System::LcmItems::ModloglevelItems>())
    , mcastopt_items(std::make_shared<System::LcmItems::McastoptItems>())
    , vxlanmplsacl_items(std::make_shared<System::LcmItems::VxlanmplsaclItems>())
{
    sysmod_items->parent = this;
    ecmptemplate_items->parent = this;
    modloglevel_items->parent = this;
    mcastopt_items->parent = this;
    vxlanmplsacl_items->parent = this;

    yang_name = "lcm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LcmItems::~LcmItems()
{
}

bool System::LcmItems::has_data() const
{
    if (is_presence_container) return true;
    return (sysmod_items !=  nullptr && sysmod_items->has_data())
	|| (ecmptemplate_items !=  nullptr && ecmptemplate_items->has_data())
	|| (modloglevel_items !=  nullptr && modloglevel_items->has_data())
	|| (mcastopt_items !=  nullptr && mcastopt_items->has_data())
	|| (vxlanmplsacl_items !=  nullptr && vxlanmplsacl_items->has_data());
}

bool System::LcmItems::has_operation() const
{
    return is_set(yfilter)
	|| (sysmod_items !=  nullptr && sysmod_items->has_operation())
	|| (ecmptemplate_items !=  nullptr && ecmptemplate_items->has_operation())
	|| (modloglevel_items !=  nullptr && modloglevel_items->has_operation())
	|| (mcastopt_items !=  nullptr && mcastopt_items->has_operation())
	|| (vxlanmplsacl_items !=  nullptr && vxlanmplsacl_items->has_operation());
}

std::string System::LcmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LcmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LcmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LcmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sysmod-items")
    {
        if(sysmod_items == nullptr)
        {
            sysmod_items = std::make_shared<System::LcmItems::SysmodItems>();
        }
        return sysmod_items;
    }

    if(child_yang_name == "ecmptemplate-items")
    {
        if(ecmptemplate_items == nullptr)
        {
            ecmptemplate_items = std::make_shared<System::LcmItems::EcmptemplateItems>();
        }
        return ecmptemplate_items;
    }

    if(child_yang_name == "modloglevel-items")
    {
        if(modloglevel_items == nullptr)
        {
            modloglevel_items = std::make_shared<System::LcmItems::ModloglevelItems>();
        }
        return modloglevel_items;
    }

    if(child_yang_name == "mcastopt-items")
    {
        if(mcastopt_items == nullptr)
        {
            mcastopt_items = std::make_shared<System::LcmItems::McastoptItems>();
        }
        return mcastopt_items;
    }

    if(child_yang_name == "vxlanmplsacl-items")
    {
        if(vxlanmplsacl_items == nullptr)
        {
            vxlanmplsacl_items = std::make_shared<System::LcmItems::VxlanmplsaclItems>();
        }
        return vxlanmplsacl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LcmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sysmod_items != nullptr)
    {
        _children["sysmod-items"] = sysmod_items;
    }

    if(ecmptemplate_items != nullptr)
    {
        _children["ecmptemplate-items"] = ecmptemplate_items;
    }

    if(modloglevel_items != nullptr)
    {
        _children["modloglevel-items"] = modloglevel_items;
    }

    if(mcastopt_items != nullptr)
    {
        _children["mcastopt-items"] = mcastopt_items;
    }

    if(vxlanmplsacl_items != nullptr)
    {
        _children["vxlanmplsacl-items"] = vxlanmplsacl_items;
    }

    return _children;
}

void System::LcmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LcmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LcmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysmod-items" || name == "ecmptemplate-items" || name == "modloglevel-items" || name == "mcastopt-items" || name == "vxlanmplsacl-items")
        return true;
    return false;
}

System::LcmItems::SysmodItems::SysmodItems()
    :
    modulefailureaction{YType::enumeration, "moduleFailureAction"}
{

    yang_name = "sysmod-items"; yang_parent_name = "lcm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LcmItems::SysmodItems::~SysmodItems()
{
}

bool System::LcmItems::SysmodItems::has_data() const
{
    if (is_presence_container) return true;
    return modulefailureaction.is_set;
}

bool System::LcmItems::SysmodItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(modulefailureaction.yfilter);
}

std::string System::LcmItems::SysmodItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lcm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LcmItems::SysmodItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysmod-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LcmItems::SysmodItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (modulefailureaction.is_set || is_set(modulefailureaction.yfilter)) leaf_name_data.push_back(modulefailureaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LcmItems::SysmodItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LcmItems::SysmodItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LcmItems::SysmodItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "moduleFailureAction")
    {
        modulefailureaction = value;
        modulefailureaction.value_namespace = name_space;
        modulefailureaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::LcmItems::SysmodItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "moduleFailureAction")
    {
        modulefailureaction.yfilter = yfilter;
    }
}

bool System::LcmItems::SysmodItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "moduleFailureAction")
        return true;
    return false;
}

System::LcmItems::EcmptemplateItems::EcmptemplateItems()
    :
    module_items(std::make_shared<System::LcmItems::EcmptemplateItems::ModuleItems>())
{
    module_items->parent = this;

    yang_name = "ecmptemplate-items"; yang_parent_name = "lcm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LcmItems::EcmptemplateItems::~EcmptemplateItems()
{
}

bool System::LcmItems::EcmptemplateItems::has_data() const
{
    if (is_presence_container) return true;
    return (module_items !=  nullptr && module_items->has_data());
}

bool System::LcmItems::EcmptemplateItems::has_operation() const
{
    return is_set(yfilter)
	|| (module_items !=  nullptr && module_items->has_operation());
}

std::string System::LcmItems::EcmptemplateItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lcm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LcmItems::EcmptemplateItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecmptemplate-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LcmItems::EcmptemplateItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LcmItems::EcmptemplateItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "module-items")
    {
        if(module_items == nullptr)
        {
            module_items = std::make_shared<System::LcmItems::EcmptemplateItems::ModuleItems>();
        }
        return module_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LcmItems::EcmptemplateItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(module_items != nullptr)
    {
        _children["module-items"] = module_items;
    }

    return _children;
}

void System::LcmItems::EcmptemplateItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LcmItems::EcmptemplateItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LcmItems::EcmptemplateItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module-items")
        return true;
    return false;
}

System::LcmItems::EcmptemplateItems::ModuleItems::ModuleItems()
    :
    ecmptemplatemodule_list(this, {"id"})
{

    yang_name = "module-items"; yang_parent_name = "ecmptemplate-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LcmItems::EcmptemplateItems::ModuleItems::~ModuleItems()
{
}

bool System::LcmItems::EcmptemplateItems::ModuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ecmptemplatemodule_list.len(); index++)
    {
        if(ecmptemplatemodule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LcmItems::EcmptemplateItems::ModuleItems::has_operation() const
{
    for (std::size_t index=0; index<ecmptemplatemodule_list.len(); index++)
    {
        if(ecmptemplatemodule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LcmItems::EcmptemplateItems::ModuleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lcm-items/ecmptemplate-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LcmItems::EcmptemplateItems::ModuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LcmItems::EcmptemplateItems::ModuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LcmItems::EcmptemplateItems::ModuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EcmpTemplateModule-list")
    {
        auto ent_ = std::make_shared<System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList>();
        ent_->parent = this;
        ecmptemplatemodule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LcmItems::EcmptemplateItems::ModuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ecmptemplatemodule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::LcmItems::EcmptemplateItems::ModuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LcmItems::EcmptemplateItems::ModuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LcmItems::EcmptemplateItems::ModuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EcmpTemplateModule-list")
        return true;
    return false;
}

System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList::EcmpTemplateModuleList()
    :
    id{YType::uint16, "id"},
    ecmptemplatel3vpn{YType::enumeration, "ecmpTemplateL3vpn"}
{

    yang_name = "EcmpTemplateModule-list"; yang_parent_name = "module-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList::~EcmpTemplateModuleList()
{
}

bool System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ecmptemplatel3vpn.is_set;
}

bool System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ecmptemplatel3vpn.yfilter);
}

std::string System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lcm-items/ecmptemplate-items/module-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EcmpTemplateModule-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ecmptemplatel3vpn.is_set || is_set(ecmptemplatel3vpn.yfilter)) leaf_name_data.push_back(ecmptemplatel3vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecmpTemplateL3vpn")
    {
        ecmptemplatel3vpn = value;
        ecmptemplatel3vpn.value_namespace = name_space;
        ecmptemplatel3vpn.value_namespace_prefix = name_space_prefix;
    }
}

void System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ecmpTemplateL3vpn")
    {
        ecmptemplatel3vpn.yfilter = yfilter;
    }
}

bool System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ecmpTemplateL3vpn")
        return true;
    return false;
}

System::LcmItems::ModloglevelItems::ModloglevelItems()
    :
    logginglevel{YType::uint16, "loggingLevel"},
    loggingtype{YType::enumeration, "loggingType"}
{

    yang_name = "modloglevel-items"; yang_parent_name = "lcm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LcmItems::ModloglevelItems::~ModloglevelItems()
{
}

bool System::LcmItems::ModloglevelItems::has_data() const
{
    if (is_presence_container) return true;
    return logginglevel.is_set
	|| loggingtype.is_set;
}

bool System::LcmItems::ModloglevelItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(loggingtype.yfilter);
}

std::string System::LcmItems::ModloglevelItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lcm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LcmItems::ModloglevelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modloglevel-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LcmItems::ModloglevelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (loggingtype.is_set || is_set(loggingtype.yfilter)) leaf_name_data.push_back(loggingtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LcmItems::ModloglevelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LcmItems::ModloglevelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LcmItems::ModloglevelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingType")
    {
        loggingtype = value;
        loggingtype.value_namespace = name_space;
        loggingtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::LcmItems::ModloglevelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "loggingType")
    {
        loggingtype.yfilter = yfilter;
    }
}

bool System::LcmItems::ModloglevelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loggingLevel" || name == "loggingType")
        return true;
    return false;
}

System::LcmItems::McastoptItems::McastoptItems()
    :
    multicastoptimization{YType::enumeration, "multicastOptimization"}
{

    yang_name = "mcastopt-items"; yang_parent_name = "lcm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LcmItems::McastoptItems::~McastoptItems()
{
}

bool System::LcmItems::McastoptItems::has_data() const
{
    if (is_presence_container) return true;
    return multicastoptimization.is_set;
}

bool System::LcmItems::McastoptItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicastoptimization.yfilter);
}

std::string System::LcmItems::McastoptItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lcm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LcmItems::McastoptItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcastopt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LcmItems::McastoptItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicastoptimization.is_set || is_set(multicastoptimization.yfilter)) leaf_name_data.push_back(multicastoptimization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LcmItems::McastoptItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LcmItems::McastoptItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LcmItems::McastoptItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicastOptimization")
    {
        multicastoptimization = value;
        multicastoptimization.value_namespace = name_space;
        multicastoptimization.value_namespace_prefix = name_space_prefix;
    }
}

void System::LcmItems::McastoptItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicastOptimization")
    {
        multicastoptimization.yfilter = yfilter;
    }
}

bool System::LcmItems::McastoptItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicastOptimization")
        return true;
    return false;
}

System::LcmItems::VxlanmplsaclItems::VxlanmplsaclItems()
    :
    module_items(std::make_shared<System::LcmItems::VxlanmplsaclItems::ModuleItems>())
{
    module_items->parent = this;

    yang_name = "vxlanmplsacl-items"; yang_parent_name = "lcm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LcmItems::VxlanmplsaclItems::~VxlanmplsaclItems()
{
}

bool System::LcmItems::VxlanmplsaclItems::has_data() const
{
    if (is_presence_container) return true;
    return (module_items !=  nullptr && module_items->has_data());
}

bool System::LcmItems::VxlanmplsaclItems::has_operation() const
{
    return is_set(yfilter)
	|| (module_items !=  nullptr && module_items->has_operation());
}

std::string System::LcmItems::VxlanmplsaclItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lcm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LcmItems::VxlanmplsaclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vxlanmplsacl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LcmItems::VxlanmplsaclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LcmItems::VxlanmplsaclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "module-items")
    {
        if(module_items == nullptr)
        {
            module_items = std::make_shared<System::LcmItems::VxlanmplsaclItems::ModuleItems>();
        }
        return module_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LcmItems::VxlanmplsaclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(module_items != nullptr)
    {
        _children["module-items"] = module_items;
    }

    return _children;
}

void System::LcmItems::VxlanmplsaclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LcmItems::VxlanmplsaclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LcmItems::VxlanmplsaclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module-items")
        return true;
    return false;
}

System::LcmItems::VxlanmplsaclItems::ModuleItems::ModuleItems()
    :
    vxlanmplsaclmodule_list(this, {"id"})
{

    yang_name = "module-items"; yang_parent_name = "vxlanmplsacl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LcmItems::VxlanmplsaclItems::ModuleItems::~ModuleItems()
{
}

bool System::LcmItems::VxlanmplsaclItems::ModuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vxlanmplsaclmodule_list.len(); index++)
    {
        if(vxlanmplsaclmodule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LcmItems::VxlanmplsaclItems::ModuleItems::has_operation() const
{
    for (std::size_t index=0; index<vxlanmplsaclmodule_list.len(); index++)
    {
        if(vxlanmplsaclmodule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LcmItems::VxlanmplsaclItems::ModuleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lcm-items/vxlanmplsacl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LcmItems::VxlanmplsaclItems::ModuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LcmItems::VxlanmplsaclItems::ModuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LcmItems::VxlanmplsaclItems::ModuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VxlanMplsAclModule-list")
    {
        auto ent_ = std::make_shared<System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList>();
        ent_->parent = this;
        vxlanmplsaclmodule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LcmItems::VxlanmplsaclItems::ModuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vxlanmplsaclmodule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::LcmItems::VxlanmplsaclItems::ModuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LcmItems::VxlanmplsaclItems::ModuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LcmItems::VxlanmplsaclItems::ModuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VxlanMplsAclModule-list")
        return true;
    return false;
}

System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList::VxlanMplsAclModuleList()
    :
    id{YType::uint16, "id"},
    profvxlanmpls{YType::enumeration, "profVxlanMpls"},
    profaclstats{YType::enumeration, "profAclStats"}
{

    yang_name = "VxlanMplsAclModule-list"; yang_parent_name = "module-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList::~VxlanMplsAclModuleList()
{
}

bool System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| profvxlanmpls.is_set
	|| profaclstats.is_set;
}

bool System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(profvxlanmpls.yfilter)
	|| ydk::is_set(profaclstats.yfilter);
}

std::string System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lcm-items/vxlanmplsacl-items/module-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VxlanMplsAclModule-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (profvxlanmpls.is_set || is_set(profvxlanmpls.yfilter)) leaf_name_data.push_back(profvxlanmpls.get_name_leafdata());
    if (profaclstats.is_set || is_set(profaclstats.yfilter)) leaf_name_data.push_back(profaclstats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profVxlanMpls")
    {
        profvxlanmpls = value;
        profvxlanmpls.value_namespace = name_space;
        profvxlanmpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profAclStats")
    {
        profaclstats = value;
        profaclstats.value_namespace = name_space;
        profaclstats.value_namespace_prefix = name_space_prefix;
    }
}

void System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "profVxlanMpls")
    {
        profvxlanmpls.yfilter = yfilter;
    }
    if(value_path == "profAclStats")
    {
        profaclstats.yfilter = yfilter;
    }
}

bool System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "profVxlanMpls" || name == "profAclStats")
        return true;
    return false;
}

System::LsnodeItems::LsnodeItems()
    :
    loosenode_list(this, {"id"})
{

    yang_name = "lsnode-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LsnodeItems::~LsnodeItems()
{
}

bool System::LsnodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<loosenode_list.len(); index++)
    {
        if(loosenode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LsnodeItems::has_operation() const
{
    for (std::size_t index=0; index<loosenode_list.len(); index++)
    {
        if(loosenode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LsnodeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LsnodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsnode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LsnodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LsnodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LooseNode-list")
    {
        auto ent_ = std::make_shared<System::LsnodeItems::LooseNodeList>();
        ent_->parent = this;
        loosenode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LsnodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : loosenode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::LsnodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LsnodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LsnodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LooseNode-list")
        return true;
    return false;
}

System::LsnodeItems::LooseNodeList::LooseNodeList()
    :
    id{YType::str, "id"},
    sysdesc{YType::str, "sysDesc"},
    sysname{YType::str, "sysName"},
    name{YType::str, "name"}
        ,
    rtfvepdeftoloosenode_items(std::make_shared<System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems>())
    , rtfvlsnodeatt_items(std::make_shared<System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems>())
    , rttunneltunneltoloosenode_items(std::make_shared<System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems>())
    , rslsnodetoif_items(std::make_shared<System::LsnodeItems::LooseNodeList::RslsNodeToIfItems>())
    , rslsattlink_items(std::make_shared<System::LsnodeItems::LooseNodeList::RslsAttLinkItems>())
{
    rtfvepdeftoloosenode_items->parent = this;
    rtfvlsnodeatt_items->parent = this;
    rttunneltunneltoloosenode_items->parent = this;
    rslsnodetoif_items->parent = this;
    rslsattlink_items->parent = this;

    yang_name = "LooseNode-list"; yang_parent_name = "lsnode-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::LsnodeItems::LooseNodeList::~LooseNodeList()
{
}

bool System::LsnodeItems::LooseNodeList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| sysdesc.is_set
	|| sysname.is_set
	|| name.is_set
	|| (rtfvepdeftoloosenode_items !=  nullptr && rtfvepdeftoloosenode_items->has_data())
	|| (rtfvlsnodeatt_items !=  nullptr && rtfvlsnodeatt_items->has_data())
	|| (rttunneltunneltoloosenode_items !=  nullptr && rttunneltunneltoloosenode_items->has_data())
	|| (rslsnodetoif_items !=  nullptr && rslsnodetoif_items->has_data())
	|| (rslsattlink_items !=  nullptr && rslsattlink_items->has_data());
}

bool System::LsnodeItems::LooseNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(sysdesc.yfilter)
	|| ydk::is_set(sysname.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rtfvepdeftoloosenode_items !=  nullptr && rtfvepdeftoloosenode_items->has_operation())
	|| (rtfvlsnodeatt_items !=  nullptr && rtfvlsnodeatt_items->has_operation())
	|| (rttunneltunneltoloosenode_items !=  nullptr && rttunneltunneltoloosenode_items->has_operation())
	|| (rslsnodetoif_items !=  nullptr && rslsnodetoif_items->has_operation())
	|| (rslsattlink_items !=  nullptr && rslsattlink_items->has_operation());
}

std::string System::LsnodeItems::LooseNodeList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/lsnode-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::LsnodeItems::LooseNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LooseNode-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LsnodeItems::LooseNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (sysdesc.is_set || is_set(sysdesc.yfilter)) leaf_name_data.push_back(sysdesc.get_name_leafdata());
    if (sysname.is_set || is_set(sysname.yfilter)) leaf_name_data.push_back(sysname.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LsnodeItems::LooseNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtfvEpDefToLooseNode-items")
    {
        if(rtfvepdeftoloosenode_items == nullptr)
        {
            rtfvepdeftoloosenode_items = std::make_shared<System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems>();
        }
        return rtfvepdeftoloosenode_items;
    }

    if(child_yang_name == "rtfvLsNodeAtt-items")
    {
        if(rtfvlsnodeatt_items == nullptr)
        {
            rtfvlsnodeatt_items = std::make_shared<System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems>();
        }
        return rtfvlsnodeatt_items;
    }

    if(child_yang_name == "rttunnelTunnelToLooseNode-items")
    {
        if(rttunneltunneltoloosenode_items == nullptr)
        {
            rttunneltunneltoloosenode_items = std::make_shared<System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems>();
        }
        return rttunneltunneltoloosenode_items;
    }

    if(child_yang_name == "rslsNodeToIf-items")
    {
        if(rslsnodetoif_items == nullptr)
        {
            rslsnodetoif_items = std::make_shared<System::LsnodeItems::LooseNodeList::RslsNodeToIfItems>();
        }
        return rslsnodetoif_items;
    }

    if(child_yang_name == "rslsAttLink-items")
    {
        if(rslsattlink_items == nullptr)
        {
            rslsattlink_items = std::make_shared<System::LsnodeItems::LooseNodeList::RslsAttLinkItems>();
        }
        return rslsattlink_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LsnodeItems::LooseNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtfvepdeftoloosenode_items != nullptr)
    {
        _children["rtfvEpDefToLooseNode-items"] = rtfvepdeftoloosenode_items;
    }

    if(rtfvlsnodeatt_items != nullptr)
    {
        _children["rtfvLsNodeAtt-items"] = rtfvlsnodeatt_items;
    }

    if(rttunneltunneltoloosenode_items != nullptr)
    {
        _children["rttunnelTunnelToLooseNode-items"] = rttunneltunneltoloosenode_items;
    }

    if(rslsnodetoif_items != nullptr)
    {
        _children["rslsNodeToIf-items"] = rslsnodetoif_items;
    }

    if(rslsattlink_items != nullptr)
    {
        _children["rslsAttLink-items"] = rslsattlink_items;
    }

    return _children;
}

void System::LsnodeItems::LooseNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysDesc")
    {
        sysdesc = value;
        sysdesc.value_namespace = name_space;
        sysdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysName")
    {
        sysname = value;
        sysname.value_namespace = name_space;
        sysname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::LsnodeItems::LooseNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "sysDesc")
    {
        sysdesc.yfilter = yfilter;
    }
    if(value_path == "sysName")
    {
        sysname.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::LsnodeItems::LooseNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtfvEpDefToLooseNode-items" || name == "rtfvLsNodeAtt-items" || name == "rttunnelTunnelToLooseNode-items" || name == "rslsNodeToIf-items" || name == "rslsAttLink-items" || name == "id" || name == "sysDesc" || name == "sysName" || name == "name")
        return true;
    return false;
}

System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtfvEpDefToLooseNodeItems()
    :
    rtfvepdeftoloosenode_list(this, {"tdn"})
{

    yang_name = "rtfvEpDefToLooseNode-items"; yang_parent_name = "LooseNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::~RtfvEpDefToLooseNodeItems()
{
}

bool System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvepdeftoloosenode_list.len(); index++)
    {
        if(rtfvepdeftoloosenode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvepdeftoloosenode_list.len(); index++)
    {
        if(rtfvepdeftoloosenode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvEpDefToLooseNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvEpDefToLooseNode-list")
    {
        auto ent_ = std::make_shared<System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList>();
        ent_->parent = this;
        rtfvepdeftoloosenode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvepdeftoloosenode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvEpDefToLooseNode-list")
        return true;
    return false;
}

System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::RtFvEpDefToLooseNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvEpDefToLooseNode-list"; yang_parent_name = "rtfvEpDefToLooseNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::~RtFvEpDefToLooseNodeList()
{
}

bool System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvEpDefToLooseNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtfvLsNodeAttItems()
    :
    rtfvlsnodeatt_list(this, {"tdn"})
{

    yang_name = "rtfvLsNodeAtt-items"; yang_parent_name = "LooseNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::~RtfvLsNodeAttItems()
{
}

bool System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvlsnodeatt_list.len(); index++)
    {
        if(rtfvlsnodeatt_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvlsnodeatt_list.len(); index++)
    {
        if(rtfvlsnodeatt_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvLsNodeAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvLsNodeAtt-list")
    {
        auto ent_ = std::make_shared<System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList>();
        ent_->parent = this;
        rtfvlsnodeatt_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvlsnodeatt_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvLsNodeAtt-list")
        return true;
    return false;
}

System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::RtFvLsNodeAttList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFvLsNodeAtt-list"; yang_parent_name = "rtfvLsNodeAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::~RtFvLsNodeAttList()
{
}

bool System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvLsNodeAtt-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RttunnelTunnelToLooseNodeItems()
    :
    rttunneltunneltoloosenode_list(this, {"tdn"})
{

    yang_name = "rttunnelTunnelToLooseNode-items"; yang_parent_name = "LooseNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::~RttunnelTunnelToLooseNodeItems()
{
}

bool System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rttunneltunneltoloosenode_list.len(); index++)
    {
        if(rttunneltunneltoloosenode_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::has_operation() const
{
    for (std::size_t index=0; index<rttunneltunneltoloosenode_list.len(); index++)
    {
        if(rttunneltunneltoloosenode_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rttunnelTunnelToLooseNode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtTunnelTunnelToLooseNode-list")
    {
        auto ent_ = std::make_shared<System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList>();
        ent_->parent = this;
        rttunneltunneltoloosenode_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rttunneltunneltoloosenode_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtTunnelTunnelToLooseNode-list")
        return true;
    return false;
}

System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::RtTunnelTunnelToLooseNodeList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtTunnelTunnelToLooseNode-list"; yang_parent_name = "rttunnelTunnelToLooseNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::~RtTunnelTunnelToLooseNodeList()
{
}

bool System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtTunnelTunnelToLooseNode-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RslsNodeToIfItems()
    :
    rslsnodetoif_list(this, {"tdn"})
{

    yang_name = "rslsNodeToIf-items"; yang_parent_name = "LooseNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::~RslsNodeToIfItems()
{
}

bool System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rslsnodetoif_list.len(); index++)
    {
        if(rslsnodetoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rslsnodetoif_list.len(); index++)
    {
        if(rslsnodetoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslsNodeToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RsLsNodeToIf-list")
    {
        auto ent_ = std::make_shared<System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList>();
        ent_->parent = this;
        rslsnodetoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rslsnodetoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RsLsNodeToIf-list")
        return true;
    return false;
}

System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::RsLsNodeToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RsLsNodeToIf-list"; yang_parent_name = "rslsNodeToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::~RsLsNodeToIfList()
{
}

bool System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RsLsNodeToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::LsnodeItems::LooseNodeList::RslsAttLinkItems::RslsAttLinkItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rslsAttLink-items"; yang_parent_name = "LooseNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RslsAttLinkItems::~RslsAttLinkItems()
{
}

bool System::LsnodeItems::LooseNodeList::RslsAttLinkItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::LsnodeItems::LooseNodeList::RslsAttLinkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::LsnodeItems::LooseNodeList::RslsAttLinkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rslsAttLink-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::LsnodeItems::LooseNodeList::RslsAttLinkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::LsnodeItems::LooseNodeList::RslsAttLinkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::LsnodeItems::LooseNodeList::RslsAttLinkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::LsnodeItems::LooseNodeList::RslsAttLinkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::LsnodeItems::LooseNodeList::RslsAttLinkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::LsnodeItems::LooseNodeList::RslsAttLinkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::PltfmItems::PltfmItems()
    :
    descr{YType::str, "descr"},
    profilemode{YType::enumeration, "profileMode"},
    profilefrontportmode{YType::enumeration, "profileFrontPortmode"},
    profiletuple{YType::enumeration, "profileTuple"},
    unicastsyslogthreshold{YType::uint16, "unicastSyslogThreshold"},
    lpmmaxlimit{YType::uint16, "lpmMaxLimit"},
    unicastmaxlimit{YType::uint16, "unicastMaxLimit"},
    multicastmaxlimit{YType::uint16, "multicastMaxLimit"},
    multicastservicereflectport{YType::uint32, "multicastServiceReflectPort"},
    multicastrpfcheckoptimization{YType::enumeration, "multicastRpfCheckOptimization"},
    highmulticastpriority{YType::enumeration, "highMulticastPriority"},
    pstatcfg{YType::enumeration, "pstatCfg"},
    multicastsyslogthreshold{YType::uint16, "multicastSyslogThreshold"},
    ipv6alpmcarvevalue{YType::uint16, "IPV6alpmCarveValue"},
    ipv6lpmmaxentries{YType::uint32, "ipv6LpmMaxEntries"},
    routingmode{YType::enumeration, "routingMode"},
    pclbalgo{YType::enumeration, "pcLbAlgo"},
    pclbres{YType::enumeration, "pcLbRes"},
    dot1qtunneltransit{YType::boolean, "dot1qTunnelTransit"},
    pcmplslblabelip{YType::enumeration, "pcMplsLbLabelIp"},
    pcmplslblabelonly{YType::enumeration, "pcMplsLbLabelOnly"},
    urpfstatus{YType::enumeration, "urpfStatus"},
    unknownunicastflood{YType::enumeration, "unknownUnicastFlood"},
    qosminbuffer{YType::enumeration, "qosMinBuffer"},
    switchingmode{YType::enumeration, "switchingMode"},
    switchingfabricspeed{YType::enumeration, "switchingFabricSpeed"},
    mcastnlb{YType::enumeration, "mcastNlb"},
    pbrskipselfip{YType::enumeration, "pbrSkipSelfIp"},
    mcastlpmmaxentries{YType::uint32, "mcastLpmMaxEntries"},
    systemfabricmode{YType::enumeration, "systemFabricMode"},
    switchmode{YType::enumeration, "switchMode"},
    mroutingperfmode{YType::enumeration, "mroutingPerfMode"},
    mroutingdisablesecrouteupd{YType::enumeration, "mroutingDisableSecRouteUpd"},
    mroutingdisablel2upd{YType::enumeration, "mroutingDisableL2Upd"},
    unicasttrace{YType::enumeration, "unicastTrace"},
    hwlouresthreshold{YType::uint16, "hwLouResThreshold"},
    mplsadjstatsmode{YType::enumeration, "mplsAdjStatsMode"},
    mplscfgecmpmode{YType::enumeration, "mplsCfgEcmpMode"},
    tcamsyslogthreshold{YType::uint16, "tcamSyslogThreshold"},
    mcastraclbridge{YType::enumeration, "mcastRaclBridge"}
        ,
    profile_items(std::make_shared<System::PltfmItems::ProfileItems>())
    , mod_items(std::make_shared<System::PltfmItems::ModItems>())
    , nve_items(std::make_shared<System::PltfmItems::NveItems>())
    , forwardingmode_items(std::make_shared<System::PltfmItems::ForwardingmodeItems>())
    , ecmp_items(std::make_shared<System::PltfmItems::EcmpItems>())
    , qos_items(std::make_shared<System::PltfmItems::QosItems>())
    , bd_items(std::make_shared<System::PltfmItems::BdItems>())
    , intf_items(std::make_shared<System::PltfmItems::IntfItems>())
    , loglevel_items(std::make_shared<System::PltfmItems::LoglevelItems>())
    , poweroffentity_items(std::make_shared<System::PltfmItems::PoweroffEntityItems>())
    , sysmemth_items(std::make_shared<System::PltfmItems::SysmemthItems>())
    , tcamregion_items(std::make_shared<System::PltfmItems::TcamRegionItems>())
    , latencymonitor_items(std::make_shared<System::PltfmItems::LatencymonitorItems>())
    , buffermonitor_items(std::make_shared<System::PltfmItems::BuffermonitorItems>())
    , pfcmmubuffer_items(std::make_shared<System::PltfmItems::PfcmmubufferItems>())
    , udf_items(std::make_shared<System::PltfmItems::UdfItems>())
{
    profile_items->parent = this;
    mod_items->parent = this;
    nve_items->parent = this;
    forwardingmode_items->parent = this;
    ecmp_items->parent = this;
    qos_items->parent = this;
    bd_items->parent = this;
    intf_items->parent = this;
    loglevel_items->parent = this;
    poweroffentity_items->parent = this;
    sysmemth_items->parent = this;
    tcamregion_items->parent = this;
    latencymonitor_items->parent = this;
    buffermonitor_items->parent = this;
    pfcmmubuffer_items->parent = this;
    udf_items->parent = this;

    yang_name = "pltfm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::~PltfmItems()
{
}

bool System::PltfmItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| profilemode.is_set
	|| profilefrontportmode.is_set
	|| profiletuple.is_set
	|| unicastsyslogthreshold.is_set
	|| lpmmaxlimit.is_set
	|| unicastmaxlimit.is_set
	|| multicastmaxlimit.is_set
	|| multicastservicereflectport.is_set
	|| multicastrpfcheckoptimization.is_set
	|| highmulticastpriority.is_set
	|| pstatcfg.is_set
	|| multicastsyslogthreshold.is_set
	|| ipv6alpmcarvevalue.is_set
	|| ipv6lpmmaxentries.is_set
	|| routingmode.is_set
	|| pclbalgo.is_set
	|| pclbres.is_set
	|| dot1qtunneltransit.is_set
	|| pcmplslblabelip.is_set
	|| pcmplslblabelonly.is_set
	|| urpfstatus.is_set
	|| unknownunicastflood.is_set
	|| qosminbuffer.is_set
	|| switchingmode.is_set
	|| switchingfabricspeed.is_set
	|| mcastnlb.is_set
	|| pbrskipselfip.is_set
	|| mcastlpmmaxentries.is_set
	|| systemfabricmode.is_set
	|| switchmode.is_set
	|| mroutingperfmode.is_set
	|| mroutingdisablesecrouteupd.is_set
	|| mroutingdisablel2upd.is_set
	|| unicasttrace.is_set
	|| hwlouresthreshold.is_set
	|| mplsadjstatsmode.is_set
	|| mplscfgecmpmode.is_set
	|| tcamsyslogthreshold.is_set
	|| mcastraclbridge.is_set
	|| (profile_items !=  nullptr && profile_items->has_data())
	|| (mod_items !=  nullptr && mod_items->has_data())
	|| (nve_items !=  nullptr && nve_items->has_data())
	|| (forwardingmode_items !=  nullptr && forwardingmode_items->has_data())
	|| (ecmp_items !=  nullptr && ecmp_items->has_data())
	|| (qos_items !=  nullptr && qos_items->has_data())
	|| (bd_items !=  nullptr && bd_items->has_data())
	|| (intf_items !=  nullptr && intf_items->has_data())
	|| (loglevel_items !=  nullptr && loglevel_items->has_data())
	|| (poweroffentity_items !=  nullptr && poweroffentity_items->has_data())
	|| (sysmemth_items !=  nullptr && sysmemth_items->has_data())
	|| (tcamregion_items !=  nullptr && tcamregion_items->has_data())
	|| (latencymonitor_items !=  nullptr && latencymonitor_items->has_data())
	|| (buffermonitor_items !=  nullptr && buffermonitor_items->has_data())
	|| (pfcmmubuffer_items !=  nullptr && pfcmmubuffer_items->has_data())
	|| (udf_items !=  nullptr && udf_items->has_data());
}

bool System::PltfmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(profilemode.yfilter)
	|| ydk::is_set(profilefrontportmode.yfilter)
	|| ydk::is_set(profiletuple.yfilter)
	|| ydk::is_set(unicastsyslogthreshold.yfilter)
	|| ydk::is_set(lpmmaxlimit.yfilter)
	|| ydk::is_set(unicastmaxlimit.yfilter)
	|| ydk::is_set(multicastmaxlimit.yfilter)
	|| ydk::is_set(multicastservicereflectport.yfilter)
	|| ydk::is_set(multicastrpfcheckoptimization.yfilter)
	|| ydk::is_set(highmulticastpriority.yfilter)
	|| ydk::is_set(pstatcfg.yfilter)
	|| ydk::is_set(multicastsyslogthreshold.yfilter)
	|| ydk::is_set(ipv6alpmcarvevalue.yfilter)
	|| ydk::is_set(ipv6lpmmaxentries.yfilter)
	|| ydk::is_set(routingmode.yfilter)
	|| ydk::is_set(pclbalgo.yfilter)
	|| ydk::is_set(pclbres.yfilter)
	|| ydk::is_set(dot1qtunneltransit.yfilter)
	|| ydk::is_set(pcmplslblabelip.yfilter)
	|| ydk::is_set(pcmplslblabelonly.yfilter)
	|| ydk::is_set(urpfstatus.yfilter)
	|| ydk::is_set(unknownunicastflood.yfilter)
	|| ydk::is_set(qosminbuffer.yfilter)
	|| ydk::is_set(switchingmode.yfilter)
	|| ydk::is_set(switchingfabricspeed.yfilter)
	|| ydk::is_set(mcastnlb.yfilter)
	|| ydk::is_set(pbrskipselfip.yfilter)
	|| ydk::is_set(mcastlpmmaxentries.yfilter)
	|| ydk::is_set(systemfabricmode.yfilter)
	|| ydk::is_set(switchmode.yfilter)
	|| ydk::is_set(mroutingperfmode.yfilter)
	|| ydk::is_set(mroutingdisablesecrouteupd.yfilter)
	|| ydk::is_set(mroutingdisablel2upd.yfilter)
	|| ydk::is_set(unicasttrace.yfilter)
	|| ydk::is_set(hwlouresthreshold.yfilter)
	|| ydk::is_set(mplsadjstatsmode.yfilter)
	|| ydk::is_set(mplscfgecmpmode.yfilter)
	|| ydk::is_set(tcamsyslogthreshold.yfilter)
	|| ydk::is_set(mcastraclbridge.yfilter)
	|| (profile_items !=  nullptr && profile_items->has_operation())
	|| (mod_items !=  nullptr && mod_items->has_operation())
	|| (nve_items !=  nullptr && nve_items->has_operation())
	|| (forwardingmode_items !=  nullptr && forwardingmode_items->has_operation())
	|| (ecmp_items !=  nullptr && ecmp_items->has_operation())
	|| (qos_items !=  nullptr && qos_items->has_operation())
	|| (bd_items !=  nullptr && bd_items->has_operation())
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (loglevel_items !=  nullptr && loglevel_items->has_operation())
	|| (poweroffentity_items !=  nullptr && poweroffentity_items->has_operation())
	|| (sysmemth_items !=  nullptr && sysmemth_items->has_operation())
	|| (tcamregion_items !=  nullptr && tcamregion_items->has_operation())
	|| (latencymonitor_items !=  nullptr && latencymonitor_items->has_operation())
	|| (buffermonitor_items !=  nullptr && buffermonitor_items->has_operation())
	|| (pfcmmubuffer_items !=  nullptr && pfcmmubuffer_items->has_operation())
	|| (udf_items !=  nullptr && udf_items->has_operation());
}

std::string System::PltfmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pltfm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (profilemode.is_set || is_set(profilemode.yfilter)) leaf_name_data.push_back(profilemode.get_name_leafdata());
    if (profilefrontportmode.is_set || is_set(profilefrontportmode.yfilter)) leaf_name_data.push_back(profilefrontportmode.get_name_leafdata());
    if (profiletuple.is_set || is_set(profiletuple.yfilter)) leaf_name_data.push_back(profiletuple.get_name_leafdata());
    if (unicastsyslogthreshold.is_set || is_set(unicastsyslogthreshold.yfilter)) leaf_name_data.push_back(unicastsyslogthreshold.get_name_leafdata());
    if (lpmmaxlimit.is_set || is_set(lpmmaxlimit.yfilter)) leaf_name_data.push_back(lpmmaxlimit.get_name_leafdata());
    if (unicastmaxlimit.is_set || is_set(unicastmaxlimit.yfilter)) leaf_name_data.push_back(unicastmaxlimit.get_name_leafdata());
    if (multicastmaxlimit.is_set || is_set(multicastmaxlimit.yfilter)) leaf_name_data.push_back(multicastmaxlimit.get_name_leafdata());
    if (multicastservicereflectport.is_set || is_set(multicastservicereflectport.yfilter)) leaf_name_data.push_back(multicastservicereflectport.get_name_leafdata());
    if (multicastrpfcheckoptimization.is_set || is_set(multicastrpfcheckoptimization.yfilter)) leaf_name_data.push_back(multicastrpfcheckoptimization.get_name_leafdata());
    if (highmulticastpriority.is_set || is_set(highmulticastpriority.yfilter)) leaf_name_data.push_back(highmulticastpriority.get_name_leafdata());
    if (pstatcfg.is_set || is_set(pstatcfg.yfilter)) leaf_name_data.push_back(pstatcfg.get_name_leafdata());
    if (multicastsyslogthreshold.is_set || is_set(multicastsyslogthreshold.yfilter)) leaf_name_data.push_back(multicastsyslogthreshold.get_name_leafdata());
    if (ipv6alpmcarvevalue.is_set || is_set(ipv6alpmcarvevalue.yfilter)) leaf_name_data.push_back(ipv6alpmcarvevalue.get_name_leafdata());
    if (ipv6lpmmaxentries.is_set || is_set(ipv6lpmmaxentries.yfilter)) leaf_name_data.push_back(ipv6lpmmaxentries.get_name_leafdata());
    if (routingmode.is_set || is_set(routingmode.yfilter)) leaf_name_data.push_back(routingmode.get_name_leafdata());
    if (pclbalgo.is_set || is_set(pclbalgo.yfilter)) leaf_name_data.push_back(pclbalgo.get_name_leafdata());
    if (pclbres.is_set || is_set(pclbres.yfilter)) leaf_name_data.push_back(pclbres.get_name_leafdata());
    if (dot1qtunneltransit.is_set || is_set(dot1qtunneltransit.yfilter)) leaf_name_data.push_back(dot1qtunneltransit.get_name_leafdata());
    if (pcmplslblabelip.is_set || is_set(pcmplslblabelip.yfilter)) leaf_name_data.push_back(pcmplslblabelip.get_name_leafdata());
    if (pcmplslblabelonly.is_set || is_set(pcmplslblabelonly.yfilter)) leaf_name_data.push_back(pcmplslblabelonly.get_name_leafdata());
    if (urpfstatus.is_set || is_set(urpfstatus.yfilter)) leaf_name_data.push_back(urpfstatus.get_name_leafdata());
    if (unknownunicastflood.is_set || is_set(unknownunicastflood.yfilter)) leaf_name_data.push_back(unknownunicastflood.get_name_leafdata());
    if (qosminbuffer.is_set || is_set(qosminbuffer.yfilter)) leaf_name_data.push_back(qosminbuffer.get_name_leafdata());
    if (switchingmode.is_set || is_set(switchingmode.yfilter)) leaf_name_data.push_back(switchingmode.get_name_leafdata());
    if (switchingfabricspeed.is_set || is_set(switchingfabricspeed.yfilter)) leaf_name_data.push_back(switchingfabricspeed.get_name_leafdata());
    if (mcastnlb.is_set || is_set(mcastnlb.yfilter)) leaf_name_data.push_back(mcastnlb.get_name_leafdata());
    if (pbrskipselfip.is_set || is_set(pbrskipselfip.yfilter)) leaf_name_data.push_back(pbrskipselfip.get_name_leafdata());
    if (mcastlpmmaxentries.is_set || is_set(mcastlpmmaxentries.yfilter)) leaf_name_data.push_back(mcastlpmmaxentries.get_name_leafdata());
    if (systemfabricmode.is_set || is_set(systemfabricmode.yfilter)) leaf_name_data.push_back(systemfabricmode.get_name_leafdata());
    if (switchmode.is_set || is_set(switchmode.yfilter)) leaf_name_data.push_back(switchmode.get_name_leafdata());
    if (mroutingperfmode.is_set || is_set(mroutingperfmode.yfilter)) leaf_name_data.push_back(mroutingperfmode.get_name_leafdata());
    if (mroutingdisablesecrouteupd.is_set || is_set(mroutingdisablesecrouteupd.yfilter)) leaf_name_data.push_back(mroutingdisablesecrouteupd.get_name_leafdata());
    if (mroutingdisablel2upd.is_set || is_set(mroutingdisablel2upd.yfilter)) leaf_name_data.push_back(mroutingdisablel2upd.get_name_leafdata());
    if (unicasttrace.is_set || is_set(unicasttrace.yfilter)) leaf_name_data.push_back(unicasttrace.get_name_leafdata());
    if (hwlouresthreshold.is_set || is_set(hwlouresthreshold.yfilter)) leaf_name_data.push_back(hwlouresthreshold.get_name_leafdata());
    if (mplsadjstatsmode.is_set || is_set(mplsadjstatsmode.yfilter)) leaf_name_data.push_back(mplsadjstatsmode.get_name_leafdata());
    if (mplscfgecmpmode.is_set || is_set(mplscfgecmpmode.yfilter)) leaf_name_data.push_back(mplscfgecmpmode.get_name_leafdata());
    if (tcamsyslogthreshold.is_set || is_set(tcamsyslogthreshold.yfilter)) leaf_name_data.push_back(tcamsyslogthreshold.get_name_leafdata());
    if (mcastraclbridge.is_set || is_set(mcastraclbridge.yfilter)) leaf_name_data.push_back(mcastraclbridge.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile-items")
    {
        if(profile_items == nullptr)
        {
            profile_items = std::make_shared<System::PltfmItems::ProfileItems>();
        }
        return profile_items;
    }

    if(child_yang_name == "mod-items")
    {
        if(mod_items == nullptr)
        {
            mod_items = std::make_shared<System::PltfmItems::ModItems>();
        }
        return mod_items;
    }

    if(child_yang_name == "nve-items")
    {
        if(nve_items == nullptr)
        {
            nve_items = std::make_shared<System::PltfmItems::NveItems>();
        }
        return nve_items;
    }

    if(child_yang_name == "forwardingmode-items")
    {
        if(forwardingmode_items == nullptr)
        {
            forwardingmode_items = std::make_shared<System::PltfmItems::ForwardingmodeItems>();
        }
        return forwardingmode_items;
    }

    if(child_yang_name == "ecmp-items")
    {
        if(ecmp_items == nullptr)
        {
            ecmp_items = std::make_shared<System::PltfmItems::EcmpItems>();
        }
        return ecmp_items;
    }

    if(child_yang_name == "qos-items")
    {
        if(qos_items == nullptr)
        {
            qos_items = std::make_shared<System::PltfmItems::QosItems>();
        }
        return qos_items;
    }

    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::PltfmItems::BdItems>();
        }
        return bd_items;
    }

    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::PltfmItems::IntfItems>();
        }
        return intf_items;
    }

    if(child_yang_name == "loglevel-items")
    {
        if(loglevel_items == nullptr)
        {
            loglevel_items = std::make_shared<System::PltfmItems::LoglevelItems>();
        }
        return loglevel_items;
    }

    if(child_yang_name == "poweroffEntity-items")
    {
        if(poweroffentity_items == nullptr)
        {
            poweroffentity_items = std::make_shared<System::PltfmItems::PoweroffEntityItems>();
        }
        return poweroffentity_items;
    }

    if(child_yang_name == "sysmemth-items")
    {
        if(sysmemth_items == nullptr)
        {
            sysmemth_items = std::make_shared<System::PltfmItems::SysmemthItems>();
        }
        return sysmemth_items;
    }

    if(child_yang_name == "tcamRegion-items")
    {
        if(tcamregion_items == nullptr)
        {
            tcamregion_items = std::make_shared<System::PltfmItems::TcamRegionItems>();
        }
        return tcamregion_items;
    }

    if(child_yang_name == "latencymonitor-items")
    {
        if(latencymonitor_items == nullptr)
        {
            latencymonitor_items = std::make_shared<System::PltfmItems::LatencymonitorItems>();
        }
        return latencymonitor_items;
    }

    if(child_yang_name == "buffermonitor-items")
    {
        if(buffermonitor_items == nullptr)
        {
            buffermonitor_items = std::make_shared<System::PltfmItems::BuffermonitorItems>();
        }
        return buffermonitor_items;
    }

    if(child_yang_name == "pfcmmubuffer-items")
    {
        if(pfcmmubuffer_items == nullptr)
        {
            pfcmmubuffer_items = std::make_shared<System::PltfmItems::PfcmmubufferItems>();
        }
        return pfcmmubuffer_items;
    }

    if(child_yang_name == "udf-items")
    {
        if(udf_items == nullptr)
        {
            udf_items = std::make_shared<System::PltfmItems::UdfItems>();
        }
        return udf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(profile_items != nullptr)
    {
        _children["profile-items"] = profile_items;
    }

    if(mod_items != nullptr)
    {
        _children["mod-items"] = mod_items;
    }

    if(nve_items != nullptr)
    {
        _children["nve-items"] = nve_items;
    }

    if(forwardingmode_items != nullptr)
    {
        _children["forwardingmode-items"] = forwardingmode_items;
    }

    if(ecmp_items != nullptr)
    {
        _children["ecmp-items"] = ecmp_items;
    }

    if(qos_items != nullptr)
    {
        _children["qos-items"] = qos_items;
    }

    if(bd_items != nullptr)
    {
        _children["bd-items"] = bd_items;
    }

    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(loglevel_items != nullptr)
    {
        _children["loglevel-items"] = loglevel_items;
    }

    if(poweroffentity_items != nullptr)
    {
        _children["poweroffEntity-items"] = poweroffentity_items;
    }

    if(sysmemth_items != nullptr)
    {
        _children["sysmemth-items"] = sysmemth_items;
    }

    if(tcamregion_items != nullptr)
    {
        _children["tcamRegion-items"] = tcamregion_items;
    }

    if(latencymonitor_items != nullptr)
    {
        _children["latencymonitor-items"] = latencymonitor_items;
    }

    if(buffermonitor_items != nullptr)
    {
        _children["buffermonitor-items"] = buffermonitor_items;
    }

    if(pfcmmubuffer_items != nullptr)
    {
        _children["pfcmmubuffer-items"] = pfcmmubuffer_items;
    }

    if(udf_items != nullptr)
    {
        _children["udf-items"] = udf_items;
    }

    return _children;
}

void System::PltfmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profileMode")
    {
        profilemode = value;
        profilemode.value_namespace = name_space;
        profilemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profileFrontPortmode")
    {
        profilefrontportmode = value;
        profilefrontportmode.value_namespace = name_space;
        profilefrontportmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profileTuple")
    {
        profiletuple = value;
        profiletuple.value_namespace = name_space;
        profiletuple.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicastSyslogThreshold")
    {
        unicastsyslogthreshold = value;
        unicastsyslogthreshold.value_namespace = name_space;
        unicastsyslogthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lpmMaxLimit")
    {
        lpmmaxlimit = value;
        lpmmaxlimit.value_namespace = name_space;
        lpmmaxlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicastMaxLimit")
    {
        unicastmaxlimit = value;
        unicastmaxlimit.value_namespace = name_space;
        unicastmaxlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastMaxLimit")
    {
        multicastmaxlimit = value;
        multicastmaxlimit.value_namespace = name_space;
        multicastmaxlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastServiceReflectPort")
    {
        multicastservicereflectport = value;
        multicastservicereflectport.value_namespace = name_space;
        multicastservicereflectport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastRpfCheckOptimization")
    {
        multicastrpfcheckoptimization = value;
        multicastrpfcheckoptimization.value_namespace = name_space;
        multicastrpfcheckoptimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highMulticastPriority")
    {
        highmulticastpriority = value;
        highmulticastpriority.value_namespace = name_space;
        highmulticastpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pstatCfg")
    {
        pstatcfg = value;
        pstatcfg.value_namespace = name_space;
        pstatcfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicastSyslogThreshold")
    {
        multicastsyslogthreshold = value;
        multicastsyslogthreshold.value_namespace = name_space;
        multicastsyslogthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "IPV6alpmCarveValue")
    {
        ipv6alpmcarvevalue = value;
        ipv6alpmcarvevalue.value_namespace = name_space;
        ipv6alpmcarvevalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6LpmMaxEntries")
    {
        ipv6lpmmaxentries = value;
        ipv6lpmmaxentries.value_namespace = name_space;
        ipv6lpmmaxentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routingMode")
    {
        routingmode = value;
        routingmode.value_namespace = name_space;
        routingmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcLbAlgo")
    {
        pclbalgo = value;
        pclbalgo.value_namespace = name_space;
        pclbalgo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcLbRes")
    {
        pclbres = value;
        pclbres.value_namespace = name_space;
        pclbres.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qTunnelTransit")
    {
        dot1qtunneltransit = value;
        dot1qtunneltransit.value_namespace = name_space;
        dot1qtunneltransit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcMplsLbLabelIp")
    {
        pcmplslblabelip = value;
        pcmplslblabelip.value_namespace = name_space;
        pcmplslblabelip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcMplsLbLabelOnly")
    {
        pcmplslblabelonly = value;
        pcmplslblabelonly.value_namespace = name_space;
        pcmplslblabelonly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urpfStatus")
    {
        urpfstatus = value;
        urpfstatus.value_namespace = name_space;
        urpfstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknownUnicastFlood")
    {
        unknownunicastflood = value;
        unknownunicastflood.value_namespace = name_space;
        unknownunicastflood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosMinBuffer")
    {
        qosminbuffer = value;
        qosminbuffer.value_namespace = name_space;
        qosminbuffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchingMode")
    {
        switchingmode = value;
        switchingmode.value_namespace = name_space;
        switchingmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchingFabricSpeed")
    {
        switchingfabricspeed = value;
        switchingfabricspeed.value_namespace = name_space;
        switchingfabricspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastNlb")
    {
        mcastnlb = value;
        mcastnlb.value_namespace = name_space;
        mcastnlb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbrSkipSelfIp")
    {
        pbrskipselfip = value;
        pbrskipselfip.value_namespace = name_space;
        pbrskipselfip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastLpmMaxEntries")
    {
        mcastlpmmaxentries = value;
        mcastlpmmaxentries.value_namespace = name_space;
        mcastlpmmaxentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "systemFabricMode")
    {
        systemfabricmode = value;
        systemfabricmode.value_namespace = name_space;
        systemfabricmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchMode")
    {
        switchmode = value;
        switchmode.value_namespace = name_space;
        switchmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mroutingPerfMode")
    {
        mroutingperfmode = value;
        mroutingperfmode.value_namespace = name_space;
        mroutingperfmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mroutingDisableSecRouteUpd")
    {
        mroutingdisablesecrouteupd = value;
        mroutingdisablesecrouteupd.value_namespace = name_space;
        mroutingdisablesecrouteupd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mroutingDisableL2Upd")
    {
        mroutingdisablel2upd = value;
        mroutingdisablel2upd.value_namespace = name_space;
        mroutingdisablel2upd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicastTrace")
    {
        unicasttrace = value;
        unicasttrace.value_namespace = name_space;
        unicasttrace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwLouResThreshold")
    {
        hwlouresthreshold = value;
        hwlouresthreshold.value_namespace = name_space;
        hwlouresthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsAdjStatsMode")
    {
        mplsadjstatsmode = value;
        mplsadjstatsmode.value_namespace = name_space;
        mplsadjstatsmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsCfgEcmpMode")
    {
        mplscfgecmpmode = value;
        mplscfgecmpmode.value_namespace = name_space;
        mplscfgecmpmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcamSyslogThreshold")
    {
        tcamsyslogthreshold = value;
        tcamsyslogthreshold.value_namespace = name_space;
        tcamsyslogthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcastRaclBridge")
    {
        mcastraclbridge = value;
        mcastraclbridge.value_namespace = name_space;
        mcastraclbridge.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "profileMode")
    {
        profilemode.yfilter = yfilter;
    }
    if(value_path == "profileFrontPortmode")
    {
        profilefrontportmode.yfilter = yfilter;
    }
    if(value_path == "profileTuple")
    {
        profiletuple.yfilter = yfilter;
    }
    if(value_path == "unicastSyslogThreshold")
    {
        unicastsyslogthreshold.yfilter = yfilter;
    }
    if(value_path == "lpmMaxLimit")
    {
        lpmmaxlimit.yfilter = yfilter;
    }
    if(value_path == "unicastMaxLimit")
    {
        unicastmaxlimit.yfilter = yfilter;
    }
    if(value_path == "multicastMaxLimit")
    {
        multicastmaxlimit.yfilter = yfilter;
    }
    if(value_path == "multicastServiceReflectPort")
    {
        multicastservicereflectport.yfilter = yfilter;
    }
    if(value_path == "multicastRpfCheckOptimization")
    {
        multicastrpfcheckoptimization.yfilter = yfilter;
    }
    if(value_path == "highMulticastPriority")
    {
        highmulticastpriority.yfilter = yfilter;
    }
    if(value_path == "pstatCfg")
    {
        pstatcfg.yfilter = yfilter;
    }
    if(value_path == "multicastSyslogThreshold")
    {
        multicastsyslogthreshold.yfilter = yfilter;
    }
    if(value_path == "IPV6alpmCarveValue")
    {
        ipv6alpmcarvevalue.yfilter = yfilter;
    }
    if(value_path == "ipv6LpmMaxEntries")
    {
        ipv6lpmmaxentries.yfilter = yfilter;
    }
    if(value_path == "routingMode")
    {
        routingmode.yfilter = yfilter;
    }
    if(value_path == "pcLbAlgo")
    {
        pclbalgo.yfilter = yfilter;
    }
    if(value_path == "pcLbRes")
    {
        pclbres.yfilter = yfilter;
    }
    if(value_path == "dot1qTunnelTransit")
    {
        dot1qtunneltransit.yfilter = yfilter;
    }
    if(value_path == "pcMplsLbLabelIp")
    {
        pcmplslblabelip.yfilter = yfilter;
    }
    if(value_path == "pcMplsLbLabelOnly")
    {
        pcmplslblabelonly.yfilter = yfilter;
    }
    if(value_path == "urpfStatus")
    {
        urpfstatus.yfilter = yfilter;
    }
    if(value_path == "unknownUnicastFlood")
    {
        unknownunicastflood.yfilter = yfilter;
    }
    if(value_path == "qosMinBuffer")
    {
        qosminbuffer.yfilter = yfilter;
    }
    if(value_path == "switchingMode")
    {
        switchingmode.yfilter = yfilter;
    }
    if(value_path == "switchingFabricSpeed")
    {
        switchingfabricspeed.yfilter = yfilter;
    }
    if(value_path == "mcastNlb")
    {
        mcastnlb.yfilter = yfilter;
    }
    if(value_path == "pbrSkipSelfIp")
    {
        pbrskipselfip.yfilter = yfilter;
    }
    if(value_path == "mcastLpmMaxEntries")
    {
        mcastlpmmaxentries.yfilter = yfilter;
    }
    if(value_path == "systemFabricMode")
    {
        systemfabricmode.yfilter = yfilter;
    }
    if(value_path == "switchMode")
    {
        switchmode.yfilter = yfilter;
    }
    if(value_path == "mroutingPerfMode")
    {
        mroutingperfmode.yfilter = yfilter;
    }
    if(value_path == "mroutingDisableSecRouteUpd")
    {
        mroutingdisablesecrouteupd.yfilter = yfilter;
    }
    if(value_path == "mroutingDisableL2Upd")
    {
        mroutingdisablel2upd.yfilter = yfilter;
    }
    if(value_path == "unicastTrace")
    {
        unicasttrace.yfilter = yfilter;
    }
    if(value_path == "hwLouResThreshold")
    {
        hwlouresthreshold.yfilter = yfilter;
    }
    if(value_path == "mplsAdjStatsMode")
    {
        mplsadjstatsmode.yfilter = yfilter;
    }
    if(value_path == "mplsCfgEcmpMode")
    {
        mplscfgecmpmode.yfilter = yfilter;
    }
    if(value_path == "tcamSyslogThreshold")
    {
        tcamsyslogthreshold.yfilter = yfilter;
    }
    if(value_path == "mcastRaclBridge")
    {
        mcastraclbridge.yfilter = yfilter;
    }
}

bool System::PltfmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-items" || name == "mod-items" || name == "nve-items" || name == "forwardingmode-items" || name == "ecmp-items" || name == "qos-items" || name == "bd-items" || name == "intf-items" || name == "loglevel-items" || name == "poweroffEntity-items" || name == "sysmemth-items" || name == "tcamRegion-items" || name == "latencymonitor-items" || name == "buffermonitor-items" || name == "pfcmmubuffer-items" || name == "udf-items" || name == "descr" || name == "profileMode" || name == "profileFrontPortmode" || name == "profileTuple" || name == "unicastSyslogThreshold" || name == "lpmMaxLimit" || name == "unicastMaxLimit" || name == "multicastMaxLimit" || name == "multicastServiceReflectPort" || name == "multicastRpfCheckOptimization" || name == "highMulticastPriority" || name == "pstatCfg" || name == "multicastSyslogThreshold" || name == "IPV6alpmCarveValue" || name == "ipv6LpmMaxEntries" || name == "routingMode" || name == "pcLbAlgo" || name == "pcLbRes" || name == "dot1qTunnelTransit" || name == "pcMplsLbLabelIp" || name == "pcMplsLbLabelOnly" || name == "urpfStatus" || name == "unknownUnicastFlood" || name == "qosMinBuffer" || name == "switchingMode" || name == "switchingFabricSpeed" || name == "mcastNlb" || name == "pbrSkipSelfIp" || name == "mcastLpmMaxEntries" || name == "systemFabricMode" || name == "switchMode" || name == "mroutingPerfMode" || name == "mroutingDisableSecRouteUpd" || name == "mroutingDisableL2Upd" || name == "unicastTrace" || name == "hwLouResThreshold" || name == "mplsAdjStatsMode" || name == "mplsCfgEcmpMode" || name == "tcamSyslogThreshold" || name == "mcastRaclBridge")
        return true;
    return false;
}

System::PltfmItems::ProfileItems::ProfileItems()
    :
    spanbufferthresh{YType::uint8, "spanBufferThresh"},
    qosgrp0bufferthresh{YType::uint8, "qosGrp0BufferThresh"},
    qosgrp1bufferthresh{YType::uint8, "qosGrp1BufferThresh"},
    qosgrp2bufferthresh{YType::uint8, "qosGrp2BufferThresh"},
    qosgrp3bufferthresh{YType::uint8, "qosGrp3BufferThresh"},
    qosgrp4bufferthresh{YType::uint8, "qosGrp4BufferThresh"}
{

    yang_name = "profile-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::ProfileItems::~ProfileItems()
{
}

bool System::PltfmItems::ProfileItems::has_data() const
{
    if (is_presence_container) return true;
    return spanbufferthresh.is_set
	|| qosgrp0bufferthresh.is_set
	|| qosgrp1bufferthresh.is_set
	|| qosgrp2bufferthresh.is_set
	|| qosgrp3bufferthresh.is_set
	|| qosgrp4bufferthresh.is_set;
}

bool System::PltfmItems::ProfileItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spanbufferthresh.yfilter)
	|| ydk::is_set(qosgrp0bufferthresh.yfilter)
	|| ydk::is_set(qosgrp1bufferthresh.yfilter)
	|| ydk::is_set(qosgrp2bufferthresh.yfilter)
	|| ydk::is_set(qosgrp3bufferthresh.yfilter)
	|| ydk::is_set(qosgrp4bufferthresh.yfilter);
}

std::string System::PltfmItems::ProfileItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::ProfileItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ProfileItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spanbufferthresh.is_set || is_set(spanbufferthresh.yfilter)) leaf_name_data.push_back(spanbufferthresh.get_name_leafdata());
    if (qosgrp0bufferthresh.is_set || is_set(qosgrp0bufferthresh.yfilter)) leaf_name_data.push_back(qosgrp0bufferthresh.get_name_leafdata());
    if (qosgrp1bufferthresh.is_set || is_set(qosgrp1bufferthresh.yfilter)) leaf_name_data.push_back(qosgrp1bufferthresh.get_name_leafdata());
    if (qosgrp2bufferthresh.is_set || is_set(qosgrp2bufferthresh.yfilter)) leaf_name_data.push_back(qosgrp2bufferthresh.get_name_leafdata());
    if (qosgrp3bufferthresh.is_set || is_set(qosgrp3bufferthresh.yfilter)) leaf_name_data.push_back(qosgrp3bufferthresh.get_name_leafdata());
    if (qosgrp4bufferthresh.is_set || is_set(qosgrp4bufferthresh.yfilter)) leaf_name_data.push_back(qosgrp4bufferthresh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ProfileItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ProfileItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::ProfileItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spanBufferThresh")
    {
        spanbufferthresh = value;
        spanbufferthresh.value_namespace = name_space;
        spanbufferthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosGrp0BufferThresh")
    {
        qosgrp0bufferthresh = value;
        qosgrp0bufferthresh.value_namespace = name_space;
        qosgrp0bufferthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosGrp1BufferThresh")
    {
        qosgrp1bufferthresh = value;
        qosgrp1bufferthresh.value_namespace = name_space;
        qosgrp1bufferthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosGrp2BufferThresh")
    {
        qosgrp2bufferthresh = value;
        qosgrp2bufferthresh.value_namespace = name_space;
        qosgrp2bufferthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosGrp3BufferThresh")
    {
        qosgrp3bufferthresh = value;
        qosgrp3bufferthresh.value_namespace = name_space;
        qosgrp3bufferthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosGrp4BufferThresh")
    {
        qosgrp4bufferthresh = value;
        qosgrp4bufferthresh.value_namespace = name_space;
        qosgrp4bufferthresh.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::ProfileItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spanBufferThresh")
    {
        spanbufferthresh.yfilter = yfilter;
    }
    if(value_path == "qosGrp0BufferThresh")
    {
        qosgrp0bufferthresh.yfilter = yfilter;
    }
    if(value_path == "qosGrp1BufferThresh")
    {
        qosgrp1bufferthresh.yfilter = yfilter;
    }
    if(value_path == "qosGrp2BufferThresh")
    {
        qosgrp2bufferthresh.yfilter = yfilter;
    }
    if(value_path == "qosGrp3BufferThresh")
    {
        qosgrp3bufferthresh.yfilter = yfilter;
    }
    if(value_path == "qosGrp4BufferThresh")
    {
        qosgrp4bufferthresh.yfilter = yfilter;
    }
}

bool System::PltfmItems::ProfileItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spanBufferThresh" || name == "qosGrp0BufferThresh" || name == "qosGrp1BufferThresh" || name == "qosGrp2BufferThresh" || name == "qosGrp3BufferThresh" || name == "qosGrp4BufferThresh")
        return true;
    return false;
}

System::PltfmItems::ModItems::ModItems()
    :
    tcamstatsmodule_list(this, {"module"})
{

    yang_name = "mod-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::ModItems::~ModItems()
{
}

bool System::PltfmItems::ModItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcamstatsmodule_list.len(); index++)
    {
        if(tcamstatsmodule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::ModItems::has_operation() const
{
    for (std::size_t index=0; index<tcamstatsmodule_list.len(); index++)
    {
        if(tcamstatsmodule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::ModItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::ModItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mod-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ModItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ModItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TcamStatsModule-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList>();
        ent_->parent = this;
        tcamstatsmodule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ModItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tcamstatsmodule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::ModItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::ModItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::ModItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TcamStatsModule-list")
        return true;
    return false;
}

System::PltfmItems::ModItems::TcamStatsModuleList::TcamStatsModuleList()
    :
    module{YType::uint16, "module"}
        ,
    inst_items(std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems>())
{
    inst_items->parent = this;

    yang_name = "TcamStatsModule-list"; yang_parent_name = "mod-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::ModItems::TcamStatsModuleList::~TcamStatsModuleList()
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::has_data() const
{
    if (is_presence_container) return true;
    return module.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::PltfmItems::ModItems::TcamStatsModuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/mod-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::ModItems::TcamStatsModuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TcamStatsModule-list";
    ADD_KEY_TOKEN(module, "module");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ModItems::TcamStatsModuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ModItems::TcamStatsModuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ModItems::TcamStatsModuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::PltfmItems::ModItems::TcamStatsModuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::ModItems::TcamStatsModuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "module")
        return true;
    return false;
}


}
}

