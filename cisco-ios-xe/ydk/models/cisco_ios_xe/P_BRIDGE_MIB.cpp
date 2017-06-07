
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "P_BRIDGE_MIB.hpp"

namespace ydk {
namespace P_BRIDGE_MIB {

PBridgeMib::PBridgeMib()
    :
    dot1dextbase(std::make_shared<PBridgeMib::Dot1Dextbase>())
	,dot1dportoutboundaccessprioritytable(std::make_shared<PBridgeMib::Dot1Dportoutboundaccessprioritytable>())
	,dot1dtphcporttable(std::make_shared<PBridgeMib::Dot1Dtphcporttable>())
	,dot1dtpportoverflowtable(std::make_shared<PBridgeMib::Dot1Dtpportoverflowtable>())
	,dot1dtrafficclasstable(std::make_shared<PBridgeMib::Dot1Dtrafficclasstable>())
	,dot1duserpriorityregentable(std::make_shared<PBridgeMib::Dot1Duserpriorityregentable>())
{
    dot1dextbase->parent = this;

    dot1dportoutboundaccessprioritytable->parent = this;

    dot1dtphcporttable->parent = this;

    dot1dtpportoverflowtable->parent = this;

    dot1dtrafficclasstable->parent = this;

    dot1duserpriorityregentable->parent = this;

    yang_name = "P-BRIDGE-MIB"; yang_parent_name = "P-BRIDGE-MIB";
}

PBridgeMib::~PBridgeMib()
{
}

bool PBridgeMib::has_data() const
{
    return (dot1dextbase !=  nullptr && dot1dextbase->has_data())
	|| (dot1dportoutboundaccessprioritytable !=  nullptr && dot1dportoutboundaccessprioritytable->has_data())
	|| (dot1dtphcporttable !=  nullptr && dot1dtphcporttable->has_data())
	|| (dot1dtpportoverflowtable !=  nullptr && dot1dtpportoverflowtable->has_data())
	|| (dot1dtrafficclasstable !=  nullptr && dot1dtrafficclasstable->has_data())
	|| (dot1duserpriorityregentable !=  nullptr && dot1duserpriorityregentable->has_data());
}

bool PBridgeMib::has_operation() const
{
    return is_set(operation)
	|| (dot1dextbase !=  nullptr && dot1dextbase->has_operation())
	|| (dot1dportoutboundaccessprioritytable !=  nullptr && dot1dportoutboundaccessprioritytable->has_operation())
	|| (dot1dtphcporttable !=  nullptr && dot1dtphcporttable->has_operation())
	|| (dot1dtpportoverflowtable !=  nullptr && dot1dtpportoverflowtable->has_operation())
	|| (dot1dtrafficclasstable !=  nullptr && dot1dtrafficclasstable->has_operation())
	|| (dot1duserpriorityregentable !=  nullptr && dot1duserpriorityregentable->has_operation());
}

std::string PBridgeMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB";

    return path_buffer.str();

}

const EntityPath PBridgeMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PBridgeMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dExtBase")
    {
        if(dot1dextbase == nullptr)
        {
            dot1dextbase = std::make_shared<PBridgeMib::Dot1Dextbase>();
        }
        return dot1dextbase;
    }

    if(child_yang_name == "dot1dPortOutboundAccessPriorityTable")
    {
        if(dot1dportoutboundaccessprioritytable == nullptr)
        {
            dot1dportoutboundaccessprioritytable = std::make_shared<PBridgeMib::Dot1Dportoutboundaccessprioritytable>();
        }
        return dot1dportoutboundaccessprioritytable;
    }

    if(child_yang_name == "dot1dTpHCPortTable")
    {
        if(dot1dtphcporttable == nullptr)
        {
            dot1dtphcporttable = std::make_shared<PBridgeMib::Dot1Dtphcporttable>();
        }
        return dot1dtphcporttable;
    }

    if(child_yang_name == "dot1dTpPortOverflowTable")
    {
        if(dot1dtpportoverflowtable == nullptr)
        {
            dot1dtpportoverflowtable = std::make_shared<PBridgeMib::Dot1Dtpportoverflowtable>();
        }
        return dot1dtpportoverflowtable;
    }

