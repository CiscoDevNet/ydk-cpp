
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "INT_SERV_MIB.hpp"

namespace ydk {
namespace INT_SERV_MIB {

IntServMib::IntServMib()
    :
    intsrvflowtable(std::make_shared<IntServMib::Intsrvflowtable>())
	,intsrvgenobjects(std::make_shared<IntServMib::Intsrvgenobjects>())
	,intsrvifattribtable(std::make_shared<IntServMib::Intsrvifattribtable>())
{
    intsrvflowtable->parent = this;

    intsrvgenobjects->parent = this;

    intsrvifattribtable->parent = this;

    yang_name = "INT-SERV-MIB"; yang_parent_name = "INT-SERV-MIB";
}

IntServMib::~IntServMib()
{
}

bool IntServMib::has_data() const
{
    return (intsrvflowtable !=  nullptr && intsrvflowtable->has_data())
	|| (intsrvgenobjects !=  nullptr && intsrvgenobjects->has_data())
	|| (intsrvifattribtable !=  nullptr && intsrvifattribtable->has_data());
}

bool IntServMib::has_operation() const
{
    return is_set(operation)
	|| (intsrvflowtable !=  nullptr && intsrvflowtable->has_operation())
	|| (intsrvgenobjects !=  nullptr && intsrvgenobjects->has_operation())
	|| (intsrvifattribtable !=  nullptr && intsrvifattribtable->has_operation());
}

std::string IntServMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "INT-SERV-MIB:INT-SERV-MIB";

    return path_buffer.str();

}

const EntityPath IntServMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> IntServMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intSrvFlowTable")
    {
        if(intsrvflowtable == nullptr)
        {
            intsrvflowtable = std::make_shared<IntServMib::Intsrvflowtable>();
        }
        return intsrvflowtable;
    }

    if(child_yang_name == "intSrvGenObjects")
    {
        if(intsrvgenobjects == nullptr)
        {
            intsrvgenobjects = std::make_shared<IntServMib::Intsrvgenobjects>();
        }
        return intsrvgenobjects;
    }

    if(child_yang_name == "intSrvIfAttribTable")
    {
        if(intsrvifattribtable == nullptr)
        {
            intsrvifattribtable = std::make_shared<IntServMib::Intsrvifattribtable>();
        }
        return intsrvifattribtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IntServMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intsrvflowtable != nullptr)
    {
        children["intSrvFlowTable"] = intsrvflowtable;
    }

    if(intsrvgenobjects != nullptr)
    {
        children["intSrvGenObjects"] = intsrvgenobjects;
    }

    if(intsrvifattribtable != nullptr)
    {
        children["intSrvIfAttribTable"] = intsrvifattribtable;
    }

    return children;
}

void IntServMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> IntServMib::clone_ptr() const
{
    return std::make_shared<IntServMib>();
}

std::string IntServMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IntServMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IntServMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

IntServMib::Intsrvgenobjects::Intsrvgenobjects()
    :
    intsrvflownewindex{YType::int32, "intSrvFlowNewIndex"}
{
    yang_name = "intSrvGenObjects"; yang_parent_name = "INT-SERV-MIB";
}

IntServMib::Intsrvgenobjects::~Intsrvgenobjects()
{
}

bool IntServMib::Intsrvgenobjects::has_data() const
{
    return intsrvflownewindex.is_set;
}

bool IntServMib::Intsrvgenobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(intsrvflownewindex.operation);
}

std::string IntServMib::Intsrvgenobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intSrvGenObjects";

    return path_buffer.str();

}

const EntityPath IntServMib::Intsrvgenobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "INT-SERV-MIB:INT-SERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intsrvflownewindex.is_set || is_set(intsrvflownewindex.operation)) leaf_name_data.push_back(intsrvflownewindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IntServMib::Intsrvgenobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IntServMib::Intsrvgenobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IntServMib::Intsrvgenobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "intSrvFlowNewIndex")
    {
        intsrvflownewindex = value;
    }
}

