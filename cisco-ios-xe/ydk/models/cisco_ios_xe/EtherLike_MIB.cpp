
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "EtherLike_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace EtherLike_MIB {

Dot3Erroriniterror::Dot3Erroriniterror()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB", "EtherLike-MIB", "EtherLike-MIB:dot3ErrorInitError")
{

}

Dot3Erroriniterror::~Dot3Erroriniterror()
{
}

Dot3Errorloopbackerror::Dot3Errorloopbackerror()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB", "EtherLike-MIB", "EtherLike-MIB:dot3ErrorLoopbackError")
{

}

Dot3Errorloopbackerror::~Dot3Errorloopbackerror()
{
}

Dot3Testloopback::Dot3Testloopback()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB", "EtherLike-MIB", "EtherLike-MIB:dot3TestLoopBack")
{

}

Dot3Testloopback::~Dot3Testloopback()
{
}

Dot3Testtdr::Dot3Testtdr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB", "EtherLike-MIB", "EtherLike-MIB:dot3TestTdr")
{

}

Dot3Testtdr::~Dot3Testtdr()
{
}

EtherLikeMIB::EtherLikeMIB()
    :
    dot3colltable(std::make_shared<EtherLikeMIB::Dot3Colltable>())
	,dot3controltable(std::make_shared<EtherLikeMIB::Dot3Controltable>())
	,dot3hcstatstable(std::make_shared<EtherLikeMIB::Dot3Hcstatstable>())
	,dot3pausetable(std::make_shared<EtherLikeMIB::Dot3Pausetable>())
	,dot3statstable(std::make_shared<EtherLikeMIB::Dot3Statstable>())
{
    dot3colltable->parent = this;
    dot3controltable->parent = this;
    dot3hcstatstable->parent = this;
    dot3pausetable->parent = this;
    dot3statstable->parent = this;

    yang_name = "EtherLike-MIB"; yang_parent_name = "EtherLike-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

EtherLikeMIB::~EtherLikeMIB()
{
}

bool EtherLikeMIB::has_data() const
{
    return (dot3colltable !=  nullptr && dot3colltable->has_data())
	|| (dot3controltable !=  nullptr && dot3controltable->has_data())
	|| (dot3hcstatstable !=  nullptr && dot3hcstatstable->has_data())
	|| (dot3pausetable !=  nullptr && dot3pausetable->has_data())
	|| (dot3statstable !=  nullptr && dot3statstable->has_data());
}

bool EtherLikeMIB::has_operation() const
{
    return is_set(yfilter)
	|| (dot3colltable !=  nullptr && dot3colltable->has_operation())
	|| (dot3controltable !=  nullptr && dot3controltable->has_operation())
	|| (dot3hcstatstable !=  nullptr && dot3hcstatstable->has_operation())
	|| (dot3pausetable !=  nullptr && dot3pausetable->has_operation())
	|| (dot3statstable !=  nullptr && dot3statstable->has_operation());
}

std::string EtherLikeMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EtherLikeMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3CollTable")
    {
        if(dot3colltable == nullptr)
        {
            dot3colltable = std::make_shared<EtherLikeMIB::Dot3Colltable>();
        }
        return dot3colltable;
    }

    if(child_yang_name == "dot3ControlTable")
    {
        if(dot3controltable == nullptr)
        {
            dot3controltable = std::make_shared<EtherLikeMIB::Dot3Controltable>();
        }
        return dot3controltable;
    }

    if(child_yang_name == "dot3HCStatsTable")
    {
        if(dot3hcstatstable == nullptr)
        {
            dot3hcstatstable = std::make_shared<EtherLikeMIB::Dot3Hcstatstable>();
        }
        return dot3hcstatstable;
    }

    if(child_yang_name == "dot3PauseTable")
    {
        if(dot3pausetable == nullptr)
        {
            dot3pausetable = std::make_shared<EtherLikeMIB::Dot3Pausetable>();
        }
        return dot3pausetable;
    }

    if(child_yang_name == "dot3StatsTable")
    {
        if(dot3statstable == nullptr)
        {
            dot3statstable = std::make_shared<EtherLikeMIB::Dot3Statstable>();
        }
        return dot3statstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherLikeMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot3colltable != nullptr)
    {
        children["dot3CollTable"] = dot3colltable;
    }

    if(dot3controltable != nullptr)
    {
        children["dot3ControlTable"] = dot3controltable;
    }

    if(dot3hcstatstable != nullptr)
    {
        children["dot3HCStatsTable"] = dot3hcstatstable;
    }

    if(dot3pausetable != nullptr)
    {
        children["dot3PauseTable"] = dot3pausetable;
    }

    if(dot3statstable != nullptr)
    {
        children["dot3StatsTable"] = dot3statstable;
    }

    return children;
}

void EtherLikeMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLikeMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> EtherLikeMIB::clone_ptr() const
{
    return std::make_shared<EtherLikeMIB>();
}

std::string EtherLikeMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string EtherLikeMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function EtherLikeMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> EtherLikeMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool EtherLikeMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3CollTable" || name == "dot3ControlTable" || name == "dot3HCStatsTable" || name == "dot3PauseTable" || name == "dot3StatsTable")
        return true;
    return false;
}