    if(child_yang_name == "dot1dTrafficClassTable")
    {
        if(dot1dtrafficclasstable == nullptr)
        {
            dot1dtrafficclasstable = std::make_shared<PBridgeMib::Dot1Dtrafficclasstable>();
        }
        return dot1dtrafficclasstable;
    }

    if(child_yang_name == "dot1dUserPriorityRegenTable")
    {
        if(dot1duserpriorityregentable == nullptr)
        {
            dot1duserpriorityregentable = std::make_shared<PBridgeMib::Dot1Duserpriorityregentable>();
        }
        return dot1duserpriorityregentable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBridgeMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1dextbase != nullptr)
    {
        children["dot1dExtBase"] = dot1dextbase;
    }

    if(dot1dportoutboundaccessprioritytable != nullptr)
    {
        children["dot1dPortOutboundAccessPriorityTable"] = dot1dportoutboundaccessprioritytable;
    }

    if(dot1dtphcporttable != nullptr)
    {
        children["dot1dTpHCPortTable"] = dot1dtphcporttable;
    }

    if(dot1dtpportoverflowtable != nullptr)
    {
        children["dot1dTpPortOverflowTable"] = dot1dtpportoverflowtable;
    }

    if(dot1dtrafficclasstable != nullptr)
    {
        children["dot1dTrafficClassTable"] = dot1dtrafficclasstable;
    }

    if(dot1duserpriorityregentable != nullptr)
    {
        children["dot1dUserPriorityRegenTable"] = dot1duserpriorityregentable;
    }

    return children;
}

void PBridgeMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> PBridgeMib::clone_ptr() const
{
    return std::make_shared<PBridgeMib>();
}

std::string PBridgeMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string PBridgeMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function PBridgeMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

PBridgeMib::Dot1Dextbase::Dot1Dextbase()
    :
    dot1ddevicecapabilities{YType::bits, "dot1dDeviceCapabilities"},
    dot1dgmrpstatus{YType::enumeration, "dot1dGmrpStatus"},
    dot1dtrafficclassesenabled{YType::boolean, "dot1dTrafficClassesEnabled"}
{
    yang_name = "dot1dExtBase"; yang_parent_name = "P-BRIDGE-MIB";
}

PBridgeMib::Dot1Dextbase::~Dot1Dextbase()
{
}

bool PBridgeMib::Dot1Dextbase::has_data() const
{
    return dot1ddevicecapabilities.is_set
	|| dot1dgmrpstatus.is_set
	|| dot1dtrafficclassesenabled.is_set;
}

bool PBridgeMib::Dot1Dextbase::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1ddevicecapabilities.operation)
	|| is_set(dot1dgmrpstatus.operation)
	|| is_set(dot1dtrafficclassesenabled.operation);
}

std::string PBridgeMib::Dot1Dextbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dExtBase";

    return path_buffer.str();

}

const EntityPath PBridgeMib::Dot1Dextbase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1ddevicecapabilities.is_set || is_set(dot1ddevicecapabilities.operation)) leaf_name_data.push_back(dot1ddevicecapabilities.get_name_leafdata());
    if (dot1dgmrpstatus.is_set || is_set(dot1dgmrpstatus.operation)) leaf_name_data.push_back(dot1dgmrpstatus.get_name_leafdata());
    if (dot1dtrafficclassesenabled.is_set || is_set(dot1dtrafficclassesenabled.operation)) leaf_name_data.push_back(dot1dtrafficclassesenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PBridgeMib::Dot1Dextbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBridgeMib::Dot1Dextbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PBridgeMib::Dot1Dextbase::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dDeviceCapabilities")
    {
        dot1ddevicecapabilities[value] = true;
    }
    if(value_path == "dot1dGmrpStatus")
    {
        dot1dgmrpstatus = value;
    }
    if(value_path == "dot1dTrafficClassesEnabled")
    {
        dot1dtrafficclassesenabled = value;
    }
}

PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcporttable()
{
    yang_name = "dot1dTpHCPortTable"; yang_parent_name = "P-BRIDGE-MIB";
}

PBridgeMib::Dot1Dtphcporttable::~Dot1Dtphcporttable()
{
}

