
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SONET_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace SONET_MIB {

SONETMIB::SONETMIB()
    :
    sonetmedium(std::make_shared<SONETMIB::SonetMedium>())
    , sonetmediumtable(std::make_shared<SONETMIB::SonetMediumTable>())
    , sonetsectioncurrenttable(std::make_shared<SONETMIB::SonetSectionCurrentTable>())
    , sonetsectionintervaltable(std::make_shared<SONETMIB::SonetSectionIntervalTable>())
    , sonetlinecurrenttable(std::make_shared<SONETMIB::SonetLineCurrentTable>())
    , sonetlineintervaltable(std::make_shared<SONETMIB::SonetLineIntervalTable>())
    , sonetfarendlinecurrenttable(std::make_shared<SONETMIB::SonetFarEndLineCurrentTable>())
    , sonetfarendlineintervaltable(std::make_shared<SONETMIB::SonetFarEndLineIntervalTable>())
    , sonetpathcurrenttable(std::make_shared<SONETMIB::SonetPathCurrentTable>())
    , sonetpathintervaltable(std::make_shared<SONETMIB::SonetPathIntervalTable>())
    , sonetfarendpathcurrenttable(std::make_shared<SONETMIB::SonetFarEndPathCurrentTable>())
    , sonetfarendpathintervaltable(std::make_shared<SONETMIB::SonetFarEndPathIntervalTable>())
    , sonetvtcurrenttable(std::make_shared<SONETMIB::SonetVTCurrentTable>())
    , sonetvtintervaltable(std::make_shared<SONETMIB::SonetVTIntervalTable>())
    , sonetfarendvtcurrenttable(std::make_shared<SONETMIB::SonetFarEndVTCurrentTable>())
    , sonetfarendvtintervaltable(std::make_shared<SONETMIB::SonetFarEndVTIntervalTable>())
{
    sonetmedium->parent = this;
    sonetmediumtable->parent = this;
    sonetsectioncurrenttable->parent = this;
    sonetsectionintervaltable->parent = this;
    sonetlinecurrenttable->parent = this;
    sonetlineintervaltable->parent = this;
    sonetfarendlinecurrenttable->parent = this;
    sonetfarendlineintervaltable->parent = this;
    sonetpathcurrenttable->parent = this;
    sonetpathintervaltable->parent = this;
    sonetfarendpathcurrenttable->parent = this;
    sonetfarendpathintervaltable->parent = this;
    sonetvtcurrenttable->parent = this;
    sonetvtintervaltable->parent = this;
    sonetfarendvtcurrenttable->parent = this;
    sonetfarendvtintervaltable->parent = this;

    yang_name = "SONET-MIB"; yang_parent_name = "SONET-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

SONETMIB::~SONETMIB()
{
}

bool SONETMIB::has_data() const
{
    if (is_presence_container) return true;
    return (sonetmedium !=  nullptr && sonetmedium->has_data())
	|| (sonetmediumtable !=  nullptr && sonetmediumtable->has_data())
	|| (sonetsectioncurrenttable !=  nullptr && sonetsectioncurrenttable->has_data())
	|| (sonetsectionintervaltable !=  nullptr && sonetsectionintervaltable->has_data())
	|| (sonetlinecurrenttable !=  nullptr && sonetlinecurrenttable->has_data())
	|| (sonetlineintervaltable !=  nullptr && sonetlineintervaltable->has_data())
	|| (sonetfarendlinecurrenttable !=  nullptr && sonetfarendlinecurrenttable->has_data())
	|| (sonetfarendlineintervaltable !=  nullptr && sonetfarendlineintervaltable->has_data())
	|| (sonetpathcurrenttable !=  nullptr && sonetpathcurrenttable->has_data())
	|| (sonetpathintervaltable !=  nullptr && sonetpathintervaltable->has_data())
	|| (sonetfarendpathcurrenttable !=  nullptr && sonetfarendpathcurrenttable->has_data())
	|| (sonetfarendpathintervaltable !=  nullptr && sonetfarendpathintervaltable->has_data())
	|| (sonetvtcurrenttable !=  nullptr && sonetvtcurrenttable->has_data())
	|| (sonetvtintervaltable !=  nullptr && sonetvtintervaltable->has_data())
	|| (sonetfarendvtcurrenttable !=  nullptr && sonetfarendvtcurrenttable->has_data())
	|| (sonetfarendvtintervaltable !=  nullptr && sonetfarendvtintervaltable->has_data());
}

bool SONETMIB::has_operation() const
{
    return is_set(yfilter)
	|| (sonetmedium !=  nullptr && sonetmedium->has_operation())
	|| (sonetmediumtable !=  nullptr && sonetmediumtable->has_operation())
	|| (sonetsectioncurrenttable !=  nullptr && sonetsectioncurrenttable->has_operation())
	|| (sonetsectionintervaltable !=  nullptr && sonetsectionintervaltable->has_operation())
	|| (sonetlinecurrenttable !=  nullptr && sonetlinecurrenttable->has_operation())
	|| (sonetlineintervaltable !=  nullptr && sonetlineintervaltable->has_operation())
	|| (sonetfarendlinecurrenttable !=  nullptr && sonetfarendlinecurrenttable->has_operation())
	|| (sonetfarendlineintervaltable !=  nullptr && sonetfarendlineintervaltable->has_operation())
	|| (sonetpathcurrenttable !=  nullptr && sonetpathcurrenttable->has_operation())
	|| (sonetpathintervaltable !=  nullptr && sonetpathintervaltable->has_operation())
	|| (sonetfarendpathcurrenttable !=  nullptr && sonetfarendpathcurrenttable->has_operation())
	|| (sonetfarendpathintervaltable !=  nullptr && sonetfarendpathintervaltable->has_operation())
	|| (sonetvtcurrenttable !=  nullptr && sonetvtcurrenttable->has_operation())
	|| (sonetvtintervaltable !=  nullptr && sonetvtintervaltable->has_operation())
	|| (sonetfarendvtcurrenttable !=  nullptr && sonetfarendvtcurrenttable->has_operation())
	|| (sonetfarendvtintervaltable !=  nullptr && sonetfarendvtintervaltable->has_operation());
}

std::string SONETMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetMedium")
    {
        if(sonetmedium == nullptr)
        {
            sonetmedium = std::make_shared<SONETMIB::SonetMedium>();
        }
        return sonetmedium;
    }

    if(child_yang_name == "sonetMediumTable")
    {
        if(sonetmediumtable == nullptr)
        {
            sonetmediumtable = std::make_shared<SONETMIB::SonetMediumTable>();
        }
        return sonetmediumtable;
    }

    if(child_yang_name == "sonetSectionCurrentTable")
    {
        if(sonetsectioncurrenttable == nullptr)
        {
            sonetsectioncurrenttable = std::make_shared<SONETMIB::SonetSectionCurrentTable>();
        }
        return sonetsectioncurrenttable;
    }

    if(child_yang_name == "sonetSectionIntervalTable")
    {
        if(sonetsectionintervaltable == nullptr)
        {
            sonetsectionintervaltable = std::make_shared<SONETMIB::SonetSectionIntervalTable>();
        }
        return sonetsectionintervaltable;
    }

    if(child_yang_name == "sonetLineCurrentTable")
    {
        if(sonetlinecurrenttable == nullptr)
        {
            sonetlinecurrenttable = std::make_shared<SONETMIB::SonetLineCurrentTable>();
        }
        return sonetlinecurrenttable;
    }

    if(child_yang_name == "sonetLineIntervalTable")
    {
        if(sonetlineintervaltable == nullptr)
        {
            sonetlineintervaltable = std::make_shared<SONETMIB::SonetLineIntervalTable>();
        }
        return sonetlineintervaltable;
    }

    if(child_yang_name == "sonetFarEndLineCurrentTable")
    {
        if(sonetfarendlinecurrenttable == nullptr)
        {
            sonetfarendlinecurrenttable = std::make_shared<SONETMIB::SonetFarEndLineCurrentTable>();
        }
        return sonetfarendlinecurrenttable;
    }

    if(child_yang_name == "sonetFarEndLineIntervalTable")
    {
        if(sonetfarendlineintervaltable == nullptr)
        {
            sonetfarendlineintervaltable = std::make_shared<SONETMIB::SonetFarEndLineIntervalTable>();
        }
        return sonetfarendlineintervaltable;
    }

    if(child_yang_name == "sonetPathCurrentTable")
    {
        if(sonetpathcurrenttable == nullptr)
        {
            sonetpathcurrenttable = std::make_shared<SONETMIB::SonetPathCurrentTable>();
        }
        return sonetpathcurrenttable;
    }

    if(child_yang_name == "sonetPathIntervalTable")
    {
        if(sonetpathintervaltable == nullptr)
        {
            sonetpathintervaltable = std::make_shared<SONETMIB::SonetPathIntervalTable>();
        }
        return sonetpathintervaltable;
    }

    if(child_yang_name == "sonetFarEndPathCurrentTable")
    {
        if(sonetfarendpathcurrenttable == nullptr)
        {
            sonetfarendpathcurrenttable = std::make_shared<SONETMIB::SonetFarEndPathCurrentTable>();
        }
        return sonetfarendpathcurrenttable;
    }

    if(child_yang_name == "sonetFarEndPathIntervalTable")
    {
        if(sonetfarendpathintervaltable == nullptr)
        {
            sonetfarendpathintervaltable = std::make_shared<SONETMIB::SonetFarEndPathIntervalTable>();
        }
        return sonetfarendpathintervaltable;
    }

    if(child_yang_name == "sonetVTCurrentTable")
    {
        if(sonetvtcurrenttable == nullptr)
        {
            sonetvtcurrenttable = std::make_shared<SONETMIB::SonetVTCurrentTable>();
        }
        return sonetvtcurrenttable;
    }

    if(child_yang_name == "sonetVTIntervalTable")
    {
        if(sonetvtintervaltable == nullptr)
        {
            sonetvtintervaltable = std::make_shared<SONETMIB::SonetVTIntervalTable>();
        }
        return sonetvtintervaltable;
    }

    if(child_yang_name == "sonetFarEndVTCurrentTable")
    {
        if(sonetfarendvtcurrenttable == nullptr)
        {
            sonetfarendvtcurrenttable = std::make_shared<SONETMIB::SonetFarEndVTCurrentTable>();
        }
        return sonetfarendvtcurrenttable;
    }

    if(child_yang_name == "sonetFarEndVTIntervalTable")
    {
        if(sonetfarendvtintervaltable == nullptr)
        {
            sonetfarendvtintervaltable = std::make_shared<SONETMIB::SonetFarEndVTIntervalTable>();
        }
        return sonetfarendvtintervaltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sonetmedium != nullptr)
    {
        children["sonetMedium"] = sonetmedium;
    }

    if(sonetmediumtable != nullptr)
    {
        children["sonetMediumTable"] = sonetmediumtable;
    }

    if(sonetsectioncurrenttable != nullptr)
    {
        children["sonetSectionCurrentTable"] = sonetsectioncurrenttable;
    }

    if(sonetsectionintervaltable != nullptr)
    {
        children["sonetSectionIntervalTable"] = sonetsectionintervaltable;
    }

    if(sonetlinecurrenttable != nullptr)
    {
        children["sonetLineCurrentTable"] = sonetlinecurrenttable;
    }

    if(sonetlineintervaltable != nullptr)
    {
        children["sonetLineIntervalTable"] = sonetlineintervaltable;
    }

    if(sonetfarendlinecurrenttable != nullptr)
    {
        children["sonetFarEndLineCurrentTable"] = sonetfarendlinecurrenttable;
    }

    if(sonetfarendlineintervaltable != nullptr)
    {
        children["sonetFarEndLineIntervalTable"] = sonetfarendlineintervaltable;
    }

    if(sonetpathcurrenttable != nullptr)
    {
        children["sonetPathCurrentTable"] = sonetpathcurrenttable;
    }

    if(sonetpathintervaltable != nullptr)
    {
        children["sonetPathIntervalTable"] = sonetpathintervaltable;
    }

    if(sonetfarendpathcurrenttable != nullptr)
    {
        children["sonetFarEndPathCurrentTable"] = sonetfarendpathcurrenttable;
    }

    if(sonetfarendpathintervaltable != nullptr)
    {
        children["sonetFarEndPathIntervalTable"] = sonetfarendpathintervaltable;
    }

    if(sonetvtcurrenttable != nullptr)
    {
        children["sonetVTCurrentTable"] = sonetvtcurrenttable;
    }

    if(sonetvtintervaltable != nullptr)
    {
        children["sonetVTIntervalTable"] = sonetvtintervaltable;
    }

    if(sonetfarendvtcurrenttable != nullptr)
    {
        children["sonetFarEndVTCurrentTable"] = sonetfarendvtcurrenttable;
    }

    if(sonetfarendvtintervaltable != nullptr)
    {
        children["sonetFarEndVTIntervalTable"] = sonetfarendvtintervaltable;
    }

    return children;
}

void SONETMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SONETMIB::clone_ptr() const
{
    return std::make_shared<SONETMIB>();
}

std::string SONETMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SONETMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SONETMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SONETMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool SONETMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetMedium" || name == "sonetMediumTable" || name == "sonetSectionCurrentTable" || name == "sonetSectionIntervalTable" || name == "sonetLineCurrentTable" || name == "sonetLineIntervalTable" || name == "sonetFarEndLineCurrentTable" || name == "sonetFarEndLineIntervalTable" || name == "sonetPathCurrentTable" || name == "sonetPathIntervalTable" || name == "sonetFarEndPathCurrentTable" || name == "sonetFarEndPathIntervalTable" || name == "sonetVTCurrentTable" || name == "sonetVTIntervalTable" || name == "sonetFarEndVTCurrentTable" || name == "sonetFarEndVTIntervalTable")
        return true;
    return false;
}

