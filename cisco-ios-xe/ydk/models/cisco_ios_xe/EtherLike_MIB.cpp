
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "EtherLike_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace EtherLike_MIB {

Dot3TestTdr::Dot3TestTdr()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB", "EtherLike-MIB", "EtherLike-MIB:dot3TestTdr")
{

}

Dot3TestTdr::~Dot3TestTdr()
{
}

Dot3TestLoopBack::Dot3TestLoopBack()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB", "EtherLike-MIB", "EtherLike-MIB:dot3TestLoopBack")
{

}

Dot3TestLoopBack::~Dot3TestLoopBack()
{
}

Dot3ErrorInitError::Dot3ErrorInitError()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB", "EtherLike-MIB", "EtherLike-MIB:dot3ErrorInitError")
{

}

Dot3ErrorInitError::~Dot3ErrorInitError()
{
}

Dot3ErrorLoopbackError::Dot3ErrorLoopbackError()
     : Identity("urn:ietf:params:xml:ns:yang:smiv2:EtherLike-MIB", "EtherLike-MIB", "EtherLike-MIB:dot3ErrorLoopbackError")
{

}

Dot3ErrorLoopbackError::~Dot3ErrorLoopbackError()
{
}

EtherLikeMIB::EtherLikeMIB()
    :
    dot3statstable(std::make_shared<EtherLikeMIB::Dot3StatsTable>())
    , dot3colltable(std::make_shared<EtherLikeMIB::Dot3CollTable>())
    , dot3controltable(std::make_shared<EtherLikeMIB::Dot3ControlTable>())
    , dot3pausetable(std::make_shared<EtherLikeMIB::Dot3PauseTable>())
    , dot3hcstatstable(std::make_shared<EtherLikeMIB::Dot3HCStatsTable>())
{
    dot3statstable->parent = this;
    dot3colltable->parent = this;
    dot3controltable->parent = this;
    dot3pausetable->parent = this;
    dot3hcstatstable->parent = this;

    yang_name = "EtherLike-MIB"; yang_parent_name = "EtherLike-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

EtherLikeMIB::~EtherLikeMIB()
{
}

bool EtherLikeMIB::has_data() const
{
    if (is_presence_container) return true;
    return (dot3statstable !=  nullptr && dot3statstable->has_data())
	|| (dot3colltable !=  nullptr && dot3colltable->has_data())
	|| (dot3controltable !=  nullptr && dot3controltable->has_data())
	|| (dot3pausetable !=  nullptr && dot3pausetable->has_data())
	|| (dot3hcstatstable !=  nullptr && dot3hcstatstable->has_data());
}

bool EtherLikeMIB::has_operation() const
{
    return is_set(yfilter)
	|| (dot3statstable !=  nullptr && dot3statstable->has_operation())
	|| (dot3colltable !=  nullptr && dot3colltable->has_operation())
	|| (dot3controltable !=  nullptr && dot3controltable->has_operation())
	|| (dot3pausetable !=  nullptr && dot3pausetable->has_operation())
	|| (dot3hcstatstable !=  nullptr && dot3hcstatstable->has_operation());
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

std::shared_ptr<ydk::Entity> EtherLikeMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3StatsTable")
    {
        if(dot3statstable == nullptr)
        {
            dot3statstable = std::make_shared<EtherLikeMIB::Dot3StatsTable>();
        }
        return dot3statstable;
    }

    if(child_yang_name == "dot3CollTable")
    {
        if(dot3colltable == nullptr)
        {
            dot3colltable = std::make_shared<EtherLikeMIB::Dot3CollTable>();
        }
        return dot3colltable;
    }

    if(child_yang_name == "dot3ControlTable")
    {
        if(dot3controltable == nullptr)
        {
            dot3controltable = std::make_shared<EtherLikeMIB::Dot3ControlTable>();
        }
        return dot3controltable;
    }

    if(child_yang_name == "dot3PauseTable")
    {
        if(dot3pausetable == nullptr)
        {
            dot3pausetable = std::make_shared<EtherLikeMIB::Dot3PauseTable>();
        }
        return dot3pausetable;
    }

    if(child_yang_name == "dot3HCStatsTable")
    {
        if(dot3hcstatstable == nullptr)
        {
            dot3hcstatstable = std::make_shared<EtherLikeMIB::Dot3HCStatsTable>();
        }
        return dot3hcstatstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLikeMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot3statstable != nullptr)
    {
        _children["dot3StatsTable"] = dot3statstable;
    }

    if(dot3colltable != nullptr)
    {
        _children["dot3CollTable"] = dot3colltable;
    }

    if(dot3controltable != nullptr)
    {
        _children["dot3ControlTable"] = dot3controltable;
    }

    if(dot3pausetable != nullptr)
    {
        _children["dot3PauseTable"] = dot3pausetable;
    }

    if(dot3hcstatstable != nullptr)
    {
        _children["dot3HCStatsTable"] = dot3hcstatstable;
    }

    return _children;
}

void EtherLikeMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLikeMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> EtherLikeMIB::clone_ptr() const
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
    if(name == "dot3StatsTable" || name == "dot3CollTable" || name == "dot3ControlTable" || name == "dot3PauseTable" || name == "dot3HCStatsTable")
        return true;
    return false;
}

