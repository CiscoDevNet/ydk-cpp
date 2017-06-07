
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "TOKENRING_MIB.hpp"

namespace ydk {
namespace TOKENRING_MIB {

Dot5Chipsettitms380Identity::Dot5Chipsettitms380Identity()
     : Identity("TOKENRING-MIB:dot5ChipSetTItms380")
{
}

Dot5Chipsettitms380Identity::~Dot5Chipsettitms380Identity()
{
}

Dot5Chipsettitms380C16Identity::Dot5Chipsettitms380C16Identity()
     : Identity("TOKENRING-MIB:dot5ChipSetTItms380c16")
{
}

Dot5Chipsettitms380C16Identity::~Dot5Chipsettitms380C16Identity()
{
}

Dot5Chipsetibm16Identity::Dot5Chipsetibm16Identity()
     : Identity("TOKENRING-MIB:dot5ChipSetIBM16")
{
}

Dot5Chipsetibm16Identity::~Dot5Chipsetibm16Identity()
{
}

Dot5TestinsertfuncIdentity::Dot5TestinsertfuncIdentity()
     : Identity("TOKENRING-MIB:dot5TestInsertFunc")
{
}

Dot5TestinsertfuncIdentity::~Dot5TestinsertfuncIdentity()
{
}

Dot5TestfullduplexloopbackIdentity::Dot5TestfullduplexloopbackIdentity()
     : Identity("TOKENRING-MIB:dot5TestFullDuplexLoopBack")
{
}

Dot5TestfullduplexloopbackIdentity::~Dot5TestfullduplexloopbackIdentity()
{
}

TokenringMib::TokenringMib()
    :
    dot5statstable(std::make_shared<TokenringMib::Dot5Statstable>())
	,dot5table(std::make_shared<TokenringMib::Dot5Table>())
	,dot5timertable(std::make_shared<TokenringMib::Dot5Timertable>())
{
    dot5statstable->parent = this;

    dot5table->parent = this;

    dot5timertable->parent = this;

    yang_name = "TOKENRING-MIB"; yang_parent_name = "TOKENRING-MIB";
}

TokenringMib::~TokenringMib()
{
}

bool TokenringMib::has_data() const
{
    return (dot5statstable !=  nullptr && dot5statstable->has_data())
	|| (dot5table !=  nullptr && dot5table->has_data())
	|| (dot5timertable !=  nullptr && dot5timertable->has_data());
}

bool TokenringMib::has_operation() const
{
    return is_set(operation)
	|| (dot5statstable !=  nullptr && dot5statstable->has_operation())
	|| (dot5table !=  nullptr && dot5table->has_operation())
	|| (dot5timertable !=  nullptr && dot5timertable->has_operation());
}

std::string TokenringMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TOKENRING-MIB:TOKENRING-MIB";

    return path_buffer.str();

}

const EntityPath TokenringMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> TokenringMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot5StatsTable")
    {
        if(dot5statstable == nullptr)
        {
            dot5statstable = std::make_shared<TokenringMib::Dot5Statstable>();
        }
        return dot5statstable;
    }

    if(child_yang_name == "dot5Table")
    {
        if(dot5table == nullptr)
        {
            dot5table = std::make_shared<TokenringMib::Dot5Table>();
        }
        return dot5table;
    }

    if(child_yang_name == "dot5TimerTable")
    {
        if(dot5timertable == nullptr)
        {
            dot5timertable = std::make_shared<TokenringMib::Dot5Timertable>();
        }
        return dot5timertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenringMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot5statstable != nullptr)
    {
        children["dot5StatsTable"] = dot5statstable;
    }

    if(dot5table != nullptr)
    {
        children["dot5Table"] = dot5table;
    }

    if(dot5timertable != nullptr)
    {
        children["dot5TimerTable"] = dot5timertable;
    }

    return children;
}

void TokenringMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> TokenringMib::clone_ptr() const
{
    return std::make_shared<TokenringMib>();
}

std::string TokenringMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string TokenringMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function TokenringMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

TokenringMib::Dot5Table::Dot5Table()
{
    yang_name = "dot5Table"; yang_parent_name = "TOKENRING-MIB";
}

TokenringMib::Dot5Table::~Dot5Table()
{
}