bool PBridgeMib::Dot1Dtphcporttable::has_data() const
{
    for (std::size_t index=0; index<dot1dtphcportentry.size(); index++)
    {
        if(dot1dtphcportentry[index]->has_data())
            return true;
    }
    return false;
}

bool PBridgeMib::Dot1Dtphcporttable::has_operation() const
{
    for (std::size_t index=0; index<dot1dtphcportentry.size(); index++)
    {
        if(dot1dtphcportentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PBridgeMib::Dot1Dtphcporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpHCPortTable";

    return path_buffer.str();

}

const EntityPath PBridgeMib::Dot1Dtphcporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PBridgeMib::Dot1Dtphcporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dTpHCPortEntry")
    {
        for(auto const & c : dot1dtphcportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry>();
        c->parent = this;
        dot1dtphcportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBridgeMib::Dot1Dtphcporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1dtphcportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PBridgeMib::Dot1Dtphcporttable::set_value(const std::string & value_path, std::string value)
{
}

PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry::Dot1Dtphcportentry()
    :
    dot1dtpport{YType::str, "dot1dTpPort"},
    dot1dtphcportindiscards{YType::uint64, "dot1dTpHCPortInDiscards"},
    dot1dtphcportinframes{YType::uint64, "dot1dTpHCPortInFrames"},
    dot1dtphcportoutframes{YType::uint64, "dot1dTpHCPortOutFrames"}
{
    yang_name = "dot1dTpHCPortEntry"; yang_parent_name = "dot1dTpHCPortTable";
}

PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry::~Dot1Dtphcportentry()
{
}

bool PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry::has_data() const
{
    return dot1dtpport.is_set
	|| dot1dtphcportindiscards.is_set
	|| dot1dtphcportinframes.is_set
	|| dot1dtphcportoutframes.is_set;
}

bool PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dtpport.operation)
	|| is_set(dot1dtphcportindiscards.operation)
	|| is_set(dot1dtphcportinframes.operation)
	|| is_set(dot1dtphcportoutframes.operation);
}

std::string PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpHCPortEntry" <<"[dot1dTpPort='" <<dot1dtpport <<"']";

    return path_buffer.str();

}

const EntityPath PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/dot1dTpHCPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dtpport.is_set || is_set(dot1dtpport.operation)) leaf_name_data.push_back(dot1dtpport.get_name_leafdata());
    if (dot1dtphcportindiscards.is_set || is_set(dot1dtphcportindiscards.operation)) leaf_name_data.push_back(dot1dtphcportindiscards.get_name_leafdata());
    if (dot1dtphcportinframes.is_set || is_set(dot1dtphcportinframes.operation)) leaf_name_data.push_back(dot1dtphcportinframes.get_name_leafdata());
    if (dot1dtphcportoutframes.is_set || is_set(dot1dtphcportoutframes.operation)) leaf_name_data.push_back(dot1dtphcportoutframes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dTpPort")
    {
        dot1dtpport = value;
    }
    if(value_path == "dot1dTpHCPortInDiscards")
    {
        dot1dtphcportindiscards = value;
    }
    if(value_path == "dot1dTpHCPortInFrames")
    {
        dot1dtphcportinframes = value;
    }
    if(value_path == "dot1dTpHCPortOutFrames")
    {
        dot1dtphcportoutframes = value;
    }
}

PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowtable()
{
    yang_name = "dot1dTpPortOverflowTable"; yang_parent_name = "P-BRIDGE-MIB";
}

PBridgeMib::Dot1Dtpportoverflowtable::~Dot1Dtpportoverflowtable()
{
}

bool PBridgeMib::Dot1Dtpportoverflowtable::has_data() const
{
    for (std::size_t index=0; index<dot1dtpportoverflowentry.size(); index++)
    {
        if(dot1dtpportoverflowentry[index]->has_data())
            return true;
    }
    return false;
}