EtherLikeMIB::Dot3StatsTable::Dot3StatsTable()
    :
    dot3statsentry(this, {"dot3statsindex"})
{

    yang_name = "dot3StatsTable"; yang_parent_name = "EtherLike-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLikeMIB::Dot3StatsTable::~Dot3StatsTable()
{
}

bool EtherLikeMIB::Dot3StatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot3statsentry.len(); index++)
    {
        if(dot3statsentry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLikeMIB::Dot3StatsTable::has_operation() const
{
    for (std::size_t index=0; index<dot3statsentry.len(); index++)
    {
        if(dot3statsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLikeMIB::Dot3StatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3StatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3StatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3StatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLikeMIB::Dot3StatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3StatsEntry")
    {
        auto ent_ = std::make_shared<EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry>();
        ent_->parent = this;
        dot3statsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLikeMIB::Dot3StatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot3statsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void EtherLikeMIB::Dot3StatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLikeMIB::Dot3StatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLikeMIB::Dot3StatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsEntry")
        return true;
    return false;
}

EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::Dot3StatsEntry()
    :
    dot3statsindex{YType::int32, "dot3StatsIndex"},
    dot3statsalignmenterrors{YType::uint32, "dot3StatsAlignmentErrors"},
    dot3statsfcserrors{YType::uint32, "dot3StatsFCSErrors"},
    dot3statssinglecollisionframes{YType::uint32, "dot3StatsSingleCollisionFrames"},
    dot3statsmultiplecollisionframes{YType::uint32, "dot3StatsMultipleCollisionFrames"},
    dot3statssqetesterrors{YType::uint32, "dot3StatsSQETestErrors"},
    dot3statsdeferredtransmissions{YType::uint32, "dot3StatsDeferredTransmissions"},
    dot3statslatecollisions{YType::uint32, "dot3StatsLateCollisions"},
    dot3statsexcessivecollisions{YType::uint32, "dot3StatsExcessiveCollisions"},
    dot3statsinternalmactransmiterrors{YType::uint32, "dot3StatsInternalMacTransmitErrors"},
    dot3statscarriersenseerrors{YType::uint32, "dot3StatsCarrierSenseErrors"},
    dot3statsframetoolongs{YType::uint32, "dot3StatsFrameTooLongs"},
    dot3statsinternalmacreceiveerrors{YType::uint32, "dot3StatsInternalMacReceiveErrors"},
    dot3statsetherchipset{YType::str, "dot3StatsEtherChipSet"},
    dot3statssymbolerrors{YType::uint32, "dot3StatsSymbolErrors"},
    dot3statsduplexstatus{YType::enumeration, "dot3StatsDuplexStatus"},
    dot3statsratecontrolability{YType::boolean, "dot3StatsRateControlAbility"},
    dot3statsratecontrolstatus{YType::enumeration, "dot3StatsRateControlStatus"}
{

    yang_name = "dot3StatsEntry"; yang_parent_name = "dot3StatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::~Dot3StatsEntry()
{
}

bool EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot3statsindex.is_set
	|| dot3statsalignmenterrors.is_set
	|| dot3statsfcserrors.is_set
	|| dot3statssinglecollisionframes.is_set
	|| dot3statsmultiplecollisionframes.is_set
	|| dot3statssqetesterrors.is_set
	|| dot3statsdeferredtransmissions.is_set
	|| dot3statslatecollisions.is_set
	|| dot3statsexcessivecollisions.is_set
	|| dot3statsinternalmactransmiterrors.is_set
	|| dot3statscarriersenseerrors.is_set
	|| dot3statsframetoolongs.is_set
	|| dot3statsinternalmacreceiveerrors.is_set
	|| dot3statsetherchipset.is_set
	|| dot3statssymbolerrors.is_set
	|| dot3statsduplexstatus.is_set
	|| dot3statsratecontrolability.is_set
	|| dot3statsratecontrolstatus.is_set;
}

bool EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot3statsindex.yfilter)
	|| ydk::is_set(dot3statsalignmenterrors.yfilter)
	|| ydk::is_set(dot3statsfcserrors.yfilter)
	|| ydk::is_set(dot3statssinglecollisionframes.yfilter)
	|| ydk::is_set(dot3statsmultiplecollisionframes.yfilter)
	|| ydk::is_set(dot3statssqetesterrors.yfilter)
	|| ydk::is_set(dot3statsdeferredtransmissions.yfilter)
	|| ydk::is_set(dot3statslatecollisions.yfilter)
	|| ydk::is_set(dot3statsexcessivecollisions.yfilter)
	|| ydk::is_set(dot3statsinternalmactransmiterrors.yfilter)
	|| ydk::is_set(dot3statscarriersenseerrors.yfilter)
	|| ydk::is_set(dot3statsframetoolongs.yfilter)
	|| ydk::is_set(dot3statsinternalmacreceiveerrors.yfilter)
	|| ydk::is_set(dot3statsetherchipset.yfilter)
	|| ydk::is_set(dot3statssymbolerrors.yfilter)
	|| ydk::is_set(dot3statsduplexstatus.yfilter)
	|| ydk::is_set(dot3statsratecontrolability.yfilter)
	|| ydk::is_set(dot3statsratecontrolstatus.yfilter);
}

std::string EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3StatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3StatsEntry";
    ADD_KEY_TOKEN(dot3statsindex, "dot3StatsIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.yfilter)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (dot3statsalignmenterrors.is_set || is_set(dot3statsalignmenterrors.yfilter)) leaf_name_data.push_back(dot3statsalignmenterrors.get_name_leafdata());
    if (dot3statsfcserrors.is_set || is_set(dot3statsfcserrors.yfilter)) leaf_name_data.push_back(dot3statsfcserrors.get_name_leafdata());
    if (dot3statssinglecollisionframes.is_set || is_set(dot3statssinglecollisionframes.yfilter)) leaf_name_data.push_back(dot3statssinglecollisionframes.get_name_leafdata());
    if (dot3statsmultiplecollisionframes.is_set || is_set(dot3statsmultiplecollisionframes.yfilter)) leaf_name_data.push_back(dot3statsmultiplecollisionframes.get_name_leafdata());
    if (dot3statssqetesterrors.is_set || is_set(dot3statssqetesterrors.yfilter)) leaf_name_data.push_back(dot3statssqetesterrors.get_name_leafdata());
    if (dot3statsdeferredtransmissions.is_set || is_set(dot3statsdeferredtransmissions.yfilter)) leaf_name_data.push_back(dot3statsdeferredtransmissions.get_name_leafdata());
    if (dot3statslatecollisions.is_set || is_set(dot3statslatecollisions.yfilter)) leaf_name_data.push_back(dot3statslatecollisions.get_name_leafdata());
    if (dot3statsexcessivecollisions.is_set || is_set(dot3statsexcessivecollisions.yfilter)) leaf_name_data.push_back(dot3statsexcessivecollisions.get_name_leafdata());
    if (dot3statsinternalmactransmiterrors.is_set || is_set(dot3statsinternalmactransmiterrors.yfilter)) leaf_name_data.push_back(dot3statsinternalmactransmiterrors.get_name_leafdata());
    if (dot3statscarriersenseerrors.is_set || is_set(dot3statscarriersenseerrors.yfilter)) leaf_name_data.push_back(dot3statscarriersenseerrors.get_name_leafdata());
    if (dot3statsframetoolongs.is_set || is_set(dot3statsframetoolongs.yfilter)) leaf_name_data.push_back(dot3statsframetoolongs.get_name_leafdata());
    if (dot3statsinternalmacreceiveerrors.is_set || is_set(dot3statsinternalmacreceiveerrors.yfilter)) leaf_name_data.push_back(dot3statsinternalmacreceiveerrors.get_name_leafdata());
    if (dot3statsetherchipset.is_set || is_set(dot3statsetherchipset.yfilter)) leaf_name_data.push_back(dot3statsetherchipset.get_name_leafdata());
    if (dot3statssymbolerrors.is_set || is_set(dot3statssymbolerrors.yfilter)) leaf_name_data.push_back(dot3statssymbolerrors.get_name_leafdata());
    if (dot3statsduplexstatus.is_set || is_set(dot3statsduplexstatus.yfilter)) leaf_name_data.push_back(dot3statsduplexstatus.get_name_leafdata());
    if (dot3statsratecontrolability.is_set || is_set(dot3statsratecontrolability.yfilter)) leaf_name_data.push_back(dot3statsratecontrolability.get_name_leafdata());
    if (dot3statsratecontrolstatus.is_set || is_set(dot3statsratecontrolstatus.yfilter)) leaf_name_data.push_back(dot3statsratecontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "dot3StatsFCSErrors")
    {
        dot3statsfcserrors = value;
        dot3statsfcserrors.value_namespace = name_space;
        dot3statsfcserrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsSingleCollisionFrames")
    {
        dot3statssinglecollisionframes = value;
        dot3statssinglecollisionframes.value_namespace = name_space;
        dot3statssinglecollisionframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsMultipleCollisionFrames")
    {
        dot3statsmultiplecollisionframes = value;
        dot3statsmultiplecollisionframes.value_namespace = name_space;
        dot3statsmultiplecollisionframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsSQETestErrors")
    {
        dot3statssqetesterrors = value;
        dot3statssqetesterrors.value_namespace = name_space;
        dot3statssqetesterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsDeferredTransmissions")
    {
        dot3statsdeferredtransmissions = value;
        dot3statsdeferredtransmissions.value_namespace = name_space;
        dot3statsdeferredtransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsLateCollisions")
    {
        dot3statslatecollisions = value;
        dot3statslatecollisions.value_namespace = name_space;
        dot3statslatecollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsExcessiveCollisions")
    {
        dot3statsexcessivecollisions = value;
        dot3statsexcessivecollisions.value_namespace = name_space;
        dot3statsexcessivecollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsInternalMacTransmitErrors")
    {
        dot3statsinternalmactransmiterrors = value;
        dot3statsinternalmactransmiterrors.value_namespace = name_space;
        dot3statsinternalmactransmiterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsCarrierSenseErrors")
    {
        dot3statscarriersenseerrors = value;
        dot3statscarriersenseerrors.value_namespace = name_space;
        dot3statscarriersenseerrors.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dot3StatsEtherChipSet")
    {
        dot3statsetherchipset = value;
        dot3statsetherchipset.value_namespace = name_space;
        dot3statsetherchipset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsSymbolErrors")
    {
        dot3statssymbolerrors = value;
        dot3statssymbolerrors.value_namespace = name_space;
        dot3statssymbolerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot3StatsDuplexStatus")
    {
        dot3statsduplexstatus = value;
        dot3statsduplexstatus.value_namespace = name_space;
        dot3statsduplexstatus.value_namespace_prefix = name_space_prefix;
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
}

void EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex.yfilter = yfilter;
    }
    if(value_path == "dot3StatsAlignmentErrors")
    {
        dot3statsalignmenterrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsFCSErrors")
    {
        dot3statsfcserrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsSingleCollisionFrames")
    {
        dot3statssinglecollisionframes.yfilter = yfilter;
    }
    if(value_path == "dot3StatsMultipleCollisionFrames")
    {
        dot3statsmultiplecollisionframes.yfilter = yfilter;
    }
    if(value_path == "dot3StatsSQETestErrors")
    {
        dot3statssqetesterrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsDeferredTransmissions")
    {
        dot3statsdeferredtransmissions.yfilter = yfilter;
    }
    if(value_path == "dot3StatsLateCollisions")
    {
        dot3statslatecollisions.yfilter = yfilter;
    }
    if(value_path == "dot3StatsExcessiveCollisions")
    {
        dot3statsexcessivecollisions.yfilter = yfilter;
    }
    if(value_path == "dot3StatsInternalMacTransmitErrors")
    {
        dot3statsinternalmactransmiterrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsCarrierSenseErrors")
    {
        dot3statscarriersenseerrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsFrameTooLongs")
    {
        dot3statsframetoolongs.yfilter = yfilter;
    }
    if(value_path == "dot3StatsInternalMacReceiveErrors")
    {
        dot3statsinternalmacreceiveerrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsEtherChipSet")
    {
        dot3statsetherchipset.yfilter = yfilter;
    }
    if(value_path == "dot3StatsSymbolErrors")
    {
        dot3statssymbolerrors.yfilter = yfilter;
    }
    if(value_path == "dot3StatsDuplexStatus")
    {
        dot3statsduplexstatus.yfilter = yfilter;
    }
    if(value_path == "dot3StatsRateControlAbility")
    {
        dot3statsratecontrolability.yfilter = yfilter;
    }
    if(value_path == "dot3StatsRateControlStatus")
    {
        dot3statsratecontrolstatus.yfilter = yfilter;
    }
}

bool EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsIndex" || name == "dot3StatsAlignmentErrors" || name == "dot3StatsFCSErrors" || name == "dot3StatsSingleCollisionFrames" || name == "dot3StatsMultipleCollisionFrames" || name == "dot3StatsSQETestErrors" || name == "dot3StatsDeferredTransmissions" || name == "dot3StatsLateCollisions" || name == "dot3StatsExcessiveCollisions" || name == "dot3StatsInternalMacTransmitErrors" || name == "dot3StatsCarrierSenseErrors" || name == "dot3StatsFrameTooLongs" || name == "dot3StatsInternalMacReceiveErrors" || name == "dot3StatsEtherChipSet" || name == "dot3StatsSymbolErrors" || name == "dot3StatsDuplexStatus" || name == "dot3StatsRateControlAbility" || name == "dot3StatsRateControlStatus")
        return true;
    return false;
}

EtherLikeMIB::Dot3CollTable::Dot3CollTable()
    :
    dot3collentry(this, {"ifindex", "dot3collcount"})
{

    yang_name = "dot3CollTable"; yang_parent_name = "EtherLike-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLikeMIB::Dot3CollTable::~Dot3CollTable()
{
}

bool EtherLikeMIB::Dot3CollTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot3collentry.len(); index++)
    {
        if(dot3collentry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLikeMIB::Dot3CollTable::has_operation() const
{
    for (std::size_t index=0; index<dot3collentry.len(); index++)
    {
        if(dot3collentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLikeMIB::Dot3CollTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3CollTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3CollTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3CollTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLikeMIB::Dot3CollTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3CollEntry")
    {
        auto ent_ = std::make_shared<EtherLikeMIB::Dot3CollTable::Dot3CollEntry>();
        ent_->parent = this;
        dot3collentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLikeMIB::Dot3CollTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot3collentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void EtherLikeMIB::Dot3CollTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLikeMIB::Dot3CollTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLikeMIB::Dot3CollTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3CollEntry")
        return true;
    return false;
}

EtherLikeMIB::Dot3CollTable::Dot3CollEntry::Dot3CollEntry()
    :
    ifindex{YType::str, "ifIndex"},
    dot3collcount{YType::int32, "dot3CollCount"},
    dot3collfrequencies{YType::uint32, "dot3CollFrequencies"}
{

    yang_name = "dot3CollEntry"; yang_parent_name = "dot3CollTable"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLikeMIB::Dot3CollTable::Dot3CollEntry::~Dot3CollEntry()
{
}

bool EtherLikeMIB::Dot3CollTable::Dot3CollEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| dot3collcount.is_set
	|| dot3collfrequencies.is_set;
}

bool EtherLikeMIB::Dot3CollTable::Dot3CollEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(dot3collcount.yfilter)
	|| ydk::is_set(dot3collfrequencies.yfilter);
}

std::string EtherLikeMIB::Dot3CollTable::Dot3CollEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3CollTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3CollTable::Dot3CollEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3CollEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(dot3collcount, "dot3CollCount");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3CollTable::Dot3CollEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (dot3collcount.is_set || is_set(dot3collcount.yfilter)) leaf_name_data.push_back(dot3collcount.get_name_leafdata());
    if (dot3collfrequencies.is_set || is_set(dot3collfrequencies.yfilter)) leaf_name_data.push_back(dot3collfrequencies.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLikeMIB::Dot3CollTable::Dot3CollEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLikeMIB::Dot3CollTable::Dot3CollEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EtherLikeMIB::Dot3CollTable::Dot3CollEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void EtherLikeMIB::Dot3CollTable::Dot3CollEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool EtherLikeMIB::Dot3CollTable::Dot3CollEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "dot3CollCount" || name == "dot3CollFrequencies")
        return true;
    return false;
}

EtherLikeMIB::Dot3ControlTable::Dot3ControlTable()
    :
    dot3controlentry(this, {"dot3statsindex"})
{

    yang_name = "dot3ControlTable"; yang_parent_name = "EtherLike-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLikeMIB::Dot3ControlTable::~Dot3ControlTable()
{
}

bool EtherLikeMIB::Dot3ControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot3controlentry.len(); index++)
    {
        if(dot3controlentry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLikeMIB::Dot3ControlTable::has_operation() const
{
    for (std::size_t index=0; index<dot3controlentry.len(); index++)
    {
        if(dot3controlentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLikeMIB::Dot3ControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3ControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3ControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3ControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLikeMIB::Dot3ControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3ControlEntry")
    {
        auto ent_ = std::make_shared<EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry>();
        ent_->parent = this;
        dot3controlentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLikeMIB::Dot3ControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot3controlentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void EtherLikeMIB::Dot3ControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLikeMIB::Dot3ControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLikeMIB::Dot3ControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3ControlEntry")
        return true;
    return false;
}

EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry::Dot3ControlEntry()
    :
    dot3statsindex{YType::str, "dot3StatsIndex"},
    dot3controlfunctionssupported{YType::bits, "dot3ControlFunctionsSupported"},
    dot3controlinunknownopcodes{YType::uint32, "dot3ControlInUnknownOpcodes"},
    dot3hccontrolinunknownopcodes{YType::uint64, "dot3HCControlInUnknownOpcodes"}
{

    yang_name = "dot3ControlEntry"; yang_parent_name = "dot3ControlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry::~Dot3ControlEntry()
{
}

bool EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot3statsindex.is_set
	|| dot3controlfunctionssupported.is_set
	|| dot3controlinunknownopcodes.is_set
	|| dot3hccontrolinunknownopcodes.is_set;
}

bool EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot3statsindex.yfilter)
	|| ydk::is_set(dot3controlfunctionssupported.yfilter)
	|| ydk::is_set(dot3controlinunknownopcodes.yfilter)
	|| ydk::is_set(dot3hccontrolinunknownopcodes.yfilter);
}

std::string EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3ControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3ControlEntry";
    ADD_KEY_TOKEN(dot3statsindex, "dot3StatsIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.yfilter)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (dot3controlfunctionssupported.is_set || is_set(dot3controlfunctionssupported.yfilter)) leaf_name_data.push_back(dot3controlfunctionssupported.get_name_leafdata());
    if (dot3controlinunknownopcodes.is_set || is_set(dot3controlinunknownopcodes.yfilter)) leaf_name_data.push_back(dot3controlinunknownopcodes.get_name_leafdata());
    if (dot3hccontrolinunknownopcodes.is_set || is_set(dot3hccontrolinunknownopcodes.yfilter)) leaf_name_data.push_back(dot3hccontrolinunknownopcodes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool EtherLikeMIB::Dot3ControlTable::Dot3ControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsIndex" || name == "dot3ControlFunctionsSupported" || name == "dot3ControlInUnknownOpcodes" || name == "dot3HCControlInUnknownOpcodes")
        return true;
    return false;
}

EtherLikeMIB::Dot3PauseTable::Dot3PauseTable()
    :
    dot3pauseentry(this, {"dot3statsindex"})
{

    yang_name = "dot3PauseTable"; yang_parent_name = "EtherLike-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLikeMIB::Dot3PauseTable::~Dot3PauseTable()
{
}

bool EtherLikeMIB::Dot3PauseTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot3pauseentry.len(); index++)
    {
        if(dot3pauseentry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLikeMIB::Dot3PauseTable::has_operation() const
{
    for (std::size_t index=0; index<dot3pauseentry.len(); index++)
    {
        if(dot3pauseentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLikeMIB::Dot3PauseTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3PauseTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3PauseTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3PauseTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLikeMIB::Dot3PauseTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3PauseEntry")
    {
        auto ent_ = std::make_shared<EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry>();
        ent_->parent = this;
        dot3pauseentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLikeMIB::Dot3PauseTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot3pauseentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void EtherLikeMIB::Dot3PauseTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLikeMIB::Dot3PauseTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLikeMIB::Dot3PauseTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3PauseEntry")
        return true;
    return false;
}

EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::Dot3PauseEntry()
    :
    dot3statsindex{YType::str, "dot3StatsIndex"},
    dot3pauseadminmode{YType::enumeration, "dot3PauseAdminMode"},
    dot3pauseopermode{YType::enumeration, "dot3PauseOperMode"},
    dot3inpauseframes{YType::uint32, "dot3InPauseFrames"},
    dot3outpauseframes{YType::uint32, "dot3OutPauseFrames"},
    dot3hcinpauseframes{YType::uint64, "dot3HCInPauseFrames"},
    dot3hcoutpauseframes{YType::uint64, "dot3HCOutPauseFrames"}
{

    yang_name = "dot3PauseEntry"; yang_parent_name = "dot3PauseTable"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::~Dot3PauseEntry()
{
}

bool EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot3statsindex.is_set
	|| dot3pauseadminmode.is_set
	|| dot3pauseopermode.is_set
	|| dot3inpauseframes.is_set
	|| dot3outpauseframes.is_set
	|| dot3hcinpauseframes.is_set
	|| dot3hcoutpauseframes.is_set;
}

bool EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot3statsindex.yfilter)
	|| ydk::is_set(dot3pauseadminmode.yfilter)
	|| ydk::is_set(dot3pauseopermode.yfilter)
	|| ydk::is_set(dot3inpauseframes.yfilter)
	|| ydk::is_set(dot3outpauseframes.yfilter)
	|| ydk::is_set(dot3hcinpauseframes.yfilter)
	|| ydk::is_set(dot3hcoutpauseframes.yfilter);
}

std::string EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3PauseTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3PauseEntry";
    ADD_KEY_TOKEN(dot3statsindex, "dot3StatsIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.yfilter)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (dot3pauseadminmode.is_set || is_set(dot3pauseadminmode.yfilter)) leaf_name_data.push_back(dot3pauseadminmode.get_name_leafdata());
    if (dot3pauseopermode.is_set || is_set(dot3pauseopermode.yfilter)) leaf_name_data.push_back(dot3pauseopermode.get_name_leafdata());
    if (dot3inpauseframes.is_set || is_set(dot3inpauseframes.yfilter)) leaf_name_data.push_back(dot3inpauseframes.get_name_leafdata());
    if (dot3outpauseframes.is_set || is_set(dot3outpauseframes.yfilter)) leaf_name_data.push_back(dot3outpauseframes.get_name_leafdata());
    if (dot3hcinpauseframes.is_set || is_set(dot3hcinpauseframes.yfilter)) leaf_name_data.push_back(dot3hcinpauseframes.get_name_leafdata());
    if (dot3hcoutpauseframes.is_set || is_set(dot3hcoutpauseframes.yfilter)) leaf_name_data.push_back(dot3hcoutpauseframes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex = value;
        dot3statsindex.value_namespace = name_space;
        dot3statsindex.value_namespace_prefix = name_space_prefix;
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
}

void EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex.yfilter = yfilter;
    }
    if(value_path == "dot3PauseAdminMode")
    {
        dot3pauseadminmode.yfilter = yfilter;
    }
    if(value_path == "dot3PauseOperMode")
    {
        dot3pauseopermode.yfilter = yfilter;
    }
    if(value_path == "dot3InPauseFrames")
    {
        dot3inpauseframes.yfilter = yfilter;
    }
    if(value_path == "dot3OutPauseFrames")
    {
        dot3outpauseframes.yfilter = yfilter;
    }
    if(value_path == "dot3HCInPauseFrames")
    {
        dot3hcinpauseframes.yfilter = yfilter;
    }
    if(value_path == "dot3HCOutPauseFrames")
    {
        dot3hcoutpauseframes.yfilter = yfilter;
    }
}

bool EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsIndex" || name == "dot3PauseAdminMode" || name == "dot3PauseOperMode" || name == "dot3InPauseFrames" || name == "dot3OutPauseFrames" || name == "dot3HCInPauseFrames" || name == "dot3HCOutPauseFrames")
        return true;
    return false;
}

EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsTable()
    :
    dot3hcstatsentry(this, {"dot3statsindex"})
{

    yang_name = "dot3HCStatsTable"; yang_parent_name = "EtherLike-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLikeMIB::Dot3HCStatsTable::~Dot3HCStatsTable()
{
}

bool EtherLikeMIB::Dot3HCStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot3hcstatsentry.len(); index++)
    {
        if(dot3hcstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool EtherLikeMIB::Dot3HCStatsTable::has_operation() const
{
    for (std::size_t index=0; index<dot3hcstatsentry.len(); index++)
    {
        if(dot3hcstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string EtherLikeMIB::Dot3HCStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3HCStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3HCStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3HCStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLikeMIB::Dot3HCStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3HCStatsEntry")
    {
        auto ent_ = std::make_shared<EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry>();
        ent_->parent = this;
        dot3hcstatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLikeMIB::Dot3HCStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dot3hcstatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void EtherLikeMIB::Dot3HCStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void EtherLikeMIB::Dot3HCStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool EtherLikeMIB::Dot3HCStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3HCStatsEntry")
        return true;
    return false;
}

EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry::Dot3HCStatsEntry()
    :
    dot3statsindex{YType::str, "dot3StatsIndex"},
    dot3hcstatsalignmenterrors{YType::uint64, "dot3HCStatsAlignmentErrors"},
    dot3hcstatsfcserrors{YType::uint64, "dot3HCStatsFCSErrors"},
    dot3hcstatsinternalmactransmiterrors{YType::uint64, "dot3HCStatsInternalMacTransmitErrors"},
    dot3hcstatsframetoolongs{YType::uint64, "dot3HCStatsFrameTooLongs"},
    dot3hcstatsinternalmacreceiveerrors{YType::uint64, "dot3HCStatsInternalMacReceiveErrors"},
    dot3hcstatssymbolerrors{YType::uint64, "dot3HCStatsSymbolErrors"}
{

    yang_name = "dot3HCStatsEntry"; yang_parent_name = "dot3HCStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry::~Dot3HCStatsEntry()
{
}

bool EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot3statsindex.is_set
	|| dot3hcstatsalignmenterrors.is_set
	|| dot3hcstatsfcserrors.is_set
	|| dot3hcstatsinternalmactransmiterrors.is_set
	|| dot3hcstatsframetoolongs.is_set
	|| dot3hcstatsinternalmacreceiveerrors.is_set
	|| dot3hcstatssymbolerrors.is_set;
}

bool EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot3statsindex.yfilter)
	|| ydk::is_set(dot3hcstatsalignmenterrors.yfilter)
	|| ydk::is_set(dot3hcstatsfcserrors.yfilter)
	|| ydk::is_set(dot3hcstatsinternalmactransmiterrors.yfilter)
	|| ydk::is_set(dot3hcstatsframetoolongs.yfilter)
	|| ydk::is_set(dot3hcstatsinternalmacreceiveerrors.yfilter)
	|| ydk::is_set(dot3hcstatssymbolerrors.yfilter);
}

std::string EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3HCStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3HCStatsEntry";
    ADD_KEY_TOKEN(dot3statsindex, "dot3StatsIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.yfilter)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (dot3hcstatsalignmenterrors.is_set || is_set(dot3hcstatsalignmenterrors.yfilter)) leaf_name_data.push_back(dot3hcstatsalignmenterrors.get_name_leafdata());
    if (dot3hcstatsfcserrors.is_set || is_set(dot3hcstatsfcserrors.yfilter)) leaf_name_data.push_back(dot3hcstatsfcserrors.get_name_leafdata());
    if (dot3hcstatsinternalmactransmiterrors.is_set || is_set(dot3hcstatsinternalmactransmiterrors.yfilter)) leaf_name_data.push_back(dot3hcstatsinternalmactransmiterrors.get_name_leafdata());
    if (dot3hcstatsframetoolongs.is_set || is_set(dot3hcstatsframetoolongs.yfilter)) leaf_name_data.push_back(dot3hcstatsframetoolongs.get_name_leafdata());
    if (dot3hcstatsinternalmacreceiveerrors.is_set || is_set(dot3hcstatsinternalmacreceiveerrors.yfilter)) leaf_name_data.push_back(dot3hcstatsinternalmacreceiveerrors.get_name_leafdata());
    if (dot3hcstatssymbolerrors.is_set || is_set(dot3hcstatssymbolerrors.yfilter)) leaf_name_data.push_back(dot3hcstatssymbolerrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "dot3HCStatsInternalMacTransmitErrors")
    {
        dot3hcstatsinternalmactransmiterrors = value;
        dot3hcstatsinternalmactransmiterrors.value_namespace = name_space;
        dot3hcstatsinternalmactransmiterrors.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dot3HCStatsSymbolErrors")
    {
        dot3hcstatssymbolerrors = value;
        dot3hcstatssymbolerrors.value_namespace = name_space;
        dot3hcstatssymbolerrors.value_namespace_prefix = name_space_prefix;
    }
}

void EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "dot3HCStatsInternalMacTransmitErrors")
    {
        dot3hcstatsinternalmactransmiterrors.yfilter = yfilter;
    }
    if(value_path == "dot3HCStatsFrameTooLongs")
    {
        dot3hcstatsframetoolongs.yfilter = yfilter;
    }
    if(value_path == "dot3HCStatsInternalMacReceiveErrors")
    {
        dot3hcstatsinternalmacreceiveerrors.yfilter = yfilter;
    }
    if(value_path == "dot3HCStatsSymbolErrors")
    {
        dot3hcstatssymbolerrors.yfilter = yfilter;
    }
}

bool EtherLikeMIB::Dot3HCStatsTable::Dot3HCStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot3StatsIndex" || name == "dot3HCStatsAlignmentErrors" || name == "dot3HCStatsFCSErrors" || name == "dot3HCStatsInternalMacTransmitErrors" || name == "dot3HCStatsFrameTooLongs" || name == "dot3HCStatsInternalMacReceiveErrors" || name == "dot3HCStatsSymbolErrors")
        return true;
    return false;
}

const Enum::YLeaf EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::Dot3StatsDuplexStatus::unknown {1, "unknown"};
const Enum::YLeaf EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::Dot3StatsDuplexStatus::halfDuplex {2, "halfDuplex"};
const Enum::YLeaf EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::Dot3StatsDuplexStatus::fullDuplex {3, "fullDuplex"};

const Enum::YLeaf EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::Dot3StatsRateControlStatus::rateControlOff {1, "rateControlOff"};
const Enum::YLeaf EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::Dot3StatsRateControlStatus::rateControlOn {2, "rateControlOn"};
const Enum::YLeaf EtherLikeMIB::Dot3StatsTable::Dot3StatsEntry::Dot3StatsRateControlStatus::unknown {3, "unknown"};

const Enum::YLeaf EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::Dot3PauseAdminMode::disabled {1, "disabled"};
const Enum::YLeaf EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::Dot3PauseAdminMode::enabledXmit {2, "enabledXmit"};
const Enum::YLeaf EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::Dot3PauseAdminMode::enabledRcv {3, "enabledRcv"};
const Enum::YLeaf EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::Dot3PauseAdminMode::enabledXmitAndRcv {4, "enabledXmitAndRcv"};

const Enum::YLeaf EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::Dot3PauseOperMode::disabled {1, "disabled"};
const Enum::YLeaf EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::Dot3PauseOperMode::enabledXmit {2, "enabledXmit"};
const Enum::YLeaf EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::Dot3PauseOperMode::enabledRcv {3, "enabledRcv"};
const Enum::YLeaf EtherLikeMIB::Dot3PauseTable::Dot3PauseEntry::Dot3PauseOperMode::enabledXmitAndRcv {4, "enabledXmitAndRcv"};


}
}

