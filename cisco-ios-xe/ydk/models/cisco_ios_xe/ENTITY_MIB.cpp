
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ENTITY_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ENTITY_MIB {

ENTITYMIB::ENTITYMIB()
    :
    entitygeneral(std::make_shared<ENTITYMIB::EntityGeneral>())
    , entphysicaltable(std::make_shared<ENTITYMIB::EntPhysicalTable>())
    , entlogicaltable(std::make_shared<ENTITYMIB::EntLogicalTable>())
    , entlpmappingtable(std::make_shared<ENTITYMIB::EntLPMappingTable>())
    , entaliasmappingtable(std::make_shared<ENTITYMIB::EntAliasMappingTable>())
    , entphysicalcontainstable(std::make_shared<ENTITYMIB::EntPhysicalContainsTable>())
{
    entitygeneral->parent = this;
    entphysicaltable->parent = this;
    entlogicaltable->parent = this;
    entlpmappingtable->parent = this;
    entaliasmappingtable->parent = this;
    entphysicalcontainstable->parent = this;

    yang_name = "ENTITY-MIB"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

ENTITYMIB::~ENTITYMIB()
{
}

bool ENTITYMIB::has_data() const
{
    if (is_presence_container) return true;
    return (entitygeneral !=  nullptr && entitygeneral->has_data())
	|| (entphysicaltable !=  nullptr && entphysicaltable->has_data())
	|| (entlogicaltable !=  nullptr && entlogicaltable->has_data())
	|| (entlpmappingtable !=  nullptr && entlpmappingtable->has_data())
	|| (entaliasmappingtable !=  nullptr && entaliasmappingtable->has_data())
	|| (entphysicalcontainstable !=  nullptr && entphysicalcontainstable->has_data());
}

bool ENTITYMIB::has_operation() const
{
    return is_set(yfilter)
	|| (entitygeneral !=  nullptr && entitygeneral->has_operation())
	|| (entphysicaltable !=  nullptr && entphysicaltable->has_operation())
	|| (entlogicaltable !=  nullptr && entlogicaltable->has_operation())
	|| (entlpmappingtable !=  nullptr && entlpmappingtable->has_operation())
	|| (entaliasmappingtable !=  nullptr && entaliasmappingtable->has_operation())
	|| (entphysicalcontainstable !=  nullptr && entphysicalcontainstable->has_operation());
}

std::string ENTITYMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ENTITYMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entityGeneral")
    {
        if(entitygeneral == nullptr)
        {
            entitygeneral = std::make_shared<ENTITYMIB::EntityGeneral>();
        }
        return entitygeneral;
    }

    if(child_yang_name == "entPhysicalTable")
    {
        if(entphysicaltable == nullptr)
        {
            entphysicaltable = std::make_shared<ENTITYMIB::EntPhysicalTable>();
        }
        return entphysicaltable;
    }

    if(child_yang_name == "entLogicalTable")
    {
        if(entlogicaltable == nullptr)
        {
            entlogicaltable = std::make_shared<ENTITYMIB::EntLogicalTable>();
        }
        return entlogicaltable;
    }

    if(child_yang_name == "entLPMappingTable")
    {
        if(entlpmappingtable == nullptr)
        {
            entlpmappingtable = std::make_shared<ENTITYMIB::EntLPMappingTable>();
        }
        return entlpmappingtable;
    }

    if(child_yang_name == "entAliasMappingTable")
    {
        if(entaliasmappingtable == nullptr)
        {
            entaliasmappingtable = std::make_shared<ENTITYMIB::EntAliasMappingTable>();
        }
        return entaliasmappingtable;
    }

    if(child_yang_name == "entPhysicalContainsTable")
    {
        if(entphysicalcontainstable == nullptr)
        {
            entphysicalcontainstable = std::make_shared<ENTITYMIB::EntPhysicalContainsTable>();
        }
        return entphysicalcontainstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ENTITYMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entitygeneral != nullptr)
    {
        _children["entityGeneral"] = entitygeneral;
    }

    if(entphysicaltable != nullptr)
    {
        _children["entPhysicalTable"] = entphysicaltable;
    }

    if(entlogicaltable != nullptr)
    {
        _children["entLogicalTable"] = entlogicaltable;
    }

    if(entlpmappingtable != nullptr)
    {
        _children["entLPMappingTable"] = entlpmappingtable;
    }

    if(entaliasmappingtable != nullptr)
    {
        _children["entAliasMappingTable"] = entaliasmappingtable;
    }

    if(entphysicalcontainstable != nullptr)
    {
        _children["entPhysicalContainsTable"] = entphysicalcontainstable;
    }

    return _children;
}

void ENTITYMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ENTITYMIB::clone_ptr() const
{
    return std::make_shared<ENTITYMIB>();
}

std::string ENTITYMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ENTITYMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ENTITYMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ENTITYMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ENTITYMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entityGeneral" || name == "entPhysicalTable" || name == "entLogicalTable" || name == "entLPMappingTable" || name == "entAliasMappingTable" || name == "entPhysicalContainsTable")
        return true;
    return false;
}