bool TokenringMib::Dot5Table::has_data() const
{
    for (std::size_t index=0; index<dot5entry.size(); index++)
    {
        if(dot5entry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenringMib::Dot5Table::has_operation() const
{
    for (std::size_t index=0; index<dot5entry.size(); index++)
    {
        if(dot5entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenringMib::Dot5Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot5Table";

    return path_buffer.str();

}

const EntityPath TokenringMib::Dot5Table::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKENRING-MIB:TOKENRING-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenringMib::Dot5Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot5Entry")
    {
        for(auto const & c : dot5entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenringMib::Dot5Table::Dot5Entry>();
        c->parent = this;
        dot5entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenringMib::Dot5Table::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot5entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenringMib::Dot5Table::set_value(const std::string & value_path, std::string value)
{
}

TokenringMib::Dot5Table::Dot5Entry::Dot5Entry()
    :
    dot5ifindex{YType::int32, "dot5IfIndex"},
    dot5actmonparticipate{YType::enumeration, "dot5ActMonParticipate"},
    dot5commands{YType::enumeration, "dot5Commands"},
    dot5functional{YType::str, "dot5Functional"},
    dot5lastbeaconsent{YType::uint32, "dot5LastBeaconSent"},
    dot5ringopenstatus{YType::enumeration, "dot5RingOpenStatus"},
    dot5ringspeed{YType::enumeration, "dot5RingSpeed"},
    dot5ringstate{YType::enumeration, "dot5RingState"},
    dot5ringstatus{YType::int32, "dot5RingStatus"},
    dot5upstream{YType::str, "dot5UpStream"}
{
    yang_name = "dot5Entry"; yang_parent_name = "dot5Table";
}

TokenringMib::Dot5Table::Dot5Entry::~Dot5Entry()
{
}

bool TokenringMib::Dot5Table::Dot5Entry::has_data() const
{
    return dot5ifindex.is_set
	|| dot5actmonparticipate.is_set
	|| dot5commands.is_set
	|| dot5functional.is_set
	|| dot5lastbeaconsent.is_set
	|| dot5ringopenstatus.is_set
	|| dot5ringspeed.is_set
	|| dot5ringstate.is_set
	|| dot5ringstatus.is_set
	|| dot5upstream.is_set;
}

bool TokenringMib::Dot5Table::Dot5Entry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot5ifindex.operation)
	|| is_set(dot5actmonparticipate.operation)
	|| is_set(dot5commands.operation)
	|| is_set(dot5functional.operation)
	|| is_set(dot5lastbeaconsent.operation)
	|| is_set(dot5ringopenstatus.operation)
	|| is_set(dot5ringspeed.operation)
	|| is_set(dot5ringstate.operation)
	|| is_set(dot5ringstatus.operation)
	|| is_set(dot5upstream.operation);
}

std::string TokenringMib::Dot5Table::Dot5Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot5Entry" <<"[dot5IfIndex='" <<dot5ifindex <<"']";

    return path_buffer.str();

}

const EntityPath TokenringMib::Dot5Table::Dot5Entry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKENRING-MIB:TOKENRING-MIB/dot5Table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot5ifindex.is_set || is_set(dot5ifindex.operation)) leaf_name_data.push_back(dot5ifindex.get_name_leafdata());
    if (dot5actmonparticipate.is_set || is_set(dot5actmonparticipate.operation)) leaf_name_data.push_back(dot5actmonparticipate.get_name_leafdata());
    if (dot5commands.is_set || is_set(dot5commands.operation)) leaf_name_data.push_back(dot5commands.get_name_leafdata());
    if (dot5functional.is_set || is_set(dot5functional.operation)) leaf_name_data.push_back(dot5functional.get_name_leafdata());
    if (dot5lastbeaconsent.is_set || is_set(dot5lastbeaconsent.operation)) leaf_name_data.push_back(dot5lastbeaconsent.get_name_leafdata());
    if (dot5ringopenstatus.is_set || is_set(dot5ringopenstatus.operation)) leaf_name_data.push_back(dot5ringopenstatus.get_name_leafdata());
    if (dot5ringspeed.is_set || is_set(dot5ringspeed.operation)) leaf_name_data.push_back(dot5ringspeed.get_name_leafdata());
    if (dot5ringstate.is_set || is_set(dot5ringstate.operation)) leaf_name_data.push_back(dot5ringstate.get_name_leafdata());
    if (dot5ringstatus.is_set || is_set(dot5ringstatus.operation)) leaf_name_data.push_back(dot5ringstatus.get_name_leafdata());
    if (dot5upstream.is_set || is_set(dot5upstream.operation)) leaf_name_data.push_back(dot5upstream.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenringMib::Dot5Table::Dot5Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenringMib::Dot5Table::Dot5Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenringMib::Dot5Table::Dot5Entry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot5IfIndex")
    {
        dot5ifindex = value;
    }
    if(value_path == "dot5ActMonParticipate")
    {
        dot5actmonparticipate = value;
    }
    if(value_path == "dot5Commands")
    {
        dot5commands = value;
    }
    if(value_path == "dot5Functional")
    {
        dot5functional = value;
    }
    if(value_path == "dot5LastBeaconSent")
    {
        dot5lastbeaconsent = value;
    }
    if(value_path == "dot5RingOpenStatus")
    {
        dot5ringopenstatus = value;
    }
    if(value_path == "dot5RingSpeed")
    {
        dot5ringspeed = value;
    }
    if(value_path == "dot5RingState")
    {
        dot5ringstate = value;
    }
    if(value_path == "dot5RingStatus")
    {
        dot5ringstatus = value;
    }
    if(value_path == "dot5UpStream")
    {
        dot5upstream = value;
    }
}

TokenringMib::Dot5Statstable::Dot5Statstable()
{
    yang_name = "dot5StatsTable"; yang_parent_name = "TOKENRING-MIB";
}

TokenringMib::Dot5Statstable::~Dot5Statstable()
{
}

bool TokenringMib::Dot5Statstable::has_data() const
{
    for (std::size_t index=0; index<dot5statsentry.size(); index++)
    {
        if(dot5statsentry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenringMib::Dot5Statstable::has_operation() const
{
    for (std::size_t index=0; index<dot5statsentry.size(); index++)
    {
        if(dot5statsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenringMib::Dot5Statstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot5StatsTable";

    return path_buffer.str();

}

const EntityPath TokenringMib::Dot5Statstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKENRING-MIB:TOKENRING-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenringMib::Dot5Statstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot5StatsEntry")
    {
        for(auto const & c : dot5statsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenringMib::Dot5Statstable::Dot5Statsentry>();
        c->parent = this;
        dot5statsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenringMib::Dot5Statstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot5statsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenringMib::Dot5Statstable::set_value(const std::string & value_path, std::string value)
{
}

TokenringMib::Dot5Statstable::Dot5Statsentry::Dot5Statsentry()
    :
    dot5statsifindex{YType::int32, "dot5StatsIfIndex"},
    dot5statsaborttranserrors{YType::uint32, "dot5StatsAbortTransErrors"},
    dot5statsacerrors{YType::uint32, "dot5StatsACErrors"},
    dot5statsbursterrors{YType::uint32, "dot5StatsBurstErrors"},
    dot5statsframecopiederrors{YType::uint32, "dot5StatsFrameCopiedErrors"},
    dot5statsfreqerrors{YType::uint32, "dot5StatsFreqErrors"},
    dot5statsharderrors{YType::uint32, "dot5StatsHardErrors"},
    dot5statsinternalerrors{YType::uint32, "dot5StatsInternalErrors"},
    dot5statslineerrors{YType::uint32, "dot5StatsLineErrors"},
    dot5statslobewires{YType::uint32, "dot5StatsLobeWires"},
    dot5statslostframeerrors{YType::uint32, "dot5StatsLostFrameErrors"},
    dot5statsreceivecongestions{YType::uint32, "dot5StatsReceiveCongestions"},
    dot5statsrecoverys{YType::uint32, "dot5StatsRecoverys"},
    dot5statsremoves{YType::uint32, "dot5StatsRemoves"},
    dot5statssignalloss{YType::uint32, "dot5StatsSignalLoss"},
    dot5statssingles{YType::uint32, "dot5StatsSingles"},
    dot5statssofterrors{YType::uint32, "dot5StatsSoftErrors"},
    dot5statstokenerrors{YType::uint32, "dot5StatsTokenErrors"},
    dot5statstransmitbeacons{YType::uint32, "dot5StatsTransmitBeacons"}
{
    yang_name = "dot5StatsEntry"; yang_parent_name = "dot5StatsTable";
}

TokenringMib::Dot5Statstable::Dot5Statsentry::~Dot5Statsentry()
{
}

bool TokenringMib::Dot5Statstable::Dot5Statsentry::has_data() const
{
    return dot5statsifindex.is_set
	|| dot5statsaborttranserrors.is_set
	|| dot5statsacerrors.is_set
	|| dot5statsbursterrors.is_set
	|| dot5statsframecopiederrors.is_set
	|| dot5statsfreqerrors.is_set
	|| dot5statsharderrors.is_set
	|| dot5statsinternalerrors.is_set
	|| dot5statslineerrors.is_set
	|| dot5statslobewires.is_set
	|| dot5statslostframeerrors.is_set
	|| dot5statsreceivecongestions.is_set
	|| dot5statsrecoverys.is_set
	|| dot5statsremoves.is_set
	|| dot5statssignalloss.is_set
	|| dot5statssingles.is_set
	|| dot5statssofterrors.is_set
	|| dot5statstokenerrors.is_set
	|| dot5statstransmitbeacons.is_set;
}

bool TokenringMib::Dot5Statstable::Dot5Statsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot5statsifindex.operation)
	|| is_set(dot5statsaborttranserrors.operation)
	|| is_set(dot5statsacerrors.operation)
	|| is_set(dot5statsbursterrors.operation)
	|| is_set(dot5statsframecopiederrors.operation)
	|| is_set(dot5statsfreqerrors.operation)
	|| is_set(dot5statsharderrors.operation)
	|| is_set(dot5statsinternalerrors.operation)
	|| is_set(dot5statslineerrors.operation)
	|| is_set(dot5statslobewires.operation)
	|| is_set(dot5statslostframeerrors.operation)
	|| is_set(dot5statsreceivecongestions.operation)
	|| is_set(dot5statsrecoverys.operation)
	|| is_set(dot5statsremoves.operation)
	|| is_set(dot5statssignalloss.operation)
	|| is_set(dot5statssingles.operation)
	|| is_set(dot5statssofterrors.operation)
	|| is_set(dot5statstokenerrors.operation)
	|| is_set(dot5statstransmitbeacons.operation);
}

std::string TokenringMib::Dot5Statstable::Dot5Statsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot5StatsEntry" <<"[dot5StatsIfIndex='" <<dot5statsifindex <<"']";

    return path_buffer.str();

}

const EntityPath TokenringMib::Dot5Statstable::Dot5Statsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKENRING-MIB:TOKENRING-MIB/dot5StatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot5statsifindex.is_set || is_set(dot5statsifindex.operation)) leaf_name_data.push_back(dot5statsifindex.get_name_leafdata());
    if (dot5statsaborttranserrors.is_set || is_set(dot5statsaborttranserrors.operation)) leaf_name_data.push_back(dot5statsaborttranserrors.get_name_leafdata());
    if (dot5statsacerrors.is_set || is_set(dot5statsacerrors.operation)) leaf_name_data.push_back(dot5statsacerrors.get_name_leafdata());
    if (dot5statsbursterrors.is_set || is_set(dot5statsbursterrors.operation)) leaf_name_data.push_back(dot5statsbursterrors.get_name_leafdata());
    if (dot5statsframecopiederrors.is_set || is_set(dot5statsframecopiederrors.operation)) leaf_name_data.push_back(dot5statsframecopiederrors.get_name_leafdata());
    if (dot5statsfreqerrors.is_set || is_set(dot5statsfreqerrors.operation)) leaf_name_data.push_back(dot5statsfreqerrors.get_name_leafdata());
    if (dot5statsharderrors.is_set || is_set(dot5statsharderrors.operation)) leaf_name_data.push_back(dot5statsharderrors.get_name_leafdata());
    if (dot5statsinternalerrors.is_set || is_set(dot5statsinternalerrors.operation)) leaf_name_data.push_back(dot5statsinternalerrors.get_name_leafdata());
    if (dot5statslineerrors.is_set || is_set(dot5statslineerrors.operation)) leaf_name_data.push_back(dot5statslineerrors.get_name_leafdata());
    if (dot5statslobewires.is_set || is_set(dot5statslobewires.operation)) leaf_name_data.push_back(dot5statslobewires.get_name_leafdata());
    if (dot5statslostframeerrors.is_set || is_set(dot5statslostframeerrors.operation)) leaf_name_data.push_back(dot5statslostframeerrors.get_name_leafdata());
    if (dot5statsreceivecongestions.is_set || is_set(dot5statsreceivecongestions.operation)) leaf_name_data.push_back(dot5statsreceivecongestions.get_name_leafdata());
    if (dot5statsrecoverys.is_set || is_set(dot5statsrecoverys.operation)) leaf_name_data.push_back(dot5statsrecoverys.get_name_leafdata());
    if (dot5statsremoves.is_set || is_set(dot5statsremoves.operation)) leaf_name_data.push_back(dot5statsremoves.get_name_leafdata());
    if (dot5statssignalloss.is_set || is_set(dot5statssignalloss.operation)) leaf_name_data.push_back(dot5statssignalloss.get_name_leafdata());
    if (dot5statssingles.is_set || is_set(dot5statssingles.operation)) leaf_name_data.push_back(dot5statssingles.get_name_leafdata());
    if (dot5statssofterrors.is_set || is_set(dot5statssofterrors.operation)) leaf_name_data.push_back(dot5statssofterrors.get_name_leafdata());
    if (dot5statstokenerrors.is_set || is_set(dot5statstokenerrors.operation)) leaf_name_data.push_back(dot5statstokenerrors.get_name_leafdata());
    if (dot5statstransmitbeacons.is_set || is_set(dot5statstransmitbeacons.operation)) leaf_name_data.push_back(dot5statstransmitbeacons.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenringMib::Dot5Statstable::Dot5Statsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenringMib::Dot5Statstable::Dot5Statsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenringMib::Dot5Statstable::Dot5Statsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot5StatsIfIndex")
    {
        dot5statsifindex = value;
    }
    if(value_path == "dot5StatsAbortTransErrors")
    {
        dot5statsaborttranserrors = value;
    }
    if(value_path == "dot5StatsACErrors")
    {
        dot5statsacerrors = value;
    }
    if(value_path == "dot5StatsBurstErrors")
    {
        dot5statsbursterrors = value;
    }
    if(value_path == "dot5StatsFrameCopiedErrors")
    {
        dot5statsframecopiederrors = value;
    }
    if(value_path == "dot5StatsFreqErrors")
    {
        dot5statsfreqerrors = value;
    }
    if(value_path == "dot5StatsHardErrors")
    {
        dot5statsharderrors = value;
    }
    if(value_path == "dot5StatsInternalErrors")
    {
        dot5statsinternalerrors = value;
    }
    if(value_path == "dot5StatsLineErrors")
    {
        dot5statslineerrors = value;
    }
    if(value_path == "dot5StatsLobeWires")
    {
        dot5statslobewires = value;
    }
    if(value_path == "dot5StatsLostFrameErrors")
    {
        dot5statslostframeerrors = value;
    }
    if(value_path == "dot5StatsReceiveCongestions")
    {
        dot5statsreceivecongestions = value;
    }
    if(value_path == "dot5StatsRecoverys")
    {
        dot5statsrecoverys = value;
    }
    if(value_path == "dot5StatsRemoves")
    {
        dot5statsremoves = value;
    }
    if(value_path == "dot5StatsSignalLoss")
    {
        dot5statssignalloss = value;
    }
    if(value_path == "dot5StatsSingles")
    {
        dot5statssingles = value;
    }
    if(value_path == "dot5StatsSoftErrors")
    {
        dot5statssofterrors = value;
    }
    if(value_path == "dot5StatsTokenErrors")
    {
        dot5statstokenerrors = value;
    }
    if(value_path == "dot5StatsTransmitBeacons")
    {
        dot5statstransmitbeacons = value;
    }
}

TokenringMib::Dot5Timertable::Dot5Timertable()
{
    yang_name = "dot5TimerTable"; yang_parent_name = "TOKENRING-MIB";
}

TokenringMib::Dot5Timertable::~Dot5Timertable()
{
}

bool TokenringMib::Dot5Timertable::has_data() const
{
    for (std::size_t index=0; index<dot5timerentry.size(); index++)
    {
        if(dot5timerentry[index]->has_data())
            return true;
    }
    return false;
}

bool TokenringMib::Dot5Timertable::has_operation() const
{
    for (std::size_t index=0; index<dot5timerentry.size(); index++)
    {
        if(dot5timerentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TokenringMib::Dot5Timertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot5TimerTable";

    return path_buffer.str();

}

const EntityPath TokenringMib::Dot5Timertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKENRING-MIB:TOKENRING-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenringMib::Dot5Timertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot5TimerEntry")
    {
        for(auto const & c : dot5timerentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TokenringMib::Dot5Timertable::Dot5Timerentry>();
        c->parent = this;
        dot5timerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenringMib::Dot5Timertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot5timerentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TokenringMib::Dot5Timertable::set_value(const std::string & value_path, std::string value)
{
}

TokenringMib::Dot5Timertable::Dot5Timerentry::Dot5Timerentry()
    :
    dot5timerifindex{YType::int32, "dot5TimerIfIndex"},
    dot5timeractivemon{YType::int32, "dot5TimerActiveMon"},
    dot5timerbeaconreceive{YType::int32, "dot5TimerBeaconReceive"},
    dot5timerbeacontransmit{YType::int32, "dot5TimerBeaconTransmit"},
    dot5timererrorreport{YType::int32, "dot5TimerErrorReport"},
    dot5timerholding{YType::int32, "dot5TimerHolding"},
    dot5timernotoken{YType::int32, "dot5TimerNoToken"},
    dot5timerqueuepdu{YType::int32, "dot5TimerQueuePDU"},
    dot5timerreturnrepeat{YType::int32, "dot5TimerReturnRepeat"},
    dot5timerstandbymon{YType::int32, "dot5TimerStandbyMon"},
    dot5timervalidtransmit{YType::int32, "dot5TimerValidTransmit"}
{
    yang_name = "dot5TimerEntry"; yang_parent_name = "dot5TimerTable";
}

TokenringMib::Dot5Timertable::Dot5Timerentry::~Dot5Timerentry()
{
}

bool TokenringMib::Dot5Timertable::Dot5Timerentry::has_data() const
{
    return dot5timerifindex.is_set
	|| dot5timeractivemon.is_set
	|| dot5timerbeaconreceive.is_set
	|| dot5timerbeacontransmit.is_set
	|| dot5timererrorreport.is_set
	|| dot5timerholding.is_set
	|| dot5timernotoken.is_set
	|| dot5timerqueuepdu.is_set
	|| dot5timerreturnrepeat.is_set
	|| dot5timerstandbymon.is_set
	|| dot5timervalidtransmit.is_set;
}

bool TokenringMib::Dot5Timertable::Dot5Timerentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot5timerifindex.operation)
	|| is_set(dot5timeractivemon.operation)
	|| is_set(dot5timerbeaconreceive.operation)
	|| is_set(dot5timerbeacontransmit.operation)
	|| is_set(dot5timererrorreport.operation)
	|| is_set(dot5timerholding.operation)
	|| is_set(dot5timernotoken.operation)
	|| is_set(dot5timerqueuepdu.operation)
	|| is_set(dot5timerreturnrepeat.operation)
	|| is_set(dot5timerstandbymon.operation)
	|| is_set(dot5timervalidtransmit.operation);
}

std::string TokenringMib::Dot5Timertable::Dot5Timerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot5TimerEntry" <<"[dot5TimerIfIndex='" <<dot5timerifindex <<"']";

    return path_buffer.str();

}

const EntityPath TokenringMib::Dot5Timertable::Dot5Timerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "TOKENRING-MIB:TOKENRING-MIB/dot5TimerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot5timerifindex.is_set || is_set(dot5timerifindex.operation)) leaf_name_data.push_back(dot5timerifindex.get_name_leafdata());
    if (dot5timeractivemon.is_set || is_set(dot5timeractivemon.operation)) leaf_name_data.push_back(dot5timeractivemon.get_name_leafdata());
    if (dot5timerbeaconreceive.is_set || is_set(dot5timerbeaconreceive.operation)) leaf_name_data.push_back(dot5timerbeaconreceive.get_name_leafdata());
    if (dot5timerbeacontransmit.is_set || is_set(dot5timerbeacontransmit.operation)) leaf_name_data.push_back(dot5timerbeacontransmit.get_name_leafdata());
    if (dot5timererrorreport.is_set || is_set(dot5timererrorreport.operation)) leaf_name_data.push_back(dot5timererrorreport.get_name_leafdata());
    if (dot5timerholding.is_set || is_set(dot5timerholding.operation)) leaf_name_data.push_back(dot5timerholding.get_name_leafdata());
    if (dot5timernotoken.is_set || is_set(dot5timernotoken.operation)) leaf_name_data.push_back(dot5timernotoken.get_name_leafdata());
    if (dot5timerqueuepdu.is_set || is_set(dot5timerqueuepdu.operation)) leaf_name_data.push_back(dot5timerqueuepdu.get_name_leafdata());
    if (dot5timerreturnrepeat.is_set || is_set(dot5timerreturnrepeat.operation)) leaf_name_data.push_back(dot5timerreturnrepeat.get_name_leafdata());
    if (dot5timerstandbymon.is_set || is_set(dot5timerstandbymon.operation)) leaf_name_data.push_back(dot5timerstandbymon.get_name_leafdata());
    if (dot5timervalidtransmit.is_set || is_set(dot5timervalidtransmit.operation)) leaf_name_data.push_back(dot5timervalidtransmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TokenringMib::Dot5Timertable::Dot5Timerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TokenringMib::Dot5Timertable::Dot5Timerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TokenringMib::Dot5Timertable::Dot5Timerentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot5TimerIfIndex")
    {
        dot5timerifindex = value;
    }
    if(value_path == "dot5TimerActiveMon")
    {
        dot5timeractivemon = value;
    }
    if(value_path == "dot5TimerBeaconReceive")
    {
        dot5timerbeaconreceive = value;
    }
    if(value_path == "dot5TimerBeaconTransmit")
    {
        dot5timerbeacontransmit = value;
    }
    if(value_path == "dot5TimerErrorReport")
    {
        dot5timererrorreport = value;
    }
    if(value_path == "dot5TimerHolding")
    {
        dot5timerholding = value;
    }
    if(value_path == "dot5TimerNoToken")
    {
        dot5timernotoken = value;
    }
    if(value_path == "dot5TimerQueuePDU")
    {
        dot5timerqueuepdu = value;
    }
    if(value_path == "dot5TimerReturnRepeat")
    {
        dot5timerreturnrepeat = value;
    }
    if(value_path == "dot5TimerStandbyMon")
    {
        dot5timerstandbymon = value;
    }
    if(value_path == "dot5TimerValidTransmit")
    {
        dot5timervalidtransmit = value;
    }
}

const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5CommandsEnum::noop {1, "noop"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5CommandsEnum::open {2, "open"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5CommandsEnum::reset {3, "reset"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5CommandsEnum::close {4, "close"};

const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingstateEnum::opened {1, "opened"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingstateEnum::closed {2, "closed"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingstateEnum::opening {3, "opening"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingstateEnum::closing {4, "closing"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingstateEnum::openFailure {5, "openFailure"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingstateEnum::ringFailure {6, "ringFailure"};

const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingopenstatusEnum::noOpen {1, "noOpen"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingopenstatusEnum::badParam {2, "badParam"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingopenstatusEnum::lobeFailed {3, "lobeFailed"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingopenstatusEnum::signalLoss {4, "signalLoss"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingopenstatusEnum::insertionTimeout {5, "insertionTimeout"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingopenstatusEnum::ringFailed {6, "ringFailed"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingopenstatusEnum::beaconing {7, "beaconing"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingopenstatusEnum::duplicateMAC {8, "duplicateMAC"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingopenstatusEnum::requestFailed {9, "requestFailed"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingopenstatusEnum::removeReceived {10, "removeReceived"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingopenstatusEnum::open {11, "open"};

const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingspeedEnum::unknown {1, "unknown"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingspeedEnum::oneMegabit {2, "oneMegabit"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingspeedEnum::fourMegabit {3, "fourMegabit"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5RingspeedEnum::sixteenMegabit {4, "sixteenMegabit"};

const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5ActmonparticipateEnum::true_ {1, "true"};
const Enum::YLeaf TokenringMib::Dot5Table::Dot5Entry::Dot5ActmonparticipateEnum::false_ {2, "false"};


}
}