IntServMib::Intsrvifattribtable::Intsrvifattribtable()
{
    yang_name = "intSrvIfAttribTable"; yang_parent_name = "INT-SERV-MIB";
}

IntServMib::Intsrvifattribtable::~Intsrvifattribtable()
{
}

bool IntServMib::Intsrvifattribtable::has_data() const
{
    for (std::size_t index=0; index<intsrvifattribentry.size(); index++)
    {
        if(intsrvifattribentry[index]->has_data())
            return true;
    }
    return false;
}

bool IntServMib::Intsrvifattribtable::has_operation() const
{
    for (std::size_t index=0; index<intsrvifattribentry.size(); index++)
    {
        if(intsrvifattribentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IntServMib::Intsrvifattribtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intSrvIfAttribTable";

    return path_buffer.str();

}

const EntityPath IntServMib::Intsrvifattribtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "INT-SERV-MIB:INT-SERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IntServMib::Intsrvifattribtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intSrvIfAttribEntry")
    {
        for(auto const & c : intsrvifattribentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IntServMib::Intsrvifattribtable::Intsrvifattribentry>();
        c->parent = this;
        intsrvifattribentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IntServMib::Intsrvifattribtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : intsrvifattribentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IntServMib::Intsrvifattribtable::set_value(const std::string & value_path, std::string value)
{
}

IntServMib::Intsrvifattribtable::Intsrvifattribentry::Intsrvifattribentry()
    :
    ifindex{YType::str, "ifIndex"},
    intsrvifattriballocatedbits{YType::int32, "intSrvIfAttribAllocatedBits"},
    intsrvifattriballocatedbuffer{YType::int32, "intSrvIfAttribAllocatedBuffer"},
    intsrvifattribflows{YType::uint32, "intSrvIfAttribFlows"},
    intsrvifattribmaxallocatedbits{YType::int32, "intSrvIfAttribMaxAllocatedBits"},
    intsrvifattribpropagationdelay{YType::int32, "intSrvIfAttribPropagationDelay"},
    intsrvifattribstatus{YType::enumeration, "intSrvIfAttribStatus"}
{
    yang_name = "intSrvIfAttribEntry"; yang_parent_name = "intSrvIfAttribTable";
}

IntServMib::Intsrvifattribtable::Intsrvifattribentry::~Intsrvifattribentry()
{
}

bool IntServMib::Intsrvifattribtable::Intsrvifattribentry::has_data() const
{
    return ifindex.is_set
	|| intsrvifattriballocatedbits.is_set
	|| intsrvifattriballocatedbuffer.is_set
	|| intsrvifattribflows.is_set
	|| intsrvifattribmaxallocatedbits.is_set
	|| intsrvifattribpropagationdelay.is_set
	|| intsrvifattribstatus.is_set;
}

bool IntServMib::Intsrvifattribtable::Intsrvifattribentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(intsrvifattriballocatedbits.operation)
	|| is_set(intsrvifattriballocatedbuffer.operation)
	|| is_set(intsrvifattribflows.operation)
	|| is_set(intsrvifattribmaxallocatedbits.operation)
	|| is_set(intsrvifattribpropagationdelay.operation)
	|| is_set(intsrvifattribstatus.operation);
}

std::string IntServMib::Intsrvifattribtable::Intsrvifattribentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intSrvIfAttribEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath IntServMib::Intsrvifattribtable::Intsrvifattribentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "INT-SERV-MIB:INT-SERV-MIB/intSrvIfAttribTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (intsrvifattriballocatedbits.is_set || is_set(intsrvifattriballocatedbits.operation)) leaf_name_data.push_back(intsrvifattriballocatedbits.get_name_leafdata());
    if (intsrvifattriballocatedbuffer.is_set || is_set(intsrvifattriballocatedbuffer.operation)) leaf_name_data.push_back(intsrvifattriballocatedbuffer.get_name_leafdata());
    if (intsrvifattribflows.is_set || is_set(intsrvifattribflows.operation)) leaf_name_data.push_back(intsrvifattribflows.get_name_leafdata());
    if (intsrvifattribmaxallocatedbits.is_set || is_set(intsrvifattribmaxallocatedbits.operation)) leaf_name_data.push_back(intsrvifattribmaxallocatedbits.get_name_leafdata());
    if (intsrvifattribpropagationdelay.is_set || is_set(intsrvifattribpropagationdelay.operation)) leaf_name_data.push_back(intsrvifattribpropagationdelay.get_name_leafdata());
    if (intsrvifattribstatus.is_set || is_set(intsrvifattribstatus.operation)) leaf_name_data.push_back(intsrvifattribstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IntServMib::Intsrvifattribtable::Intsrvifattribentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IntServMib::Intsrvifattribtable::Intsrvifattribentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IntServMib::Intsrvifattribtable::Intsrvifattribentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "intSrvIfAttribAllocatedBits")
    {
        intsrvifattriballocatedbits = value;
    }
    if(value_path == "intSrvIfAttribAllocatedBuffer")
    {
        intsrvifattriballocatedbuffer = value;
    }
    if(value_path == "intSrvIfAttribFlows")
    {
        intsrvifattribflows = value;
    }
    if(value_path == "intSrvIfAttribMaxAllocatedBits")
    {
        intsrvifattribmaxallocatedbits = value;
    }
    if(value_path == "intSrvIfAttribPropagationDelay")
    {
        intsrvifattribpropagationdelay = value;
    }
    if(value_path == "intSrvIfAttribStatus")
    {
        intsrvifattribstatus = value;
    }
}

IntServMib::Intsrvflowtable::Intsrvflowtable()
{
    yang_name = "intSrvFlowTable"; yang_parent_name = "INT-SERV-MIB";
}

IntServMib::Intsrvflowtable::~Intsrvflowtable()
{
}

bool IntServMib::Intsrvflowtable::has_data() const
{
    for (std::size_t index=0; index<intsrvflowentry.size(); index++)
    {
        if(intsrvflowentry[index]->has_data())
            return true;
    }
    return false;
}

bool IntServMib::Intsrvflowtable::has_operation() const
{
    for (std::size_t index=0; index<intsrvflowentry.size(); index++)
    {
        if(intsrvflowentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IntServMib::Intsrvflowtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intSrvFlowTable";

    return path_buffer.str();

}

const EntityPath IntServMib::Intsrvflowtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "INT-SERV-MIB:INT-SERV-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IntServMib::Intsrvflowtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intSrvFlowEntry")
    {
        for(auto const & c : intsrvflowentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IntServMib::Intsrvflowtable::Intsrvflowentry>();
        c->parent = this;
        intsrvflowentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IntServMib::Intsrvflowtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : intsrvflowentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IntServMib::Intsrvflowtable::set_value(const std::string & value_path, std::string value)
{
}

IntServMib::Intsrvflowtable::Intsrvflowentry::Intsrvflowentry()
    :
    intsrvflownumber{YType::int32, "intSrvFlowNumber"},
    intsrvflowbesteffort{YType::uint32, "intSrvFlowBestEffort"},
    intsrvflowburst{YType::int32, "intSrvFlowBurst"},
    intsrvflowdestaddr{YType::str, "intSrvFlowDestAddr"},
    intsrvflowdestaddrlength{YType::int32, "intSrvFlowDestAddrLength"},
    intsrvflowdestport{YType::str, "intSrvFlowDestPort"},
    intsrvflowdiscard{YType::boolean, "intSrvFlowDiscard"},
    intsrvflowflowid{YType::int32, "intSrvFlowFlowId"},
    intsrvflowifaddr{YType::str, "intSrvFlowIfAddr"},
    intsrvflowinterface{YType::int32, "intSrvFlowInterface"},
    intsrvflowmaxtu{YType::int32, "intSrvFlowMaxTU"},
    intsrvflowmintu{YType::int32, "intSrvFlowMinTU"},
    intsrvfloworder{YType::int32, "intSrvFlowOrder"},
    intsrvflowowner{YType::enumeration, "intSrvFlowOwner"},
    intsrvflowpoliced{YType::uint32, "intSrvFlowPoliced"},
    intsrvflowport{YType::str, "intSrvFlowPort"},
    intsrvflowprotocol{YType::int32, "intSrvFlowProtocol"},
    intsrvflowqueue{YType::int32, "intSrvFlowQueue"},
    intsrvflowrate{YType::int32, "intSrvFlowRate"},
    intsrvflowsenderaddr{YType::str, "intSrvFlowSenderAddr"},
    intsrvflowsenderaddrlength{YType::int32, "intSrvFlowSenderAddrLength"},
    intsrvflowservice{YType::enumeration, "intSrvFlowService"},
    intsrvflowstatus{YType::enumeration, "intSrvFlowStatus"},
    intsrvflowtype{YType::int32, "intSrvFlowType"},
    intsrvflowweight{YType::int32, "intSrvFlowWeight"}
{
    yang_name = "intSrvFlowEntry"; yang_parent_name = "intSrvFlowTable";
}

IntServMib::Intsrvflowtable::Intsrvflowentry::~Intsrvflowentry()
{
}

bool IntServMib::Intsrvflowtable::Intsrvflowentry::has_data() const
{
    return intsrvflownumber.is_set
	|| intsrvflowbesteffort.is_set
	|| intsrvflowburst.is_set
	|| intsrvflowdestaddr.is_set
	|| intsrvflowdestaddrlength.is_set
	|| intsrvflowdestport.is_set
	|| intsrvflowdiscard.is_set
	|| intsrvflowflowid.is_set
	|| intsrvflowifaddr.is_set
	|| intsrvflowinterface.is_set
	|| intsrvflowmaxtu.is_set
	|| intsrvflowmintu.is_set
	|| intsrvfloworder.is_set
	|| intsrvflowowner.is_set
	|| intsrvflowpoliced.is_set
	|| intsrvflowport.is_set
	|| intsrvflowprotocol.is_set
	|| intsrvflowqueue.is_set
	|| intsrvflowrate.is_set
	|| intsrvflowsenderaddr.is_set
	|| intsrvflowsenderaddrlength.is_set
	|| intsrvflowservice.is_set
	|| intsrvflowstatus.is_set
	|| intsrvflowtype.is_set
	|| intsrvflowweight.is_set;
}

bool IntServMib::Intsrvflowtable::Intsrvflowentry::has_operation() const
{
    return is_set(operation)
	|| is_set(intsrvflownumber.operation)
	|| is_set(intsrvflowbesteffort.operation)
	|| is_set(intsrvflowburst.operation)
	|| is_set(intsrvflowdestaddr.operation)
	|| is_set(intsrvflowdestaddrlength.operation)
	|| is_set(intsrvflowdestport.operation)
	|| is_set(intsrvflowdiscard.operation)
	|| is_set(intsrvflowflowid.operation)
	|| is_set(intsrvflowifaddr.operation)
	|| is_set(intsrvflowinterface.operation)
	|| is_set(intsrvflowmaxtu.operation)
	|| is_set(intsrvflowmintu.operation)
	|| is_set(intsrvfloworder.operation)
	|| is_set(intsrvflowowner.operation)
	|| is_set(intsrvflowpoliced.operation)
	|| is_set(intsrvflowport.operation)
	|| is_set(intsrvflowprotocol.operation)
	|| is_set(intsrvflowqueue.operation)
	|| is_set(intsrvflowrate.operation)
	|| is_set(intsrvflowsenderaddr.operation)
	|| is_set(intsrvflowsenderaddrlength.operation)
	|| is_set(intsrvflowservice.operation)
	|| is_set(intsrvflowstatus.operation)
	|| is_set(intsrvflowtype.operation)
	|| is_set(intsrvflowweight.operation);
}

std::string IntServMib::Intsrvflowtable::Intsrvflowentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intSrvFlowEntry" <<"[intSrvFlowNumber='" <<intsrvflownumber <<"']";

    return path_buffer.str();

}

const EntityPath IntServMib::Intsrvflowtable::Intsrvflowentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "INT-SERV-MIB:INT-SERV-MIB/intSrvFlowTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intsrvflownumber.is_set || is_set(intsrvflownumber.operation)) leaf_name_data.push_back(intsrvflownumber.get_name_leafdata());
    if (intsrvflowbesteffort.is_set || is_set(intsrvflowbesteffort.operation)) leaf_name_data.push_back(intsrvflowbesteffort.get_name_leafdata());
    if (intsrvflowburst.is_set || is_set(intsrvflowburst.operation)) leaf_name_data.push_back(intsrvflowburst.get_name_leafdata());
    if (intsrvflowdestaddr.is_set || is_set(intsrvflowdestaddr.operation)) leaf_name_data.push_back(intsrvflowdestaddr.get_name_leafdata());
    if (intsrvflowdestaddrlength.is_set || is_set(intsrvflowdestaddrlength.operation)) leaf_name_data.push_back(intsrvflowdestaddrlength.get_name_leafdata());
    if (intsrvflowdestport.is_set || is_set(intsrvflowdestport.operation)) leaf_name_data.push_back(intsrvflowdestport.get_name_leafdata());
    if (intsrvflowdiscard.is_set || is_set(intsrvflowdiscard.operation)) leaf_name_data.push_back(intsrvflowdiscard.get_name_leafdata());
    if (intsrvflowflowid.is_set || is_set(intsrvflowflowid.operation)) leaf_name_data.push_back(intsrvflowflowid.get_name_leafdata());
    if (intsrvflowifaddr.is_set || is_set(intsrvflowifaddr.operation)) leaf_name_data.push_back(intsrvflowifaddr.get_name_leafdata());
    if (intsrvflowinterface.is_set || is_set(intsrvflowinterface.operation)) leaf_name_data.push_back(intsrvflowinterface.get_name_leafdata());
    if (intsrvflowmaxtu.is_set || is_set(intsrvflowmaxtu.operation)) leaf_name_data.push_back(intsrvflowmaxtu.get_name_leafdata());
    if (intsrvflowmintu.is_set || is_set(intsrvflowmintu.operation)) leaf_name_data.push_back(intsrvflowmintu.get_name_leafdata());
    if (intsrvfloworder.is_set || is_set(intsrvfloworder.operation)) leaf_name_data.push_back(intsrvfloworder.get_name_leafdata());
    if (intsrvflowowner.is_set || is_set(intsrvflowowner.operation)) leaf_name_data.push_back(intsrvflowowner.get_name_leafdata());
    if (intsrvflowpoliced.is_set || is_set(intsrvflowpoliced.operation)) leaf_name_data.push_back(intsrvflowpoliced.get_name_leafdata());
    if (intsrvflowport.is_set || is_set(intsrvflowport.operation)) leaf_name_data.push_back(intsrvflowport.get_name_leafdata());
    if (intsrvflowprotocol.is_set || is_set(intsrvflowprotocol.operation)) leaf_name_data.push_back(intsrvflowprotocol.get_name_leafdata());
    if (intsrvflowqueue.is_set || is_set(intsrvflowqueue.operation)) leaf_name_data.push_back(intsrvflowqueue.get_name_leafdata());
    if (intsrvflowrate.is_set || is_set(intsrvflowrate.operation)) leaf_name_data.push_back(intsrvflowrate.get_name_leafdata());
    if (intsrvflowsenderaddr.is_set || is_set(intsrvflowsenderaddr.operation)) leaf_name_data.push_back(intsrvflowsenderaddr.get_name_leafdata());
    if (intsrvflowsenderaddrlength.is_set || is_set(intsrvflowsenderaddrlength.operation)) leaf_name_data.push_back(intsrvflowsenderaddrlength.get_name_leafdata());
    if (intsrvflowservice.is_set || is_set(intsrvflowservice.operation)) leaf_name_data.push_back(intsrvflowservice.get_name_leafdata());
    if (intsrvflowstatus.is_set || is_set(intsrvflowstatus.operation)) leaf_name_data.push_back(intsrvflowstatus.get_name_leafdata());
    if (intsrvflowtype.is_set || is_set(intsrvflowtype.operation)) leaf_name_data.push_back(intsrvflowtype.get_name_leafdata());
    if (intsrvflowweight.is_set || is_set(intsrvflowweight.operation)) leaf_name_data.push_back(intsrvflowweight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IntServMib::Intsrvflowtable::Intsrvflowentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IntServMib::Intsrvflowtable::Intsrvflowentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IntServMib::Intsrvflowtable::Intsrvflowentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "intSrvFlowNumber")
    {
        intsrvflownumber = value;
    }
    if(value_path == "intSrvFlowBestEffort")
    {
        intsrvflowbesteffort = value;
    }
    if(value_path == "intSrvFlowBurst")
    {
        intsrvflowburst = value;
    }
    if(value_path == "intSrvFlowDestAddr")
    {
        intsrvflowdestaddr = value;
    }
    if(value_path == "intSrvFlowDestAddrLength")
    {
        intsrvflowdestaddrlength = value;
    }
    if(value_path == "intSrvFlowDestPort")
    {
        intsrvflowdestport = value;
    }
    if(value_path == "intSrvFlowDiscard")
    {
        intsrvflowdiscard = value;
    }
    if(value_path == "intSrvFlowFlowId")
    {
        intsrvflowflowid = value;
    }
    if(value_path == "intSrvFlowIfAddr")
    {
        intsrvflowifaddr = value;
    }
    if(value_path == "intSrvFlowInterface")
    {
        intsrvflowinterface = value;
    }
    if(value_path == "intSrvFlowMaxTU")
    {
        intsrvflowmaxtu = value;
    }
    if(value_path == "intSrvFlowMinTU")
    {
        intsrvflowmintu = value;
    }
    if(value_path == "intSrvFlowOrder")
    {
        intsrvfloworder = value;
    }
    if(value_path == "intSrvFlowOwner")
    {
        intsrvflowowner = value;
    }
    if(value_path == "intSrvFlowPoliced")
    {
        intsrvflowpoliced = value;
    }
    if(value_path == "intSrvFlowPort")
    {
        intsrvflowport = value;
    }
    if(value_path == "intSrvFlowProtocol")
    {
        intsrvflowprotocol = value;
    }
    if(value_path == "intSrvFlowQueue")
    {
        intsrvflowqueue = value;
    }
    if(value_path == "intSrvFlowRate")
    {
        intsrvflowrate = value;
    }
    if(value_path == "intSrvFlowSenderAddr")
    {
        intsrvflowsenderaddr = value;
    }
    if(value_path == "intSrvFlowSenderAddrLength")
    {
        intsrvflowsenderaddrlength = value;
    }
    if(value_path == "intSrvFlowService")
    {
        intsrvflowservice = value;
    }
    if(value_path == "intSrvFlowStatus")
    {
        intsrvflowstatus = value;
    }
    if(value_path == "intSrvFlowType")
    {
        intsrvflowtype = value;
    }
    if(value_path == "intSrvFlowWeight")
    {
        intsrvflowweight = value;
    }
}

const Enum::YLeaf QosserviceEnum::bestEffort {1, "bestEffort"};
const Enum::YLeaf QosserviceEnum::guaranteedDelay {2, "guaranteedDelay"};
const Enum::YLeaf QosserviceEnum::controlledLoad {5, "controlledLoad"};

const Enum::YLeaf IntServMib::Intsrvflowtable::Intsrvflowentry::IntsrvflowownerEnum::other {1, "other"};
const Enum::YLeaf IntServMib::Intsrvflowtable::Intsrvflowentry::IntsrvflowownerEnum::rsvp {2, "rsvp"};
const Enum::YLeaf IntServMib::Intsrvflowtable::Intsrvflowentry::IntsrvflowownerEnum::management {3, "management"};


}
}