ENTITYMIB::EntityGeneral::EntityGeneral()
    :
    entlastchangetime{YType::uint32, "entLastChangeTime"}
{

    yang_name = "entityGeneral"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYMIB::EntityGeneral::~EntityGeneral()
{
}

bool ENTITYMIB::EntityGeneral::has_data() const
{
    if (is_presence_container) return true;
    return entlastchangetime.is_set;
}

bool ENTITYMIB::EntityGeneral::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entlastchangetime.yfilter);
}

std::string ENTITYMIB::EntityGeneral::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::EntityGeneral::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entityGeneral";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::EntityGeneral::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entlastchangetime.is_set || is_set(entlastchangetime.yfilter)) leaf_name_data.push_back(entlastchangetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ENTITYMIB::EntityGeneral::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ENTITYMIB::EntityGeneral::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ENTITYMIB::EntityGeneral::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entLastChangeTime")
    {
        entlastchangetime = value;
        entlastchangetime.value_namespace = name_space;
        entlastchangetime.value_namespace_prefix = name_space_prefix;
    }
}

void ENTITYMIB::EntityGeneral::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entLastChangeTime")
    {
        entlastchangetime.yfilter = yfilter;
    }
}

bool ENTITYMIB::EntityGeneral::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entLastChangeTime")
        return true;
    return false;
}

ENTITYMIB::EntPhysicalTable::EntPhysicalTable()
    :
    entphysicalentry(this, {"entphysicalindex"})
{

    yang_name = "entPhysicalTable"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYMIB::EntPhysicalTable::~EntPhysicalTable()
{
}

bool ENTITYMIB::EntPhysicalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entphysicalentry.len(); index++)
    {
        if(entphysicalentry[index]->has_data())
            return true;
    }
    return false;
}