EtherLikeMIB::Dot3Colltable::Dot3Colltable()
{

    yang_name = "dot3CollTable"; yang_parent_name = "EtherLike-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

EtherLikeMIB::Dot3Colltable::~Dot3Colltable()
{
}

bool EtherLikeMIB::Dot3Colltable::has_data() const
{
    for (std::size_t index=0; index<dot3collentry.size(); index++)
    {
        if(dot3collentry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLikeMIB::Dot3Colltable::has_operation() const
{
    for (std::size_t index=0; index<dot3collentry.size(); index++)
    {
        if(dot3collentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLikeMIB::Dot3Colltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3Colltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3CollTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3Colltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EtherLikeMIB::Dot3Colltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3CollEntry")
    {
        for(auto const & c : dot3collentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherLikeMIB::Dot3Colltable::Dot3Collentry>();
        c->parent = this;
        dot3collentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherLikeMIB::Dot3Colltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot3collentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherLikeMIB::Dot3Colltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLikeMIB::Dot3Colltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLikeMIB::Dot3Colltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3CollEntry")
        return true;
    return false;
}

EtherLikeMIB::Dot3Colltable::Dot3Collentry::Dot3Collentry()
    :
    ifindex{YType::str, "ifIndex"},
    dot3collcount{YType::int32, "dot3CollCount"},
    dot3collfrequencies{YType::uint32, "dot3CollFrequencies"}
{

    yang_name = "dot3CollEntry"; yang_parent_name = "dot3CollTable"; is_top_level_class = false; has_list_ancestor = false;
}

EtherLikeMIB::Dot3Colltable::Dot3Collentry::~Dot3Collentry()
{
}

bool EtherLikeMIB::Dot3Colltable::Dot3Collentry::has_data() const
{
    return ifindex.is_set
	|| dot3collcount.is_set
	|| dot3collfrequencies.is_set;
}

bool EtherLikeMIB::Dot3Colltable::Dot3Collentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(dot3collcount.yfilter)
	|| ydk::is_set(dot3collfrequencies.yfilter);
}

std::string EtherLikeMIB::Dot3Colltable::Dot3Collentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3CollTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3Colltable::Dot3Collentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3CollEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[dot3CollCount='" <<dot3collcount <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3Colltable::Dot3Collentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (dot3collcount.is_set || is_set(dot3collcount.yfilter)) leaf_name_data.push_back(dot3collcount.get_name_leafdata());
    if (dot3collfrequencies.is_set || is_set(dot3collfrequencies.yfilter)) leaf_name_data.push_back(dot3collfrequencies.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EtherLikeMIB::Dot3Colltable::Dot3Collentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherLikeMIB::Dot3Colltable::Dot3Collentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherLikeMIB::Dot3Colltable::Dot3Collentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3CollCount")
    {
        dot3collcount = value;
        dot3collcount.value_namespace = name_space;
        dot3collcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3CollFrequencies")
    {
        dot3collfrequencies = value;
        dot3collfrequencies.value_namespace = name_space;
        dot3collfrequencies.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLikeMIB::Dot3Colltable::Dot3Collentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "dot3CollCount")
    {
        dot3collcount.yfilter = yfilter;
    }
    if(value_path == "dot3CollFrequencies")
    {
        dot3collfrequencies.yfilter = yfilter;
    }
}

bool EtherLikeMIB::Dot3Colltable::Dot3Collentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "dot3CollCount" || name == "dot3CollFrequencies")
        return true;
    return false;
}

EtherLikeMIB::Dot3Controltable::Dot3Controltable()
{

    yang_name = "dot3ControlTable"; yang_parent_name = "EtherLike-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

EtherLikeMIB::Dot3Controltable::~Dot3Controltable()
{
}

bool EtherLikeMIB::Dot3Controltable::has_data() const
{
    for (std::size_t index=0; index<dot3controlentry.size(); index++)
    {
        if(dot3controlentry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLikeMIB::Dot3Controltable::has_operation() const
{
    for (std::size_t index=0; index<dot3controlentry.size(); index++)
    {
        if(dot3controlentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLikeMIB::Dot3Controltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3Controltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3ControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3Controltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EtherLikeMIB::Dot3Controltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3ControlEntry")
    {
        for(auto const & c : dot3controlentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherLikeMIB::Dot3Controltable::Dot3Controlentry>();
        c->parent = this;
        dot3controlentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherLikeMIB::Dot3Controltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot3controlentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherLikeMIB::Dot3Controltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLikeMIB::Dot3Controltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLikeMIB::Dot3Controltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3ControlEntry")
        return true;
    return false;
}

EtherLikeMIB::Dot3Controltable::Dot3Controlentry::Dot3Controlentry()
    :
    dot3statsindex{YType::str, "dot3StatsIndex"},
    dot3controlfunctionssupported{YType::bits, "dot3ControlFunctionsSupported"},
    dot3controlinunknownopcodes{YType::uint32, "dot3ControlInUnknownOpcodes"},
    dot3hccontrolinunknownopcodes{YType::uint64, "dot3HCControlInUnknownOpcodes"}
{

    yang_name = "dot3ControlEntry"; yang_parent_name = "dot3ControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

EtherLikeMIB::Dot3Controltable::Dot3Controlentry::~Dot3Controlentry()
{
}

bool EtherLikeMIB::Dot3Controltable::Dot3Controlentry::has_data() const
{
    return dot3statsindex.is_set
	|| dot3controlfunctionssupported.is_set
	|| dot3controlinunknownopcodes.is_set
	|| dot3hccontrolinunknownopcodes.is_set;
}

bool EtherLikeMIB::Dot3Controltable::Dot3Controlentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot3statsindex.yfilter)
	|| ydk::is_set(dot3controlfunctionssupported.yfilter)
	|| ydk::is_set(dot3controlinunknownopcodes.yfilter)
	|| ydk::is_set(dot3hccontrolinunknownopcodes.yfilter);
}

std::string EtherLikeMIB::Dot3Controltable::Dot3Controlentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3ControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3Controltable::Dot3Controlentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3ControlEntry" <<"[dot3StatsIndex='" <<dot3statsindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3Controltable::Dot3Controlentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.yfilter)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (dot3controlfunctionssupported.is_set || is_set(dot3controlfunctionssupported.yfilter)) leaf_name_data.push_back(dot3controlfunctionssupported.get_name_leafdata());
    if (dot3controlinunknownopcodes.is_set || is_set(dot3controlinunknownopcodes.yfilter)) leaf_name_data.push_back(dot3controlinunknownopcodes.get_name_leafdata());
    if (dot3hccontrolinunknownopcodes.is_set || is_set(dot3hccontrolinunknownopcodes.yfilter)) leaf_name_data.push_back(dot3hccontrolinunknownopcodes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EtherLikeMIB::Dot3Controltable::Dot3Controlentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherLikeMIB::Dot3Controltable::Dot3Controlentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherLikeMIB::Dot3Controltable::Dot3Controlentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex = value;
        dot3statsindex.value_namespace = name_space;
        dot3statsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3ControlFunctionsSupported")
    {
        dot3controlfunctionssupported[value] = true;
    }
    if(value_path == "dot3ControlInUnknownOpcodes")
    {
        dot3controlinunknownopcodes = value;
        dot3controlinunknownopcodes.value_namespace = name_space;
        dot3controlinunknownopcodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3HCControlInUnknownOpcodes")
    {
        dot3hccontrolinunknownopcodes = value;
        dot3hccontrolinunknownopcodes.value_namespace = name_space;
        dot3hccontrolinunknownopcodes.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLikeMIB::Dot3Controltable::Dot3Controlentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex.yfilter = yfilter;
    }
    if(value_path == "dot3ControlFunctionsSupported")
    {
        dot3controlfunctionssupported.yfilter = yfilter;
    }
    if(value_path == "dot3ControlInUnknownOpcodes")
    {
        dot3controlinunknownopcodes.yfilter = yfilter;
    }
    if(value_path == "dot3HCControlInUnknownOpcodes")
    {
        dot3hccontrolinunknownopcodes.yfilter = yfilter;
    }
}

bool EtherLikeMIB::Dot3Controltable::Dot3Controlentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsIndex" || name == "dot3ControlFunctionsSupported" || name == "dot3ControlInUnknownOpcodes" || name == "dot3HCControlInUnknownOpcodes")
        return true;
    return false;
}

EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatstable()
{

    yang_name = "dot3HCStatsTable"; yang_parent_name = "EtherLike-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

EtherLikeMIB::Dot3Hcstatstable::~Dot3Hcstatstable()
{
}

bool EtherLikeMIB::Dot3Hcstatstable::has_data() const
{
    for (std::size_t index=0; index<dot3hcstatsentry.size(); index++)
    {
        if(dot3hcstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLikeMIB::Dot3Hcstatstable::has_operation() const
{
    for (std::size_t index=0; index<dot3hcstatsentry.size(); index++)
    {
        if(dot3hcstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLikeMIB::Dot3Hcstatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3Hcstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3HCStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3Hcstatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EtherLikeMIB::Dot3Hcstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3HCStatsEntry")
    {
        for(auto const & c : dot3hcstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry>();
        c->parent = this;
        dot3hcstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherLikeMIB::Dot3Hcstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot3hcstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherLikeMIB::Dot3Hcstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLikeMIB::Dot3Hcstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLikeMIB::Dot3Hcstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3HCStatsEntry")
        return true;
    return false;
}

EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry::Dot3Hcstatsentry()
    :
    dot3statsindex{YType::str, "dot3StatsIndex"},
    dot3hcstatsalignmenterrors{YType::uint64, "dot3HCStatsAlignmentErrors"},
    dot3hcstatsfcserrors{YType::uint64, "dot3HCStatsFCSErrors"},
    dot3hcstatsframetoolongs{YType::uint64, "dot3HCStatsFrameTooLongs"},
    dot3hcstatsinternalmacreceiveerrors{YType::uint64, "dot3HCStatsInternalMacReceiveErrors"},
    dot3hcstatsinternalmactransmiterrors{YType::uint64, "dot3HCStatsInternalMacTransmitErrors"},
    dot3hcstatssymbolerrors{YType::uint64, "dot3HCStatsSymbolErrors"}
{

    yang_name = "dot3HCStatsEntry"; yang_parent_name = "dot3HCStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry::~Dot3Hcstatsentry()
{
}

bool EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry::has_data() const
{
    return dot3statsindex.is_set
	|| dot3hcstatsalignmenterrors.is_set
	|| dot3hcstatsfcserrors.is_set
	|| dot3hcstatsframetoolongs.is_set
	|| dot3hcstatsinternalmacreceiveerrors.is_set
	|| dot3hcstatsinternalmactransmiterrors.is_set
	|| dot3hcstatssymbolerrors.is_set;
}

bool EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot3statsindex.yfilter)
	|| ydk::is_set(dot3hcstatsalignmenterrors.yfilter)
	|| ydk::is_set(dot3hcstatsfcserrors.yfilter)
	|| ydk::is_set(dot3hcstatsframetoolongs.yfilter)
	|| ydk::is_set(dot3hcstatsinternalmacreceiveerrors.yfilter)
	|| ydk::is_set(dot3hcstatsinternalmactransmiterrors.yfilter)
	|| ydk::is_set(dot3hcstatssymbolerrors.yfilter);
}

std::string EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3HCStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3HCStatsEntry" <<"[dot3StatsIndex='" <<dot3statsindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.yfilter)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (dot3hcstatsalignmenterrors.is_set || is_set(dot3hcstatsalignmenterrors.yfilter)) leaf_name_data.push_back(dot3hcstatsalignmenterrors.get_name_leafdata());
    if (dot3hcstatsfcserrors.is_set || is_set(dot3hcstatsfcserrors.yfilter)) leaf_name_data.push_back(dot3hcstatsfcserrors.get_name_leafdata());
    if (dot3hcstatsframetoolongs.is_set || is_set(dot3hcstatsframetoolongs.yfilter)) leaf_name_data.push_back(dot3hcstatsframetoolongs.get_name_leafdata());
    if (dot3hcstatsinternalmacreceiveerrors.is_set || is_set(dot3hcstatsinternalmacreceiveerrors.yfilter)) leaf_name_data.push_back(dot3hcstatsinternalmacreceiveerrors.get_name_leafdata());
    if (dot3hcstatsinternalmactransmiterrors.is_set || is_set(dot3hcstatsinternalmactransmiterrors.yfilter)) leaf_name_data.push_back(dot3hcstatsinternalmactransmiterrors.get_name_leafdata());
    if (dot3hcstatssymbolerrors.is_set || is_set(dot3hcstatssymbolerrors.yfilter)) leaf_name_data.push_back(dot3hcstatssymbolerrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex = value;
        dot3statsindex.value_namespace = name_space;
        dot3statsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3HCStatsAlignmentErrors")
    {
        dot3hcstatsalignmenterrors = value;
        dot3hcstatsalignmenterrors.value_namespace = name_space;
        dot3hcstatsalignmenterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3HCStatsFCSErrors")
    {
        dot3hcstatsfcserrors = value;
        dot3hcstatsfcserrors.value_namespace = name_space;
        dot3hcstatsfcserrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3HCStatsFrameTooLongs")
    {
        dot3hcstatsframetoolongs = value;
        dot3hcstatsframetoolongs.value_namespace = name_space;
        dot3hcstatsframetoolongs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3HCStatsInternalMacReceiveErrors")
    {
        dot3hcstatsinternalmacreceiveerrors = value;
        dot3hcstatsinternalmacreceiveerrors.value_namespace = name_space;
        dot3hcstatsinternalmacreceiveerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3HCStatsInternalMacTransmitErrors")
    {
        dot3hcstatsinternalmactransmiterrors = value;
        dot3hcstatsinternalmactransmiterrors.value_namespace = name_space;
        dot3hcstatsinternalmactransmiterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3HCStatsSymbolErrors")
    {
        dot3hcstatssymbolerrors = value;
        dot3hcstatssymbolerrors.value_namespace = name_space;
        dot3hcstatssymbolerrors.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex.yfilter = yfilter;
    }
    if(value_path == "dot3HCStatsAlignmentErrors")
    {
        dot3hcstatsalignmenterrors.yfilter = yfilter;
    }
    if(value_path == "dot3HCStatsFCSErrors")
    {
        dot3hcstatsfcserrors.yfilter = yfilter;
    }
    if(value_path == "dot3HCStatsFrameTooLongs")
    {
        dot3hcstatsframetoolongs.yfilter = yfilter;
    }
    if(value_path == "dot3HCStatsInternalMacReceiveErrors")
    {
        dot3hcstatsinternalmacreceiveerrors.yfilter = yfilter;
    }
    if(value_path == "dot3HCStatsInternalMacTransmitErrors")
    {
        dot3hcstatsinternalmactransmiterrors.yfilter = yfilter;
    }
    if(value_path == "dot3HCStatsSymbolErrors")
    {
        dot3hcstatssymbolerrors.yfilter = yfilter;
    }
}

bool EtherLikeMIB::Dot3Hcstatstable::Dot3Hcstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsIndex" || name == "dot3HCStatsAlignmentErrors" || name == "dot3HCStatsFCSErrors" || name == "dot3HCStatsFrameTooLongs" || name == "dot3HCStatsInternalMacReceiveErrors" || name == "dot3HCStatsInternalMacTransmitErrors" || name == "dot3HCStatsSymbolErrors")
        return true;
    return false;
}

EtherLikeMIB::Dot3Pausetable::Dot3Pausetable()
{

    yang_name = "dot3PauseTable"; yang_parent_name = "EtherLike-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

EtherLikeMIB::Dot3Pausetable::~Dot3Pausetable()
{
}

bool EtherLikeMIB::Dot3Pausetable::has_data() const
{
    for (std::size_t index=0; index<dot3pauseentry.size(); index++)
    {
        if(dot3pauseentry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLikeMIB::Dot3Pausetable::has_operation() const
{
    for (std::size_t index=0; index<dot3pauseentry.size(); index++)
    {
        if(dot3pauseentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLikeMIB::Dot3Pausetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3Pausetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3PauseTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3Pausetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EtherLikeMIB::Dot3Pausetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3PauseEntry")
    {
        for(auto const & c : dot3pauseentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry>();
        c->parent = this;
        dot3pauseentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherLikeMIB::Dot3Pausetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot3pauseentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherLikeMIB::Dot3Pausetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLikeMIB::Dot3Pausetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLikeMIB::Dot3Pausetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3PauseEntry")
        return true;
    return false;
}

EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::Dot3Pauseentry()
    :
    dot3statsindex{YType::str, "dot3StatsIndex"},
    dot3hcinpauseframes{YType::uint64, "dot3HCInPauseFrames"},
    dot3hcoutpauseframes{YType::uint64, "dot3HCOutPauseFrames"},
    dot3inpauseframes{YType::uint32, "dot3InPauseFrames"},
    dot3outpauseframes{YType::uint32, "dot3OutPauseFrames"},
    dot3pauseadminmode{YType::enumeration, "dot3PauseAdminMode"},
    dot3pauseopermode{YType::enumeration, "dot3PauseOperMode"}
{

    yang_name = "dot3PauseEntry"; yang_parent_name = "dot3PauseTable"; is_top_level_class = false; has_list_ancestor = false;
}

EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::~Dot3Pauseentry()
{
}

bool EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::has_data() const
{
    return dot3statsindex.is_set
	|| dot3hcinpauseframes.is_set
	|| dot3hcoutpauseframes.is_set
	|| dot3inpauseframes.is_set
	|| dot3outpauseframes.is_set
	|| dot3pauseadminmode.is_set
	|| dot3pauseopermode.is_set;
}

bool EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot3statsindex.yfilter)
	|| ydk::is_set(dot3hcinpauseframes.yfilter)
	|| ydk::is_set(dot3hcoutpauseframes.yfilter)
	|| ydk::is_set(dot3inpauseframes.yfilter)
	|| ydk::is_set(dot3outpauseframes.yfilter)
	|| ydk::is_set(dot3pauseadminmode.yfilter)
	|| ydk::is_set(dot3pauseopermode.yfilter);
}

std::string EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3PauseTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3PauseEntry" <<"[dot3StatsIndex='" <<dot3statsindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.yfilter)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (dot3hcinpauseframes.is_set || is_set(dot3hcinpauseframes.yfilter)) leaf_name_data.push_back(dot3hcinpauseframes.get_name_leafdata());
    if (dot3hcoutpauseframes.is_set || is_set(dot3hcoutpauseframes.yfilter)) leaf_name_data.push_back(dot3hcoutpauseframes.get_name_leafdata());
    if (dot3inpauseframes.is_set || is_set(dot3inpauseframes.yfilter)) leaf_name_data.push_back(dot3inpauseframes.get_name_leafdata());
    if (dot3outpauseframes.is_set || is_set(dot3outpauseframes.yfilter)) leaf_name_data.push_back(dot3outpauseframes.get_name_leafdata());
    if (dot3pauseadminmode.is_set || is_set(dot3pauseadminmode.yfilter)) leaf_name_data.push_back(dot3pauseadminmode.get_name_leafdata());
    if (dot3pauseopermode.is_set || is_set(dot3pauseopermode.yfilter)) leaf_name_data.push_back(dot3pauseopermode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex = value;
        dot3statsindex.value_namespace = name_space;
        dot3statsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3HCInPauseFrames")
    {
        dot3hcinpauseframes = value;
        dot3hcinpauseframes.value_namespace = name_space;
        dot3hcinpauseframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3HCOutPauseFrames")
    {
        dot3hcoutpauseframes = value;
        dot3hcoutpauseframes.value_namespace = name_space;
        dot3hcoutpauseframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3InPauseFrames")
    {
        dot3inpauseframes = value;
        dot3inpauseframes.value_namespace = name_space;
        dot3inpauseframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3OutPauseFrames")
    {
        dot3outpauseframes = value;
        dot3outpauseframes.value_namespace = name_space;
        dot3outpauseframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3PauseAdminMode")
    {
        dot3pauseadminmode = value;
        dot3pauseadminmode.value_namespace = name_space;
        dot3pauseadminmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3PauseOperMode")
    {
        dot3pauseopermode = value;
        dot3pauseopermode.value_namespace = name_space;
        dot3pauseopermode.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex.yfilter = yfilter;
    }
    if(value_path == "dot3HCInPauseFrames")
    {
        dot3hcinpauseframes.yfilter = yfilter;
    }
    if(value_path == "dot3HCOutPauseFrames")
    {
        dot3hcoutpauseframes.yfilter = yfilter;
    }
    if(value_path == "dot3InPauseFrames")
    {
        dot3inpauseframes.yfilter = yfilter;
    }
    if(value_path == "dot3OutPauseFrames")
    {
        dot3outpauseframes.yfilter = yfilter;
    }
    if(value_path == "dot3PauseAdminMode")
    {
        dot3pauseadminmode.yfilter = yfilter;
    }
    if(value_path == "dot3PauseOperMode")
    {
        dot3pauseopermode.yfilter = yfilter;
    }
}

bool EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsIndex" || name == "dot3HCInPauseFrames" || name == "dot3HCOutPauseFrames" || name == "dot3InPauseFrames" || name == "dot3OutPauseFrames" || name == "dot3PauseAdminMode" || name == "dot3PauseOperMode")
        return true;
    return false;
}

EtherLikeMIB::Dot3Statstable::Dot3Statstable()
{

    yang_name = "dot3StatsTable"; yang_parent_name = "EtherLike-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

EtherLikeMIB::Dot3Statstable::~Dot3Statstable()
{
}

bool EtherLikeMIB::Dot3Statstable::has_data() const
{
    for (std::size_t index=0; index<dot3statsentry.size(); index++)
    {
        if(dot3statsentry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLikeMIB::Dot3Statstable::has_operation() const
{
    for (std::size_t index=0; index<dot3statsentry.size(); index++)
    {
        if(dot3statsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLikeMIB::Dot3Statstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3Statstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3StatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3Statstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> EtherLikeMIB::Dot3Statstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3StatsEntry")
    {
        for(auto const & c : dot3statsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherLikeMIB::Dot3Statstable::Dot3Statsentry>();
        c->parent = this;
        dot3statsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherLikeMIB::Dot3Statstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot3statsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherLikeMIB::Dot3Statstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLikeMIB::Dot3Statstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLikeMIB::Dot3Statstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsEntry")
        return true;
    return false;
}

EtherLikeMIB::Dot3Statstable::Dot3Statsentry::Dot3Statsentry()
    :
    dot3statsindex{YType::int32, "dot3StatsIndex"},
    dot3statsalignmenterrors{YType::uint32, "dot3StatsAlignmentErrors"},
    dot3statscarriersenseerrors{YType::uint32, "dot3StatsCarrierSenseErrors"},
    dot3statsdeferredtransmissions{YType::uint32, "dot3StatsDeferredTransmissions"},
    dot3statsduplexstatus{YType::enumeration, "dot3StatsDuplexStatus"},
    dot3statsetherchipset{YType::str, "dot3StatsEtherChipSet"},
    dot3statsexcessivecollisions{YType::uint32, "dot3StatsExcessiveCollisions"},
    dot3statsfcserrors{YType::uint32, "dot3StatsFCSErrors"},
    dot3statsframetoolongs{YType::uint32, "dot3StatsFrameTooLongs"},
    dot3statsinternalmacreceiveerrors{YType::uint32, "dot3StatsInternalMacReceiveErrors"},
    dot3statsinternalmactransmiterrors{YType::uint32, "dot3StatsInternalMacTransmitErrors"},
    dot3statslatecollisions{YType::uint32, "dot3StatsLateCollisions"},
    dot3statsmultiplecollisionframes{YType::uint32, "dot3StatsMultipleCollisionFrames"},
    dot3statsratecontrolability{YType::boolean, "dot3StatsRateControlAbility"},
    dot3statsratecontrolstatus{YType::enumeration, "dot3StatsRateControlStatus"},
    dot3statssinglecollisionframes{YType::uint32, "dot3StatsSingleCollisionFrames"},
    dot3statssqetesterrors{YType::uint32, "dot3StatsSQETestErrors"},
    dot3statssymbolerrors{YType::uint32, "dot3StatsSymbolErrors"}
{

    yang_name = "dot3StatsEntry"; yang_parent_name = "dot3StatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

EtherLikeMIB::Dot3Statstable::Dot3Statsentry::~Dot3Statsentry()
{
}

bool EtherLikeMIB::Dot3Statstable::Dot3Statsentry::has_data() const
{
    return dot3statsindex.is_set
	|| dot3statsalignmenterrors.is_set
	|| dot3statscarriersenseerrors.is_set
	|| dot3statsdeferredtransmissions.is_set
	|| dot3statsduplexstatus.is_set
	|| dot3statsetherchipset.is_set
	|| dot3statsexcessivecollisions.is_set
	|| dot3statsfcserrors.is_set
	|| dot3statsframetoolongs.is_set
	|| dot3statsinternalmacreceiveerrors.is_set
	|| dot3statsinternalmactransmiterrors.is_set
	|| dot3statslatecollisions.is_set
	|| dot3statsmultiplecollisionframes.is_set
	|| dot3statsratecontrolability.is_set
	|| dot3statsratecontrolstatus.is_set
	|| dot3statssinglecollisionframes.is_set
	|| dot3statssqetesterrors.is_set
	|| dot3statssymbolerrors.is_set;
}

bool EtherLikeMIB::Dot3Statstable::Dot3Statsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot3statsindex.yfilter)
	|| ydk::is_set(dot3statsalignmenterrors.yfilter)
	|| ydk::is_set(dot3statscarriersenseerrors.yfilter)
	|| ydk::is_set(dot3statsdeferredtransmissions.yfilter)
	|| ydk::is_set(dot3statsduplexstatus.yfilter)
	|| ydk::is_set(dot3statsetherchipset.yfilter)
	|| ydk::is_set(dot3statsexcessivecollisions.yfilter)
	|| ydk::is_set(dot3statsfcserrors.yfilter)
	|| ydk::is_set(dot3statsframetoolongs.yfilter)
	|| ydk::is_set(dot3statsinternalmacreceiveerrors.yfilter)
	|| ydk::is_set(dot3statsinternalmactransmiterrors.yfilter)
	|| ydk::is_set(dot3statslatecollisions.yfilter)
	|| ydk::is_set(dot3statsmultiplecollisionframes.yfilter)
	|| ydk::is_set(dot3statsratecontrolability.yfilter)
	|| ydk::is_set(dot3statsratecontrolstatus.yfilter)
	|| ydk::is_set(dot3statssinglecollisionframes.yfilter)
	|| ydk::is_set(dot3statssqetesterrors.yfilter)
	|| ydk::is_set(dot3statssymbolerrors.yfilter);
}

std::string EtherLikeMIB::Dot3Statstable::Dot3Statsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3StatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3Statstable::Dot3Statsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3StatsEntry" <<"[dot3StatsIndex='" <<dot3statsindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3Statstable::Dot3Statsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.yfilter)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (dot3statsalignmenterrors.is_set || is_set(dot3statsalignmenterrors.yfilter)) leaf_name_data.push_back(dot3statsalignmenterrors.get_name_leafdata());
    if (dot3statscarriersenseerrors.is_set || is_set(dot3statscarriersenseerrors.yfilter)) leaf_name_data.push_back(dot3statscarriersenseerrors.get_name_leafdata());
    if (dot3statsdeferredtransmissions.is_set || is_set(dot3statsdeferredtransmissions.yfilter)) leaf_name_data.push_back(dot3statsdeferredtransmissions.get_name_leafdata());
    if (dot3statsduplexstatus.is_set || is_set(dot3statsduplexstatus.yfilter)) leaf_name_data.push_back(dot3statsduplexstatus.get_name_leafdata());
    if (dot3statsetherchipset.is_set || is_set(dot3statsetherchipset.yfilter)) leaf_name_data.push_back(dot3statsetherchipset.get_name_leafdata());
    if (dot3statsexcessivecollisions.is_set || is_set(dot3statsexcessivecollisions.yfilter)) leaf_name_data.push_back(dot3statsexcessivecollisions.get_name_leafdata());
    if (dot3statsfcserrors.is_set || is_set(dot3statsfcserrors.yfilter)) leaf_name_data.push_back(dot3statsfcserrors.get_name_leafdata());
    if (dot3statsframetoolongs.is_set || is_set(dot3statsframetoolongs.yfilter)) leaf_name_data.push_back(dot3statsframetoolongs.get_name_leafdata());
    if (dot3statsinternalmacreceiveerrors.is_set || is_set(dot3statsinternalmacreceiveerrors.yfilter)) leaf_name_data.push_back(dot3statsinternalmacreceiveerrors.get_name_leafdata());
    if (dot3statsinternalmactransmiterrors.is_set || is_set(dot3statsinternalmactransmiterrors.yfilter)) leaf_name_data.push_back(dot3statsinternalmactransmiterrors.get_name_leafdata());
    if (dot3statslatecollisions.is_set || is_set(dot3statslatecollisions.yfilter)) leaf_name_data.push_back(dot3statslatecollisions.get_name_leafdata());
    if (dot3statsmultiplecollisionframes.is_set || is_set(dot3statsmultiplecollisionframes.yfilter)) leaf_name_data.push_back(dot3statsmultiplecollisionframes.get_name_leafdata());
    if (dot3statsratecontrolability.is_set || is_set(dot3statsratecontrolability.yfilter)) leaf_name_data.push_back(dot3statsratecontrolability.get_name_leafdata());
    if (dot3statsratecontrolstatus.is_set || is_set(dot3statsratecontrolstatus.yfilter)) leaf_name_data.push_back(dot3statsratecontrolstatus.get_name_leafdata());
    if (dot3statssinglecollisionframes.is_set || is_set(dot3statssinglecollisionframes.yfilter)) leaf_name_data.push_back(dot3statssinglecollisionframes.get_name_leafdata());
    if (dot3statssqetesterrors.is_set || is_set(dot3statssqetesterrors.yfilter)) leaf_name_data.push_back(dot3statssqetesterrors.get_name_leafdata());
    if (dot3statssymbolerrors.is_set || is_set(dot3statssymbolerrors.yfilter)) leaf_name_data.push_back(dot3statssymbolerrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> EtherLikeMIB::Dot3Statstable::Dot3Statsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherLikeMIB::Dot3Statstable::Dot3Statsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherLikeMIB::Dot3Statstable::Dot3Statsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex = value;
        dot3statsindex.value_namespace = name_space;
        dot3statsindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsAlignmentErrors")
    {
        dot3statsalignmenterrors = value;
        dot3statsalignmenterrors.value_namespace = name_space;
        dot3statsalignmenterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsCarrierSenseErrors")
    {
        dot3statscarriersenseerrors = value;
        dot3statscarriersenseerrors.value_namespace = name_space;
        dot3statscarriersenseerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsDeferredTransmissions")
    {
        dot3statsdeferredtransmissions = value;
        dot3statsdeferredtransmissions.value_namespace = name_space;
        dot3statsdeferredtransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsDuplexStatus")
    {
        dot3statsduplexstatus = value;
        dot3statsduplexstatus.value_namespace = name_space;
        dot3statsduplexstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsEtherChipSet")
    {
        dot3statsetherchipset = value;
        dot3statsetherchipset.value_namespace = name_space;
        dot3statsetherchipset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsExcessiveCollisions")
    {
        dot3statsexcessivecollisions = value;
        dot3statsexcessivecollisions.value_namespace = name_space;
        dot3statsexcessivecollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsFCSErrors")
    {
        dot3statsfcserrors = value;
        dot3statsfcserrors.value_namespace = name_space;
        dot3statsfcserrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsFrameTooLongs")
    {
        dot3statsframetoolongs = value;
        dot3statsframetoolongs.value_namespace = name_space;
        dot3statsframetoolongs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsInternalMacReceiveErrors")
    {
        dot3statsinternalmacreceiveerrors = value;
        dot3statsinternalmacreceiveerrors.value_namespace = name_space;
        dot3statsinternalmacreceiveerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsInternalMacTransmitErrors")
    {
        dot3statsinternalmactransmiterrors = value;
        dot3statsinternalmactransmiterrors.value_namespace = name_space;
        dot3statsinternalmactransmiterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsLateCollisions")
    {
        dot3statslatecollisions = value;
        dot3statslatecollisions.value_namespace = name_space;
        dot3statslatecollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsMultipleCollisionFrames")
    {
        dot3statsmultiplecollisionframes = value;
        dot3statsmultiplecollisionframes.value_namespace = name_space;
        dot3statsmultiplecollisionframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsRateControlAbility")
    {
        dot3statsratecontrolability = value;
        dot3statsratecontrolability.value_namespace = name_space;
        dot3statsratecontrolability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsRateControlStatus")
    {
        dot3statsratecontrolstatus = value;
        dot3statsratecontrolstatus.value_namespace = name_space;
        dot3statsratecontrolstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsSingleCollisionFrames")
    {
        dot3statssinglecollisionframes = value;
        dot3statssinglecollisionframes.value_namespace = name_space;
        dot3statssinglecollisionframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsSQETestErrors")
    {
        dot3statssqetesterrors = value;
        dot3statssqetesterrors.value_namespace = name_space;
        dot3statssqetesterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsSymbolErrors")
    {
        dot3statssymbolerrors = value;
        dot3statssymbolerrors.value_namespace = name_space;
        dot3statssymbolerrors.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLikeMIB::Dot3Statstable::Dot3Statsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex.yfilter = yfilter;
    }
    if(value_path == "dot3StatsAlignmentErrors")
    {
        dot3statsalignmenterrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsCarrierSenseErrors")
    {
        dot3statscarriersenseerrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsDeferredTransmissions")
    {
        dot3statsdeferredtransmissions.yfilter = yfilter;
    }
    if(value_path == "dot3StatsDuplexStatus")
    {
        dot3statsduplexstatus.yfilter = yfilter;
    }
    if(value_path == "dot3StatsEtherChipSet")
    {
        dot3statsetherchipset.yfilter = yfilter;
    }
    if(value_path == "dot3StatsExcessiveCollisions")
    {
        dot3statsexcessivecollisions.yfilter = yfilter;
    }
    if(value_path == "dot3StatsFCSErrors")
    {
        dot3statsfcserrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsFrameTooLongs")
    {
        dot3statsframetoolongs.yfilter = yfilter;
    }
    if(value_path == "dot3StatsInternalMacReceiveErrors")
    {
        dot3statsinternalmacreceiveerrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsInternalMacTransmitErrors")
    {
        dot3statsinternalmactransmiterrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsLateCollisions")
    {
        dot3statslatecollisions.yfilter = yfilter;
    }
    if(value_path == "dot3StatsMultipleCollisionFrames")
    {
        dot3statsmultiplecollisionframes.yfilter = yfilter;
    }
    if(value_path == "dot3StatsRateControlAbility")
    {
        dot3statsratecontrolability.yfilter = yfilter;
    }
    if(value_path == "dot3StatsRateControlStatus")
    {
        dot3statsratecontrolstatus.yfilter = yfilter;
    }
    if(value_path == "dot3StatsSingleCollisionFrames")
    {
        dot3statssinglecollisionframes.yfilter = yfilter;
    }
    if(value_path == "dot3StatsSQETestErrors")
    {
        dot3statssqetesterrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsSymbolErrors")
    {
        dot3statssymbolerrors.yfilter = yfilter;
    }
}

bool EtherLikeMIB::Dot3Statstable::Dot3Statsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsIndex" || name == "dot3StatsAlignmentErrors" || name == "dot3StatsCarrierSenseErrors" || name == "dot3StatsDeferredTransmissions" || name == "dot3StatsDuplexStatus" || name == "dot3StatsEtherChipSet" || name == "dot3StatsExcessiveCollisions" || name == "dot3StatsFCSErrors" || name == "dot3StatsFrameTooLongs" || name == "dot3StatsInternalMacReceiveErrors" || name == "dot3StatsInternalMacTransmitErrors" || name == "dot3StatsLateCollisions" || name == "dot3StatsMultipleCollisionFrames" || name == "dot3StatsRateControlAbility" || name == "dot3StatsRateControlStatus" || name == "dot3StatsSingleCollisionFrames" || name == "dot3StatsSQETestErrors" || name == "dot3StatsSymbolErrors")
        return true;
    return false;
}

const Enum::YLeaf EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::Dot3Pauseadminmode::disabled {1, "disabled"};
const Enum::YLeaf EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::Dot3Pauseadminmode::enabledXmit {2, "enabledXmit"};
const Enum::YLeaf EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::Dot3Pauseadminmode::enabledRcv {3, "enabledRcv"};
const Enum::YLeaf EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::Dot3Pauseadminmode::enabledXmitAndRcv {4, "enabledXmitAndRcv"};

const Enum::YLeaf EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::Dot3Pauseopermode::disabled {1, "disabled"};
const Enum::YLeaf EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::Dot3Pauseopermode::enabledXmit {2, "enabledXmit"};
const Enum::YLeaf EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::Dot3Pauseopermode::enabledRcv {3, "enabledRcv"};
const Enum::YLeaf EtherLikeMIB::Dot3Pausetable::Dot3Pauseentry::Dot3Pauseopermode::enabledXmitAndRcv {4, "enabledXmitAndRcv"};

const Enum::YLeaf EtherLikeMIB::Dot3Statstable::Dot3Statsentry::Dot3Statsduplexstatus::unknown {1, "unknown"};
const Enum::YLeaf EtherLikeMIB::Dot3Statstable::Dot3Statsentry::Dot3Statsduplexstatus::halfDuplex {2, "halfDuplex"};
const Enum::YLeaf EtherLikeMIB::Dot3Statstable::Dot3Statsentry::Dot3Statsduplexstatus::fullDuplex {3, "fullDuplex"};

const Enum::YLeaf EtherLikeMIB::Dot3Statstable::Dot3Statsentry::Dot3Statsratecontrolstatus::rateControlOff {1, "rateControlOff"};
const Enum::YLeaf EtherLikeMIB::Dot3Statstable::Dot3Statsentry::Dot3Statsratecontrolstatus::rateControlOn {2, "rateControlOn"};
const Enum::YLeaf EtherLikeMIB::Dot3Statstable::Dot3Statsentry::Dot3Statsratecontrolstatus::unknown {3, "unknown"};


}
}

