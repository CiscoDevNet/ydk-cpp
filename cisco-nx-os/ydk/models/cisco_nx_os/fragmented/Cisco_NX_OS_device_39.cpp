
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_39.hpp"
#include "Cisco_NX_OS_device_40.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "ExtChCardSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "PsuSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    , spfan_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems>())
{
    ej_items->parent = this;
    fan_items->parent = this;
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
    if(name == "ej-items" || name == "fan-items" || name == "spfan-items" || name == "operSt" || name == "fanName" || name == "vdrId" || name == "powerActualDraw" || name == "powerAllocated" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "FtSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    , fanzone_items(std::make_shared<System::OpsItems::FanzoneItems>())
    , psgp_items(std::make_shared<System::OpsItems::PsgpItems>())
    , slot_items(std::make_shared<System::OpsItems::SlotItems>())
{
    consolep_items->parent = this;
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
	|| (fanzone_items !=  nullptr && fanzone_items->has_data())
	|| (psgp_items !=  nullptr && psgp_items->has_data())
	|| (slot_items !=  nullptr && slot_items->has_data());
}

bool System::OpsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (consolep_items !=  nullptr && consolep_items->has_operation())
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
    if(name == "consolep-items" || name == "fanzone-items" || name == "psgp-items" || name == "slot-items" || name == "name")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rspsuInstPolCons-items"; yang_parent_name = "psgp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::OpsItems::PsgpItems::RspsuInstPolConsItems::~RspsuInstPolConsItems()
{
}

bool System::OpsItems::PsgpItems::RspsuInstPolConsItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::OpsItems::PsgpItems::RspsuInstPolConsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::OpsItems::PsgpItems::RspsuInstPolConsItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::OpsItems::PsgpItems::RspsuInstPolConsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvEpDefToLooseNode-list"; yang_parent_name = "rtfvEpDefToLooseNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::~RtFvEpDefToLooseNodeList()
{
}

bool System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvLsNodeAtt-list"; yang_parent_name = "rtfvLsNodeAtt-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::~RtFvLsNodeAttList()
{
}

bool System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtTunnelTunnelToLooseNode-list"; yang_parent_name = "rttunnelTunnelToLooseNode-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::~RtTunnelTunnelToLooseNodeList()
{
}

bool System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RsLsNodeToIf-list"; yang_parent_name = "rslsNodeToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::~RsLsNodeToIfList()
{
}

bool System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::LsnodeItems::LooseNodeList::RslsAttLinkItems::RslsAttLinkItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rslsAttLink-items"; yang_parent_name = "LooseNode-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::LsnodeItems::LooseNodeList::RslsAttLinkItems::~RslsAttLinkItems()
{
}

bool System::LsnodeItems::LooseNodeList::RslsAttLinkItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::LsnodeItems::LooseNodeList::RslsAttLinkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

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
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::LsnodeItems::LooseNodeList::RslsAttLinkItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::LsnodeItems::LooseNodeList::RslsAttLinkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PltfmItems::PltfmItems()
    :
    descr{YType::str, "descr"},
    profilemode{YType::enumeration, "profileMode"},
    profiletuple{YType::enumeration, "profileTuple"},
    unicastsyslogthreshold{YType::uint16, "unicastSyslogThreshold"},
    lpmmaxlimit{YType::uint16, "lpmMaxLimit"},
    unicastmaxlimit{YType::uint16, "unicastMaxLimit"},
    multicastmaxlimit{YType::uint16, "multicastMaxLimit"},
    multicastservicereflectport{YType::uint32, "multicastServiceReflectPort"},
    pstatcfg{YType::enumeration, "pstatCfg"},
    multicastsyslogthreshold{YType::uint16, "multicastSyslogThreshold"},
    ipv6alpmcarvevalue{YType::uint16, "IPV6alpmCarveValue"},
    routingmode{YType::enumeration, "routingMode"},
    pclbalgo{YType::enumeration, "pcLbAlgo"},
    urpfstatus{YType::enumeration, "urpfStatus"},
    qosminbuffer{YType::enumeration, "qosMinBuffer"},
    switchingmode{YType::enumeration, "switchingMode"},
    switchingfabricspeed{YType::enumeration, "switchingFabricSpeed"}
        ,
    mod_items(std::make_shared<System::PltfmItems::ModItems>())
    , nve_items(std::make_shared<System::PltfmItems::NveItems>())
    , bd_items(std::make_shared<System::PltfmItems::BdItems>())
    , intf_items(std::make_shared<System::PltfmItems::IntfItems>())
    , poweroffentity_items(std::make_shared<System::PltfmItems::PoweroffEntityItems>())
    , tcamregion_items(std::make_shared<System::PltfmItems::TcamRegionItems>())
    , latencymonitor_items(std::make_shared<System::PltfmItems::LatencymonitorItems>())
    , buffermonitor_items(std::make_shared<System::PltfmItems::BuffermonitorItems>())
    , pfcmmubuffer_items(std::make_shared<System::PltfmItems::PfcmmubufferItems>())
{
    mod_items->parent = this;
    nve_items->parent = this;
    bd_items->parent = this;
    intf_items->parent = this;
    poweroffentity_items->parent = this;
    tcamregion_items->parent = this;
    latencymonitor_items->parent = this;
    buffermonitor_items->parent = this;
    pfcmmubuffer_items->parent = this;

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
	|| profiletuple.is_set
	|| unicastsyslogthreshold.is_set
	|| lpmmaxlimit.is_set
	|| unicastmaxlimit.is_set
	|| multicastmaxlimit.is_set
	|| multicastservicereflectport.is_set
	|| pstatcfg.is_set
	|| multicastsyslogthreshold.is_set
	|| ipv6alpmcarvevalue.is_set
	|| routingmode.is_set
	|| pclbalgo.is_set
	|| urpfstatus.is_set
	|| qosminbuffer.is_set
	|| switchingmode.is_set
	|| switchingfabricspeed.is_set
	|| (mod_items !=  nullptr && mod_items->has_data())
	|| (nve_items !=  nullptr && nve_items->has_data())
	|| (bd_items !=  nullptr && bd_items->has_data())
	|| (intf_items !=  nullptr && intf_items->has_data())
	|| (poweroffentity_items !=  nullptr && poweroffentity_items->has_data())
	|| (tcamregion_items !=  nullptr && tcamregion_items->has_data())
	|| (latencymonitor_items !=  nullptr && latencymonitor_items->has_data())
	|| (buffermonitor_items !=  nullptr && buffermonitor_items->has_data())
	|| (pfcmmubuffer_items !=  nullptr && pfcmmubuffer_items->has_data());
}

bool System::PltfmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(profilemode.yfilter)
	|| ydk::is_set(profiletuple.yfilter)
	|| ydk::is_set(unicastsyslogthreshold.yfilter)
	|| ydk::is_set(lpmmaxlimit.yfilter)
	|| ydk::is_set(unicastmaxlimit.yfilter)
	|| ydk::is_set(multicastmaxlimit.yfilter)
	|| ydk::is_set(multicastservicereflectport.yfilter)
	|| ydk::is_set(pstatcfg.yfilter)
	|| ydk::is_set(multicastsyslogthreshold.yfilter)
	|| ydk::is_set(ipv6alpmcarvevalue.yfilter)
	|| ydk::is_set(routingmode.yfilter)
	|| ydk::is_set(pclbalgo.yfilter)
	|| ydk::is_set(urpfstatus.yfilter)
	|| ydk::is_set(qosminbuffer.yfilter)
	|| ydk::is_set(switchingmode.yfilter)
	|| ydk::is_set(switchingfabricspeed.yfilter)
	|| (mod_items !=  nullptr && mod_items->has_operation())
	|| (nve_items !=  nullptr && nve_items->has_operation())
	|| (bd_items !=  nullptr && bd_items->has_operation())
	|| (intf_items !=  nullptr && intf_items->has_operation())
	|| (poweroffentity_items !=  nullptr && poweroffentity_items->has_operation())
	|| (tcamregion_items !=  nullptr && tcamregion_items->has_operation())
	|| (latencymonitor_items !=  nullptr && latencymonitor_items->has_operation())
	|| (buffermonitor_items !=  nullptr && buffermonitor_items->has_operation())
	|| (pfcmmubuffer_items !=  nullptr && pfcmmubuffer_items->has_operation());
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
    if (profiletuple.is_set || is_set(profiletuple.yfilter)) leaf_name_data.push_back(profiletuple.get_name_leafdata());
    if (unicastsyslogthreshold.is_set || is_set(unicastsyslogthreshold.yfilter)) leaf_name_data.push_back(unicastsyslogthreshold.get_name_leafdata());
    if (lpmmaxlimit.is_set || is_set(lpmmaxlimit.yfilter)) leaf_name_data.push_back(lpmmaxlimit.get_name_leafdata());
    if (unicastmaxlimit.is_set || is_set(unicastmaxlimit.yfilter)) leaf_name_data.push_back(unicastmaxlimit.get_name_leafdata());
    if (multicastmaxlimit.is_set || is_set(multicastmaxlimit.yfilter)) leaf_name_data.push_back(multicastmaxlimit.get_name_leafdata());
    if (multicastservicereflectport.is_set || is_set(multicastservicereflectport.yfilter)) leaf_name_data.push_back(multicastservicereflectport.get_name_leafdata());
    if (pstatcfg.is_set || is_set(pstatcfg.yfilter)) leaf_name_data.push_back(pstatcfg.get_name_leafdata());
    if (multicastsyslogthreshold.is_set || is_set(multicastsyslogthreshold.yfilter)) leaf_name_data.push_back(multicastsyslogthreshold.get_name_leafdata());
    if (ipv6alpmcarvevalue.is_set || is_set(ipv6alpmcarvevalue.yfilter)) leaf_name_data.push_back(ipv6alpmcarvevalue.get_name_leafdata());
    if (routingmode.is_set || is_set(routingmode.yfilter)) leaf_name_data.push_back(routingmode.get_name_leafdata());
    if (pclbalgo.is_set || is_set(pclbalgo.yfilter)) leaf_name_data.push_back(pclbalgo.get_name_leafdata());
    if (urpfstatus.is_set || is_set(urpfstatus.yfilter)) leaf_name_data.push_back(urpfstatus.get_name_leafdata());
    if (qosminbuffer.is_set || is_set(qosminbuffer.yfilter)) leaf_name_data.push_back(qosminbuffer.get_name_leafdata());
    if (switchingmode.is_set || is_set(switchingmode.yfilter)) leaf_name_data.push_back(switchingmode.get_name_leafdata());
    if (switchingfabricspeed.is_set || is_set(switchingfabricspeed.yfilter)) leaf_name_data.push_back(switchingfabricspeed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "poweroffEntity-items")
    {
        if(poweroffentity_items == nullptr)
        {
            poweroffentity_items = std::make_shared<System::PltfmItems::PoweroffEntityItems>();
        }
        return poweroffentity_items;
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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mod_items != nullptr)
    {
        _children["mod-items"] = mod_items;
    }

    if(nve_items != nullptr)
    {
        _children["nve-items"] = nve_items;
    }

    if(bd_items != nullptr)
    {
        _children["bd-items"] = bd_items;
    }

    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    if(poweroffentity_items != nullptr)
    {
        _children["poweroffEntity-items"] = poweroffentity_items;
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
    if(value_path == "urpfStatus")
    {
        urpfstatus = value;
        urpfstatus.value_namespace = name_space;
        urpfstatus.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "routingMode")
    {
        routingmode.yfilter = yfilter;
    }
    if(value_path == "pcLbAlgo")
    {
        pclbalgo.yfilter = yfilter;
    }
    if(value_path == "urpfStatus")
    {
        urpfstatus.yfilter = yfilter;
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
}

bool System::PltfmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mod-items" || name == "nve-items" || name == "bd-items" || name == "intf-items" || name == "poweroffEntity-items" || name == "tcamRegion-items" || name == "latencymonitor-items" || name == "buffermonitor-items" || name == "pfcmmubuffer-items" || name == "descr" || name == "profileMode" || name == "profileTuple" || name == "unicastSyslogThreshold" || name == "lpmMaxLimit" || name == "unicastMaxLimit" || name == "multicastMaxLimit" || name == "multicastServiceReflectPort" || name == "pstatCfg" || name == "multicastSyslogThreshold" || name == "IPV6alpmCarveValue" || name == "routingMode" || name == "pcLbAlgo" || name == "urpfStatus" || name == "qosMinBuffer" || name == "switchingMode" || name == "switchingFabricSpeed")
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

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::InstItems()
    :
    tcamstatsinst_list(this, {"instance"})
{

    yang_name = "inst-items"; yang_parent_name = "TcamStatsModule-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::~InstItems()
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcamstatsinst_list.len(); index++)
    {
        if(tcamstatsinst_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::has_operation() const
{
    for (std::size_t index=0; index<tcamstatsinst_list.len(); index++)
    {
        if(tcamstatsinst_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TcamStatsInst-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList>();
        ent_->parent = this;
        tcamstatsinst_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tcamstatsinst_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TcamStatsInst-list")
        return true;
    return false;
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::TcamStatsInstList()
    :
    instance{YType::uint16, "instance"}
        ,
    region_items(std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems>())
{
    region_items->parent = this;

    yang_name = "TcamStatsInst-list"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::~TcamStatsInstList()
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::has_data() const
{
    if (is_presence_container) return true;
    return instance.is_set
	|| (region_items !=  nullptr && region_items->has_data());
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| (region_items !=  nullptr && region_items->has_operation());
}

std::string System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TcamStatsInst-list";
    ADD_KEY_TOKEN(instance, "instance");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "region-items")
    {
        if(region_items == nullptr)
        {
            region_items = std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems>();
        }
        return region_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(region_items != nullptr)
    {
        _children["region-items"] = region_items;
    }

    return _children;
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "region-items" || name == "instance")
        return true;
    return false;
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::RegionItems()
    :
    tcamstatsregion_list(this, {"regionname"})
{

    yang_name = "region-items"; yang_parent_name = "TcamStatsInst-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::~RegionItems()
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tcamstatsregion_list.len(); index++)
    {
        if(tcamstatsregion_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::has_operation() const
{
    for (std::size_t index=0; index<tcamstatsregion_list.len(); index++)
    {
        if(tcamstatsregion_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "region-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TcamStatsRegion-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList>();
        ent_->parent = this;
        tcamstatsregion_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tcamstatsregion_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TcamStatsRegion-list")
        return true;
    return false;
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::TcamStatsRegionList()
    :
    regionname{YType::str, "regionName"},
    regionsize{YType::uint16, "regionSize"}
        ,
    utilization_items(std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems>())
{
    utilization_items->parent = this;

    yang_name = "TcamStatsRegion-list"; yang_parent_name = "region-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::~TcamStatsRegionList()
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::has_data() const
{
    if (is_presence_container) return true;
    return regionname.is_set
	|| regionsize.is_set
	|| (utilization_items !=  nullptr && utilization_items->has_data());
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regionname.yfilter)
	|| ydk::is_set(regionsize.yfilter)
	|| (utilization_items !=  nullptr && utilization_items->has_operation());
}

std::string System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TcamStatsRegion-list";
    ADD_KEY_TOKEN(regionname, "regionName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regionname.is_set || is_set(regionname.yfilter)) leaf_name_data.push_back(regionname.get_name_leafdata());
    if (regionsize.is_set || is_set(regionsize.yfilter)) leaf_name_data.push_back(regionsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "utilization-items")
    {
        if(utilization_items == nullptr)
        {
            utilization_items = std::make_shared<System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems>();
        }
        return utilization_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(utilization_items != nullptr)
    {
        _children["utilization-items"] = utilization_items;
    }

    return _children;
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regionName")
    {
        regionname = value;
        regionname.value_namespace = name_space;
        regionname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regionSize")
    {
        regionsize = value;
        regionsize.value_namespace = name_space;
        regionsize.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regionName")
    {
        regionname.yfilter = yfilter;
    }
    if(value_path == "regionSize")
    {
        regionsize.yfilter = yfilter;
    }
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "utilization-items" || name == "regionName" || name == "regionSize")
        return true;
    return false;
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::UtilizationItems()
    :
    used{YType::uint16, "used"},
    free{YType::uint16, "free"},
    percent{YType::str, "percent"},
    ipv4used{YType::uint16, "ipv4Used"},
    ipv4percent{YType::str, "ipv4Percent"},
    ipv6used{YType::uint16, "ipv6Used"},
    ipv6percent{YType::str, "ipv6Percent"},
    macused{YType::uint16, "macUsed"},
    macpercent{YType::str, "macPercent"},
    allused{YType::uint16, "allUsed"},
    allpercent{YType::str, "allPercent"},
    otherused{YType::uint16, "otherUsed"},
    otherpercent{YType::str, "otherPercent"}
{

    yang_name = "utilization-items"; yang_parent_name = "TcamStatsRegion-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::~UtilizationItems()
{
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::has_data() const
{
    if (is_presence_container) return true;
    return used.is_set
	|| free.is_set
	|| percent.is_set
	|| ipv4used.is_set
	|| ipv4percent.is_set
	|| ipv6used.is_set
	|| ipv6percent.is_set
	|| macused.is_set
	|| macpercent.is_set
	|| allused.is_set
	|| allpercent.is_set
	|| otherused.is_set
	|| otherpercent.is_set;
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(free.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(ipv4used.yfilter)
	|| ydk::is_set(ipv4percent.yfilter)
	|| ydk::is_set(ipv6used.yfilter)
	|| ydk::is_set(ipv6percent.yfilter)
	|| ydk::is_set(macused.yfilter)
	|| ydk::is_set(macpercent.yfilter)
	|| ydk::is_set(allused.yfilter)
	|| ydk::is_set(allpercent.yfilter)
	|| ydk::is_set(otherused.yfilter)
	|| ydk::is_set(otherpercent.yfilter);
}

std::string System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utilization-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (free.is_set || is_set(free.yfilter)) leaf_name_data.push_back(free.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (ipv4used.is_set || is_set(ipv4used.yfilter)) leaf_name_data.push_back(ipv4used.get_name_leafdata());
    if (ipv4percent.is_set || is_set(ipv4percent.yfilter)) leaf_name_data.push_back(ipv4percent.get_name_leafdata());
    if (ipv6used.is_set || is_set(ipv6used.yfilter)) leaf_name_data.push_back(ipv6used.get_name_leafdata());
    if (ipv6percent.is_set || is_set(ipv6percent.yfilter)) leaf_name_data.push_back(ipv6percent.get_name_leafdata());
    if (macused.is_set || is_set(macused.yfilter)) leaf_name_data.push_back(macused.get_name_leafdata());
    if (macpercent.is_set || is_set(macpercent.yfilter)) leaf_name_data.push_back(macpercent.get_name_leafdata());
    if (allused.is_set || is_set(allused.yfilter)) leaf_name_data.push_back(allused.get_name_leafdata());
    if (allpercent.is_set || is_set(allpercent.yfilter)) leaf_name_data.push_back(allpercent.get_name_leafdata());
    if (otherused.is_set || is_set(otherused.yfilter)) leaf_name_data.push_back(otherused.get_name_leafdata());
    if (otherpercent.is_set || is_set(otherpercent.yfilter)) leaf_name_data.push_back(otherpercent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free")
    {
        free = value;
        free.value_namespace = name_space;
        free.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4Used")
    {
        ipv4used = value;
        ipv4used.value_namespace = name_space;
        ipv4used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4Percent")
    {
        ipv4percent = value;
        ipv4percent.value_namespace = name_space;
        ipv4percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6Used")
    {
        ipv6used = value;
        ipv6used.value_namespace = name_space;
        ipv6used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6Percent")
    {
        ipv6percent = value;
        ipv6percent.value_namespace = name_space;
        ipv6percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macUsed")
    {
        macused = value;
        macused.value_namespace = name_space;
        macused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macPercent")
    {
        macpercent = value;
        macpercent.value_namespace = name_space;
        macpercent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allUsed")
    {
        allused = value;
        allused.value_namespace = name_space;
        allused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allPercent")
    {
        allpercent = value;
        allpercent.value_namespace = name_space;
        allpercent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otherUsed")
    {
        otherused = value;
        otherused.value_namespace = name_space;
        otherused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "otherPercent")
    {
        otherpercent = value;
        otherpercent.value_namespace = name_space;
        otherpercent.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "free")
    {
        free.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "ipv4Used")
    {
        ipv4used.yfilter = yfilter;
    }
    if(value_path == "ipv4Percent")
    {
        ipv4percent.yfilter = yfilter;
    }
    if(value_path == "ipv6Used")
    {
        ipv6used.yfilter = yfilter;
    }
    if(value_path == "ipv6Percent")
    {
        ipv6percent.yfilter = yfilter;
    }
    if(value_path == "macUsed")
    {
        macused.yfilter = yfilter;
    }
    if(value_path == "macPercent")
    {
        macpercent.yfilter = yfilter;
    }
    if(value_path == "allUsed")
    {
        allused.yfilter = yfilter;
    }
    if(value_path == "allPercent")
    {
        allpercent.yfilter = yfilter;
    }
    if(value_path == "otherUsed")
    {
        otherused.yfilter = yfilter;
    }
    if(value_path == "otherPercent")
    {
        otherpercent.yfilter = yfilter;
    }
}

bool System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used" || name == "free" || name == "percent" || name == "ipv4Used" || name == "ipv4Percent" || name == "ipv6Used" || name == "ipv6Percent" || name == "macUsed" || name == "macPercent" || name == "allUsed" || name == "allPercent" || name == "otherUsed" || name == "otherPercent")
        return true;
    return false;
}

System::PltfmItems::NveItems::NveItems()
    :
    nve_list(this, {"id"})
{

    yang_name = "nve-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::NveItems::~NveItems()
{
}

bool System::PltfmItems::NveItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nve_list.len(); index++)
    {
        if(nve_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::NveItems::has_operation() const
{
    for (std::size_t index=0; index<nve_list.len(); index++)
    {
        if(nve_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::NveItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::NveItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nve-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::NveItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::NveItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NVE-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::NveItems::NVEList>();
        ent_->parent = this;
        nve_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::NveItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nve_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::NveItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::NveItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::NveItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NVE-list")
        return true;
    return false;
}

System::PltfmItems::NveItems::NVEList::NVEList()
    :
    id{YType::uint16, "id"}
        ,
    infravlan_items(std::make_shared<System::PltfmItems::NveItems::NVEList::InfravlanItems>())
{
    infravlan_items->parent = this;

    yang_name = "NVE-list"; yang_parent_name = "nve-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::NveItems::NVEList::~NVEList()
{
}

bool System::PltfmItems::NveItems::NVEList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (infravlan_items !=  nullptr && infravlan_items->has_data());
}

bool System::PltfmItems::NveItems::NVEList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (infravlan_items !=  nullptr && infravlan_items->has_operation());
}

std::string System::PltfmItems::NveItems::NVEList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/nve-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::NveItems::NVEList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NVE-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::NveItems::NVEList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::NveItems::NVEList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "infravlan-items")
    {
        if(infravlan_items == nullptr)
        {
            infravlan_items = std::make_shared<System::PltfmItems::NveItems::NVEList::InfravlanItems>();
        }
        return infravlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::NveItems::NVEList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(infravlan_items != nullptr)
    {
        _children["infravlan-items"] = infravlan_items;
    }

    return _children;
}

void System::PltfmItems::NveItems::NVEList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::NveItems::NVEList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool System::PltfmItems::NveItems::NVEList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "infravlan-items" || name == "id")
        return true;
    return false;
}

System::PltfmItems::NveItems::NVEList::InfravlanItems::InfravlanItems()
    :
    infravlan_list(this, {"id"})
{

    yang_name = "infravlan-items"; yang_parent_name = "NVE-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::NveItems::NVEList::InfravlanItems::~InfravlanItems()
{
}

bool System::PltfmItems::NveItems::NVEList::InfravlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<infravlan_list.len(); index++)
    {
        if(infravlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::NveItems::NVEList::InfravlanItems::has_operation() const
{
    for (std::size_t index=0; index<infravlan_list.len(); index++)
    {
        if(infravlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::NveItems::NVEList::InfravlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "infravlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::NveItems::NVEList::InfravlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::NveItems::NVEList::InfravlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "InfraVlan-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList>();
        ent_->parent = this;
        infravlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::NveItems::NVEList::InfravlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : infravlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::NveItems::NVEList::InfravlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::NveItems::NVEList::InfravlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::NveItems::NVEList::InfravlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "InfraVlan-list")
        return true;
    return false;
}

System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::InfraVlanList()
    :
    id{YType::uint16, "id"},
    force{YType::enumeration, "force"}
{

    yang_name = "InfraVlan-list"; yang_parent_name = "infravlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::~InfraVlanList()
{
}

bool System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| force.is_set;
}

bool System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "InfraVlan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "force")
        return true;
    return false;
}

System::PltfmItems::BdItems::BdItems()
    :
    descr{YType::str, "descr"}
        ,
    bd_items(std::make_shared<System::PltfmItems::BdItems::BdItems_>())
{
    bd_items->parent = this;

    yang_name = "bd-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::BdItems::~BdItems()
{
}

bool System::PltfmItems::BdItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| (bd_items !=  nullptr && bd_items->has_data());
}

bool System::PltfmItems::BdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (bd_items !=  nullptr && bd_items->has_operation());
}

std::string System::PltfmItems::BdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::BdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::BdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::BdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-items")
    {
        if(bd_items == nullptr)
        {
            bd_items = std::make_shared<System::PltfmItems::BdItems::BdItems_>();
        }
        return bd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::BdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bd_items != nullptr)
    {
        _children["bd-items"] = bd_items;
    }

    return _children;
}

void System::PltfmItems::BdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::BdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::PltfmItems::BdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-items" || name == "descr")
        return true;
    return false;
}

System::PltfmItems::BdItems::BdItems_::BdItems_()
    :
    bd_list(this, {"fabencap"})
{

    yang_name = "bd-items"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::BdItems::BdItems_::~BdItems_()
{
}

bool System::PltfmItems::BdItems::BdItems_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_list.len(); index++)
    {
        if(bd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::BdItems::BdItems_::has_operation() const
{
    for (std::size_t index=0; index<bd_list.len(); index++)
    {
        if(bd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::BdItems::BdItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::BdItems::BdItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::BdItems::BdItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::BdItems::BdItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Bd-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::BdItems::BdItems_::BdList>();
        ent_->parent = this;
        bd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::BdItems::BdItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::BdItems::BdItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::BdItems::BdItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::BdItems::BdItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Bd-list")
        return true;
    return false;
}

System::PltfmItems::BdItems::BdItems_::BdList::BdList()
    :
    fabencap{YType::str, "fabEncap"}
{

    yang_name = "Bd-list"; yang_parent_name = "bd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::BdItems::BdItems_::BdList::~BdList()
{
}

bool System::PltfmItems::BdItems::BdItems_::BdList::has_data() const
{
    if (is_presence_container) return true;
    return fabencap.is_set;
}

bool System::PltfmItems::BdItems::BdItems_::BdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fabencap.yfilter);
}

std::string System::PltfmItems::BdItems::BdItems_::BdList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/bd-items/bd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::BdItems::BdItems_::BdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Bd-list";
    ADD_KEY_TOKEN(fabencap, "fabEncap");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::BdItems::BdItems_::BdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fabencap.is_set || is_set(fabencap.yfilter)) leaf_name_data.push_back(fabencap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::BdItems::BdItems_::BdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::BdItems::BdItems_::BdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::BdItems::BdItems_::BdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fabEncap")
    {
        fabencap = value;
        fabencap.value_namespace = name_space;
        fabencap.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::BdItems::BdItems_::BdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fabEncap")
    {
        fabencap.yfilter = yfilter;
    }
}

bool System::PltfmItems::BdItems::BdItems_::BdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabEncap")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IntfItems()
    :
    descr{YType::str, "descr"}
        ,
    if_items(std::make_shared<System::PltfmItems::IntfItems::IfItems>())
{
    if_items->parent = this;

    yang_name = "intf-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::IntfItems::~IntfItems()
{
}

bool System::PltfmItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::PltfmItems::IntfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::PltfmItems::IntfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::PltfmItems::IntfItems::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::PltfmItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::PltfmItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "descr")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::IntfItems::IfItems::~IfItems()
{
}

bool System::PltfmItems::IntfItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::IntfItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::IntfItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/intf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::IntfItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::IntfItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::IntfItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::IntfItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
        ,
    eltmif_items(std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems>())
    , rtvrfmbr_items(std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems>())
{
    eltmif_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::IntfItems::IfItems::IfList::~IfList()
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| name.is_set
	|| descr.is_set
	|| (eltmif_items !=  nullptr && eltmif_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::PltfmItems::IntfItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (eltmif_items !=  nullptr && eltmif_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/intf-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eltmIf-items")
    {
        if(eltmif_items == nullptr)
        {
            eltmif_items = std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems>();
        }
        return eltmif_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eltmif_items != nullptr)
    {
        _children["eltmIf-items"] = eltmif_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::PltfmItems::IntfItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::PltfmItems::IntfItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::PltfmItems::IntfItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eltmIf-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "name" || name == "descr")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::EltmIfItems()
    :
    hwbdid{YType::uint32, "hwBdId"}
{

    yang_name = "eltmIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::~EltmIfItems()
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::has_data() const
{
    if (is_presence_container) return true;
    return hwbdid.is_set;
}

bool System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hwbdid.yfilter);
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eltmIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hwbdid.is_set || is_set(hwbdid.yfilter)) leaf_name_data.push_back(hwbdid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hwBdId")
    {
        hwbdid = value;
        hwbdid.value_namespace = name_space;
        hwbdid.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hwBdId")
    {
        hwbdid.yfilter = yfilter;
    }
}

bool System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hwBdId")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::PltfmItems::PoweroffEntityItems::PoweroffEntityItems()
    :
    descr{YType::str, "descr"}
        ,
    poweroffmodule_items(std::make_shared<System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems>())
{
    poweroffmodule_items->parent = this;

    yang_name = "poweroffEntity-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::PoweroffEntityItems::~PoweroffEntityItems()
{
}

bool System::PltfmItems::PoweroffEntityItems::has_data() const
{
    if (is_presence_container) return true;
    return descr.is_set
	|| (poweroffmodule_items !=  nullptr && poweroffmodule_items->has_data());
}

bool System::PltfmItems::PoweroffEntityItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (poweroffmodule_items !=  nullptr && poweroffmodule_items->has_operation());
}

std::string System::PltfmItems::PoweroffEntityItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::PoweroffEntityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poweroffEntity-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::PoweroffEntityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::PoweroffEntityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "poweroffModule-items")
    {
        if(poweroffmodule_items == nullptr)
        {
            poweroffmodule_items = std::make_shared<System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems>();
        }
        return poweroffmodule_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::PoweroffEntityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(poweroffmodule_items != nullptr)
    {
        _children["poweroffModule-items"] = poweroffmodule_items;
    }

    return _children;
}

void System::PltfmItems::PoweroffEntityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::PoweroffEntityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::PltfmItems::PoweroffEntityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "poweroffModule-items" || name == "descr")
        return true;
    return false;
}

System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleItems()
    :
    poweroffmodule_list(this, {"id"})
{

    yang_name = "poweroffModule-items"; yang_parent_name = "poweroffEntity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::~PoweroffModuleItems()
{
}

bool System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<poweroffmodule_list.len(); index++)
    {
        if(poweroffmodule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::has_operation() const
{
    for (std::size_t index=0; index<poweroffmodule_list.len(); index++)
    {
        if(poweroffmodule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/poweroffEntity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poweroffModule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PoweroffModule-list")
    {
        auto ent_ = std::make_shared<System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList>();
        ent_->parent = this;
        poweroffmodule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : poweroffmodule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PoweroffModule-list")
        return true;
    return false;
}

System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::PoweroffModuleList()
    :
    id{YType::uint16, "id"},
    poweroffstatus{YType::enumeration, "poweroffStatus"}
{

    yang_name = "PoweroffModule-list"; yang_parent_name = "poweroffModule-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::~PoweroffModuleList()
{
}

bool System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| poweroffstatus.is_set;
}

bool System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(poweroffstatus.yfilter);
}

std::string System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/poweroffEntity-items/poweroffModule-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PoweroffModule-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (poweroffstatus.is_set || is_set(poweroffstatus.yfilter)) leaf_name_data.push_back(poweroffstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poweroffStatus")
    {
        poweroffstatus = value;
        poweroffstatus.value_namespace = name_space;
        poweroffstatus.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "poweroffStatus")
    {
        poweroffstatus.yfilter = yfilter;
    }
}

bool System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "poweroffStatus")
        return true;
    return false;
}

System::PltfmItems::TcamRegionItems::TcamRegionItems()
    :
    eraclsize{YType::uint32, "eRaclSize"},
    vpcconvergencesize{YType::uint32, "vpcConvergenceSize"},
    racllitesize{YType::uint32, "raclLiteSize"},
    ipv6ifaclsize{YType::uint32, "ipv6IfaclSize"},
    eipv6raclsize{YType::uint32, "eIpv6RaclSize"},
    ifacllitesize{YType::uint32, "ifaclLiteSize"},
    vaclsize{YType::uint32, "vaclSize"},
    ifaclsize{YType::uint32, "ifaclSize"},
    evaclsize{YType::uint32, "eVaclSize"},
    qossize{YType::uint32, "qosSize"},
    raclsize{YType::uint32, "raclSize"},
    ingflowsize{YType::uint32, "ingFlowSize"},
    natsize{YType::uint32, "natSize"}
{

    yang_name = "tcamRegion-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::TcamRegionItems::~TcamRegionItems()
{
}

bool System::PltfmItems::TcamRegionItems::has_data() const
{
    if (is_presence_container) return true;
    return eraclsize.is_set
	|| vpcconvergencesize.is_set
	|| racllitesize.is_set
	|| ipv6ifaclsize.is_set
	|| eipv6raclsize.is_set
	|| ifacllitesize.is_set
	|| vaclsize.is_set
	|| ifaclsize.is_set
	|| evaclsize.is_set
	|| qossize.is_set
	|| raclsize.is_set
	|| ingflowsize.is_set
	|| natsize.is_set;
}

bool System::PltfmItems::TcamRegionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eraclsize.yfilter)
	|| ydk::is_set(vpcconvergencesize.yfilter)
	|| ydk::is_set(racllitesize.yfilter)
	|| ydk::is_set(ipv6ifaclsize.yfilter)
	|| ydk::is_set(eipv6raclsize.yfilter)
	|| ydk::is_set(ifacllitesize.yfilter)
	|| ydk::is_set(vaclsize.yfilter)
	|| ydk::is_set(ifaclsize.yfilter)
	|| ydk::is_set(evaclsize.yfilter)
	|| ydk::is_set(qossize.yfilter)
	|| ydk::is_set(raclsize.yfilter)
	|| ydk::is_set(ingflowsize.yfilter)
	|| ydk::is_set(natsize.yfilter);
}

std::string System::PltfmItems::TcamRegionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::TcamRegionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcamRegion-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::TcamRegionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eraclsize.is_set || is_set(eraclsize.yfilter)) leaf_name_data.push_back(eraclsize.get_name_leafdata());
    if (vpcconvergencesize.is_set || is_set(vpcconvergencesize.yfilter)) leaf_name_data.push_back(vpcconvergencesize.get_name_leafdata());
    if (racllitesize.is_set || is_set(racllitesize.yfilter)) leaf_name_data.push_back(racllitesize.get_name_leafdata());
    if (ipv6ifaclsize.is_set || is_set(ipv6ifaclsize.yfilter)) leaf_name_data.push_back(ipv6ifaclsize.get_name_leafdata());
    if (eipv6raclsize.is_set || is_set(eipv6raclsize.yfilter)) leaf_name_data.push_back(eipv6raclsize.get_name_leafdata());
    if (ifacllitesize.is_set || is_set(ifacllitesize.yfilter)) leaf_name_data.push_back(ifacllitesize.get_name_leafdata());
    if (vaclsize.is_set || is_set(vaclsize.yfilter)) leaf_name_data.push_back(vaclsize.get_name_leafdata());
    if (ifaclsize.is_set || is_set(ifaclsize.yfilter)) leaf_name_data.push_back(ifaclsize.get_name_leafdata());
    if (evaclsize.is_set || is_set(evaclsize.yfilter)) leaf_name_data.push_back(evaclsize.get_name_leafdata());
    if (qossize.is_set || is_set(qossize.yfilter)) leaf_name_data.push_back(qossize.get_name_leafdata());
    if (raclsize.is_set || is_set(raclsize.yfilter)) leaf_name_data.push_back(raclsize.get_name_leafdata());
    if (ingflowsize.is_set || is_set(ingflowsize.yfilter)) leaf_name_data.push_back(ingflowsize.get_name_leafdata());
    if (natsize.is_set || is_set(natsize.yfilter)) leaf_name_data.push_back(natsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::TcamRegionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::TcamRegionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::TcamRegionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eRaclSize")
    {
        eraclsize = value;
        eraclsize.value_namespace = name_space;
        eraclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcConvergenceSize")
    {
        vpcconvergencesize = value;
        vpcconvergencesize.value_namespace = name_space;
        vpcconvergencesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raclLiteSize")
    {
        racllitesize = value;
        racllitesize.value_namespace = name_space;
        racllitesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6IfaclSize")
    {
        ipv6ifaclsize = value;
        ipv6ifaclsize.value_namespace = name_space;
        ipv6ifaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eIpv6RaclSize")
    {
        eipv6raclsize = value;
        eipv6raclsize.value_namespace = name_space;
        eipv6raclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifaclLiteSize")
    {
        ifacllitesize = value;
        ifacllitesize.value_namespace = name_space;
        ifacllitesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vaclSize")
    {
        vaclsize = value;
        vaclsize.value_namespace = name_space;
        vaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifaclSize")
    {
        ifaclsize = value;
        ifaclsize.value_namespace = name_space;
        ifaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eVaclSize")
    {
        evaclsize = value;
        evaclsize.value_namespace = name_space;
        evaclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qosSize")
    {
        qossize = value;
        qossize.value_namespace = name_space;
        qossize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raclSize")
    {
        raclsize = value;
        raclsize.value_namespace = name_space;
        raclsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingFlowSize")
    {
        ingflowsize = value;
        ingflowsize.value_namespace = name_space;
        ingflowsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "natSize")
    {
        natsize = value;
        natsize.value_namespace = name_space;
        natsize.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::TcamRegionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eRaclSize")
    {
        eraclsize.yfilter = yfilter;
    }
    if(value_path == "vpcConvergenceSize")
    {
        vpcconvergencesize.yfilter = yfilter;
    }
    if(value_path == "raclLiteSize")
    {
        racllitesize.yfilter = yfilter;
    }
    if(value_path == "ipv6IfaclSize")
    {
        ipv6ifaclsize.yfilter = yfilter;
    }
    if(value_path == "eIpv6RaclSize")
    {
        eipv6raclsize.yfilter = yfilter;
    }
    if(value_path == "ifaclLiteSize")
    {
        ifacllitesize.yfilter = yfilter;
    }
    if(value_path == "vaclSize")
    {
        vaclsize.yfilter = yfilter;
    }
    if(value_path == "ifaclSize")
    {
        ifaclsize.yfilter = yfilter;
    }
    if(value_path == "eVaclSize")
    {
        evaclsize.yfilter = yfilter;
    }
    if(value_path == "qosSize")
    {
        qossize.yfilter = yfilter;
    }
    if(value_path == "raclSize")
    {
        raclsize.yfilter = yfilter;
    }
    if(value_path == "ingFlowSize")
    {
        ingflowsize.yfilter = yfilter;
    }
    if(value_path == "natSize")
    {
        natsize.yfilter = yfilter;
    }
}

bool System::PltfmItems::TcamRegionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eRaclSize" || name == "vpcConvergenceSize" || name == "raclLiteSize" || name == "ipv6IfaclSize" || name == "eIpv6RaclSize" || name == "ifaclLiteSize" || name == "vaclSize" || name == "ifaclSize" || name == "eVaclSize" || name == "qosSize" || name == "raclSize" || name == "ingFlowSize" || name == "natSize")
        return true;
    return false;
}

System::PltfmItems::LatencymonitorItems::LatencymonitorItems()
    :
    sampling{YType::uint32, "sampling"},
    latencymonitorthreshholdavg{YType::uint32, "latencyMonitorThreshholdAvg"},
    latencymonitorthreshholdmax{YType::uint32, "latencyMonitorThreshholdMax"},
    latencymonitorstate{YType::enumeration, "latencyMonitorState"}
{

    yang_name = "latencymonitor-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::LatencymonitorItems::~LatencymonitorItems()
{
}

bool System::PltfmItems::LatencymonitorItems::has_data() const
{
    if (is_presence_container) return true;
    return sampling.is_set
	|| latencymonitorthreshholdavg.is_set
	|| latencymonitorthreshholdmax.is_set
	|| latencymonitorstate.is_set;
}

bool System::PltfmItems::LatencymonitorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sampling.yfilter)
	|| ydk::is_set(latencymonitorthreshholdavg.yfilter)
	|| ydk::is_set(latencymonitorthreshholdmax.yfilter)
	|| ydk::is_set(latencymonitorstate.yfilter);
}

std::string System::PltfmItems::LatencymonitorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::LatencymonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latencymonitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::LatencymonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sampling.is_set || is_set(sampling.yfilter)) leaf_name_data.push_back(sampling.get_name_leafdata());
    if (latencymonitorthreshholdavg.is_set || is_set(latencymonitorthreshholdavg.yfilter)) leaf_name_data.push_back(latencymonitorthreshholdavg.get_name_leafdata());
    if (latencymonitorthreshholdmax.is_set || is_set(latencymonitorthreshholdmax.yfilter)) leaf_name_data.push_back(latencymonitorthreshholdmax.get_name_leafdata());
    if (latencymonitorstate.is_set || is_set(latencymonitorstate.yfilter)) leaf_name_data.push_back(latencymonitorstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::LatencymonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::LatencymonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::LatencymonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sampling")
    {
        sampling = value;
        sampling.value_namespace = name_space;
        sampling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latencyMonitorThreshholdAvg")
    {
        latencymonitorthreshholdavg = value;
        latencymonitorthreshholdavg.value_namespace = name_space;
        latencymonitorthreshholdavg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latencyMonitorThreshholdMax")
    {
        latencymonitorthreshholdmax = value;
        latencymonitorthreshholdmax.value_namespace = name_space;
        latencymonitorthreshholdmax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latencyMonitorState")
    {
        latencymonitorstate = value;
        latencymonitorstate.value_namespace = name_space;
        latencymonitorstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::LatencymonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sampling")
    {
        sampling.yfilter = yfilter;
    }
    if(value_path == "latencyMonitorThreshholdAvg")
    {
        latencymonitorthreshholdavg.yfilter = yfilter;
    }
    if(value_path == "latencyMonitorThreshholdMax")
    {
        latencymonitorthreshholdmax.yfilter = yfilter;
    }
    if(value_path == "latencyMonitorState")
    {
        latencymonitorstate.yfilter = yfilter;
    }
}

bool System::PltfmItems::LatencymonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sampling" || name == "latencyMonitorThreshholdAvg" || name == "latencyMonitorThreshholdMax" || name == "latencyMonitorState")
        return true;
    return false;
}

System::PltfmItems::BuffermonitorItems::BuffermonitorItems()
    :
    sampling{YType::uint32, "sampling"},
    buffermonitorthreshhold{YType::uint32, "bufferMonitorThreshhold"},
    buffermonitorstate{YType::enumeration, "bufferMonitorState"},
    buffermonitormode{YType::enumeration, "bufferMonitorMode"}
{

    yang_name = "buffermonitor-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::BuffermonitorItems::~BuffermonitorItems()
{
}

bool System::PltfmItems::BuffermonitorItems::has_data() const
{
    if (is_presence_container) return true;
    return sampling.is_set
	|| buffermonitorthreshhold.is_set
	|| buffermonitorstate.is_set
	|| buffermonitormode.is_set;
}

bool System::PltfmItems::BuffermonitorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sampling.yfilter)
	|| ydk::is_set(buffermonitorthreshhold.yfilter)
	|| ydk::is_set(buffermonitorstate.yfilter)
	|| ydk::is_set(buffermonitormode.yfilter);
}

std::string System::PltfmItems::BuffermonitorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::BuffermonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffermonitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::BuffermonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sampling.is_set || is_set(sampling.yfilter)) leaf_name_data.push_back(sampling.get_name_leafdata());
    if (buffermonitorthreshhold.is_set || is_set(buffermonitorthreshhold.yfilter)) leaf_name_data.push_back(buffermonitorthreshhold.get_name_leafdata());
    if (buffermonitorstate.is_set || is_set(buffermonitorstate.yfilter)) leaf_name_data.push_back(buffermonitorstate.get_name_leafdata());
    if (buffermonitormode.is_set || is_set(buffermonitormode.yfilter)) leaf_name_data.push_back(buffermonitormode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::BuffermonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::BuffermonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::BuffermonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sampling")
    {
        sampling = value;
        sampling.value_namespace = name_space;
        sampling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferMonitorThreshhold")
    {
        buffermonitorthreshhold = value;
        buffermonitorthreshhold.value_namespace = name_space;
        buffermonitorthreshhold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferMonitorState")
    {
        buffermonitorstate = value;
        buffermonitorstate.value_namespace = name_space;
        buffermonitorstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferMonitorMode")
    {
        buffermonitormode = value;
        buffermonitormode.value_namespace = name_space;
        buffermonitormode.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::BuffermonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sampling")
    {
        sampling.yfilter = yfilter;
    }
    if(value_path == "bufferMonitorThreshhold")
    {
        buffermonitorthreshhold.yfilter = yfilter;
    }
    if(value_path == "bufferMonitorState")
    {
        buffermonitorstate.yfilter = yfilter;
    }
    if(value_path == "bufferMonitorMode")
    {
        buffermonitormode.yfilter = yfilter;
    }
}

bool System::PltfmItems::BuffermonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sampling" || name == "bufferMonitorThreshhold" || name == "bufferMonitorState" || name == "bufferMonitorMode")
        return true;
    return false;
}

System::PltfmItems::PfcmmubufferItems::PfcmmubufferItems()
    :
    mmubufferstate{YType::enumeration, "mmuBufferState"},
    bufferreservation{YType::uint16, "bufferReservation"}
{

    yang_name = "pfcmmubuffer-items"; yang_parent_name = "pltfm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::PltfmItems::PfcmmubufferItems::~PfcmmubufferItems()
{
}

bool System::PltfmItems::PfcmmubufferItems::has_data() const
{
    if (is_presence_container) return true;
    return mmubufferstate.is_set
	|| bufferreservation.is_set;
}

bool System::PltfmItems::PfcmmubufferItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mmubufferstate.yfilter)
	|| ydk::is_set(bufferreservation.yfilter);
}

std::string System::PltfmItems::PfcmmubufferItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/pltfm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::PltfmItems::PfcmmubufferItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfcmmubuffer-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::PltfmItems::PfcmmubufferItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mmubufferstate.is_set || is_set(mmubufferstate.yfilter)) leaf_name_data.push_back(mmubufferstate.get_name_leafdata());
    if (bufferreservation.is_set || is_set(bufferreservation.yfilter)) leaf_name_data.push_back(bufferreservation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::PltfmItems::PfcmmubufferItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::PltfmItems::PfcmmubufferItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::PltfmItems::PfcmmubufferItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mmuBufferState")
    {
        mmubufferstate = value;
        mmubufferstate.value_namespace = name_space;
        mmubufferstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufferReservation")
    {
        bufferreservation = value;
        bufferreservation.value_namespace = name_space;
        bufferreservation.value_namespace_prefix = name_space_prefix;
    }
}

void System::PltfmItems::PfcmmubufferItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mmuBufferState")
    {
        mmubufferstate.yfilter = yfilter;
    }
    if(value_path == "bufferReservation")
    {
        bufferreservation.yfilter = yfilter;
    }
}

bool System::PltfmItems::PfcmmubufferItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mmuBufferState" || name == "bufferReservation")
        return true;
    return false;
}

System::SatmItems::SatmItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    dextch_items(std::make_shared<System::SatmItems::DextchItems>())
    , fabp_items(std::make_shared<System::SatmItems::FabpItems>())
{
    dextch_items->parent = this;
    fabp_items->parent = this;

    yang_name = "satm-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SatmItems::~SatmItems()
{
}

bool System::SatmItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (dextch_items !=  nullptr && dextch_items->has_data())
	|| (fabp_items !=  nullptr && fabp_items->has_data());
}

bool System::SatmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (dextch_items !=  nullptr && dextch_items->has_operation())
	|| (fabp_items !=  nullptr && fabp_items->has_operation());
}

std::string System::SatmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SatmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "satm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dextch-items")
    {
        if(dextch_items == nullptr)
        {
            dextch_items = std::make_shared<System::SatmItems::DextchItems>();
        }
        return dextch_items;
    }

    if(child_yang_name == "fabp-items")
    {
        if(fabp_items == nullptr)
        {
            fabp_items = std::make_shared<System::SatmItems::FabpItems>();
        }
        return fabp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dextch_items != nullptr)
    {
        _children["dextch-items"] = dextch_items;
    }

    if(fabp_items != nullptr)
    {
        _children["fabp-items"] = fabp_items;
    }

    return _children;
}

void System::SatmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::SatmItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::SatmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dextch-items" || name == "fabp-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::SatmItems::DextchItems::DextchItems()
    :
    dextch_list(this, {"vendor", "model", "ser"})
{

    yang_name = "dextch-items"; yang_parent_name = "satm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SatmItems::DextchItems::~DextchItems()
{
}

bool System::SatmItems::DextchItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dextch_list.len(); index++)
    {
        if(dextch_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SatmItems::DextchItems::has_operation() const
{
    for (std::size_t index=0; index<dextch_list.len(); index++)
    {
        if(dextch_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SatmItems::DextchItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/satm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SatmItems::DextchItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dextch-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::DextchItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::DextchItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DExtCh-list")
    {
        auto ent_ = std::make_shared<System::SatmItems::DextchItems::DExtChList>();
        ent_->parent = this;
        dextch_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::DextchItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dextch_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SatmItems::DextchItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SatmItems::DextchItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SatmItems::DextchItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DExtCh-list")
        return true;
    return false;
}

System::SatmItems::DextchItems::DExtChList::DExtChList()
    :
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    ser{YType::str, "ser"},
    operst{YType::enumeration, "operSt"},
    ver{YType::str, "ver"},
    swver{YType::str, "swVer"},
    intver{YType::str, "intVer"},
    swintver{YType::str, "swIntVer"},
    swgen{YType::uint16, "swGen"},
    controlfport{YType::str, "controlFPort"},
    rev{YType::str, "rev"},
    id{YType::uint32, "id"},
    descr{YType::str, "descr"}
{

    yang_name = "DExtCh-list"; yang_parent_name = "dextch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SatmItems::DextchItems::DExtChList::~DExtChList()
{
}

bool System::SatmItems::DextchItems::DExtChList::has_data() const
{
    if (is_presence_container) return true;
    return vendor.is_set
	|| model.is_set
	|| ser.is_set
	|| operst.is_set
	|| ver.is_set
	|| swver.is_set
	|| intver.is_set
	|| swintver.is_set
	|| swgen.is_set
	|| controlfport.is_set
	|| rev.is_set
	|| id.is_set
	|| descr.is_set;
}

bool System::SatmItems::DextchItems::DExtChList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(intver.yfilter)
	|| ydk::is_set(swintver.yfilter)
	|| ydk::is_set(swgen.yfilter)
	|| ydk::is_set(controlfport.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::SatmItems::DextchItems::DExtChList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/satm-items/dextch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SatmItems::DextchItems::DExtChList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DExtCh-list";
    ADD_KEY_TOKEN(vendor, "vendor");
    ADD_KEY_TOKEN(model, "model");
    ADD_KEY_TOKEN(ser, "ser");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::DextchItems::DExtChList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (intver.is_set || is_set(intver.yfilter)) leaf_name_data.push_back(intver.get_name_leafdata());
    if (swintver.is_set || is_set(swintver.yfilter)) leaf_name_data.push_back(swintver.get_name_leafdata());
    if (swgen.is_set || is_set(swgen.yfilter)) leaf_name_data.push_back(swgen.get_name_leafdata());
    if (controlfport.is_set || is_set(controlfport.yfilter)) leaf_name_data.push_back(controlfport.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::DextchItems::DExtChList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::DextchItems::DExtChList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SatmItems::DextchItems::DExtChList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swVer")
    {
        swver = value;
        swver.value_namespace = name_space;
        swver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intVer")
    {
        intver = value;
        intver.value_namespace = name_space;
        intver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swIntVer")
    {
        swintver = value;
        swintver.value_namespace = name_space;
        swintver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swGen")
    {
        swgen = value;
        swgen.value_namespace = name_space;
        swgen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "controlFPort")
    {
        controlfport = value;
        controlfport.value_namespace = name_space;
        controlfport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
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
}

void System::SatmItems::DextchItems::DExtChList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "swVer")
    {
        swver.yfilter = yfilter;
    }
    if(value_path == "intVer")
    {
        intver.yfilter = yfilter;
    }
    if(value_path == "swIntVer")
    {
        swintver.yfilter = yfilter;
    }
    if(value_path == "swGen")
    {
        swgen.yfilter = yfilter;
    }
    if(value_path == "controlFPort")
    {
        controlfport.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SatmItems::DextchItems::DExtChList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor" || name == "model" || name == "ser" || name == "operSt" || name == "ver" || name == "swVer" || name == "intVer" || name == "swIntVer" || name == "swGen" || name == "controlFPort" || name == "rev" || name == "id" || name == "descr")
        return true;
    return false;
}

System::SatmItems::FabpItems::FabpItems()
    :
    fabp_list(this, {"id"})
{

    yang_name = "fabp-items"; yang_parent_name = "satm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SatmItems::FabpItems::~FabpItems()
{
}

bool System::SatmItems::FabpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabp_list.len(); index++)
    {
        if(fabp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SatmItems::FabpItems::has_operation() const
{
    for (std::size_t index=0; index<fabp_list.len(); index++)
    {
        if(fabp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SatmItems::FabpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/satm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SatmItems::FabpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FabpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FabpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FabP-list")
    {
        auto ent_ = std::make_shared<System::SatmItems::FabpItems::FabPList>();
        ent_->parent = this;
        fabp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FabpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fabp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SatmItems::FabpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SatmItems::FabpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SatmItems::FabpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FabP-list")
        return true;
    return false;
}

System::SatmItems::FabpItems::FabPList::FabPList()
    :
    id{YType::str, "id"},
    operst{YType::enumeration, "operSt"},
    extchid{YType::uint16, "extChId"},
    fsmst{YType::enumeration, "fsmSt"},
    remotelinkid{YType::uint16, "remoteLinkId"},
    flags{YType::str, "flags"}
        ,
    hostp_items(std::make_shared<System::SatmItems::FabpItems::FabPList::HostpItems>())
    , remotefcot_items(std::make_shared<System::SatmItems::FabpItems::FabPList::RemotefcotItems>())
    , remotefcotx2_items(std::make_shared<System::SatmItems::FabpItems::FabPList::Remotefcotx2Items>())
{
    hostp_items->parent = this;
    remotefcot_items->parent = this;
    remotefcotx2_items->parent = this;

    yang_name = "FabP-list"; yang_parent_name = "fabp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SatmItems::FabpItems::FabPList::~FabPList()
{
}

bool System::SatmItems::FabpItems::FabPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| extchid.is_set
	|| fsmst.is_set
	|| remotelinkid.is_set
	|| flags.is_set
	|| (hostp_items !=  nullptr && hostp_items->has_data())
	|| (remotefcot_items !=  nullptr && remotefcot_items->has_data())
	|| (remotefcotx2_items !=  nullptr && remotefcotx2_items->has_data());
}

bool System::SatmItems::FabpItems::FabPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(extchid.yfilter)
	|| ydk::is_set(fsmst.yfilter)
	|| ydk::is_set(remotelinkid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (hostp_items !=  nullptr && hostp_items->has_operation())
	|| (remotefcot_items !=  nullptr && remotefcot_items->has_operation())
	|| (remotefcotx2_items !=  nullptr && remotefcotx2_items->has_operation());
}

std::string System::SatmItems::FabpItems::FabPList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/satm-items/fabp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SatmItems::FabpItems::FabPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FabP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FabpItems::FabPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (extchid.is_set || is_set(extchid.yfilter)) leaf_name_data.push_back(extchid.get_name_leafdata());
    if (fsmst.is_set || is_set(fsmst.yfilter)) leaf_name_data.push_back(fsmst.get_name_leafdata());
    if (remotelinkid.is_set || is_set(remotelinkid.yfilter)) leaf_name_data.push_back(remotelinkid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FabpItems::FabPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostp-items")
    {
        if(hostp_items == nullptr)
        {
            hostp_items = std::make_shared<System::SatmItems::FabpItems::FabPList::HostpItems>();
        }
        return hostp_items;
    }

    if(child_yang_name == "remotefcot-items")
    {
        if(remotefcot_items == nullptr)
        {
            remotefcot_items = std::make_shared<System::SatmItems::FabpItems::FabPList::RemotefcotItems>();
        }
        return remotefcot_items;
    }

    if(child_yang_name == "remotefcotx2-items")
    {
        if(remotefcotx2_items == nullptr)
        {
            remotefcotx2_items = std::make_shared<System::SatmItems::FabpItems::FabPList::Remotefcotx2Items>();
        }
        return remotefcotx2_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FabpItems::FabPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hostp_items != nullptr)
    {
        _children["hostp-items"] = hostp_items;
    }

    if(remotefcot_items != nullptr)
    {
        _children["remotefcot-items"] = remotefcot_items;
    }

    if(remotefcotx2_items != nullptr)
    {
        _children["remotefcotx2-items"] = remotefcotx2_items;
    }

    return _children;
}

void System::SatmItems::FabpItems::FabPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "extChId")
    {
        extchid = value;
        extchid.value_namespace = name_space;
        extchid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsmSt")
    {
        fsmst = value;
        fsmst.value_namespace = name_space;
        fsmst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteLinkId")
    {
        remotelinkid = value;
        remotelinkid.value_namespace = name_space;
        remotelinkid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void System::SatmItems::FabpItems::FabPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "extChId")
    {
        extchid.yfilter = yfilter;
    }
    if(value_path == "fsmSt")
    {
        fsmst.yfilter = yfilter;
    }
    if(value_path == "remoteLinkId")
    {
        remotelinkid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool System::SatmItems::FabpItems::FabPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostp-items" || name == "remotefcot-items" || name == "remotefcotx2-items" || name == "id" || name == "operSt" || name == "extChId" || name == "fsmSt" || name == "remoteLinkId" || name == "flags")
        return true;
    return false;
}

System::SatmItems::FabpItems::FabPList::HostpItems::HostpItems()
    :
    hostp_list(this, {"id"})
{

    yang_name = "hostp-items"; yang_parent_name = "FabP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SatmItems::FabpItems::FabPList::HostpItems::~HostpItems()
{
}

bool System::SatmItems::FabpItems::FabPList::HostpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hostp_list.len(); index++)
    {
        if(hostp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SatmItems::FabpItems::FabPList::HostpItems::has_operation() const
{
    for (std::size_t index=0; index<hostp_list.len(); index++)
    {
        if(hostp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SatmItems::FabpItems::FabPList::HostpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FabpItems::FabPList::HostpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FabpItems::FabPList::HostpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "HostP-list")
    {
        auto ent_ = std::make_shared<System::SatmItems::FabpItems::FabPList::HostpItems::HostPList>();
        ent_->parent = this;
        hostp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FabpItems::FabPList::HostpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hostp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SatmItems::FabpItems::FabPList::HostpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SatmItems::FabpItems::FabPList::HostpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SatmItems::FabpItems::FabPList::HostpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "HostP-list")
        return true;
    return false;
}

System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::HostPList()
    :
    id{YType::str, "id"},
    operst{YType::enumeration, "operSt"},
    fabricport{YType::str, "fabricPort"}
{

    yang_name = "HostP-list"; yang_parent_name = "hostp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::~HostPList()
{
}

bool System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| fabricport.is_set;
}

bool System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(fabricport.yfilter);
}

std::string System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "HostP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (fabricport.is_set || is_set(fabricport.yfilter)) leaf_name_data.push_back(fabricport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "fabricPort")
    {
        fabricport = value;
        fabricport.value_namespace = name_space;
        fabricport.value_namespace_prefix = name_space_prefix;
    }
}

void System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "fabricPort")
    {
        fabricport.yfilter = yfilter;
    }
}

bool System::SatmItems::FabpItems::FabPList::HostpItems::HostPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "fabricPort")
        return true;
    return false;
}

System::SatmItems::FabpItems::FabPList::RemotefcotItems::RemotefcotItems()
    :
    isfcotpresent{YType::boolean, "isFcotPresent"},
    state{YType::enumeration, "state"},
    flags{YType::enumeration, "flags"},
    type{YType::enumeration, "type"},
    typename_{YType::str, "typeName"},
    xcvrid{YType::uint8, "xcvrId"},
    xcvrextid{YType::uint8, "xcvrExtId"},
    connecttype{YType::uint8, "connectType"},
    xcvrcode{YType::str, "xcvrCode"},
    encoding{YType::uint8, "encoding"},
    brin100mhz{YType::uint8, "brIn100MHz"},
    baseresvd1{YType::uint8, "baseResvd1"},
    distinkmfor9u{YType::uint8, "distInKmFor9u"},
    distin100mfor9u{YType::uint8, "distIn100mFor9u"},
    distin10mfor50u{YType::uint8, "distIn10mFor50u"},
    distin10mfor60u{YType::uint8, "distIn10mFor60u"},
    distin1mforcu{YType::uint8, "distIn1mForCu"},
    baseresvd2{YType::uint8, "baseResvd2"},
    vendorname{YType::str, "vendorName"},
    baseresvd3{YType::uint8, "baseResvd3"},
    vendorpn{YType::str, "vendorPn"},
    vendorrev{YType::str, "vendorRev"},
    baseresvd4{YType::str, "baseResvd4"},
    ccid{YType::uint8, "ccid"},
    extoption{YType::str, "extOption"},
    brmaxmargin{YType::uint8, "brMaxMargin"},
    brminmargin{YType::uint8, "brMinMargin"},
    vendorsn{YType::str, "vendorSn"},
    datecode{YType::str, "dateCode"},
    diagmontype{YType::uint8, "diagMonType"},
    enhoption{YType::uint8, "enhOption"},
    ccex{YType::uint8, "ccex"},
    vendordata{YType::str, "vendorData"},
    maxspeed{YType::uint32, "maxSpeed"},
    minspeed{YType::uint32, "minSpeed"},
    fcotnum{YType::uint8, "fcotNum"},
    gigethcc{YType::uint8, "gigEthCC"},
    fctxtype{YType::uint8, "fCTxType"}
{

    yang_name = "remotefcot-items"; yang_parent_name = "FabP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SatmItems::FabpItems::FabPList::RemotefcotItems::~RemotefcotItems()
{
}

bool System::SatmItems::FabpItems::FabPList::RemotefcotItems::has_data() const
{
    if (is_presence_container) return true;
    return isfcotpresent.is_set
	|| state.is_set
	|| flags.is_set
	|| type.is_set
	|| typename_.is_set
	|| xcvrid.is_set
	|| xcvrextid.is_set
	|| connecttype.is_set
	|| xcvrcode.is_set
	|| encoding.is_set
	|| brin100mhz.is_set
	|| baseresvd1.is_set
	|| distinkmfor9u.is_set
	|| distin100mfor9u.is_set
	|| distin10mfor50u.is_set
	|| distin10mfor60u.is_set
	|| distin1mforcu.is_set
	|| baseresvd2.is_set
	|| vendorname.is_set
	|| baseresvd3.is_set
	|| vendorpn.is_set
	|| vendorrev.is_set
	|| baseresvd4.is_set
	|| ccid.is_set
	|| extoption.is_set
	|| brmaxmargin.is_set
	|| brminmargin.is_set
	|| vendorsn.is_set
	|| datecode.is_set
	|| diagmontype.is_set
	|| enhoption.is_set
	|| ccex.is_set
	|| vendordata.is_set
	|| maxspeed.is_set
	|| minspeed.is_set
	|| fcotnum.is_set
	|| gigethcc.is_set
	|| fctxtype.is_set;
}

bool System::SatmItems::FabpItems::FabPList::RemotefcotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isfcotpresent.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(typename_.yfilter)
	|| ydk::is_set(xcvrid.yfilter)
	|| ydk::is_set(xcvrextid.yfilter)
	|| ydk::is_set(connecttype.yfilter)
	|| ydk::is_set(xcvrcode.yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(brin100mhz.yfilter)
	|| ydk::is_set(baseresvd1.yfilter)
	|| ydk::is_set(distinkmfor9u.yfilter)
	|| ydk::is_set(distin100mfor9u.yfilter)
	|| ydk::is_set(distin10mfor50u.yfilter)
	|| ydk::is_set(distin10mfor60u.yfilter)
	|| ydk::is_set(distin1mforcu.yfilter)
	|| ydk::is_set(baseresvd2.yfilter)
	|| ydk::is_set(vendorname.yfilter)
	|| ydk::is_set(baseresvd3.yfilter)
	|| ydk::is_set(vendorpn.yfilter)
	|| ydk::is_set(vendorrev.yfilter)
	|| ydk::is_set(baseresvd4.yfilter)
	|| ydk::is_set(ccid.yfilter)
	|| ydk::is_set(extoption.yfilter)
	|| ydk::is_set(brmaxmargin.yfilter)
	|| ydk::is_set(brminmargin.yfilter)
	|| ydk::is_set(vendorsn.yfilter)
	|| ydk::is_set(datecode.yfilter)
	|| ydk::is_set(diagmontype.yfilter)
	|| ydk::is_set(enhoption.yfilter)
	|| ydk::is_set(ccex.yfilter)
	|| ydk::is_set(vendordata.yfilter)
	|| ydk::is_set(maxspeed.yfilter)
	|| ydk::is_set(minspeed.yfilter)
	|| ydk::is_set(fcotnum.yfilter)
	|| ydk::is_set(gigethcc.yfilter)
	|| ydk::is_set(fctxtype.yfilter);
}

std::string System::SatmItems::FabpItems::FabPList::RemotefcotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remotefcot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FabpItems::FabPList::RemotefcotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isfcotpresent.is_set || is_set(isfcotpresent.yfilter)) leaf_name_data.push_back(isfcotpresent.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (typename_.is_set || is_set(typename_.yfilter)) leaf_name_data.push_back(typename_.get_name_leafdata());
    if (xcvrid.is_set || is_set(xcvrid.yfilter)) leaf_name_data.push_back(xcvrid.get_name_leafdata());
    if (xcvrextid.is_set || is_set(xcvrextid.yfilter)) leaf_name_data.push_back(xcvrextid.get_name_leafdata());
    if (connecttype.is_set || is_set(connecttype.yfilter)) leaf_name_data.push_back(connecttype.get_name_leafdata());
    if (xcvrcode.is_set || is_set(xcvrcode.yfilter)) leaf_name_data.push_back(xcvrcode.get_name_leafdata());
    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (brin100mhz.is_set || is_set(brin100mhz.yfilter)) leaf_name_data.push_back(brin100mhz.get_name_leafdata());
    if (baseresvd1.is_set || is_set(baseresvd1.yfilter)) leaf_name_data.push_back(baseresvd1.get_name_leafdata());
    if (distinkmfor9u.is_set || is_set(distinkmfor9u.yfilter)) leaf_name_data.push_back(distinkmfor9u.get_name_leafdata());
    if (distin100mfor9u.is_set || is_set(distin100mfor9u.yfilter)) leaf_name_data.push_back(distin100mfor9u.get_name_leafdata());
    if (distin10mfor50u.is_set || is_set(distin10mfor50u.yfilter)) leaf_name_data.push_back(distin10mfor50u.get_name_leafdata());
    if (distin10mfor60u.is_set || is_set(distin10mfor60u.yfilter)) leaf_name_data.push_back(distin10mfor60u.get_name_leafdata());
    if (distin1mforcu.is_set || is_set(distin1mforcu.yfilter)) leaf_name_data.push_back(distin1mforcu.get_name_leafdata());
    if (baseresvd2.is_set || is_set(baseresvd2.yfilter)) leaf_name_data.push_back(baseresvd2.get_name_leafdata());
    if (vendorname.is_set || is_set(vendorname.yfilter)) leaf_name_data.push_back(vendorname.get_name_leafdata());
    if (baseresvd3.is_set || is_set(baseresvd3.yfilter)) leaf_name_data.push_back(baseresvd3.get_name_leafdata());
    if (vendorpn.is_set || is_set(vendorpn.yfilter)) leaf_name_data.push_back(vendorpn.get_name_leafdata());
    if (vendorrev.is_set || is_set(vendorrev.yfilter)) leaf_name_data.push_back(vendorrev.get_name_leafdata());
    if (baseresvd4.is_set || is_set(baseresvd4.yfilter)) leaf_name_data.push_back(baseresvd4.get_name_leafdata());
    if (ccid.is_set || is_set(ccid.yfilter)) leaf_name_data.push_back(ccid.get_name_leafdata());
    if (extoption.is_set || is_set(extoption.yfilter)) leaf_name_data.push_back(extoption.get_name_leafdata());
    if (brmaxmargin.is_set || is_set(brmaxmargin.yfilter)) leaf_name_data.push_back(brmaxmargin.get_name_leafdata());
    if (brminmargin.is_set || is_set(brminmargin.yfilter)) leaf_name_data.push_back(brminmargin.get_name_leafdata());
    if (vendorsn.is_set || is_set(vendorsn.yfilter)) leaf_name_data.push_back(vendorsn.get_name_leafdata());
    if (datecode.is_set || is_set(datecode.yfilter)) leaf_name_data.push_back(datecode.get_name_leafdata());
    if (diagmontype.is_set || is_set(diagmontype.yfilter)) leaf_name_data.push_back(diagmontype.get_name_leafdata());
    if (enhoption.is_set || is_set(enhoption.yfilter)) leaf_name_data.push_back(enhoption.get_name_leafdata());
    if (ccex.is_set || is_set(ccex.yfilter)) leaf_name_data.push_back(ccex.get_name_leafdata());
    if (vendordata.is_set || is_set(vendordata.yfilter)) leaf_name_data.push_back(vendordata.get_name_leafdata());
    if (maxspeed.is_set || is_set(maxspeed.yfilter)) leaf_name_data.push_back(maxspeed.get_name_leafdata());
    if (minspeed.is_set || is_set(minspeed.yfilter)) leaf_name_data.push_back(minspeed.get_name_leafdata());
    if (fcotnum.is_set || is_set(fcotnum.yfilter)) leaf_name_data.push_back(fcotnum.get_name_leafdata());
    if (gigethcc.is_set || is_set(gigethcc.yfilter)) leaf_name_data.push_back(gigethcc.get_name_leafdata());
    if (fctxtype.is_set || is_set(fctxtype.yfilter)) leaf_name_data.push_back(fctxtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FabpItems::FabPList::RemotefcotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FabpItems::FabPList::RemotefcotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SatmItems::FabpItems::FabPList::RemotefcotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isFcotPresent")
    {
        isfcotpresent = value;
        isfcotpresent.value_namespace = name_space;
        isfcotpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "typeName")
    {
        typename_ = value;
        typename_.value_namespace = name_space;
        typename_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrId")
    {
        xcvrid = value;
        xcvrid.value_namespace = name_space;
        xcvrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrExtId")
    {
        xcvrextid = value;
        xcvrextid.value_namespace = name_space;
        xcvrextid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connectType")
    {
        connecttype = value;
        connecttype.value_namespace = name_space;
        connecttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcvrCode")
    {
        xcvrcode = value;
        xcvrcode.value_namespace = name_space;
        xcvrcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brIn100MHz")
    {
        brin100mhz = value;
        brin100mhz.value_namespace = name_space;
        brin100mhz.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd1")
    {
        baseresvd1 = value;
        baseresvd1.value_namespace = name_space;
        baseresvd1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distInKmFor9u")
    {
        distinkmfor9u = value;
        distinkmfor9u.value_namespace = name_space;
        distinkmfor9u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn100mFor9u")
    {
        distin100mfor9u = value;
        distin100mfor9u.value_namespace = name_space;
        distin100mfor9u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn10mFor50u")
    {
        distin10mfor50u = value;
        distin10mfor50u.value_namespace = name_space;
        distin10mfor50u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn10mFor60u")
    {
        distin10mfor60u = value;
        distin10mfor60u.value_namespace = name_space;
        distin10mfor60u.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distIn1mForCu")
    {
        distin1mforcu = value;
        distin1mforcu.value_namespace = name_space;
        distin1mforcu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd2")
    {
        baseresvd2 = value;
        baseresvd2.value_namespace = name_space;
        baseresvd2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorName")
    {
        vendorname = value;
        vendorname.value_namespace = name_space;
        vendorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd3")
    {
        baseresvd3 = value;
        baseresvd3.value_namespace = name_space;
        baseresvd3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorPn")
    {
        vendorpn = value;
        vendorpn.value_namespace = name_space;
        vendorpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorRev")
    {
        vendorrev = value;
        vendorrev.value_namespace = name_space;
        vendorrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseResvd4")
    {
        baseresvd4 = value;
        baseresvd4.value_namespace = name_space;
        baseresvd4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccid")
    {
        ccid = value;
        ccid.value_namespace = name_space;
        ccid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extOption")
    {
        extoption = value;
        extoption.value_namespace = name_space;
        extoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brMaxMargin")
    {
        brmaxmargin = value;
        brmaxmargin.value_namespace = name_space;
        brmaxmargin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "brMinMargin")
    {
        brminmargin = value;
        brminmargin.value_namespace = name_space;
        brminmargin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorSn")
    {
        vendorsn = value;
        vendorsn.value_namespace = name_space;
        vendorsn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dateCode")
    {
        datecode = value;
        datecode.value_namespace = name_space;
        datecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagMonType")
    {
        diagmontype = value;
        diagmontype.value_namespace = name_space;
        diagmontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhOption")
    {
        enhoption = value;
        enhoption.value_namespace = name_space;
        enhoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccex")
    {
        ccex = value;
        ccex.value_namespace = name_space;
        ccex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorData")
    {
        vendordata = value;
        vendordata.value_namespace = name_space;
        vendordata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed = value;
        maxspeed.value_namespace = name_space;
        maxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minSpeed")
    {
        minspeed = value;
        minspeed.value_namespace = name_space;
        minspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotNum")
    {
        fcotnum = value;
        fcotnum.value_namespace = name_space;
        fcotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc = value;
        gigethcc.value_namespace = name_space;
        gigethcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fCTxType")
    {
        fctxtype = value;
        fctxtype.value_namespace = name_space;
        fctxtype.value_namespace_prefix = name_space_prefix;
    }
}

void System::SatmItems::FabpItems::FabPList::RemotefcotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isFcotPresent")
    {
        isfcotpresent.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "typeName")
    {
        typename_.yfilter = yfilter;
    }
    if(value_path == "xcvrId")
    {
        xcvrid.yfilter = yfilter;
    }
    if(value_path == "xcvrExtId")
    {
        xcvrextid.yfilter = yfilter;
    }
    if(value_path == "connectType")
    {
        connecttype.yfilter = yfilter;
    }
    if(value_path == "xcvrCode")
    {
        xcvrcode.yfilter = yfilter;
    }
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "brIn100MHz")
    {
        brin100mhz.yfilter = yfilter;
    }
    if(value_path == "baseResvd1")
    {
        baseresvd1.yfilter = yfilter;
    }
    if(value_path == "distInKmFor9u")
    {
        distinkmfor9u.yfilter = yfilter;
    }
    if(value_path == "distIn100mFor9u")
    {
        distin100mfor9u.yfilter = yfilter;
    }
    if(value_path == "distIn10mFor50u")
    {
        distin10mfor50u.yfilter = yfilter;
    }
    if(value_path == "distIn10mFor60u")
    {
        distin10mfor60u.yfilter = yfilter;
    }
    if(value_path == "distIn1mForCu")
    {
        distin1mforcu.yfilter = yfilter;
    }
    if(value_path == "baseResvd2")
    {
        baseresvd2.yfilter = yfilter;
    }
    if(value_path == "vendorName")
    {
        vendorname.yfilter = yfilter;
    }
    if(value_path == "baseResvd3")
    {
        baseresvd3.yfilter = yfilter;
    }
    if(value_path == "vendorPn")
    {
        vendorpn.yfilter = yfilter;
    }
    if(value_path == "vendorRev")
    {
        vendorrev.yfilter = yfilter;
    }
    if(value_path == "baseResvd4")
    {
        baseresvd4.yfilter = yfilter;
    }
    if(value_path == "ccid")
    {
        ccid.yfilter = yfilter;
    }
    if(value_path == "extOption")
    {
        extoption.yfilter = yfilter;
    }
    if(value_path == "brMaxMargin")
    {
        brmaxmargin.yfilter = yfilter;
    }
    if(value_path == "brMinMargin")
    {
        brminmargin.yfilter = yfilter;
    }
    if(value_path == "vendorSn")
    {
        vendorsn.yfilter = yfilter;
    }
    if(value_path == "dateCode")
    {
        datecode.yfilter = yfilter;
    }
    if(value_path == "diagMonType")
    {
        diagmontype.yfilter = yfilter;
    }
    if(value_path == "enhOption")
    {
        enhoption.yfilter = yfilter;
    }
    if(value_path == "ccex")
    {
        ccex.yfilter = yfilter;
    }
    if(value_path == "vendorData")
    {
        vendordata.yfilter = yfilter;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed.yfilter = yfilter;
    }
    if(value_path == "minSpeed")
    {
        minspeed.yfilter = yfilter;
    }
    if(value_path == "fcotNum")
    {
        fcotnum.yfilter = yfilter;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc.yfilter = yfilter;
    }
    if(value_path == "fCTxType")
    {
        fctxtype.yfilter = yfilter;
    }
}

bool System::SatmItems::FabpItems::FabPList::RemotefcotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isFcotPresent" || name == "state" || name == "flags" || name == "type" || name == "typeName" || name == "xcvrId" || name == "xcvrExtId" || name == "connectType" || name == "xcvrCode" || name == "encoding" || name == "brIn100MHz" || name == "baseResvd1" || name == "distInKmFor9u" || name == "distIn100mFor9u" || name == "distIn10mFor50u" || name == "distIn10mFor60u" || name == "distIn1mForCu" || name == "baseResvd2" || name == "vendorName" || name == "baseResvd3" || name == "vendorPn" || name == "vendorRev" || name == "baseResvd4" || name == "ccid" || name == "extOption" || name == "brMaxMargin" || name == "brMinMargin" || name == "vendorSn" || name == "dateCode" || name == "diagMonType" || name == "enhOption" || name == "ccex" || name == "vendorData" || name == "maxSpeed" || name == "minSpeed" || name == "fcotNum" || name == "gigEthCC" || name == "fCTxType")
        return true;
    return false;
}

System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::Remotefcotx2Items()
    :
    isfcotpresent{YType::boolean, "isFcotPresent"},
    state{YType::enumeration, "state"},
    flags{YType::enumeration, "flags"},
    type{YType::enumeration, "type"},
    typename_{YType::str, "typeName"},
    connecttype{YType::uint8, "connectType"},
    bitencoding{YType::uint8, "bitEncoding"},
    bitratembps{YType::str, "bitRateMbps"},
    protocoltype{YType::uint8, "protocolType"},
    xgethcode{YType::str, "xgEthCode"},
    sonetsdhcode{YType::str, "sonetSdhCode"},
    xgfccode{YType::str, "xgFcCode"},
    range{YType::str, "range"},
    fibretype{YType::str, "fibreType"},
    wavelench0{YType::str, "waveLenCh0"},
    wavelench1{YType::str, "waveLenCh1"},
    wavelench2{YType::str, "waveLenCh2"},
    wavelench3{YType::str, "waveLenCh3"},
    vendorname{YType::str, "vendorName"},
    vendorpn{YType::str, "vendorPn"},
    vendorrev{YType::str, "vendorRev"},
    vendorserno{YType::str, "vendorSerNo"},
    datecode{YType::str, "dateCode"},
    fivevstressenv{YType::uint8, "fiveVStressEnv"},
    ciscopid{YType::str, "ciscoPid"},
    ciscovid{YType::str, "ciscoVid"},
    ciscosn{YType::str, "ciscoSN"},
    ciscopn{YType::str, "ciscoPN"},
    ciscorev{YType::str, "ciscoRev"},
    extvendorspecific{YType::str, "extVendorSpecific"},
    maxspeed{YType::uint32, "maxSpeed"},
    minspeed{YType::uint32, "minSpeed"},
    fcotnum{YType::uint8, "fcotNum"},
    fcottype{YType::uint8, "fcotType"},
    gigethcc{YType::uint8, "gigEthCC"}
{

    yang_name = "remotefcotx2-items"; yang_parent_name = "FabP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::~Remotefcotx2Items()
{
}

bool System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::has_data() const
{
    if (is_presence_container) return true;
    return isfcotpresent.is_set
	|| state.is_set
	|| flags.is_set
	|| type.is_set
	|| typename_.is_set
	|| connecttype.is_set
	|| bitencoding.is_set
	|| bitratembps.is_set
	|| protocoltype.is_set
	|| xgethcode.is_set
	|| sonetsdhcode.is_set
	|| xgfccode.is_set
	|| range.is_set
	|| fibretype.is_set
	|| wavelench0.is_set
	|| wavelench1.is_set
	|| wavelench2.is_set
	|| wavelench3.is_set
	|| vendorname.is_set
	|| vendorpn.is_set
	|| vendorrev.is_set
	|| vendorserno.is_set
	|| datecode.is_set
	|| fivevstressenv.is_set
	|| ciscopid.is_set
	|| ciscovid.is_set
	|| ciscosn.is_set
	|| ciscopn.is_set
	|| ciscorev.is_set
	|| extvendorspecific.is_set
	|| maxspeed.is_set
	|| minspeed.is_set
	|| fcotnum.is_set
	|| fcottype.is_set
	|| gigethcc.is_set;
}

bool System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isfcotpresent.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(typename_.yfilter)
	|| ydk::is_set(connecttype.yfilter)
	|| ydk::is_set(bitencoding.yfilter)
	|| ydk::is_set(bitratembps.yfilter)
	|| ydk::is_set(protocoltype.yfilter)
	|| ydk::is_set(xgethcode.yfilter)
	|| ydk::is_set(sonetsdhcode.yfilter)
	|| ydk::is_set(xgfccode.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(fibretype.yfilter)
	|| ydk::is_set(wavelench0.yfilter)
	|| ydk::is_set(wavelench1.yfilter)
	|| ydk::is_set(wavelench2.yfilter)
	|| ydk::is_set(wavelench3.yfilter)
	|| ydk::is_set(vendorname.yfilter)
	|| ydk::is_set(vendorpn.yfilter)
	|| ydk::is_set(vendorrev.yfilter)
	|| ydk::is_set(vendorserno.yfilter)
	|| ydk::is_set(datecode.yfilter)
	|| ydk::is_set(fivevstressenv.yfilter)
	|| ydk::is_set(ciscopid.yfilter)
	|| ydk::is_set(ciscovid.yfilter)
	|| ydk::is_set(ciscosn.yfilter)
	|| ydk::is_set(ciscopn.yfilter)
	|| ydk::is_set(ciscorev.yfilter)
	|| ydk::is_set(extvendorspecific.yfilter)
	|| ydk::is_set(maxspeed.yfilter)
	|| ydk::is_set(minspeed.yfilter)
	|| ydk::is_set(fcotnum.yfilter)
	|| ydk::is_set(fcottype.yfilter)
	|| ydk::is_set(gigethcc.yfilter);
}

std::string System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remotefcotx2-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isfcotpresent.is_set || is_set(isfcotpresent.yfilter)) leaf_name_data.push_back(isfcotpresent.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (typename_.is_set || is_set(typename_.yfilter)) leaf_name_data.push_back(typename_.get_name_leafdata());
    if (connecttype.is_set || is_set(connecttype.yfilter)) leaf_name_data.push_back(connecttype.get_name_leafdata());
    if (bitencoding.is_set || is_set(bitencoding.yfilter)) leaf_name_data.push_back(bitencoding.get_name_leafdata());
    if (bitratembps.is_set || is_set(bitratembps.yfilter)) leaf_name_data.push_back(bitratembps.get_name_leafdata());
    if (protocoltype.is_set || is_set(protocoltype.yfilter)) leaf_name_data.push_back(protocoltype.get_name_leafdata());
    if (xgethcode.is_set || is_set(xgethcode.yfilter)) leaf_name_data.push_back(xgethcode.get_name_leafdata());
    if (sonetsdhcode.is_set || is_set(sonetsdhcode.yfilter)) leaf_name_data.push_back(sonetsdhcode.get_name_leafdata());
    if (xgfccode.is_set || is_set(xgfccode.yfilter)) leaf_name_data.push_back(xgfccode.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (fibretype.is_set || is_set(fibretype.yfilter)) leaf_name_data.push_back(fibretype.get_name_leafdata());
    if (wavelench0.is_set || is_set(wavelench0.yfilter)) leaf_name_data.push_back(wavelench0.get_name_leafdata());
    if (wavelench1.is_set || is_set(wavelench1.yfilter)) leaf_name_data.push_back(wavelench1.get_name_leafdata());
    if (wavelench2.is_set || is_set(wavelench2.yfilter)) leaf_name_data.push_back(wavelench2.get_name_leafdata());
    if (wavelench3.is_set || is_set(wavelench3.yfilter)) leaf_name_data.push_back(wavelench3.get_name_leafdata());
    if (vendorname.is_set || is_set(vendorname.yfilter)) leaf_name_data.push_back(vendorname.get_name_leafdata());
    if (vendorpn.is_set || is_set(vendorpn.yfilter)) leaf_name_data.push_back(vendorpn.get_name_leafdata());
    if (vendorrev.is_set || is_set(vendorrev.yfilter)) leaf_name_data.push_back(vendorrev.get_name_leafdata());
    if (vendorserno.is_set || is_set(vendorserno.yfilter)) leaf_name_data.push_back(vendorserno.get_name_leafdata());
    if (datecode.is_set || is_set(datecode.yfilter)) leaf_name_data.push_back(datecode.get_name_leafdata());
    if (fivevstressenv.is_set || is_set(fivevstressenv.yfilter)) leaf_name_data.push_back(fivevstressenv.get_name_leafdata());
    if (ciscopid.is_set || is_set(ciscopid.yfilter)) leaf_name_data.push_back(ciscopid.get_name_leafdata());
    if (ciscovid.is_set || is_set(ciscovid.yfilter)) leaf_name_data.push_back(ciscovid.get_name_leafdata());
    if (ciscosn.is_set || is_set(ciscosn.yfilter)) leaf_name_data.push_back(ciscosn.get_name_leafdata());
    if (ciscopn.is_set || is_set(ciscopn.yfilter)) leaf_name_data.push_back(ciscopn.get_name_leafdata());
    if (ciscorev.is_set || is_set(ciscorev.yfilter)) leaf_name_data.push_back(ciscorev.get_name_leafdata());
    if (extvendorspecific.is_set || is_set(extvendorspecific.yfilter)) leaf_name_data.push_back(extvendorspecific.get_name_leafdata());
    if (maxspeed.is_set || is_set(maxspeed.yfilter)) leaf_name_data.push_back(maxspeed.get_name_leafdata());
    if (minspeed.is_set || is_set(minspeed.yfilter)) leaf_name_data.push_back(minspeed.get_name_leafdata());
    if (fcotnum.is_set || is_set(fcotnum.yfilter)) leaf_name_data.push_back(fcotnum.get_name_leafdata());
    if (fcottype.is_set || is_set(fcottype.yfilter)) leaf_name_data.push_back(fcottype.get_name_leafdata());
    if (gigethcc.is_set || is_set(gigethcc.yfilter)) leaf_name_data.push_back(gigethcc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isFcotPresent")
    {
        isfcotpresent = value;
        isfcotpresent.value_namespace = name_space;
        isfcotpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "typeName")
    {
        typename_ = value;
        typename_.value_namespace = name_space;
        typename_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connectType")
    {
        connecttype = value;
        connecttype.value_namespace = name_space;
        connecttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitEncoding")
    {
        bitencoding = value;
        bitencoding.value_namespace = name_space;
        bitencoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitRateMbps")
    {
        bitratembps = value;
        bitratembps.value_namespace = name_space;
        bitratembps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolType")
    {
        protocoltype = value;
        protocoltype.value_namespace = name_space;
        protocoltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xgEthCode")
    {
        xgethcode = value;
        xgethcode.value_namespace = name_space;
        xgethcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSdhCode")
    {
        sonetsdhcode = value;
        sonetsdhcode.value_namespace = name_space;
        sonetsdhcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xgFcCode")
    {
        xgfccode = value;
        xgfccode.value_namespace = name_space;
        xgfccode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fibreType")
    {
        fibretype = value;
        fibretype.value_namespace = name_space;
        fibretype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh0")
    {
        wavelench0 = value;
        wavelench0.value_namespace = name_space;
        wavelench0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh1")
    {
        wavelench1 = value;
        wavelench1.value_namespace = name_space;
        wavelench1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh2")
    {
        wavelench2 = value;
        wavelench2.value_namespace = name_space;
        wavelench2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waveLenCh3")
    {
        wavelench3 = value;
        wavelench3.value_namespace = name_space;
        wavelench3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorName")
    {
        vendorname = value;
        vendorname.value_namespace = name_space;
        vendorname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorPn")
    {
        vendorpn = value;
        vendorpn.value_namespace = name_space;
        vendorpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorRev")
    {
        vendorrev = value;
        vendorrev.value_namespace = name_space;
        vendorrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendorSerNo")
    {
        vendorserno = value;
        vendorserno.value_namespace = name_space;
        vendorserno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dateCode")
    {
        datecode = value;
        datecode.value_namespace = name_space;
        datecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fiveVStressEnv")
    {
        fivevstressenv = value;
        fivevstressenv.value_namespace = name_space;
        fivevstressenv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPid")
    {
        ciscopid = value;
        ciscopid.value_namespace = name_space;
        ciscopid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoVid")
    {
        ciscovid = value;
        ciscovid.value_namespace = name_space;
        ciscovid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoSN")
    {
        ciscosn = value;
        ciscosn.value_namespace = name_space;
        ciscosn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoPN")
    {
        ciscopn = value;
        ciscopn.value_namespace = name_space;
        ciscopn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoRev")
    {
        ciscorev = value;
        ciscorev.value_namespace = name_space;
        ciscorev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extVendorSpecific")
    {
        extvendorspecific = value;
        extvendorspecific.value_namespace = name_space;
        extvendorspecific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed = value;
        maxspeed.value_namespace = name_space;
        maxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minSpeed")
    {
        minspeed = value;
        minspeed.value_namespace = name_space;
        minspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotNum")
    {
        fcotnum = value;
        fcotnum.value_namespace = name_space;
        fcotnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcotType")
    {
        fcottype = value;
        fcottype.value_namespace = name_space;
        fcottype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc = value;
        gigethcc.value_namespace = name_space;
        gigethcc.value_namespace_prefix = name_space_prefix;
    }
}

void System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isFcotPresent")
    {
        isfcotpresent.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "typeName")
    {
        typename_.yfilter = yfilter;
    }
    if(value_path == "connectType")
    {
        connecttype.yfilter = yfilter;
    }
    if(value_path == "bitEncoding")
    {
        bitencoding.yfilter = yfilter;
    }
    if(value_path == "bitRateMbps")
    {
        bitratembps.yfilter = yfilter;
    }
    if(value_path == "protocolType")
    {
        protocoltype.yfilter = yfilter;
    }
    if(value_path == "xgEthCode")
    {
        xgethcode.yfilter = yfilter;
    }
    if(value_path == "sonetSdhCode")
    {
        sonetsdhcode.yfilter = yfilter;
    }
    if(value_path == "xgFcCode")
    {
        xgfccode.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "fibreType")
    {
        fibretype.yfilter = yfilter;
    }
    if(value_path == "waveLenCh0")
    {
        wavelench0.yfilter = yfilter;
    }
    if(value_path == "waveLenCh1")
    {
        wavelench1.yfilter = yfilter;
    }
    if(value_path == "waveLenCh2")
    {
        wavelench2.yfilter = yfilter;
    }
    if(value_path == "waveLenCh3")
    {
        wavelench3.yfilter = yfilter;
    }
    if(value_path == "vendorName")
    {
        vendorname.yfilter = yfilter;
    }
    if(value_path == "vendorPn")
    {
        vendorpn.yfilter = yfilter;
    }
    if(value_path == "vendorRev")
    {
        vendorrev.yfilter = yfilter;
    }
    if(value_path == "vendorSerNo")
    {
        vendorserno.yfilter = yfilter;
    }
    if(value_path == "dateCode")
    {
        datecode.yfilter = yfilter;
    }
    if(value_path == "fiveVStressEnv")
    {
        fivevstressenv.yfilter = yfilter;
    }
    if(value_path == "ciscoPid")
    {
        ciscopid.yfilter = yfilter;
    }
    if(value_path == "ciscoVid")
    {
        ciscovid.yfilter = yfilter;
    }
    if(value_path == "ciscoSN")
    {
        ciscosn.yfilter = yfilter;
    }
    if(value_path == "ciscoPN")
    {
        ciscopn.yfilter = yfilter;
    }
    if(value_path == "ciscoRev")
    {
        ciscorev.yfilter = yfilter;
    }
    if(value_path == "extVendorSpecific")
    {
        extvendorspecific.yfilter = yfilter;
    }
    if(value_path == "maxSpeed")
    {
        maxspeed.yfilter = yfilter;
    }
    if(value_path == "minSpeed")
    {
        minspeed.yfilter = yfilter;
    }
    if(value_path == "fcotNum")
    {
        fcotnum.yfilter = yfilter;
    }
    if(value_path == "fcotType")
    {
        fcottype.yfilter = yfilter;
    }
    if(value_path == "gigEthCC")
    {
        gigethcc.yfilter = yfilter;
    }
}

bool System::SatmItems::FabpItems::FabPList::Remotefcotx2Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isFcotPresent" || name == "state" || name == "flags" || name == "type" || name == "typeName" || name == "connectType" || name == "bitEncoding" || name == "bitRateMbps" || name == "protocolType" || name == "xgEthCode" || name == "sonetSdhCode" || name == "xgFcCode" || name == "range" || name == "fibreType" || name == "waveLenCh0" || name == "waveLenCh1" || name == "waveLenCh2" || name == "waveLenCh3" || name == "vendorName" || name == "vendorPn" || name == "vendorRev" || name == "vendorSerNo" || name == "dateCode" || name == "fiveVStressEnv" || name == "ciscoPid" || name == "ciscoVid" || name == "ciscoSN" || name == "ciscoPN" || name == "ciscoRev" || name == "extVendorSpecific" || name == "maxSpeed" || name == "minSpeed" || name == "fcotNum" || name == "fcotType" || name == "gigEthCC")
        return true;
    return false;
}

System::AdjacencyItems::AdjacencyItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::AdjacencyItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "adjacency-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AdjacencyItems::~AdjacencyItems()
{
}

bool System::AdjacencyItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::AdjacencyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::AdjacencyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AdjacencyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::AdjacencyItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::AdjacencyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AdjacencyItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AdjacencyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::InstItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    dom_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems>())
{
    dom_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "adjacency-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AdjacencyItems::InstItems::~InstItems()
{
}

bool System::AdjacencyItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (dom_items !=  nullptr && dom_items->has_data());
}

bool System::AdjacencyItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (dom_items !=  nullptr && dom_items->has_operation());
}

std::string System::AdjacencyItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/adjacency-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AdjacencyItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::AdjacencyItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::AdjacencyItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dom-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AdjacencyItems::InstItems::DomItems::~DomItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AdjacencyItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/adjacency-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AdjacencyItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"}
        ,
    db_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems>())
{
    db_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (db_items !=  nullptr && db_items->has_data());
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation());
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/adjacency-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::AdjacencyItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "name")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    if_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems>())
{
    if_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfItems()
    :
    if_list(this, {"ifid"})
{

    yang_name = "if-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::~IfItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IfList()
    :
    ifid{YType::str, "ifId"}
        ,
    ip_items(std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems>())
{
    ip_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::~IfList()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return ifid.is_set
	|| (ip_items !=  nullptr && ip_items->has_data());
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| (ip_items !=  nullptr && ip_items->has_operation());
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(ifid, "ifId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems>();
        }
        return ip_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-items" || name == "ifId")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::IpItems()
    :
    adjep_list(this, {"ip"})
{

    yang_name = "ip-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::~IpItems()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto ent_ = std::make_shared<System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList>();
        ent_->parent = this;
        adjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : adjep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::AdjEpList()
    :
    ip{YType::str, "ip"},
    mac{YType::str, "mac"},
    operst{YType::enumeration, "operSt"},
    physifid{YType::str, "physIfId"},
    source{YType::str, "source"},
    flags{YType::str, "flags"},
    name{YType::str, "name"}
{

    yang_name = "AdjEp-list"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::~AdjEpList()
{
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| mac.is_set
	|| operst.is_set
	|| physifid.is_set
	|| source.is_set
	|| flags.is_set
	|| name.is_set;
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(physifid.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (physifid.is_set || is_set(physifid.yfilter)) leaf_name_data.push_back(physifid.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physIfId")
    {
        physifid = value;
        physifid.value_namespace = name_space;
        physifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "physIfId")
    {
        physifid.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mac" || name == "operSt" || name == "physIfId" || name == "source" || name == "flags" || name == "name")
        return true;
    return false;
}

System::ArpItems::ArpItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::ArpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "arp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::~ArpItems()
{
}

bool System::ArpItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::ArpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::ArpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::ArpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::ArpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ArpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ArpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::ArpItems::InstItems::InstItems()
    :
    timeout{YType::uint16, "timeout"},
    evpn_timeout{YType::uint16, "evpn_timeout"},
    suppression_timeout{YType::uint16, "suppression_timeout"},
    offlisttimeout{YType::uint16, "offListTimeout"},
    rarpfabricfwding{YType::enumeration, "rarpFabricFwding"},
    rarpfabricfwdingrate{YType::uint16, "rarpFabricFwdingRate"},
    cachelimit{YType::uint32, "cacheLimit"},
    cachesyslograte{YType::uint32, "cacheSyslogRate"},
    logginglevel{YType::enumeration, "loggingLevel"},
    adjlogginglevel{YType::enumeration, "adjLoggingLevel"},
    ipadjroutedistance{YType::uint32, "ipAdjRouteDistance"},
    allowstaticarpoutsidesubnet{YType::enumeration, "allowStaticArpOutsideSubnet"},
    arpunnumsviswreplication{YType::enumeration, "arpUnnumSviSwReplication"},
    configerr{YType::str, "configErr"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    globalstats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems>())
    , dom_items(std::make_shared<System::ArpItems::InstItems::DomItems>())
    , ipgleanthrottle_items(std::make_shared<System::ArpItems::InstItems::IpgleanthrottleItems>())
    , evtlogs_items(std::make_shared<System::ArpItems::InstItems::EvtLogsItems>())
    , vpc_items(std::make_shared<System::ArpItems::InstItems::VpcItems>())
    , db_items(std::make_shared<System::ArpItems::InstItems::DbItems>())
{
    globalstats_items->parent = this;
    dom_items->parent = this;
    ipgleanthrottle_items->parent = this;
    evtlogs_items->parent = this;
    vpc_items->parent = this;
    db_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "arp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::~InstItems()
{
}

bool System::ArpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| evpn_timeout.is_set
	|| suppression_timeout.is_set
	|| offlisttimeout.is_set
	|| rarpfabricfwding.is_set
	|| rarpfabricfwdingrate.is_set
	|| cachelimit.is_set
	|| cachesyslograte.is_set
	|| logginglevel.is_set
	|| adjlogginglevel.is_set
	|| ipadjroutedistance.is_set
	|| allowstaticarpoutsidesubnet.is_set
	|| arpunnumsviswreplication.is_set
	|| configerr.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (globalstats_items !=  nullptr && globalstats_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (ipgleanthrottle_items !=  nullptr && ipgleanthrottle_items->has_data())
	|| (evtlogs_items !=  nullptr && evtlogs_items->has_data())
	|| (vpc_items !=  nullptr && vpc_items->has_data())
	|| (db_items !=  nullptr && db_items->has_data());
}

bool System::ArpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(evpn_timeout.yfilter)
	|| ydk::is_set(suppression_timeout.yfilter)
	|| ydk::is_set(offlisttimeout.yfilter)
	|| ydk::is_set(rarpfabricfwding.yfilter)
	|| ydk::is_set(rarpfabricfwdingrate.yfilter)
	|| ydk::is_set(cachelimit.yfilter)
	|| ydk::is_set(cachesyslograte.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(adjlogginglevel.yfilter)
	|| ydk::is_set(ipadjroutedistance.yfilter)
	|| ydk::is_set(allowstaticarpoutsidesubnet.yfilter)
	|| ydk::is_set(arpunnumsviswreplication.yfilter)
	|| ydk::is_set(configerr.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (globalstats_items !=  nullptr && globalstats_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (ipgleanthrottle_items !=  nullptr && ipgleanthrottle_items->has_operation())
	|| (evtlogs_items !=  nullptr && evtlogs_items->has_operation())
	|| (vpc_items !=  nullptr && vpc_items->has_operation())
	|| (db_items !=  nullptr && db_items->has_operation());
}

std::string System::ArpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (evpn_timeout.is_set || is_set(evpn_timeout.yfilter)) leaf_name_data.push_back(evpn_timeout.get_name_leafdata());
    if (suppression_timeout.is_set || is_set(suppression_timeout.yfilter)) leaf_name_data.push_back(suppression_timeout.get_name_leafdata());
    if (offlisttimeout.is_set || is_set(offlisttimeout.yfilter)) leaf_name_data.push_back(offlisttimeout.get_name_leafdata());
    if (rarpfabricfwding.is_set || is_set(rarpfabricfwding.yfilter)) leaf_name_data.push_back(rarpfabricfwding.get_name_leafdata());
    if (rarpfabricfwdingrate.is_set || is_set(rarpfabricfwdingrate.yfilter)) leaf_name_data.push_back(rarpfabricfwdingrate.get_name_leafdata());
    if (cachelimit.is_set || is_set(cachelimit.yfilter)) leaf_name_data.push_back(cachelimit.get_name_leafdata());
    if (cachesyslograte.is_set || is_set(cachesyslograte.yfilter)) leaf_name_data.push_back(cachesyslograte.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (adjlogginglevel.is_set || is_set(adjlogginglevel.yfilter)) leaf_name_data.push_back(adjlogginglevel.get_name_leafdata());
    if (ipadjroutedistance.is_set || is_set(ipadjroutedistance.yfilter)) leaf_name_data.push_back(ipadjroutedistance.get_name_leafdata());
    if (allowstaticarpoutsidesubnet.is_set || is_set(allowstaticarpoutsidesubnet.yfilter)) leaf_name_data.push_back(allowstaticarpoutsidesubnet.get_name_leafdata());
    if (arpunnumsviswreplication.is_set || is_set(arpunnumsviswreplication.yfilter)) leaf_name_data.push_back(arpunnumsviswreplication.get_name_leafdata());
    if (configerr.is_set || is_set(configerr.yfilter)) leaf_name_data.push_back(configerr.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "globalstats-items")
    {
        if(globalstats_items == nullptr)
        {
            globalstats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems>();
        }
        return globalstats_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::ArpItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "ipgleanthrottle-items")
    {
        if(ipgleanthrottle_items == nullptr)
        {
            ipgleanthrottle_items = std::make_shared<System::ArpItems::InstItems::IpgleanthrottleItems>();
        }
        return ipgleanthrottle_items;
    }

    if(child_yang_name == "evtLogs-items")
    {
        if(evtlogs_items == nullptr)
        {
            evtlogs_items = std::make_shared<System::ArpItems::InstItems::EvtLogsItems>();
        }
        return evtlogs_items;
    }

    if(child_yang_name == "vpc-items")
    {
        if(vpc_items == nullptr)
        {
            vpc_items = std::make_shared<System::ArpItems::InstItems::VpcItems>();
        }
        return vpc_items;
    }

    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::ArpItems::InstItems::DbItems>();
        }
        return db_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(globalstats_items != nullptr)
    {
        _children["globalstats-items"] = globalstats_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(ipgleanthrottle_items != nullptr)
    {
        _children["ipgleanthrottle-items"] = ipgleanthrottle_items;
    }

    if(evtlogs_items != nullptr)
    {
        _children["evtLogs-items"] = evtlogs_items;
    }

    if(vpc_items != nullptr)
    {
        _children["vpc-items"] = vpc_items;
    }

    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    return _children;
}

void System::ArpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn_timeout")
    {
        evpn_timeout = value;
        evpn_timeout.value_namespace = name_space;
        evpn_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression_timeout")
    {
        suppression_timeout = value;
        suppression_timeout.value_namespace = name_space;
        suppression_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offListTimeout")
    {
        offlisttimeout = value;
        offlisttimeout.value_namespace = name_space;
        offlisttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rarpFabricFwding")
    {
        rarpfabricfwding = value;
        rarpfabricfwding.value_namespace = name_space;
        rarpfabricfwding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rarpFabricFwdingRate")
    {
        rarpfabricfwdingrate = value;
        rarpfabricfwdingrate.value_namespace = name_space;
        rarpfabricfwdingrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cacheLimit")
    {
        cachelimit = value;
        cachelimit.value_namespace = name_space;
        cachelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cacheSyslogRate")
    {
        cachesyslograte = value;
        cachesyslograte.value_namespace = name_space;
        cachesyslograte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjLoggingLevel")
    {
        adjlogginglevel = value;
        adjlogginglevel.value_namespace = name_space;
        adjlogginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipAdjRouteDistance")
    {
        ipadjroutedistance = value;
        ipadjroutedistance.value_namespace = name_space;
        ipadjroutedistance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowStaticArpOutsideSubnet")
    {
        allowstaticarpoutsidesubnet = value;
        allowstaticarpoutsidesubnet.value_namespace = name_space;
        allowstaticarpoutsidesubnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arpUnnumSviSwReplication")
    {
        arpunnumsviswreplication = value;
        arpunnumsviswreplication.value_namespace = name_space;
        arpunnumsviswreplication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configErr")
    {
        configerr = value;
        configerr.value_namespace = name_space;
        configerr.value_namespace_prefix = name_space_prefix;
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
}

void System::ArpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "evpn_timeout")
    {
        evpn_timeout.yfilter = yfilter;
    }
    if(value_path == "suppression_timeout")
    {
        suppression_timeout.yfilter = yfilter;
    }
    if(value_path == "offListTimeout")
    {
        offlisttimeout.yfilter = yfilter;
    }
    if(value_path == "rarpFabricFwding")
    {
        rarpfabricfwding.yfilter = yfilter;
    }
    if(value_path == "rarpFabricFwdingRate")
    {
        rarpfabricfwdingrate.yfilter = yfilter;
    }
    if(value_path == "cacheLimit")
    {
        cachelimit.yfilter = yfilter;
    }
    if(value_path == "cacheSyslogRate")
    {
        cachesyslograte.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "adjLoggingLevel")
    {
        adjlogginglevel.yfilter = yfilter;
    }
    if(value_path == "ipAdjRouteDistance")
    {
        ipadjroutedistance.yfilter = yfilter;
    }
    if(value_path == "allowStaticArpOutsideSubnet")
    {
        allowstaticarpoutsidesubnet.yfilter = yfilter;
    }
    if(value_path == "arpUnnumSviSwReplication")
    {
        arpunnumsviswreplication.yfilter = yfilter;
    }
    if(value_path == "configErr")
    {
        configerr.yfilter = yfilter;
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
}

bool System::ArpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "globalstats-items" || name == "dom-items" || name == "ipgleanthrottle-items" || name == "evtLogs-items" || name == "vpc-items" || name == "db-items" || name == "timeout" || name == "evpn_timeout" || name == "suppression_timeout" || name == "offListTimeout" || name == "rarpFabricFwding" || name == "rarpFabricFwdingRate" || name == "cacheLimit" || name == "cacheSyslogRate" || name == "loggingLevel" || name == "adjLoggingLevel" || name == "ipAdjRouteDistance" || name == "allowStaticArpOutsideSubnet" || name == "arpUnnumSviSwReplication" || name == "configErr" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::GlobalstatsItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"}
        ,
    controllerstats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems>())
    , vpcstats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems>())
    , tunnelstats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems>())
    , supcachestats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems>())
    , ofastats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems>())
{
    controllerstats_items->parent = this;
    vpcstats_items->parent = this;
    tunnelstats_items->parent = this;
    supcachestats_items->parent = this;
    ofastats_items->parent = this;

    yang_name = "globalstats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::~GlobalstatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| (controllerstats_items !=  nullptr && controllerstats_items->has_data())
	|| (vpcstats_items !=  nullptr && vpcstats_items->has_data())
	|| (tunnelstats_items !=  nullptr && tunnelstats_items->has_data())
	|| (supcachestats_items !=  nullptr && supcachestats_items->has_data())
	|| (ofastats_items !=  nullptr && ofastats_items->has_data());
}

bool System::ArpItems::InstItems::GlobalstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| (controllerstats_items !=  nullptr && controllerstats_items->has_operation())
	|| (vpcstats_items !=  nullptr && vpcstats_items->has_operation())
	|| (tunnelstats_items !=  nullptr && tunnelstats_items->has_operation())
	|| (supcachestats_items !=  nullptr && supcachestats_items->has_operation())
	|| (ofastats_items !=  nullptr && ofastats_items->has_operation());
}

std::string System::ArpItems::InstItems::GlobalstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "globalstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controllerstats-items")
    {
        if(controllerstats_items == nullptr)
        {
            controllerstats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems>();
        }
        return controllerstats_items;
    }

    if(child_yang_name == "vpcstats-items")
    {
        if(vpcstats_items == nullptr)
        {
            vpcstats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems>();
        }
        return vpcstats_items;
    }

    if(child_yang_name == "tunnelstats-items")
    {
        if(tunnelstats_items == nullptr)
        {
            tunnelstats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems>();
        }
        return tunnelstats_items;
    }

    if(child_yang_name == "supcachestats-items")
    {
        if(supcachestats_items == nullptr)
        {
            supcachestats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems>();
        }
        return supcachestats_items;
    }

    if(child_yang_name == "ofastats-items")
    {
        if(ofastats_items == nullptr)
        {
            ofastats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems>();
        }
        return ofastats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(controllerstats_items != nullptr)
    {
        _children["controllerstats-items"] = controllerstats_items;
    }

    if(vpcstats_items != nullptr)
    {
        _children["vpcstats-items"] = vpcstats_items;
    }

    if(tunnelstats_items != nullptr)
    {
        _children["tunnelstats-items"] = tunnelstats_items;
    }

    if(supcachestats_items != nullptr)
    {
        _children["supcachestats-items"] = supcachestats_items;
    }

    if(ofastats_items != nullptr)
    {
        _children["ofastats-items"] = ofastats_items;
    }

    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void System::ArpItems::InstItems::GlobalstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool System::ArpItems::InstItems::GlobalstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controllerstats-items" || name == "vpcstats-items" || name == "tunnelstats-items" || name == "supcachestats-items" || name == "ofastats-items" || name == "name" || name == "adminSt" || name == "ctrl")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::ControllerstatsItems()
    :
    adjaddcount{YType::uint64, "adjAddCount"},
    adjdelcount{YType::uint64, "adjDelCount"},
    adjadderrorcount{YType::uint64, "adjAddErrorCount"},
    adjdelerrorcount{YType::uint64, "adjDelErrorCount"}
{

    yang_name = "controllerstats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::~ControllerstatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return adjaddcount.is_set
	|| adjdelcount.is_set
	|| adjadderrorcount.is_set
	|| adjdelerrorcount.is_set;
}

bool System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjaddcount.yfilter)
	|| ydk::is_set(adjdelcount.yfilter)
	|| ydk::is_set(adjadderrorcount.yfilter)
	|| ydk::is_set(adjdelerrorcount.yfilter);
}

std::string System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controllerstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjaddcount.is_set || is_set(adjaddcount.yfilter)) leaf_name_data.push_back(adjaddcount.get_name_leafdata());
    if (adjdelcount.is_set || is_set(adjdelcount.yfilter)) leaf_name_data.push_back(adjdelcount.get_name_leafdata());
    if (adjadderrorcount.is_set || is_set(adjadderrorcount.yfilter)) leaf_name_data.push_back(adjadderrorcount.get_name_leafdata());
    if (adjdelerrorcount.is_set || is_set(adjdelerrorcount.yfilter)) leaf_name_data.push_back(adjdelerrorcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjAddCount")
    {
        adjaddcount = value;
        adjaddcount.value_namespace = name_space;
        adjaddcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjDelCount")
    {
        adjdelcount = value;
        adjdelcount.value_namespace = name_space;
        adjdelcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjAddErrorCount")
    {
        adjadderrorcount = value;
        adjadderrorcount.value_namespace = name_space;
        adjadderrorcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjDelErrorCount")
    {
        adjdelerrorcount = value;
        adjdelerrorcount.value_namespace = name_space;
        adjdelerrorcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjAddCount")
    {
        adjaddcount.yfilter = yfilter;
    }
    if(value_path == "adjDelCount")
    {
        adjdelcount.yfilter = yfilter;
    }
    if(value_path == "adjAddErrorCount")
    {
        adjadderrorcount.yfilter = yfilter;
    }
    if(value_path == "adjDelErrorCount")
    {
        adjdelerrorcount.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjAddCount" || name == "adjDelCount" || name == "adjAddErrorCount" || name == "adjDelErrorCount")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::VpcstatsItems()
    :
    cfspulldropsinceoff{YType::uint64, "cfsPullDropSinceOff"},
    cfspushdropsinceoff{YType::uint64, "cfsPushDropSinceOff"},
    sendignorepullreqcfsoe{YType::uint64, "sendIgnorePullReqCfsoe"},
    sendignorepushmsgcfsoe{YType::uint64, "sendIgnorePushMsgCfsoe"},
    imfailcfspayload{YType::uint64, "imFailCFSPayload"},
    mcecmfailcfspayload{YType::uint64, "mcecmFailCFSPayload"},
    invalidmctpccfspayload{YType::uint64, "invalidMctPcCFSPayload"},
    ptlookfailcfspayload{YType::uint64, "ptLookFailCFSPayload"},
    cfsrspfailinvalidmct{YType::uint64, "cfsRspFailInvalidMct"},
    cfsrspfailcfspayload{YType::uint64, "cfsRspFailCfsPayload"},
    retrievevpcfailpushmsg{YType::uint64, "retrieveVpcFailPushMsg"},
    retifindexfrmvpcfail{YType::uint64, "retIfindexFrmVpcFail"},
    retifindexfrmvpcfailsync{YType::uint64, "retIfindexFrmVpcFailSync"},
    rspsentcfsoe{YType::uint64, "rspSentCfsoe"},
    rsprecvcfsoe{YType::uint64, "rspRecvCfsoe"},
    rsprecvcfsoeerr{YType::uint64, "rspRecvCfsoeErr"},
    recvcfsoe{YType::uint64, "recvCfsoe"},
    sentfailcfsoe{YType::uint64, "sentFailCfsoe"},
    mcecmsendapifailcfsoe{YType::uint64, "mcecmSendApiFailCfsoe"},
    sendcfsoe{YType::uint64, "sendCfsoe"},
    vmctpktdropcount{YType::uint64, "vmctPktDropCount"}
        ,
    syncstats_items(std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems>())
{
    syncstats_items->parent = this;

    yang_name = "vpcstats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::~VpcstatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return cfspulldropsinceoff.is_set
	|| cfspushdropsinceoff.is_set
	|| sendignorepullreqcfsoe.is_set
	|| sendignorepushmsgcfsoe.is_set
	|| imfailcfspayload.is_set
	|| mcecmfailcfspayload.is_set
	|| invalidmctpccfspayload.is_set
	|| ptlookfailcfspayload.is_set
	|| cfsrspfailinvalidmct.is_set
	|| cfsrspfailcfspayload.is_set
	|| retrievevpcfailpushmsg.is_set
	|| retifindexfrmvpcfail.is_set
	|| retifindexfrmvpcfailsync.is_set
	|| rspsentcfsoe.is_set
	|| rsprecvcfsoe.is_set
	|| rsprecvcfsoeerr.is_set
	|| recvcfsoe.is_set
	|| sentfailcfsoe.is_set
	|| mcecmsendapifailcfsoe.is_set
	|| sendcfsoe.is_set
	|| vmctpktdropcount.is_set
	|| (syncstats_items !=  nullptr && syncstats_items->has_data());
}

bool System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cfspulldropsinceoff.yfilter)
	|| ydk::is_set(cfspushdropsinceoff.yfilter)
	|| ydk::is_set(sendignorepullreqcfsoe.yfilter)
	|| ydk::is_set(sendignorepushmsgcfsoe.yfilter)
	|| ydk::is_set(imfailcfspayload.yfilter)
	|| ydk::is_set(mcecmfailcfspayload.yfilter)
	|| ydk::is_set(invalidmctpccfspayload.yfilter)
	|| ydk::is_set(ptlookfailcfspayload.yfilter)
	|| ydk::is_set(cfsrspfailinvalidmct.yfilter)
	|| ydk::is_set(cfsrspfailcfspayload.yfilter)
	|| ydk::is_set(retrievevpcfailpushmsg.yfilter)
	|| ydk::is_set(retifindexfrmvpcfail.yfilter)
	|| ydk::is_set(retifindexfrmvpcfailsync.yfilter)
	|| ydk::is_set(rspsentcfsoe.yfilter)
	|| ydk::is_set(rsprecvcfsoe.yfilter)
	|| ydk::is_set(rsprecvcfsoeerr.yfilter)
	|| ydk::is_set(recvcfsoe.yfilter)
	|| ydk::is_set(sentfailcfsoe.yfilter)
	|| ydk::is_set(mcecmsendapifailcfsoe.yfilter)
	|| ydk::is_set(sendcfsoe.yfilter)
	|| ydk::is_set(vmctpktdropcount.yfilter)
	|| (syncstats_items !=  nullptr && syncstats_items->has_operation());
}

std::string System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpcstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfspulldropsinceoff.is_set || is_set(cfspulldropsinceoff.yfilter)) leaf_name_data.push_back(cfspulldropsinceoff.get_name_leafdata());
    if (cfspushdropsinceoff.is_set || is_set(cfspushdropsinceoff.yfilter)) leaf_name_data.push_back(cfspushdropsinceoff.get_name_leafdata());
    if (sendignorepullreqcfsoe.is_set || is_set(sendignorepullreqcfsoe.yfilter)) leaf_name_data.push_back(sendignorepullreqcfsoe.get_name_leafdata());
    if (sendignorepushmsgcfsoe.is_set || is_set(sendignorepushmsgcfsoe.yfilter)) leaf_name_data.push_back(sendignorepushmsgcfsoe.get_name_leafdata());
    if (imfailcfspayload.is_set || is_set(imfailcfspayload.yfilter)) leaf_name_data.push_back(imfailcfspayload.get_name_leafdata());
    if (mcecmfailcfspayload.is_set || is_set(mcecmfailcfspayload.yfilter)) leaf_name_data.push_back(mcecmfailcfspayload.get_name_leafdata());
    if (invalidmctpccfspayload.is_set || is_set(invalidmctpccfspayload.yfilter)) leaf_name_data.push_back(invalidmctpccfspayload.get_name_leafdata());
    if (ptlookfailcfspayload.is_set || is_set(ptlookfailcfspayload.yfilter)) leaf_name_data.push_back(ptlookfailcfspayload.get_name_leafdata());
    if (cfsrspfailinvalidmct.is_set || is_set(cfsrspfailinvalidmct.yfilter)) leaf_name_data.push_back(cfsrspfailinvalidmct.get_name_leafdata());
    if (cfsrspfailcfspayload.is_set || is_set(cfsrspfailcfspayload.yfilter)) leaf_name_data.push_back(cfsrspfailcfspayload.get_name_leafdata());
    if (retrievevpcfailpushmsg.is_set || is_set(retrievevpcfailpushmsg.yfilter)) leaf_name_data.push_back(retrievevpcfailpushmsg.get_name_leafdata());
    if (retifindexfrmvpcfail.is_set || is_set(retifindexfrmvpcfail.yfilter)) leaf_name_data.push_back(retifindexfrmvpcfail.get_name_leafdata());
    if (retifindexfrmvpcfailsync.is_set || is_set(retifindexfrmvpcfailsync.yfilter)) leaf_name_data.push_back(retifindexfrmvpcfailsync.get_name_leafdata());
    if (rspsentcfsoe.is_set || is_set(rspsentcfsoe.yfilter)) leaf_name_data.push_back(rspsentcfsoe.get_name_leafdata());
    if (rsprecvcfsoe.is_set || is_set(rsprecvcfsoe.yfilter)) leaf_name_data.push_back(rsprecvcfsoe.get_name_leafdata());
    if (rsprecvcfsoeerr.is_set || is_set(rsprecvcfsoeerr.yfilter)) leaf_name_data.push_back(rsprecvcfsoeerr.get_name_leafdata());
    if (recvcfsoe.is_set || is_set(recvcfsoe.yfilter)) leaf_name_data.push_back(recvcfsoe.get_name_leafdata());
    if (sentfailcfsoe.is_set || is_set(sentfailcfsoe.yfilter)) leaf_name_data.push_back(sentfailcfsoe.get_name_leafdata());
    if (mcecmsendapifailcfsoe.is_set || is_set(mcecmsendapifailcfsoe.yfilter)) leaf_name_data.push_back(mcecmsendapifailcfsoe.get_name_leafdata());
    if (sendcfsoe.is_set || is_set(sendcfsoe.yfilter)) leaf_name_data.push_back(sendcfsoe.get_name_leafdata());
    if (vmctpktdropcount.is_set || is_set(vmctpktdropcount.yfilter)) leaf_name_data.push_back(vmctpktdropcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syncstats-items")
    {
        if(syncstats_items == nullptr)
        {
            syncstats_items = std::make_shared<System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems>();
        }
        return syncstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(syncstats_items != nullptr)
    {
        _children["syncstats-items"] = syncstats_items;
    }

    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cfsPullDropSinceOff")
    {
        cfspulldropsinceoff = value;
        cfspulldropsinceoff.value_namespace = name_space;
        cfspulldropsinceoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfsPushDropSinceOff")
    {
        cfspushdropsinceoff = value;
        cfspushdropsinceoff.value_namespace = name_space;
        cfspushdropsinceoff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendIgnorePullReqCfsoe")
    {
        sendignorepullreqcfsoe = value;
        sendignorepullreqcfsoe.value_namespace = name_space;
        sendignorepullreqcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendIgnorePushMsgCfsoe")
    {
        sendignorepushmsgcfsoe = value;
        sendignorepushmsgcfsoe.value_namespace = name_space;
        sendignorepushmsgcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imFailCFSPayload")
    {
        imfailcfspayload = value;
        imfailcfspayload.value_namespace = name_space;
        imfailcfspayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcecmFailCFSPayload")
    {
        mcecmfailcfspayload = value;
        mcecmfailcfspayload.value_namespace = name_space;
        mcecmfailcfspayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidMctPcCFSPayload")
    {
        invalidmctpccfspayload = value;
        invalidmctpccfspayload.value_namespace = name_space;
        invalidmctpccfspayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptLookFailCFSPayload")
    {
        ptlookfailcfspayload = value;
        ptlookfailcfspayload.value_namespace = name_space;
        ptlookfailcfspayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfsRspFailInvalidMct")
    {
        cfsrspfailinvalidmct = value;
        cfsrspfailinvalidmct.value_namespace = name_space;
        cfsrspfailinvalidmct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfsRspFailCfsPayload")
    {
        cfsrspfailcfspayload = value;
        cfsrspfailcfspayload.value_namespace = name_space;
        cfsrspfailcfspayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retrieveVpcFailPushMsg")
    {
        retrievevpcfailpushmsg = value;
        retrievevpcfailpushmsg.value_namespace = name_space;
        retrievevpcfailpushmsg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retIfindexFrmVpcFail")
    {
        retifindexfrmvpcfail = value;
        retifindexfrmvpcfail.value_namespace = name_space;
        retifindexfrmvpcfail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retIfindexFrmVpcFailSync")
    {
        retifindexfrmvpcfailsync = value;
        retifindexfrmvpcfailsync.value_namespace = name_space;
        retifindexfrmvpcfailsync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rspSentCfsoe")
    {
        rspsentcfsoe = value;
        rspsentcfsoe.value_namespace = name_space;
        rspsentcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rspRecvCfsoe")
    {
        rsprecvcfsoe = value;
        rsprecvcfsoe.value_namespace = name_space;
        rsprecvcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rspRecvCfsoeErr")
    {
        rsprecvcfsoeerr = value;
        rsprecvcfsoeerr.value_namespace = name_space;
        rsprecvcfsoeerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvCfsoe")
    {
        recvcfsoe = value;
        recvcfsoe.value_namespace = name_space;
        recvcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentFailCfsoe")
    {
        sentfailcfsoe = value;
        sentfailcfsoe.value_namespace = name_space;
        sentfailcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcecmSendApiFailCfsoe")
    {
        mcecmsendapifailcfsoe = value;
        mcecmsendapifailcfsoe.value_namespace = name_space;
        mcecmsendapifailcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendCfsoe")
    {
        sendcfsoe = value;
        sendcfsoe.value_namespace = name_space;
        sendcfsoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmctPktDropCount")
    {
        vmctpktdropcount = value;
        vmctpktdropcount.value_namespace = name_space;
        vmctpktdropcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cfsPullDropSinceOff")
    {
        cfspulldropsinceoff.yfilter = yfilter;
    }
    if(value_path == "cfsPushDropSinceOff")
    {
        cfspushdropsinceoff.yfilter = yfilter;
    }
    if(value_path == "sendIgnorePullReqCfsoe")
    {
        sendignorepullreqcfsoe.yfilter = yfilter;
    }
    if(value_path == "sendIgnorePushMsgCfsoe")
    {
        sendignorepushmsgcfsoe.yfilter = yfilter;
    }
    if(value_path == "imFailCFSPayload")
    {
        imfailcfspayload.yfilter = yfilter;
    }
    if(value_path == "mcecmFailCFSPayload")
    {
        mcecmfailcfspayload.yfilter = yfilter;
    }
    if(value_path == "invalidMctPcCFSPayload")
    {
        invalidmctpccfspayload.yfilter = yfilter;
    }
    if(value_path == "ptLookFailCFSPayload")
    {
        ptlookfailcfspayload.yfilter = yfilter;
    }
    if(value_path == "cfsRspFailInvalidMct")
    {
        cfsrspfailinvalidmct.yfilter = yfilter;
    }
    if(value_path == "cfsRspFailCfsPayload")
    {
        cfsrspfailcfspayload.yfilter = yfilter;
    }
    if(value_path == "retrieveVpcFailPushMsg")
    {
        retrievevpcfailpushmsg.yfilter = yfilter;
    }
    if(value_path == "retIfindexFrmVpcFail")
    {
        retifindexfrmvpcfail.yfilter = yfilter;
    }
    if(value_path == "retIfindexFrmVpcFailSync")
    {
        retifindexfrmvpcfailsync.yfilter = yfilter;
    }
    if(value_path == "rspSentCfsoe")
    {
        rspsentcfsoe.yfilter = yfilter;
    }
    if(value_path == "rspRecvCfsoe")
    {
        rsprecvcfsoe.yfilter = yfilter;
    }
    if(value_path == "rspRecvCfsoeErr")
    {
        rsprecvcfsoeerr.yfilter = yfilter;
    }
    if(value_path == "recvCfsoe")
    {
        recvcfsoe.yfilter = yfilter;
    }
    if(value_path == "sentFailCfsoe")
    {
        sentfailcfsoe.yfilter = yfilter;
    }
    if(value_path == "mcecmSendApiFailCfsoe")
    {
        mcecmsendapifailcfsoe.yfilter = yfilter;
    }
    if(value_path == "sendCfsoe")
    {
        sendcfsoe.yfilter = yfilter;
    }
    if(value_path == "vmctPktDropCount")
    {
        vmctpktdropcount.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syncstats-items" || name == "cfsPullDropSinceOff" || name == "cfsPushDropSinceOff" || name == "sendIgnorePullReqCfsoe" || name == "sendIgnorePushMsgCfsoe" || name == "imFailCFSPayload" || name == "mcecmFailCFSPayload" || name == "invalidMctPcCFSPayload" || name == "ptLookFailCFSPayload" || name == "cfsRspFailInvalidMct" || name == "cfsRspFailCfsPayload" || name == "retrieveVpcFailPushMsg" || name == "retIfindexFrmVpcFail" || name == "retIfindexFrmVpcFailSync" || name == "rspSentCfsoe" || name == "rspRecvCfsoe" || name == "rspRecvCfsoeErr" || name == "recvCfsoe" || name == "sentFailCfsoe" || name == "mcecmSendApiFailCfsoe" || name == "sendCfsoe" || name == "vmctPktDropCount")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::SyncstatsItems()
    :
    ptaddfailofflist{YType::uint64, "ptAddFailOfflist"},
    mallocfailofflistdb{YType::uint64, "mallocFailOfflistDb"},
    timercreatefailofflistdb{YType::uint64, "timerCreateFailOfflistDb"},
    adjaddfailofflistdb{YType::uint64, "adjAddFailOfflistDb"},
    ptlookupfailofflistdb{YType::uint64, "ptLookupFailOfflistDb"},
    vlanmismatchofflistdb{YType::uint64, "vlanMismatchOfflistDb"},
    invalidsviofflistdb{YType::uint64, "invalidSviOfflistDb"},
    svidownofflistdb{YType::uint64, "sviDownOfflistDb"},
    mctdownofflistdb{YType::uint64, "mctDownOfflistDb"},
    ctxtypeinvalidofflistdb{YType::uint64, "ctxTypeInvalidOfflistDb"},
    vrfinvalidofflistdb{YType::uint64, "vrfInvalidOfflistDb"},
    invalidipofflistdb{YType::uint64, "invalidIpOfflistDb"},
    ipsanityfailofflistdb{YType::uint64, "ipSanityFailOfflistDb"},
    macsanityfailofflistdb{YType::uint64, "macSanityFailOfflistDb"},
    ownroutermacofflistdb{YType::uint64, "ownRouterMacOfflistDb"},
    ownipofflistdb{YType::uint64, "ownIpOfflistDb"},
    ownvipofflistdb{YType::uint64, "ownvIpOfflistDb"},
    adjcreatefailofflistdb{YType::uint64, "adjCreateFailOfflistDb"},
    subnetmismatchofflistdb{YType::uint64, "subnetMismatchOfflistDb"},
    dupentryofflistdb{YType::uint64, "dupEntryOfflistDb"},
    ipnotenofflistdb{YType::uint64, "ipNotEnOfflistDb"},
    totdropofflistdb{YType::uint64, "totDropOfflistDb"},
    totdontdropofflistdb{YType::uint64, "totDontDropOfflistDb"},
    totadjaddofflistdb{YType::uint64, "totAdjAddOfflistDb"},
    totadjdelofflistdb{YType::uint64, "totAdjDelOfflistDb"},
    totadjignoredofflistdb{YType::uint64, "totAdjIgnoredOfflistDb"},
    totadjfrmpeertoadd{YType::uint64, "totAdjFrmPeerToAdd"},
    totadjfrmpeertodel{YType::uint64, "totAdjFrmPeerToDel"},
    totadjsentperiodically{YType::uint64, "totAdjSentPeriodically"},
    totadjpeertoadd{YType::uint64, "totAdjPeerToAdd"},
    totadjpeertodel{YType::uint64, "totAdjPeerToDel"},
    totperiodicsyncadj{YType::uint64, "totPeriodicSyncAdj"},
    totadjaddfailduringsyncsend{YType::uint64, "totAdjAddFailDuringSyncSend"},
    totdropduringsyncinvalidsvi{YType::uint64, "totDropDuringSyncInvalidSvi"},
    totdropsyncsvidown{YType::uint64, "totDropSyncSviDown"},
    totdropsyncinvalidctxt{YType::uint64, "totDropSyncInvalidCtxt"},
    totdropsyncnulladj{YType::uint64, "totDropSyncNullAdj"},
    totdropsyncnullip{YType::uint64, "totDropSyncNullIp"},
    totsyncadjaddl2supcache{YType::uint64, "totSyncAdjAddL2SupCache"},
    totsyncstopbcastpkt{YType::uint64, "totSyncStopBcastPkt"},
    totvmctorphansyncdropcount{YType::uint64, "totVmctOrphanSyncDropCount"}
{

    yang_name = "syncstats-items"; yang_parent_name = "vpcstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::~SyncstatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return ptaddfailofflist.is_set
	|| mallocfailofflistdb.is_set
	|| timercreatefailofflistdb.is_set
	|| adjaddfailofflistdb.is_set
	|| ptlookupfailofflistdb.is_set
	|| vlanmismatchofflistdb.is_set
	|| invalidsviofflistdb.is_set
	|| svidownofflistdb.is_set
	|| mctdownofflistdb.is_set
	|| ctxtypeinvalidofflistdb.is_set
	|| vrfinvalidofflistdb.is_set
	|| invalidipofflistdb.is_set
	|| ipsanityfailofflistdb.is_set
	|| macsanityfailofflistdb.is_set
	|| ownroutermacofflistdb.is_set
	|| ownipofflistdb.is_set
	|| ownvipofflistdb.is_set
	|| adjcreatefailofflistdb.is_set
	|| subnetmismatchofflistdb.is_set
	|| dupentryofflistdb.is_set
	|| ipnotenofflistdb.is_set
	|| totdropofflistdb.is_set
	|| totdontdropofflistdb.is_set
	|| totadjaddofflistdb.is_set
	|| totadjdelofflistdb.is_set
	|| totadjignoredofflistdb.is_set
	|| totadjfrmpeertoadd.is_set
	|| totadjfrmpeertodel.is_set
	|| totadjsentperiodically.is_set
	|| totadjpeertoadd.is_set
	|| totadjpeertodel.is_set
	|| totperiodicsyncadj.is_set
	|| totadjaddfailduringsyncsend.is_set
	|| totdropduringsyncinvalidsvi.is_set
	|| totdropsyncsvidown.is_set
	|| totdropsyncinvalidctxt.is_set
	|| totdropsyncnulladj.is_set
	|| totdropsyncnullip.is_set
	|| totsyncadjaddl2supcache.is_set
	|| totsyncstopbcastpkt.is_set
	|| totvmctorphansyncdropcount.is_set;
}

bool System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ptaddfailofflist.yfilter)
	|| ydk::is_set(mallocfailofflistdb.yfilter)
	|| ydk::is_set(timercreatefailofflistdb.yfilter)
	|| ydk::is_set(adjaddfailofflistdb.yfilter)
	|| ydk::is_set(ptlookupfailofflistdb.yfilter)
	|| ydk::is_set(vlanmismatchofflistdb.yfilter)
	|| ydk::is_set(invalidsviofflistdb.yfilter)
	|| ydk::is_set(svidownofflistdb.yfilter)
	|| ydk::is_set(mctdownofflistdb.yfilter)
	|| ydk::is_set(ctxtypeinvalidofflistdb.yfilter)
	|| ydk::is_set(vrfinvalidofflistdb.yfilter)
	|| ydk::is_set(invalidipofflistdb.yfilter)
	|| ydk::is_set(ipsanityfailofflistdb.yfilter)
	|| ydk::is_set(macsanityfailofflistdb.yfilter)
	|| ydk::is_set(ownroutermacofflistdb.yfilter)
	|| ydk::is_set(ownipofflistdb.yfilter)
	|| ydk::is_set(ownvipofflistdb.yfilter)
	|| ydk::is_set(adjcreatefailofflistdb.yfilter)
	|| ydk::is_set(subnetmismatchofflistdb.yfilter)
	|| ydk::is_set(dupentryofflistdb.yfilter)
	|| ydk::is_set(ipnotenofflistdb.yfilter)
	|| ydk::is_set(totdropofflistdb.yfilter)
	|| ydk::is_set(totdontdropofflistdb.yfilter)
	|| ydk::is_set(totadjaddofflistdb.yfilter)
	|| ydk::is_set(totadjdelofflistdb.yfilter)
	|| ydk::is_set(totadjignoredofflistdb.yfilter)
	|| ydk::is_set(totadjfrmpeertoadd.yfilter)
	|| ydk::is_set(totadjfrmpeertodel.yfilter)
	|| ydk::is_set(totadjsentperiodically.yfilter)
	|| ydk::is_set(totadjpeertoadd.yfilter)
	|| ydk::is_set(totadjpeertodel.yfilter)
	|| ydk::is_set(totperiodicsyncadj.yfilter)
	|| ydk::is_set(totadjaddfailduringsyncsend.yfilter)
	|| ydk::is_set(totdropduringsyncinvalidsvi.yfilter)
	|| ydk::is_set(totdropsyncsvidown.yfilter)
	|| ydk::is_set(totdropsyncinvalidctxt.yfilter)
	|| ydk::is_set(totdropsyncnulladj.yfilter)
	|| ydk::is_set(totdropsyncnullip.yfilter)
	|| ydk::is_set(totsyncadjaddl2supcache.yfilter)
	|| ydk::is_set(totsyncstopbcastpkt.yfilter)
	|| ydk::is_set(totvmctorphansyncdropcount.yfilter);
}

std::string System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/globalstats-items/vpcstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syncstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ptaddfailofflist.is_set || is_set(ptaddfailofflist.yfilter)) leaf_name_data.push_back(ptaddfailofflist.get_name_leafdata());
    if (mallocfailofflistdb.is_set || is_set(mallocfailofflistdb.yfilter)) leaf_name_data.push_back(mallocfailofflistdb.get_name_leafdata());
    if (timercreatefailofflistdb.is_set || is_set(timercreatefailofflistdb.yfilter)) leaf_name_data.push_back(timercreatefailofflistdb.get_name_leafdata());
    if (adjaddfailofflistdb.is_set || is_set(adjaddfailofflistdb.yfilter)) leaf_name_data.push_back(adjaddfailofflistdb.get_name_leafdata());
    if (ptlookupfailofflistdb.is_set || is_set(ptlookupfailofflistdb.yfilter)) leaf_name_data.push_back(ptlookupfailofflistdb.get_name_leafdata());
    if (vlanmismatchofflistdb.is_set || is_set(vlanmismatchofflistdb.yfilter)) leaf_name_data.push_back(vlanmismatchofflistdb.get_name_leafdata());
    if (invalidsviofflistdb.is_set || is_set(invalidsviofflistdb.yfilter)) leaf_name_data.push_back(invalidsviofflistdb.get_name_leafdata());
    if (svidownofflistdb.is_set || is_set(svidownofflistdb.yfilter)) leaf_name_data.push_back(svidownofflistdb.get_name_leafdata());
    if (mctdownofflistdb.is_set || is_set(mctdownofflistdb.yfilter)) leaf_name_data.push_back(mctdownofflistdb.get_name_leafdata());
    if (ctxtypeinvalidofflistdb.is_set || is_set(ctxtypeinvalidofflistdb.yfilter)) leaf_name_data.push_back(ctxtypeinvalidofflistdb.get_name_leafdata());
    if (vrfinvalidofflistdb.is_set || is_set(vrfinvalidofflistdb.yfilter)) leaf_name_data.push_back(vrfinvalidofflistdb.get_name_leafdata());
    if (invalidipofflistdb.is_set || is_set(invalidipofflistdb.yfilter)) leaf_name_data.push_back(invalidipofflistdb.get_name_leafdata());
    if (ipsanityfailofflistdb.is_set || is_set(ipsanityfailofflistdb.yfilter)) leaf_name_data.push_back(ipsanityfailofflistdb.get_name_leafdata());
    if (macsanityfailofflistdb.is_set || is_set(macsanityfailofflistdb.yfilter)) leaf_name_data.push_back(macsanityfailofflistdb.get_name_leafdata());
    if (ownroutermacofflistdb.is_set || is_set(ownroutermacofflistdb.yfilter)) leaf_name_data.push_back(ownroutermacofflistdb.get_name_leafdata());
    if (ownipofflistdb.is_set || is_set(ownipofflistdb.yfilter)) leaf_name_data.push_back(ownipofflistdb.get_name_leafdata());
    if (ownvipofflistdb.is_set || is_set(ownvipofflistdb.yfilter)) leaf_name_data.push_back(ownvipofflistdb.get_name_leafdata());
    if (adjcreatefailofflistdb.is_set || is_set(adjcreatefailofflistdb.yfilter)) leaf_name_data.push_back(adjcreatefailofflistdb.get_name_leafdata());
    if (subnetmismatchofflistdb.is_set || is_set(subnetmismatchofflistdb.yfilter)) leaf_name_data.push_back(subnetmismatchofflistdb.get_name_leafdata());
    if (dupentryofflistdb.is_set || is_set(dupentryofflistdb.yfilter)) leaf_name_data.push_back(dupentryofflistdb.get_name_leafdata());
    if (ipnotenofflistdb.is_set || is_set(ipnotenofflistdb.yfilter)) leaf_name_data.push_back(ipnotenofflistdb.get_name_leafdata());
    if (totdropofflistdb.is_set || is_set(totdropofflistdb.yfilter)) leaf_name_data.push_back(totdropofflistdb.get_name_leafdata());
    if (totdontdropofflistdb.is_set || is_set(totdontdropofflistdb.yfilter)) leaf_name_data.push_back(totdontdropofflistdb.get_name_leafdata());
    if (totadjaddofflistdb.is_set || is_set(totadjaddofflistdb.yfilter)) leaf_name_data.push_back(totadjaddofflistdb.get_name_leafdata());
    if (totadjdelofflistdb.is_set || is_set(totadjdelofflistdb.yfilter)) leaf_name_data.push_back(totadjdelofflistdb.get_name_leafdata());
    if (totadjignoredofflistdb.is_set || is_set(totadjignoredofflistdb.yfilter)) leaf_name_data.push_back(totadjignoredofflistdb.get_name_leafdata());
    if (totadjfrmpeertoadd.is_set || is_set(totadjfrmpeertoadd.yfilter)) leaf_name_data.push_back(totadjfrmpeertoadd.get_name_leafdata());
    if (totadjfrmpeertodel.is_set || is_set(totadjfrmpeertodel.yfilter)) leaf_name_data.push_back(totadjfrmpeertodel.get_name_leafdata());
    if (totadjsentperiodically.is_set || is_set(totadjsentperiodically.yfilter)) leaf_name_data.push_back(totadjsentperiodically.get_name_leafdata());
    if (totadjpeertoadd.is_set || is_set(totadjpeertoadd.yfilter)) leaf_name_data.push_back(totadjpeertoadd.get_name_leafdata());
    if (totadjpeertodel.is_set || is_set(totadjpeertodel.yfilter)) leaf_name_data.push_back(totadjpeertodel.get_name_leafdata());
    if (totperiodicsyncadj.is_set || is_set(totperiodicsyncadj.yfilter)) leaf_name_data.push_back(totperiodicsyncadj.get_name_leafdata());
    if (totadjaddfailduringsyncsend.is_set || is_set(totadjaddfailduringsyncsend.yfilter)) leaf_name_data.push_back(totadjaddfailduringsyncsend.get_name_leafdata());
    if (totdropduringsyncinvalidsvi.is_set || is_set(totdropduringsyncinvalidsvi.yfilter)) leaf_name_data.push_back(totdropduringsyncinvalidsvi.get_name_leafdata());
    if (totdropsyncsvidown.is_set || is_set(totdropsyncsvidown.yfilter)) leaf_name_data.push_back(totdropsyncsvidown.get_name_leafdata());
    if (totdropsyncinvalidctxt.is_set || is_set(totdropsyncinvalidctxt.yfilter)) leaf_name_data.push_back(totdropsyncinvalidctxt.get_name_leafdata());
    if (totdropsyncnulladj.is_set || is_set(totdropsyncnulladj.yfilter)) leaf_name_data.push_back(totdropsyncnulladj.get_name_leafdata());
    if (totdropsyncnullip.is_set || is_set(totdropsyncnullip.yfilter)) leaf_name_data.push_back(totdropsyncnullip.get_name_leafdata());
    if (totsyncadjaddl2supcache.is_set || is_set(totsyncadjaddl2supcache.yfilter)) leaf_name_data.push_back(totsyncadjaddl2supcache.get_name_leafdata());
    if (totsyncstopbcastpkt.is_set || is_set(totsyncstopbcastpkt.yfilter)) leaf_name_data.push_back(totsyncstopbcastpkt.get_name_leafdata());
    if (totvmctorphansyncdropcount.is_set || is_set(totvmctorphansyncdropcount.yfilter)) leaf_name_data.push_back(totvmctorphansyncdropcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ptAddFailOfflist")
    {
        ptaddfailofflist = value;
        ptaddfailofflist.value_namespace = name_space;
        ptaddfailofflist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mallocFailOfflistDb")
    {
        mallocfailofflistdb = value;
        mallocfailofflistdb.value_namespace = name_space;
        mallocfailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timerCreateFailOfflistDb")
    {
        timercreatefailofflistdb = value;
        timercreatefailofflistdb.value_namespace = name_space;
        timercreatefailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjAddFailOfflistDb")
    {
        adjaddfailofflistdb = value;
        adjaddfailofflistdb.value_namespace = name_space;
        adjaddfailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptLookupFailOfflistDb")
    {
        ptlookupfailofflistdb = value;
        ptlookupfailofflistdb.value_namespace = name_space;
        ptlookupfailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanMismatchOfflistDb")
    {
        vlanmismatchofflistdb = value;
        vlanmismatchofflistdb.value_namespace = name_space;
        vlanmismatchofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidSviOfflistDb")
    {
        invalidsviofflistdb = value;
        invalidsviofflistdb.value_namespace = name_space;
        invalidsviofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sviDownOfflistDb")
    {
        svidownofflistdb = value;
        svidownofflistdb.value_namespace = name_space;
        svidownofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mctDownOfflistDb")
    {
        mctdownofflistdb = value;
        mctdownofflistdb.value_namespace = name_space;
        mctdownofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctxTypeInvalidOfflistDb")
    {
        ctxtypeinvalidofflistdb = value;
        ctxtypeinvalidofflistdb.value_namespace = name_space;
        ctxtypeinvalidofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfInvalidOfflistDb")
    {
        vrfinvalidofflistdb = value;
        vrfinvalidofflistdb.value_namespace = name_space;
        vrfinvalidofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidIpOfflistDb")
    {
        invalidipofflistdb = value;
        invalidipofflistdb.value_namespace = name_space;
        invalidipofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipSanityFailOfflistDb")
    {
        ipsanityfailofflistdb = value;
        ipsanityfailofflistdb.value_namespace = name_space;
        ipsanityfailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macSanityFailOfflistDb")
    {
        macsanityfailofflistdb = value;
        macsanityfailofflistdb.value_namespace = name_space;
        macsanityfailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownRouterMacOfflistDb")
    {
        ownroutermacofflistdb = value;
        ownroutermacofflistdb.value_namespace = name_space;
        ownroutermacofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownIpOfflistDb")
    {
        ownipofflistdb = value;
        ownipofflistdb.value_namespace = name_space;
        ownipofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownvIpOfflistDb")
    {
        ownvipofflistdb = value;
        ownvipofflistdb.value_namespace = name_space;
        ownvipofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjCreateFailOfflistDb")
    {
        adjcreatefailofflistdb = value;
        adjcreatefailofflistdb.value_namespace = name_space;
        adjcreatefailofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnetMismatchOfflistDb")
    {
        subnetmismatchofflistdb = value;
        subnetmismatchofflistdb.value_namespace = name_space;
        subnetmismatchofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dupEntryOfflistDb")
    {
        dupentryofflistdb = value;
        dupentryofflistdb.value_namespace = name_space;
        dupentryofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipNotEnOfflistDb")
    {
        ipnotenofflistdb = value;
        ipnotenofflistdb.value_namespace = name_space;
        ipnotenofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDropOfflistDb")
    {
        totdropofflistdb = value;
        totdropofflistdb.value_namespace = name_space;
        totdropofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDontDropOfflistDb")
    {
        totdontdropofflistdb = value;
        totdontdropofflistdb.value_namespace = name_space;
        totdontdropofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjAddOfflistDb")
    {
        totadjaddofflistdb = value;
        totadjaddofflistdb.value_namespace = name_space;
        totadjaddofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjDelOfflistDb")
    {
        totadjdelofflistdb = value;
        totadjdelofflistdb.value_namespace = name_space;
        totadjdelofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjIgnoredOfflistDb")
    {
        totadjignoredofflistdb = value;
        totadjignoredofflistdb.value_namespace = name_space;
        totadjignoredofflistdb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjFrmPeerToAdd")
    {
        totadjfrmpeertoadd = value;
        totadjfrmpeertoadd.value_namespace = name_space;
        totadjfrmpeertoadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjFrmPeerToDel")
    {
        totadjfrmpeertodel = value;
        totadjfrmpeertodel.value_namespace = name_space;
        totadjfrmpeertodel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjSentPeriodically")
    {
        totadjsentperiodically = value;
        totadjsentperiodically.value_namespace = name_space;
        totadjsentperiodically.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjPeerToAdd")
    {
        totadjpeertoadd = value;
        totadjpeertoadd.value_namespace = name_space;
        totadjpeertoadd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjPeerToDel")
    {
        totadjpeertodel = value;
        totadjpeertodel.value_namespace = name_space;
        totadjpeertodel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totPeriodicSyncAdj")
    {
        totperiodicsyncadj = value;
        totperiodicsyncadj.value_namespace = name_space;
        totperiodicsyncadj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totAdjAddFailDuringSyncSend")
    {
        totadjaddfailduringsyncsend = value;
        totadjaddfailduringsyncsend.value_namespace = name_space;
        totadjaddfailduringsyncsend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDropDuringSyncInvalidSvi")
    {
        totdropduringsyncinvalidsvi = value;
        totdropduringsyncinvalidsvi.value_namespace = name_space;
        totdropduringsyncinvalidsvi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDropSyncSviDown")
    {
        totdropsyncsvidown = value;
        totdropsyncsvidown.value_namespace = name_space;
        totdropsyncsvidown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDropSyncInvalidCtxt")
    {
        totdropsyncinvalidctxt = value;
        totdropsyncinvalidctxt.value_namespace = name_space;
        totdropsyncinvalidctxt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDropSyncNullAdj")
    {
        totdropsyncnulladj = value;
        totdropsyncnulladj.value_namespace = name_space;
        totdropsyncnulladj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totDropSyncNullIp")
    {
        totdropsyncnullip = value;
        totdropsyncnullip.value_namespace = name_space;
        totdropsyncnullip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totSyncAdjAddL2SupCache")
    {
        totsyncadjaddl2supcache = value;
        totsyncadjaddl2supcache.value_namespace = name_space;
        totsyncadjaddl2supcache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totSyncStopBcastPkt")
    {
        totsyncstopbcastpkt = value;
        totsyncstopbcastpkt.value_namespace = name_space;
        totsyncstopbcastpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totVmctOrphanSyncDropCount")
    {
        totvmctorphansyncdropcount = value;
        totvmctorphansyncdropcount.value_namespace = name_space;
        totvmctorphansyncdropcount.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ptAddFailOfflist")
    {
        ptaddfailofflist.yfilter = yfilter;
    }
    if(value_path == "mallocFailOfflistDb")
    {
        mallocfailofflistdb.yfilter = yfilter;
    }
    if(value_path == "timerCreateFailOfflistDb")
    {
        timercreatefailofflistdb.yfilter = yfilter;
    }
    if(value_path == "adjAddFailOfflistDb")
    {
        adjaddfailofflistdb.yfilter = yfilter;
    }
    if(value_path == "ptLookupFailOfflistDb")
    {
        ptlookupfailofflistdb.yfilter = yfilter;
    }
    if(value_path == "vlanMismatchOfflistDb")
    {
        vlanmismatchofflistdb.yfilter = yfilter;
    }
    if(value_path == "invalidSviOfflistDb")
    {
        invalidsviofflistdb.yfilter = yfilter;
    }
    if(value_path == "sviDownOfflistDb")
    {
        svidownofflistdb.yfilter = yfilter;
    }
    if(value_path == "mctDownOfflistDb")
    {
        mctdownofflistdb.yfilter = yfilter;
    }
    if(value_path == "ctxTypeInvalidOfflistDb")
    {
        ctxtypeinvalidofflistdb.yfilter = yfilter;
    }
    if(value_path == "vrfInvalidOfflistDb")
    {
        vrfinvalidofflistdb.yfilter = yfilter;
    }
    if(value_path == "invalidIpOfflistDb")
    {
        invalidipofflistdb.yfilter = yfilter;
    }
    if(value_path == "ipSanityFailOfflistDb")
    {
        ipsanityfailofflistdb.yfilter = yfilter;
    }
    if(value_path == "macSanityFailOfflistDb")
    {
        macsanityfailofflistdb.yfilter = yfilter;
    }
    if(value_path == "ownRouterMacOfflistDb")
    {
        ownroutermacofflistdb.yfilter = yfilter;
    }
    if(value_path == "ownIpOfflistDb")
    {
        ownipofflistdb.yfilter = yfilter;
    }
    if(value_path == "ownvIpOfflistDb")
    {
        ownvipofflistdb.yfilter = yfilter;
    }
    if(value_path == "adjCreateFailOfflistDb")
    {
        adjcreatefailofflistdb.yfilter = yfilter;
    }
    if(value_path == "subnetMismatchOfflistDb")
    {
        subnetmismatchofflistdb.yfilter = yfilter;
    }
    if(value_path == "dupEntryOfflistDb")
    {
        dupentryofflistdb.yfilter = yfilter;
    }
    if(value_path == "ipNotEnOfflistDb")
    {
        ipnotenofflistdb.yfilter = yfilter;
    }
    if(value_path == "totDropOfflistDb")
    {
        totdropofflistdb.yfilter = yfilter;
    }
    if(value_path == "totDontDropOfflistDb")
    {
        totdontdropofflistdb.yfilter = yfilter;
    }
    if(value_path == "totAdjAddOfflistDb")
    {
        totadjaddofflistdb.yfilter = yfilter;
    }
    if(value_path == "totAdjDelOfflistDb")
    {
        totadjdelofflistdb.yfilter = yfilter;
    }
    if(value_path == "totAdjIgnoredOfflistDb")
    {
        totadjignoredofflistdb.yfilter = yfilter;
    }
    if(value_path == "totAdjFrmPeerToAdd")
    {
        totadjfrmpeertoadd.yfilter = yfilter;
    }
    if(value_path == "totAdjFrmPeerToDel")
    {
        totadjfrmpeertodel.yfilter = yfilter;
    }
    if(value_path == "totAdjSentPeriodically")
    {
        totadjsentperiodically.yfilter = yfilter;
    }
    if(value_path == "totAdjPeerToAdd")
    {
        totadjpeertoadd.yfilter = yfilter;
    }
    if(value_path == "totAdjPeerToDel")
    {
        totadjpeertodel.yfilter = yfilter;
    }
    if(value_path == "totPeriodicSyncAdj")
    {
        totperiodicsyncadj.yfilter = yfilter;
    }
    if(value_path == "totAdjAddFailDuringSyncSend")
    {
        totadjaddfailduringsyncsend.yfilter = yfilter;
    }
    if(value_path == "totDropDuringSyncInvalidSvi")
    {
        totdropduringsyncinvalidsvi.yfilter = yfilter;
    }
    if(value_path == "totDropSyncSviDown")
    {
        totdropsyncsvidown.yfilter = yfilter;
    }
    if(value_path == "totDropSyncInvalidCtxt")
    {
        totdropsyncinvalidctxt.yfilter = yfilter;
    }
    if(value_path == "totDropSyncNullAdj")
    {
        totdropsyncnulladj.yfilter = yfilter;
    }
    if(value_path == "totDropSyncNullIp")
    {
        totdropsyncnullip.yfilter = yfilter;
    }
    if(value_path == "totSyncAdjAddL2SupCache")
    {
        totsyncadjaddl2supcache.yfilter = yfilter;
    }
    if(value_path == "totSyncStopBcastPkt")
    {
        totsyncstopbcastpkt.yfilter = yfilter;
    }
    if(value_path == "totVmctOrphanSyncDropCount")
    {
        totvmctorphansyncdropcount.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptAddFailOfflist" || name == "mallocFailOfflistDb" || name == "timerCreateFailOfflistDb" || name == "adjAddFailOfflistDb" || name == "ptLookupFailOfflistDb" || name == "vlanMismatchOfflistDb" || name == "invalidSviOfflistDb" || name == "sviDownOfflistDb" || name == "mctDownOfflistDb" || name == "ctxTypeInvalidOfflistDb" || name == "vrfInvalidOfflistDb" || name == "invalidIpOfflistDb" || name == "ipSanityFailOfflistDb" || name == "macSanityFailOfflistDb" || name == "ownRouterMacOfflistDb" || name == "ownIpOfflistDb" || name == "ownvIpOfflistDb" || name == "adjCreateFailOfflistDb" || name == "subnetMismatchOfflistDb" || name == "dupEntryOfflistDb" || name == "ipNotEnOfflistDb" || name == "totDropOfflistDb" || name == "totDontDropOfflistDb" || name == "totAdjAddOfflistDb" || name == "totAdjDelOfflistDb" || name == "totAdjIgnoredOfflistDb" || name == "totAdjFrmPeerToAdd" || name == "totAdjFrmPeerToDel" || name == "totAdjSentPeriodically" || name == "totAdjPeerToAdd" || name == "totAdjPeerToDel" || name == "totPeriodicSyncAdj" || name == "totAdjAddFailDuringSyncSend" || name == "totDropDuringSyncInvalidSvi" || name == "totDropSyncSviDown" || name == "totDropSyncInvalidCtxt" || name == "totDropSyncNullAdj" || name == "totDropSyncNullIp" || name == "totSyncAdjAddL2SupCache" || name == "totSyncStopBcastPkt" || name == "totVmctOrphanSyncDropCount")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::TunnelstatsItems()
    :
    tottunnelrcvd{YType::uint64, "totTunnelRcvd"},
    rxforingressvpc{YType::uint64, "rxForIngressVpc"},
    rxingressforgpc{YType::uint64, "rxIngressforGpc"},
    rxingressorphanvpc{YType::uint64, "rxIngressOrphanVpc"},
    rxingressorphanvpcplus{YType::uint64, "rxIngressOrphanVpcPlus"},
    totpacksent{YType::uint64, "totPackSent"},
    pktsentarpsnoop{YType::uint64, "pktSentArpSnoop"},
    pktsentnonlocalvip{YType::uint64, "pktSentNonlocalVip"},
    pktsentpeergway{YType::uint64, "pktSentPeerGway"},
    txingressvpc{YType::uint64, "txIngressVpc"},
    txingressgpc{YType::uint64, "txIngressGpc"},
    txingressorphanvpc{YType::uint64, "txIngressOrphanVpc"},
    txingressorphanvpcplus{YType::uint64, "txIngressOrphanVpcPlus"},
    totrecvdropped{YType::uint64, "totRecvDropped"},
    totsenddropped{YType::uint64, "totSendDropped"},
    sendfaildrop{YType::uint64, "sendFailDrop"},
    rcvdinvalidver{YType::uint64, "rcvdInvalidVer"},
    rcvdinvalidpayloadtype{YType::uint64, "rcvdInvalidPayloadType"},
    rcvdmctif{YType::uint64, "rcvdMctIf"},
    rcvdinvalidingressport{YType::uint64, "rcvdInvalidIngressPort"},
    dropsentinvalidport{YType::uint64, "dropSentInvalidPort"},
    droprecvinvalidgpccore{YType::uint64, "dropRecvInvalidGpcCore"},
    droprecvinvalidgpcpeer{YType::uint64, "dropRecvInvalidGpcPeer"},
    droprecvfailretrievegpc{YType::uint64, "dropRecvFailRetrieveGpc"},
    dropsendfailretrievegpc{YType::uint64, "dropSendFailRetrieveGpc"},
    failretrievevpcid{YType::uint64, "failRetrieveVpcId"},
    imapifail{YType::uint64, "imApiFail"},
    invalidcontext{YType::uint64, "invalidContext"},
    dropmctdown{YType::uint64, "dropMctDown"},
    recvdropmbuffail{YType::uint64, "recvDropMbufFail"},
    senddropmbuffail{YType::uint64, "sendDropMbufFail"},
    tunnelfailed{YType::uint64, "tunnelFailed"},
    tunnelfailcenetwork{YType::uint64, "tunnelFailCENetwork"},
    mcecmkeynotfound{YType::uint64, "mcecmKeyNotFound"}
{

    yang_name = "tunnelstats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::~TunnelstatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return tottunnelrcvd.is_set
	|| rxforingressvpc.is_set
	|| rxingressforgpc.is_set
	|| rxingressorphanvpc.is_set
	|| rxingressorphanvpcplus.is_set
	|| totpacksent.is_set
	|| pktsentarpsnoop.is_set
	|| pktsentnonlocalvip.is_set
	|| pktsentpeergway.is_set
	|| txingressvpc.is_set
	|| txingressgpc.is_set
	|| txingressorphanvpc.is_set
	|| txingressorphanvpcplus.is_set
	|| totrecvdropped.is_set
	|| totsenddropped.is_set
	|| sendfaildrop.is_set
	|| rcvdinvalidver.is_set
	|| rcvdinvalidpayloadtype.is_set
	|| rcvdmctif.is_set
	|| rcvdinvalidingressport.is_set
	|| dropsentinvalidport.is_set
	|| droprecvinvalidgpccore.is_set
	|| droprecvinvalidgpcpeer.is_set
	|| droprecvfailretrievegpc.is_set
	|| dropsendfailretrievegpc.is_set
	|| failretrievevpcid.is_set
	|| imapifail.is_set
	|| invalidcontext.is_set
	|| dropmctdown.is_set
	|| recvdropmbuffail.is_set
	|| senddropmbuffail.is_set
	|| tunnelfailed.is_set
	|| tunnelfailcenetwork.is_set
	|| mcecmkeynotfound.is_set;
}

bool System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tottunnelrcvd.yfilter)
	|| ydk::is_set(rxforingressvpc.yfilter)
	|| ydk::is_set(rxingressforgpc.yfilter)
	|| ydk::is_set(rxingressorphanvpc.yfilter)
	|| ydk::is_set(rxingressorphanvpcplus.yfilter)
	|| ydk::is_set(totpacksent.yfilter)
	|| ydk::is_set(pktsentarpsnoop.yfilter)
	|| ydk::is_set(pktsentnonlocalvip.yfilter)
	|| ydk::is_set(pktsentpeergway.yfilter)
	|| ydk::is_set(txingressvpc.yfilter)
	|| ydk::is_set(txingressgpc.yfilter)
	|| ydk::is_set(txingressorphanvpc.yfilter)
	|| ydk::is_set(txingressorphanvpcplus.yfilter)
	|| ydk::is_set(totrecvdropped.yfilter)
	|| ydk::is_set(totsenddropped.yfilter)
	|| ydk::is_set(sendfaildrop.yfilter)
	|| ydk::is_set(rcvdinvalidver.yfilter)
	|| ydk::is_set(rcvdinvalidpayloadtype.yfilter)
	|| ydk::is_set(rcvdmctif.yfilter)
	|| ydk::is_set(rcvdinvalidingressport.yfilter)
	|| ydk::is_set(dropsentinvalidport.yfilter)
	|| ydk::is_set(droprecvinvalidgpccore.yfilter)
	|| ydk::is_set(droprecvinvalidgpcpeer.yfilter)
	|| ydk::is_set(droprecvfailretrievegpc.yfilter)
	|| ydk::is_set(dropsendfailretrievegpc.yfilter)
	|| ydk::is_set(failretrievevpcid.yfilter)
	|| ydk::is_set(imapifail.yfilter)
	|| ydk::is_set(invalidcontext.yfilter)
	|| ydk::is_set(dropmctdown.yfilter)
	|| ydk::is_set(recvdropmbuffail.yfilter)
	|| ydk::is_set(senddropmbuffail.yfilter)
	|| ydk::is_set(tunnelfailed.yfilter)
	|| ydk::is_set(tunnelfailcenetwork.yfilter)
	|| ydk::is_set(mcecmkeynotfound.yfilter);
}

std::string System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnelstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tottunnelrcvd.is_set || is_set(tottunnelrcvd.yfilter)) leaf_name_data.push_back(tottunnelrcvd.get_name_leafdata());
    if (rxforingressvpc.is_set || is_set(rxforingressvpc.yfilter)) leaf_name_data.push_back(rxforingressvpc.get_name_leafdata());
    if (rxingressforgpc.is_set || is_set(rxingressforgpc.yfilter)) leaf_name_data.push_back(rxingressforgpc.get_name_leafdata());
    if (rxingressorphanvpc.is_set || is_set(rxingressorphanvpc.yfilter)) leaf_name_data.push_back(rxingressorphanvpc.get_name_leafdata());
    if (rxingressorphanvpcplus.is_set || is_set(rxingressorphanvpcplus.yfilter)) leaf_name_data.push_back(rxingressorphanvpcplus.get_name_leafdata());
    if (totpacksent.is_set || is_set(totpacksent.yfilter)) leaf_name_data.push_back(totpacksent.get_name_leafdata());
    if (pktsentarpsnoop.is_set || is_set(pktsentarpsnoop.yfilter)) leaf_name_data.push_back(pktsentarpsnoop.get_name_leafdata());
    if (pktsentnonlocalvip.is_set || is_set(pktsentnonlocalvip.yfilter)) leaf_name_data.push_back(pktsentnonlocalvip.get_name_leafdata());
    if (pktsentpeergway.is_set || is_set(pktsentpeergway.yfilter)) leaf_name_data.push_back(pktsentpeergway.get_name_leafdata());
    if (txingressvpc.is_set || is_set(txingressvpc.yfilter)) leaf_name_data.push_back(txingressvpc.get_name_leafdata());
    if (txingressgpc.is_set || is_set(txingressgpc.yfilter)) leaf_name_data.push_back(txingressgpc.get_name_leafdata());
    if (txingressorphanvpc.is_set || is_set(txingressorphanvpc.yfilter)) leaf_name_data.push_back(txingressorphanvpc.get_name_leafdata());
    if (txingressorphanvpcplus.is_set || is_set(txingressorphanvpcplus.yfilter)) leaf_name_data.push_back(txingressorphanvpcplus.get_name_leafdata());
    if (totrecvdropped.is_set || is_set(totrecvdropped.yfilter)) leaf_name_data.push_back(totrecvdropped.get_name_leafdata());
    if (totsenddropped.is_set || is_set(totsenddropped.yfilter)) leaf_name_data.push_back(totsenddropped.get_name_leafdata());
    if (sendfaildrop.is_set || is_set(sendfaildrop.yfilter)) leaf_name_data.push_back(sendfaildrop.get_name_leafdata());
    if (rcvdinvalidver.is_set || is_set(rcvdinvalidver.yfilter)) leaf_name_data.push_back(rcvdinvalidver.get_name_leafdata());
    if (rcvdinvalidpayloadtype.is_set || is_set(rcvdinvalidpayloadtype.yfilter)) leaf_name_data.push_back(rcvdinvalidpayloadtype.get_name_leafdata());
    if (rcvdmctif.is_set || is_set(rcvdmctif.yfilter)) leaf_name_data.push_back(rcvdmctif.get_name_leafdata());
    if (rcvdinvalidingressport.is_set || is_set(rcvdinvalidingressport.yfilter)) leaf_name_data.push_back(rcvdinvalidingressport.get_name_leafdata());
    if (dropsentinvalidport.is_set || is_set(dropsentinvalidport.yfilter)) leaf_name_data.push_back(dropsentinvalidport.get_name_leafdata());
    if (droprecvinvalidgpccore.is_set || is_set(droprecvinvalidgpccore.yfilter)) leaf_name_data.push_back(droprecvinvalidgpccore.get_name_leafdata());
    if (droprecvinvalidgpcpeer.is_set || is_set(droprecvinvalidgpcpeer.yfilter)) leaf_name_data.push_back(droprecvinvalidgpcpeer.get_name_leafdata());
    if (droprecvfailretrievegpc.is_set || is_set(droprecvfailretrievegpc.yfilter)) leaf_name_data.push_back(droprecvfailretrievegpc.get_name_leafdata());
    if (dropsendfailretrievegpc.is_set || is_set(dropsendfailretrievegpc.yfilter)) leaf_name_data.push_back(dropsendfailretrievegpc.get_name_leafdata());
    if (failretrievevpcid.is_set || is_set(failretrievevpcid.yfilter)) leaf_name_data.push_back(failretrievevpcid.get_name_leafdata());
    if (imapifail.is_set || is_set(imapifail.yfilter)) leaf_name_data.push_back(imapifail.get_name_leafdata());
    if (invalidcontext.is_set || is_set(invalidcontext.yfilter)) leaf_name_data.push_back(invalidcontext.get_name_leafdata());
    if (dropmctdown.is_set || is_set(dropmctdown.yfilter)) leaf_name_data.push_back(dropmctdown.get_name_leafdata());
    if (recvdropmbuffail.is_set || is_set(recvdropmbuffail.yfilter)) leaf_name_data.push_back(recvdropmbuffail.get_name_leafdata());
    if (senddropmbuffail.is_set || is_set(senddropmbuffail.yfilter)) leaf_name_data.push_back(senddropmbuffail.get_name_leafdata());
    if (tunnelfailed.is_set || is_set(tunnelfailed.yfilter)) leaf_name_data.push_back(tunnelfailed.get_name_leafdata());
    if (tunnelfailcenetwork.is_set || is_set(tunnelfailcenetwork.yfilter)) leaf_name_data.push_back(tunnelfailcenetwork.get_name_leafdata());
    if (mcecmkeynotfound.is_set || is_set(mcecmkeynotfound.yfilter)) leaf_name_data.push_back(mcecmkeynotfound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totTunnelRcvd")
    {
        tottunnelrcvd = value;
        tottunnelrcvd.value_namespace = name_space;
        tottunnelrcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxForIngressVpc")
    {
        rxforingressvpc = value;
        rxforingressvpc.value_namespace = name_space;
        rxforingressvpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxIngressforGpc")
    {
        rxingressforgpc = value;
        rxingressforgpc.value_namespace = name_space;
        rxingressforgpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxIngressOrphanVpc")
    {
        rxingressorphanvpc = value;
        rxingressorphanvpc.value_namespace = name_space;
        rxingressorphanvpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxIngressOrphanVpcPlus")
    {
        rxingressorphanvpcplus = value;
        rxingressorphanvpcplus.value_namespace = name_space;
        rxingressorphanvpcplus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totPackSent")
    {
        totpacksent = value;
        totpacksent.value_namespace = name_space;
        totpacksent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentArpSnoop")
    {
        pktsentarpsnoop = value;
        pktsentarpsnoop.value_namespace = name_space;
        pktsentarpsnoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentNonlocalVip")
    {
        pktsentnonlocalvip = value;
        pktsentnonlocalvip.value_namespace = name_space;
        pktsentnonlocalvip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pktSentPeerGway")
    {
        pktsentpeergway = value;
        pktsentpeergway.value_namespace = name_space;
        pktsentpeergway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txIngressVpc")
    {
        txingressvpc = value;
        txingressvpc.value_namespace = name_space;
        txingressvpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txIngressGpc")
    {
        txingressgpc = value;
        txingressgpc.value_namespace = name_space;
        txingressgpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txIngressOrphanVpc")
    {
        txingressorphanvpc = value;
        txingressorphanvpc.value_namespace = name_space;
        txingressorphanvpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txIngressOrphanVpcPlus")
    {
        txingressorphanvpcplus = value;
        txingressorphanvpcplus.value_namespace = name_space;
        txingressorphanvpcplus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totRecvDropped")
    {
        totrecvdropped = value;
        totrecvdropped.value_namespace = name_space;
        totrecvdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totSendDropped")
    {
        totsenddropped = value;
        totsenddropped.value_namespace = name_space;
        totsenddropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendFailDrop")
    {
        sendfaildrop = value;
        sendfaildrop.value_namespace = name_space;
        sendfaildrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdInvalidVer")
    {
        rcvdinvalidver = value;
        rcvdinvalidver.value_namespace = name_space;
        rcvdinvalidver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdInvalidPayloadType")
    {
        rcvdinvalidpayloadtype = value;
        rcvdinvalidpayloadtype.value_namespace = name_space;
        rcvdinvalidpayloadtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdMctIf")
    {
        rcvdmctif = value;
        rcvdmctif.value_namespace = name_space;
        rcvdmctif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvdInvalidIngressPort")
    {
        rcvdinvalidingressport = value;
        rcvdinvalidingressport.value_namespace = name_space;
        rcvdinvalidingressport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSentInvalidPort")
    {
        dropsentinvalidport = value;
        dropsentinvalidport.value_namespace = name_space;
        dropsentinvalidport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropRecvInvalidGpcCore")
    {
        droprecvinvalidgpccore = value;
        droprecvinvalidgpccore.value_namespace = name_space;
        droprecvinvalidgpccore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropRecvInvalidGpcPeer")
    {
        droprecvinvalidgpcpeer = value;
        droprecvinvalidgpcpeer.value_namespace = name_space;
        droprecvinvalidgpcpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropRecvFailRetrieveGpc")
    {
        droprecvfailretrievegpc = value;
        droprecvfailretrievegpc.value_namespace = name_space;
        droprecvfailretrievegpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropSendFailRetrieveGpc")
    {
        dropsendfailretrievegpc = value;
        dropsendfailretrievegpc.value_namespace = name_space;
        dropsendfailretrievegpc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failRetrieveVpcId")
    {
        failretrievevpcid = value;
        failretrievevpcid.value_namespace = name_space;
        failretrievevpcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imApiFail")
    {
        imapifail = value;
        imapifail.value_namespace = name_space;
        imapifail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalidContext")
    {
        invalidcontext = value;
        invalidcontext.value_namespace = name_space;
        invalidcontext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropMctDown")
    {
        dropmctdown = value;
        dropmctdown.value_namespace = name_space;
        dropmctdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvDropMbufFail")
    {
        recvdropmbuffail = value;
        recvdropmbuffail.value_namespace = name_space;
        recvdropmbuffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sendDropMbufFail")
    {
        senddropmbuffail = value;
        senddropmbuffail.value_namespace = name_space;
        senddropmbuffail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelFailed")
    {
        tunnelfailed = value;
        tunnelfailed.value_namespace = name_space;
        tunnelfailed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnelFailCENetwork")
    {
        tunnelfailcenetwork = value;
        tunnelfailcenetwork.value_namespace = name_space;
        tunnelfailcenetwork.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcecmKeyNotFound")
    {
        mcecmkeynotfound = value;
        mcecmkeynotfound.value_namespace = name_space;
        mcecmkeynotfound.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totTunnelRcvd")
    {
        tottunnelrcvd.yfilter = yfilter;
    }
    if(value_path == "rxForIngressVpc")
    {
        rxforingressvpc.yfilter = yfilter;
    }
    if(value_path == "rxIngressforGpc")
    {
        rxingressforgpc.yfilter = yfilter;
    }
    if(value_path == "rxIngressOrphanVpc")
    {
        rxingressorphanvpc.yfilter = yfilter;
    }
    if(value_path == "rxIngressOrphanVpcPlus")
    {
        rxingressorphanvpcplus.yfilter = yfilter;
    }
    if(value_path == "totPackSent")
    {
        totpacksent.yfilter = yfilter;
    }
    if(value_path == "pktSentArpSnoop")
    {
        pktsentarpsnoop.yfilter = yfilter;
    }
    if(value_path == "pktSentNonlocalVip")
    {
        pktsentnonlocalvip.yfilter = yfilter;
    }
    if(value_path == "pktSentPeerGway")
    {
        pktsentpeergway.yfilter = yfilter;
    }
    if(value_path == "txIngressVpc")
    {
        txingressvpc.yfilter = yfilter;
    }
    if(value_path == "txIngressGpc")
    {
        txingressgpc.yfilter = yfilter;
    }
    if(value_path == "txIngressOrphanVpc")
    {
        txingressorphanvpc.yfilter = yfilter;
    }
    if(value_path == "txIngressOrphanVpcPlus")
    {
        txingressorphanvpcplus.yfilter = yfilter;
    }
    if(value_path == "totRecvDropped")
    {
        totrecvdropped.yfilter = yfilter;
    }
    if(value_path == "totSendDropped")
    {
        totsenddropped.yfilter = yfilter;
    }
    if(value_path == "sendFailDrop")
    {
        sendfaildrop.yfilter = yfilter;
    }
    if(value_path == "rcvdInvalidVer")
    {
        rcvdinvalidver.yfilter = yfilter;
    }
    if(value_path == "rcvdInvalidPayloadType")
    {
        rcvdinvalidpayloadtype.yfilter = yfilter;
    }
    if(value_path == "rcvdMctIf")
    {
        rcvdmctif.yfilter = yfilter;
    }
    if(value_path == "rcvdInvalidIngressPort")
    {
        rcvdinvalidingressport.yfilter = yfilter;
    }
    if(value_path == "dropSentInvalidPort")
    {
        dropsentinvalidport.yfilter = yfilter;
    }
    if(value_path == "dropRecvInvalidGpcCore")
    {
        droprecvinvalidgpccore.yfilter = yfilter;
    }
    if(value_path == "dropRecvInvalidGpcPeer")
    {
        droprecvinvalidgpcpeer.yfilter = yfilter;
    }
    if(value_path == "dropRecvFailRetrieveGpc")
    {
        droprecvfailretrievegpc.yfilter = yfilter;
    }
    if(value_path == "dropSendFailRetrieveGpc")
    {
        dropsendfailretrievegpc.yfilter = yfilter;
    }
    if(value_path == "failRetrieveVpcId")
    {
        failretrievevpcid.yfilter = yfilter;
    }
    if(value_path == "imApiFail")
    {
        imapifail.yfilter = yfilter;
    }
    if(value_path == "invalidContext")
    {
        invalidcontext.yfilter = yfilter;
    }
    if(value_path == "dropMctDown")
    {
        dropmctdown.yfilter = yfilter;
    }
    if(value_path == "recvDropMbufFail")
    {
        recvdropmbuffail.yfilter = yfilter;
    }
    if(value_path == "sendDropMbufFail")
    {
        senddropmbuffail.yfilter = yfilter;
    }
    if(value_path == "tunnelFailed")
    {
        tunnelfailed.yfilter = yfilter;
    }
    if(value_path == "tunnelFailCENetwork")
    {
        tunnelfailcenetwork.yfilter = yfilter;
    }
    if(value_path == "mcecmKeyNotFound")
    {
        mcecmkeynotfound.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totTunnelRcvd" || name == "rxForIngressVpc" || name == "rxIngressforGpc" || name == "rxIngressOrphanVpc" || name == "rxIngressOrphanVpcPlus" || name == "totPackSent" || name == "pktSentArpSnoop" || name == "pktSentNonlocalVip" || name == "pktSentPeerGway" || name == "txIngressVpc" || name == "txIngressGpc" || name == "txIngressOrphanVpc" || name == "txIngressOrphanVpcPlus" || name == "totRecvDropped" || name == "totSendDropped" || name == "sendFailDrop" || name == "rcvdInvalidVer" || name == "rcvdInvalidPayloadType" || name == "rcvdMctIf" || name == "rcvdInvalidIngressPort" || name == "dropSentInvalidPort" || name == "dropRecvInvalidGpcCore" || name == "dropRecvInvalidGpcPeer" || name == "dropRecvFailRetrieveGpc" || name == "dropSendFailRetrieveGpc" || name == "failRetrieveVpcId" || name == "imApiFail" || name == "invalidContext" || name == "dropMctDown" || name == "recvDropMbufFail" || name == "sendDropMbufFail" || name == "tunnelFailed" || name == "tunnelFailCENetwork" || name == "mcecmKeyNotFound")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::SupcachestatsItems()
    :
    requests{YType::uint64, "requests"},
    requestsl2{YType::uint64, "requestsL2"},
    gratuitous{YType::uint64, "gratuitous"},
    gratuitousl2{YType::uint64, "gratuitousL2"},
    fwdrequestsl3{YType::uint64, "fwdRequestsL3"},
    fwdrepliesl3{YType::uint64, "fwdRepliesL3"},
    fwdrequestoncoreport{YType::uint64, "fwdRequestOnCorePort"},
    fwdreplyoncoreport{YType::uint64, "fwdReplyOnCorePort"},
    sentdrop{YType::uint64, "sentDrop"},
    sentreql2{YType::uint64, "sentReqL2"},
    sentreplyl2{YType::uint64, "sentReplyL2"},
    sentreqcorel2{YType::uint64, "sentReqCoreL2"},
    sentreplycorel2{YType::uint64, "sentReplyCoreL2"},
    sentdropl2{YType::uint64, "sentDropL2"},
    recvreql3{YType::uint64, "recvReqL3"},
    recvreplyl3{YType::uint64, "recvReplyL3"},
    recvlocalreql3{YType::uint64, "recvLocalReqL3"},
    recvlocalreplyl3{YType::uint64, "recvLocalReplyL3"},
    recvgratarp{YType::uint64, "recvGratArp"},
    recvdrop{YType::uint64, "recvDrop"},
    recvrequestl2{YType::uint64, "recvRequestL2"},
    recvreplyl2{YType::uint64, "recvReplyL2"},
    recvgratarpl2{YType::uint64, "recvGratArpL2"},
    recvdropl2{YType::uint64, "recvDropL2"},
    localentryadds{YType::uint64, "localEntryAdds"},
    localentrydel{YType::uint64, "localEntryDel"}
{

    yang_name = "supcachestats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::~SupcachestatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::has_data() const
{
    if (is_presence_container) return true;
    return requests.is_set
	|| requestsl2.is_set
	|| gratuitous.is_set
	|| gratuitousl2.is_set
	|| fwdrequestsl3.is_set
	|| fwdrepliesl3.is_set
	|| fwdrequestoncoreport.is_set
	|| fwdreplyoncoreport.is_set
	|| sentdrop.is_set
	|| sentreql2.is_set
	|| sentreplyl2.is_set
	|| sentreqcorel2.is_set
	|| sentreplycorel2.is_set
	|| sentdropl2.is_set
	|| recvreql3.is_set
	|| recvreplyl3.is_set
	|| recvlocalreql3.is_set
	|| recvlocalreplyl3.is_set
	|| recvgratarp.is_set
	|| recvdrop.is_set
	|| recvrequestl2.is_set
	|| recvreplyl2.is_set
	|| recvgratarpl2.is_set
	|| recvdropl2.is_set
	|| localentryadds.is_set
	|| localentrydel.is_set;
}

bool System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(requests.yfilter)
	|| ydk::is_set(requestsl2.yfilter)
	|| ydk::is_set(gratuitous.yfilter)
	|| ydk::is_set(gratuitousl2.yfilter)
	|| ydk::is_set(fwdrequestsl3.yfilter)
	|| ydk::is_set(fwdrepliesl3.yfilter)
	|| ydk::is_set(fwdrequestoncoreport.yfilter)
	|| ydk::is_set(fwdreplyoncoreport.yfilter)
	|| ydk::is_set(sentdrop.yfilter)
	|| ydk::is_set(sentreql2.yfilter)
	|| ydk::is_set(sentreplyl2.yfilter)
	|| ydk::is_set(sentreqcorel2.yfilter)
	|| ydk::is_set(sentreplycorel2.yfilter)
	|| ydk::is_set(sentdropl2.yfilter)
	|| ydk::is_set(recvreql3.yfilter)
	|| ydk::is_set(recvreplyl3.yfilter)
	|| ydk::is_set(recvlocalreql3.yfilter)
	|| ydk::is_set(recvlocalreplyl3.yfilter)
	|| ydk::is_set(recvgratarp.yfilter)
	|| ydk::is_set(recvdrop.yfilter)
	|| ydk::is_set(recvrequestl2.yfilter)
	|| ydk::is_set(recvreplyl2.yfilter)
	|| ydk::is_set(recvgratarpl2.yfilter)
	|| ydk::is_set(recvdropl2.yfilter)
	|| ydk::is_set(localentryadds.yfilter)
	|| ydk::is_set(localentrydel.yfilter);
}

std::string System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supcachestats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (requestsl2.is_set || is_set(requestsl2.yfilter)) leaf_name_data.push_back(requestsl2.get_name_leafdata());
    if (gratuitous.is_set || is_set(gratuitous.yfilter)) leaf_name_data.push_back(gratuitous.get_name_leafdata());
    if (gratuitousl2.is_set || is_set(gratuitousl2.yfilter)) leaf_name_data.push_back(gratuitousl2.get_name_leafdata());
    if (fwdrequestsl3.is_set || is_set(fwdrequestsl3.yfilter)) leaf_name_data.push_back(fwdrequestsl3.get_name_leafdata());
    if (fwdrepliesl3.is_set || is_set(fwdrepliesl3.yfilter)) leaf_name_data.push_back(fwdrepliesl3.get_name_leafdata());
    if (fwdrequestoncoreport.is_set || is_set(fwdrequestoncoreport.yfilter)) leaf_name_data.push_back(fwdrequestoncoreport.get_name_leafdata());
    if (fwdreplyoncoreport.is_set || is_set(fwdreplyoncoreport.yfilter)) leaf_name_data.push_back(fwdreplyoncoreport.get_name_leafdata());
    if (sentdrop.is_set || is_set(sentdrop.yfilter)) leaf_name_data.push_back(sentdrop.get_name_leafdata());
    if (sentreql2.is_set || is_set(sentreql2.yfilter)) leaf_name_data.push_back(sentreql2.get_name_leafdata());
    if (sentreplyl2.is_set || is_set(sentreplyl2.yfilter)) leaf_name_data.push_back(sentreplyl2.get_name_leafdata());
    if (sentreqcorel2.is_set || is_set(sentreqcorel2.yfilter)) leaf_name_data.push_back(sentreqcorel2.get_name_leafdata());
    if (sentreplycorel2.is_set || is_set(sentreplycorel2.yfilter)) leaf_name_data.push_back(sentreplycorel2.get_name_leafdata());
    if (sentdropl2.is_set || is_set(sentdropl2.yfilter)) leaf_name_data.push_back(sentdropl2.get_name_leafdata());
    if (recvreql3.is_set || is_set(recvreql3.yfilter)) leaf_name_data.push_back(recvreql3.get_name_leafdata());
    if (recvreplyl3.is_set || is_set(recvreplyl3.yfilter)) leaf_name_data.push_back(recvreplyl3.get_name_leafdata());
    if (recvlocalreql3.is_set || is_set(recvlocalreql3.yfilter)) leaf_name_data.push_back(recvlocalreql3.get_name_leafdata());
    if (recvlocalreplyl3.is_set || is_set(recvlocalreplyl3.yfilter)) leaf_name_data.push_back(recvlocalreplyl3.get_name_leafdata());
    if (recvgratarp.is_set || is_set(recvgratarp.yfilter)) leaf_name_data.push_back(recvgratarp.get_name_leafdata());
    if (recvdrop.is_set || is_set(recvdrop.yfilter)) leaf_name_data.push_back(recvdrop.get_name_leafdata());
    if (recvrequestl2.is_set || is_set(recvrequestl2.yfilter)) leaf_name_data.push_back(recvrequestl2.get_name_leafdata());
    if (recvreplyl2.is_set || is_set(recvreplyl2.yfilter)) leaf_name_data.push_back(recvreplyl2.get_name_leafdata());
    if (recvgratarpl2.is_set || is_set(recvgratarpl2.yfilter)) leaf_name_data.push_back(recvgratarpl2.get_name_leafdata());
    if (recvdropl2.is_set || is_set(recvdropl2.yfilter)) leaf_name_data.push_back(recvdropl2.get_name_leafdata());
    if (localentryadds.is_set || is_set(localentryadds.yfilter)) leaf_name_data.push_back(localentryadds.get_name_leafdata());
    if (localentrydel.is_set || is_set(localentrydel.yfilter)) leaf_name_data.push_back(localentrydel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requestsL2")
    {
        requestsl2 = value;
        requestsl2.value_namespace = name_space;
        requestsl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitous")
    {
        gratuitous = value;
        gratuitous.value_namespace = name_space;
        gratuitous.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitousL2")
    {
        gratuitousl2 = value;
        gratuitousl2.value_namespace = name_space;
        gratuitousl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdRequestsL3")
    {
        fwdrequestsl3 = value;
        fwdrequestsl3.value_namespace = name_space;
        fwdrequestsl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdRepliesL3")
    {
        fwdrepliesl3 = value;
        fwdrepliesl3.value_namespace = name_space;
        fwdrepliesl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdRequestOnCorePort")
    {
        fwdrequestoncoreport = value;
        fwdrequestoncoreport.value_namespace = name_space;
        fwdrequestoncoreport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdReplyOnCorePort")
    {
        fwdreplyoncoreport = value;
        fwdreplyoncoreport.value_namespace = name_space;
        fwdreplyoncoreport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentDrop")
    {
        sentdrop = value;
        sentdrop.value_namespace = name_space;
        sentdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentReqL2")
    {
        sentreql2 = value;
        sentreql2.value_namespace = name_space;
        sentreql2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentReplyL2")
    {
        sentreplyl2 = value;
        sentreplyl2.value_namespace = name_space;
        sentreplyl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentReqCoreL2")
    {
        sentreqcorel2 = value;
        sentreqcorel2.value_namespace = name_space;
        sentreqcorel2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentReplyCoreL2")
    {
        sentreplycorel2 = value;
        sentreplycorel2.value_namespace = name_space;
        sentreplycorel2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sentDropL2")
    {
        sentdropl2 = value;
        sentdropl2.value_namespace = name_space;
        sentdropl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvReqL3")
    {
        recvreql3 = value;
        recvreql3.value_namespace = name_space;
        recvreql3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvReplyL3")
    {
        recvreplyl3 = value;
        recvreplyl3.value_namespace = name_space;
        recvreplyl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvLocalReqL3")
    {
        recvlocalreql3 = value;
        recvlocalreql3.value_namespace = name_space;
        recvlocalreql3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvLocalReplyL3")
    {
        recvlocalreplyl3 = value;
        recvlocalreplyl3.value_namespace = name_space;
        recvlocalreplyl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvGratArp")
    {
        recvgratarp = value;
        recvgratarp.value_namespace = name_space;
        recvgratarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvDrop")
    {
        recvdrop = value;
        recvdrop.value_namespace = name_space;
        recvdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvRequestL2")
    {
        recvrequestl2 = value;
        recvrequestl2.value_namespace = name_space;
        recvrequestl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvReplyL2")
    {
        recvreplyl2 = value;
        recvreplyl2.value_namespace = name_space;
        recvreplyl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvGratArpL2")
    {
        recvgratarpl2 = value;
        recvgratarpl2.value_namespace = name_space;
        recvgratarpl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvDropL2")
    {
        recvdropl2 = value;
        recvdropl2.value_namespace = name_space;
        recvdropl2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localEntryAdds")
    {
        localentryadds = value;
        localentryadds.value_namespace = name_space;
        localentryadds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localEntryDel")
    {
        localentrydel = value;
        localentrydel.value_namespace = name_space;
        localentrydel.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
    if(value_path == "requestsL2")
    {
        requestsl2.yfilter = yfilter;
    }
    if(value_path == "gratuitous")
    {
        gratuitous.yfilter = yfilter;
    }
    if(value_path == "gratuitousL2")
    {
        gratuitousl2.yfilter = yfilter;
    }
    if(value_path == "fwdRequestsL3")
    {
        fwdrequestsl3.yfilter = yfilter;
    }
    if(value_path == "fwdRepliesL3")
    {
        fwdrepliesl3.yfilter = yfilter;
    }
    if(value_path == "fwdRequestOnCorePort")
    {
        fwdrequestoncoreport.yfilter = yfilter;
    }
    if(value_path == "fwdReplyOnCorePort")
    {
        fwdreplyoncoreport.yfilter = yfilter;
    }
    if(value_path == "sentDrop")
    {
        sentdrop.yfilter = yfilter;
    }
    if(value_path == "sentReqL2")
    {
        sentreql2.yfilter = yfilter;
    }
    if(value_path == "sentReplyL2")
    {
        sentreplyl2.yfilter = yfilter;
    }
    if(value_path == "sentReqCoreL2")
    {
        sentreqcorel2.yfilter = yfilter;
    }
    if(value_path == "sentReplyCoreL2")
    {
        sentreplycorel2.yfilter = yfilter;
    }
    if(value_path == "sentDropL2")
    {
        sentdropl2.yfilter = yfilter;
    }
    if(value_path == "recvReqL3")
    {
        recvreql3.yfilter = yfilter;
    }
    if(value_path == "recvReplyL3")
    {
        recvreplyl3.yfilter = yfilter;
    }
    if(value_path == "recvLocalReqL3")
    {
        recvlocalreql3.yfilter = yfilter;
    }
    if(value_path == "recvLocalReplyL3")
    {
        recvlocalreplyl3.yfilter = yfilter;
    }
    if(value_path == "recvGratArp")
    {
        recvgratarp.yfilter = yfilter;
    }
    if(value_path == "recvDrop")
    {
        recvdrop.yfilter = yfilter;
    }
    if(value_path == "recvRequestL2")
    {
        recvrequestl2.yfilter = yfilter;
    }
    if(value_path == "recvReplyL2")
    {
        recvreplyl2.yfilter = yfilter;
    }
    if(value_path == "recvGratArpL2")
    {
        recvgratarpl2.yfilter = yfilter;
    }
    if(value_path == "recvDropL2")
    {
        recvdropl2.yfilter = yfilter;
    }
    if(value_path == "localEntryAdds")
    {
        localentryadds.yfilter = yfilter;
    }
    if(value_path == "localEntryDel")
    {
        localentrydel.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requests" || name == "requestsL2" || name == "gratuitous" || name == "gratuitousL2" || name == "fwdRequestsL3" || name == "fwdRepliesL3" || name == "fwdRequestOnCorePort" || name == "fwdReplyOnCorePort" || name == "sentDrop" || name == "sentReqL2" || name == "sentReplyL2" || name == "sentReqCoreL2" || name == "sentReplyCoreL2" || name == "sentDropL2" || name == "recvReqL3" || name == "recvReplyL3" || name == "recvLocalReqL3" || name == "recvLocalReplyL3" || name == "recvGratArp" || name == "recvDrop" || name == "recvRequestL2" || name == "recvReplyL2" || name == "recvGratArpL2" || name == "recvDropL2" || name == "localEntryAdds" || name == "localEntryDel")
        return true;
    return false;
}

System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::OfastatsItems()
    :
    dpadjerrdel{YType::uint64, "dpAdjErrDel"},
    cpmacmismatcherrdel{YType::uint64, "cpMacMismatchErrDel"},
    cpnullmacerrdel{YType::uint64, "cpNullMacErrDel"},
    cpnoadjerrdel{YType::uint64, "cpNoAdjErrDel"},
    cpcpnhmismatcherrdel{YType::uint64, "cpCpNhMismatchErrDel"},
    cpadjdelfailureerr{YType::uint64, "cpAdjDelFailureErr"},
    cpnullmacerradd{YType::uint64, "cpNullMacErrAdd"},
    cpdpmacmismatcherradd{YType::uint64, "cpDpMacMismatchErrAdd"},
    cpcpmacmismatcherradd{YType::uint64, "cpCpMacMismatchErrAdd"},
    cpaddfirsterr{YType::uint64, "cpAddFirstErr"},
    dpoverwritecperr{YType::uint64, "dpOverwriteCpErr"},
    dpcpnhmismatcherradd{YType::uint64, "dpCpNhMismatchErrAdd"},
    cpcpnhmismatcherradd{YType::uint64, "cpCpNhMismatchErrAdd"},
    cpdpnhmismatcherradd{YType::uint64, "cpDpNhMismatchErrAdd"},
    cpadjaddfailureerr{YType::uint64, "cpAdjAddFailureErr"},
    barrierresponseerr{YType::uint64, "barrierResponseErr"}
{

    yang_name = "ofastats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::~OfastatsItems()
{
}

bool System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::has_data() const
{
    if (is_presence_container) return true;
    return dpadjerrdel.is_set
	|| cpmacmismatcherrdel.is_set
	|| cpnullmacerrdel.is_set
	|| cpnoadjerrdel.is_set
	|| cpcpnhmismatcherrdel.is_set
	|| cpadjdelfailureerr.is_set
	|| cpnullmacerradd.is_set
	|| cpdpmacmismatcherradd.is_set
	|| cpcpmacmismatcherradd.is_set
	|| cpaddfirsterr.is_set
	|| dpoverwritecperr.is_set
	|| dpcpnhmismatcherradd.is_set
	|| cpcpnhmismatcherradd.is_set
	|| cpdpnhmismatcherradd.is_set
	|| cpadjaddfailureerr.is_set
	|| barrierresponseerr.is_set;
}

bool System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dpadjerrdel.yfilter)
	|| ydk::is_set(cpmacmismatcherrdel.yfilter)
	|| ydk::is_set(cpnullmacerrdel.yfilter)
	|| ydk::is_set(cpnoadjerrdel.yfilter)
	|| ydk::is_set(cpcpnhmismatcherrdel.yfilter)
	|| ydk::is_set(cpadjdelfailureerr.yfilter)
	|| ydk::is_set(cpnullmacerradd.yfilter)
	|| ydk::is_set(cpdpmacmismatcherradd.yfilter)
	|| ydk::is_set(cpcpmacmismatcherradd.yfilter)
	|| ydk::is_set(cpaddfirsterr.yfilter)
	|| ydk::is_set(dpoverwritecperr.yfilter)
	|| ydk::is_set(dpcpnhmismatcherradd.yfilter)
	|| ydk::is_set(cpcpnhmismatcherradd.yfilter)
	|| ydk::is_set(cpdpnhmismatcherradd.yfilter)
	|| ydk::is_set(cpadjaddfailureerr.yfilter)
	|| ydk::is_set(barrierresponseerr.yfilter);
}

std::string System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ofastats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dpadjerrdel.is_set || is_set(dpadjerrdel.yfilter)) leaf_name_data.push_back(dpadjerrdel.get_name_leafdata());
    if (cpmacmismatcherrdel.is_set || is_set(cpmacmismatcherrdel.yfilter)) leaf_name_data.push_back(cpmacmismatcherrdel.get_name_leafdata());
    if (cpnullmacerrdel.is_set || is_set(cpnullmacerrdel.yfilter)) leaf_name_data.push_back(cpnullmacerrdel.get_name_leafdata());
    if (cpnoadjerrdel.is_set || is_set(cpnoadjerrdel.yfilter)) leaf_name_data.push_back(cpnoadjerrdel.get_name_leafdata());
    if (cpcpnhmismatcherrdel.is_set || is_set(cpcpnhmismatcherrdel.yfilter)) leaf_name_data.push_back(cpcpnhmismatcherrdel.get_name_leafdata());
    if (cpadjdelfailureerr.is_set || is_set(cpadjdelfailureerr.yfilter)) leaf_name_data.push_back(cpadjdelfailureerr.get_name_leafdata());
    if (cpnullmacerradd.is_set || is_set(cpnullmacerradd.yfilter)) leaf_name_data.push_back(cpnullmacerradd.get_name_leafdata());
    if (cpdpmacmismatcherradd.is_set || is_set(cpdpmacmismatcherradd.yfilter)) leaf_name_data.push_back(cpdpmacmismatcherradd.get_name_leafdata());
    if (cpcpmacmismatcherradd.is_set || is_set(cpcpmacmismatcherradd.yfilter)) leaf_name_data.push_back(cpcpmacmismatcherradd.get_name_leafdata());
    if (cpaddfirsterr.is_set || is_set(cpaddfirsterr.yfilter)) leaf_name_data.push_back(cpaddfirsterr.get_name_leafdata());
    if (dpoverwritecperr.is_set || is_set(dpoverwritecperr.yfilter)) leaf_name_data.push_back(dpoverwritecperr.get_name_leafdata());
    if (dpcpnhmismatcherradd.is_set || is_set(dpcpnhmismatcherradd.yfilter)) leaf_name_data.push_back(dpcpnhmismatcherradd.get_name_leafdata());
    if (cpcpnhmismatcherradd.is_set || is_set(cpcpnhmismatcherradd.yfilter)) leaf_name_data.push_back(cpcpnhmismatcherradd.get_name_leafdata());
    if (cpdpnhmismatcherradd.is_set || is_set(cpdpnhmismatcherradd.yfilter)) leaf_name_data.push_back(cpdpnhmismatcherradd.get_name_leafdata());
    if (cpadjaddfailureerr.is_set || is_set(cpadjaddfailureerr.yfilter)) leaf_name_data.push_back(cpadjaddfailureerr.get_name_leafdata());
    if (barrierresponseerr.is_set || is_set(barrierresponseerr.yfilter)) leaf_name_data.push_back(barrierresponseerr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dpAdjErrDel")
    {
        dpadjerrdel = value;
        dpadjerrdel.value_namespace = name_space;
        dpadjerrdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpMacMismatchErrDel")
    {
        cpmacmismatcherrdel = value;
        cpmacmismatcherrdel.value_namespace = name_space;
        cpmacmismatcherrdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpNullMacErrDel")
    {
        cpnullmacerrdel = value;
        cpnullmacerrdel.value_namespace = name_space;
        cpnullmacerrdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpNoAdjErrDel")
    {
        cpnoadjerrdel = value;
        cpnoadjerrdel.value_namespace = name_space;
        cpnoadjerrdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpCpNhMismatchErrDel")
    {
        cpcpnhmismatcherrdel = value;
        cpcpnhmismatcherrdel.value_namespace = name_space;
        cpcpnhmismatcherrdel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpAdjDelFailureErr")
    {
        cpadjdelfailureerr = value;
        cpadjdelfailureerr.value_namespace = name_space;
        cpadjdelfailureerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpNullMacErrAdd")
    {
        cpnullmacerradd = value;
        cpnullmacerradd.value_namespace = name_space;
        cpnullmacerradd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpDpMacMismatchErrAdd")
    {
        cpdpmacmismatcherradd = value;
        cpdpmacmismatcherradd.value_namespace = name_space;
        cpdpmacmismatcherradd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpCpMacMismatchErrAdd")
    {
        cpcpmacmismatcherradd = value;
        cpcpmacmismatcherradd.value_namespace = name_space;
        cpcpmacmismatcherradd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpAddFirstErr")
    {
        cpaddfirsterr = value;
        cpaddfirsterr.value_namespace = name_space;
        cpaddfirsterr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpOverwriteCpErr")
    {
        dpoverwritecperr = value;
        dpoverwritecperr.value_namespace = name_space;
        dpoverwritecperr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dpCpNhMismatchErrAdd")
    {
        dpcpnhmismatcherradd = value;
        dpcpnhmismatcherradd.value_namespace = name_space;
        dpcpnhmismatcherradd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpCpNhMismatchErrAdd")
    {
        cpcpnhmismatcherradd = value;
        cpcpnhmismatcherradd.value_namespace = name_space;
        cpcpnhmismatcherradd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpDpNhMismatchErrAdd")
    {
        cpdpnhmismatcherradd = value;
        cpdpnhmismatcherradd.value_namespace = name_space;
        cpdpnhmismatcherradd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpAdjAddFailureErr")
    {
        cpadjaddfailureerr = value;
        cpadjaddfailureerr.value_namespace = name_space;
        cpadjaddfailureerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "barrierResponseErr")
    {
        barrierresponseerr = value;
        barrierresponseerr.value_namespace = name_space;
        barrierresponseerr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dpAdjErrDel")
    {
        dpadjerrdel.yfilter = yfilter;
    }
    if(value_path == "cpMacMismatchErrDel")
    {
        cpmacmismatcherrdel.yfilter = yfilter;
    }
    if(value_path == "cpNullMacErrDel")
    {
        cpnullmacerrdel.yfilter = yfilter;
    }
    if(value_path == "cpNoAdjErrDel")
    {
        cpnoadjerrdel.yfilter = yfilter;
    }
    if(value_path == "cpCpNhMismatchErrDel")
    {
        cpcpnhmismatcherrdel.yfilter = yfilter;
    }
    if(value_path == "cpAdjDelFailureErr")
    {
        cpadjdelfailureerr.yfilter = yfilter;
    }
    if(value_path == "cpNullMacErrAdd")
    {
        cpnullmacerradd.yfilter = yfilter;
    }
    if(value_path == "cpDpMacMismatchErrAdd")
    {
        cpdpmacmismatcherradd.yfilter = yfilter;
    }
    if(value_path == "cpCpMacMismatchErrAdd")
    {
        cpcpmacmismatcherradd.yfilter = yfilter;
    }
    if(value_path == "cpAddFirstErr")
    {
        cpaddfirsterr.yfilter = yfilter;
    }
    if(value_path == "dpOverwriteCpErr")
    {
        dpoverwritecperr.yfilter = yfilter;
    }
    if(value_path == "dpCpNhMismatchErrAdd")
    {
        dpcpnhmismatcherradd.yfilter = yfilter;
    }
    if(value_path == "cpCpNhMismatchErrAdd")
    {
        cpcpnhmismatcherradd.yfilter = yfilter;
    }
    if(value_path == "cpDpNhMismatchErrAdd")
    {
        cpdpnhmismatcherradd.yfilter = yfilter;
    }
    if(value_path == "cpAdjAddFailureErr")
    {
        cpadjaddfailureerr.yfilter = yfilter;
    }
    if(value_path == "barrierResponseErr")
    {
        barrierresponseerr.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dpAdjErrDel" || name == "cpMacMismatchErrDel" || name == "cpNullMacErrDel" || name == "cpNoAdjErrDel" || name == "cpCpNhMismatchErrDel" || name == "cpAdjDelFailureErr" || name == "cpNullMacErrAdd" || name == "cpDpMacMismatchErrAdd" || name == "cpCpMacMismatchErrAdd" || name == "cpAddFirstErr" || name == "dpOverwriteCpErr" || name == "dpCpNhMismatchErrAdd" || name == "cpCpNhMismatchErrAdd" || name == "cpDpNhMismatchErrAdd" || name == "cpAdjAddFailureErr" || name == "barrierResponseErr")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomItems()
    :
    dom_list(this, {"name"})
{

    yang_name = "dom-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::DomItems::~DomItems()
{
}

bool System::ArpItems::InstItems::DomItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::has_operation() const
{
    for (std::size_t index=0; index<dom_list.len(); index++)
    {
        if(dom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::DomItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dom-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dom-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList>();
        ent_->parent = this;
        dom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dom-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::DomList()
    :
    name{YType::str, "name"},
    encap{YType::str, "encap"}
        ,
    db_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::DbItems>())
    , if_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems>())
{
    db_items->parent = this;
    if_items->parent = this;

    yang_name = "Dom-list"; yang_parent_name = "dom-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ArpItems::InstItems::DomItems::DomList::~DomList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| encap.is_set
	|| (db_items !=  nullptr && db_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::ArpItems::InstItems::DomItems::DomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| (db_items !=  nullptr && db_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::ArpItems::InstItems::DomItems::DomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/arp-items/inst-items/dom-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ArpItems::InstItems::DomItems::DomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dom-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "db-items")
    {
        if(db_items == nullptr)
        {
            db_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::DbItems>();
        }
        return db_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(db_items != nullptr)
    {
        _children["db-items"] = db_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "db-items" || name == "if-items" || name == "name" || name == "encap")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbItems()
    :
    db_list(this, {"type"})
{

    yang_name = "db-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::~DbItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::has_operation() const
{
    for (std::size_t index=0; index<db_list.len(); index++)
    {
        if(db_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::DbItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "db-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::DbItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::DbItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Db-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList>();
        ent_->parent = this;
        db_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::DbItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : db_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::DbItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::DbItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Db-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::DbList()
    :
    type{YType::enumeration, "type"},
    name{YType::str, "name"}
        ,
    adj_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems>())
{
    adj_items->parent = this;

    yang_name = "Db-list"; yang_parent_name = "db-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::~DbList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| name.is_set
	|| (adj_items !=  nullptr && adj_items->has_data());
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (adj_items !=  nullptr && adj_items->has_operation());
}

std::string System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Db-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adj-items")
    {
        if(adj_items == nullptr)
        {
            adj_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems>();
        }
        return adj_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adj_items != nullptr)
    {
        _children["adj-items"] = adj_items;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adj-items" || name == "type" || name == "name")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjItems()
    :
    adjep_list(this, {"ifid", "ip"})
{

    yang_name = "adj-items"; yang_parent_name = "Db-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::~AdjItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::has_operation() const
{
    for (std::size_t index=0; index<adjep_list.len(); index++)
    {
        if(adjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AdjEp-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList>();
        ent_->parent = this;
        adjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : adjep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AdjEp-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::AdjEpList()
    :
    ifid{YType::str, "ifId"},
    ip{YType::str, "ip"},
    mac{YType::str, "mac"},
    upts{YType::str, "upTS"},
    operst{YType::enumeration, "operSt"},
    physifid{YType::str, "physIfId"},
    flags{YType::str, "flags"},
    name{YType::str, "name"}
{

    yang_name = "AdjEp-list"; yang_parent_name = "adj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::~AdjEpList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return ifid.is_set
	|| ip.is_set
	|| mac.is_set
	|| upts.is_set
	|| operst.is_set
	|| physifid.is_set
	|| flags.is_set
	|| name.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifid.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(physifid.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AdjEp-list";
    ADD_KEY_TOKEN(ifid, "ifId");
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifid.is_set || is_set(ifid.yfilter)) leaf_name_data.push_back(ifid.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (physifid.is_set || is_set(physifid.yfilter)) leaf_name_data.push_back(physifid.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifId")
    {
        ifid = value;
        ifid.value_namespace = name_space;
        ifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTS")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physIfId")
    {
        physifid = value;
        physifid.value_namespace = name_space;
        physifid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifId")
    {
        ifid.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
    if(value_path == "upTS")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "physIfId")
    {
        physifid.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifId" || name == "ip" || name == "mac" || name == "upTS" || name == "operSt" || name == "physIfId" || name == "flags" || name == "name")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Dom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::~IfItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    timeout{YType::uint16, "timeout"},
    gratuitousrequest{YType::enumeration, "gratuitousRequest"},
    gratuitousupdate{YType::enumeration, "gratuitousUpdate"},
    gratuitoushsrpdup{YType::enumeration, "gratuitousHsrpDup"},
    proxyarp{YType::enumeration, "proxyArp"},
    localproxyarp{YType::enumeration, "localProxyArp"},
    localproxyarpnohwflood{YType::enumeration, "localProxyArpNoHwFlood"},
    deleteadjonmacdelete{YType::enumeration, "deleteAdjOnMacDelete"},
    refreshtimerformacdelete{YType::uint16, "refreshTimerForMacDelete"},
    duplicateipdetectionforunnumberedsvi{YType::enumeration, "duplicateIpDetectionForUnnumberedSvi"},
    configerror{YType::str, "configError"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    sadj_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems>())
    , ifstatstx_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems>())
    , ifstatsrx_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems>())
    , ifstatsadj_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems>())
    , ifstatsmisc_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems>())
    , ifstatsmh_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems>())
    , rtvrfmbr_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>())
{
    sadj_items->parent = this;
    ifstatstx_items->parent = this;
    ifstatsrx_items->parent = this;
    ifstatsadj_items->parent = this;
    ifstatsmisc_items->parent = this;
    ifstatsmh_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::~IfList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| timeout.is_set
	|| gratuitousrequest.is_set
	|| gratuitousupdate.is_set
	|| gratuitoushsrpdup.is_set
	|| proxyarp.is_set
	|| localproxyarp.is_set
	|| localproxyarpnohwflood.is_set
	|| deleteadjonmacdelete.is_set
	|| refreshtimerformacdelete.is_set
	|| duplicateipdetectionforunnumberedsvi.is_set
	|| configerror.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (sadj_items !=  nullptr && sadj_items->has_data())
	|| (ifstatstx_items !=  nullptr && ifstatstx_items->has_data())
	|| (ifstatsrx_items !=  nullptr && ifstatsrx_items->has_data())
	|| (ifstatsadj_items !=  nullptr && ifstatsadj_items->has_data())
	|| (ifstatsmisc_items !=  nullptr && ifstatsmisc_items->has_data())
	|| (ifstatsmh_items !=  nullptr && ifstatsmh_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(gratuitousrequest.yfilter)
	|| ydk::is_set(gratuitousupdate.yfilter)
	|| ydk::is_set(gratuitoushsrpdup.yfilter)
	|| ydk::is_set(proxyarp.yfilter)
	|| ydk::is_set(localproxyarp.yfilter)
	|| ydk::is_set(localproxyarpnohwflood.yfilter)
	|| ydk::is_set(deleteadjonmacdelete.yfilter)
	|| ydk::is_set(refreshtimerformacdelete.yfilter)
	|| ydk::is_set(duplicateipdetectionforunnumberedsvi.yfilter)
	|| ydk::is_set(configerror.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (sadj_items !=  nullptr && sadj_items->has_operation())
	|| (ifstatstx_items !=  nullptr && ifstatstx_items->has_operation())
	|| (ifstatsrx_items !=  nullptr && ifstatsrx_items->has_operation())
	|| (ifstatsadj_items !=  nullptr && ifstatsadj_items->has_operation())
	|| (ifstatsmisc_items !=  nullptr && ifstatsmisc_items->has_operation())
	|| (ifstatsmh_items !=  nullptr && ifstatsmh_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (gratuitousrequest.is_set || is_set(gratuitousrequest.yfilter)) leaf_name_data.push_back(gratuitousrequest.get_name_leafdata());
    if (gratuitousupdate.is_set || is_set(gratuitousupdate.yfilter)) leaf_name_data.push_back(gratuitousupdate.get_name_leafdata());
    if (gratuitoushsrpdup.is_set || is_set(gratuitoushsrpdup.yfilter)) leaf_name_data.push_back(gratuitoushsrpdup.get_name_leafdata());
    if (proxyarp.is_set || is_set(proxyarp.yfilter)) leaf_name_data.push_back(proxyarp.get_name_leafdata());
    if (localproxyarp.is_set || is_set(localproxyarp.yfilter)) leaf_name_data.push_back(localproxyarp.get_name_leafdata());
    if (localproxyarpnohwflood.is_set || is_set(localproxyarpnohwflood.yfilter)) leaf_name_data.push_back(localproxyarpnohwflood.get_name_leafdata());
    if (deleteadjonmacdelete.is_set || is_set(deleteadjonmacdelete.yfilter)) leaf_name_data.push_back(deleteadjonmacdelete.get_name_leafdata());
    if (refreshtimerformacdelete.is_set || is_set(refreshtimerformacdelete.yfilter)) leaf_name_data.push_back(refreshtimerformacdelete.get_name_leafdata());
    if (duplicateipdetectionforunnumberedsvi.is_set || is_set(duplicateipdetectionforunnumberedsvi.yfilter)) leaf_name_data.push_back(duplicateipdetectionforunnumberedsvi.get_name_leafdata());
    if (configerror.is_set || is_set(configerror.yfilter)) leaf_name_data.push_back(configerror.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sadj-items")
    {
        if(sadj_items == nullptr)
        {
            sadj_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems>();
        }
        return sadj_items;
    }

    if(child_yang_name == "ifstatstx-items")
    {
        if(ifstatstx_items == nullptr)
        {
            ifstatstx_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems>();
        }
        return ifstatstx_items;
    }

    if(child_yang_name == "ifstatsrx-items")
    {
        if(ifstatsrx_items == nullptr)
        {
            ifstatsrx_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems>();
        }
        return ifstatsrx_items;
    }

    if(child_yang_name == "ifstatsadj-items")
    {
        if(ifstatsadj_items == nullptr)
        {
            ifstatsadj_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems>();
        }
        return ifstatsadj_items;
    }

    if(child_yang_name == "ifstatsmisc-items")
    {
        if(ifstatsmisc_items == nullptr)
        {
            ifstatsmisc_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems>();
        }
        return ifstatsmisc_items;
    }

    if(child_yang_name == "ifstatsmh-items")
    {
        if(ifstatsmh_items == nullptr)
        {
            ifstatsmh_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems>();
        }
        return ifstatsmh_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sadj_items != nullptr)
    {
        _children["sadj-items"] = sadj_items;
    }

    if(ifstatstx_items != nullptr)
    {
        _children["ifstatstx-items"] = ifstatstx_items;
    }

    if(ifstatsrx_items != nullptr)
    {
        _children["ifstatsrx-items"] = ifstatsrx_items;
    }

    if(ifstatsadj_items != nullptr)
    {
        _children["ifstatsadj-items"] = ifstatsadj_items;
    }

    if(ifstatsmisc_items != nullptr)
    {
        _children["ifstatsmisc-items"] = ifstatsmisc_items;
    }

    if(ifstatsmh_items != nullptr)
    {
        _children["ifstatsmh-items"] = ifstatsmh_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitousRequest")
    {
        gratuitousrequest = value;
        gratuitousrequest.value_namespace = name_space;
        gratuitousrequest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitousUpdate")
    {
        gratuitousupdate = value;
        gratuitousupdate.value_namespace = name_space;
        gratuitousupdate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitousHsrpDup")
    {
        gratuitoushsrpdup = value;
        gratuitoushsrpdup.value_namespace = name_space;
        gratuitoushsrpdup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxyArp")
    {
        proxyarp = value;
        proxyarp.value_namespace = name_space;
        proxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localProxyArp")
    {
        localproxyarp = value;
        localproxyarp.value_namespace = name_space;
        localproxyarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localProxyArpNoHwFlood")
    {
        localproxyarpnohwflood = value;
        localproxyarpnohwflood.value_namespace = name_space;
        localproxyarpnohwflood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deleteAdjOnMacDelete")
    {
        deleteadjonmacdelete = value;
        deleteadjonmacdelete.value_namespace = name_space;
        deleteadjonmacdelete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refreshTimerForMacDelete")
    {
        refreshtimerformacdelete = value;
        refreshtimerformacdelete.value_namespace = name_space;
        refreshtimerformacdelete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duplicateIpDetectionForUnnumberedSvi")
    {
        duplicateipdetectionforunnumberedsvi = value;
        duplicateipdetectionforunnumberedsvi.value_namespace = name_space;
        duplicateipdetectionforunnumberedsvi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configError")
    {
        configerror = value;
        configerror.value_namespace = name_space;
        configerror.value_namespace_prefix = name_space_prefix;
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
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "gratuitousRequest")
    {
        gratuitousrequest.yfilter = yfilter;
    }
    if(value_path == "gratuitousUpdate")
    {
        gratuitousupdate.yfilter = yfilter;
    }
    if(value_path == "gratuitousHsrpDup")
    {
        gratuitoushsrpdup.yfilter = yfilter;
    }
    if(value_path == "proxyArp")
    {
        proxyarp.yfilter = yfilter;
    }
    if(value_path == "localProxyArp")
    {
        localproxyarp.yfilter = yfilter;
    }
    if(value_path == "localProxyArpNoHwFlood")
    {
        localproxyarpnohwflood.yfilter = yfilter;
    }
    if(value_path == "deleteAdjOnMacDelete")
    {
        deleteadjonmacdelete.yfilter = yfilter;
    }
    if(value_path == "refreshTimerForMacDelete")
    {
        refreshtimerformacdelete.yfilter = yfilter;
    }
    if(value_path == "duplicateIpDetectionForUnnumberedSvi")
    {
        duplicateipdetectionforunnumberedsvi.yfilter = yfilter;
    }
    if(value_path == "configError")
    {
        configerror.yfilter = yfilter;
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
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sadj-items" || name == "ifstatstx-items" || name == "ifstatsrx-items" || name == "ifstatsadj-items" || name == "ifstatsmisc-items" || name == "ifstatsmh-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "timeout" || name == "gratuitousRequest" || name == "gratuitousUpdate" || name == "gratuitousHsrpDup" || name == "proxyArp" || name == "localProxyArp" || name == "localProxyArpNoHwFlood" || name == "deleteAdjOnMacDelete" || name == "refreshTimerForMacDelete" || name == "duplicateIpDetectionForUnnumberedSvi" || name == "configError" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::SadjItems()
    :
    stadjep_list(this, {"ip"})
{

    yang_name = "sadj-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::~SadjItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stadjep_list.len(); index++)
    {
        if(stadjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::has_operation() const
{
    for (std::size_t index=0; index<stadjep_list.len(); index++)
    {
        if(stadjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sadj-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "StAdjEp-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList>();
        ent_->parent = this;
        stadjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stadjep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "StAdjEp-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::StAdjEpList()
    :
    ip{YType::str, "ip"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::enumeration, "operStQual"},
    name{YType::str, "name"},
    mac{YType::str, "mac"}
        ,
    rtctrlradjeptostadjep_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems>())
    , rtfvepdefreftostadjep_items(std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems>())
{
    rtctrlradjeptostadjep_items->parent = this;
    rtfvepdefreftostadjep_items->parent = this;

    yang_name = "StAdjEp-list"; yang_parent_name = "sadj-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::~StAdjEpList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| operst.is_set
	|| operstqual.is_set
	|| name.is_set
	|| mac.is_set
	|| (rtctrlradjeptostadjep_items !=  nullptr && rtctrlradjeptostadjep_items->has_data())
	|| (rtfvepdefreftostadjep_items !=  nullptr && rtfvepdefreftostadjep_items->has_data());
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mac.yfilter)
	|| (rtctrlradjeptostadjep_items !=  nullptr && rtctrlradjeptostadjep_items->has_operation())
	|| (rtfvepdefreftostadjep_items !=  nullptr && rtfvepdefreftostadjep_items->has_operation());
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "StAdjEp-list";
    ADD_KEY_TOKEN(ip, "ip");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mac.is_set || is_set(mac.yfilter)) leaf_name_data.push_back(mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtCtrlrAdjEpToStAdjEp-items")
    {
        if(rtctrlradjeptostadjep_items == nullptr)
        {
            rtctrlradjeptostadjep_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems>();
        }
        return rtctrlradjeptostadjep_items;
    }

    if(child_yang_name == "rtfvEpDefRefToStAdjEp-items")
    {
        if(rtfvepdefreftostadjep_items == nullptr)
        {
            rtfvepdefreftostadjep_items = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems>();
        }
        return rtfvepdefreftostadjep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtctrlradjeptostadjep_items != nullptr)
    {
        _children["rtCtrlrAdjEpToStAdjEp-items"] = rtctrlradjeptostadjep_items;
    }

    if(rtfvepdefreftostadjep_items != nullptr)
    {
        _children["rtfvEpDefRefToStAdjEp-items"] = rtfvepdefreftostadjep_items;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mac")
    {
        mac = value;
        mac.value_namespace = name_space;
        mac.value_namespace_prefix = name_space_prefix;
    }
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
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
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtCtrlrAdjEpToStAdjEp-items" || name == "rtfvEpDefRefToStAdjEp-items" || name == "ip" || name == "operSt" || name == "operStQual" || name == "name" || name == "mac")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::RtCtrlrAdjEpToStAdjEpItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtCtrlrAdjEpToStAdjEp-items"; yang_parent_name = "StAdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::~RtCtrlrAdjEpToStAdjEpItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtCtrlrAdjEpToStAdjEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtfvEpDefRefToStAdjEpItems()
    :
    rtfvepdefreftostadjep_list(this, {"tdn"})
{

    yang_name = "rtfvEpDefRefToStAdjEp-items"; yang_parent_name = "StAdjEp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::~RtfvEpDefRefToStAdjEpItems()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfvepdefreftostadjep_list.len(); index++)
    {
        if(rtfvepdefreftostadjep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfvepdefreftostadjep_list.len(); index++)
    {
        if(rtfvepdefreftostadjep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfvEpDefRefToStAdjEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFvEpDefRefToStAdjEp-list")
    {
        auto ent_ = std::make_shared<System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList>();
        ent_->parent = this;
        rtfvepdefreftostadjep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfvepdefreftostadjep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFvEpDefRefToStAdjEp-list")
        return true;
    return false;
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::RtFvEpDefRefToStAdjEpList()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "RtFvEpDefRefToStAdjEp-list"; yang_parent_name = "rtfvEpDefRefToStAdjEp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::~RtFvEpDefRefToStAdjEpList()
{
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFvEpDefRefToStAdjEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}


}
}