bool PBridgeMib::Dot1Dtpportoverflowtable::has_operation() const
{
    for (std::size_t index=0; index<dot1dtpportoverflowentry.size(); index++)
    {
        if(dot1dtpportoverflowentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PBridgeMib::Dot1Dtpportoverflowtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpPortOverflowTable";

    return path_buffer.str();

}

const EntityPath PBridgeMib::Dot1Dtpportoverflowtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PBridgeMib::Dot1Dtpportoverflowtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dTpPortOverflowEntry")
    {
        for(auto const & c : dot1dtpportoverflowentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry>();
        c->parent = this;
        dot1dtpportoverflowentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBridgeMib::Dot1Dtpportoverflowtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1dtpportoverflowentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PBridgeMib::Dot1Dtpportoverflowtable::set_value(const std::string & value_path, std::string value)
{
}

PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry::Dot1Dtpportoverflowentry()
    :
    dot1dtpport{YType::str, "dot1dTpPort"},
    dot1dtpportinoverflowdiscards{YType::uint32, "dot1dTpPortInOverflowDiscards"},
    dot1dtpportinoverflowframes{YType::uint32, "dot1dTpPortInOverflowFrames"},
    dot1dtpportoutoverflowframes{YType::uint32, "dot1dTpPortOutOverflowFrames"}
{
    yang_name = "dot1dTpPortOverflowEntry"; yang_parent_name = "dot1dTpPortOverflowTable";
}

PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry::~Dot1Dtpportoverflowentry()
{
}

bool PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry::has_data() const
{
    return dot1dtpport.is_set
	|| dot1dtpportinoverflowdiscards.is_set
	|| dot1dtpportinoverflowframes.is_set
	|| dot1dtpportoutoverflowframes.is_set;
}

bool PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dtpport.operation)
	|| is_set(dot1dtpportinoverflowdiscards.operation)
	|| is_set(dot1dtpportinoverflowframes.operation)
	|| is_set(dot1dtpportoutoverflowframes.operation);
}

std::string PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpPortOverflowEntry" <<"[dot1dTpPort='" <<dot1dtpport <<"']";

    return path_buffer.str();

}

const EntityPath PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/dot1dTpPortOverflowTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dtpport.is_set || is_set(dot1dtpport.operation)) leaf_name_data.push_back(dot1dtpport.get_name_leafdata());
    if (dot1dtpportinoverflowdiscards.is_set || is_set(dot1dtpportinoverflowdiscards.operation)) leaf_name_data.push_back(dot1dtpportinoverflowdiscards.get_name_leafdata());
    if (dot1dtpportinoverflowframes.is_set || is_set(dot1dtpportinoverflowframes.operation)) leaf_name_data.push_back(dot1dtpportinoverflowframes.get_name_leafdata());
    if (dot1dtpportoutoverflowframes.is_set || is_set(dot1dtpportoutoverflowframes.operation)) leaf_name_data.push_back(dot1dtpportoutoverflowframes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dTpPort")
    {
        dot1dtpport = value;
    }
    if(value_path == "dot1dTpPortInOverflowDiscards")
    {
        dot1dtpportinoverflowdiscards = value;
    }
    if(value_path == "dot1dTpPortInOverflowFrames")
    {
        dot1dtpportinoverflowframes = value;
    }
    if(value_path == "dot1dTpPortOutOverflowFrames")
    {
        dot1dtpportoutoverflowframes = value;
    }
}

PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregentable()
{
    yang_name = "dot1dUserPriorityRegenTable"; yang_parent_name = "P-BRIDGE-MIB";
}

PBridgeMib::Dot1Duserpriorityregentable::~Dot1Duserpriorityregentable()
{
}

bool PBridgeMib::Dot1Duserpriorityregentable::has_data() const
{
    for (std::size_t index=0; index<dot1duserpriorityregenentry.size(); index++)
    {
        if(dot1duserpriorityregenentry[index]->has_data())
            return true;
    }
    return false;
}

