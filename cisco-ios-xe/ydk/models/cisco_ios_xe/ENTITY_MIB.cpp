
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
    entitygeneral(std::make_shared<ENTITYMIB::Entitygeneral>())
	,entphysicaltable(std::make_shared<ENTITYMIB::Entphysicaltable>())
	,entlogicaltable(std::make_shared<ENTITYMIB::Entlogicaltable>())
	,entlpmappingtable(std::make_shared<ENTITYMIB::Entlpmappingtable>())
	,entaliasmappingtable(std::make_shared<ENTITYMIB::Entaliasmappingtable>())
	,entphysicalcontainstable(std::make_shared<ENTITYMIB::Entphysicalcontainstable>())
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

std::shared_ptr<Entity> ENTITYMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entityGeneral")
    {
        if(entitygeneral == nullptr)
        {
            entitygeneral = std::make_shared<ENTITYMIB::Entitygeneral>();
        }
        return entitygeneral;
    }

    if(child_yang_name == "entPhysicalTable")
    {
        if(entphysicaltable == nullptr)
        {
            entphysicaltable = std::make_shared<ENTITYMIB::Entphysicaltable>();
        }
        return entphysicaltable;
    }

    if(child_yang_name == "entLogicalTable")
    {
        if(entlogicaltable == nullptr)
        {
            entlogicaltable = std::make_shared<ENTITYMIB::Entlogicaltable>();
        }
        return entlogicaltable;
    }

    if(child_yang_name == "entLPMappingTable")
    {
        if(entlpmappingtable == nullptr)
        {
            entlpmappingtable = std::make_shared<ENTITYMIB::Entlpmappingtable>();
        }
        return entlpmappingtable;
    }

    if(child_yang_name == "entAliasMappingTable")
    {
        if(entaliasmappingtable == nullptr)
        {
            entaliasmappingtable = std::make_shared<ENTITYMIB::Entaliasmappingtable>();
        }
        return entaliasmappingtable;
    }

    if(child_yang_name == "entPhysicalContainsTable")
    {
        if(entphysicalcontainstable == nullptr)
        {
            entphysicalcontainstable = std::make_shared<ENTITYMIB::Entphysicalcontainstable>();
        }
        return entphysicalcontainstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(entitygeneral != nullptr)
    {
        children["entityGeneral"] = entitygeneral;
    }

    if(entphysicaltable != nullptr)
    {
        children["entPhysicalTable"] = entphysicaltable;
    }

    if(entlogicaltable != nullptr)
    {
        children["entLogicalTable"] = entlogicaltable;
    }

    if(entlpmappingtable != nullptr)
    {
        children["entLPMappingTable"] = entlpmappingtable;
    }

    if(entaliasmappingtable != nullptr)
    {
        children["entAliasMappingTable"] = entaliasmappingtable;
    }

    if(entphysicalcontainstable != nullptr)
    {
        children["entPhysicalContainsTable"] = entphysicalcontainstable;
    }

    return children;
}

void ENTITYMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ENTITYMIB::clone_ptr() const
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

ENTITYMIB::Entitygeneral::Entitygeneral()
    :
    entlastchangetime{YType::uint32, "entLastChangeTime"}
{

    yang_name = "entityGeneral"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ENTITYMIB::Entitygeneral::~Entitygeneral()
{
}

bool ENTITYMIB::Entitygeneral::has_data() const
{
    return entlastchangetime.is_set;
}

bool ENTITYMIB::Entitygeneral::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entlastchangetime.yfilter);
}

std::string ENTITYMIB::Entitygeneral::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::Entitygeneral::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entityGeneral";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::Entitygeneral::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entlastchangetime.is_set || is_set(entlastchangetime.yfilter)) leaf_name_data.push_back(entlastchangetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYMIB::Entitygeneral::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYMIB::Entitygeneral::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ENTITYMIB::Entitygeneral::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entLastChangeTime")
    {
        entlastchangetime = value;
        entlastchangetime.value_namespace = name_space;
        entlastchangetime.value_namespace_prefix = name_space_prefix;
    }
}

void ENTITYMIB::Entitygeneral::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entLastChangeTime")
    {
        entlastchangetime.yfilter = yfilter;
    }
}

bool ENTITYMIB::Entitygeneral::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entLastChangeTime")
        return true;
    return false;
}

