
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
    ceextconfigregtable(std::make_shared<CISCOENTITYEXTMIB::Ceextconfigregtable>())
	,ceextentityledtable(std::make_shared<CISCOENTITYEXTMIB::Ceextentityledtable>())
	,ceextphysicalprocessortable(std::make_shared<CISCOENTITYEXTMIB::Ceextphysicalprocessortable>())
{
    ceextconfigregtable->parent = this;
    ceextentityledtable->parent = this;
    ceextphysicalprocessortable->parent = this;

    yang_name = "CISCO-ENTITY-EXT-MIB"; yang_parent_name = "CISCO-ENTITY-EXT-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOENTITYEXTMIB::~CISCOENTITYEXTMIB()
{
}

bool CISCOENTITYEXTMIB::has_data() const
{
    return (ceextconfigregtable !=  nullptr && ceextconfigregtable->has_data())
	|| (ceextentityledtable !=  nullptr && ceextentityledtable->has_data())
	|| (ceextphysicalprocessortable !=  nullptr && ceextphysicalprocessortable->has_data());
}

bool CISCOENTITYEXTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ceextconfigregtable !=  nullptr && ceextconfigregtable->has_operation())
	|| (ceextentityledtable !=  nullptr && ceextentityledtable->has_operation())
	|| (ceextphysicalprocessortable !=  nullptr && ceextphysicalprocessortable->has_operation());
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
    if(child_yang_name == "ceExtConfigRegTable")
    {
        if(ceextconfigregtable == nullptr)
        {
            ceextconfigregtable = std::make_shared<CISCOENTITYEXTMIB::Ceextconfigregtable>();
        }
        return ceextconfigregtable;
    }

    if(child_yang_name == "ceExtEntityLEDTable")
    {
        if(ceextentityledtable == nullptr)
        {
            ceextentityledtable = std::make_shared<CISCOENTITYEXTMIB::Ceextentityledtable>();
        }
        return ceextentityledtable;
    }

    if(child_yang_name == "ceExtPhysicalProcessorTable")
    {
        if(ceextphysicalprocessortable == nullptr)
        {
            ceextphysicalprocessortable = std::make_shared<CISCOENTITYEXTMIB::Ceextphysicalprocessortable>();
        }
        return ceextphysicalprocessortable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ceextconfigregtable != nullptr)
    {
        children["ceExtConfigRegTable"] = ceextconfigregtable;
    }

    if(ceextentityledtable != nullptr)
    {
        children["ceExtEntityLEDTable"] = ceextentityledtable;
    }

    if(ceextphysicalprocessortable != nullptr)
    {
        children["ceExtPhysicalProcessorTable"] = ceextphysicalprocessortable;
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
    if(name == "ceExtConfigRegTable" || name == "ceExtEntityLEDTable" || name == "ceExtPhysicalProcessorTable")
        return true;
    return false;
}

CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregtable()
{

    yang_name = "ceExtConfigRegTable"; yang_parent_name = "CISCO-ENTITY-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYEXTMIB::Ceextconfigregtable::~Ceextconfigregtable()
{
}

bool CISCOENTITYEXTMIB::Ceextconfigregtable::has_data() const
{
    for (std::size_t index=0; index<ceextconfigregentry.size(); index++)
    {
        if(ceextconfigregentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYEXTMIB::Ceextconfigregtable::has_operation() const
{
    for (std::size_t index=0; index<ceextconfigregentry.size(); index++)
    {
        if(ceextconfigregentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYEXTMIB::Ceextconfigregtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYEXTMIB::Ceextconfigregtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtConfigRegTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::Ceextconfigregtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::Ceextconfigregtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceExtConfigRegEntry")
    {
        for(auto const & c : ceextconfigregentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry>();
        c->parent = this;
        ceextconfigregentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::Ceextconfigregtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceextconfigregentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOENTITYEXTMIB::Ceextconfigregtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYEXTMIB::Ceextconfigregtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYEXTMIB::Ceextconfigregtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceExtConfigRegEntry")
        return true;
    return false;
}

CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry::Ceextconfigregentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceextconfigregister{YType::str, "ceExtConfigRegister"},
    ceextconfigregnext{YType::str, "ceExtConfigRegNext"},
    ceextkickstartimagelist{YType::str, "ceExtKickstartImageList"},
    ceextsysbootimagelist{YType::str, "ceExtSysBootImageList"}
{

    yang_name = "ceExtConfigRegEntry"; yang_parent_name = "ceExtConfigRegTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry::~Ceextconfigregentry()
{
}

bool CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceextconfigregister.is_set
	|| ceextconfigregnext.is_set
	|| ceextkickstartimagelist.is_set
	|| ceextsysbootimagelist.is_set;
}

bool CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceextconfigregister.yfilter)
	|| ydk::is_set(ceextconfigregnext.yfilter)
	|| ydk::is_set(ceextkickstartimagelist.yfilter)
	|| ydk::is_set(ceextsysbootimagelist.yfilter);
}

std::string CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/ceExtConfigRegTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtConfigRegEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceextconfigregister.is_set || is_set(ceextconfigregister.yfilter)) leaf_name_data.push_back(ceextconfigregister.get_name_leafdata());
    if (ceextconfigregnext.is_set || is_set(ceextconfigregnext.yfilter)) leaf_name_data.push_back(ceextconfigregnext.get_name_leafdata());
    if (ceextkickstartimagelist.is_set || is_set(ceextkickstartimagelist.yfilter)) leaf_name_data.push_back(ceextkickstartimagelist.get_name_leafdata());
    if (ceextsysbootimagelist.is_set || is_set(ceextsysbootimagelist.yfilter)) leaf_name_data.push_back(ceextsysbootimagelist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ceExtKickstartImageList")
    {
        ceextkickstartimagelist = value;
        ceextkickstartimagelist.value_namespace = name_space;
        ceextkickstartimagelist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtSysBootImageList")
    {
        ceextsysbootimagelist = value;
        ceextsysbootimagelist.value_namespace = name_space;
        ceextsysbootimagelist.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ceExtKickstartImageList")
    {
        ceextkickstartimagelist.yfilter = yfilter;
    }
    if(value_path == "ceExtSysBootImageList")
    {
        ceextsysbootimagelist.yfilter = yfilter;
    }
}

bool CISCOENTITYEXTMIB::Ceextconfigregtable::Ceextconfigregentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceExtConfigRegister" || name == "ceExtConfigRegNext" || name == "ceExtKickstartImageList" || name == "ceExtSysBootImageList")
        return true;
    return false;
}

CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledtable()
{

    yang_name = "ceExtEntityLEDTable"; yang_parent_name = "CISCO-ENTITY-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYEXTMIB::Ceextentityledtable::~Ceextentityledtable()
{
}

bool CISCOENTITYEXTMIB::Ceextentityledtable::has_data() const
{
    for (std::size_t index=0; index<ceextentityledentry.size(); index++)
    {
        if(ceextentityledentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYEXTMIB::Ceextentityledtable::has_operation() const
{
    for (std::size_t index=0; index<ceextentityledentry.size(); index++)
    {
        if(ceextentityledentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYEXTMIB::Ceextentityledtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYEXTMIB::Ceextentityledtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtEntityLEDTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::Ceextentityledtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::Ceextentityledtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceExtEntityLEDEntry")
    {
        for(auto const & c : ceextentityledentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry>();
        c->parent = this;
        ceextentityledentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::Ceextentityledtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceextentityledentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOENTITYEXTMIB::Ceextentityledtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYEXTMIB::Ceextentityledtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYEXTMIB::Ceextentityledtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceExtEntityLEDEntry")
        return true;
    return false;
}

CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::Ceextentityledentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceextentityledtype{YType::enumeration, "ceExtEntityLEDType"},
    ceextentityledcolor{YType::enumeration, "ceExtEntityLEDColor"}
{

    yang_name = "ceExtEntityLEDEntry"; yang_parent_name = "ceExtEntityLEDTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::~Ceextentityledentry()
{
}

bool CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceextentityledtype.is_set
	|| ceextentityledcolor.is_set;
}

bool CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceextentityledtype.yfilter)
	|| ydk::is_set(ceextentityledcolor.yfilter);
}

std::string CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/ceExtEntityLEDTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtEntityLEDEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[ceExtEntityLEDType='" <<ceextentityledtype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceextentityledtype.is_set || is_set(ceextentityledtype.yfilter)) leaf_name_data.push_back(ceextentityledtype.get_name_leafdata());
    if (ceextentityledcolor.is_set || is_set(ceextentityledcolor.yfilter)) leaf_name_data.push_back(ceextentityledcolor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceExtEntityLEDType" || name == "ceExtEntityLEDColor")
        return true;
    return false;
}

CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessortable()
{

    yang_name = "ceExtPhysicalProcessorTable"; yang_parent_name = "CISCO-ENTITY-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYEXTMIB::Ceextphysicalprocessortable::~Ceextphysicalprocessortable()
{
}

bool CISCOENTITYEXTMIB::Ceextphysicalprocessortable::has_data() const
{
    for (std::size_t index=0; index<ceextphysicalprocessorentry.size(); index++)
    {
        if(ceextphysicalprocessorentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENTITYEXTMIB::Ceextphysicalprocessortable::has_operation() const
{
    for (std::size_t index=0; index<ceextphysicalprocessorentry.size(); index++)
    {
        if(ceextphysicalprocessorentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENTITYEXTMIB::Ceextphysicalprocessortable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYEXTMIB::Ceextphysicalprocessortable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtPhysicalProcessorTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::Ceextphysicalprocessortable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::Ceextphysicalprocessortable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceExtPhysicalProcessorEntry")
    {
        for(auto const & c : ceextphysicalprocessorentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry>();
        c->parent = this;
        ceextphysicalprocessorentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::Ceextphysicalprocessortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceextphysicalprocessorentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOENTITYEXTMIB::Ceextphysicalprocessortable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENTITYEXTMIB::Ceextphysicalprocessortable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENTITYEXTMIB::Ceextphysicalprocessortable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceExtPhysicalProcessorEntry")
        return true;
    return false;
}

CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::Ceextphysicalprocessorentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceexthcprocessorram{YType::uint64, "ceExtHCProcessorRam"},
    ceextnvramsize{YType::uint32, "ceExtNVRAMSize"},
    ceextnvramused{YType::uint32, "ceExtNVRAMUsed"},
    ceextprocessorram{YType::uint32, "ceExtProcessorRam"},
    ceextprocessorramoverflow{YType::uint32, "ceExtProcessorRamOverflow"}
{

    yang_name = "ceExtPhysicalProcessorEntry"; yang_parent_name = "ceExtPhysicalProcessorTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::~Ceextphysicalprocessorentry()
{
}

bool CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceexthcprocessorram.is_set
	|| ceextnvramsize.is_set
	|| ceextnvramused.is_set
	|| ceextprocessorram.is_set
	|| ceextprocessorramoverflow.is_set;
}

bool CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceexthcprocessorram.yfilter)
	|| ydk::is_set(ceextnvramsize.yfilter)
	|| ydk::is_set(ceextnvramused.yfilter)
	|| ydk::is_set(ceextprocessorram.yfilter)
	|| ydk::is_set(ceextprocessorramoverflow.yfilter);
}

std::string CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/ceExtPhysicalProcessorTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtPhysicalProcessorEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceexthcprocessorram.is_set || is_set(ceexthcprocessorram.yfilter)) leaf_name_data.push_back(ceexthcprocessorram.get_name_leafdata());
    if (ceextnvramsize.is_set || is_set(ceextnvramsize.yfilter)) leaf_name_data.push_back(ceextnvramsize.get_name_leafdata());
    if (ceextnvramused.is_set || is_set(ceextnvramused.yfilter)) leaf_name_data.push_back(ceextnvramused.get_name_leafdata());
    if (ceextprocessorram.is_set || is_set(ceextprocessorram.yfilter)) leaf_name_data.push_back(ceextprocessorram.get_name_leafdata());
    if (ceextprocessorramoverflow.is_set || is_set(ceextprocessorramoverflow.yfilter)) leaf_name_data.push_back(ceextprocessorramoverflow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtHCProcessorRam")
    {
        ceexthcprocessorram = value;
        ceexthcprocessorram.value_namespace = name_space;
        ceexthcprocessorram.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ceExtProcessorRam")
    {
        ceextprocessorram = value;
        ceextprocessorram.value_namespace = name_space;
        ceextprocessorram.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceExtProcessorRamOverflow")
    {
        ceextprocessorramoverflow = value;
        ceextprocessorramoverflow.value_namespace = name_space;
        ceextprocessorramoverflow.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ceExtHCProcessorRam")
    {
        ceexthcprocessorram.yfilter = yfilter;
    }
    if(value_path == "ceExtNVRAMSize")
    {
        ceextnvramsize.yfilter = yfilter;
    }
    if(value_path == "ceExtNVRAMUsed")
    {
        ceextnvramused.yfilter = yfilter;
    }
    if(value_path == "ceExtProcessorRam")
    {
        ceextprocessorram.yfilter = yfilter;
    }
    if(value_path == "ceExtProcessorRamOverflow")
    {
        ceextprocessorramoverflow.yfilter = yfilter;
    }
}

bool CISCOENTITYEXTMIB::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ceExtHCProcessorRam" || name == "ceExtNVRAMSize" || name == "ceExtNVRAMUsed" || name == "ceExtProcessorRam" || name == "ceExtProcessorRamOverflow")
        return true;
    return false;
}

const Enum::YLeaf CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::Ceextentityledtype::status {1, "status"};
const Enum::YLeaf CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::Ceextentityledtype::system {2, "system"};
const Enum::YLeaf CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::Ceextentityledtype::active {3, "active"};
const Enum::YLeaf CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::Ceextentityledtype::power {4, "power"};
const Enum::YLeaf CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::Ceextentityledtype::battery {5, "battery"};

const Enum::YLeaf CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::Ceextentityledcolor::off {1, "off"};
const Enum::YLeaf CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::Ceextentityledcolor::green {2, "green"};
const Enum::YLeaf CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::Ceextentityledcolor::amber {3, "amber"};
const Enum::YLeaf CISCOENTITYEXTMIB::Ceextentityledtable::Ceextentityledentry::Ceextentityledcolor::red {4, "red"};


}
}