SONETMIB::SonetMedium::SonetMedium()
    :
    sonetsesthresholdset{YType::enumeration, "sonetSESthresholdSet"}
{

    yang_name = "sonetMedium"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetMedium::~SonetMedium()
{
}

bool SONETMIB::SonetMedium::has_data() const
{
    if (is_presence_container) return true;
    return sonetsesthresholdset.is_set;
}

bool SONETMIB::SonetMedium::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sonetsesthresholdset.yfilter);
}

std::string SONETMIB::SonetMedium::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetMedium::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetMedium";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetMedium::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sonetsesthresholdset.is_set || is_set(sonetsesthresholdset.yfilter)) leaf_name_data.push_back(sonetsesthresholdset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetMedium::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetMedium::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetMedium::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sonetSESthresholdSet")
    {
        sonetsesthresholdset = value;
        sonetsesthresholdset.value_namespace = name_space;
        sonetsesthresholdset.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetMedium::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sonetSESthresholdSet")
    {
        sonetsesthresholdset.yfilter = yfilter;
    }
}

bool SONETMIB::SonetMedium::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetSESthresholdSet")
        return true;
    return false;
}

SONETMIB::SonetMediumTable::SonetMediumTable()
    :
    sonetmediumentry(this, {"ifindex"})
{

    yang_name = "sonetMediumTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetMediumTable::~SonetMediumTable()
{
}

bool SONETMIB::SonetMediumTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetmediumentry.len(); index++)
    {
        if(sonetmediumentry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetMediumTable::has_operation() const
{
    for (std::size_t index=0; index<sonetmediumentry.len(); index++)
    {
        if(sonetmediumentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetMediumTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetMediumTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetMediumTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetMediumTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetMediumTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetMediumEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetMediumTable::SonetMediumEntry>();
        c->parent = this;
        sonetmediumentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetMediumTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetmediumentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetMediumTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetMediumTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetMediumTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetMediumEntry")
        return true;
    return false;
}

SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetmediumtype{YType::enumeration, "sonetMediumType"},
    sonetmediumtimeelapsed{YType::int32, "sonetMediumTimeElapsed"},
    sonetmediumvalidintervals{YType::int32, "sonetMediumValidIntervals"},
    sonetmediumlinecoding{YType::enumeration, "sonetMediumLineCoding"},
    sonetmediumlinetype{YType::enumeration, "sonetMediumLineType"},
    sonetmediumcircuitidentifier{YType::str, "sonetMediumCircuitIdentifier"},
    sonetmediuminvalidintervals{YType::int32, "sonetMediumInvalidIntervals"},
    sonetmediumloopbackconfig{YType::bits, "sonetMediumLoopbackConfig"}
{

    yang_name = "sonetMediumEntry"; yang_parent_name = "sonetMediumTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetMediumTable::SonetMediumEntry::~SonetMediumEntry()
{
}

bool SONETMIB::SonetMediumTable::SonetMediumEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetmediumtype.is_set
	|| sonetmediumtimeelapsed.is_set
	|| sonetmediumvalidintervals.is_set
	|| sonetmediumlinecoding.is_set
	|| sonetmediumlinetype.is_set
	|| sonetmediumcircuitidentifier.is_set
	|| sonetmediuminvalidintervals.is_set
	|| sonetmediumloopbackconfig.is_set;
}

bool SONETMIB::SonetMediumTable::SonetMediumEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetmediumtype.yfilter)
	|| ydk::is_set(sonetmediumtimeelapsed.yfilter)
	|| ydk::is_set(sonetmediumvalidintervals.yfilter)
	|| ydk::is_set(sonetmediumlinecoding.yfilter)
	|| ydk::is_set(sonetmediumlinetype.yfilter)
	|| ydk::is_set(sonetmediumcircuitidentifier.yfilter)
	|| ydk::is_set(sonetmediuminvalidintervals.yfilter)
	|| ydk::is_set(sonetmediumloopbackconfig.yfilter);
}

std::string SONETMIB::SonetMediumTable::SonetMediumEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetMediumTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetMediumTable::SonetMediumEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetMediumEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetMediumTable::SonetMediumEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetmediumtype.is_set || is_set(sonetmediumtype.yfilter)) leaf_name_data.push_back(sonetmediumtype.get_name_leafdata());
    if (sonetmediumtimeelapsed.is_set || is_set(sonetmediumtimeelapsed.yfilter)) leaf_name_data.push_back(sonetmediumtimeelapsed.get_name_leafdata());
    if (sonetmediumvalidintervals.is_set || is_set(sonetmediumvalidintervals.yfilter)) leaf_name_data.push_back(sonetmediumvalidintervals.get_name_leafdata());
    if (sonetmediumlinecoding.is_set || is_set(sonetmediumlinecoding.yfilter)) leaf_name_data.push_back(sonetmediumlinecoding.get_name_leafdata());
    if (sonetmediumlinetype.is_set || is_set(sonetmediumlinetype.yfilter)) leaf_name_data.push_back(sonetmediumlinetype.get_name_leafdata());
    if (sonetmediumcircuitidentifier.is_set || is_set(sonetmediumcircuitidentifier.yfilter)) leaf_name_data.push_back(sonetmediumcircuitidentifier.get_name_leafdata());
    if (sonetmediuminvalidintervals.is_set || is_set(sonetmediuminvalidintervals.yfilter)) leaf_name_data.push_back(sonetmediuminvalidintervals.get_name_leafdata());
    if (sonetmediumloopbackconfig.is_set || is_set(sonetmediumloopbackconfig.yfilter)) leaf_name_data.push_back(sonetmediumloopbackconfig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetMediumTable::SonetMediumEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetMediumTable::SonetMediumEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetMediumTable::SonetMediumEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetMediumType")
    {
        sonetmediumtype = value;
        sonetmediumtype.value_namespace = name_space;
        sonetmediumtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetMediumTimeElapsed")
    {
        sonetmediumtimeelapsed = value;
        sonetmediumtimeelapsed.value_namespace = name_space;
        sonetmediumtimeelapsed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetMediumValidIntervals")
    {
        sonetmediumvalidintervals = value;
        sonetmediumvalidintervals.value_namespace = name_space;
        sonetmediumvalidintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetMediumLineCoding")
    {
        sonetmediumlinecoding = value;
        sonetmediumlinecoding.value_namespace = name_space;
        sonetmediumlinecoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetMediumLineType")
    {
        sonetmediumlinetype = value;
        sonetmediumlinetype.value_namespace = name_space;
        sonetmediumlinetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetMediumCircuitIdentifier")
    {
        sonetmediumcircuitidentifier = value;
        sonetmediumcircuitidentifier.value_namespace = name_space;
        sonetmediumcircuitidentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetMediumInvalidIntervals")
    {
        sonetmediuminvalidintervals = value;
        sonetmediuminvalidintervals.value_namespace = name_space;
        sonetmediuminvalidintervals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetMediumLoopbackConfig")
    {
        sonetmediumloopbackconfig[value] = true;
    }
}

void SONETMIB::SonetMediumTable::SonetMediumEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetMediumType")
    {
        sonetmediumtype.yfilter = yfilter;
    }
    if(value_path == "sonetMediumTimeElapsed")
    {
        sonetmediumtimeelapsed.yfilter = yfilter;
    }
    if(value_path == "sonetMediumValidIntervals")
    {
        sonetmediumvalidintervals.yfilter = yfilter;
    }
    if(value_path == "sonetMediumLineCoding")
    {
        sonetmediumlinecoding.yfilter = yfilter;
    }
    if(value_path == "sonetMediumLineType")
    {
        sonetmediumlinetype.yfilter = yfilter;
    }
    if(value_path == "sonetMediumCircuitIdentifier")
    {
        sonetmediumcircuitidentifier.yfilter = yfilter;
    }
    if(value_path == "sonetMediumInvalidIntervals")
    {
        sonetmediuminvalidintervals.yfilter = yfilter;
    }
    if(value_path == "sonetMediumLoopbackConfig")
    {
        sonetmediumloopbackconfig.yfilter = yfilter;
    }
}

bool SONETMIB::SonetMediumTable::SonetMediumEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetMediumType" || name == "sonetMediumTimeElapsed" || name == "sonetMediumValidIntervals" || name == "sonetMediumLineCoding" || name == "sonetMediumLineType" || name == "sonetMediumCircuitIdentifier" || name == "sonetMediumInvalidIntervals" || name == "sonetMediumLoopbackConfig")
        return true;
    return false;
}

SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentTable()
    :
    sonetsectioncurrententry(this, {"ifindex"})
{

    yang_name = "sonetSectionCurrentTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetSectionCurrentTable::~SonetSectionCurrentTable()
{
}

bool SONETMIB::SonetSectionCurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetsectioncurrententry.len(); index++)
    {
        if(sonetsectioncurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetSectionCurrentTable::has_operation() const
{
    for (std::size_t index=0; index<sonetsectioncurrententry.len(); index++)
    {
        if(sonetsectioncurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetSectionCurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetSectionCurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetSectionCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetSectionCurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetSectionCurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetSectionCurrentEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry>();
        c->parent = this;
        sonetsectioncurrententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetSectionCurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetsectioncurrententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetSectionCurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetSectionCurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetSectionCurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetSectionCurrentEntry")
        return true;
    return false;
}

SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry::SonetSectionCurrentEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetsectioncurrentstatus{YType::int32, "sonetSectionCurrentStatus"},
    sonetsectioncurrentess{YType::uint32, "sonetSectionCurrentESs"},
    sonetsectioncurrentsess{YType::uint32, "sonetSectionCurrentSESs"},
    sonetsectioncurrentsefss{YType::uint32, "sonetSectionCurrentSEFSs"},
    sonetsectioncurrentcvs{YType::uint32, "sonetSectionCurrentCVs"}
{

    yang_name = "sonetSectionCurrentEntry"; yang_parent_name = "sonetSectionCurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry::~SonetSectionCurrentEntry()
{
}

bool SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetsectioncurrentstatus.is_set
	|| sonetsectioncurrentess.is_set
	|| sonetsectioncurrentsess.is_set
	|| sonetsectioncurrentsefss.is_set
	|| sonetsectioncurrentcvs.is_set;
}

bool SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetsectioncurrentstatus.yfilter)
	|| ydk::is_set(sonetsectioncurrentess.yfilter)
	|| ydk::is_set(sonetsectioncurrentsess.yfilter)
	|| ydk::is_set(sonetsectioncurrentsefss.yfilter)
	|| ydk::is_set(sonetsectioncurrentcvs.yfilter);
}

std::string SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetSectionCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetSectionCurrentEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetsectioncurrentstatus.is_set || is_set(sonetsectioncurrentstatus.yfilter)) leaf_name_data.push_back(sonetsectioncurrentstatus.get_name_leafdata());
    if (sonetsectioncurrentess.is_set || is_set(sonetsectioncurrentess.yfilter)) leaf_name_data.push_back(sonetsectioncurrentess.get_name_leafdata());
    if (sonetsectioncurrentsess.is_set || is_set(sonetsectioncurrentsess.yfilter)) leaf_name_data.push_back(sonetsectioncurrentsess.get_name_leafdata());
    if (sonetsectioncurrentsefss.is_set || is_set(sonetsectioncurrentsefss.yfilter)) leaf_name_data.push_back(sonetsectioncurrentsefss.get_name_leafdata());
    if (sonetsectioncurrentcvs.is_set || is_set(sonetsectioncurrentcvs.yfilter)) leaf_name_data.push_back(sonetsectioncurrentcvs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionCurrentStatus")
    {
        sonetsectioncurrentstatus = value;
        sonetsectioncurrentstatus.value_namespace = name_space;
        sonetsectioncurrentstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionCurrentESs")
    {
        sonetsectioncurrentess = value;
        sonetsectioncurrentess.value_namespace = name_space;
        sonetsectioncurrentess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionCurrentSESs")
    {
        sonetsectioncurrentsess = value;
        sonetsectioncurrentsess.value_namespace = name_space;
        sonetsectioncurrentsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionCurrentSEFSs")
    {
        sonetsectioncurrentsefss = value;
        sonetsectioncurrentsefss.value_namespace = name_space;
        sonetsectioncurrentsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionCurrentCVs")
    {
        sonetsectioncurrentcvs = value;
        sonetsectioncurrentcvs.value_namespace = name_space;
        sonetsectioncurrentcvs.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetSectionCurrentStatus")
    {
        sonetsectioncurrentstatus.yfilter = yfilter;
    }
    if(value_path == "sonetSectionCurrentESs")
    {
        sonetsectioncurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetSectionCurrentSESs")
    {
        sonetsectioncurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetSectionCurrentSEFSs")
    {
        sonetsectioncurrentsefss.yfilter = yfilter;
    }
    if(value_path == "sonetSectionCurrentCVs")
    {
        sonetsectioncurrentcvs.yfilter = yfilter;
    }
}

bool SONETMIB::SonetSectionCurrentTable::SonetSectionCurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetSectionCurrentStatus" || name == "sonetSectionCurrentESs" || name == "sonetSectionCurrentSESs" || name == "sonetSectionCurrentSEFSs" || name == "sonetSectionCurrentCVs")
        return true;
    return false;
}

SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalTable()
    :
    sonetsectionintervalentry(this, {"ifindex", "sonetsectionintervalnumber"})
{

    yang_name = "sonetSectionIntervalTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetSectionIntervalTable::~SonetSectionIntervalTable()
{
}

bool SONETMIB::SonetSectionIntervalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetsectionintervalentry.len(); index++)
    {
        if(sonetsectionintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetSectionIntervalTable::has_operation() const
{
    for (std::size_t index=0; index<sonetsectionintervalentry.len(); index++)
    {
        if(sonetsectionintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetSectionIntervalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetSectionIntervalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetSectionIntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetSectionIntervalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetSectionIntervalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetSectionIntervalEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry>();
        c->parent = this;
        sonetsectionintervalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetSectionIntervalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetsectionintervalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetSectionIntervalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetSectionIntervalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetSectionIntervalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetSectionIntervalEntry")
        return true;
    return false;
}

SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry::SonetSectionIntervalEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetsectionintervalnumber{YType::int32, "sonetSectionIntervalNumber"},
    sonetsectionintervaless{YType::uint32, "sonetSectionIntervalESs"},
    sonetsectionintervalsess{YType::uint32, "sonetSectionIntervalSESs"},
    sonetsectionintervalsefss{YType::uint32, "sonetSectionIntervalSEFSs"},
    sonetsectionintervalcvs{YType::uint32, "sonetSectionIntervalCVs"},
    sonetsectionintervalvaliddata{YType::boolean, "sonetSectionIntervalValidData"}
{

    yang_name = "sonetSectionIntervalEntry"; yang_parent_name = "sonetSectionIntervalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry::~SonetSectionIntervalEntry()
{
}

bool SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetsectionintervalnumber.is_set
	|| sonetsectionintervaless.is_set
	|| sonetsectionintervalsess.is_set
	|| sonetsectionintervalsefss.is_set
	|| sonetsectionintervalcvs.is_set
	|| sonetsectionintervalvaliddata.is_set;
}

bool SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetsectionintervalnumber.yfilter)
	|| ydk::is_set(sonetsectionintervaless.yfilter)
	|| ydk::is_set(sonetsectionintervalsess.yfilter)
	|| ydk::is_set(sonetsectionintervalsefss.yfilter)
	|| ydk::is_set(sonetsectionintervalcvs.yfilter)
	|| ydk::is_set(sonetsectionintervalvaliddata.yfilter);
}

std::string SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetSectionIntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetSectionIntervalEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(sonetsectionintervalnumber, "sonetSectionIntervalNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetsectionintervalnumber.is_set || is_set(sonetsectionintervalnumber.yfilter)) leaf_name_data.push_back(sonetsectionintervalnumber.get_name_leafdata());
    if (sonetsectionintervaless.is_set || is_set(sonetsectionintervaless.yfilter)) leaf_name_data.push_back(sonetsectionintervaless.get_name_leafdata());
    if (sonetsectionintervalsess.is_set || is_set(sonetsectionintervalsess.yfilter)) leaf_name_data.push_back(sonetsectionintervalsess.get_name_leafdata());
    if (sonetsectionintervalsefss.is_set || is_set(sonetsectionintervalsefss.yfilter)) leaf_name_data.push_back(sonetsectionintervalsefss.get_name_leafdata());
    if (sonetsectionintervalcvs.is_set || is_set(sonetsectionintervalcvs.yfilter)) leaf_name_data.push_back(sonetsectionintervalcvs.get_name_leafdata());
    if (sonetsectionintervalvaliddata.is_set || is_set(sonetsectionintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetsectionintervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionIntervalNumber")
    {
        sonetsectionintervalnumber = value;
        sonetsectionintervalnumber.value_namespace = name_space;
        sonetsectionintervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionIntervalESs")
    {
        sonetsectionintervaless = value;
        sonetsectionintervaless.value_namespace = name_space;
        sonetsectionintervaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionIntervalSESs")
    {
        sonetsectionintervalsess = value;
        sonetsectionintervalsess.value_namespace = name_space;
        sonetsectionintervalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionIntervalSEFSs")
    {
        sonetsectionintervalsefss = value;
        sonetsectionintervalsefss.value_namespace = name_space;
        sonetsectionintervalsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionIntervalCVs")
    {
        sonetsectionintervalcvs = value;
        sonetsectionintervalcvs.value_namespace = name_space;
        sonetsectionintervalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionIntervalValidData")
    {
        sonetsectionintervalvaliddata = value;
        sonetsectionintervalvaliddata.value_namespace = name_space;
        sonetsectionintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetSectionIntervalNumber")
    {
        sonetsectionintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetSectionIntervalESs")
    {
        sonetsectionintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetSectionIntervalSESs")
    {
        sonetsectionintervalsess.yfilter = yfilter;
    }
    if(value_path == "sonetSectionIntervalSEFSs")
    {
        sonetsectionintervalsefss.yfilter = yfilter;
    }
    if(value_path == "sonetSectionIntervalCVs")
    {
        sonetsectionintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetSectionIntervalValidData")
    {
        sonetsectionintervalvaliddata.yfilter = yfilter;
    }
}

bool SONETMIB::SonetSectionIntervalTable::SonetSectionIntervalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetSectionIntervalNumber" || name == "sonetSectionIntervalESs" || name == "sonetSectionIntervalSESs" || name == "sonetSectionIntervalSEFSs" || name == "sonetSectionIntervalCVs" || name == "sonetSectionIntervalValidData")
        return true;
    return false;
}

SONETMIB::SonetLineCurrentTable::SonetLineCurrentTable()
    :
    sonetlinecurrententry(this, {"ifindex"})
{

    yang_name = "sonetLineCurrentTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetLineCurrentTable::~SonetLineCurrentTable()
{
}

bool SONETMIB::SonetLineCurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetlinecurrententry.len(); index++)
    {
        if(sonetlinecurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetLineCurrentTable::has_operation() const
{
    for (std::size_t index=0; index<sonetlinecurrententry.len(); index++)
    {
        if(sonetlinecurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetLineCurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetLineCurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetLineCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetLineCurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetLineCurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetLineCurrentEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry>();
        c->parent = this;
        sonetlinecurrententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetLineCurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetlinecurrententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetLineCurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetLineCurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetLineCurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetLineCurrentEntry")
        return true;
    return false;
}

SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry::SonetLineCurrentEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetlinecurrentstatus{YType::int32, "sonetLineCurrentStatus"},
    sonetlinecurrentess{YType::uint32, "sonetLineCurrentESs"},
    sonetlinecurrentsess{YType::uint32, "sonetLineCurrentSESs"},
    sonetlinecurrentcvs{YType::uint32, "sonetLineCurrentCVs"},
    sonetlinecurrentuass{YType::uint32, "sonetLineCurrentUASs"}
{

    yang_name = "sonetLineCurrentEntry"; yang_parent_name = "sonetLineCurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry::~SonetLineCurrentEntry()
{
}

bool SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetlinecurrentstatus.is_set
	|| sonetlinecurrentess.is_set
	|| sonetlinecurrentsess.is_set
	|| sonetlinecurrentcvs.is_set
	|| sonetlinecurrentuass.is_set;
}

bool SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetlinecurrentstatus.yfilter)
	|| ydk::is_set(sonetlinecurrentess.yfilter)
	|| ydk::is_set(sonetlinecurrentsess.yfilter)
	|| ydk::is_set(sonetlinecurrentcvs.yfilter)
	|| ydk::is_set(sonetlinecurrentuass.yfilter);
}

std::string SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetLineCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetLineCurrentEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetlinecurrentstatus.is_set || is_set(sonetlinecurrentstatus.yfilter)) leaf_name_data.push_back(sonetlinecurrentstatus.get_name_leafdata());
    if (sonetlinecurrentess.is_set || is_set(sonetlinecurrentess.yfilter)) leaf_name_data.push_back(sonetlinecurrentess.get_name_leafdata());
    if (sonetlinecurrentsess.is_set || is_set(sonetlinecurrentsess.yfilter)) leaf_name_data.push_back(sonetlinecurrentsess.get_name_leafdata());
    if (sonetlinecurrentcvs.is_set || is_set(sonetlinecurrentcvs.yfilter)) leaf_name_data.push_back(sonetlinecurrentcvs.get_name_leafdata());
    if (sonetlinecurrentuass.is_set || is_set(sonetlinecurrentuass.yfilter)) leaf_name_data.push_back(sonetlinecurrentuass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineCurrentStatus")
    {
        sonetlinecurrentstatus = value;
        sonetlinecurrentstatus.value_namespace = name_space;
        sonetlinecurrentstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineCurrentESs")
    {
        sonetlinecurrentess = value;
        sonetlinecurrentess.value_namespace = name_space;
        sonetlinecurrentess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineCurrentSESs")
    {
        sonetlinecurrentsess = value;
        sonetlinecurrentsess.value_namespace = name_space;
        sonetlinecurrentsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineCurrentCVs")
    {
        sonetlinecurrentcvs = value;
        sonetlinecurrentcvs.value_namespace = name_space;
        sonetlinecurrentcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineCurrentUASs")
    {
        sonetlinecurrentuass = value;
        sonetlinecurrentuass.value_namespace = name_space;
        sonetlinecurrentuass.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetLineCurrentStatus")
    {
        sonetlinecurrentstatus.yfilter = yfilter;
    }
    if(value_path == "sonetLineCurrentESs")
    {
        sonetlinecurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetLineCurrentSESs")
    {
        sonetlinecurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetLineCurrentCVs")
    {
        sonetlinecurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetLineCurrentUASs")
    {
        sonetlinecurrentuass.yfilter = yfilter;
    }
}

bool SONETMIB::SonetLineCurrentTable::SonetLineCurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetLineCurrentStatus" || name == "sonetLineCurrentESs" || name == "sonetLineCurrentSESs" || name == "sonetLineCurrentCVs" || name == "sonetLineCurrentUASs")
        return true;
    return false;
}

SONETMIB::SonetLineIntervalTable::SonetLineIntervalTable()
    :
    sonetlineintervalentry(this, {"ifindex", "sonetlineintervalnumber"})
{

    yang_name = "sonetLineIntervalTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetLineIntervalTable::~SonetLineIntervalTable()
{
}

bool SONETMIB::SonetLineIntervalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetlineintervalentry.len(); index++)
    {
        if(sonetlineintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetLineIntervalTable::has_operation() const
{
    for (std::size_t index=0; index<sonetlineintervalentry.len(); index++)
    {
        if(sonetlineintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetLineIntervalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetLineIntervalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetLineIntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetLineIntervalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetLineIntervalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetLineIntervalEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry>();
        c->parent = this;
        sonetlineintervalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetLineIntervalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetlineintervalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetLineIntervalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetLineIntervalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetLineIntervalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetLineIntervalEntry")
        return true;
    return false;
}

SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry::SonetLineIntervalEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetlineintervalnumber{YType::int32, "sonetLineIntervalNumber"},
    sonetlineintervaless{YType::uint32, "sonetLineIntervalESs"},
    sonetlineintervalsess{YType::uint32, "sonetLineIntervalSESs"},
    sonetlineintervalcvs{YType::uint32, "sonetLineIntervalCVs"},
    sonetlineintervaluass{YType::uint32, "sonetLineIntervalUASs"},
    sonetlineintervalvaliddata{YType::boolean, "sonetLineIntervalValidData"}
{

    yang_name = "sonetLineIntervalEntry"; yang_parent_name = "sonetLineIntervalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry::~SonetLineIntervalEntry()
{
}

bool SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetlineintervalnumber.is_set
	|| sonetlineintervaless.is_set
	|| sonetlineintervalsess.is_set
	|| sonetlineintervalcvs.is_set
	|| sonetlineintervaluass.is_set
	|| sonetlineintervalvaliddata.is_set;
}

bool SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetlineintervalnumber.yfilter)
	|| ydk::is_set(sonetlineintervaless.yfilter)
	|| ydk::is_set(sonetlineintervalsess.yfilter)
	|| ydk::is_set(sonetlineintervalcvs.yfilter)
	|| ydk::is_set(sonetlineintervaluass.yfilter)
	|| ydk::is_set(sonetlineintervalvaliddata.yfilter);
}

std::string SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetLineIntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetLineIntervalEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(sonetlineintervalnumber, "sonetLineIntervalNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetlineintervalnumber.is_set || is_set(sonetlineintervalnumber.yfilter)) leaf_name_data.push_back(sonetlineintervalnumber.get_name_leafdata());
    if (sonetlineintervaless.is_set || is_set(sonetlineintervaless.yfilter)) leaf_name_data.push_back(sonetlineintervaless.get_name_leafdata());
    if (sonetlineintervalsess.is_set || is_set(sonetlineintervalsess.yfilter)) leaf_name_data.push_back(sonetlineintervalsess.get_name_leafdata());
    if (sonetlineintervalcvs.is_set || is_set(sonetlineintervalcvs.yfilter)) leaf_name_data.push_back(sonetlineintervalcvs.get_name_leafdata());
    if (sonetlineintervaluass.is_set || is_set(sonetlineintervaluass.yfilter)) leaf_name_data.push_back(sonetlineintervaluass.get_name_leafdata());
    if (sonetlineintervalvaliddata.is_set || is_set(sonetlineintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetlineintervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineIntervalNumber")
    {
        sonetlineintervalnumber = value;
        sonetlineintervalnumber.value_namespace = name_space;
        sonetlineintervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineIntervalESs")
    {
        sonetlineintervaless = value;
        sonetlineintervaless.value_namespace = name_space;
        sonetlineintervaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineIntervalSESs")
    {
        sonetlineintervalsess = value;
        sonetlineintervalsess.value_namespace = name_space;
        sonetlineintervalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineIntervalCVs")
    {
        sonetlineintervalcvs = value;
        sonetlineintervalcvs.value_namespace = name_space;
        sonetlineintervalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineIntervalUASs")
    {
        sonetlineintervaluass = value;
        sonetlineintervaluass.value_namespace = name_space;
        sonetlineintervaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineIntervalValidData")
    {
        sonetlineintervalvaliddata = value;
        sonetlineintervalvaliddata.value_namespace = name_space;
        sonetlineintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetLineIntervalNumber")
    {
        sonetlineintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetLineIntervalESs")
    {
        sonetlineintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetLineIntervalSESs")
    {
        sonetlineintervalsess.yfilter = yfilter;
    }
    if(value_path == "sonetLineIntervalCVs")
    {
        sonetlineintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetLineIntervalUASs")
    {
        sonetlineintervaluass.yfilter = yfilter;
    }
    if(value_path == "sonetLineIntervalValidData")
    {
        sonetlineintervalvaliddata.yfilter = yfilter;
    }
}

bool SONETMIB::SonetLineIntervalTable::SonetLineIntervalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetLineIntervalNumber" || name == "sonetLineIntervalESs" || name == "sonetLineIntervalSESs" || name == "sonetLineIntervalCVs" || name == "sonetLineIntervalUASs" || name == "sonetLineIntervalValidData")
        return true;
    return false;
}

SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentTable()
    :
    sonetfarendlinecurrententry(this, {"ifindex"})
{

    yang_name = "sonetFarEndLineCurrentTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetFarEndLineCurrentTable::~SonetFarEndLineCurrentTable()
{
}

bool SONETMIB::SonetFarEndLineCurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetfarendlinecurrententry.len(); index++)
    {
        if(sonetfarendlinecurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetFarEndLineCurrentTable::has_operation() const
{
    for (std::size_t index=0; index<sonetfarendlinecurrententry.len(); index++)
    {
        if(sonetfarendlinecurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetFarEndLineCurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetFarEndLineCurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndLineCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetFarEndLineCurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetFarEndLineCurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndLineCurrentEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry>();
        c->parent = this;
        sonetfarendlinecurrententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetFarEndLineCurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetfarendlinecurrententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetFarEndLineCurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetFarEndLineCurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetFarEndLineCurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndLineCurrentEntry")
        return true;
    return false;
}

SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry::SonetFarEndLineCurrentEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetfarendlinecurrentess{YType::uint32, "sonetFarEndLineCurrentESs"},
    sonetfarendlinecurrentsess{YType::uint32, "sonetFarEndLineCurrentSESs"},
    sonetfarendlinecurrentcvs{YType::uint32, "sonetFarEndLineCurrentCVs"},
    sonetfarendlinecurrentuass{YType::uint32, "sonetFarEndLineCurrentUASs"}
{

    yang_name = "sonetFarEndLineCurrentEntry"; yang_parent_name = "sonetFarEndLineCurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry::~SonetFarEndLineCurrentEntry()
{
}

bool SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetfarendlinecurrentess.is_set
	|| sonetfarendlinecurrentsess.is_set
	|| sonetfarendlinecurrentcvs.is_set
	|| sonetfarendlinecurrentuass.is_set;
}

bool SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetfarendlinecurrentess.yfilter)
	|| ydk::is_set(sonetfarendlinecurrentsess.yfilter)
	|| ydk::is_set(sonetfarendlinecurrentcvs.yfilter)
	|| ydk::is_set(sonetfarendlinecurrentuass.yfilter);
}

std::string SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetFarEndLineCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndLineCurrentEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetfarendlinecurrentess.is_set || is_set(sonetfarendlinecurrentess.yfilter)) leaf_name_data.push_back(sonetfarendlinecurrentess.get_name_leafdata());
    if (sonetfarendlinecurrentsess.is_set || is_set(sonetfarendlinecurrentsess.yfilter)) leaf_name_data.push_back(sonetfarendlinecurrentsess.get_name_leafdata());
    if (sonetfarendlinecurrentcvs.is_set || is_set(sonetfarendlinecurrentcvs.yfilter)) leaf_name_data.push_back(sonetfarendlinecurrentcvs.get_name_leafdata());
    if (sonetfarendlinecurrentuass.is_set || is_set(sonetfarendlinecurrentuass.yfilter)) leaf_name_data.push_back(sonetfarendlinecurrentuass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndLineCurrentESs")
    {
        sonetfarendlinecurrentess = value;
        sonetfarendlinecurrentess.value_namespace = name_space;
        sonetfarendlinecurrentess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndLineCurrentSESs")
    {
        sonetfarendlinecurrentsess = value;
        sonetfarendlinecurrentsess.value_namespace = name_space;
        sonetfarendlinecurrentsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndLineCurrentCVs")
    {
        sonetfarendlinecurrentcvs = value;
        sonetfarendlinecurrentcvs.value_namespace = name_space;
        sonetfarendlinecurrentcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndLineCurrentUASs")
    {
        sonetfarendlinecurrentuass = value;
        sonetfarendlinecurrentuass.value_namespace = name_space;
        sonetfarendlinecurrentuass.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineCurrentESs")
    {
        sonetfarendlinecurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineCurrentSESs")
    {
        sonetfarendlinecurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineCurrentCVs")
    {
        sonetfarendlinecurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineCurrentUASs")
    {
        sonetfarendlinecurrentuass.yfilter = yfilter;
    }
}

bool SONETMIB::SonetFarEndLineCurrentTable::SonetFarEndLineCurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetFarEndLineCurrentESs" || name == "sonetFarEndLineCurrentSESs" || name == "sonetFarEndLineCurrentCVs" || name == "sonetFarEndLineCurrentUASs")
        return true;
    return false;
}

SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalTable()
    :
    sonetfarendlineintervalentry(this, {"ifindex", "sonetfarendlineintervalnumber"})
{

    yang_name = "sonetFarEndLineIntervalTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetFarEndLineIntervalTable::~SonetFarEndLineIntervalTable()
{
}

bool SONETMIB::SonetFarEndLineIntervalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetfarendlineintervalentry.len(); index++)
    {
        if(sonetfarendlineintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetFarEndLineIntervalTable::has_operation() const
{
    for (std::size_t index=0; index<sonetfarendlineintervalentry.len(); index++)
    {
        if(sonetfarendlineintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetFarEndLineIntervalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetFarEndLineIntervalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndLineIntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetFarEndLineIntervalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetFarEndLineIntervalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndLineIntervalEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry>();
        c->parent = this;
        sonetfarendlineintervalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetFarEndLineIntervalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetfarendlineintervalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetFarEndLineIntervalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetFarEndLineIntervalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetFarEndLineIntervalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndLineIntervalEntry")
        return true;
    return false;
}

SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry::SonetFarEndLineIntervalEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetfarendlineintervalnumber{YType::int32, "sonetFarEndLineIntervalNumber"},
    sonetfarendlineintervaless{YType::uint32, "sonetFarEndLineIntervalESs"},
    sonetfarendlineintervalsess{YType::uint32, "sonetFarEndLineIntervalSESs"},
    sonetfarendlineintervalcvs{YType::uint32, "sonetFarEndLineIntervalCVs"},
    sonetfarendlineintervaluass{YType::uint32, "sonetFarEndLineIntervalUASs"},
    sonetfarendlineintervalvaliddata{YType::boolean, "sonetFarEndLineIntervalValidData"}
{

    yang_name = "sonetFarEndLineIntervalEntry"; yang_parent_name = "sonetFarEndLineIntervalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry::~SonetFarEndLineIntervalEntry()
{
}

bool SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetfarendlineintervalnumber.is_set
	|| sonetfarendlineintervaless.is_set
	|| sonetfarendlineintervalsess.is_set
	|| sonetfarendlineintervalcvs.is_set
	|| sonetfarendlineintervaluass.is_set
	|| sonetfarendlineintervalvaliddata.is_set;
}

bool SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetfarendlineintervalnumber.yfilter)
	|| ydk::is_set(sonetfarendlineintervaless.yfilter)
	|| ydk::is_set(sonetfarendlineintervalsess.yfilter)
	|| ydk::is_set(sonetfarendlineintervalcvs.yfilter)
	|| ydk::is_set(sonetfarendlineintervaluass.yfilter)
	|| ydk::is_set(sonetfarendlineintervalvaliddata.yfilter);
}

std::string SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetFarEndLineIntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndLineIntervalEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(sonetfarendlineintervalnumber, "sonetFarEndLineIntervalNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetfarendlineintervalnumber.is_set || is_set(sonetfarendlineintervalnumber.yfilter)) leaf_name_data.push_back(sonetfarendlineintervalnumber.get_name_leafdata());
    if (sonetfarendlineintervaless.is_set || is_set(sonetfarendlineintervaless.yfilter)) leaf_name_data.push_back(sonetfarendlineintervaless.get_name_leafdata());
    if (sonetfarendlineintervalsess.is_set || is_set(sonetfarendlineintervalsess.yfilter)) leaf_name_data.push_back(sonetfarendlineintervalsess.get_name_leafdata());
    if (sonetfarendlineintervalcvs.is_set || is_set(sonetfarendlineintervalcvs.yfilter)) leaf_name_data.push_back(sonetfarendlineintervalcvs.get_name_leafdata());
    if (sonetfarendlineintervaluass.is_set || is_set(sonetfarendlineintervaluass.yfilter)) leaf_name_data.push_back(sonetfarendlineintervaluass.get_name_leafdata());
    if (sonetfarendlineintervalvaliddata.is_set || is_set(sonetfarendlineintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetfarendlineintervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndLineIntervalNumber")
    {
        sonetfarendlineintervalnumber = value;
        sonetfarendlineintervalnumber.value_namespace = name_space;
        sonetfarendlineintervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndLineIntervalESs")
    {
        sonetfarendlineintervaless = value;
        sonetfarendlineintervaless.value_namespace = name_space;
        sonetfarendlineintervaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndLineIntervalSESs")
    {
        sonetfarendlineintervalsess = value;
        sonetfarendlineintervalsess.value_namespace = name_space;
        sonetfarendlineintervalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndLineIntervalCVs")
    {
        sonetfarendlineintervalcvs = value;
        sonetfarendlineintervalcvs.value_namespace = name_space;
        sonetfarendlineintervalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndLineIntervalUASs")
    {
        sonetfarendlineintervaluass = value;
        sonetfarendlineintervaluass.value_namespace = name_space;
        sonetfarendlineintervaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndLineIntervalValidData")
    {
        sonetfarendlineintervalvaliddata = value;
        sonetfarendlineintervalvaliddata.value_namespace = name_space;
        sonetfarendlineintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineIntervalNumber")
    {
        sonetfarendlineintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineIntervalESs")
    {
        sonetfarendlineintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineIntervalSESs")
    {
        sonetfarendlineintervalsess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineIntervalCVs")
    {
        sonetfarendlineintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineIntervalUASs")
    {
        sonetfarendlineintervaluass.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineIntervalValidData")
    {
        sonetfarendlineintervalvaliddata.yfilter = yfilter;
    }
}

bool SONETMIB::SonetFarEndLineIntervalTable::SonetFarEndLineIntervalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetFarEndLineIntervalNumber" || name == "sonetFarEndLineIntervalESs" || name == "sonetFarEndLineIntervalSESs" || name == "sonetFarEndLineIntervalCVs" || name == "sonetFarEndLineIntervalUASs" || name == "sonetFarEndLineIntervalValidData")
        return true;
    return false;
}

SONETMIB::SonetPathCurrentTable::SonetPathCurrentTable()
    :
    sonetpathcurrententry(this, {"ifindex"})
{

    yang_name = "sonetPathCurrentTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetPathCurrentTable::~SonetPathCurrentTable()
{
}

bool SONETMIB::SonetPathCurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetpathcurrententry.len(); index++)
    {
        if(sonetpathcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetPathCurrentTable::has_operation() const
{
    for (std::size_t index=0; index<sonetpathcurrententry.len(); index++)
    {
        if(sonetpathcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetPathCurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetPathCurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetPathCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetPathCurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetPathCurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetPathCurrentEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry>();
        c->parent = this;
        sonetpathcurrententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetPathCurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetpathcurrententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetPathCurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetPathCurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetPathCurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetPathCurrentEntry")
        return true;
    return false;
}

SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::SonetPathCurrentEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetpathcurrentwidth{YType::enumeration, "sonetPathCurrentWidth"},
    sonetpathcurrentstatus{YType::int32, "sonetPathCurrentStatus"},
    sonetpathcurrentess{YType::uint32, "sonetPathCurrentESs"},
    sonetpathcurrentsess{YType::uint32, "sonetPathCurrentSESs"},
    sonetpathcurrentcvs{YType::uint32, "sonetPathCurrentCVs"},
    sonetpathcurrentuass{YType::uint32, "sonetPathCurrentUASs"},
    cspsonetpathpayload{YType::enumeration, "CISCO-SONET-MIB:cspSonetPathPayload"},
    csptributarymappingtype{YType::enumeration, "CISCO-SONET-MIB:cspTributaryMappingType"},
    cspsignallingtransportmode{YType::enumeration, "CISCO-SONET-MIB:cspSignallingTransportMode"},
    csptributarygroupingtype{YType::enumeration, "CISCO-SONET-MIB:cspTributaryGroupingType"}
{

    yang_name = "sonetPathCurrentEntry"; yang_parent_name = "sonetPathCurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::~SonetPathCurrentEntry()
{
}

bool SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetpathcurrentwidth.is_set
	|| sonetpathcurrentstatus.is_set
	|| sonetpathcurrentess.is_set
	|| sonetpathcurrentsess.is_set
	|| sonetpathcurrentcvs.is_set
	|| sonetpathcurrentuass.is_set
	|| cspsonetpathpayload.is_set
	|| csptributarymappingtype.is_set
	|| cspsignallingtransportmode.is_set
	|| csptributarygroupingtype.is_set;
}

bool SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetpathcurrentwidth.yfilter)
	|| ydk::is_set(sonetpathcurrentstatus.yfilter)
	|| ydk::is_set(sonetpathcurrentess.yfilter)
	|| ydk::is_set(sonetpathcurrentsess.yfilter)
	|| ydk::is_set(sonetpathcurrentcvs.yfilter)
	|| ydk::is_set(sonetpathcurrentuass.yfilter)
	|| ydk::is_set(cspsonetpathpayload.yfilter)
	|| ydk::is_set(csptributarymappingtype.yfilter)
	|| ydk::is_set(cspsignallingtransportmode.yfilter)
	|| ydk::is_set(csptributarygroupingtype.yfilter);
}

std::string SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetPathCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetPathCurrentEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetpathcurrentwidth.is_set || is_set(sonetpathcurrentwidth.yfilter)) leaf_name_data.push_back(sonetpathcurrentwidth.get_name_leafdata());
    if (sonetpathcurrentstatus.is_set || is_set(sonetpathcurrentstatus.yfilter)) leaf_name_data.push_back(sonetpathcurrentstatus.get_name_leafdata());
    if (sonetpathcurrentess.is_set || is_set(sonetpathcurrentess.yfilter)) leaf_name_data.push_back(sonetpathcurrentess.get_name_leafdata());
    if (sonetpathcurrentsess.is_set || is_set(sonetpathcurrentsess.yfilter)) leaf_name_data.push_back(sonetpathcurrentsess.get_name_leafdata());
    if (sonetpathcurrentcvs.is_set || is_set(sonetpathcurrentcvs.yfilter)) leaf_name_data.push_back(sonetpathcurrentcvs.get_name_leafdata());
    if (sonetpathcurrentuass.is_set || is_set(sonetpathcurrentuass.yfilter)) leaf_name_data.push_back(sonetpathcurrentuass.get_name_leafdata());
    if (cspsonetpathpayload.is_set || is_set(cspsonetpathpayload.yfilter)) leaf_name_data.push_back(cspsonetpathpayload.get_name_leafdata());
    if (csptributarymappingtype.is_set || is_set(csptributarymappingtype.yfilter)) leaf_name_data.push_back(csptributarymappingtype.get_name_leafdata());
    if (cspsignallingtransportmode.is_set || is_set(cspsignallingtransportmode.yfilter)) leaf_name_data.push_back(cspsignallingtransportmode.get_name_leafdata());
    if (csptributarygroupingtype.is_set || is_set(csptributarygroupingtype.yfilter)) leaf_name_data.push_back(csptributarygroupingtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathCurrentWidth")
    {
        sonetpathcurrentwidth = value;
        sonetpathcurrentwidth.value_namespace = name_space;
        sonetpathcurrentwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathCurrentStatus")
    {
        sonetpathcurrentstatus = value;
        sonetpathcurrentstatus.value_namespace = name_space;
        sonetpathcurrentstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathCurrentESs")
    {
        sonetpathcurrentess = value;
        sonetpathcurrentess.value_namespace = name_space;
        sonetpathcurrentess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathCurrentSESs")
    {
        sonetpathcurrentsess = value;
        sonetpathcurrentsess.value_namespace = name_space;
        sonetpathcurrentsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathCurrentCVs")
    {
        sonetpathcurrentcvs = value;
        sonetpathcurrentcvs.value_namespace = name_space;
        sonetpathcurrentcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathCurrentUASs")
    {
        sonetpathcurrentuass = value;
        sonetpathcurrentuass.value_namespace = name_space;
        sonetpathcurrentuass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-SONET-MIB:cspSonetPathPayload")
    {
        cspsonetpathpayload = value;
        cspsonetpathpayload.value_namespace = name_space;
        cspsonetpathpayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-SONET-MIB:cspTributaryMappingType")
    {
        csptributarymappingtype = value;
        csptributarymappingtype.value_namespace = name_space;
        csptributarymappingtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-SONET-MIB:cspSignallingTransportMode")
    {
        cspsignallingtransportmode = value;
        cspsignallingtransportmode.value_namespace = name_space;
        cspsignallingtransportmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-SONET-MIB:cspTributaryGroupingType")
    {
        csptributarygroupingtype = value;
        csptributarygroupingtype.value_namespace = name_space;
        csptributarygroupingtype.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetPathCurrentWidth")
    {
        sonetpathcurrentwidth.yfilter = yfilter;
    }
    if(value_path == "sonetPathCurrentStatus")
    {
        sonetpathcurrentstatus.yfilter = yfilter;
    }
    if(value_path == "sonetPathCurrentESs")
    {
        sonetpathcurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetPathCurrentSESs")
    {
        sonetpathcurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetPathCurrentCVs")
    {
        sonetpathcurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetPathCurrentUASs")
    {
        sonetpathcurrentuass.yfilter = yfilter;
    }
    if(value_path == "cspSonetPathPayload")
    {
        cspsonetpathpayload.yfilter = yfilter;
    }
    if(value_path == "cspTributaryMappingType")
    {
        csptributarymappingtype.yfilter = yfilter;
    }
    if(value_path == "cspSignallingTransportMode")
    {
        cspsignallingtransportmode.yfilter = yfilter;
    }
    if(value_path == "cspTributaryGroupingType")
    {
        csptributarygroupingtype.yfilter = yfilter;
    }
}

bool SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetPathCurrentWidth" || name == "sonetPathCurrentStatus" || name == "sonetPathCurrentESs" || name == "sonetPathCurrentSESs" || name == "sonetPathCurrentCVs" || name == "sonetPathCurrentUASs" || name == "cspSonetPathPayload" || name == "cspTributaryMappingType" || name == "cspSignallingTransportMode" || name == "cspTributaryGroupingType")
        return true;
    return false;
}

SONETMIB::SonetPathIntervalTable::SonetPathIntervalTable()
    :
    sonetpathintervalentry(this, {"ifindex", "sonetpathintervalnumber"})
{

    yang_name = "sonetPathIntervalTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetPathIntervalTable::~SonetPathIntervalTable()
{
}

bool SONETMIB::SonetPathIntervalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetpathintervalentry.len(); index++)
    {
        if(sonetpathintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetPathIntervalTable::has_operation() const
{
    for (std::size_t index=0; index<sonetpathintervalentry.len(); index++)
    {
        if(sonetpathintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetPathIntervalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetPathIntervalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetPathIntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetPathIntervalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetPathIntervalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetPathIntervalEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry>();
        c->parent = this;
        sonetpathintervalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetPathIntervalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetpathintervalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetPathIntervalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetPathIntervalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetPathIntervalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetPathIntervalEntry")
        return true;
    return false;
}

SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry::SonetPathIntervalEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetpathintervalnumber{YType::int32, "sonetPathIntervalNumber"},
    sonetpathintervaless{YType::uint32, "sonetPathIntervalESs"},
    sonetpathintervalsess{YType::uint32, "sonetPathIntervalSESs"},
    sonetpathintervalcvs{YType::uint32, "sonetPathIntervalCVs"},
    sonetpathintervaluass{YType::uint32, "sonetPathIntervalUASs"},
    sonetpathintervalvaliddata{YType::boolean, "sonetPathIntervalValidData"}
{

    yang_name = "sonetPathIntervalEntry"; yang_parent_name = "sonetPathIntervalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry::~SonetPathIntervalEntry()
{
}

bool SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetpathintervalnumber.is_set
	|| sonetpathintervaless.is_set
	|| sonetpathintervalsess.is_set
	|| sonetpathintervalcvs.is_set
	|| sonetpathintervaluass.is_set
	|| sonetpathintervalvaliddata.is_set;
}

bool SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetpathintervalnumber.yfilter)
	|| ydk::is_set(sonetpathintervaless.yfilter)
	|| ydk::is_set(sonetpathintervalsess.yfilter)
	|| ydk::is_set(sonetpathintervalcvs.yfilter)
	|| ydk::is_set(sonetpathintervaluass.yfilter)
	|| ydk::is_set(sonetpathintervalvaliddata.yfilter);
}

std::string SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetPathIntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetPathIntervalEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(sonetpathintervalnumber, "sonetPathIntervalNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetpathintervalnumber.is_set || is_set(sonetpathintervalnumber.yfilter)) leaf_name_data.push_back(sonetpathintervalnumber.get_name_leafdata());
    if (sonetpathintervaless.is_set || is_set(sonetpathintervaless.yfilter)) leaf_name_data.push_back(sonetpathintervaless.get_name_leafdata());
    if (sonetpathintervalsess.is_set || is_set(sonetpathintervalsess.yfilter)) leaf_name_data.push_back(sonetpathintervalsess.get_name_leafdata());
    if (sonetpathintervalcvs.is_set || is_set(sonetpathintervalcvs.yfilter)) leaf_name_data.push_back(sonetpathintervalcvs.get_name_leafdata());
    if (sonetpathintervaluass.is_set || is_set(sonetpathintervaluass.yfilter)) leaf_name_data.push_back(sonetpathintervaluass.get_name_leafdata());
    if (sonetpathintervalvaliddata.is_set || is_set(sonetpathintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetpathintervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathIntervalNumber")
    {
        sonetpathintervalnumber = value;
        sonetpathintervalnumber.value_namespace = name_space;
        sonetpathintervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathIntervalESs")
    {
        sonetpathintervaless = value;
        sonetpathintervaless.value_namespace = name_space;
        sonetpathintervaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathIntervalSESs")
    {
        sonetpathintervalsess = value;
        sonetpathintervalsess.value_namespace = name_space;
        sonetpathintervalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathIntervalCVs")
    {
        sonetpathintervalcvs = value;
        sonetpathintervalcvs.value_namespace = name_space;
        sonetpathintervalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathIntervalUASs")
    {
        sonetpathintervaluass = value;
        sonetpathintervaluass.value_namespace = name_space;
        sonetpathintervaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathIntervalValidData")
    {
        sonetpathintervalvaliddata = value;
        sonetpathintervalvaliddata.value_namespace = name_space;
        sonetpathintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetPathIntervalNumber")
    {
        sonetpathintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetPathIntervalESs")
    {
        sonetpathintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetPathIntervalSESs")
    {
        sonetpathintervalsess.yfilter = yfilter;
    }
    if(value_path == "sonetPathIntervalCVs")
    {
        sonetpathintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetPathIntervalUASs")
    {
        sonetpathintervaluass.yfilter = yfilter;
    }
    if(value_path == "sonetPathIntervalValidData")
    {
        sonetpathintervalvaliddata.yfilter = yfilter;
    }
}

bool SONETMIB::SonetPathIntervalTable::SonetPathIntervalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetPathIntervalNumber" || name == "sonetPathIntervalESs" || name == "sonetPathIntervalSESs" || name == "sonetPathIntervalCVs" || name == "sonetPathIntervalUASs" || name == "sonetPathIntervalValidData")
        return true;
    return false;
}

SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentTable()
    :
    sonetfarendpathcurrententry(this, {"ifindex"})
{

    yang_name = "sonetFarEndPathCurrentTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetFarEndPathCurrentTable::~SonetFarEndPathCurrentTable()
{
}

bool SONETMIB::SonetFarEndPathCurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetfarendpathcurrententry.len(); index++)
    {
        if(sonetfarendpathcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetFarEndPathCurrentTable::has_operation() const
{
    for (std::size_t index=0; index<sonetfarendpathcurrententry.len(); index++)
    {
        if(sonetfarendpathcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetFarEndPathCurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetFarEndPathCurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndPathCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetFarEndPathCurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetFarEndPathCurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndPathCurrentEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry>();
        c->parent = this;
        sonetfarendpathcurrententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetFarEndPathCurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetfarendpathcurrententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetFarEndPathCurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetFarEndPathCurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetFarEndPathCurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndPathCurrentEntry")
        return true;
    return false;
}

SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry::SonetFarEndPathCurrentEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetfarendpathcurrentess{YType::uint32, "sonetFarEndPathCurrentESs"},
    sonetfarendpathcurrentsess{YType::uint32, "sonetFarEndPathCurrentSESs"},
    sonetfarendpathcurrentcvs{YType::uint32, "sonetFarEndPathCurrentCVs"},
    sonetfarendpathcurrentuass{YType::uint32, "sonetFarEndPathCurrentUASs"}
{

    yang_name = "sonetFarEndPathCurrentEntry"; yang_parent_name = "sonetFarEndPathCurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry::~SonetFarEndPathCurrentEntry()
{
}

bool SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetfarendpathcurrentess.is_set
	|| sonetfarendpathcurrentsess.is_set
	|| sonetfarendpathcurrentcvs.is_set
	|| sonetfarendpathcurrentuass.is_set;
}

bool SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetfarendpathcurrentess.yfilter)
	|| ydk::is_set(sonetfarendpathcurrentsess.yfilter)
	|| ydk::is_set(sonetfarendpathcurrentcvs.yfilter)
	|| ydk::is_set(sonetfarendpathcurrentuass.yfilter);
}

std::string SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetFarEndPathCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndPathCurrentEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetfarendpathcurrentess.is_set || is_set(sonetfarendpathcurrentess.yfilter)) leaf_name_data.push_back(sonetfarendpathcurrentess.get_name_leafdata());
    if (sonetfarendpathcurrentsess.is_set || is_set(sonetfarendpathcurrentsess.yfilter)) leaf_name_data.push_back(sonetfarendpathcurrentsess.get_name_leafdata());
    if (sonetfarendpathcurrentcvs.is_set || is_set(sonetfarendpathcurrentcvs.yfilter)) leaf_name_data.push_back(sonetfarendpathcurrentcvs.get_name_leafdata());
    if (sonetfarendpathcurrentuass.is_set || is_set(sonetfarendpathcurrentuass.yfilter)) leaf_name_data.push_back(sonetfarendpathcurrentuass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndPathCurrentESs")
    {
        sonetfarendpathcurrentess = value;
        sonetfarendpathcurrentess.value_namespace = name_space;
        sonetfarendpathcurrentess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndPathCurrentSESs")
    {
        sonetfarendpathcurrentsess = value;
        sonetfarendpathcurrentsess.value_namespace = name_space;
        sonetfarendpathcurrentsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndPathCurrentCVs")
    {
        sonetfarendpathcurrentcvs = value;
        sonetfarendpathcurrentcvs.value_namespace = name_space;
        sonetfarendpathcurrentcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndPathCurrentUASs")
    {
        sonetfarendpathcurrentuass = value;
        sonetfarendpathcurrentuass.value_namespace = name_space;
        sonetfarendpathcurrentuass.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathCurrentESs")
    {
        sonetfarendpathcurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathCurrentSESs")
    {
        sonetfarendpathcurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathCurrentCVs")
    {
        sonetfarendpathcurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathCurrentUASs")
    {
        sonetfarendpathcurrentuass.yfilter = yfilter;
    }
}

bool SONETMIB::SonetFarEndPathCurrentTable::SonetFarEndPathCurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetFarEndPathCurrentESs" || name == "sonetFarEndPathCurrentSESs" || name == "sonetFarEndPathCurrentCVs" || name == "sonetFarEndPathCurrentUASs")
        return true;
    return false;
}

SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalTable()
    :
    sonetfarendpathintervalentry(this, {"ifindex", "sonetfarendpathintervalnumber"})
{

    yang_name = "sonetFarEndPathIntervalTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetFarEndPathIntervalTable::~SonetFarEndPathIntervalTable()
{
}

bool SONETMIB::SonetFarEndPathIntervalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetfarendpathintervalentry.len(); index++)
    {
        if(sonetfarendpathintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetFarEndPathIntervalTable::has_operation() const
{
    for (std::size_t index=0; index<sonetfarendpathintervalentry.len(); index++)
    {
        if(sonetfarendpathintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetFarEndPathIntervalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetFarEndPathIntervalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndPathIntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetFarEndPathIntervalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetFarEndPathIntervalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndPathIntervalEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry>();
        c->parent = this;
        sonetfarendpathintervalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetFarEndPathIntervalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetfarendpathintervalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetFarEndPathIntervalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetFarEndPathIntervalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetFarEndPathIntervalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndPathIntervalEntry")
        return true;
    return false;
}

SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry::SonetFarEndPathIntervalEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetfarendpathintervalnumber{YType::int32, "sonetFarEndPathIntervalNumber"},
    sonetfarendpathintervaless{YType::uint32, "sonetFarEndPathIntervalESs"},
    sonetfarendpathintervalsess{YType::uint32, "sonetFarEndPathIntervalSESs"},
    sonetfarendpathintervalcvs{YType::uint32, "sonetFarEndPathIntervalCVs"},
    sonetfarendpathintervaluass{YType::uint32, "sonetFarEndPathIntervalUASs"},
    sonetfarendpathintervalvaliddata{YType::boolean, "sonetFarEndPathIntervalValidData"}
{

    yang_name = "sonetFarEndPathIntervalEntry"; yang_parent_name = "sonetFarEndPathIntervalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry::~SonetFarEndPathIntervalEntry()
{
}

bool SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetfarendpathintervalnumber.is_set
	|| sonetfarendpathintervaless.is_set
	|| sonetfarendpathintervalsess.is_set
	|| sonetfarendpathintervalcvs.is_set
	|| sonetfarendpathintervaluass.is_set
	|| sonetfarendpathintervalvaliddata.is_set;
}

bool SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetfarendpathintervalnumber.yfilter)
	|| ydk::is_set(sonetfarendpathintervaless.yfilter)
	|| ydk::is_set(sonetfarendpathintervalsess.yfilter)
	|| ydk::is_set(sonetfarendpathintervalcvs.yfilter)
	|| ydk::is_set(sonetfarendpathintervaluass.yfilter)
	|| ydk::is_set(sonetfarendpathintervalvaliddata.yfilter);
}

std::string SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetFarEndPathIntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndPathIntervalEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(sonetfarendpathintervalnumber, "sonetFarEndPathIntervalNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetfarendpathintervalnumber.is_set || is_set(sonetfarendpathintervalnumber.yfilter)) leaf_name_data.push_back(sonetfarendpathintervalnumber.get_name_leafdata());
    if (sonetfarendpathintervaless.is_set || is_set(sonetfarendpathintervaless.yfilter)) leaf_name_data.push_back(sonetfarendpathintervaless.get_name_leafdata());
    if (sonetfarendpathintervalsess.is_set || is_set(sonetfarendpathintervalsess.yfilter)) leaf_name_data.push_back(sonetfarendpathintervalsess.get_name_leafdata());
    if (sonetfarendpathintervalcvs.is_set || is_set(sonetfarendpathintervalcvs.yfilter)) leaf_name_data.push_back(sonetfarendpathintervalcvs.get_name_leafdata());
    if (sonetfarendpathintervaluass.is_set || is_set(sonetfarendpathintervaluass.yfilter)) leaf_name_data.push_back(sonetfarendpathintervaluass.get_name_leafdata());
    if (sonetfarendpathintervalvaliddata.is_set || is_set(sonetfarendpathintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetfarendpathintervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndPathIntervalNumber")
    {
        sonetfarendpathintervalnumber = value;
        sonetfarendpathintervalnumber.value_namespace = name_space;
        sonetfarendpathintervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndPathIntervalESs")
    {
        sonetfarendpathintervaless = value;
        sonetfarendpathintervaless.value_namespace = name_space;
        sonetfarendpathintervaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndPathIntervalSESs")
    {
        sonetfarendpathintervalsess = value;
        sonetfarendpathintervalsess.value_namespace = name_space;
        sonetfarendpathintervalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndPathIntervalCVs")
    {
        sonetfarendpathintervalcvs = value;
        sonetfarendpathintervalcvs.value_namespace = name_space;
        sonetfarendpathintervalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndPathIntervalUASs")
    {
        sonetfarendpathintervaluass = value;
        sonetfarendpathintervaluass.value_namespace = name_space;
        sonetfarendpathintervaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndPathIntervalValidData")
    {
        sonetfarendpathintervalvaliddata = value;
        sonetfarendpathintervalvaliddata.value_namespace = name_space;
        sonetfarendpathintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathIntervalNumber")
    {
        sonetfarendpathintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathIntervalESs")
    {
        sonetfarendpathintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathIntervalSESs")
    {
        sonetfarendpathintervalsess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathIntervalCVs")
    {
        sonetfarendpathintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathIntervalUASs")
    {
        sonetfarendpathintervaluass.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathIntervalValidData")
    {
        sonetfarendpathintervalvaliddata.yfilter = yfilter;
    }
}

bool SONETMIB::SonetFarEndPathIntervalTable::SonetFarEndPathIntervalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetFarEndPathIntervalNumber" || name == "sonetFarEndPathIntervalESs" || name == "sonetFarEndPathIntervalSESs" || name == "sonetFarEndPathIntervalCVs" || name == "sonetFarEndPathIntervalUASs" || name == "sonetFarEndPathIntervalValidData")
        return true;
    return false;
}

SONETMIB::SonetVTCurrentTable::SonetVTCurrentTable()
    :
    sonetvtcurrententry(this, {"ifindex"})
{

    yang_name = "sonetVTCurrentTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetVTCurrentTable::~SonetVTCurrentTable()
{
}

bool SONETMIB::SonetVTCurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetvtcurrententry.len(); index++)
    {
        if(sonetvtcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetVTCurrentTable::has_operation() const
{
    for (std::size_t index=0; index<sonetvtcurrententry.len(); index++)
    {
        if(sonetvtcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetVTCurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetVTCurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetVTCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetVTCurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetVTCurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetVTCurrentEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry>();
        c->parent = this;
        sonetvtcurrententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetVTCurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetvtcurrententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetVTCurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetVTCurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetVTCurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetVTCurrentEntry")
        return true;
    return false;
}

SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::SonetVTCurrentEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetvtcurrentwidth{YType::enumeration, "sonetVTCurrentWidth"},
    sonetvtcurrentstatus{YType::int32, "sonetVTCurrentStatus"},
    sonetvtcurrentess{YType::uint32, "sonetVTCurrentESs"},
    sonetvtcurrentsess{YType::uint32, "sonetVTCurrentSESs"},
    sonetvtcurrentcvs{YType::uint32, "sonetVTCurrentCVs"},
    sonetvtcurrentuass{YType::uint32, "sonetVTCurrentUASs"}
{

    yang_name = "sonetVTCurrentEntry"; yang_parent_name = "sonetVTCurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::~SonetVTCurrentEntry()
{
}

bool SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetvtcurrentwidth.is_set
	|| sonetvtcurrentstatus.is_set
	|| sonetvtcurrentess.is_set
	|| sonetvtcurrentsess.is_set
	|| sonetvtcurrentcvs.is_set
	|| sonetvtcurrentuass.is_set;
}

bool SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetvtcurrentwidth.yfilter)
	|| ydk::is_set(sonetvtcurrentstatus.yfilter)
	|| ydk::is_set(sonetvtcurrentess.yfilter)
	|| ydk::is_set(sonetvtcurrentsess.yfilter)
	|| ydk::is_set(sonetvtcurrentcvs.yfilter)
	|| ydk::is_set(sonetvtcurrentuass.yfilter);
}

std::string SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetVTCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetVTCurrentEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetvtcurrentwidth.is_set || is_set(sonetvtcurrentwidth.yfilter)) leaf_name_data.push_back(sonetvtcurrentwidth.get_name_leafdata());
    if (sonetvtcurrentstatus.is_set || is_set(sonetvtcurrentstatus.yfilter)) leaf_name_data.push_back(sonetvtcurrentstatus.get_name_leafdata());
    if (sonetvtcurrentess.is_set || is_set(sonetvtcurrentess.yfilter)) leaf_name_data.push_back(sonetvtcurrentess.get_name_leafdata());
    if (sonetvtcurrentsess.is_set || is_set(sonetvtcurrentsess.yfilter)) leaf_name_data.push_back(sonetvtcurrentsess.get_name_leafdata());
    if (sonetvtcurrentcvs.is_set || is_set(sonetvtcurrentcvs.yfilter)) leaf_name_data.push_back(sonetvtcurrentcvs.get_name_leafdata());
    if (sonetvtcurrentuass.is_set || is_set(sonetvtcurrentuass.yfilter)) leaf_name_data.push_back(sonetvtcurrentuass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTCurrentWidth")
    {
        sonetvtcurrentwidth = value;
        sonetvtcurrentwidth.value_namespace = name_space;
        sonetvtcurrentwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTCurrentStatus")
    {
        sonetvtcurrentstatus = value;
        sonetvtcurrentstatus.value_namespace = name_space;
        sonetvtcurrentstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTCurrentESs")
    {
        sonetvtcurrentess = value;
        sonetvtcurrentess.value_namespace = name_space;
        sonetvtcurrentess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTCurrentSESs")
    {
        sonetvtcurrentsess = value;
        sonetvtcurrentsess.value_namespace = name_space;
        sonetvtcurrentsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTCurrentCVs")
    {
        sonetvtcurrentcvs = value;
        sonetvtcurrentcvs.value_namespace = name_space;
        sonetvtcurrentcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTCurrentUASs")
    {
        sonetvtcurrentuass = value;
        sonetvtcurrentuass.value_namespace = name_space;
        sonetvtcurrentuass.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetVTCurrentWidth")
    {
        sonetvtcurrentwidth.yfilter = yfilter;
    }
    if(value_path == "sonetVTCurrentStatus")
    {
        sonetvtcurrentstatus.yfilter = yfilter;
    }
    if(value_path == "sonetVTCurrentESs")
    {
        sonetvtcurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetVTCurrentSESs")
    {
        sonetvtcurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetVTCurrentCVs")
    {
        sonetvtcurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetVTCurrentUASs")
    {
        sonetvtcurrentuass.yfilter = yfilter;
    }
}

bool SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetVTCurrentWidth" || name == "sonetVTCurrentStatus" || name == "sonetVTCurrentESs" || name == "sonetVTCurrentSESs" || name == "sonetVTCurrentCVs" || name == "sonetVTCurrentUASs")
        return true;
    return false;
}

SONETMIB::SonetVTIntervalTable::SonetVTIntervalTable()
    :
    sonetvtintervalentry(this, {"ifindex", "sonetvtintervalnumber"})
{

    yang_name = "sonetVTIntervalTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetVTIntervalTable::~SonetVTIntervalTable()
{
}

bool SONETMIB::SonetVTIntervalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetvtintervalentry.len(); index++)
    {
        if(sonetvtintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetVTIntervalTable::has_operation() const
{
    for (std::size_t index=0; index<sonetvtintervalentry.len(); index++)
    {
        if(sonetvtintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetVTIntervalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetVTIntervalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetVTIntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetVTIntervalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetVTIntervalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetVTIntervalEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry>();
        c->parent = this;
        sonetvtintervalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetVTIntervalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetvtintervalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetVTIntervalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetVTIntervalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetVTIntervalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetVTIntervalEntry")
        return true;
    return false;
}

SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry::SonetVTIntervalEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetvtintervalnumber{YType::int32, "sonetVTIntervalNumber"},
    sonetvtintervaless{YType::uint32, "sonetVTIntervalESs"},
    sonetvtintervalsess{YType::uint32, "sonetVTIntervalSESs"},
    sonetvtintervalcvs{YType::uint32, "sonetVTIntervalCVs"},
    sonetvtintervaluass{YType::uint32, "sonetVTIntervalUASs"},
    sonetvtintervalvaliddata{YType::boolean, "sonetVTIntervalValidData"}
{

    yang_name = "sonetVTIntervalEntry"; yang_parent_name = "sonetVTIntervalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry::~SonetVTIntervalEntry()
{
}

bool SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetvtintervalnumber.is_set
	|| sonetvtintervaless.is_set
	|| sonetvtintervalsess.is_set
	|| sonetvtintervalcvs.is_set
	|| sonetvtintervaluass.is_set
	|| sonetvtintervalvaliddata.is_set;
}

bool SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetvtintervalnumber.yfilter)
	|| ydk::is_set(sonetvtintervaless.yfilter)
	|| ydk::is_set(sonetvtintervalsess.yfilter)
	|| ydk::is_set(sonetvtintervalcvs.yfilter)
	|| ydk::is_set(sonetvtintervaluass.yfilter)
	|| ydk::is_set(sonetvtintervalvaliddata.yfilter);
}

std::string SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetVTIntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetVTIntervalEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(sonetvtintervalnumber, "sonetVTIntervalNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetvtintervalnumber.is_set || is_set(sonetvtintervalnumber.yfilter)) leaf_name_data.push_back(sonetvtintervalnumber.get_name_leafdata());
    if (sonetvtintervaless.is_set || is_set(sonetvtintervaless.yfilter)) leaf_name_data.push_back(sonetvtintervaless.get_name_leafdata());
    if (sonetvtintervalsess.is_set || is_set(sonetvtintervalsess.yfilter)) leaf_name_data.push_back(sonetvtintervalsess.get_name_leafdata());
    if (sonetvtintervalcvs.is_set || is_set(sonetvtintervalcvs.yfilter)) leaf_name_data.push_back(sonetvtintervalcvs.get_name_leafdata());
    if (sonetvtintervaluass.is_set || is_set(sonetvtintervaluass.yfilter)) leaf_name_data.push_back(sonetvtintervaluass.get_name_leafdata());
    if (sonetvtintervalvaliddata.is_set || is_set(sonetvtintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetvtintervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTIntervalNumber")
    {
        sonetvtintervalnumber = value;
        sonetvtintervalnumber.value_namespace = name_space;
        sonetvtintervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTIntervalESs")
    {
        sonetvtintervaless = value;
        sonetvtintervaless.value_namespace = name_space;
        sonetvtintervaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTIntervalSESs")
    {
        sonetvtintervalsess = value;
        sonetvtintervalsess.value_namespace = name_space;
        sonetvtintervalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTIntervalCVs")
    {
        sonetvtintervalcvs = value;
        sonetvtintervalcvs.value_namespace = name_space;
        sonetvtintervalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTIntervalUASs")
    {
        sonetvtintervaluass = value;
        sonetvtintervaluass.value_namespace = name_space;
        sonetvtintervaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTIntervalValidData")
    {
        sonetvtintervalvaliddata = value;
        sonetvtintervalvaliddata.value_namespace = name_space;
        sonetvtintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetVTIntervalNumber")
    {
        sonetvtintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetVTIntervalESs")
    {
        sonetvtintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetVTIntervalSESs")
    {
        sonetvtintervalsess.yfilter = yfilter;
    }
    if(value_path == "sonetVTIntervalCVs")
    {
        sonetvtintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetVTIntervalUASs")
    {
        sonetvtintervaluass.yfilter = yfilter;
    }
    if(value_path == "sonetVTIntervalValidData")
    {
        sonetvtintervalvaliddata.yfilter = yfilter;
    }
}

bool SONETMIB::SonetVTIntervalTable::SonetVTIntervalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetVTIntervalNumber" || name == "sonetVTIntervalESs" || name == "sonetVTIntervalSESs" || name == "sonetVTIntervalCVs" || name == "sonetVTIntervalUASs" || name == "sonetVTIntervalValidData")
        return true;
    return false;
}

SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentTable()
    :
    sonetfarendvtcurrententry(this, {"ifindex"})
{

    yang_name = "sonetFarEndVTCurrentTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetFarEndVTCurrentTable::~SonetFarEndVTCurrentTable()
{
}

bool SONETMIB::SonetFarEndVTCurrentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetfarendvtcurrententry.len(); index++)
    {
        if(sonetfarendvtcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetFarEndVTCurrentTable::has_operation() const
{
    for (std::size_t index=0; index<sonetfarendvtcurrententry.len(); index++)
    {
        if(sonetfarendvtcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetFarEndVTCurrentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetFarEndVTCurrentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndVTCurrentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetFarEndVTCurrentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetFarEndVTCurrentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndVTCurrentEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry>();
        c->parent = this;
        sonetfarendvtcurrententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetFarEndVTCurrentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetfarendvtcurrententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetFarEndVTCurrentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetFarEndVTCurrentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetFarEndVTCurrentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndVTCurrentEntry")
        return true;
    return false;
}

SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry::SonetFarEndVTCurrentEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetfarendvtcurrentess{YType::uint32, "sonetFarEndVTCurrentESs"},
    sonetfarendvtcurrentsess{YType::uint32, "sonetFarEndVTCurrentSESs"},
    sonetfarendvtcurrentcvs{YType::uint32, "sonetFarEndVTCurrentCVs"},
    sonetfarendvtcurrentuass{YType::uint32, "sonetFarEndVTCurrentUASs"}
{

    yang_name = "sonetFarEndVTCurrentEntry"; yang_parent_name = "sonetFarEndVTCurrentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry::~SonetFarEndVTCurrentEntry()
{
}

bool SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetfarendvtcurrentess.is_set
	|| sonetfarendvtcurrentsess.is_set
	|| sonetfarendvtcurrentcvs.is_set
	|| sonetfarendvtcurrentuass.is_set;
}

bool SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetfarendvtcurrentess.yfilter)
	|| ydk::is_set(sonetfarendvtcurrentsess.yfilter)
	|| ydk::is_set(sonetfarendvtcurrentcvs.yfilter)
	|| ydk::is_set(sonetfarendvtcurrentuass.yfilter);
}

std::string SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetFarEndVTCurrentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndVTCurrentEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetfarendvtcurrentess.is_set || is_set(sonetfarendvtcurrentess.yfilter)) leaf_name_data.push_back(sonetfarendvtcurrentess.get_name_leafdata());
    if (sonetfarendvtcurrentsess.is_set || is_set(sonetfarendvtcurrentsess.yfilter)) leaf_name_data.push_back(sonetfarendvtcurrentsess.get_name_leafdata());
    if (sonetfarendvtcurrentcvs.is_set || is_set(sonetfarendvtcurrentcvs.yfilter)) leaf_name_data.push_back(sonetfarendvtcurrentcvs.get_name_leafdata());
    if (sonetfarendvtcurrentuass.is_set || is_set(sonetfarendvtcurrentuass.yfilter)) leaf_name_data.push_back(sonetfarendvtcurrentuass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndVTCurrentESs")
    {
        sonetfarendvtcurrentess = value;
        sonetfarendvtcurrentess.value_namespace = name_space;
        sonetfarendvtcurrentess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndVTCurrentSESs")
    {
        sonetfarendvtcurrentsess = value;
        sonetfarendvtcurrentsess.value_namespace = name_space;
        sonetfarendvtcurrentsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndVTCurrentCVs")
    {
        sonetfarendvtcurrentcvs = value;
        sonetfarendvtcurrentcvs.value_namespace = name_space;
        sonetfarendvtcurrentcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndVTCurrentUASs")
    {
        sonetfarendvtcurrentuass = value;
        sonetfarendvtcurrentuass.value_namespace = name_space;
        sonetfarendvtcurrentuass.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTCurrentESs")
    {
        sonetfarendvtcurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTCurrentSESs")
    {
        sonetfarendvtcurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTCurrentCVs")
    {
        sonetfarendvtcurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTCurrentUASs")
    {
        sonetfarendvtcurrentuass.yfilter = yfilter;
    }
}

bool SONETMIB::SonetFarEndVTCurrentTable::SonetFarEndVTCurrentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetFarEndVTCurrentESs" || name == "sonetFarEndVTCurrentSESs" || name == "sonetFarEndVTCurrentCVs" || name == "sonetFarEndVTCurrentUASs")
        return true;
    return false;
}

SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalTable()
    :
    sonetfarendvtintervalentry(this, {"ifindex", "sonetfarendvtintervalnumber"})
{

    yang_name = "sonetFarEndVTIntervalTable"; yang_parent_name = "SONET-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetFarEndVTIntervalTable::~SonetFarEndVTIntervalTable()
{
}

bool SONETMIB::SonetFarEndVTIntervalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonetfarendvtintervalentry.len(); index++)
    {
        if(sonetfarendvtintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SONETMIB::SonetFarEndVTIntervalTable::has_operation() const
{
    for (std::size_t index=0; index<sonetfarendvtintervalentry.len(); index++)
    {
        if(sonetfarendvtintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SONETMIB::SonetFarEndVTIntervalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetFarEndVTIntervalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndVTIntervalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetFarEndVTIntervalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetFarEndVTIntervalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndVTIntervalEntry")
    {
        auto c = std::make_shared<SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry>();
        c->parent = this;
        sonetfarendvtintervalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetFarEndVTIntervalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sonetfarendvtintervalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SONETMIB::SonetFarEndVTIntervalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SONETMIB::SonetFarEndVTIntervalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SONETMIB::SonetFarEndVTIntervalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndVTIntervalEntry")
        return true;
    return false;
}

SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry::SonetFarEndVTIntervalEntry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetfarendvtintervalnumber{YType::int32, "sonetFarEndVTIntervalNumber"},
    sonetfarendvtintervaless{YType::uint32, "sonetFarEndVTIntervalESs"},
    sonetfarendvtintervalsess{YType::uint32, "sonetFarEndVTIntervalSESs"},
    sonetfarendvtintervalcvs{YType::uint32, "sonetFarEndVTIntervalCVs"},
    sonetfarendvtintervaluass{YType::uint32, "sonetFarEndVTIntervalUASs"},
    sonetfarendvtintervalvaliddata{YType::boolean, "sonetFarEndVTIntervalValidData"}
{

    yang_name = "sonetFarEndVTIntervalEntry"; yang_parent_name = "sonetFarEndVTIntervalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry::~SonetFarEndVTIntervalEntry()
{
}

bool SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| sonetfarendvtintervalnumber.is_set
	|| sonetfarendvtintervaless.is_set
	|| sonetfarendvtintervalsess.is_set
	|| sonetfarendvtintervalcvs.is_set
	|| sonetfarendvtintervaluass.is_set
	|| sonetfarendvtintervalvaliddata.is_set;
}

bool SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetfarendvtintervalnumber.yfilter)
	|| ydk::is_set(sonetfarendvtintervaless.yfilter)
	|| ydk::is_set(sonetfarendvtintervalsess.yfilter)
	|| ydk::is_set(sonetfarendvtintervalcvs.yfilter)
	|| ydk::is_set(sonetfarendvtintervaluass.yfilter)
	|| ydk::is_set(sonetfarendvtintervalvaliddata.yfilter);
}

std::string SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB/sonetFarEndVTIntervalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndVTIntervalEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(sonetfarendvtintervalnumber, "sonetFarEndVTIntervalNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetfarendvtintervalnumber.is_set || is_set(sonetfarendvtintervalnumber.yfilter)) leaf_name_data.push_back(sonetfarendvtintervalnumber.get_name_leafdata());
    if (sonetfarendvtintervaless.is_set || is_set(sonetfarendvtintervaless.yfilter)) leaf_name_data.push_back(sonetfarendvtintervaless.get_name_leafdata());
    if (sonetfarendvtintervalsess.is_set || is_set(sonetfarendvtintervalsess.yfilter)) leaf_name_data.push_back(sonetfarendvtintervalsess.get_name_leafdata());
    if (sonetfarendvtintervalcvs.is_set || is_set(sonetfarendvtintervalcvs.yfilter)) leaf_name_data.push_back(sonetfarendvtintervalcvs.get_name_leafdata());
    if (sonetfarendvtintervaluass.is_set || is_set(sonetfarendvtintervaluass.yfilter)) leaf_name_data.push_back(sonetfarendvtintervaluass.get_name_leafdata());
    if (sonetfarendvtintervalvaliddata.is_set || is_set(sonetfarendvtintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetfarendvtintervalvaliddata.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndVTIntervalNumber")
    {
        sonetfarendvtintervalnumber = value;
        sonetfarendvtintervalnumber.value_namespace = name_space;
        sonetfarendvtintervalnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndVTIntervalESs")
    {
        sonetfarendvtintervaless = value;
        sonetfarendvtintervaless.value_namespace = name_space;
        sonetfarendvtintervaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndVTIntervalSESs")
    {
        sonetfarendvtintervalsess = value;
        sonetfarendvtintervalsess.value_namespace = name_space;
        sonetfarendvtintervalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndVTIntervalCVs")
    {
        sonetfarendvtintervalcvs = value;
        sonetfarendvtintervalcvs.value_namespace = name_space;
        sonetfarendvtintervalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndVTIntervalUASs")
    {
        sonetfarendvtintervaluass = value;
        sonetfarendvtintervaluass.value_namespace = name_space;
        sonetfarendvtintervaluass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndVTIntervalValidData")
    {
        sonetfarendvtintervalvaliddata = value;
        sonetfarendvtintervalvaliddata.value_namespace = name_space;
        sonetfarendvtintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTIntervalNumber")
    {
        sonetfarendvtintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTIntervalESs")
    {
        sonetfarendvtintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTIntervalSESs")
    {
        sonetfarendvtintervalsess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTIntervalCVs")
    {
        sonetfarendvtintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTIntervalUASs")
    {
        sonetfarendvtintervaluass.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTIntervalValidData")
    {
        sonetfarendvtintervalvaliddata.yfilter = yfilter;
    }
}

bool SONETMIB::SonetFarEndVTIntervalTable::SonetFarEndVTIntervalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetFarEndVTIntervalNumber" || name == "sonetFarEndVTIntervalESs" || name == "sonetFarEndVTIntervalSESs" || name == "sonetFarEndVTIntervalCVs" || name == "sonetFarEndVTIntervalUASs" || name == "sonetFarEndVTIntervalValidData")
        return true;
    return false;
}

const Enum::YLeaf SONETMIB::SonetMedium::SonetSESthresholdSet::other {1, "other"};
const Enum::YLeaf SONETMIB::SonetMedium::SonetSESthresholdSet::bellcore1991 {2, "bellcore1991"};
const Enum::YLeaf SONETMIB::SonetMedium::SonetSESthresholdSet::ansi1993 {3, "ansi1993"};
const Enum::YLeaf SONETMIB::SonetMedium::SonetSESthresholdSet::itu1995 {4, "itu1995"};
const Enum::YLeaf SONETMIB::SonetMedium::SonetSESthresholdSet::ansi1997 {5, "ansi1997"};

const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumType::sonet {1, "sonet"};
const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumType::sdh {2, "sdh"};

const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineCoding::sonetMediumOther {1, "sonetMediumOther"};
const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineCoding::sonetMediumB3ZS {2, "sonetMediumB3ZS"};
const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineCoding::sonetMediumCMI {3, "sonetMediumCMI"};
const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineCoding::sonetMediumNRZ {4, "sonetMediumNRZ"};
const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineCoding::sonetMediumRZ {5, "sonetMediumRZ"};

const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineType::sonetOther {1, "sonetOther"};
const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineType::sonetShortSingleMode {2, "sonetShortSingleMode"};
const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineType::sonetLongSingleMode {3, "sonetLongSingleMode"};
const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineType::sonetMultiMode {4, "sonetMultiMode"};
const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineType::sonetCoax {5, "sonetCoax"};
const Enum::YLeaf SONETMIB::SonetMediumTable::SonetMediumEntry::SonetMediumLineType::sonetUTP {6, "sonetUTP"};

const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::SonetPathCurrentWidth::sts1 {1, "sts1"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::SonetPathCurrentWidth::sts3cSTM1 {2, "sts3cSTM1"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::SonetPathCurrentWidth::sts12cSTM4 {3, "sts12cSTM4"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::SonetPathCurrentWidth::sts24c {4, "sts24c"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::SonetPathCurrentWidth::sts48cSTM16 {5, "sts48cSTM16"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::SonetPathCurrentWidth::sts192cSTM64 {6, "sts192cSTM64"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::SonetPathCurrentWidth::sts768cSTM256 {7, "sts768cSTM256"};

const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSonetPathPayload::unequipped {1, "unequipped"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSonetPathPayload::unspecified {2, "unspecified"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSonetPathPayload::ds3 {3, "ds3"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSonetPathPayload::vt15vc11 {4, "vt15vc11"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSonetPathPayload::vt2vc12 {5, "vt2vc12"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSonetPathPayload::atmCell {6, "atmCell"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSonetPathPayload::hdlcFr {7, "hdlcFr"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSonetPathPayload::e3 {8, "e3"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSonetPathPayload::vtStructured {9, "vtStructured"};

const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspTributaryMappingType::asynchronous {1, "asynchronous"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspTributaryMappingType::byteSynchronous {2, "byteSynchronous"};

const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSignallingTransportMode::notApplicable {1, "notApplicable"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSignallingTransportMode::signallingTransferMode {2, "signallingTransferMode"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspSignallingTransportMode::clearMode {3, "clearMode"};

const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspTributaryGroupingType::notApplicable {1, "notApplicable"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspTributaryGroupingType::au3Grouping {2, "au3Grouping"};
const Enum::YLeaf SONETMIB::SonetPathCurrentTable::SonetPathCurrentEntry::CspTributaryGroupingType::au4Grouping {3, "au4Grouping"};

const Enum::YLeaf SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::SonetVTCurrentWidth::vtWidth15VC11 {1, "vtWidth15VC11"};
const Enum::YLeaf SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::SonetVTCurrentWidth::vtWidth2VC12 {2, "vtWidth2VC12"};
const Enum::YLeaf SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::SonetVTCurrentWidth::vtWidth3 {3, "vtWidth3"};
const Enum::YLeaf SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::SonetVTCurrentWidth::vtWidth6VC2 {4, "vtWidth6VC2"};
const Enum::YLeaf SONETMIB::SonetVTCurrentTable::SonetVTCurrentEntry::SonetVTCurrentWidth::vtWidth6c {5, "vtWidth6c"};


}
}