ENTITYMIB::Entphysicaltable::Entphysicaltable()
{

    yang_name = "entPhysicalTable"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ENTITYMIB::Entphysicaltable::~Entphysicaltable()
{
}

bool ENTITYMIB::Entphysicaltable::has_data() const
{
    for (std::size_t index=0; index<entphysicalentry.size(); index++)
    {
        if(entphysicalentry[index]->has_data())
            return true;
    }
    return false;
}

bool ENTITYMIB::Entphysicaltable::has_operation() const
{
    for (std::size_t index=0; index<entphysicalentry.size(); index++)
    {
        if(entphysicalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ENTITYMIB::Entphysicaltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::Entphysicaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhysicalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::Entphysicaltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYMIB::Entphysicaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entPhysicalEntry")
    {
        for(auto const & c : entphysicalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ENTITYMIB::Entphysicaltable::Entphysicalentry>();
        c->parent = this;
        entphysicalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYMIB::Entphysicaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entphysicalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ENTITYMIB::Entphysicaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYMIB::Entphysicaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ENTITYMIB::Entphysicaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalEntry")
        return true;
    return false;
}

ENTITYMIB::Entphysicaltable::Entphysicalentry::Entphysicalentry()
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

ENTITYMIB::Entphysicaltable::Entphysicalentry::~Entphysicalentry()
{
}

bool ENTITYMIB::Entphysicaltable::Entphysicalentry::has_data() const
{
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

bool ENTITYMIB::Entphysicaltable::Entphysicalentry::has_operation() const
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

std::string ENTITYMIB::Entphysicaltable::Entphysicalentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/entPhysicalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::Entphysicaltable::Entphysicalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhysicalEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::Entphysicaltable::Entphysicalentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> ENTITYMIB::Entphysicaltable::Entphysicalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYMIB::Entphysicaltable::Entphysicalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ENTITYMIB::Entphysicaltable::Entphysicalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ceEntPhysicalSecondSerialNum")
    {
        ceentphysicalsecondserialnum = value;
        ceentphysicalsecondserialnum.value_namespace = name_space;
        ceentphysicalsecondserialnum.value_namespace_prefix = name_space_prefix;
    }
}

void ENTITYMIB::Entphysicaltable::Entphysicalentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ENTITYMIB::Entphysicaltable::Entphysicalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entPhysicalDescr" || name == "entPhysicalVendorType" || name == "entPhysicalContainedIn" || name == "entPhysicalClass" || name == "entPhysicalParentRelPos" || name == "entPhysicalName" || name == "entPhysicalHardwareRev" || name == "entPhysicalFirmwareRev" || name == "entPhysicalSoftwareRev" || name == "entPhysicalSerialNum" || name == "entPhysicalMfgName" || name == "entPhysicalModelName" || name == "entPhysicalAlias" || name == "entPhysicalAssetID" || name == "entPhysicalIsFRU" || name == "entPhysicalMfgDate" || name == "entPhysicalUris" || name == "ceEntPhysicalSecondSerialNum")
        return true;
    return false;
}

ENTITYMIB::Entlogicaltable::Entlogicaltable()
{

    yang_name = "entLogicalTable"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ENTITYMIB::Entlogicaltable::~Entlogicaltable()
{
}

bool ENTITYMIB::Entlogicaltable::has_data() const
{
    for (std::size_t index=0; index<entlogicalentry.size(); index++)
    {
        if(entlogicalentry[index]->has_data())
            return true;
    }
    return false;
}

bool ENTITYMIB::Entlogicaltable::has_operation() const
{
    for (std::size_t index=0; index<entlogicalentry.size(); index++)
    {
        if(entlogicalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ENTITYMIB::Entlogicaltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::Entlogicaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entLogicalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::Entlogicaltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYMIB::Entlogicaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entLogicalEntry")
    {
        for(auto const & c : entlogicalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ENTITYMIB::Entlogicaltable::Entlogicalentry>();
        c->parent = this;
        entlogicalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYMIB::Entlogicaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entlogicalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ENTITYMIB::Entlogicaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYMIB::Entlogicaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ENTITYMIB::Entlogicaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entLogicalEntry")
        return true;
    return false;
}

ENTITYMIB::Entlogicaltable::Entlogicalentry::Entlogicalentry()
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

ENTITYMIB::Entlogicaltable::Entlogicalentry::~Entlogicalentry()
{
}

bool ENTITYMIB::Entlogicaltable::Entlogicalentry::has_data() const
{
    return entlogicalindex.is_set
	|| entlogicaldescr.is_set
	|| entlogicaltype.is_set
	|| entlogicalcommunity.is_set
	|| entlogicaltaddress.is_set
	|| entlogicaltdomain.is_set
	|| entlogicalcontextengineid.is_set
	|| entlogicalcontextname.is_set;
}

bool ENTITYMIB::Entlogicaltable::Entlogicalentry::has_operation() const
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

std::string ENTITYMIB::Entlogicaltable::Entlogicalentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/entLogicalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::Entlogicaltable::Entlogicalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entLogicalEntry" <<"[entLogicalIndex='" <<entlogicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::Entlogicaltable::Entlogicalentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> ENTITYMIB::Entlogicaltable::Entlogicalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYMIB::Entlogicaltable::Entlogicalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ENTITYMIB::Entlogicaltable::Entlogicalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ENTITYMIB::Entlogicaltable::Entlogicalentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ENTITYMIB::Entlogicaltable::Entlogicalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entLogicalIndex" || name == "entLogicalDescr" || name == "entLogicalType" || name == "entLogicalCommunity" || name == "entLogicalTAddress" || name == "entLogicalTDomain" || name == "entLogicalContextEngineID" || name == "entLogicalContextName")
        return true;
    return false;
}

ENTITYMIB::Entlpmappingtable::Entlpmappingtable()
{

    yang_name = "entLPMappingTable"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ENTITYMIB::Entlpmappingtable::~Entlpmappingtable()
{
}

bool ENTITYMIB::Entlpmappingtable::has_data() const
{
    for (std::size_t index=0; index<entlpmappingentry.size(); index++)
    {
        if(entlpmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool ENTITYMIB::Entlpmappingtable::has_operation() const
{
    for (std::size_t index=0; index<entlpmappingentry.size(); index++)
    {
        if(entlpmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ENTITYMIB::Entlpmappingtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::Entlpmappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entLPMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::Entlpmappingtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYMIB::Entlpmappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entLPMappingEntry")
    {
        for(auto const & c : entlpmappingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ENTITYMIB::Entlpmappingtable::Entlpmappingentry>();
        c->parent = this;
        entlpmappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYMIB::Entlpmappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entlpmappingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ENTITYMIB::Entlpmappingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYMIB::Entlpmappingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ENTITYMIB::Entlpmappingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entLPMappingEntry")
        return true;
    return false;
}

ENTITYMIB::Entlpmappingtable::Entlpmappingentry::Entlpmappingentry()
    :
    entlogicalindex{YType::str, "entLogicalIndex"},
    entlpphysicalindex{YType::int32, "entLPPhysicalIndex"}
{

    yang_name = "entLPMappingEntry"; yang_parent_name = "entLPMappingTable"; is_top_level_class = false; has_list_ancestor = false;
}

ENTITYMIB::Entlpmappingtable::Entlpmappingentry::~Entlpmappingentry()
{
}

bool ENTITYMIB::Entlpmappingtable::Entlpmappingentry::has_data() const
{
    return entlogicalindex.is_set
	|| entlpphysicalindex.is_set;
}

bool ENTITYMIB::Entlpmappingtable::Entlpmappingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entlogicalindex.yfilter)
	|| ydk::is_set(entlpphysicalindex.yfilter);
}

std::string ENTITYMIB::Entlpmappingtable::Entlpmappingentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/entLPMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::Entlpmappingtable::Entlpmappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entLPMappingEntry" <<"[entLogicalIndex='" <<entlogicalindex <<"']" <<"[entLPPhysicalIndex='" <<entlpphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::Entlpmappingtable::Entlpmappingentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entlogicalindex.is_set || is_set(entlogicalindex.yfilter)) leaf_name_data.push_back(entlogicalindex.get_name_leafdata());
    if (entlpphysicalindex.is_set || is_set(entlpphysicalindex.yfilter)) leaf_name_data.push_back(entlpphysicalindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYMIB::Entlpmappingtable::Entlpmappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYMIB::Entlpmappingtable::Entlpmappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ENTITYMIB::Entlpmappingtable::Entlpmappingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ENTITYMIB::Entlpmappingtable::Entlpmappingentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ENTITYMIB::Entlpmappingtable::Entlpmappingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entLogicalIndex" || name == "entLPPhysicalIndex")
        return true;
    return false;
}

ENTITYMIB::Entaliasmappingtable::Entaliasmappingtable()
{

    yang_name = "entAliasMappingTable"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ENTITYMIB::Entaliasmappingtable::~Entaliasmappingtable()
{
}

bool ENTITYMIB::Entaliasmappingtable::has_data() const
{
    for (std::size_t index=0; index<entaliasmappingentry.size(); index++)
    {
        if(entaliasmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool ENTITYMIB::Entaliasmappingtable::has_operation() const
{
    for (std::size_t index=0; index<entaliasmappingentry.size(); index++)
    {
        if(entaliasmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ENTITYMIB::Entaliasmappingtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::Entaliasmappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entAliasMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::Entaliasmappingtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYMIB::Entaliasmappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entAliasMappingEntry")
    {
        for(auto const & c : entaliasmappingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry>();
        c->parent = this;
        entaliasmappingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYMIB::Entaliasmappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entaliasmappingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ENTITYMIB::Entaliasmappingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYMIB::Entaliasmappingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ENTITYMIB::Entaliasmappingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entAliasMappingEntry")
        return true;
    return false;
}

ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry::Entaliasmappingentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entaliaslogicalindexorzero{YType::int32, "entAliasLogicalIndexOrZero"},
    entaliasmappingidentifier{YType::str, "entAliasMappingIdentifier"}
{

    yang_name = "entAliasMappingEntry"; yang_parent_name = "entAliasMappingTable"; is_top_level_class = false; has_list_ancestor = false;
}

ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry::~Entaliasmappingentry()
{
}

bool ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry::has_data() const
{
    return entphysicalindex.is_set
	|| entaliaslogicalindexorzero.is_set
	|| entaliasmappingidentifier.is_set;
}

bool ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entaliaslogicalindexorzero.yfilter)
	|| ydk::is_set(entaliasmappingidentifier.yfilter);
}

std::string ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/entAliasMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entAliasMappingEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[entAliasLogicalIndexOrZero='" <<entaliaslogicalindexorzero <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entaliaslogicalindexorzero.is_set || is_set(entaliaslogicalindexorzero.yfilter)) leaf_name_data.push_back(entaliaslogicalindexorzero.get_name_leafdata());
    if (entaliasmappingidentifier.is_set || is_set(entaliasmappingidentifier.yfilter)) leaf_name_data.push_back(entaliasmappingidentifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ENTITYMIB::Entaliasmappingtable::Entaliasmappingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entAliasLogicalIndexOrZero" || name == "entAliasMappingIdentifier")
        return true;
    return false;
}

ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainstable()
{

    yang_name = "entPhysicalContainsTable"; yang_parent_name = "ENTITY-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

ENTITYMIB::Entphysicalcontainstable::~Entphysicalcontainstable()
{
}

bool ENTITYMIB::Entphysicalcontainstable::has_data() const
{
    for (std::size_t index=0; index<entphysicalcontainsentry.size(); index++)
    {
        if(entphysicalcontainsentry[index]->has_data())
            return true;
    }
    return false;
}

bool ENTITYMIB::Entphysicalcontainstable::has_operation() const
{
    for (std::size_t index=0; index<entphysicalcontainsentry.size(); index++)
    {
        if(entphysicalcontainsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string ENTITYMIB::Entphysicalcontainstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::Entphysicalcontainstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhysicalContainsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::Entphysicalcontainstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYMIB::Entphysicalcontainstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entPhysicalContainsEntry")
    {
        for(auto const & c : entphysicalcontainsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry>();
        c->parent = this;
        entphysicalcontainsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYMIB::Entphysicalcontainstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entphysicalcontainsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void ENTITYMIB::Entphysicalcontainstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ENTITYMIB::Entphysicalcontainstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ENTITYMIB::Entphysicalcontainstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalContainsEntry")
        return true;
    return false;
}

ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry::Entphysicalcontainsentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entphysicalchildindex{YType::int32, "entPhysicalChildIndex"}
{

    yang_name = "entPhysicalContainsEntry"; yang_parent_name = "entPhysicalContainsTable"; is_top_level_class = false; has_list_ancestor = false;
}

ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry::~Entphysicalcontainsentry()
{
}

bool ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry::has_data() const
{
    return entphysicalindex.is_set
	|| entphysicalchildindex.is_set;
}

bool ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entphysicalchildindex.yfilter);
}

std::string ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB/entPhysicalContainsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhysicalContainsEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[entPhysicalChildIndex='" <<entphysicalchildindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entphysicalchildindex.is_set || is_set(entphysicalchildindex.yfilter)) leaf_name_data.push_back(entphysicalchildindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ENTITYMIB::Entphysicalcontainstable::Entphysicalcontainsentry::has_leaf_or_child_of_name(const std::string & name) const
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