bool ENTITYMIB::EntPhysicalTable::has_operation() const
{
    for (std::size_t index=0; index<entphysicalentry.len(); index++)
    {
        if(entphysicalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ENTITYMIB::EntPhysicalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::EntPhysicalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhysicalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::EntPhysicalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ENTITYMIB::EntPhysicalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entPhysicalEntry")
    {
        auto ent_ = std::make_shared<ENTITYMIB::EntPhysicalTable::EntPhysicalEntry>();
        ent_->parent = this;
        entphysicalentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ENTITYMIB::EntPhysicalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entphysicalentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ENTITYMIB::EntPhysicalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYMIB::EntPhysicalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ENTITYMIB::EntPhysicalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalEntry")
        return true;
    return false;
}

ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::EntPhysicalEntry()
    :
    entphysicalindex{YType::int32, "entPhysicalIndex"},
    entphysicaldescr{YType::str, "entPhysicalDescr"},
    entphysicalvendortype{YType::str, "entPhysicalVendorType"},
    entphysicalcontainedin{YType::int32, "entPhysicalContainedIn"},
    entphysicalclass{YType::enumeration, "entPhysicalClass"},
    entphysicalparentrelpos{YType::int32, "entPhysicalParentRelPos"},
    entphysicalname{YType::str, "entPhysicalName"},
    entphysicalhardwarerev{YType::str, "entPhysicalHardwareRev"},
    entphysicalfirmwarerev{YType::str, "entPhysicalFirmwareRev"},
    entphysicalsoftwarerev{YType::str, "entPhysicalSoftwareRev"},
    entphysicalserialnum{YType::str, "entPhysicalSerialNum"},
    entphysicalmfgname{YType::str, "entPhysicalMfgName"},
    entphysicalmodelname{YType::str, "entPhysicalModelName"},
    entphysicalalias{YType::str, "entPhysicalAlias"},
    entphysicalassetid{YType::str, "entPhysicalAssetID"},
    entphysicalisfru{YType::boolean, "entPhysicalIsFRU"},
    entphysicalmfgdate{YType::str, "entPhysicalMfgDate"},
    entphysicaluris{YType::str, "entPhysicalUris"},
    ceentphysicalsecondserialnum{YType::str, "CISCO-ENTITY-EXT-MIB:ceEntPhysicalSecondSerialNum"}
{

    yang_name = "entPhysicalEntry"; yang_parent_name = "entPhysicalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::~EntPhysicalEntry()
{
}

bool ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| entphysicaldescr.is_set
	|| entphysicalvendortype.is_set
	|| entphysicalcontainedin.is_set
	|| entphysicalclass.is_set
	|| entphysicalparentrelpos.is_set
	|| entphysicalname.is_set
	|| entphysicalhardwarerev.is_set
	|| entphysicalfirmwarerev.is_set
	|| entphysicalsoftwarerev.is_set
	|| entphysicalserialnum.is_set
	|| entphysicalmfgname.is_set
	|| entphysicalmodelname.is_set
	|| entphysicalalias.is_set
	|| entphysicalassetid.is_set
	|| entphysicalisfru.is_set
	|| entphysicalmfgdate.is_set
	|| entphysicaluris.is_set
	|| ceentphysicalsecondserialnum.is_set;
}

bool ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entphysicaldescr.yfilter)
	|| ydk::is_set(entphysicalvendortype.yfilter)
	|| ydk::is_set(entphysicalcontainedin.yfilter)
	|| ydk::is_set(entphysicalclass.yfilter)
	|| ydk::is_set(entphysicalparentrelpos.yfilter)
	|| ydk::is_set(entphysicalname.yfilter)
	|| ydk::is_set(entphysicalhardwarerev.yfilter)
	|| ydk::is_set(entphysicalfirmwarerev.yfilter)
	|| ydk::is_set(entphysicalsoftwarerev.yfilter)
	|| ydk::is_set(entphysicalserialnum.yfilter)
	|| ydk::is_set(entphysicalmfgname.yfilter)
	|| ydk::is_set(entphysicalmodelname.yfilter)
	|| ydk::is_set(entphysicalalias.yfilter)
	|| ydk::is_set(entphysicalassetid.yfilter)
	|| ydk::is_set(entphysicalisfru.yfilter)
	|| ydk::is_set(entphysicalmfgdate.yfilter)
	|| ydk::is_set(entphysicaluris.yfilter)
	|| ydk::is_set(ceentphysicalsecondserialnum.yfilter);
}

std::string ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/entPhysicalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhysicalEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entphysicaldescr.is_set || is_set(entphysicaldescr.yfilter)) leaf_name_data.push_back(entphysicaldescr.get_name_leafdata());
    if (entphysicalvendortype.is_set || is_set(entphysicalvendortype.yfilter)) leaf_name_data.push_back(entphysicalvendortype.get_name_leafdata());
    if (entphysicalcontainedin.is_set || is_set(entphysicalcontainedin.yfilter)) leaf_name_data.push_back(entphysicalcontainedin.get_name_leafdata());
    if (entphysicalclass.is_set || is_set(entphysicalclass.yfilter)) leaf_name_data.push_back(entphysicalclass.get_name_leafdata());
    if (entphysicalparentrelpos.is_set || is_set(entphysicalparentrelpos.yfilter)) leaf_name_data.push_back(entphysicalparentrelpos.get_name_leafdata());
    if (entphysicalname.is_set || is_set(entphysicalname.yfilter)) leaf_name_data.push_back(entphysicalname.get_name_leafdata());
    if (entphysicalhardwarerev.is_set || is_set(entphysicalhardwarerev.yfilter)) leaf_name_data.push_back(entphysicalhardwarerev.get_name_leafdata());
    if (entphysicalfirmwarerev.is_set || is_set(entphysicalfirmwarerev.yfilter)) leaf_name_data.push_back(entphysicalfirmwarerev.get_name_leafdata());
    if (entphysicalsoftwarerev.is_set || is_set(entphysicalsoftwarerev.yfilter)) leaf_name_data.push_back(entphysicalsoftwarerev.get_name_leafdata());
    if (entphysicalserialnum.is_set || is_set(entphysicalserialnum.yfilter)) leaf_name_data.push_back(entphysicalserialnum.get_name_leafdata());
    if (entphysicalmfgname.is_set || is_set(entphysicalmfgname.yfilter)) leaf_name_data.push_back(entphysicalmfgname.get_name_leafdata());
    if (entphysicalmodelname.is_set || is_set(entphysicalmodelname.yfilter)) leaf_name_data.push_back(entphysicalmodelname.get_name_leafdata());
    if (entphysicalalias.is_set || is_set(entphysicalalias.yfilter)) leaf_name_data.push_back(entphysicalalias.get_name_leafdata());
    if (entphysicalassetid.is_set || is_set(entphysicalassetid.yfilter)) leaf_name_data.push_back(entphysicalassetid.get_name_leafdata());
    if (entphysicalisfru.is_set || is_set(entphysicalisfru.yfilter)) leaf_name_data.push_back(entphysicalisfru.get_name_leafdata());
    if (entphysicalmfgdate.is_set || is_set(entphysicalmfgdate.yfilter)) leaf_name_data.push_back(entphysicalmfgdate.get_name_leafdata());
    if (entphysicaluris.is_set || is_set(entphysicaluris.yfilter)) leaf_name_data.push_back(entphysicaluris.get_name_leafdata());
    if (ceentphysicalsecondserialnum.is_set || is_set(ceentphysicalsecondserialnum.yfilter)) leaf_name_data.push_back(ceentphysicalsecondserialnum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalDescr")
    {
        entphysicaldescr = value;
        entphysicaldescr.value_namespace = name_space;
        entphysicaldescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalVendorType")
    {
        entphysicalvendortype = value;
        entphysicalvendortype.value_namespace = name_space;
        entphysicalvendortype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalContainedIn")
    {
        entphysicalcontainedin = value;
        entphysicalcontainedin.value_namespace = name_space;
        entphysicalcontainedin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalClass")
    {
        entphysicalclass = value;
        entphysicalclass.value_namespace = name_space;
        entphysicalclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalParentRelPos")
    {
        entphysicalparentrelpos = value;
        entphysicalparentrelpos.value_namespace = name_space;
        entphysicalparentrelpos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalName")
    {
        entphysicalname = value;
        entphysicalname.value_namespace = name_space;
        entphysicalname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalHardwareRev")
    {
        entphysicalhardwarerev = value;
        entphysicalhardwarerev.value_namespace = name_space;
        entphysicalhardwarerev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalFirmwareRev")
    {
        entphysicalfirmwarerev = value;
        entphysicalfirmwarerev.value_namespace = name_space;
        entphysicalfirmwarerev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalSoftwareRev")
    {
        entphysicalsoftwarerev = value;
        entphysicalsoftwarerev.value_namespace = name_space;
        entphysicalsoftwarerev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalSerialNum")
    {
        entphysicalserialnum = value;
        entphysicalserialnum.value_namespace = name_space;
        entphysicalserialnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalMfgName")
    {
        entphysicalmfgname = value;
        entphysicalmfgname.value_namespace = name_space;
        entphysicalmfgname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalModelName")
    {
        entphysicalmodelname = value;
        entphysicalmodelname.value_namespace = name_space;
        entphysicalmodelname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalAlias")
    {
        entphysicalalias = value;
        entphysicalalias.value_namespace = name_space;
        entphysicalalias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalAssetID")
    {
        entphysicalassetid = value;
        entphysicalassetid.value_namespace = name_space;
        entphysicalassetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalIsFRU")
    {
        entphysicalisfru = value;
        entphysicalisfru.value_namespace = name_space;
        entphysicalisfru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalMfgDate")
    {
        entphysicalmfgdate = value;
        entphysicalmfgdate.value_namespace = name_space;
        entphysicalmfgdate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalUris")
    {
        entphysicaluris = value;
        entphysicaluris.value_namespace = name_space;
        entphysicaluris.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-ENTITY-EXT-MIB:ceEntPhysicalSecondSerialNum")
    {
        ceentphysicalsecondserialnum = value;
        ceentphysicalsecondserialnum.value_namespace = name_space;
        ceentphysicalsecondserialnum.value_namespace_prefix = name_space_prefix;
    }
}

void ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entPhysicalDescr")
    {
        entphysicaldescr.yfilter = yfilter;
    }
    if(value_path == "entPhysicalVendorType")
    {
        entphysicalvendortype.yfilter = yfilter;
    }
    if(value_path == "entPhysicalContainedIn")
    {
        entphysicalcontainedin.yfilter = yfilter;
    }
    if(value_path == "entPhysicalClass")
    {
        entphysicalclass.yfilter = yfilter;
    }
    if(value_path == "entPhysicalParentRelPos")
    {
        entphysicalparentrelpos.yfilter = yfilter;
    }
    if(value_path == "entPhysicalName")
    {
        entphysicalname.yfilter = yfilter;
    }
    if(value_path == "entPhysicalHardwareRev")
    {
        entphysicalhardwarerev.yfilter = yfilter;
    }
    if(value_path == "entPhysicalFirmwareRev")
    {
        entphysicalfirmwarerev.yfilter = yfilter;
    }
    if(value_path == "entPhysicalSoftwareRev")
    {
        entphysicalsoftwarerev.yfilter = yfilter;
    }
    if(value_path == "entPhysicalSerialNum")
    {
        entphysicalserialnum.yfilter = yfilter;
    }
    if(value_path == "entPhysicalMfgName")
    {
        entphysicalmfgname.yfilter = yfilter;
    }
    if(value_path == "entPhysicalModelName")
    {
        entphysicalmodelname.yfilter = yfilter;
    }
    if(value_path == "entPhysicalAlias")
    {
        entphysicalalias.yfilter = yfilter;
    }
    if(value_path == "entPhysicalAssetID")
    {
        entphysicalassetid.yfilter = yfilter;
    }
    if(value_path == "entPhysicalIsFRU")
    {
        entphysicalisfru.yfilter = yfilter;
    }
    if(value_path == "entPhysicalMfgDate")
    {
        entphysicalmfgdate.yfilter = yfilter;
    }
    if(value_path == "entPhysicalUris")
    {
        entphysicaluris.yfilter = yfilter;
    }
    if(value_path == "ceEntPhysicalSecondSerialNum")
    {
        ceentphysicalsecondserialnum.yfilter = yfilter;
    }
}

bool ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entPhysicalDescr" || name == "entPhysicalVendorType" || name == "entPhysicalContainedIn" || name == "entPhysicalClass" || name == "entPhysicalParentRelPos" || name == "entPhysicalName" || name == "entPhysicalHardwareRev" || name == "entPhysicalFirmwareRev" || name == "entPhysicalSoftwareRev" || name == "entPhysicalSerialNum" || name == "entPhysicalMfgName" || name == "entPhysicalModelName" || name == "entPhysicalAlias" || name == "entPhysicalAssetID" || name == "entPhysicalIsFRU" || name == "entPhysicalMfgDate" || name == "entPhysicalUris" || name == "ceEntPhysicalSecondSerialNum")
        return true;
    return false;
}

ENTITYMIB::EntLogicalTable::EntLogicalTable()
    :
    entlogicalentry(this, {"entlogicalindex"})
{

    yang_name = "entLogicalTable"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYMIB::EntLogicalTable::~EntLogicalTable()
{
}

bool ENTITYMIB::EntLogicalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entlogicalentry.len(); index++)
    {
        if(entlogicalentry[index]->has_data())
            return true;
    }
    return false;
}

bool ENTITYMIB::EntLogicalTable::has_operation() const
{
    for (std::size_t index=0; index<entlogicalentry.len(); index++)
    {
        if(entlogicalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ENTITYMIB::EntLogicalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::EntLogicalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entLogicalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::EntLogicalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ENTITYMIB::EntLogicalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entLogicalEntry")
    {
        auto ent_ = std::make_shared<ENTITYMIB::EntLogicalTable::EntLogicalEntry>();
        ent_->parent = this;
        entlogicalentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ENTITYMIB::EntLogicalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entlogicalentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ENTITYMIB::EntLogicalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYMIB::EntLogicalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ENTITYMIB::EntLogicalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entLogicalEntry")
        return true;
    return false;
}

ENTITYMIB::EntLogicalTable::EntLogicalEntry::EntLogicalEntry()
    :
    entlogicalindex{YType::int32, "entLogicalIndex"},
    entlogicaldescr{YType::str, "entLogicalDescr"},
    entlogicaltype{YType::str, "entLogicalType"},
    entlogicalcommunity{YType::str, "entLogicalCommunity"},
    entlogicaltaddress{YType::str, "entLogicalTAddress"},
    entlogicaltdomain{YType::str, "entLogicalTDomain"},
    entlogicalcontextengineid{YType::str, "entLogicalContextEngineID"},
    entlogicalcontextname{YType::str, "entLogicalContextName"}
{

    yang_name = "entLogicalEntry"; yang_parent_name = "entLogicalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYMIB::EntLogicalTable::EntLogicalEntry::~EntLogicalEntry()
{
}

bool ENTITYMIB::EntLogicalTable::EntLogicalEntry::has_data() const
{
    if (is_presence_container) return true;
    return entlogicalindex.is_set
	|| entlogicaldescr.is_set
	|| entlogicaltype.is_set
	|| entlogicalcommunity.is_set
	|| entlogicaltaddress.is_set
	|| entlogicaltdomain.is_set
	|| entlogicalcontextengineid.is_set
	|| entlogicalcontextname.is_set;
}

bool ENTITYMIB::EntLogicalTable::EntLogicalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entlogicalindex.yfilter)
	|| ydk::is_set(entlogicaldescr.yfilter)
	|| ydk::is_set(entlogicaltype.yfilter)
	|| ydk::is_set(entlogicalcommunity.yfilter)
	|| ydk::is_set(entlogicaltaddress.yfilter)
	|| ydk::is_set(entlogicaltdomain.yfilter)
	|| ydk::is_set(entlogicalcontextengineid.yfilter)
	|| ydk::is_set(entlogicalcontextname.yfilter);
}

std::string ENTITYMIB::EntLogicalTable::EntLogicalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/entLogicalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::EntLogicalTable::EntLogicalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entLogicalEntry";
    ADD_KEY_TOKEN(entlogicalindex, "entLogicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::EntLogicalTable::EntLogicalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entlogicalindex.is_set || is_set(entlogicalindex.yfilter)) leaf_name_data.push_back(entlogicalindex.get_name_leafdata());
    if (entlogicaldescr.is_set || is_set(entlogicaldescr.yfilter)) leaf_name_data.push_back(entlogicaldescr.get_name_leafdata());
    if (entlogicaltype.is_set || is_set(entlogicaltype.yfilter)) leaf_name_data.push_back(entlogicaltype.get_name_leafdata());
    if (entlogicalcommunity.is_set || is_set(entlogicalcommunity.yfilter)) leaf_name_data.push_back(entlogicalcommunity.get_name_leafdata());
    if (entlogicaltaddress.is_set || is_set(entlogicaltaddress.yfilter)) leaf_name_data.push_back(entlogicaltaddress.get_name_leafdata());
    if (entlogicaltdomain.is_set || is_set(entlogicaltdomain.yfilter)) leaf_name_data.push_back(entlogicaltdomain.get_name_leafdata());
    if (entlogicalcontextengineid.is_set || is_set(entlogicalcontextengineid.yfilter)) leaf_name_data.push_back(entlogicalcontextengineid.get_name_leafdata());
    if (entlogicalcontextname.is_set || is_set(entlogicalcontextname.yfilter)) leaf_name_data.push_back(entlogicalcontextname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ENTITYMIB::EntLogicalTable::EntLogicalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ENTITYMIB::EntLogicalTable::EntLogicalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ENTITYMIB::EntLogicalTable::EntLogicalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entLogicalIndex")
    {
        entlogicalindex = value;
        entlogicalindex.value_namespace = name_space;
        entlogicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entLogicalDescr")
    {
        entlogicaldescr = value;
        entlogicaldescr.value_namespace = name_space;
        entlogicaldescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entLogicalType")
    {
        entlogicaltype = value;
        entlogicaltype.value_namespace = name_space;
        entlogicaltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entLogicalCommunity")
    {
        entlogicalcommunity = value;
        entlogicalcommunity.value_namespace = name_space;
        entlogicalcommunity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entLogicalTAddress")
    {
        entlogicaltaddress = value;
        entlogicaltaddress.value_namespace = name_space;
        entlogicaltaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entLogicalTDomain")
    {
        entlogicaltdomain = value;
        entlogicaltdomain.value_namespace = name_space;
        entlogicaltdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entLogicalContextEngineID")
    {
        entlogicalcontextengineid = value;
        entlogicalcontextengineid.value_namespace = name_space;
        entlogicalcontextengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entLogicalContextName")
    {
        entlogicalcontextname = value;
        entlogicalcontextname.value_namespace = name_space;
        entlogicalcontextname.value_namespace_prefix = name_space_prefix;
    }
}

void ENTITYMIB::EntLogicalTable::EntLogicalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entLogicalIndex")
    {
        entlogicalindex.yfilter = yfilter;
    }
    if(value_path == "entLogicalDescr")
    {
        entlogicaldescr.yfilter = yfilter;
    }
    if(value_path == "entLogicalType")
    {
        entlogicaltype.yfilter = yfilter;
    }
    if(value_path == "entLogicalCommunity")
    {
        entlogicalcommunity.yfilter = yfilter;
    }
    if(value_path == "entLogicalTAddress")
    {
        entlogicaltaddress.yfilter = yfilter;
    }
    if(value_path == "entLogicalTDomain")
    {
        entlogicaltdomain.yfilter = yfilter;
    }
    if(value_path == "entLogicalContextEngineID")
    {
        entlogicalcontextengineid.yfilter = yfilter;
    }
    if(value_path == "entLogicalContextName")
    {
        entlogicalcontextname.yfilter = yfilter;
    }
}

bool ENTITYMIB::EntLogicalTable::EntLogicalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entLogicalIndex" || name == "entLogicalDescr" || name == "entLogicalType" || name == "entLogicalCommunity" || name == "entLogicalTAddress" || name == "entLogicalTDomain" || name == "entLogicalContextEngineID" || name == "entLogicalContextName")
        return true;
    return false;
}

ENTITYMIB::EntLPMappingTable::EntLPMappingTable()
    :
    entlpmappingentry(this, {"entlogicalindex", "entlpphysicalindex"})
{

    yang_name = "entLPMappingTable"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYMIB::EntLPMappingTable::~EntLPMappingTable()
{
}

bool ENTITYMIB::EntLPMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entlpmappingentry.len(); index++)
    {
        if(entlpmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool ENTITYMIB::EntLPMappingTable::has_operation() const
{
    for (std::size_t index=0; index<entlpmappingentry.len(); index++)
    {
        if(entlpmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ENTITYMIB::EntLPMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::EntLPMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entLPMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::EntLPMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ENTITYMIB::EntLPMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entLPMappingEntry")
    {
        auto ent_ = std::make_shared<ENTITYMIB::EntLPMappingTable::EntLPMappingEntry>();
        ent_->parent = this;
        entlpmappingentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ENTITYMIB::EntLPMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entlpmappingentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ENTITYMIB::EntLPMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYMIB::EntLPMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ENTITYMIB::EntLPMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entLPMappingEntry")
        return true;
    return false;
}

ENTITYMIB::EntLPMappingTable::EntLPMappingEntry::EntLPMappingEntry()
    :
    entlogicalindex{YType::str, "entLogicalIndex"},
    entlpphysicalindex{YType::int32, "entLPPhysicalIndex"}
{

    yang_name = "entLPMappingEntry"; yang_parent_name = "entLPMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYMIB::EntLPMappingTable::EntLPMappingEntry::~EntLPMappingEntry()
{
}

bool ENTITYMIB::EntLPMappingTable::EntLPMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return entlogicalindex.is_set
	|| entlpphysicalindex.is_set;
}

bool ENTITYMIB::EntLPMappingTable::EntLPMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entlogicalindex.yfilter)
	|| ydk::is_set(entlpphysicalindex.yfilter);
}

std::string ENTITYMIB::EntLPMappingTable::EntLPMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/entLPMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::EntLPMappingTable::EntLPMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entLPMappingEntry";
    ADD_KEY_TOKEN(entlogicalindex, "entLogicalIndex");
    ADD_KEY_TOKEN(entlpphysicalindex, "entLPPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::EntLPMappingTable::EntLPMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entlogicalindex.is_set || is_set(entlogicalindex.yfilter)) leaf_name_data.push_back(entlogicalindex.get_name_leafdata());
    if (entlpphysicalindex.is_set || is_set(entlpphysicalindex.yfilter)) leaf_name_data.push_back(entlpphysicalindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ENTITYMIB::EntLPMappingTable::EntLPMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ENTITYMIB::EntLPMappingTable::EntLPMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ENTITYMIB::EntLPMappingTable::EntLPMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entLogicalIndex")
    {
        entlogicalindex = value;
        entlogicalindex.value_namespace = name_space;
        entlogicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entLPPhysicalIndex")
    {
        entlpphysicalindex = value;
        entlpphysicalindex.value_namespace = name_space;
        entlpphysicalindex.value_namespace_prefix = name_space_prefix;
    }
}

void ENTITYMIB::EntLPMappingTable::EntLPMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entLogicalIndex")
    {
        entlogicalindex.yfilter = yfilter;
    }
    if(value_path == "entLPPhysicalIndex")
    {
        entlpphysicalindex.yfilter = yfilter;
    }
}

bool ENTITYMIB::EntLPMappingTable::EntLPMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entLogicalIndex" || name == "entLPPhysicalIndex")
        return true;
    return false;
}

ENTITYMIB::EntAliasMappingTable::EntAliasMappingTable()
    :
    entaliasmappingentry(this, {"entphysicalindex", "entaliaslogicalindexorzero"})
{

    yang_name = "entAliasMappingTable"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYMIB::EntAliasMappingTable::~EntAliasMappingTable()
{
}

bool ENTITYMIB::EntAliasMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entaliasmappingentry.len(); index++)
    {
        if(entaliasmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool ENTITYMIB::EntAliasMappingTable::has_operation() const
{
    for (std::size_t index=0; index<entaliasmappingentry.len(); index++)
    {
        if(entaliasmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ENTITYMIB::EntAliasMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::EntAliasMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entAliasMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::EntAliasMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ENTITYMIB::EntAliasMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entAliasMappingEntry")
    {
        auto ent_ = std::make_shared<ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry>();
        ent_->parent = this;
        entaliasmappingentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ENTITYMIB::EntAliasMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entaliasmappingentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ENTITYMIB::EntAliasMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYMIB::EntAliasMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ENTITYMIB::EntAliasMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entAliasMappingEntry")
        return true;
    return false;
}

ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry::EntAliasMappingEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entaliaslogicalindexorzero{YType::int32, "entAliasLogicalIndexOrZero"},
    entaliasmappingidentifier{YType::str, "entAliasMappingIdentifier"}
{

    yang_name = "entAliasMappingEntry"; yang_parent_name = "entAliasMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry::~EntAliasMappingEntry()
{
}

bool ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| entaliaslogicalindexorzero.is_set
	|| entaliasmappingidentifier.is_set;
}

bool ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entaliaslogicalindexorzero.yfilter)
	|| ydk::is_set(entaliasmappingidentifier.yfilter);
}

std::string ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/entAliasMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entAliasMappingEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(entaliaslogicalindexorzero, "entAliasLogicalIndexOrZero");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entaliaslogicalindexorzero.is_set || is_set(entaliaslogicalindexorzero.yfilter)) leaf_name_data.push_back(entaliaslogicalindexorzero.get_name_leafdata());
    if (entaliasmappingidentifier.is_set || is_set(entaliasmappingidentifier.yfilter)) leaf_name_data.push_back(entaliasmappingidentifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entAliasLogicalIndexOrZero")
    {
        entaliaslogicalindexorzero = value;
        entaliaslogicalindexorzero.value_namespace = name_space;
        entaliaslogicalindexorzero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entAliasMappingIdentifier")
    {
        entaliasmappingidentifier = value;
        entaliasmappingidentifier.value_namespace = name_space;
        entaliasmappingidentifier.value_namespace_prefix = name_space_prefix;
    }
}

void ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entAliasLogicalIndexOrZero")
    {
        entaliaslogicalindexorzero.yfilter = yfilter;
    }
    if(value_path == "entAliasMappingIdentifier")
    {
        entaliasmappingidentifier.yfilter = yfilter;
    }
}

bool ENTITYMIB::EntAliasMappingTable::EntAliasMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entAliasLogicalIndexOrZero" || name == "entAliasMappingIdentifier")
        return true;
    return false;
}

ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsTable()
    :
    entphysicalcontainsentry(this, {"entphysicalindex", "entphysicalchildindex"})
{

    yang_name = "entPhysicalContainsTable"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYMIB::EntPhysicalContainsTable::~EntPhysicalContainsTable()
{
}

bool ENTITYMIB::EntPhysicalContainsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entphysicalcontainsentry.len(); index++)
    {
        if(entphysicalcontainsentry[index]->has_data())
            return true;
    }
    return false;
}

bool ENTITYMIB::EntPhysicalContainsTable::has_operation() const
{
    for (std::size_t index=0; index<entphysicalcontainsentry.len(); index++)
    {
        if(entphysicalcontainsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ENTITYMIB::EntPhysicalContainsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::EntPhysicalContainsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhysicalContainsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::EntPhysicalContainsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ENTITYMIB::EntPhysicalContainsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entPhysicalContainsEntry")
    {
        auto ent_ = std::make_shared<ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry>();
        ent_->parent = this;
        entphysicalcontainsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ENTITYMIB::EntPhysicalContainsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entphysicalcontainsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void ENTITYMIB::EntPhysicalContainsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYMIB::EntPhysicalContainsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ENTITYMIB::EntPhysicalContainsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalContainsEntry")
        return true;
    return false;
}

ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry::EntPhysicalContainsEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entphysicalchildindex{YType::int32, "entPhysicalChildIndex"}
{

    yang_name = "entPhysicalContainsEntry"; yang_parent_name = "entPhysicalContainsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry::~EntPhysicalContainsEntry()
{
}

bool ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| entphysicalchildindex.is_set;
}

bool ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entphysicalchildindex.yfilter);
}

std::string ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/entPhysicalContainsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhysicalContainsEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(entphysicalchildindex, "entPhysicalChildIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entphysicalchildindex.is_set || is_set(entphysicalchildindex.yfilter)) leaf_name_data.push_back(entphysicalchildindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPhysicalChildIndex")
    {
        entphysicalchildindex = value;
        entphysicalchildindex.value_namespace = name_space;
        entphysicalchildindex.value_namespace_prefix = name_space_prefix;
    }
}

void ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entPhysicalChildIndex")
    {
        entphysicalchildindex.yfilter = yfilter;
    }
}

bool ENTITYMIB::EntPhysicalContainsTable::EntPhysicalContainsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entPhysicalChildIndex")
        return true;
    return false;
}

const Enum::YLeaf PhysicalClass::other {1, "other"};
const Enum::YLeaf PhysicalClass::unknown {2, "unknown"};
const Enum::YLeaf PhysicalClass::chassis {3, "chassis"};
const Enum::YLeaf PhysicalClass::backplane {4, "backplane"};
const Enum::YLeaf PhysicalClass::container {5, "container"};
const Enum::YLeaf PhysicalClass::powerSupply {6, "powerSupply"};
const Enum::YLeaf PhysicalClass::fan {7, "fan"};
const Enum::YLeaf PhysicalClass::sensor {8, "sensor"};
const Enum::YLeaf PhysicalClass::module {9, "module"};
const Enum::YLeaf PhysicalClass::port {10, "port"};
const Enum::YLeaf PhysicalClass::stack {11, "stack"};
const Enum::YLeaf PhysicalClass::cpu {12, "cpu"};


}
}

