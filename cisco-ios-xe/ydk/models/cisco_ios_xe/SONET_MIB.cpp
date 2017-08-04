
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SONET_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace SONET_MIB {

SonetMib::SonetMib()
    :
    sonetfarendlinecurrenttable(std::make_shared<SonetMib::Sonetfarendlinecurrenttable>())
	,sonetfarendlineintervaltable(std::make_shared<SonetMib::Sonetfarendlineintervaltable>())
	,sonetfarendpathcurrenttable(std::make_shared<SonetMib::Sonetfarendpathcurrenttable>())
	,sonetfarendpathintervaltable(std::make_shared<SonetMib::Sonetfarendpathintervaltable>())
	,sonetfarendvtcurrenttable(std::make_shared<SonetMib::Sonetfarendvtcurrenttable>())
	,sonetfarendvtintervaltable(std::make_shared<SonetMib::Sonetfarendvtintervaltable>())
	,sonetlinecurrenttable(std::make_shared<SonetMib::Sonetlinecurrenttable>())
	,sonetlineintervaltable(std::make_shared<SonetMib::Sonetlineintervaltable>())
	,sonetmedium(std::make_shared<SonetMib::Sonetmedium>())
	,sonetmediumtable(std::make_shared<SonetMib::Sonetmediumtable>())
	,sonetpathcurrenttable(std::make_shared<SonetMib::Sonetpathcurrenttable>())
	,sonetpathintervaltable(std::make_shared<SonetMib::Sonetpathintervaltable>())
	,sonetsectioncurrenttable(std::make_shared<SonetMib::Sonetsectioncurrenttable>())
	,sonetsectionintervaltable(std::make_shared<SonetMib::Sonetsectionintervaltable>())
	,sonetvtcurrenttable(std::make_shared<SonetMib::Sonetvtcurrenttable>())
	,sonetvtintervaltable(std::make_shared<SonetMib::Sonetvtintervaltable>())
{
    sonetfarendlinecurrenttable->parent = this;

    sonetfarendlineintervaltable->parent = this;

    sonetfarendpathcurrenttable->parent = this;

    sonetfarendpathintervaltable->parent = this;

    sonetfarendvtcurrenttable->parent = this;

    sonetfarendvtintervaltable->parent = this;

    sonetlinecurrenttable->parent = this;

    sonetlineintervaltable->parent = this;

    sonetmedium->parent = this;

    sonetmediumtable->parent = this;

    sonetpathcurrenttable->parent = this;

    sonetpathintervaltable->parent = this;

    sonetsectioncurrenttable->parent = this;

    sonetsectionintervaltable->parent = this;

    sonetvtcurrenttable->parent = this;

    sonetvtintervaltable->parent = this;

    yang_name = "SONET-MIB"; yang_parent_name = "SONET-MIB";
}

SonetMib::~SonetMib()
{
}

bool SonetMib::has_data() const
{
    return (sonetfarendlinecurrenttable !=  nullptr && sonetfarendlinecurrenttable->has_data())
	|| (sonetfarendlineintervaltable !=  nullptr && sonetfarendlineintervaltable->has_data())
	|| (sonetfarendpathcurrenttable !=  nullptr && sonetfarendpathcurrenttable->has_data())
	|| (sonetfarendpathintervaltable !=  nullptr && sonetfarendpathintervaltable->has_data())
	|| (sonetfarendvtcurrenttable !=  nullptr && sonetfarendvtcurrenttable->has_data())
	|| (sonetfarendvtintervaltable !=  nullptr && sonetfarendvtintervaltable->has_data())
	|| (sonetlinecurrenttable !=  nullptr && sonetlinecurrenttable->has_data())
	|| (sonetlineintervaltable !=  nullptr && sonetlineintervaltable->has_data())
	|| (sonetmedium !=  nullptr && sonetmedium->has_data())
	|| (sonetmediumtable !=  nullptr && sonetmediumtable->has_data())
	|| (sonetpathcurrenttable !=  nullptr && sonetpathcurrenttable->has_data())
	|| (sonetpathintervaltable !=  nullptr && sonetpathintervaltable->has_data())
	|| (sonetsectioncurrenttable !=  nullptr && sonetsectioncurrenttable->has_data())
	|| (sonetsectionintervaltable !=  nullptr && sonetsectionintervaltable->has_data())
	|| (sonetvtcurrenttable !=  nullptr && sonetvtcurrenttable->has_data())
	|| (sonetvtintervaltable !=  nullptr && sonetvtintervaltable->has_data());
}

bool SonetMib::has_operation() const
{
    return is_set(yfilter)
	|| (sonetfarendlinecurrenttable !=  nullptr && sonetfarendlinecurrenttable->has_operation())
	|| (sonetfarendlineintervaltable !=  nullptr && sonetfarendlineintervaltable->has_operation())
	|| (sonetfarendpathcurrenttable !=  nullptr && sonetfarendpathcurrenttable->has_operation())
	|| (sonetfarendpathintervaltable !=  nullptr && sonetfarendpathintervaltable->has_operation())
	|| (sonetfarendvtcurrenttable !=  nullptr && sonetfarendvtcurrenttable->has_operation())
	|| (sonetfarendvtintervaltable !=  nullptr && sonetfarendvtintervaltable->has_operation())
	|| (sonetlinecurrenttable !=  nullptr && sonetlinecurrenttable->has_operation())
	|| (sonetlineintervaltable !=  nullptr && sonetlineintervaltable->has_operation())
	|| (sonetmedium !=  nullptr && sonetmedium->has_operation())
	|| (sonetmediumtable !=  nullptr && sonetmediumtable->has_operation())
	|| (sonetpathcurrenttable !=  nullptr && sonetpathcurrenttable->has_operation())
	|| (sonetpathintervaltable !=  nullptr && sonetpathintervaltable->has_operation())
	|| (sonetsectioncurrenttable !=  nullptr && sonetsectioncurrenttable->has_operation())
	|| (sonetsectionintervaltable !=  nullptr && sonetsectionintervaltable->has_operation())
	|| (sonetvtcurrenttable !=  nullptr && sonetvtcurrenttable->has_operation())
	|| (sonetvtintervaltable !=  nullptr && sonetvtintervaltable->has_operation());
}

std::string SonetMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SONET-MIB:SONET-MIB";

    return path_buffer.str();

}

const EntityPath SonetMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndLineCurrentTable")
    {
        if(sonetfarendlinecurrenttable == nullptr)
        {
            sonetfarendlinecurrenttable = std::make_shared<SonetMib::Sonetfarendlinecurrenttable>();
        }
        return sonetfarendlinecurrenttable;
    }

    if(child_yang_name == "sonetFarEndLineIntervalTable")
    {
        if(sonetfarendlineintervaltable == nullptr)
        {
            sonetfarendlineintervaltable = std::make_shared<SonetMib::Sonetfarendlineintervaltable>();
        }
        return sonetfarendlineintervaltable;
    }

    if(child_yang_name == "sonetFarEndPathCurrentTable")
    {
        if(sonetfarendpathcurrenttable == nullptr)
        {
            sonetfarendpathcurrenttable = std::make_shared<SonetMib::Sonetfarendpathcurrenttable>();
        }
        return sonetfarendpathcurrenttable;
    }

    if(child_yang_name == "sonetFarEndPathIntervalTable")
    {
        if(sonetfarendpathintervaltable == nullptr)
        {
            sonetfarendpathintervaltable = std::make_shared<SonetMib::Sonetfarendpathintervaltable>();
        }
        return sonetfarendpathintervaltable;
    }

    if(child_yang_name == "sonetFarEndVTCurrentTable")
    {
        if(sonetfarendvtcurrenttable == nullptr)
        {
            sonetfarendvtcurrenttable = std::make_shared<SonetMib::Sonetfarendvtcurrenttable>();
        }
        return sonetfarendvtcurrenttable;
    }

    if(child_yang_name == "sonetFarEndVTIntervalTable")
    {
        if(sonetfarendvtintervaltable == nullptr)
        {
            sonetfarendvtintervaltable = std::make_shared<SonetMib::Sonetfarendvtintervaltable>();
        }
        return sonetfarendvtintervaltable;
    }

    if(child_yang_name == "sonetLineCurrentTable")
    {
        if(sonetlinecurrenttable == nullptr)
        {
            sonetlinecurrenttable = std::make_shared<SonetMib::Sonetlinecurrenttable>();
        }
        return sonetlinecurrenttable;
    }

    if(child_yang_name == "sonetLineIntervalTable")
    {
        if(sonetlineintervaltable == nullptr)
        {
            sonetlineintervaltable = std::make_shared<SonetMib::Sonetlineintervaltable>();
        }
        return sonetlineintervaltable;
    }

    if(child_yang_name == "sonetMedium")
    {
        if(sonetmedium == nullptr)
        {
            sonetmedium = std::make_shared<SonetMib::Sonetmedium>();
        }
        return sonetmedium;
    }

    if(child_yang_name == "sonetMediumTable")
    {
        if(sonetmediumtable == nullptr)
        {
            sonetmediumtable = std::make_shared<SonetMib::Sonetmediumtable>();
        }
        return sonetmediumtable;
    }

    if(child_yang_name == "sonetPathCurrentTable")
    {
        if(sonetpathcurrenttable == nullptr)
        {
            sonetpathcurrenttable = std::make_shared<SonetMib::Sonetpathcurrenttable>();
        }
        return sonetpathcurrenttable;
    }

    if(child_yang_name == "sonetPathIntervalTable")
    {
        if(sonetpathintervaltable == nullptr)
        {
            sonetpathintervaltable = std::make_shared<SonetMib::Sonetpathintervaltable>();
        }
        return sonetpathintervaltable;
    }

    if(child_yang_name == "sonetSectionCurrentTable")
    {
        if(sonetsectioncurrenttable == nullptr)
        {
            sonetsectioncurrenttable = std::make_shared<SonetMib::Sonetsectioncurrenttable>();
        }
        return sonetsectioncurrenttable;
    }

    if(child_yang_name == "sonetSectionIntervalTable")
    {
        if(sonetsectionintervaltable == nullptr)
        {
            sonetsectionintervaltable = std::make_shared<SonetMib::Sonetsectionintervaltable>();
        }
        return sonetsectionintervaltable;
    }

    if(child_yang_name == "sonetVTCurrentTable")
    {
        if(sonetvtcurrenttable == nullptr)
        {
            sonetvtcurrenttable = std::make_shared<SonetMib::Sonetvtcurrenttable>();
        }
        return sonetvtcurrenttable;
    }

    if(child_yang_name == "sonetVTIntervalTable")
    {
        if(sonetvtintervaltable == nullptr)
        {
            sonetvtintervaltable = std::make_shared<SonetMib::Sonetvtintervaltable>();
        }
        return sonetvtintervaltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonetfarendlinecurrenttable != nullptr)
    {
        children["sonetFarEndLineCurrentTable"] = sonetfarendlinecurrenttable;
    }

    if(sonetfarendlineintervaltable != nullptr)
    {
        children["sonetFarEndLineIntervalTable"] = sonetfarendlineintervaltable;
    }

    if(sonetfarendpathcurrenttable != nullptr)
    {
        children["sonetFarEndPathCurrentTable"] = sonetfarendpathcurrenttable;
    }

    if(sonetfarendpathintervaltable != nullptr)
    {
        children["sonetFarEndPathIntervalTable"] = sonetfarendpathintervaltable;
    }

    if(sonetfarendvtcurrenttable != nullptr)
    {
        children["sonetFarEndVTCurrentTable"] = sonetfarendvtcurrenttable;
    }

    if(sonetfarendvtintervaltable != nullptr)
    {
        children["sonetFarEndVTIntervalTable"] = sonetfarendvtintervaltable;
    }

    if(sonetlinecurrenttable != nullptr)
    {
        children["sonetLineCurrentTable"] = sonetlinecurrenttable;
    }

    if(sonetlineintervaltable != nullptr)
    {
        children["sonetLineIntervalTable"] = sonetlineintervaltable;
    }

    if(sonetmedium != nullptr)
    {
        children["sonetMedium"] = sonetmedium;
    }

    if(sonetmediumtable != nullptr)
    {
        children["sonetMediumTable"] = sonetmediumtable;
    }

    if(sonetpathcurrenttable != nullptr)
    {
        children["sonetPathCurrentTable"] = sonetpathcurrenttable;
    }

    if(sonetpathintervaltable != nullptr)
    {
        children["sonetPathIntervalTable"] = sonetpathintervaltable;
    }

    if(sonetsectioncurrenttable != nullptr)
    {
        children["sonetSectionCurrentTable"] = sonetsectioncurrenttable;
    }

    if(sonetsectionintervaltable != nullptr)
    {
        children["sonetSectionIntervalTable"] = sonetsectionintervaltable;
    }

    if(sonetvtcurrenttable != nullptr)
    {
        children["sonetVTCurrentTable"] = sonetvtcurrenttable;
    }

    if(sonetvtintervaltable != nullptr)
    {
        children["sonetVTIntervalTable"] = sonetvtintervaltable;
    }

    return children;
}

void SonetMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SonetMib::clone_ptr() const
{
    return std::make_shared<SonetMib>();
}

std::string SonetMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string SonetMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function SonetMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SonetMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool SonetMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndLineCurrentTable" || name == "sonetFarEndLineIntervalTable" || name == "sonetFarEndPathCurrentTable" || name == "sonetFarEndPathIntervalTable" || name == "sonetFarEndVTCurrentTable" || name == "sonetFarEndVTIntervalTable" || name == "sonetLineCurrentTable" || name == "sonetLineIntervalTable" || name == "sonetMedium" || name == "sonetMediumTable" || name == "sonetPathCurrentTable" || name == "sonetPathIntervalTable" || name == "sonetSectionCurrentTable" || name == "sonetSectionIntervalTable" || name == "sonetVTCurrentTable" || name == "sonetVTIntervalTable")
        return true;
    return false;
}

SonetMib::Sonetmedium::Sonetmedium()
    :
    sonetsesthresholdset{YType::enumeration, "sonetSESthresholdSet"}
{
    yang_name = "sonetMedium"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetmedium::~Sonetmedium()
{
}

bool SonetMib::Sonetmedium::has_data() const
{
    return sonetsesthresholdset.is_set;
}

bool SonetMib::Sonetmedium::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sonetsesthresholdset.yfilter);
}

std::string SonetMib::Sonetmedium::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetMedium";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetmedium::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sonetsesthresholdset.is_set || is_set(sonetsesthresholdset.yfilter)) leaf_name_data.push_back(sonetsesthresholdset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetmedium::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetmedium::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetmedium::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sonetSESthresholdSet")
    {
        sonetsesthresholdset = value;
        sonetsesthresholdset.value_namespace = name_space;
        sonetsesthresholdset.value_namespace_prefix = name_space_prefix;
    }
}

void SonetMib::Sonetmedium::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sonetSESthresholdSet")
    {
        sonetsesthresholdset.yfilter = yfilter;
    }
}

bool SonetMib::Sonetmedium::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetSESthresholdSet")
        return true;
    return false;
}