bool PBridgeMib::Dot1Duserpriorityregentable::has_operation() const
{
    for (std::size_t index=0; index<dot1duserpriorityregenentry.size(); index++)
    {
        if(dot1duserpriorityregenentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PBridgeMib::Dot1Duserpriorityregentable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dUserPriorityRegenTable";

    return path_buffer.str();

}

const EntityPath PBridgeMib::Dot1Duserpriorityregentable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PBridgeMib::Dot1Duserpriorityregentable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dUserPriorityRegenEntry")
    {
        for(auto const & c : dot1duserpriorityregenentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry>();
        c->parent = this;
        dot1duserpriorityregenentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBridgeMib::Dot1Duserpriorityregentable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1duserpriorityregenentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PBridgeMib::Dot1Duserpriorityregentable::set_value(const std::string & value_path, std::string value)
{
}

PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry::Dot1Duserpriorityregenentry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    dot1duserpriority{YType::int32, "dot1dUserPriority"},
    dot1dregenuserpriority{YType::int32, "dot1dRegenUserPriority"}
{
    yang_name = "dot1dUserPriorityRegenEntry"; yang_parent_name = "dot1dUserPriorityRegenTable";
}

PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry::~Dot1Duserpriorityregenentry()
{
}

bool PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry::has_data() const
{
    return dot1dbaseport.is_set
	|| dot1duserpriority.is_set
	|| dot1dregenuserpriority.is_set;
}

bool PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dbaseport.operation)
	|| is_set(dot1duserpriority.operation)
	|| is_set(dot1dregenuserpriority.operation);
}

std::string PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dUserPriorityRegenEntry" <<"[dot1dBasePort='" <<dot1dbaseport <<"']" <<"[dot1dUserPriority='" <<dot1duserpriority <<"']";

    return path_buffer.str();

}

const EntityPath PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/dot1dUserPriorityRegenTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.operation)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1duserpriority.is_set || is_set(dot1duserpriority.operation)) leaf_name_data.push_back(dot1duserpriority.get_name_leafdata());
    if (dot1dregenuserpriority.is_set || is_set(dot1dregenuserpriority.operation)) leaf_name_data.push_back(dot1dregenuserpriority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
    }
    if(value_path == "dot1dUserPriority")
    {
        dot1duserpriority = value;
    }
    if(value_path == "dot1dRegenUserPriority")
    {
        dot1dregenuserpriority = value;
    }
}

PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclasstable()
{
    yang_name = "dot1dTrafficClassTable"; yang_parent_name = "P-BRIDGE-MIB";
}

PBridgeMib::Dot1Dtrafficclasstable::~Dot1Dtrafficclasstable()
{
}

bool PBridgeMib::Dot1Dtrafficclasstable::has_data() const
{
    for (std::size_t index=0; index<dot1dtrafficclassentry.size(); index++)
    {
        if(dot1dtrafficclassentry[index]->has_data())
            return true;
    }
    return false;
}

bool PBridgeMib::Dot1Dtrafficclasstable::has_operation() const
{
    for (std::size_t index=0; index<dot1dtrafficclassentry.size(); index++)
    {
        if(dot1dtrafficclassentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PBridgeMib::Dot1Dtrafficclasstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTrafficClassTable";

    return path_buffer.str();

}

const EntityPath PBridgeMib::Dot1Dtrafficclasstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PBridgeMib::Dot1Dtrafficclasstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dTrafficClassEntry")
    {
        for(auto const & c : dot1dtrafficclassentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry>();
        c->parent = this;
        dot1dtrafficclassentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBridgeMib::Dot1Dtrafficclasstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1dtrafficclassentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PBridgeMib::Dot1Dtrafficclasstable::set_value(const std::string & value_path, std::string value)
{
}

PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry::Dot1Dtrafficclassentry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    dot1dtrafficclasspriority{YType::int32, "dot1dTrafficClassPriority"},
    dot1dtrafficclass{YType::int32, "dot1dTrafficClass"}
{
    yang_name = "dot1dTrafficClassEntry"; yang_parent_name = "dot1dTrafficClassTable";
}

PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry::~Dot1Dtrafficclassentry()
{
}

bool PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry::has_data() const
{
    return dot1dbaseport.is_set
	|| dot1dtrafficclasspriority.is_set
	|| dot1dtrafficclass.is_set;
}

bool PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dbaseport.operation)
	|| is_set(dot1dtrafficclasspriority.operation)
	|| is_set(dot1dtrafficclass.operation);
}

std::string PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTrafficClassEntry" <<"[dot1dBasePort='" <<dot1dbaseport <<"']" <<"[dot1dTrafficClassPriority='" <<dot1dtrafficclasspriority <<"']";

    return path_buffer.str();

}

const EntityPath PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/dot1dTrafficClassTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.operation)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1dtrafficclasspriority.is_set || is_set(dot1dtrafficclasspriority.operation)) leaf_name_data.push_back(dot1dtrafficclasspriority.get_name_leafdata());
    if (dot1dtrafficclass.is_set || is_set(dot1dtrafficclass.operation)) leaf_name_data.push_back(dot1dtrafficclass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
    }
    if(value_path == "dot1dTrafficClassPriority")
    {
        dot1dtrafficclasspriority = value;
    }
    if(value_path == "dot1dTrafficClass")
    {
        dot1dtrafficclass = value;
    }
}

PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccessprioritytable()
{
    yang_name = "dot1dPortOutboundAccessPriorityTable"; yang_parent_name = "P-BRIDGE-MIB";
}

PBridgeMib::Dot1Dportoutboundaccessprioritytable::~Dot1Dportoutboundaccessprioritytable()
{
}

bool PBridgeMib::Dot1Dportoutboundaccessprioritytable::has_data() const
{
    for (std::size_t index=0; index<dot1dportoutboundaccesspriorityentry.size(); index++)
    {
        if(dot1dportoutboundaccesspriorityentry[index]->has_data())
            return true;
    }
    return false;
}

bool PBridgeMib::Dot1Dportoutboundaccessprioritytable::has_operation() const
{
    for (std::size_t index=0; index<dot1dportoutboundaccesspriorityentry.size(); index++)
    {
        if(dot1dportoutboundaccesspriorityentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PBridgeMib::Dot1Dportoutboundaccessprioritytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dPortOutboundAccessPriorityTable";

    return path_buffer.str();

}

const EntityPath PBridgeMib::Dot1Dportoutboundaccessprioritytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PBridgeMib::Dot1Dportoutboundaccessprioritytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dPortOutboundAccessPriorityEntry")
    {
        for(auto const & c : dot1dportoutboundaccesspriorityentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry>();
        c->parent = this;
        dot1dportoutboundaccesspriorityentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBridgeMib::Dot1Dportoutboundaccessprioritytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1dportoutboundaccesspriorityentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PBridgeMib::Dot1Dportoutboundaccessprioritytable::set_value(const std::string & value_path, std::string value)
{
}

PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry::Dot1Dportoutboundaccesspriorityentry()
    :
    dot1dbaseport{YType::str, "dot1dBasePort"},
    dot1dregenuserpriority{YType::str, "dot1dRegenUserPriority"},
    dot1dportoutboundaccesspriority{YType::int32, "dot1dPortOutboundAccessPriority"}
{
    yang_name = "dot1dPortOutboundAccessPriorityEntry"; yang_parent_name = "dot1dPortOutboundAccessPriorityTable";
}

PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry::~Dot1Dportoutboundaccesspriorityentry()
{
}

bool PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry::has_data() const
{
    return dot1dbaseport.is_set
	|| dot1dregenuserpriority.is_set
	|| dot1dportoutboundaccesspriority.is_set;
}

bool PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dbaseport.operation)
	|| is_set(dot1dregenuserpriority.operation)
	|| is_set(dot1dportoutboundaccesspriority.operation);
}

std::string PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dPortOutboundAccessPriorityEntry" <<"[dot1dBasePort='" <<dot1dbaseport <<"']" <<"[dot1dRegenUserPriority='" <<dot1dregenuserpriority <<"']";

    return path_buffer.str();

}

const EntityPath PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "P-BRIDGE-MIB:P-BRIDGE-MIB/dot1dPortOutboundAccessPriorityTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.operation)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1dregenuserpriority.is_set || is_set(dot1dregenuserpriority.operation)) leaf_name_data.push_back(dot1dregenuserpriority.get_name_leafdata());
    if (dot1dportoutboundaccesspriority.is_set || is_set(dot1dportoutboundaccesspriority.operation)) leaf_name_data.push_back(dot1dportoutboundaccesspriority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
    }
    if(value_path == "dot1dRegenUserPriority")
    {
        dot1dregenuserpriority = value;
    }
    if(value_path == "dot1dPortOutboundAccessPriority")
    {
        dot1dportoutboundaccesspriority = value;
    }
}

const Enum::YLeaf EnabledstatusEnum::enabled {1, "enabled"};
const Enum::YLeaf EnabledstatusEnum::disabled {2, "disabled"};


}
}

