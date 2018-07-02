
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_EXT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ENTITY_EXT_MIB {

CISCOENTITYEXTMIB::CISCOENTITYEXTMIB()
    :
    ceextphysicalprocessortable(std::make_shared<CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable>())
    , ceextconfigregtable(std::make_shared<CISCOENTITYEXTMIB::CeExtConfigRegTable>())
    , ceextentityledtable(std::make_shared<CISCOENTITYEXTMIB::CeExtEntityLEDTable>())
{
    ceextphysicalprocessortable->parent = this;
    ceextconfigregtable->parent = this;
    ceextentityledtable->parent = this;

    yang_name = "CISCO-ENTITY-EXT-MIB"; yang_parent_name = "CISCO-ENTITY-EXT-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOENTITYEXTMIB::~CISCOENTITYEXTMIB()
{
}

bool CISCOENTITYEXTMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ceextphysicalprocessortable !=  nullptr && ceextphysicalprocessortable->has_data())
	|| (ceextconfigregtable !=  nullptr && ceextconfigregtable->has_data())
	|| (ceextentityledtable !=  nullptr && ceextentityledtable->has_data());
}

bool CISCOENTITYEXTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ceextphysicalprocessortable !=  nullptr && ceextphysicalprocessortable->has_operation())
	|| (ceextconfigregtable !=  nullptr && ceextconfigregtable->has_operation())
	|| (ceextentityledtable !=  nullptr && ceextentityledtable->has_operation());
}

std::string CISCOENTITYEXTMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceExtPhysicalProcessorTable")
    {
        if(ceextphysicalprocessortable == nullptr)
        {
            ceextphysicalprocessortable = std::make_shared<CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable>();
        }
        return ceextphysicalprocessortable;
    }

    if(child_yang_name == "ceExtConfigRegTable")
    {
        if(ceextconfigregtable == nullptr)
        {
            ceextconfigregtable = std::make_shared<CISCOENTITYEXTMIB::CeExtConfigRegTable>();
        }
        return ceextconfigregtable;
    }

    if(child_yang_name == "ceExtEntityLEDTable")
    {
        if(ceextentityledtable == nullptr)
        {
            ceextentityledtable = std::make_shared<CISCOENTITYEXTMIB::CeExtEntityLEDTable>();
        }
        return ceextentityledtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ceextphysicalprocessortable != nullptr)
    {
        children["ceExtPhysicalProcessorTable"] = ceextphysicalprocessortable;
    }

    if(ceextconfigregtable != nullptr)
    {
        children["ceExtConfigRegTable"] = ceextconfigregtable;
    }

    if(ceextentityledtable != nullptr)
    {
        children["ceExtEntityLEDTable"] = ceextentityledtable;
    }

    return children;
}

void CISCOENTITYEXTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYEXTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::clone_ptr() const
{
    return std::make_shared<CISCOENTITYEXTMIB>();
}

std::string CISCOENTITYEXTMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOENTITYEXTMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOENTITYEXTMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOENTITYEXTMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOENTITYEXTMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceExtPhysicalProcessorTable" || name == "ceExtConfigRegTable" || name == "ceExtEntityLEDTable")
        return true;
    return false;
}

CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorTable()
    :
    ceextphysicalprocessorentry(this, {"entphysicalindex"})
{

    yang_name = "ceExtPhysicalProcessorTable"; yang_parent_name = "CISCO-ENTITY-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::~CeExtPhysicalProcessorTable()
{
}

bool CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceextphysicalprocessorentry.len(); index++)
    {
        if(ceextphysicalprocessorentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::has_operation() const
{
    for (std::size_t index=0; index<ceextphysicalprocessorentry.len(); index++)
    {
        if(ceextphysicalprocessorentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtPhysicalProcessorTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceExtPhysicalProcessorEntry")
    {
        auto c = std::make_shared<CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry>();
        c->parent = this;
        ceextphysicalprocessorentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceextphysicalprocessorentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceExtPhysicalProcessorEntry")
        return true;
    return false;
}

CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry::CeExtPhysicalProcessorEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceextprocessorram{YType::uint32, "ceExtProcessorRam"},
    ceextnvramsize{YType::uint32, "ceExtNVRAMSize"},
    ceextnvramused{YType::uint32, "ceExtNVRAMUsed"},
    ceextprocessorramoverflow{YType::uint32, "ceExtProcessorRamOverflow"},
    ceexthcprocessorram{YType::uint64, "ceExtHCProcessorRam"}
{

    yang_name = "ceExtPhysicalProcessorEntry"; yang_parent_name = "ceExtPhysicalProcessorTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry::~CeExtPhysicalProcessorEntry()
{
}

bool CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| ceextprocessorram.is_set
	|| ceextnvramsize.is_set
	|| ceextnvramused.is_set
	|| ceextprocessorramoverflow.is_set
	|| ceexthcprocessorram.is_set;
}

bool CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceextprocessorram.yfilter)
	|| ydk::is_set(ceextnvramsize.yfilter)
	|| ydk::is_set(ceextnvramused.yfilter)
	|| ydk::is_set(ceextprocessorramoverflow.yfilter)
	|| ydk::is_set(ceexthcprocessorram.yfilter);
}

std::string CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/ceExtPhysicalProcessorTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtPhysicalProcessorEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceextprocessorram.is_set || is_set(ceextprocessorram.yfilter)) leaf_name_data.push_back(ceextprocessorram.get_name_leafdata());
    if (ceextnvramsize.is_set || is_set(ceextnvramsize.yfilter)) leaf_name_data.push_back(ceextnvramsize.get_name_leafdata());
    if (ceextnvramused.is_set || is_set(ceextnvramused.yfilter)) leaf_name_data.push_back(ceextnvramused.get_name_leafdata());
    if (ceextprocessorramoverflow.is_set || is_set(ceextprocessorramoverflow.yfilter)) leaf_name_data.push_back(ceextprocessorramoverflow.get_name_leafdata());
    if (ceexthcprocessorram.is_set || is_set(ceexthcprocessorram.yfilter)) leaf_name_data.push_back(ceexthcprocessorram.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtProcessorRam")
    {
        ceextprocessorram = value;
        ceextprocessorram.value_namespace = name_space;
        ceextprocessorram.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtNVRAMSize")
    {
        ceextnvramsize = value;
        ceextnvramsize.value_namespace = name_space;
        ceextnvramsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtNVRAMUsed")
    {
        ceextnvramused = value;
        ceextnvramused.value_namespace = name_space;
        ceextnvramused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtProcessorRamOverflow")
    {
        ceextprocessorramoverflow = value;
        ceextprocessorramoverflow.value_namespace = name_space;
        ceextprocessorramoverflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtHCProcessorRam")
    {
        ceexthcprocessorram = value;
        ceexthcprocessorram.value_namespace = name_space;
        ceexthcprocessorram.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ceExtProcessorRam")
    {
        ceextprocessorram.yfilter = yfilter;
    }
    if(value_path == "ceExtNVRAMSize")
    {
        ceextnvramsize.yfilter = yfilter;
    }
    if(value_path == "ceExtNVRAMUsed")
    {
        ceextnvramused.yfilter = yfilter;
    }
    if(value_path == "ceExtProcessorRamOverflow")
    {
        ceextprocessorramoverflow.yfilter = yfilter;
    }
    if(value_path == "ceExtHCProcessorRam")
    {
        ceexthcprocessorram.yfilter = yfilter;
    }
}

bool CISCOENTITYEXTMIB::CeExtPhysicalProcessorTable::CeExtPhysicalProcessorEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceExtProcessorRam" || name == "ceExtNVRAMSize" || name == "ceExtNVRAMUsed" || name == "ceExtProcessorRamOverflow" || name == "ceExtHCProcessorRam")
        return true;
    return false;
}

CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegTable()
    :
    ceextconfigregentry(this, {"entphysicalindex"})
{

    yang_name = "ceExtConfigRegTable"; yang_parent_name = "CISCO-ENTITY-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYEXTMIB::CeExtConfigRegTable::~CeExtConfigRegTable()
{
}

bool CISCOENTITYEXTMIB::CeExtConfigRegTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceextconfigregentry.len(); index++)
    {
        if(ceextconfigregentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYEXTMIB::CeExtConfigRegTable::has_operation() const
{
    for (std::size_t index=0; index<ceextconfigregentry.len(); index++)
    {
        if(ceextconfigregentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYEXTMIB::CeExtConfigRegTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYEXTMIB::CeExtConfigRegTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtConfigRegTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::CeExtConfigRegTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::CeExtConfigRegTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceExtConfigRegEntry")
    {
        auto c = std::make_shared<CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry>();
        c->parent = this;
        ceextconfigregentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::CeExtConfigRegTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceextconfigregentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYEXTMIB::CeExtConfigRegTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYEXTMIB::CeExtConfigRegTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYEXTMIB::CeExtConfigRegTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceExtConfigRegEntry")
        return true;
    return false;
}

CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry::CeExtConfigRegEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceextconfigregister{YType::str, "ceExtConfigRegister"},
    ceextconfigregnext{YType::str, "ceExtConfigRegNext"},
    ceextsysbootimagelist{YType::str, "ceExtSysBootImageList"},
    ceextkickstartimagelist{YType::str, "ceExtKickstartImageList"}
{

    yang_name = "ceExtConfigRegEntry"; yang_parent_name = "ceExtConfigRegTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry::~CeExtConfigRegEntry()
{
}

bool CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| ceextconfigregister.is_set
	|| ceextconfigregnext.is_set
	|| ceextsysbootimagelist.is_set
	|| ceextkickstartimagelist.is_set;
}

bool CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceextconfigregister.yfilter)
	|| ydk::is_set(ceextconfigregnext.yfilter)
	|| ydk::is_set(ceextsysbootimagelist.yfilter)
	|| ydk::is_set(ceextkickstartimagelist.yfilter);
}

std::string CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/ceExtConfigRegTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtConfigRegEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceextconfigregister.is_set || is_set(ceextconfigregister.yfilter)) leaf_name_data.push_back(ceextconfigregister.get_name_leafdata());
    if (ceextconfigregnext.is_set || is_set(ceextconfigregnext.yfilter)) leaf_name_data.push_back(ceextconfigregnext.get_name_leafdata());
    if (ceextsysbootimagelist.is_set || is_set(ceextsysbootimagelist.yfilter)) leaf_name_data.push_back(ceextsysbootimagelist.get_name_leafdata());
    if (ceextkickstartimagelist.is_set || is_set(ceextkickstartimagelist.yfilter)) leaf_name_data.push_back(ceextkickstartimagelist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtConfigRegister")
    {
        ceextconfigregister = value;
        ceextconfigregister.value_namespace = name_space;
        ceextconfigregister.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtConfigRegNext")
    {
        ceextconfigregnext = value;
        ceextconfigregnext.value_namespace = name_space;
        ceextconfigregnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtSysBootImageList")
    {
        ceextsysbootimagelist = value;
        ceextsysbootimagelist.value_namespace = name_space;
        ceextsysbootimagelist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtKickstartImageList")
    {
        ceextkickstartimagelist = value;
        ceextkickstartimagelist.value_namespace = name_space;
        ceextkickstartimagelist.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ceExtConfigRegister")
    {
        ceextconfigregister.yfilter = yfilter;
    }
    if(value_path == "ceExtConfigRegNext")
    {
        ceextconfigregnext.yfilter = yfilter;
    }
    if(value_path == "ceExtSysBootImageList")
    {
        ceextsysbootimagelist.yfilter = yfilter;
    }
    if(value_path == "ceExtKickstartImageList")
    {
        ceextkickstartimagelist.yfilter = yfilter;
    }
}

bool CISCOENTITYEXTMIB::CeExtConfigRegTable::CeExtConfigRegEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceExtConfigRegister" || name == "ceExtConfigRegNext" || name == "ceExtSysBootImageList" || name == "ceExtKickstartImageList")
        return true;
    return false;
}

CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDTable()
    :
    ceextentityledentry(this, {"entphysicalindex", "ceextentityledtype"})
{

    yang_name = "ceExtEntityLEDTable"; yang_parent_name = "CISCO-ENTITY-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYEXTMIB::CeExtEntityLEDTable::~CeExtEntityLEDTable()
{
}

bool CISCOENTITYEXTMIB::CeExtEntityLEDTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceextentityledentry.len(); index++)
    {
        if(ceextentityledentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYEXTMIB::CeExtEntityLEDTable::has_operation() const
{
    for (std::size_t index=0; index<ceextentityledentry.len(); index++)
    {
        if(ceextentityledentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYEXTMIB::CeExtEntityLEDTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYEXTMIB::CeExtEntityLEDTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtEntityLEDTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::CeExtEntityLEDTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::CeExtEntityLEDTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceExtEntityLEDEntry")
    {
        auto c = std::make_shared<CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry>();
        c->parent = this;
        ceextentityledentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::CeExtEntityLEDTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceextentityledentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOENTITYEXTMIB::CeExtEntityLEDTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYEXTMIB::CeExtEntityLEDTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYEXTMIB::CeExtEntityLEDTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceExtEntityLEDEntry")
        return true;
    return false;
}

CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::CeExtEntityLEDEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceextentityledtype{YType::enumeration, "ceExtEntityLEDType"},
    ceextentityledcolor{YType::enumeration, "ceExtEntityLEDColor"}
{

    yang_name = "ceExtEntityLEDEntry"; yang_parent_name = "ceExtEntityLEDTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::~CeExtEntityLEDEntry()
{
}

bool CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| ceextentityledtype.is_set
	|| ceextentityledcolor.is_set;
}

bool CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceextentityledtype.yfilter)
	|| ydk::is_set(ceextentityledcolor.yfilter);
}

std::string CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/ceExtEntityLEDTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtEntityLEDEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(ceextentityledtype, "ceExtEntityLEDType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceextentityledtype.is_set || is_set(ceextentityledtype.yfilter)) leaf_name_data.push_back(ceextentityledtype.get_name_leafdata());
    if (ceextentityledcolor.is_set || is_set(ceextentityledcolor.yfilter)) leaf_name_data.push_back(ceextentityledcolor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtEntityLEDType")
    {
        ceextentityledtype = value;
        ceextentityledtype.value_namespace = name_space;
        ceextentityledtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtEntityLEDColor")
    {
        ceextentityledcolor = value;
        ceextentityledcolor.value_namespace = name_space;
        ceextentityledcolor.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ceExtEntityLEDType")
    {
        ceextentityledtype.yfilter = yfilter;
    }
    if(value_path == "ceExtEntityLEDColor")
    {
        ceextentityledcolor.yfilter = yfilter;
    }
}

bool CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceExtEntityLEDType" || name == "ceExtEntityLEDColor")
        return true;
    return false;
}

const Enum::YLeaf CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::CeExtEntityLEDType::status {1, "status"};
const Enum::YLeaf CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::CeExtEntityLEDType::system {2, "system"};
const Enum::YLeaf CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::CeExtEntityLEDType::active {3, "active"};
const Enum::YLeaf CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::CeExtEntityLEDType::power {4, "power"};
const Enum::YLeaf CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::CeExtEntityLEDType::battery {5, "battery"};

const Enum::YLeaf CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::CeExtEntityLEDColor::off {1, "off"};
const Enum::YLeaf CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::CeExtEntityLEDColor::green {2, "green"};
const Enum::YLeaf CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::CeExtEntityLEDColor::amber {3, "amber"};
const Enum::YLeaf CISCOENTITYEXTMIB::CeExtEntityLEDTable::CeExtEntityLEDEntry::CeExtEntityLEDColor::red {4, "red"};


}
}