SonetMib::Sonetmediumtable::Sonetmediumtable()
{
    yang_name = "sonetMediumTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetmediumtable::~Sonetmediumtable()
{
}

bool SonetMib::Sonetmediumtable::has_data() const
{
    for (std::size_t index=0; index<sonetmediumentry.size(); index++)
    {
        if(sonetmediumentry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetmediumtable::has_operation() const
{
    for (std::size_t index=0; index<sonetmediumentry.size(); index++)
    {
        if(sonetmediumentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetmediumtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetMediumTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetmediumtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetmediumtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetMediumEntry")
    {
        for(auto const & c : sonetmediumentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetmediumtable::Sonetmediumentry>();
        c->parent = this;
        sonetmediumentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetmediumtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetmediumentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetmediumtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetmediumtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetmediumtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetMediumEntry")
        return true;
    return false;
}

SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumentry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetmediumcircuitidentifier{YType::str, "sonetMediumCircuitIdentifier"},
    sonetmediuminvalidintervals{YType::int32, "sonetMediumInvalidIntervals"},
    sonetmediumlinecoding{YType::enumeration, "sonetMediumLineCoding"},
    sonetmediumlinetype{YType::enumeration, "sonetMediumLineType"},
    sonetmediumloopbackconfig{YType::bits, "sonetMediumLoopbackConfig"},
    sonetmediumtimeelapsed{YType::int32, "sonetMediumTimeElapsed"},
    sonetmediumtype{YType::enumeration, "sonetMediumType"},
    sonetmediumvalidintervals{YType::int32, "sonetMediumValidIntervals"}
{
    yang_name = "sonetMediumEntry"; yang_parent_name = "sonetMediumTable";
}

SonetMib::Sonetmediumtable::Sonetmediumentry::~Sonetmediumentry()
{
}

bool SonetMib::Sonetmediumtable::Sonetmediumentry::has_data() const
{
    return ifindex.is_set
	|| sonetmediumcircuitidentifier.is_set
	|| sonetmediuminvalidintervals.is_set
	|| sonetmediumlinecoding.is_set
	|| sonetmediumlinetype.is_set
	|| sonetmediumloopbackconfig.is_set
	|| sonetmediumtimeelapsed.is_set
	|| sonetmediumtype.is_set
	|| sonetmediumvalidintervals.is_set;
}

bool SonetMib::Sonetmediumtable::Sonetmediumentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetmediumcircuitidentifier.yfilter)
	|| ydk::is_set(sonetmediuminvalidintervals.yfilter)
	|| ydk::is_set(sonetmediumlinecoding.yfilter)
	|| ydk::is_set(sonetmediumlinetype.yfilter)
	|| ydk::is_set(sonetmediumloopbackconfig.yfilter)
	|| ydk::is_set(sonetmediumtimeelapsed.yfilter)
	|| ydk::is_set(sonetmediumtype.yfilter)
	|| ydk::is_set(sonetmediumvalidintervals.yfilter);
}

std::string SonetMib::Sonetmediumtable::Sonetmediumentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetMediumEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetmediumtable::Sonetmediumentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetMediumTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetmediumcircuitidentifier.is_set || is_set(sonetmediumcircuitidentifier.yfilter)) leaf_name_data.push_back(sonetmediumcircuitidentifier.get_name_leafdata());
    if (sonetmediuminvalidintervals.is_set || is_set(sonetmediuminvalidintervals.yfilter)) leaf_name_data.push_back(sonetmediuminvalidintervals.get_name_leafdata());
    if (sonetmediumlinecoding.is_set || is_set(sonetmediumlinecoding.yfilter)) leaf_name_data.push_back(sonetmediumlinecoding.get_name_leafdata());
    if (sonetmediumlinetype.is_set || is_set(sonetmediumlinetype.yfilter)) leaf_name_data.push_back(sonetmediumlinetype.get_name_leafdata());
    if (sonetmediumloopbackconfig.is_set || is_set(sonetmediumloopbackconfig.yfilter)) leaf_name_data.push_back(sonetmediumloopbackconfig.get_name_leafdata());
    if (sonetmediumtimeelapsed.is_set || is_set(sonetmediumtimeelapsed.yfilter)) leaf_name_data.push_back(sonetmediumtimeelapsed.get_name_leafdata());
    if (sonetmediumtype.is_set || is_set(sonetmediumtype.yfilter)) leaf_name_data.push_back(sonetmediumtype.get_name_leafdata());
    if (sonetmediumvalidintervals.is_set || is_set(sonetmediumvalidintervals.yfilter)) leaf_name_data.push_back(sonetmediumvalidintervals.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetmediumtable::Sonetmediumentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetmediumtable::Sonetmediumentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetmediumtable::Sonetmediumentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sonetMediumLoopbackConfig")
    {
        sonetmediumloopbackconfig[value] = true;
    }
    if(value_path == "sonetMediumTimeElapsed")
    {
        sonetmediumtimeelapsed = value;
        sonetmediumtimeelapsed.value_namespace = name_space;
        sonetmediumtimeelapsed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetMediumType")
    {
        sonetmediumtype = value;
        sonetmediumtype.value_namespace = name_space;
        sonetmediumtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetMediumValidIntervals")
    {
        sonetmediumvalidintervals = value;
        sonetmediumvalidintervals.value_namespace = name_space;
        sonetmediumvalidintervals.value_namespace_prefix = name_space_prefix;
    }
}

void SonetMib::Sonetmediumtable::Sonetmediumentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetMediumCircuitIdentifier")
    {
        sonetmediumcircuitidentifier.yfilter = yfilter;
    }
    if(value_path == "sonetMediumInvalidIntervals")
    {
        sonetmediuminvalidintervals.yfilter = yfilter;
    }
    if(value_path == "sonetMediumLineCoding")
    {
        sonetmediumlinecoding.yfilter = yfilter;
    }
    if(value_path == "sonetMediumLineType")
    {
        sonetmediumlinetype.yfilter = yfilter;
    }
    if(value_path == "sonetMediumLoopbackConfig")
    {
        sonetmediumloopbackconfig.yfilter = yfilter;
    }
    if(value_path == "sonetMediumTimeElapsed")
    {
        sonetmediumtimeelapsed.yfilter = yfilter;
    }
    if(value_path == "sonetMediumType")
    {
        sonetmediumtype.yfilter = yfilter;
    }
    if(value_path == "sonetMediumValidIntervals")
    {
        sonetmediumvalidintervals.yfilter = yfilter;
    }
}

bool SonetMib::Sonetmediumtable::Sonetmediumentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetMediumCircuitIdentifier" || name == "sonetMediumInvalidIntervals" || name == "sonetMediumLineCoding" || name == "sonetMediumLineType" || name == "sonetMediumLoopbackConfig" || name == "sonetMediumTimeElapsed" || name == "sonetMediumType" || name == "sonetMediumValidIntervals")
        return true;
    return false;
}

SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrenttable()
{
    yang_name = "sonetSectionCurrentTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetsectioncurrenttable::~Sonetsectioncurrenttable()
{
}

bool SonetMib::Sonetsectioncurrenttable::has_data() const
{
    for (std::size_t index=0; index<sonetsectioncurrententry.size(); index++)
    {
        if(sonetsectioncurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetsectioncurrenttable::has_operation() const
{
    for (std::size_t index=0; index<sonetsectioncurrententry.size(); index++)
    {
        if(sonetsectioncurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetsectioncurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetSectionCurrentTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetsectioncurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetsectioncurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetSectionCurrentEntry")
    {
        for(auto const & c : sonetsectioncurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry>();
        c->parent = this;
        sonetsectioncurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetsectioncurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetsectioncurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetsectioncurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetsectioncurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetsectioncurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetSectionCurrentEntry")
        return true;
    return false;
}

SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry::Sonetsectioncurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetsectioncurrentcvs{YType::uint32, "sonetSectionCurrentCVs"},
    sonetsectioncurrentess{YType::uint32, "sonetSectionCurrentESs"},
    sonetsectioncurrentsefss{YType::uint32, "sonetSectionCurrentSEFSs"},
    sonetsectioncurrentsess{YType::uint32, "sonetSectionCurrentSESs"},
    sonetsectioncurrentstatus{YType::int32, "sonetSectionCurrentStatus"}
{
    yang_name = "sonetSectionCurrentEntry"; yang_parent_name = "sonetSectionCurrentTable";
}

SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry::~Sonetsectioncurrententry()
{
}

bool SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry::has_data() const
{
    return ifindex.is_set
	|| sonetsectioncurrentcvs.is_set
	|| sonetsectioncurrentess.is_set
	|| sonetsectioncurrentsefss.is_set
	|| sonetsectioncurrentsess.is_set
	|| sonetsectioncurrentstatus.is_set;
}

bool SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetsectioncurrentcvs.yfilter)
	|| ydk::is_set(sonetsectioncurrentess.yfilter)
	|| ydk::is_set(sonetsectioncurrentsefss.yfilter)
	|| ydk::is_set(sonetsectioncurrentsess.yfilter)
	|| ydk::is_set(sonetsectioncurrentstatus.yfilter);
}

std::string SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetSectionCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetSectionCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetsectioncurrentcvs.is_set || is_set(sonetsectioncurrentcvs.yfilter)) leaf_name_data.push_back(sonetsectioncurrentcvs.get_name_leafdata());
    if (sonetsectioncurrentess.is_set || is_set(sonetsectioncurrentess.yfilter)) leaf_name_data.push_back(sonetsectioncurrentess.get_name_leafdata());
    if (sonetsectioncurrentsefss.is_set || is_set(sonetsectioncurrentsefss.yfilter)) leaf_name_data.push_back(sonetsectioncurrentsefss.get_name_leafdata());
    if (sonetsectioncurrentsess.is_set || is_set(sonetsectioncurrentsess.yfilter)) leaf_name_data.push_back(sonetsectioncurrentsess.get_name_leafdata());
    if (sonetsectioncurrentstatus.is_set || is_set(sonetsectioncurrentstatus.yfilter)) leaf_name_data.push_back(sonetsectioncurrentstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionCurrentCVs")
    {
        sonetsectioncurrentcvs = value;
        sonetsectioncurrentcvs.value_namespace = name_space;
        sonetsectioncurrentcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionCurrentESs")
    {
        sonetsectioncurrentess = value;
        sonetsectioncurrentess.value_namespace = name_space;
        sonetsectioncurrentess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionCurrentSEFSs")
    {
        sonetsectioncurrentsefss = value;
        sonetsectioncurrentsefss.value_namespace = name_space;
        sonetsectioncurrentsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionCurrentSESs")
    {
        sonetsectioncurrentsess = value;
        sonetsectioncurrentsess.value_namespace = name_space;
        sonetsectioncurrentsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionCurrentStatus")
    {
        sonetsectioncurrentstatus = value;
        sonetsectioncurrentstatus.value_namespace = name_space;
        sonetsectioncurrentstatus.value_namespace_prefix = name_space_prefix;
    }
}

void SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetSectionCurrentCVs")
    {
        sonetsectioncurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetSectionCurrentESs")
    {
        sonetsectioncurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetSectionCurrentSEFSs")
    {
        sonetsectioncurrentsefss.yfilter = yfilter;
    }
    if(value_path == "sonetSectionCurrentSESs")
    {
        sonetsectioncurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetSectionCurrentStatus")
    {
        sonetsectioncurrentstatus.yfilter = yfilter;
    }
}

bool SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetSectionCurrentCVs" || name == "sonetSectionCurrentESs" || name == "sonetSectionCurrentSEFSs" || name == "sonetSectionCurrentSESs" || name == "sonetSectionCurrentStatus")
        return true;
    return false;
}

SonetMib::Sonetsectionintervaltable::Sonetsectionintervaltable()
{
    yang_name = "sonetSectionIntervalTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetsectionintervaltable::~Sonetsectionintervaltable()
{
}

bool SonetMib::Sonetsectionintervaltable::has_data() const
{
    for (std::size_t index=0; index<sonetsectionintervalentry.size(); index++)
    {
        if(sonetsectionintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetsectionintervaltable::has_operation() const
{
    for (std::size_t index=0; index<sonetsectionintervalentry.size(); index++)
    {
        if(sonetsectionintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetsectionintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetSectionIntervalTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetsectionintervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetsectionintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetSectionIntervalEntry")
    {
        for(auto const & c : sonetsectionintervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry>();
        c->parent = this;
        sonetsectionintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetsectionintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetsectionintervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetsectionintervaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetsectionintervaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetsectionintervaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetSectionIntervalEntry")
        return true;
    return false;
}

SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry::Sonetsectionintervalentry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetsectionintervalnumber{YType::int32, "sonetSectionIntervalNumber"},
    sonetsectionintervalcvs{YType::uint32, "sonetSectionIntervalCVs"},
    sonetsectionintervaless{YType::uint32, "sonetSectionIntervalESs"},
    sonetsectionintervalsefss{YType::uint32, "sonetSectionIntervalSEFSs"},
    sonetsectionintervalsess{YType::uint32, "sonetSectionIntervalSESs"},
    sonetsectionintervalvaliddata{YType::boolean, "sonetSectionIntervalValidData"}
{
    yang_name = "sonetSectionIntervalEntry"; yang_parent_name = "sonetSectionIntervalTable";
}

SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry::~Sonetsectionintervalentry()
{
}

bool SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry::has_data() const
{
    return ifindex.is_set
	|| sonetsectionintervalnumber.is_set
	|| sonetsectionintervalcvs.is_set
	|| sonetsectionintervaless.is_set
	|| sonetsectionintervalsefss.is_set
	|| sonetsectionintervalsess.is_set
	|| sonetsectionintervalvaliddata.is_set;
}

bool SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetsectionintervalnumber.yfilter)
	|| ydk::is_set(sonetsectionintervalcvs.yfilter)
	|| ydk::is_set(sonetsectionintervaless.yfilter)
	|| ydk::is_set(sonetsectionintervalsefss.yfilter)
	|| ydk::is_set(sonetsectionintervalsess.yfilter)
	|| ydk::is_set(sonetsectionintervalvaliddata.yfilter);
}

std::string SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetSectionIntervalEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[sonetSectionIntervalNumber='" <<sonetsectionintervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetSectionIntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetsectionintervalnumber.is_set || is_set(sonetsectionintervalnumber.yfilter)) leaf_name_data.push_back(sonetsectionintervalnumber.get_name_leafdata());
    if (sonetsectionintervalcvs.is_set || is_set(sonetsectionintervalcvs.yfilter)) leaf_name_data.push_back(sonetsectionintervalcvs.get_name_leafdata());
    if (sonetsectionintervaless.is_set || is_set(sonetsectionintervaless.yfilter)) leaf_name_data.push_back(sonetsectionintervaless.get_name_leafdata());
    if (sonetsectionintervalsefss.is_set || is_set(sonetsectionintervalsefss.yfilter)) leaf_name_data.push_back(sonetsectionintervalsefss.get_name_leafdata());
    if (sonetsectionintervalsess.is_set || is_set(sonetsectionintervalsess.yfilter)) leaf_name_data.push_back(sonetsectionintervalsess.get_name_leafdata());
    if (sonetsectionintervalvaliddata.is_set || is_set(sonetsectionintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetsectionintervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sonetSectionIntervalCVs")
    {
        sonetsectionintervalcvs = value;
        sonetsectionintervalcvs.value_namespace = name_space;
        sonetsectionintervalcvs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionIntervalESs")
    {
        sonetsectionintervaless = value;
        sonetsectionintervaless.value_namespace = name_space;
        sonetsectionintervaless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionIntervalSEFSs")
    {
        sonetsectionintervalsefss = value;
        sonetsectionintervalsefss.value_namespace = name_space;
        sonetsectionintervalsefss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionIntervalSESs")
    {
        sonetsectionintervalsess = value;
        sonetsectionintervalsess.value_namespace = name_space;
        sonetsectionintervalsess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetSectionIntervalValidData")
    {
        sonetsectionintervalvaliddata = value;
        sonetsectionintervalvaliddata.value_namespace = name_space;
        sonetsectionintervalvaliddata.value_namespace_prefix = name_space_prefix;
    }
}

void SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetSectionIntervalNumber")
    {
        sonetsectionintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetSectionIntervalCVs")
    {
        sonetsectionintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetSectionIntervalESs")
    {
        sonetsectionintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetSectionIntervalSEFSs")
    {
        sonetsectionintervalsefss.yfilter = yfilter;
    }
    if(value_path == "sonetSectionIntervalSESs")
    {
        sonetsectionintervalsess.yfilter = yfilter;
    }
    if(value_path == "sonetSectionIntervalValidData")
    {
        sonetsectionintervalvaliddata.yfilter = yfilter;
    }
}

bool SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetSectionIntervalNumber" || name == "sonetSectionIntervalCVs" || name == "sonetSectionIntervalESs" || name == "sonetSectionIntervalSEFSs" || name == "sonetSectionIntervalSESs" || name == "sonetSectionIntervalValidData")
        return true;
    return false;
}

SonetMib::Sonetlinecurrenttable::Sonetlinecurrenttable()
{
    yang_name = "sonetLineCurrentTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetlinecurrenttable::~Sonetlinecurrenttable()
{
}

bool SonetMib::Sonetlinecurrenttable::has_data() const
{
    for (std::size_t index=0; index<sonetlinecurrententry.size(); index++)
    {
        if(sonetlinecurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetlinecurrenttable::has_operation() const
{
    for (std::size_t index=0; index<sonetlinecurrententry.size(); index++)
    {
        if(sonetlinecurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetlinecurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetLineCurrentTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetlinecurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetlinecurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetLineCurrentEntry")
    {
        for(auto const & c : sonetlinecurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry>();
        c->parent = this;
        sonetlinecurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetlinecurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetlinecurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetlinecurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetlinecurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetlinecurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetLineCurrentEntry")
        return true;
    return false;
}

SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry::Sonetlinecurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetlinecurrentcvs{YType::uint32, "sonetLineCurrentCVs"},
    sonetlinecurrentess{YType::uint32, "sonetLineCurrentESs"},
    sonetlinecurrentsess{YType::uint32, "sonetLineCurrentSESs"},
    sonetlinecurrentstatus{YType::int32, "sonetLineCurrentStatus"},
    sonetlinecurrentuass{YType::uint32, "sonetLineCurrentUASs"}
{
    yang_name = "sonetLineCurrentEntry"; yang_parent_name = "sonetLineCurrentTable";
}

SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry::~Sonetlinecurrententry()
{
}

bool SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry::has_data() const
{
    return ifindex.is_set
	|| sonetlinecurrentcvs.is_set
	|| sonetlinecurrentess.is_set
	|| sonetlinecurrentsess.is_set
	|| sonetlinecurrentstatus.is_set
	|| sonetlinecurrentuass.is_set;
}

bool SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetlinecurrentcvs.yfilter)
	|| ydk::is_set(sonetlinecurrentess.yfilter)
	|| ydk::is_set(sonetlinecurrentsess.yfilter)
	|| ydk::is_set(sonetlinecurrentstatus.yfilter)
	|| ydk::is_set(sonetlinecurrentuass.yfilter);
}

std::string SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetLineCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetLineCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetlinecurrentcvs.is_set || is_set(sonetlinecurrentcvs.yfilter)) leaf_name_data.push_back(sonetlinecurrentcvs.get_name_leafdata());
    if (sonetlinecurrentess.is_set || is_set(sonetlinecurrentess.yfilter)) leaf_name_data.push_back(sonetlinecurrentess.get_name_leafdata());
    if (sonetlinecurrentsess.is_set || is_set(sonetlinecurrentsess.yfilter)) leaf_name_data.push_back(sonetlinecurrentsess.get_name_leafdata());
    if (sonetlinecurrentstatus.is_set || is_set(sonetlinecurrentstatus.yfilter)) leaf_name_data.push_back(sonetlinecurrentstatus.get_name_leafdata());
    if (sonetlinecurrentuass.is_set || is_set(sonetlinecurrentuass.yfilter)) leaf_name_data.push_back(sonetlinecurrentuass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineCurrentCVs")
    {
        sonetlinecurrentcvs = value;
        sonetlinecurrentcvs.value_namespace = name_space;
        sonetlinecurrentcvs.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sonetLineCurrentStatus")
    {
        sonetlinecurrentstatus = value;
        sonetlinecurrentstatus.value_namespace = name_space;
        sonetlinecurrentstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetLineCurrentUASs")
    {
        sonetlinecurrentuass = value;
        sonetlinecurrentuass.value_namespace = name_space;
        sonetlinecurrentuass.value_namespace_prefix = name_space_prefix;
    }
}

void SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetLineCurrentCVs")
    {
        sonetlinecurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetLineCurrentESs")
    {
        sonetlinecurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetLineCurrentSESs")
    {
        sonetlinecurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetLineCurrentStatus")
    {
        sonetlinecurrentstatus.yfilter = yfilter;
    }
    if(value_path == "sonetLineCurrentUASs")
    {
        sonetlinecurrentuass.yfilter = yfilter;
    }
}

bool SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetLineCurrentCVs" || name == "sonetLineCurrentESs" || name == "sonetLineCurrentSESs" || name == "sonetLineCurrentStatus" || name == "sonetLineCurrentUASs")
        return true;
    return false;
}

SonetMib::Sonetlineintervaltable::Sonetlineintervaltable()
{
    yang_name = "sonetLineIntervalTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetlineintervaltable::~Sonetlineintervaltable()
{
}

bool SonetMib::Sonetlineintervaltable::has_data() const
{
    for (std::size_t index=0; index<sonetlineintervalentry.size(); index++)
    {
        if(sonetlineintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetlineintervaltable::has_operation() const
{
    for (std::size_t index=0; index<sonetlineintervalentry.size(); index++)
    {
        if(sonetlineintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetlineintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetLineIntervalTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetlineintervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetlineintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetLineIntervalEntry")
    {
        for(auto const & c : sonetlineintervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetlineintervaltable::Sonetlineintervalentry>();
        c->parent = this;
        sonetlineintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetlineintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetlineintervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetlineintervaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetlineintervaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetlineintervaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetLineIntervalEntry")
        return true;
    return false;
}

SonetMib::Sonetlineintervaltable::Sonetlineintervalentry::Sonetlineintervalentry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetlineintervalnumber{YType::int32, "sonetLineIntervalNumber"},
    sonetlineintervalcvs{YType::uint32, "sonetLineIntervalCVs"},
    sonetlineintervaless{YType::uint32, "sonetLineIntervalESs"},
    sonetlineintervalsess{YType::uint32, "sonetLineIntervalSESs"},
    sonetlineintervaluass{YType::uint32, "sonetLineIntervalUASs"},
    sonetlineintervalvaliddata{YType::boolean, "sonetLineIntervalValidData"}
{
    yang_name = "sonetLineIntervalEntry"; yang_parent_name = "sonetLineIntervalTable";
}

SonetMib::Sonetlineintervaltable::Sonetlineintervalentry::~Sonetlineintervalentry()
{
}

bool SonetMib::Sonetlineintervaltable::Sonetlineintervalentry::has_data() const
{
    return ifindex.is_set
	|| sonetlineintervalnumber.is_set
	|| sonetlineintervalcvs.is_set
	|| sonetlineintervaless.is_set
	|| sonetlineintervalsess.is_set
	|| sonetlineintervaluass.is_set
	|| sonetlineintervalvaliddata.is_set;
}

bool SonetMib::Sonetlineintervaltable::Sonetlineintervalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetlineintervalnumber.yfilter)
	|| ydk::is_set(sonetlineintervalcvs.yfilter)
	|| ydk::is_set(sonetlineintervaless.yfilter)
	|| ydk::is_set(sonetlineintervalsess.yfilter)
	|| ydk::is_set(sonetlineintervaluass.yfilter)
	|| ydk::is_set(sonetlineintervalvaliddata.yfilter);
}

std::string SonetMib::Sonetlineintervaltable::Sonetlineintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetLineIntervalEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[sonetLineIntervalNumber='" <<sonetlineintervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetlineintervaltable::Sonetlineintervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetLineIntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetlineintervalnumber.is_set || is_set(sonetlineintervalnumber.yfilter)) leaf_name_data.push_back(sonetlineintervalnumber.get_name_leafdata());
    if (sonetlineintervalcvs.is_set || is_set(sonetlineintervalcvs.yfilter)) leaf_name_data.push_back(sonetlineintervalcvs.get_name_leafdata());
    if (sonetlineintervaless.is_set || is_set(sonetlineintervaless.yfilter)) leaf_name_data.push_back(sonetlineintervaless.get_name_leafdata());
    if (sonetlineintervalsess.is_set || is_set(sonetlineintervalsess.yfilter)) leaf_name_data.push_back(sonetlineintervalsess.get_name_leafdata());
    if (sonetlineintervaluass.is_set || is_set(sonetlineintervaluass.yfilter)) leaf_name_data.push_back(sonetlineintervaluass.get_name_leafdata());
    if (sonetlineintervalvaliddata.is_set || is_set(sonetlineintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetlineintervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetlineintervaltable::Sonetlineintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetlineintervaltable::Sonetlineintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetlineintervaltable::Sonetlineintervalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sonetLineIntervalCVs")
    {
        sonetlineintervalcvs = value;
        sonetlineintervalcvs.value_namespace = name_space;
        sonetlineintervalcvs.value_namespace_prefix = name_space_prefix;
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

void SonetMib::Sonetlineintervaltable::Sonetlineintervalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetLineIntervalNumber")
    {
        sonetlineintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetLineIntervalCVs")
    {
        sonetlineintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetLineIntervalESs")
    {
        sonetlineintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetLineIntervalSESs")
    {
        sonetlineintervalsess.yfilter = yfilter;
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

bool SonetMib::Sonetlineintervaltable::Sonetlineintervalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetLineIntervalNumber" || name == "sonetLineIntervalCVs" || name == "sonetLineIntervalESs" || name == "sonetLineIntervalSESs" || name == "sonetLineIntervalUASs" || name == "sonetLineIntervalValidData")
        return true;
    return false;
}

SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrenttable()
{
    yang_name = "sonetFarEndLineCurrentTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetfarendlinecurrenttable::~Sonetfarendlinecurrenttable()
{
}

bool SonetMib::Sonetfarendlinecurrenttable::has_data() const
{
    for (std::size_t index=0; index<sonetfarendlinecurrententry.size(); index++)
    {
        if(sonetfarendlinecurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetfarendlinecurrenttable::has_operation() const
{
    for (std::size_t index=0; index<sonetfarendlinecurrententry.size(); index++)
    {
        if(sonetfarendlinecurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetfarendlinecurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndLineCurrentTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetfarendlinecurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetfarendlinecurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndLineCurrentEntry")
    {
        for(auto const & c : sonetfarendlinecurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry>();
        c->parent = this;
        sonetfarendlinecurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetfarendlinecurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetfarendlinecurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetfarendlinecurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetfarendlinecurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetfarendlinecurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndLineCurrentEntry")
        return true;
    return false;
}

SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry::Sonetfarendlinecurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetfarendlinecurrentcvs{YType::uint32, "sonetFarEndLineCurrentCVs"},
    sonetfarendlinecurrentess{YType::uint32, "sonetFarEndLineCurrentESs"},
    sonetfarendlinecurrentsess{YType::uint32, "sonetFarEndLineCurrentSESs"},
    sonetfarendlinecurrentuass{YType::uint32, "sonetFarEndLineCurrentUASs"}
{
    yang_name = "sonetFarEndLineCurrentEntry"; yang_parent_name = "sonetFarEndLineCurrentTable";
}

SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry::~Sonetfarendlinecurrententry()
{
}

bool SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry::has_data() const
{
    return ifindex.is_set
	|| sonetfarendlinecurrentcvs.is_set
	|| sonetfarendlinecurrentess.is_set
	|| sonetfarendlinecurrentsess.is_set
	|| sonetfarendlinecurrentuass.is_set;
}

bool SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetfarendlinecurrentcvs.yfilter)
	|| ydk::is_set(sonetfarendlinecurrentess.yfilter)
	|| ydk::is_set(sonetfarendlinecurrentsess.yfilter)
	|| ydk::is_set(sonetfarendlinecurrentuass.yfilter);
}

std::string SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndLineCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetFarEndLineCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetfarendlinecurrentcvs.is_set || is_set(sonetfarendlinecurrentcvs.yfilter)) leaf_name_data.push_back(sonetfarendlinecurrentcvs.get_name_leafdata());
    if (sonetfarendlinecurrentess.is_set || is_set(sonetfarendlinecurrentess.yfilter)) leaf_name_data.push_back(sonetfarendlinecurrentess.get_name_leafdata());
    if (sonetfarendlinecurrentsess.is_set || is_set(sonetfarendlinecurrentsess.yfilter)) leaf_name_data.push_back(sonetfarendlinecurrentsess.get_name_leafdata());
    if (sonetfarendlinecurrentuass.is_set || is_set(sonetfarendlinecurrentuass.yfilter)) leaf_name_data.push_back(sonetfarendlinecurrentuass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndLineCurrentCVs")
    {
        sonetfarendlinecurrentcvs = value;
        sonetfarendlinecurrentcvs.value_namespace = name_space;
        sonetfarendlinecurrentcvs.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sonetFarEndLineCurrentUASs")
    {
        sonetfarendlinecurrentuass = value;
        sonetfarendlinecurrentuass.value_namespace = name_space;
        sonetfarendlinecurrentuass.value_namespace_prefix = name_space_prefix;
    }
}

void SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineCurrentCVs")
    {
        sonetfarendlinecurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineCurrentESs")
    {
        sonetfarendlinecurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineCurrentSESs")
    {
        sonetfarendlinecurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineCurrentUASs")
    {
        sonetfarendlinecurrentuass.yfilter = yfilter;
    }
}

bool SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetFarEndLineCurrentCVs" || name == "sonetFarEndLineCurrentESs" || name == "sonetFarEndLineCurrentSESs" || name == "sonetFarEndLineCurrentUASs")
        return true;
    return false;
}

SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervaltable()
{
    yang_name = "sonetFarEndLineIntervalTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetfarendlineintervaltable::~Sonetfarendlineintervaltable()
{
}

bool SonetMib::Sonetfarendlineintervaltable::has_data() const
{
    for (std::size_t index=0; index<sonetfarendlineintervalentry.size(); index++)
    {
        if(sonetfarendlineintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetfarendlineintervaltable::has_operation() const
{
    for (std::size_t index=0; index<sonetfarendlineintervalentry.size(); index++)
    {
        if(sonetfarendlineintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetfarendlineintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndLineIntervalTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetfarendlineintervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetfarendlineintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndLineIntervalEntry")
    {
        for(auto const & c : sonetfarendlineintervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry>();
        c->parent = this;
        sonetfarendlineintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetfarendlineintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetfarendlineintervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetfarendlineintervaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetfarendlineintervaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetfarendlineintervaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndLineIntervalEntry")
        return true;
    return false;
}

SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry::Sonetfarendlineintervalentry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetfarendlineintervalnumber{YType::int32, "sonetFarEndLineIntervalNumber"},
    sonetfarendlineintervalcvs{YType::uint32, "sonetFarEndLineIntervalCVs"},
    sonetfarendlineintervaless{YType::uint32, "sonetFarEndLineIntervalESs"},
    sonetfarendlineintervalsess{YType::uint32, "sonetFarEndLineIntervalSESs"},
    sonetfarendlineintervaluass{YType::uint32, "sonetFarEndLineIntervalUASs"},
    sonetfarendlineintervalvaliddata{YType::boolean, "sonetFarEndLineIntervalValidData"}
{
    yang_name = "sonetFarEndLineIntervalEntry"; yang_parent_name = "sonetFarEndLineIntervalTable";
}

SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry::~Sonetfarendlineintervalentry()
{
}

bool SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry::has_data() const
{
    return ifindex.is_set
	|| sonetfarendlineintervalnumber.is_set
	|| sonetfarendlineintervalcvs.is_set
	|| sonetfarendlineintervaless.is_set
	|| sonetfarendlineintervalsess.is_set
	|| sonetfarendlineintervaluass.is_set
	|| sonetfarendlineintervalvaliddata.is_set;
}

bool SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetfarendlineintervalnumber.yfilter)
	|| ydk::is_set(sonetfarendlineintervalcvs.yfilter)
	|| ydk::is_set(sonetfarendlineintervaless.yfilter)
	|| ydk::is_set(sonetfarendlineintervalsess.yfilter)
	|| ydk::is_set(sonetfarendlineintervaluass.yfilter)
	|| ydk::is_set(sonetfarendlineintervalvaliddata.yfilter);
}

std::string SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndLineIntervalEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[sonetFarEndLineIntervalNumber='" <<sonetfarendlineintervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetFarEndLineIntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetfarendlineintervalnumber.is_set || is_set(sonetfarendlineintervalnumber.yfilter)) leaf_name_data.push_back(sonetfarendlineintervalnumber.get_name_leafdata());
    if (sonetfarendlineintervalcvs.is_set || is_set(sonetfarendlineintervalcvs.yfilter)) leaf_name_data.push_back(sonetfarendlineintervalcvs.get_name_leafdata());
    if (sonetfarendlineintervaless.is_set || is_set(sonetfarendlineintervaless.yfilter)) leaf_name_data.push_back(sonetfarendlineintervaless.get_name_leafdata());
    if (sonetfarendlineintervalsess.is_set || is_set(sonetfarendlineintervalsess.yfilter)) leaf_name_data.push_back(sonetfarendlineintervalsess.get_name_leafdata());
    if (sonetfarendlineintervaluass.is_set || is_set(sonetfarendlineintervaluass.yfilter)) leaf_name_data.push_back(sonetfarendlineintervaluass.get_name_leafdata());
    if (sonetfarendlineintervalvaliddata.is_set || is_set(sonetfarendlineintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetfarendlineintervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sonetFarEndLineIntervalCVs")
    {
        sonetfarendlineintervalcvs = value;
        sonetfarendlineintervalcvs.value_namespace = name_space;
        sonetfarendlineintervalcvs.value_namespace_prefix = name_space_prefix;
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

void SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineIntervalNumber")
    {
        sonetfarendlineintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineIntervalCVs")
    {
        sonetfarendlineintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineIntervalESs")
    {
        sonetfarendlineintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndLineIntervalSESs")
    {
        sonetfarendlineintervalsess.yfilter = yfilter;
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

bool SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetFarEndLineIntervalNumber" || name == "sonetFarEndLineIntervalCVs" || name == "sonetFarEndLineIntervalESs" || name == "sonetFarEndLineIntervalSESs" || name == "sonetFarEndLineIntervalUASs" || name == "sonetFarEndLineIntervalValidData")
        return true;
    return false;
}

SonetMib::Sonetpathcurrenttable::Sonetpathcurrenttable()
{
    yang_name = "sonetPathCurrentTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetpathcurrenttable::~Sonetpathcurrenttable()
{
}

bool SonetMib::Sonetpathcurrenttable::has_data() const
{
    for (std::size_t index=0; index<sonetpathcurrententry.size(); index++)
    {
        if(sonetpathcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetpathcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<sonetpathcurrententry.size(); index++)
    {
        if(sonetpathcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetpathcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetPathCurrentTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetpathcurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetpathcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetPathCurrentEntry")
    {
        for(auto const & c : sonetpathcurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry>();
        c->parent = this;
        sonetpathcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetpathcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetpathcurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetpathcurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetpathcurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetpathcurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetPathCurrentEntry")
        return true;
    return false;
}

SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Sonetpathcurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    cspsignallingtransportmode{YType::enumeration, "CISCO-SONET-MIB:cspSignallingTransportMode"},
    cspsonetpathpayload{YType::enumeration, "CISCO-SONET-MIB:cspSonetPathPayload"},
    csptributarygroupingtype{YType::enumeration, "CISCO-SONET-MIB:cspTributaryGroupingType"},
    csptributarymappingtype{YType::enumeration, "CISCO-SONET-MIB:cspTributaryMappingType"},
    sonetpathcurrentcvs{YType::uint32, "sonetPathCurrentCVs"},
    sonetpathcurrentess{YType::uint32, "sonetPathCurrentESs"},
    sonetpathcurrentsess{YType::uint32, "sonetPathCurrentSESs"},
    sonetpathcurrentstatus{YType::int32, "sonetPathCurrentStatus"},
    sonetpathcurrentuass{YType::uint32, "sonetPathCurrentUASs"},
    sonetpathcurrentwidth{YType::enumeration, "sonetPathCurrentWidth"}
{
    yang_name = "sonetPathCurrentEntry"; yang_parent_name = "sonetPathCurrentTable";
}

SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::~Sonetpathcurrententry()
{
}

bool SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::has_data() const
{
    return ifindex.is_set
	|| cspsignallingtransportmode.is_set
	|| cspsonetpathpayload.is_set
	|| csptributarygroupingtype.is_set
	|| csptributarymappingtype.is_set
	|| sonetpathcurrentcvs.is_set
	|| sonetpathcurrentess.is_set
	|| sonetpathcurrentsess.is_set
	|| sonetpathcurrentstatus.is_set
	|| sonetpathcurrentuass.is_set
	|| sonetpathcurrentwidth.is_set;
}

bool SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cspsignallingtransportmode.yfilter)
	|| ydk::is_set(cspsonetpathpayload.yfilter)
	|| ydk::is_set(csptributarygroupingtype.yfilter)
	|| ydk::is_set(csptributarymappingtype.yfilter)
	|| ydk::is_set(sonetpathcurrentcvs.yfilter)
	|| ydk::is_set(sonetpathcurrentess.yfilter)
	|| ydk::is_set(sonetpathcurrentsess.yfilter)
	|| ydk::is_set(sonetpathcurrentstatus.yfilter)
	|| ydk::is_set(sonetpathcurrentuass.yfilter)
	|| ydk::is_set(sonetpathcurrentwidth.yfilter);
}

std::string SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetPathCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetPathCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cspsignallingtransportmode.is_set || is_set(cspsignallingtransportmode.yfilter)) leaf_name_data.push_back(cspsignallingtransportmode.get_name_leafdata());
    if (cspsonetpathpayload.is_set || is_set(cspsonetpathpayload.yfilter)) leaf_name_data.push_back(cspsonetpathpayload.get_name_leafdata());
    if (csptributarygroupingtype.is_set || is_set(csptributarygroupingtype.yfilter)) leaf_name_data.push_back(csptributarygroupingtype.get_name_leafdata());
    if (csptributarymappingtype.is_set || is_set(csptributarymappingtype.yfilter)) leaf_name_data.push_back(csptributarymappingtype.get_name_leafdata());
    if (sonetpathcurrentcvs.is_set || is_set(sonetpathcurrentcvs.yfilter)) leaf_name_data.push_back(sonetpathcurrentcvs.get_name_leafdata());
    if (sonetpathcurrentess.is_set || is_set(sonetpathcurrentess.yfilter)) leaf_name_data.push_back(sonetpathcurrentess.get_name_leafdata());
    if (sonetpathcurrentsess.is_set || is_set(sonetpathcurrentsess.yfilter)) leaf_name_data.push_back(sonetpathcurrentsess.get_name_leafdata());
    if (sonetpathcurrentstatus.is_set || is_set(sonetpathcurrentstatus.yfilter)) leaf_name_data.push_back(sonetpathcurrentstatus.get_name_leafdata());
    if (sonetpathcurrentuass.is_set || is_set(sonetpathcurrentuass.yfilter)) leaf_name_data.push_back(sonetpathcurrentuass.get_name_leafdata());
    if (sonetpathcurrentwidth.is_set || is_set(sonetpathcurrentwidth.yfilter)) leaf_name_data.push_back(sonetpathcurrentwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspSignallingTransportMode")
    {
        cspsignallingtransportmode = value;
        cspsignallingtransportmode.value_namespace = name_space;
        cspsignallingtransportmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspSonetPathPayload")
    {
        cspsonetpathpayload = value;
        cspsonetpathpayload.value_namespace = name_space;
        cspsonetpathpayload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTributaryGroupingType")
    {
        csptributarygroupingtype = value;
        csptributarygroupingtype.value_namespace = name_space;
        csptributarygroupingtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspTributaryMappingType")
    {
        csptributarymappingtype = value;
        csptributarymappingtype.value_namespace = name_space;
        csptributarymappingtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathCurrentCVs")
    {
        sonetpathcurrentcvs = value;
        sonetpathcurrentcvs.value_namespace = name_space;
        sonetpathcurrentcvs.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sonetPathCurrentStatus")
    {
        sonetpathcurrentstatus = value;
        sonetpathcurrentstatus.value_namespace = name_space;
        sonetpathcurrentstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathCurrentUASs")
    {
        sonetpathcurrentuass = value;
        sonetpathcurrentuass.value_namespace = name_space;
        sonetpathcurrentuass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetPathCurrentWidth")
    {
        sonetpathcurrentwidth = value;
        sonetpathcurrentwidth.value_namespace = name_space;
        sonetpathcurrentwidth.value_namespace_prefix = name_space_prefix;
    }
}

void SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cspSignallingTransportMode")
    {
        cspsignallingtransportmode.yfilter = yfilter;
    }
    if(value_path == "cspSonetPathPayload")
    {
        cspsonetpathpayload.yfilter = yfilter;
    }
    if(value_path == "cspTributaryGroupingType")
    {
        csptributarygroupingtype.yfilter = yfilter;
    }
    if(value_path == "cspTributaryMappingType")
    {
        csptributarymappingtype.yfilter = yfilter;
    }
    if(value_path == "sonetPathCurrentCVs")
    {
        sonetpathcurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetPathCurrentESs")
    {
        sonetpathcurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetPathCurrentSESs")
    {
        sonetpathcurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetPathCurrentStatus")
    {
        sonetpathcurrentstatus.yfilter = yfilter;
    }
    if(value_path == "sonetPathCurrentUASs")
    {
        sonetpathcurrentuass.yfilter = yfilter;
    }
    if(value_path == "sonetPathCurrentWidth")
    {
        sonetpathcurrentwidth.yfilter = yfilter;
    }
}

bool SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cspSignallingTransportMode" || name == "cspSonetPathPayload" || name == "cspTributaryGroupingType" || name == "cspTributaryMappingType" || name == "sonetPathCurrentCVs" || name == "sonetPathCurrentESs" || name == "sonetPathCurrentSESs" || name == "sonetPathCurrentStatus" || name == "sonetPathCurrentUASs" || name == "sonetPathCurrentWidth")
        return true;
    return false;
}

SonetMib::Sonetpathintervaltable::Sonetpathintervaltable()
{
    yang_name = "sonetPathIntervalTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetpathintervaltable::~Sonetpathintervaltable()
{
}

bool SonetMib::Sonetpathintervaltable::has_data() const
{
    for (std::size_t index=0; index<sonetpathintervalentry.size(); index++)
    {
        if(sonetpathintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetpathintervaltable::has_operation() const
{
    for (std::size_t index=0; index<sonetpathintervalentry.size(); index++)
    {
        if(sonetpathintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetpathintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetPathIntervalTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetpathintervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetpathintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetPathIntervalEntry")
    {
        for(auto const & c : sonetpathintervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetpathintervaltable::Sonetpathintervalentry>();
        c->parent = this;
        sonetpathintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetpathintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetpathintervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetpathintervaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetpathintervaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetpathintervaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetPathIntervalEntry")
        return true;
    return false;
}

SonetMib::Sonetpathintervaltable::Sonetpathintervalentry::Sonetpathintervalentry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetpathintervalnumber{YType::int32, "sonetPathIntervalNumber"},
    sonetpathintervalcvs{YType::uint32, "sonetPathIntervalCVs"},
    sonetpathintervaless{YType::uint32, "sonetPathIntervalESs"},
    sonetpathintervalsess{YType::uint32, "sonetPathIntervalSESs"},
    sonetpathintervaluass{YType::uint32, "sonetPathIntervalUASs"},
    sonetpathintervalvaliddata{YType::boolean, "sonetPathIntervalValidData"}
{
    yang_name = "sonetPathIntervalEntry"; yang_parent_name = "sonetPathIntervalTable";
}

SonetMib::Sonetpathintervaltable::Sonetpathintervalentry::~Sonetpathintervalentry()
{
}

bool SonetMib::Sonetpathintervaltable::Sonetpathintervalentry::has_data() const
{
    return ifindex.is_set
	|| sonetpathintervalnumber.is_set
	|| sonetpathintervalcvs.is_set
	|| sonetpathintervaless.is_set
	|| sonetpathintervalsess.is_set
	|| sonetpathintervaluass.is_set
	|| sonetpathintervalvaliddata.is_set;
}

bool SonetMib::Sonetpathintervaltable::Sonetpathintervalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetpathintervalnumber.yfilter)
	|| ydk::is_set(sonetpathintervalcvs.yfilter)
	|| ydk::is_set(sonetpathintervaless.yfilter)
	|| ydk::is_set(sonetpathintervalsess.yfilter)
	|| ydk::is_set(sonetpathintervaluass.yfilter)
	|| ydk::is_set(sonetpathintervalvaliddata.yfilter);
}

std::string SonetMib::Sonetpathintervaltable::Sonetpathintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetPathIntervalEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[sonetPathIntervalNumber='" <<sonetpathintervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetpathintervaltable::Sonetpathintervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetPathIntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetpathintervalnumber.is_set || is_set(sonetpathintervalnumber.yfilter)) leaf_name_data.push_back(sonetpathintervalnumber.get_name_leafdata());
    if (sonetpathintervalcvs.is_set || is_set(sonetpathintervalcvs.yfilter)) leaf_name_data.push_back(sonetpathintervalcvs.get_name_leafdata());
    if (sonetpathintervaless.is_set || is_set(sonetpathintervaless.yfilter)) leaf_name_data.push_back(sonetpathintervaless.get_name_leafdata());
    if (sonetpathintervalsess.is_set || is_set(sonetpathintervalsess.yfilter)) leaf_name_data.push_back(sonetpathintervalsess.get_name_leafdata());
    if (sonetpathintervaluass.is_set || is_set(sonetpathintervaluass.yfilter)) leaf_name_data.push_back(sonetpathintervaluass.get_name_leafdata());
    if (sonetpathintervalvaliddata.is_set || is_set(sonetpathintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetpathintervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetpathintervaltable::Sonetpathintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetpathintervaltable::Sonetpathintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetpathintervaltable::Sonetpathintervalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sonetPathIntervalCVs")
    {
        sonetpathintervalcvs = value;
        sonetpathintervalcvs.value_namespace = name_space;
        sonetpathintervalcvs.value_namespace_prefix = name_space_prefix;
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

void SonetMib::Sonetpathintervaltable::Sonetpathintervalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetPathIntervalNumber")
    {
        sonetpathintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetPathIntervalCVs")
    {
        sonetpathintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetPathIntervalESs")
    {
        sonetpathintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetPathIntervalSESs")
    {
        sonetpathintervalsess.yfilter = yfilter;
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

bool SonetMib::Sonetpathintervaltable::Sonetpathintervalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetPathIntervalNumber" || name == "sonetPathIntervalCVs" || name == "sonetPathIntervalESs" || name == "sonetPathIntervalSESs" || name == "sonetPathIntervalUASs" || name == "sonetPathIntervalValidData")
        return true;
    return false;
}

SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrenttable()
{
    yang_name = "sonetFarEndPathCurrentTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetfarendpathcurrenttable::~Sonetfarendpathcurrenttable()
{
}

bool SonetMib::Sonetfarendpathcurrenttable::has_data() const
{
    for (std::size_t index=0; index<sonetfarendpathcurrententry.size(); index++)
    {
        if(sonetfarendpathcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetfarendpathcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<sonetfarendpathcurrententry.size(); index++)
    {
        if(sonetfarendpathcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetfarendpathcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndPathCurrentTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetfarendpathcurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetfarendpathcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndPathCurrentEntry")
    {
        for(auto const & c : sonetfarendpathcurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry>();
        c->parent = this;
        sonetfarendpathcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetfarendpathcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetfarendpathcurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetfarendpathcurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetfarendpathcurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetfarendpathcurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndPathCurrentEntry")
        return true;
    return false;
}

SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry::Sonetfarendpathcurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetfarendpathcurrentcvs{YType::uint32, "sonetFarEndPathCurrentCVs"},
    sonetfarendpathcurrentess{YType::uint32, "sonetFarEndPathCurrentESs"},
    sonetfarendpathcurrentsess{YType::uint32, "sonetFarEndPathCurrentSESs"},
    sonetfarendpathcurrentuass{YType::uint32, "sonetFarEndPathCurrentUASs"}
{
    yang_name = "sonetFarEndPathCurrentEntry"; yang_parent_name = "sonetFarEndPathCurrentTable";
}

SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry::~Sonetfarendpathcurrententry()
{
}

bool SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry::has_data() const
{
    return ifindex.is_set
	|| sonetfarendpathcurrentcvs.is_set
	|| sonetfarendpathcurrentess.is_set
	|| sonetfarendpathcurrentsess.is_set
	|| sonetfarendpathcurrentuass.is_set;
}

bool SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetfarendpathcurrentcvs.yfilter)
	|| ydk::is_set(sonetfarendpathcurrentess.yfilter)
	|| ydk::is_set(sonetfarendpathcurrentsess.yfilter)
	|| ydk::is_set(sonetfarendpathcurrentuass.yfilter);
}

std::string SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndPathCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetFarEndPathCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetfarendpathcurrentcvs.is_set || is_set(sonetfarendpathcurrentcvs.yfilter)) leaf_name_data.push_back(sonetfarendpathcurrentcvs.get_name_leafdata());
    if (sonetfarendpathcurrentess.is_set || is_set(sonetfarendpathcurrentess.yfilter)) leaf_name_data.push_back(sonetfarendpathcurrentess.get_name_leafdata());
    if (sonetfarendpathcurrentsess.is_set || is_set(sonetfarendpathcurrentsess.yfilter)) leaf_name_data.push_back(sonetfarendpathcurrentsess.get_name_leafdata());
    if (sonetfarendpathcurrentuass.is_set || is_set(sonetfarendpathcurrentuass.yfilter)) leaf_name_data.push_back(sonetfarendpathcurrentuass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndPathCurrentCVs")
    {
        sonetfarendpathcurrentcvs = value;
        sonetfarendpathcurrentcvs.value_namespace = name_space;
        sonetfarendpathcurrentcvs.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sonetFarEndPathCurrentUASs")
    {
        sonetfarendpathcurrentuass = value;
        sonetfarendpathcurrentuass.value_namespace = name_space;
        sonetfarendpathcurrentuass.value_namespace_prefix = name_space_prefix;
    }
}

void SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathCurrentCVs")
    {
        sonetfarendpathcurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathCurrentESs")
    {
        sonetfarendpathcurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathCurrentSESs")
    {
        sonetfarendpathcurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathCurrentUASs")
    {
        sonetfarendpathcurrentuass.yfilter = yfilter;
    }
}

bool SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetFarEndPathCurrentCVs" || name == "sonetFarEndPathCurrentESs" || name == "sonetFarEndPathCurrentSESs" || name == "sonetFarEndPathCurrentUASs")
        return true;
    return false;
}

SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervaltable()
{
    yang_name = "sonetFarEndPathIntervalTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetfarendpathintervaltable::~Sonetfarendpathintervaltable()
{
}

bool SonetMib::Sonetfarendpathintervaltable::has_data() const
{
    for (std::size_t index=0; index<sonetfarendpathintervalentry.size(); index++)
    {
        if(sonetfarendpathintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetfarendpathintervaltable::has_operation() const
{
    for (std::size_t index=0; index<sonetfarendpathintervalentry.size(); index++)
    {
        if(sonetfarendpathintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetfarendpathintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndPathIntervalTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetfarendpathintervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetfarendpathintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndPathIntervalEntry")
    {
        for(auto const & c : sonetfarendpathintervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry>();
        c->parent = this;
        sonetfarendpathintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetfarendpathintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetfarendpathintervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetfarendpathintervaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetfarendpathintervaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetfarendpathintervaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndPathIntervalEntry")
        return true;
    return false;
}

SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry::Sonetfarendpathintervalentry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetfarendpathintervalnumber{YType::int32, "sonetFarEndPathIntervalNumber"},
    sonetfarendpathintervalcvs{YType::uint32, "sonetFarEndPathIntervalCVs"},
    sonetfarendpathintervaless{YType::uint32, "sonetFarEndPathIntervalESs"},
    sonetfarendpathintervalsess{YType::uint32, "sonetFarEndPathIntervalSESs"},
    sonetfarendpathintervaluass{YType::uint32, "sonetFarEndPathIntervalUASs"},
    sonetfarendpathintervalvaliddata{YType::boolean, "sonetFarEndPathIntervalValidData"}
{
    yang_name = "sonetFarEndPathIntervalEntry"; yang_parent_name = "sonetFarEndPathIntervalTable";
}

SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry::~Sonetfarendpathintervalentry()
{
}

bool SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry::has_data() const
{
    return ifindex.is_set
	|| sonetfarendpathintervalnumber.is_set
	|| sonetfarendpathintervalcvs.is_set
	|| sonetfarendpathintervaless.is_set
	|| sonetfarendpathintervalsess.is_set
	|| sonetfarendpathintervaluass.is_set
	|| sonetfarendpathintervalvaliddata.is_set;
}

bool SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetfarendpathintervalnumber.yfilter)
	|| ydk::is_set(sonetfarendpathintervalcvs.yfilter)
	|| ydk::is_set(sonetfarendpathintervaless.yfilter)
	|| ydk::is_set(sonetfarendpathintervalsess.yfilter)
	|| ydk::is_set(sonetfarendpathintervaluass.yfilter)
	|| ydk::is_set(sonetfarendpathintervalvaliddata.yfilter);
}

std::string SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndPathIntervalEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[sonetFarEndPathIntervalNumber='" <<sonetfarendpathintervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetFarEndPathIntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetfarendpathintervalnumber.is_set || is_set(sonetfarendpathintervalnumber.yfilter)) leaf_name_data.push_back(sonetfarendpathintervalnumber.get_name_leafdata());
    if (sonetfarendpathintervalcvs.is_set || is_set(sonetfarendpathintervalcvs.yfilter)) leaf_name_data.push_back(sonetfarendpathintervalcvs.get_name_leafdata());
    if (sonetfarendpathintervaless.is_set || is_set(sonetfarendpathintervaless.yfilter)) leaf_name_data.push_back(sonetfarendpathintervaless.get_name_leafdata());
    if (sonetfarendpathintervalsess.is_set || is_set(sonetfarendpathintervalsess.yfilter)) leaf_name_data.push_back(sonetfarendpathintervalsess.get_name_leafdata());
    if (sonetfarendpathintervaluass.is_set || is_set(sonetfarendpathintervaluass.yfilter)) leaf_name_data.push_back(sonetfarendpathintervaluass.get_name_leafdata());
    if (sonetfarendpathintervalvaliddata.is_set || is_set(sonetfarendpathintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetfarendpathintervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sonetFarEndPathIntervalCVs")
    {
        sonetfarendpathintervalcvs = value;
        sonetfarendpathintervalcvs.value_namespace = name_space;
        sonetfarendpathintervalcvs.value_namespace_prefix = name_space_prefix;
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

void SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathIntervalNumber")
    {
        sonetfarendpathintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathIntervalCVs")
    {
        sonetfarendpathintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathIntervalESs")
    {
        sonetfarendpathintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndPathIntervalSESs")
    {
        sonetfarendpathintervalsess.yfilter = yfilter;
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

bool SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetFarEndPathIntervalNumber" || name == "sonetFarEndPathIntervalCVs" || name == "sonetFarEndPathIntervalESs" || name == "sonetFarEndPathIntervalSESs" || name == "sonetFarEndPathIntervalUASs" || name == "sonetFarEndPathIntervalValidData")
        return true;
    return false;
}

SonetMib::Sonetvtcurrenttable::Sonetvtcurrenttable()
{
    yang_name = "sonetVTCurrentTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetvtcurrenttable::~Sonetvtcurrenttable()
{
}

bool SonetMib::Sonetvtcurrenttable::has_data() const
{
    for (std::size_t index=0; index<sonetvtcurrententry.size(); index++)
    {
        if(sonetvtcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetvtcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<sonetvtcurrententry.size(); index++)
    {
        if(sonetvtcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetvtcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetVTCurrentTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetvtcurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetvtcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetVTCurrentEntry")
    {
        for(auto const & c : sonetvtcurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry>();
        c->parent = this;
        sonetvtcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetvtcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetvtcurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetvtcurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetvtcurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetvtcurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetVTCurrentEntry")
        return true;
    return false;
}

SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::Sonetvtcurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetvtcurrentcvs{YType::uint32, "sonetVTCurrentCVs"},
    sonetvtcurrentess{YType::uint32, "sonetVTCurrentESs"},
    sonetvtcurrentsess{YType::uint32, "sonetVTCurrentSESs"},
    sonetvtcurrentstatus{YType::int32, "sonetVTCurrentStatus"},
    sonetvtcurrentuass{YType::uint32, "sonetVTCurrentUASs"},
    sonetvtcurrentwidth{YType::enumeration, "sonetVTCurrentWidth"}
{
    yang_name = "sonetVTCurrentEntry"; yang_parent_name = "sonetVTCurrentTable";
}

SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::~Sonetvtcurrententry()
{
}

bool SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::has_data() const
{
    return ifindex.is_set
	|| sonetvtcurrentcvs.is_set
	|| sonetvtcurrentess.is_set
	|| sonetvtcurrentsess.is_set
	|| sonetvtcurrentstatus.is_set
	|| sonetvtcurrentuass.is_set
	|| sonetvtcurrentwidth.is_set;
}

bool SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetvtcurrentcvs.yfilter)
	|| ydk::is_set(sonetvtcurrentess.yfilter)
	|| ydk::is_set(sonetvtcurrentsess.yfilter)
	|| ydk::is_set(sonetvtcurrentstatus.yfilter)
	|| ydk::is_set(sonetvtcurrentuass.yfilter)
	|| ydk::is_set(sonetvtcurrentwidth.yfilter);
}

std::string SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetVTCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetVTCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetvtcurrentcvs.is_set || is_set(sonetvtcurrentcvs.yfilter)) leaf_name_data.push_back(sonetvtcurrentcvs.get_name_leafdata());
    if (sonetvtcurrentess.is_set || is_set(sonetvtcurrentess.yfilter)) leaf_name_data.push_back(sonetvtcurrentess.get_name_leafdata());
    if (sonetvtcurrentsess.is_set || is_set(sonetvtcurrentsess.yfilter)) leaf_name_data.push_back(sonetvtcurrentsess.get_name_leafdata());
    if (sonetvtcurrentstatus.is_set || is_set(sonetvtcurrentstatus.yfilter)) leaf_name_data.push_back(sonetvtcurrentstatus.get_name_leafdata());
    if (sonetvtcurrentuass.is_set || is_set(sonetvtcurrentuass.yfilter)) leaf_name_data.push_back(sonetvtcurrentuass.get_name_leafdata());
    if (sonetvtcurrentwidth.is_set || is_set(sonetvtcurrentwidth.yfilter)) leaf_name_data.push_back(sonetvtcurrentwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTCurrentCVs")
    {
        sonetvtcurrentcvs = value;
        sonetvtcurrentcvs.value_namespace = name_space;
        sonetvtcurrentcvs.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sonetVTCurrentStatus")
    {
        sonetvtcurrentstatus = value;
        sonetvtcurrentstatus.value_namespace = name_space;
        sonetvtcurrentstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTCurrentUASs")
    {
        sonetvtcurrentuass = value;
        sonetvtcurrentuass.value_namespace = name_space;
        sonetvtcurrentuass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetVTCurrentWidth")
    {
        sonetvtcurrentwidth = value;
        sonetvtcurrentwidth.value_namespace = name_space;
        sonetvtcurrentwidth.value_namespace_prefix = name_space_prefix;
    }
}

void SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetVTCurrentCVs")
    {
        sonetvtcurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetVTCurrentESs")
    {
        sonetvtcurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetVTCurrentSESs")
    {
        sonetvtcurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetVTCurrentStatus")
    {
        sonetvtcurrentstatus.yfilter = yfilter;
    }
    if(value_path == "sonetVTCurrentUASs")
    {
        sonetvtcurrentuass.yfilter = yfilter;
    }
    if(value_path == "sonetVTCurrentWidth")
    {
        sonetvtcurrentwidth.yfilter = yfilter;
    }
}

bool SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetVTCurrentCVs" || name == "sonetVTCurrentESs" || name == "sonetVTCurrentSESs" || name == "sonetVTCurrentStatus" || name == "sonetVTCurrentUASs" || name == "sonetVTCurrentWidth")
        return true;
    return false;
}

SonetMib::Sonetvtintervaltable::Sonetvtintervaltable()
{
    yang_name = "sonetVTIntervalTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetvtintervaltable::~Sonetvtintervaltable()
{
}

bool SonetMib::Sonetvtintervaltable::has_data() const
{
    for (std::size_t index=0; index<sonetvtintervalentry.size(); index++)
    {
        if(sonetvtintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetvtintervaltable::has_operation() const
{
    for (std::size_t index=0; index<sonetvtintervalentry.size(); index++)
    {
        if(sonetvtintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetvtintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetVTIntervalTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetvtintervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetvtintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetVTIntervalEntry")
    {
        for(auto const & c : sonetvtintervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetvtintervaltable::Sonetvtintervalentry>();
        c->parent = this;
        sonetvtintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetvtintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetvtintervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetvtintervaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetvtintervaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetvtintervaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetVTIntervalEntry")
        return true;
    return false;
}

SonetMib::Sonetvtintervaltable::Sonetvtintervalentry::Sonetvtintervalentry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetvtintervalnumber{YType::int32, "sonetVTIntervalNumber"},
    sonetvtintervalcvs{YType::uint32, "sonetVTIntervalCVs"},
    sonetvtintervaless{YType::uint32, "sonetVTIntervalESs"},
    sonetvtintervalsess{YType::uint32, "sonetVTIntervalSESs"},
    sonetvtintervaluass{YType::uint32, "sonetVTIntervalUASs"},
    sonetvtintervalvaliddata{YType::boolean, "sonetVTIntervalValidData"}
{
    yang_name = "sonetVTIntervalEntry"; yang_parent_name = "sonetVTIntervalTable";
}

SonetMib::Sonetvtintervaltable::Sonetvtintervalentry::~Sonetvtintervalentry()
{
}

bool SonetMib::Sonetvtintervaltable::Sonetvtintervalentry::has_data() const
{
    return ifindex.is_set
	|| sonetvtintervalnumber.is_set
	|| sonetvtintervalcvs.is_set
	|| sonetvtintervaless.is_set
	|| sonetvtintervalsess.is_set
	|| sonetvtintervaluass.is_set
	|| sonetvtintervalvaliddata.is_set;
}

bool SonetMib::Sonetvtintervaltable::Sonetvtintervalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetvtintervalnumber.yfilter)
	|| ydk::is_set(sonetvtintervalcvs.yfilter)
	|| ydk::is_set(sonetvtintervaless.yfilter)
	|| ydk::is_set(sonetvtintervalsess.yfilter)
	|| ydk::is_set(sonetvtintervaluass.yfilter)
	|| ydk::is_set(sonetvtintervalvaliddata.yfilter);
}

std::string SonetMib::Sonetvtintervaltable::Sonetvtintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetVTIntervalEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[sonetVTIntervalNumber='" <<sonetvtintervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetvtintervaltable::Sonetvtintervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetVTIntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetvtintervalnumber.is_set || is_set(sonetvtintervalnumber.yfilter)) leaf_name_data.push_back(sonetvtintervalnumber.get_name_leafdata());
    if (sonetvtintervalcvs.is_set || is_set(sonetvtintervalcvs.yfilter)) leaf_name_data.push_back(sonetvtintervalcvs.get_name_leafdata());
    if (sonetvtintervaless.is_set || is_set(sonetvtintervaless.yfilter)) leaf_name_data.push_back(sonetvtintervaless.get_name_leafdata());
    if (sonetvtintervalsess.is_set || is_set(sonetvtintervalsess.yfilter)) leaf_name_data.push_back(sonetvtintervalsess.get_name_leafdata());
    if (sonetvtintervaluass.is_set || is_set(sonetvtintervaluass.yfilter)) leaf_name_data.push_back(sonetvtintervaluass.get_name_leafdata());
    if (sonetvtintervalvaliddata.is_set || is_set(sonetvtintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetvtintervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetvtintervaltable::Sonetvtintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetvtintervaltable::Sonetvtintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetvtintervaltable::Sonetvtintervalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sonetVTIntervalCVs")
    {
        sonetvtintervalcvs = value;
        sonetvtintervalcvs.value_namespace = name_space;
        sonetvtintervalcvs.value_namespace_prefix = name_space_prefix;
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

void SonetMib::Sonetvtintervaltable::Sonetvtintervalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetVTIntervalNumber")
    {
        sonetvtintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetVTIntervalCVs")
    {
        sonetvtintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetVTIntervalESs")
    {
        sonetvtintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetVTIntervalSESs")
    {
        sonetvtintervalsess.yfilter = yfilter;
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

bool SonetMib::Sonetvtintervaltable::Sonetvtintervalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetVTIntervalNumber" || name == "sonetVTIntervalCVs" || name == "sonetVTIntervalESs" || name == "sonetVTIntervalSESs" || name == "sonetVTIntervalUASs" || name == "sonetVTIntervalValidData")
        return true;
    return false;
}

SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrenttable()
{
    yang_name = "sonetFarEndVTCurrentTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetfarendvtcurrenttable::~Sonetfarendvtcurrenttable()
{
}

bool SonetMib::Sonetfarendvtcurrenttable::has_data() const
{
    for (std::size_t index=0; index<sonetfarendvtcurrententry.size(); index++)
    {
        if(sonetfarendvtcurrententry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetfarendvtcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<sonetfarendvtcurrententry.size(); index++)
    {
        if(sonetfarendvtcurrententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetfarendvtcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndVTCurrentTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetfarendvtcurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetfarendvtcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndVTCurrentEntry")
    {
        for(auto const & c : sonetfarendvtcurrententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry>();
        c->parent = this;
        sonetfarendvtcurrententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetfarendvtcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetfarendvtcurrententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetfarendvtcurrenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetfarendvtcurrenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetfarendvtcurrenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndVTCurrentEntry")
        return true;
    return false;
}

SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry::Sonetfarendvtcurrententry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetfarendvtcurrentcvs{YType::uint32, "sonetFarEndVTCurrentCVs"},
    sonetfarendvtcurrentess{YType::uint32, "sonetFarEndVTCurrentESs"},
    sonetfarendvtcurrentsess{YType::uint32, "sonetFarEndVTCurrentSESs"},
    sonetfarendvtcurrentuass{YType::uint32, "sonetFarEndVTCurrentUASs"}
{
    yang_name = "sonetFarEndVTCurrentEntry"; yang_parent_name = "sonetFarEndVTCurrentTable";
}

SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry::~Sonetfarendvtcurrententry()
{
}

bool SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry::has_data() const
{
    return ifindex.is_set
	|| sonetfarendvtcurrentcvs.is_set
	|| sonetfarendvtcurrentess.is_set
	|| sonetfarendvtcurrentsess.is_set
	|| sonetfarendvtcurrentuass.is_set;
}

bool SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetfarendvtcurrentcvs.yfilter)
	|| ydk::is_set(sonetfarendvtcurrentess.yfilter)
	|| ydk::is_set(sonetfarendvtcurrentsess.yfilter)
	|| ydk::is_set(sonetfarendvtcurrentuass.yfilter);
}

std::string SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndVTCurrentEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetFarEndVTCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetfarendvtcurrentcvs.is_set || is_set(sonetfarendvtcurrentcvs.yfilter)) leaf_name_data.push_back(sonetfarendvtcurrentcvs.get_name_leafdata());
    if (sonetfarendvtcurrentess.is_set || is_set(sonetfarendvtcurrentess.yfilter)) leaf_name_data.push_back(sonetfarendvtcurrentess.get_name_leafdata());
    if (sonetfarendvtcurrentsess.is_set || is_set(sonetfarendvtcurrentsess.yfilter)) leaf_name_data.push_back(sonetfarendvtcurrentsess.get_name_leafdata());
    if (sonetfarendvtcurrentuass.is_set || is_set(sonetfarendvtcurrentuass.yfilter)) leaf_name_data.push_back(sonetfarendvtcurrentuass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonetFarEndVTCurrentCVs")
    {
        sonetfarendvtcurrentcvs = value;
        sonetfarendvtcurrentcvs.value_namespace = name_space;
        sonetfarendvtcurrentcvs.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sonetFarEndVTCurrentUASs")
    {
        sonetfarendvtcurrentuass = value;
        sonetfarendvtcurrentuass.value_namespace = name_space;
        sonetfarendvtcurrentuass.value_namespace_prefix = name_space_prefix;
    }
}

void SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTCurrentCVs")
    {
        sonetfarendvtcurrentcvs.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTCurrentESs")
    {
        sonetfarendvtcurrentess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTCurrentSESs")
    {
        sonetfarendvtcurrentsess.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTCurrentUASs")
    {
        sonetfarendvtcurrentuass.yfilter = yfilter;
    }
}

bool SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetFarEndVTCurrentCVs" || name == "sonetFarEndVTCurrentESs" || name == "sonetFarEndVTCurrentSESs" || name == "sonetFarEndVTCurrentUASs")
        return true;
    return false;
}

SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervaltable()
{
    yang_name = "sonetFarEndVTIntervalTable"; yang_parent_name = "SONET-MIB";
}

SonetMib::Sonetfarendvtintervaltable::~Sonetfarendvtintervaltable()
{
}

bool SonetMib::Sonetfarendvtintervaltable::has_data() const
{
    for (std::size_t index=0; index<sonetfarendvtintervalentry.size(); index++)
    {
        if(sonetfarendvtintervalentry[index]->has_data())
            return true;
    }
    return false;
}

bool SonetMib::Sonetfarendvtintervaltable::has_operation() const
{
    for (std::size_t index=0; index<sonetfarendvtintervalentry.size(); index++)
    {
        if(sonetfarendvtintervalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SonetMib::Sonetfarendvtintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndVTIntervalTable";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetfarendvtintervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetfarendvtintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonetFarEndVTIntervalEntry")
    {
        for(auto const & c : sonetfarendvtintervalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry>();
        c->parent = this;
        sonetfarendvtintervalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetfarendvtintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonetfarendvtintervalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void SonetMib::Sonetfarendvtintervaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SonetMib::Sonetfarendvtintervaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SonetMib::Sonetfarendvtintervaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonetFarEndVTIntervalEntry")
        return true;
    return false;
}

SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry::Sonetfarendvtintervalentry()
    :
    ifindex{YType::str, "ifIndex"},
    sonetfarendvtintervalnumber{YType::int32, "sonetFarEndVTIntervalNumber"},
    sonetfarendvtintervalcvs{YType::uint32, "sonetFarEndVTIntervalCVs"},
    sonetfarendvtintervaless{YType::uint32, "sonetFarEndVTIntervalESs"},
    sonetfarendvtintervalsess{YType::uint32, "sonetFarEndVTIntervalSESs"},
    sonetfarendvtintervaluass{YType::uint32, "sonetFarEndVTIntervalUASs"},
    sonetfarendvtintervalvaliddata{YType::boolean, "sonetFarEndVTIntervalValidData"}
{
    yang_name = "sonetFarEndVTIntervalEntry"; yang_parent_name = "sonetFarEndVTIntervalTable";
}

SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry::~Sonetfarendvtintervalentry()
{
}

bool SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry::has_data() const
{
    return ifindex.is_set
	|| sonetfarendvtintervalnumber.is_set
	|| sonetfarendvtintervalcvs.is_set
	|| sonetfarendvtintervaless.is_set
	|| sonetfarendvtintervalsess.is_set
	|| sonetfarendvtintervaluass.is_set
	|| sonetfarendvtintervalvaliddata.is_set;
}

bool SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(sonetfarendvtintervalnumber.yfilter)
	|| ydk::is_set(sonetfarendvtintervalcvs.yfilter)
	|| ydk::is_set(sonetfarendvtintervaless.yfilter)
	|| ydk::is_set(sonetfarendvtintervalsess.yfilter)
	|| ydk::is_set(sonetfarendvtintervaluass.yfilter)
	|| ydk::is_set(sonetfarendvtintervalvaliddata.yfilter);
}

std::string SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonetFarEndVTIntervalEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[sonetFarEndVTIntervalNumber='" <<sonetfarendvtintervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "SONET-MIB:SONET-MIB/sonetFarEndVTIntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (sonetfarendvtintervalnumber.is_set || is_set(sonetfarendvtintervalnumber.yfilter)) leaf_name_data.push_back(sonetfarendvtintervalnumber.get_name_leafdata());
    if (sonetfarendvtintervalcvs.is_set || is_set(sonetfarendvtintervalcvs.yfilter)) leaf_name_data.push_back(sonetfarendvtintervalcvs.get_name_leafdata());
    if (sonetfarendvtintervaless.is_set || is_set(sonetfarendvtintervaless.yfilter)) leaf_name_data.push_back(sonetfarendvtintervaless.get_name_leafdata());
    if (sonetfarendvtintervalsess.is_set || is_set(sonetfarendvtintervalsess.yfilter)) leaf_name_data.push_back(sonetfarendvtintervalsess.get_name_leafdata());
    if (sonetfarendvtintervaluass.is_set || is_set(sonetfarendvtintervaluass.yfilter)) leaf_name_data.push_back(sonetfarendvtintervaluass.get_name_leafdata());
    if (sonetfarendvtintervalvaliddata.is_set || is_set(sonetfarendvtintervalvaliddata.yfilter)) leaf_name_data.push_back(sonetfarendvtintervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sonetFarEndVTIntervalCVs")
    {
        sonetfarendvtintervalcvs = value;
        sonetfarendvtintervalcvs.value_namespace = name_space;
        sonetfarendvtintervalcvs.value_namespace_prefix = name_space_prefix;
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

void SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTIntervalNumber")
    {
        sonetfarendvtintervalnumber.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTIntervalCVs")
    {
        sonetfarendvtintervalcvs.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTIntervalESs")
    {
        sonetfarendvtintervaless.yfilter = yfilter;
    }
    if(value_path == "sonetFarEndVTIntervalSESs")
    {
        sonetfarendvtintervalsess.yfilter = yfilter;
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

bool SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "sonetFarEndVTIntervalNumber" || name == "sonetFarEndVTIntervalCVs" || name == "sonetFarEndVTIntervalESs" || name == "sonetFarEndVTIntervalSESs" || name == "sonetFarEndVTIntervalUASs" || name == "sonetFarEndVTIntervalValidData")
        return true;
    return false;
}

const Enum::YLeaf SonetMib::Sonetmedium::Sonetsesthresholdset::other {1, "other"};
const Enum::YLeaf SonetMib::Sonetmedium::Sonetsesthresholdset::bellcore1991 {2, "bellcore1991"};
const Enum::YLeaf SonetMib::Sonetmedium::Sonetsesthresholdset::ansi1993 {3, "ansi1993"};
const Enum::YLeaf SonetMib::Sonetmedium::Sonetsesthresholdset::itu1995 {4, "itu1995"};
const Enum::YLeaf SonetMib::Sonetmedium::Sonetsesthresholdset::ansi1997 {5, "ansi1997"};

const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumtype::sonet {1, "sonet"};
const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumtype::sdh {2, "sdh"};

const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinecoding::sonetMediumOther {1, "sonetMediumOther"};
const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinecoding::sonetMediumB3ZS {2, "sonetMediumB3ZS"};
const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinecoding::sonetMediumCMI {3, "sonetMediumCMI"};
const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinecoding::sonetMediumNRZ {4, "sonetMediumNRZ"};
const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinecoding::sonetMediumRZ {5, "sonetMediumRZ"};

const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinetype::sonetOther {1, "sonetOther"};
const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinetype::sonetShortSingleMode {2, "sonetShortSingleMode"};
const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinetype::sonetLongSingleMode {3, "sonetLongSingleMode"};
const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinetype::sonetMultiMode {4, "sonetMultiMode"};
const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinetype::sonetCoax {5, "sonetCoax"};
const Enum::YLeaf SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinetype::sonetUTP {6, "sonetUTP"};

const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Sonetpathcurrentwidth::sts1 {1, "sts1"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Sonetpathcurrentwidth::sts3cSTM1 {2, "sts3cSTM1"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Sonetpathcurrentwidth::sts12cSTM4 {3, "sts12cSTM4"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Sonetpathcurrentwidth::sts24c {4, "sts24c"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Sonetpathcurrentwidth::sts48cSTM16 {5, "sts48cSTM16"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Sonetpathcurrentwidth::sts192cSTM64 {6, "sts192cSTM64"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Sonetpathcurrentwidth::sts768cSTM256 {7, "sts768cSTM256"};

const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsonetpathpayload::unequipped {1, "unequipped"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsonetpathpayload::unspecified {2, "unspecified"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsonetpathpayload::ds3 {3, "ds3"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsonetpathpayload::vt15vc11 {4, "vt15vc11"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsonetpathpayload::vt2vc12 {5, "vt2vc12"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsonetpathpayload::atmCell {6, "atmCell"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsonetpathpayload::hdlcFr {7, "hdlcFr"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsonetpathpayload::e3 {8, "e3"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsonetpathpayload::vtStructured {9, "vtStructured"};

const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Csptributarymappingtype::asynchronous {1, "asynchronous"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Csptributarymappingtype::byteSynchronous {2, "byteSynchronous"};

const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsignallingtransportmode::notApplicable {1, "notApplicable"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsignallingtransportmode::signallingTransferMode {2, "signallingTransferMode"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsignallingtransportmode::clearMode {3, "clearMode"};

const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Csptributarygroupingtype::notApplicable {1, "notApplicable"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Csptributarygroupingtype::au3Grouping {2, "au3Grouping"};
const Enum::YLeaf SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Csptributarygroupingtype::au4Grouping {3, "au4Grouping"};

const Enum::YLeaf SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::Sonetvtcurrentwidth::vtWidth15VC11 {1, "vtWidth15VC11"};
const Enum::YLeaf SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::Sonetvtcurrentwidth::vtWidth2VC12 {2, "vtWidth2VC12"};
const Enum::YLeaf SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::Sonetvtcurrentwidth::vtWidth3 {3, "vtWidth3"};
const Enum::YLeaf SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::Sonetvtcurrentwidth::vtWidth6VC2 {4, "vtWidth6VC2"};
const Enum::YLeaf SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::Sonetvtcurrentwidth::vtWidth6c {5, "vtWidth6c"};


}
}
